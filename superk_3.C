{
//=========Macro generated from canvas: c1_n4/SuperK - 3
//=========  (Tue May 21 04:01:49 2019) by ROOT version5.34/18
   TCanvas *c1_n4 = new TCanvas("c1_n4", "SuperK - 3",1,1,700,500);
   gStyle->SetOptStat(0);
   c1_n4->SetHighLightColor(2);
   c1_n4->Range(2.9375,-0.2055703,18.0625,0.9763426);
   c1_n4->SetFillColor(0);
   c1_n4->SetBorderMode(0);
   c1_n4->SetBorderSize(2);
   c1_n4->SetFrameBorderMode(0);
   c1_n4->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraph *graph = new TGraph(21);
   graph->SetName("cham3");
   graph->SetTitle("cham3");
   graph->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,5,0.4123311057);
   graph->SetPoint(1,5.5,0.4087096633);
   graph->SetPoint(2,6,0.4055519464);
   graph->SetPoint(3,6.5,0.4028327497);
   graph->SetPoint(4,7,0.4005221016);
   graph->SetPoint(5,7.5,0.3985877039);
   graph->SetPoint(6,8,0.3969962177);
   graph->SetPoint(7,8.5,0.3957142235);
   graph->SetPoint(8,9,0.3947091846);
   graph->SetPoint(9,9.5,0.3939503014);
   graph->SetPoint(10,10,0.3934091427);
   graph->SetPoint(11,10.5,0.3930601136);
   graph->SetPoint(12,11,0.3928809087);
   graph->SetPoint(13,11.5,0.392853086);
   graph->SetPoint(14,12,0.3929628794);
   graph->SetPoint(15,12.5,0.3932023883);
   graph->SetPoint(16,13,0.393571344);
   graph->SetPoint(17,13.5,0.3940797531);
   graph->SetPoint(18,14,0.3950844831);
   graph->SetPoint(19,15,0.3973563712);
   graph->SetPoint(20,16,0.4046304445);
   
   TH1F *Graph_cham35 = new TH1F("Graph_cham35","cham3",100,3.9,17.1);
   Graph_cham35->SetMinimum(0.3909053);
   Graph_cham35->SetMaximum(0.4142789);
   Graph_cham35->SetDirectory(0);
   Graph_cham35->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_cham35->SetLineColor(ci);
   Graph_cham35->GetXaxis()->SetLabelFont(42);
   Graph_cham35->GetXaxis()->SetLabelSize(0.035);
   Graph_cham35->GetXaxis()->SetTitleSize(0.035);
   Graph_cham35->GetXaxis()->SetTitleFont(42);
   Graph_cham35->GetYaxis()->SetLabelFont(42);
   Graph_cham35->GetYaxis()->SetLabelSize(0.035);
   Graph_cham35->GetYaxis()->SetTitleSize(0.035);
   Graph_cham35->GetYaxis()->SetTitleFont(42);
   Graph_cham35->GetZaxis()->SetLabelFont(42);
   Graph_cham35->GetZaxis()->SetLabelSize(0.035);
   Graph_cham35->GetZaxis()->SetTitleSize(0.035);
   Graph_cham35->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_cham35);
   
   multigraph->Add(graph,"lp");
   
   graph = new TGraph(21);
   graph->SetName("ssm3");
   graph->SetTitle("ssm3");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetPoint(0,5,0.4115124061);
   graph->SetPoint(1,5.5,0.4089365814);
   graph->SetPoint(2,6,0.4067142321);
   graph->SetPoint(3,6.5,0.4048005867);
   graph->SetPoint(4,7,0.4031555702);
   graph->SetPoint(5,7.5,0.4017440938);
   graph->SetPoint(6,8,0.4005356355);
   graph->SetPoint(7,8.5,0.3995037019);
   graph->SetPoint(8,9,0.3986254363);
   graph->SetPoint(9,9.5,0.3978813477);
   graph->SetPoint(10,10,0.3972550836);
   graph->SetPoint(11,10.5,0.396733248);
   graph->SetPoint(12,11,0.3963053132);
   graph->SetPoint(13,11.5,0.3959636836);
   graph->SetPoint(14,12,0.3957039724);
   graph->SetPoint(15,12.5,0.3955255868);
   graph->SetPoint(16,13,0.395432767);
   graph->SetPoint(17,13.5,0.3954362948);
   graph->SetPoint(18,14,0.3956581051);
   graph->SetPoint(19,15,0.3965701638);
   graph->SetPoint(20,16,0.4007751551);
   
   TH1F *Graph_ssm36 = new TH1F("Graph_ssm36","ssm3",100,3.9,17.1);
   Graph_ssm36->SetMinimum(0.3938248);
   Graph_ssm36->SetMaximum(0.4131204);
   Graph_ssm36->SetDirectory(0);
   Graph_ssm36->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_ssm36->SetLineColor(ci);
   Graph_ssm36->GetXaxis()->SetLabelFont(42);
   Graph_ssm36->GetXaxis()->SetLabelSize(0.035);
   Graph_ssm36->GetXaxis()->SetTitleSize(0.035);
   Graph_ssm36->GetXaxis()->SetTitleFont(42);
   Graph_ssm36->GetYaxis()->SetLabelFont(42);
   Graph_ssm36->GetYaxis()->SetLabelSize(0.035);
   Graph_ssm36->GetYaxis()->SetTitleSize(0.035);
   Graph_ssm36->GetYaxis()->SetTitleFont(42);
   Graph_ssm36->GetZaxis()->SetLabelFont(42);
   Graph_ssm36->GetZaxis()->SetLabelSize(0.035);
   Graph_ssm36->GetZaxis()->SetTitleSize(0.035);
   Graph_ssm36->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_ssm36);
   
   multigraph->Add(graph,"lp");
   
   TGraphErrors *gre = new TGraphErrors(21);
   gre->SetName("obs3");
   gre->SetTitle("obs3");
   gre->SetFillColor(1);
   gre->SetFillStyle(3006);
   gre->SetMarkerStyle(31);
   gre->SetPoint(0,5,0.4330138);
   gre->SetPointError(0,0,0.05745777);
   gre->SetPoint(1,5.5,0.3848586);
   gre->SetPointError(1,0,0.03857396);
   gre->SetPoint(2,6,0.4044584);
   gre->SetPointError(2,0,0.03298101);
   gre->SetPoint(3,6.5,0.4071611);
   gre->SetPointError(3,0,0.02078391);
   gre->SetPoint(4,7,0.4583723);
   gre->SetPointError(4,0,0.02188327);
   gre->SetPoint(5,7.5,0.3981978);
   gre->SetPointError(5,0,0.02163512);
   gre->SetPoint(6,8,0.4230585);
   gre->SetPointError(6,0,0.02196923);
   gre->SetPoint(7,8.5,0.4240641);
   gre->SetPointError(7,0,0.02341483);
   gre->SetPoint(8,9,0.3815684);
   gre->SetPointError(8,0,0.02343657);
   gre->SetPoint(9,9.5,0.4039246);
   gre->SetPointError(9,0,0.02585113);
   gre->SetPoint(10,10,0.3847287);
   gre->SetPointError(10,0,0.02738689);
   gre->SetPoint(11,10.5,0.4781677);
   gre->SetPointError(11,0,0.0337497);
   gre->SetPoint(12,11,0.4359705);
   gre->SetPointError(12,0,0.03584612);
   gre->SetPoint(13,11.5,0.3545779);
   gre->SetPointError(13,0,0.03887607);
   gre->SetPoint(14,12,0.4340514);
   gre->SetPointError(14,0,0.04825566);
   gre->SetPoint(15,12.5,0.3846142);
   gre->SetPointError(15,0,0.05335462);
   gre->SetPoint(16,13,0.3626732);
   gre->SetPointError(16,0,0.06240845);
   gre->SetPoint(17,13.5,0.3823849);
   gre->SetPointError(17,0,0.07840614);
   gre->SetPoint(18,14,0.6002211);
   gre->SetPointError(18,0,0.09479335);
   gre->SetPoint(19,15,0.646962);
   gre->SetPointError(19,0,0.1682106);
   gre->SetPoint(20,16,0.1927533);
   gre->SetPointError(20,0,0.2371537);
   
   TH1F *Graph_obs33 = new TH1F("Graph_obs33","obs3",100,3.9,17.1);
   Graph_obs33->SetMinimum(-0.1303577);
   Graph_obs33->SetMaximum(0.90113);
   Graph_obs33->SetDirectory(0);
   Graph_obs33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_obs33->SetLineColor(ci);
   Graph_obs33->GetXaxis()->SetLabelFont(42);
   Graph_obs33->GetXaxis()->SetLabelSize(0.035);
   Graph_obs33->GetXaxis()->SetTitleSize(0.035);
   Graph_obs33->GetXaxis()->SetTitleFont(42);
   Graph_obs33->GetYaxis()->SetLabelFont(42);
   Graph_obs33->GetYaxis()->SetLabelSize(0.035);
   Graph_obs33->GetYaxis()->SetTitleSize(0.035);
   Graph_obs33->GetYaxis()->SetTitleFont(42);
   Graph_obs33->GetZaxis()->SetLabelFont(42);
   Graph_obs33->GetZaxis()->SetLabelSize(0.035);
   Graph_obs33->GetZaxis()->SetTitleSize(0.035);
   Graph_obs33->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_obs33);
   
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
   TLegendEntry *entry=leg->AddEntry("cham3","Vacuum-Enhanced Prediction","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("ssm3","MSW-LMA","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("obs3","Observed","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(31);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   c1_n4->Modified();
   c1_n4->cd();
   c1_n4->SetSelected(c1_n4);
}
