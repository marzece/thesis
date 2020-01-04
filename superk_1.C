{
//=========Macro generated from canvas: c1_n2/SuperK - 1
//=========  (Tue May 21 04:01:48 2019) by ROOT version5.34/18
   TCanvas *c1_n2 = new TCanvas("c1_n2", "SuperK - 1",1,1,700,500);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(2.9375,0.2712876,18.0625,0.8075025);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetFrameBorderMode(0);
   c1_n2->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraph *graph = new TGraph(21);
   graph->SetName("cham1");
   graph->SetTitle("cham1");
   graph->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,5,0.4110737819);
   graph->SetPoint(1,5.5,0.4072001131);
   graph->SetPoint(2,6,0.4037799273);
   graph->SetPoint(3,6.5,0.4007881201);
   graph->SetPoint(4,7,0.3982003887);
   graph->SetPoint(5,7.5,0.3959898114);
   graph->SetPoint(6,8,0.3941203125);
   graph->SetPoint(7,8.5,0.3925455372);
   graph->SetPoint(8,9,0.3912142136);
   graph->SetPoint(9,9.5,0.3900775247);
   graph->SetPoint(10,10,0.3890945202);
   graph->SetPoint(11,10.5,0.3882343387);
   graph->SetPoint(12,11,0.3874756924);
   graph->SetPoint(13,11.5,0.3868046292);
   graph->SetPoint(14,12,0.386211998);
   graph->SetPoint(15,12.5,0.3856921972);
   graph->SetPoint(16,13,0.3852443402);
   graph->SetPoint(17,13.5,0.3848761587);
   graph->SetPoint(18,14,0.3845665971);
   graph->SetPoint(19,15,0.3847846887);
   graph->SetPoint(20,16,0.3895874852);
   
   TH1F *Graph_cham11 = new TH1F("Graph_cham11","cham1",100,3.9,17.1);
   Graph_cham11->SetMinimum(0.3819159);
   Graph_cham11->SetMaximum(0.4137245);
   Graph_cham11->SetDirectory(0);
   Graph_cham11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_cham11->SetLineColor(ci);
   Graph_cham11->GetXaxis()->SetLabelFont(42);
   Graph_cham11->GetXaxis()->SetLabelSize(0.035);
   Graph_cham11->GetXaxis()->SetTitleSize(0.035);
   Graph_cham11->GetXaxis()->SetTitleFont(42);
   Graph_cham11->GetYaxis()->SetLabelFont(42);
   Graph_cham11->GetYaxis()->SetLabelSize(0.035);
   Graph_cham11->GetYaxis()->SetTitleSize(0.035);
   Graph_cham11->GetYaxis()->SetTitleFont(42);
   Graph_cham11->GetZaxis()->SetLabelFont(42);
   Graph_cham11->GetZaxis()->SetLabelSize(0.035);
   Graph_cham11->GetZaxis()->SetTitleSize(0.035);
   Graph_cham11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_cham11);
   
   multigraph->Add(graph,"lp");
   
   graph = new TGraph(21);
   graph->SetName("ssm1");
   graph->SetTitle("ssm1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetPoint(0,5,0.4101882742);
   graph->SetPoint(1,5.5,0.4073622035);
   graph->SetPoint(2,6,0.4048819868);
   graph->SetPoint(3,6.5,0.4027012417);
   graph->SetPoint(4,7,0.400784392);
   graph->SetPoint(5,7.5,0.3991010731);
   graph->SetPoint(6,8,0.3976176962);
   graph->SetPoint(7,8.5,0.3962946647);
   graph->SetPoint(8,9,0.3950903399);
   graph->SetPoint(9,9.5,0.3939673161);
   graph->SetPoint(10,10,0.3928970007);
   graph->SetPoint(11,10.5,0.3918611719);
   graph->SetPoint(12,11,0.3908508667);
   graph->SetPoint(13,11.5,0.3898635589);
   graph->SetPoint(14,12,0.3889000247);
   graph->SetPoint(15,12.5,0.3879624612);
   graph->SetPoint(16,13,0.3870549427);
   graph->SetPoint(17,13.5,0.3861864421);
   graph->SetPoint(18,14,0.385105667);
   graph->SetPoint(19,15,0.3839949367);
   graph->SetPoint(20,16,0.3858208892);
   
   TH1F *Graph_ssm12 = new TH1F("Graph_ssm12","ssm1",100,3.9,17.1);
   Graph_ssm12->SetMinimum(0.3813756);
   Graph_ssm12->SetMaximum(0.4128076);
   Graph_ssm12->SetDirectory(0);
   Graph_ssm12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_ssm12->SetLineColor(ci);
   Graph_ssm12->GetXaxis()->SetLabelFont(42);
   Graph_ssm12->GetXaxis()->SetLabelSize(0.035);
   Graph_ssm12->GetXaxis()->SetTitleSize(0.035);
   Graph_ssm12->GetXaxis()->SetTitleFont(42);
   Graph_ssm12->GetYaxis()->SetLabelFont(42);
   Graph_ssm12->GetYaxis()->SetLabelSize(0.035);
   Graph_ssm12->GetYaxis()->SetTitleSize(0.035);
   Graph_ssm12->GetYaxis()->SetTitleFont(42);
   Graph_ssm12->GetZaxis()->SetLabelFont(42);
   Graph_ssm12->GetZaxis()->SetLabelSize(0.035);
   Graph_ssm12->GetZaxis()->SetTitleSize(0.035);
   Graph_ssm12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_ssm12);
   
   multigraph->Add(graph,"lp");
   
   TGraphErrors *gre = new TGraphErrors(21);
   gre->SetName("obs1");
   gre->SetTitle("obs1");
   gre->SetFillColor(1);
   gre->SetFillStyle(3004);
   gre->SetMarkerStyle(31);
   gre->SetPoint(0,5,0.4076835);
   gre->SetPointError(0,0,0.03898684);
   gre->SetPoint(1,5.5,0.3868778);
   gre->SetPointError(1,0,0.02059798);
   gre->SetPoint(2,6,0.4040847);
   gre->SetPointError(2,0,0.01655731);
   gre->SetPoint(3,6.5,0.3990063);
   gre->SetPointError(3,0,0.01396959);
   gre->SetPoint(4,7,0.4134997);
   gre->SetPointError(4,0,0.01390265);
   gre->SetPoint(5,7.5,0.4269852);
   gre->SetPointError(5,0,0.01484359);
   gre->SetPoint(6,8,0.4099966);
   gre->SetPointError(6,0,0.01480746);
   gre->SetPoint(7,8.5,0.3861574);
   gre->SetPointError(7,0,0.01459241);
   gre->SetPoint(8,9,0.4058652);
   gre->SetPointError(8,0,0.01577844);
   gre->SetPoint(9,9.5,0.4152891);
   gre->SetPointError(9,0,0.01711468);
   gre->SetPoint(10,10,0.4073689);
   gre->SetPointError(10,0,0.01864217);
   gre->SetPoint(11,10.5,0.3630557);
   gre->SetPointError(11,0,0.01864787);
   gre->SetPoint(12,11,0.420757);
   gre->SetPointError(12,0,0.02234587);
   gre->SetPoint(13,11.5,0.3904966);
   gre->SetPointError(13,0,0.02444439);
   gre->SetPoint(14,12,0.4088276);
   gre->SetPointError(14,0,0.02838309);
   gre->SetPoint(15,12.5,0.4124269);
   gre->SetPointError(15,0,0.03369301);
   gre->SetPoint(16,13,0.4091109);
   gre->SetPointError(16,0,0.04095705);
   gre->SetPoint(17,13.5,0.5126868);
   gre->SetPointError(17,0,0.05469277);
   gre->SetPoint(18,14,0.4191);
   gre->SetPointError(18,0,0.05003626);
   gre->SetPoint(19,15,0.6343511);
   gre->SetPointError(19,0,0.1000313);
   gre->SetPoint(20,16,0.5021956);
   gre->SetPointError(20,0,0.1413297);
   
   TH1F *Graph_obs11 = new TH1F("Graph_obs11","obs1",100,3.9,17.1);
   Graph_obs11->SetMinimum(0.3054104);
   Graph_obs11->SetMaximum(0.7733798);
   Graph_obs11->SetDirectory(0);
   Graph_obs11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_obs11->SetLineColor(ci);
   Graph_obs11->GetXaxis()->SetLabelFont(42);
   Graph_obs11->GetXaxis()->SetLabelSize(0.035);
   Graph_obs11->GetXaxis()->SetTitleSize(0.035);
   Graph_obs11->GetXaxis()->SetTitleFont(42);
   Graph_obs11->GetYaxis()->SetLabelFont(42);
   Graph_obs11->GetYaxis()->SetLabelSize(0.035);
   Graph_obs11->GetYaxis()->SetTitleSize(0.035);
   Graph_obs11->GetYaxis()->SetTitleFont(42);
   Graph_obs11->GetZaxis()->SetLabelFont(42);
   Graph_obs11->GetZaxis()->SetLabelSize(0.035);
   Graph_obs11->GetZaxis()->SetTitleSize(0.035);
   Graph_obs11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_obs11);
   
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
   TLegendEntry *entry=leg->AddEntry("cham1","Vacuum-Enhanced Prediction","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("ssm1","MSW-LMA","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("obs1","Observed","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(31);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
