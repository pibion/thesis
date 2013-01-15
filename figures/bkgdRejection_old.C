{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Jan 10 23:03:25 2013) by ROOT version5.30/00
   TCanvas *c1 = new TCanvas("c1", "c1",11,52,700,500);
   c1->Range(2.244,0.065,25.506,0.215);
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
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,6.121,0.1702912);
   gre->SetPointError(0,0,0.002289843);
   gre->SetPoint(1,8.427146,0.1922785);
   gre->SetPointError(1,0,0.0024534);
   gre->SetPoint(2,10.5996,0.1755894);
   gre->SetPointError(2,0,0.00234551);
   gre->SetPoint(3,12.67179,0.1890996);
   gre->SetPointError(3,0,0.002312416);
   gre->SetPoint(4,15.14505,0.1893645);
   gre->SetPointError(4,0,0.0023353);
   gre->SetPoint(5,17.08355,0.1901592);
   gre->SetPointError(5,0,0.002350441);
   gre->SetPoint(6,19.52339,0.1729403);
   gre->SetPointError(6,0,0.002339533);
   gre->SetPoint(7,21.629,0.1864505);
   gre->SetPointError(7,0,0.002374983);
   
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
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,6.889715,0.1146609);
   gre->SetPointError(0,0,0.001872421);
   gre->SetPoint(1,7.658431,0.1321447);
   gre->SetPointError(1,0,0.001998812);
   gre->SetPoint(2,11.26805,0.1130715);
   gre->SetPointError(2,0,0.00181322);
   gre->SetPoint(3,11.96992,0.1361183);
   gre->SetPointError(3,0,0.001945717);
   gre->SetPoint(4,15.8135,0.1456549);
   gre->SetPointError(4,0,0.002039826);
   gre->SetPoint(5,16.44853,0.134264);
   gre->SetPointError(5,0,0.001986683);
   gre->SetPoint(6,20.22526,0.1181047);
   gre->SetPointError(6,0,0.001840139);
   gre->SetPoint(7,20.92713,0.1218134);
   gre->SetPointError(7,0,0.001920349);
   
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
