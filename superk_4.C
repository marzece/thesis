{
//=========Macro generated from canvas: c1_n5/SuperK - 4
//=========  (Tue May 21 04:01:50 2019) by ROOT version5.34/18
   TCanvas *c1_n5 = new TCanvas("c1_n5", "SuperK - 4",1,1,700,500);
   gStyle->SetOptStat(0);
   c1_n5->SetHighLightColor(2);
   c1_n5->Range(1.738125,0.1661678,18.25188,0.5949391);
   c1_n5->SetFillColor(0);
   c1_n5->SetBorderMode(0);
   c1_n5->SetBorderSize(2);
   c1_n5->SetFrameBorderMode(0);
   c1_n5->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraph *graph = new TGraph(23);
   graph->SetName("cham4");
   graph->SetTitle("cham4");
   graph->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,3.99,0.4643741989);
   graph->SetPoint(1,4.49,0.4592980393);
   graph->SetPoint(2,4.99,0.4547556813);
   graph->SetPoint(3,5.49,0.4507427667);
   graph->SetPoint(4,5.99,0.44724123);
   graph->SetPoint(5,6.49,0.4442233453);
   graph->SetPoint(6,6.99,0.4416559056);
   graph->SetPoint(7,7.49,0.4395029615);
   graph->SetPoint(8,7.99,0.4377272615);
   graph->SetPoint(9,8.49,0.4362912951);
   graph->SetPoint(10,8.99,0.4351583167);
   graph->SetPoint(11,9.49,0.4342932311);
   graph->SetPoint(12,9.99,0.4336631997);
   graph->SetPoint(13,10.49,0.4332353025);
   graph->SetPoint(14,11,0.4329870642);
   graph->SetPoint(15,11.5,0.4328957308);
   graph->SetPoint(16,12,0.4329369874);
   graph->SetPoint(17,12.5,0.4330945621);
   graph->SetPoint(18,13,0.4333571091);
   graph->SetPoint(19,13.5,0.4337193367);
   graph->SetPoint(20,14,0.4344026654);
   graph->SetPoint(21,15,0.4358100485);
   graph->SetPoint(22,16,0.4395997485);
   
   TH1F *Graph_cham47 = new TH1F("Graph_cham47","cham4",100,2.789,17.201);
   Graph_cham47->SetMinimum(0.4297479);
   Graph_cham47->SetMaximum(0.467522);
   Graph_cham47->SetDirectory(0);
   Graph_cham47->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_cham47->SetLineColor(ci);
   Graph_cham47->GetXaxis()->SetLabelFont(42);
   Graph_cham47->GetXaxis()->SetLabelSize(0.035);
   Graph_cham47->GetXaxis()->SetTitleSize(0.035);
   Graph_cham47->GetXaxis()->SetTitleFont(42);
   Graph_cham47->GetYaxis()->SetLabelFont(42);
   Graph_cham47->GetYaxis()->SetLabelSize(0.035);
   Graph_cham47->GetYaxis()->SetTitleSize(0.035);
   Graph_cham47->GetYaxis()->SetTitleFont(42);
   Graph_cham47->GetZaxis()->SetLabelFont(42);
   Graph_cham47->GetZaxis()->SetLabelSize(0.035);
   Graph_cham47->GetZaxis()->SetTitleSize(0.035);
   Graph_cham47->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_cham47);
   
   multigraph->Add(graph,"lp");
   
   graph = new TGraph(23);
   graph->SetName("ssm4");
   graph->SetTitle("ssm4");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetPoint(0,3.99,0.4609237703);
   graph->SetPoint(1,4.49,0.4571243707);
   graph->SetPoint(2,4.99,0.4538232353);
   graph->SetPoint(3,5.49,0.4509658718);
   graph->SetPoint(4,5.99,0.4484990254);
   graph->SetPoint(5,6.49,0.4463730149);
   graph->SetPoint(6,6.99,0.4445432269);
   graph->SetPoint(7,7.49,0.4429704615);
   graph->SetPoint(8,7.99,0.4416204693);
   graph->SetPoint(9,8.49,0.4404633257);
   graph->SetPoint(10,8.99,0.4394729479);
   graph->SetPoint(11,9.49,0.4386267244);
   graph->SetPoint(12,9.99,0.4379051631);
   graph->SetPoint(13,10.49,0.437286573);
   graph->SetPoint(14,11,0.4367620525);
   graph->SetPoint(15,11.5,0.4363251943);
   graph->SetPoint(16,12,0.435959637);
   graph->SetPoint(17,12.5,0.435657208);
   graph->SetPoint(18,13,0.435411618);
   graph->SetPoint(19,13.5,0.4352186012);
   graph->SetPoint(20,14,0.435041932);
   graph->SetPoint(21,15,0.4349619052);
   graph->SetPoint(22,16,0.4354423165);
   
   TH1F *Graph_ssm48 = new TH1F("Graph_ssm48","ssm4",100,2.789,17.201);
   Graph_ssm48->SetMinimum(0.4323657);
   Graph_ssm48->SetMaximum(0.46352);
   Graph_ssm48->SetDirectory(0);
   Graph_ssm48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_ssm48->SetLineColor(ci);
   Graph_ssm48->GetXaxis()->SetLabelFont(42);
   Graph_ssm48->GetXaxis()->SetLabelSize(0.035);
   Graph_ssm48->GetXaxis()->SetTitleSize(0.035);
   Graph_ssm48->GetXaxis()->SetTitleFont(42);
   Graph_ssm48->GetYaxis()->SetLabelFont(42);
   Graph_ssm48->GetYaxis()->SetLabelSize(0.035);
   Graph_ssm48->GetYaxis()->SetTitleSize(0.035);
   Graph_ssm48->GetYaxis()->SetTitleFont(42);
   Graph_ssm48->GetZaxis()->SetLabelFont(42);
   Graph_ssm48->GetZaxis()->SetLabelSize(0.035);
   Graph_ssm48->GetZaxis()->SetTitleSize(0.035);
   Graph_ssm48->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_ssm48);
   
   multigraph->Add(graph,"lp");
   
   TGraphErrors *gre = new TGraphErrors(23);
   gre->SetName("obs4");
   gre->SetTitle("obs4");
   gre->SetFillColor(1);
   gre->SetFillStyle(3007);
   gre->SetMarkerStyle(31);
   gre->SetPoint(0,3.99,0.4675484);
   gre->SetPointError(0,0,0.06037692);
   gre->SetPoint(1,4.49,0.4187962);
   gre->SetPointError(1,0,0.03045037);
   gre->SetPoint(2,4.99,0.4882969);
   gre->SetPointError(2,0,0.02324479);
   gre->SetPoint(3,5.49,0.4511351);
   gre->SetPointError(3,0,0.0143585);
   gre->SetPoint(4,5.99,0.4315758);
   gre->SetPointError(4,0,0.01229753);
   gre->SetPoint(5,6.49,0.4435677);
   gre->SetPointError(5,0,0.01453985);
   gre->SetPoint(6,6.99,0.4464226);
   gre->SetPointError(6,0,0.01512584);
   gre->SetPoint(7,7.49,0.4396075);
   gre->SetPointError(7,0,0.01504894);
   gre->SetPoint(8,7.99,0.4563332);
   gre->SetPointError(8,0,0.01351382);
   gre->SetPoint(9,8.49,0.4448574);
   gre->SetPointError(9,0,0.01442792);
   gre->SetPoint(10,8.99,0.4477849);
   gre->SetPointError(10,0,0.01557274);
   gre->SetPoint(11,9.49,0.4294425);
   gre->SetPointError(11,0,0.01683103);
   gre->SetPoint(12,9.99,0.4269468);
   gre->SetPointError(12,0,0.01822683);
   gre->SetPoint(13,10.49,0.4092709);
   gre->SetPointError(13,0,0.01964555);
   gre->SetPoint(14,11,0.4283964);
   gre->SetPointError(14,0,0.02188755);
   gre->SetPoint(15,11.5,0.4566834);
   gre->SetPointError(15,0,0.02549015);
   gre->SetPoint(16,12,0.4256547);
   gre->SetPointError(16,0,0.02862539);
   gre->SetPoint(17,12.5,0.4232207);
   gre->SetPointError(17,0,0.03405365);
   gre->SetPoint(18,13,0.4394241);
   gre->SetPointError(18,0,0.03977339);
   gre->SetPoint(19,13.5,0.4638675);
   gre->SetPointError(19,0,0.05154627);
   gre->SetPoint(20,14,0.4865349);
   gre->SetPointError(20,0,0.04993534);
   gre->SetPoint(21,15,0.3998267);
   gre->SetPointError(21,0,0.08168063);
   gre->SetPoint(22,16,0.3522669);
   gre->SetPointError(22,0,0.1276303);
   
   TH1F *Graph_obs44 = new TH1F("Graph_obs44","obs4",100,2.789,17.201);
   Graph_obs44->SetMinimum(0.1934532);
   Graph_obs44->SetMaximum(0.5676537);
   Graph_obs44->SetDirectory(0);
   Graph_obs44->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_obs44->SetLineColor(ci);
   Graph_obs44->GetXaxis()->SetLabelFont(42);
   Graph_obs44->GetXaxis()->SetLabelSize(0.035);
   Graph_obs44->GetXaxis()->SetTitleSize(0.035);
   Graph_obs44->GetXaxis()->SetTitleFont(42);
   Graph_obs44->GetYaxis()->SetLabelFont(42);
   Graph_obs44->GetYaxis()->SetLabelSize(0.035);
   Graph_obs44->GetYaxis()->SetTitleSize(0.035);
   Graph_obs44->GetYaxis()->SetTitleFont(42);
   Graph_obs44->GetZaxis()->SetLabelFont(42);
   Graph_obs44->GetZaxis()->SetLabelSize(0.035);
   Graph_obs44->GetZaxis()->SetTitleSize(0.035);
   Graph_obs44->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_obs44);
   
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
   TLegendEntry *entry=leg->AddEntry("cham4","Vacuum-Enhanced Prediction","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("ssm4","MSW-LMA","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("obs4","Observed","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(31);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   c1_n5->Modified();
   c1_n5->cd();
   c1_n5->SetSelected(c1_n5);
}
