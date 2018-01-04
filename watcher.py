# coding: utf-8
import os
import time
import subprocess

prev_times = {}
t_last_make = 0
# Minimum seconds between makes
COOLDOWN = 10
while True:
    do_make = False
    file_names = subprocess.check_output(["git", "ls-files"]).split('\n')
    # Remove empty strings
    file_names = [x for x in file_names if x]
    times = {x:os.path.getmtime(x) for x in file_names}
    # First make sure no new files were added/removed
    if set(prev_times.keys()) != set(times.keys()):
        do_make = True
    else:
        for key in prev_times.keys():
            t0 = prev_times[key]
            t = times[key]
            if(t0 != t):
                do_make = True
                break
    prev_times = times
    current_time = time.time()
    if (do_make and (current_time - t_last_make > COOLDOWN)):
        print "Doing Make"
        os.system("make")
        t_last_make = current_time
    time.sleep(1)
