{
//=========Macro generated from canvas: c1_n3/SuperK - 2
//=========  (Tue May 21 04:01:48 2019) by ROOT version5.34/18
   TCanvas *c1_n3 = new TCanvas("c1_n3", "SuperK - 2",1,1,700,500);
   gStyle->SetOptStat(0);
   c1_n3->SetHighLightColor(2);
   c1_n3->Range(5.90625,0.2690103,17.59375,0.6778422);
   c1_n3->SetFillColor(0);
   c1_n3->SetBorderMode(0);
   c1_n3->SetBorderSize(2);
   c1_n3->SetFrameBorderMode(0);
   c1_n3->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraph *graph = new TGraph(16);
   graph->SetName("cham2");
   graph->SetTitle("cham2");
   graph->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,7.5,0.3983465123);
   graph->SetPoint(1,8,0.3964928385);
   graph->SetPoint(2,8.5,0.3948799537);
   graph->SetPoint(3,9,0.3934791791);
   graph->SetPoint(4,9.5,0.392262668);
   graph->SetPoint(5,10,0.3912041427);
   graph->SetPoint(6,10.5,0.3902796764);
   graph->SetPoint(7,11,0.3894683218);
   graph->SetPoint(8,11.5,0.3887524644);
   graph->SetPoint(9,12,0.3881178911);
   graph->SetPoint(10,12.5,0.3875536397);
   graph->SetPoint(11,13,0.3870517608);
   graph->SetPoint(12,13.5,0.3866071036);
   graph->SetPoint(13,14,0.3860791469);
   graph->SetPoint(14,15,0.3855225217);
   graph->SetPoint(15,16,0.385518324);
   
   TH1F *Graph_cham23 = new TH1F("Graph_cham23","cham2",100,6.65,16.85);
   Graph_cham23->SetMinimum(0.3842355);
   Graph_cham23->SetMaximum(0.3996293);
   Graph_cham23->SetDirectory(0);
   Graph_cham23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_cham23->SetLineColor(ci);
   Graph_cham23->GetXaxis()->SetLabelFont(42);
   Graph_cham23->GetXaxis()->SetLabelSize(0.035);
   Graph_cham23->GetXaxis()->SetTitleSize(0.035);
   Graph_cham23->GetXaxis()->SetTitleFont(42);
   Graph_cham23->GetYaxis()->SetLabelFont(42);
   Graph_cham23->GetYaxis()->SetLabelSize(0.035);
   Graph_cham23->GetYaxis()->SetTitleSize(0.035);
   Graph_cham23->GetYaxis()->SetTitleFont(42);
   Graph_cham23->GetZaxis()->SetLabelFont(42);
   Graph_cham23->GetZaxis()->SetLabelSize(0.035);
   Graph_cham23->GetZaxis()->SetTitleSize(0.035);
   Graph_cham23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_cham23);
   
   multigraph->Add(graph,"lp");
   
   graph = new TGraph(16);
   graph->SetName("ssm2");
   graph->SetTitle("ssm2");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetPoint(0,7.5,0.4007512174);
   graph->SetPoint(1,8,0.3993141487);
   graph->SetPoint(2,8.5,0.3980235503);
   graph->SetPoint(3,9,0.3968564389);
   graph->SetPoint(4,9.5,0.3957917906);
   graph->SetPoint(5,10,0.3948107402);
   graph->SetPoint(6,10.5,0.3938969472);
   graph->SetPoint(7,11,0.3930369095);
   graph->SetPoint(8,11.5,0.39222008);
   graph->SetPoint(9,12,0.3914387568);
   graph->SetPoint(10,12.5,0.3906877955);
   graph->SetPoint(11,13,0.3899642597);
   graph->SetPoint(12,13.5,0.3892671084);
   graph->SetPoint(13,14,0.3883326117);
   graph->SetPoint(14,15,0.3871214096);
   graph->SetPoint(15,16,0.385815702);
   
   TH1F *Graph_ssm24 = new TH1F("Graph_ssm24","ssm2",100,6.65,16.85);
   Graph_ssm24->SetMinimum(0.3843222);
   Graph_ssm24->SetMaximum(0.4022448);
   Graph_ssm24->SetDirectory(0);
   Graph_ssm24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_ssm24->SetLineColor(ci);
   Graph_ssm24->GetXaxis()->SetLabelFont(42);
   Graph_ssm24->GetXaxis()->SetLabelSize(0.035);
   Graph_ssm24->GetXaxis()->SetTitleSize(0.035);
   Graph_ssm24->GetXaxis()->SetTitleFont(42);
   Graph_ssm24->GetYaxis()->SetLabelFont(42);
   Graph_ssm24->GetYaxis()->SetLabelSize(0.035);
   Graph_ssm24->GetYaxis()->SetTitleSize(0.035);
   Graph_ssm24->GetYaxis()->SetTitleFont(42);
   Graph_ssm24->GetZaxis()->SetLabelFont(42);
   Graph_ssm24->GetZaxis()->SetLabelSize(0.035);
   Graph_ssm24->GetZaxis()->SetTitleSize(0.035);
   Graph_ssm24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_ssm24);
   
   multigraph->Add(graph,"lp");
   
   TGraphErrors *gre = new TGraphErrors(16);
   gre->SetName("obs2");
   gre->SetTitle("obs2");
   gre->SetFillColor(1);
   gre->SetFillStyle(3005);
   gre->SetMarkerStyle(31);
   gre->SetPoint(0,7.5,0.4026373);
   gre->SetPointError(0,0,0.03618161);
   gre->SetPoint(1,8,0.4051967);
   gre->SetPointError(1,0,0.02872977);
   gre->SetPoint(2,8.5,0.4083294);
   gre->SetPointError(2,0,0.02669994);
   gre->SetPoint(3,9,0.3977402);
   gre->SetPointError(3,0,0.02621331);
   gre->SetPoint(4,9.5,0.4358075);
   gre->SetPointError(4,0,0.02798237);
   gre->SetPoint(5,10,0.4062355);
   gre->SetPointError(5,0,0.0284149);
   gre->SetPoint(6,10.5,0.4310746);
   gre->SetPointError(6,0,0.03132147);
   gre->SetPoint(7,11,0.4050494);
   gre->SetPointError(7,0,0.0338018);
   gre->SetPoint(8,11.5,0.4107425);
   gre->SetPointError(8,0,0.03532732);
   gre->SetPoint(9,12,0.4252438);
   gre->SetPointError(9,0,0.04118782);
   gre->SetPoint(10,12.5,0.3685259);
   gre->SetPointError(10,0,0.04376581);
   gre->SetPoint(11,13,0.415988);
   gre->SetPointError(11,0,0.05168709);
   gre->SetPoint(12,13.5,0.3844828);
   gre->SetPointError(12,0,0.05738062);
   gre->SetPoint(13,14,0.3962237);
   gre->SetPointError(13,0,0.05406225);
   gre->SetPoint(14,15,0.5038871);
   gre->SetPointError(14,0,0.08287369);
   gre->SetPoint(15,16,0.5251054);
   gre->SetPointError(15,0,0.09698699);
   
   TH1F *Graph_obs22 = new TH1F("Graph_obs22","obs2",100,6.65,16.85);
   Graph_obs22->SetMinimum(0.2950269);
   Graph_obs22->SetMaximum(0.6518256);
   Graph_obs22->SetDirectory(0);
   Graph_obs22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_obs22->SetLineColor(ci);
   Graph_obs22->GetXaxis()->SetLabelFont(42);
   Graph_obs22->GetXaxis()->SetLabelSize(0.035);
   Graph_obs22->GetXaxis()->SetTitleSize(0.035);
   Graph_obs22->GetXaxis()->SetTitleFont(42);
   Graph_obs22->GetYaxis()->SetLabelFont(42);
   Graph_obs22->GetYaxis()->SetLabelSize(0.035);
   Graph_obs22->GetYaxis()->SetTitleSize(0.035);
   Graph_obs22->GetYaxis()->SetTitleFont(42);
   Graph_obs22->GetZaxis()->SetLabelFont(42);
   Graph_obs22->GetZaxis()->SetLabelSize(0.035);
   Graph_obs22->GetZaxis()->SetTitleSize(0.035);
   Graph_obs22->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_obs22);
   
   multigraph->Add(gre,"");
   multigraph->Draw("ap");
   multigraph->GetXaxis()->SetTitle("Energy [MeV]");
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("Observed/SSM (No Oscillation)");
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(132);
   
   TLegend *leg = new TLegend(0.1,0.6,0.35,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("cham2","Vacuum-Enhanced Prediction","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("ssm2","MSW-LMA","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("obs2","Observed","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(31);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   c1_n3->Modified();
   c1_n3->cd();
   c1_n3->SetSelected(c1_n3);
}
