{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Jan 10 23:08:46 2013) by ROOT version5.30/00
   TCanvas *c1 = new TCanvas("c1", "c1",11,52,700,500);
   c1->Range(2.264882,0.06472148,25.51853,0.2149602);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("outer");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,6.121,0.1018059);
   gre->SetPointError(0,0,0.0007621767);
   gre->SetPoint(1,8.43,0.1577104);
   gre->SetPointError(1,0,0.0009605971);
   gre->SetPoint(2,10.614,0.1237028);
   gre->SetPointError(2,0,0.000851841);
   gre->SetPoint(3,12.677,0.09076221);
   gre->SetPointError(3,0,0.0006838862);
   gre->SetPoint(4,15.176,0.09084242);
   gre->SetPointError(4,0,0.0006937677);
   gre->SetPoint(5,17.107,0.1152045);
   gre->SetPointError(5,0,0.0007891666);
   gre->SetPoint(6,19.537,0.1149929);
   gre->SetPointError(6,0,0.0008202312);
   gre->SetPoint(7,21.629,0.1047554);
   gre->SetPointError(7,0,0.0007586456);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,4.5702,23.1798);
   Graph_Graph1->SetMinimum(0.08);
   Graph_Graph1->SetMaximum(0.2);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Detector Angle [degrees]");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Background_{Veto} / Background_{No Veto}");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("ap");
   
   gre = new TGraphErrors(8);
   gre->SetName("inner");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,6.89,0.09190912);
   gre->SetPointError(0,0,0.0007338352);
   gre->SetPoint(1,7.66,0.1134512);
   gre->SetPointError(1,0,0.0008083063);
   gre->SetPoint(2,11.285,0.09109857);
   gre->SetPointError(2,0,0.000713457);
   gre->SetPoint(3,11.987,0.1053087);
   gre->SetPointError(3,0,0.0007522059);
   gre->SetPoint(4,15.821,0.1434746);
   gre->SetPointError(4,0,0.0008941384);
   gre->SetPoint(5,16.465,0.1029503);
   gre->SetPointError(5,0,0.0007609174);
   gre->SetPoint(6,20.235,0.09828704);
   gre->SetPointError(6,0,0.0007334824);
   gre->SetPoint(7,20.932,0.1017158);
   gre->SetPointError(7,0,0.0007645891);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,4.5702,23.1798);
   Graph_Graph2->SetMinimum(0.08);
   Graph_Graph2->SetMaximum(0.2);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("Detector Angle [degrees]");
   Graph_Graph2->GetXaxis()->CenterTitle(true);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("Background_{Veto} / Background_{No Veto}");
   Graph_Graph2->GetYaxis()->CenterTitle(true);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("p ");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
