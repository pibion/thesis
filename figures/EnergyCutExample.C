{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Jan  5 17:56:44 2013) by ROOT version5.34/01
   TCanvas *c1 = new TCanvas("c1", "c1",11,52,700,500);
   c1->Range(-11.72711,417.3451,13.76373,2579.678);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(16);
   graph->SetName("graph2");
   graph->SetTitle("");
   graph->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(24);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,-6.5,826.5297566);
   graph->SetPoint(1,-5.5,830.5344597);
   graph->SetPoint(2,-4.5,849.3228815);
   graph->SetPoint(3,-3.5,881.135562);
   graph->SetPoint(4,-2.5,914.8958824);
   graph->SetPoint(5,-1.5,956.5162434);
   graph->SetPoint(6,-0.5,1011.031433);
   graph->SetPoint(7,0.5,1069.270301);
   graph->SetPoint(8,1.5,1126.030113);
   graph->SetPoint(9,2.5,1202.775408);
   graph->SetPoint(10,3.5,1289.70764);
   graph->SetPoint(11,4.5,1386.350138);
   graph->SetPoint(12,5.5,1518.772329);
   graph->SetPoint(13,6.5,1640.832014);
   graph->SetPoint(14,7.5,1796.236797);
   graph->SetPoint(15,8.5,2027.780184);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,-9.2,11.2);
   Graph_Graph1->SetMinimum(637.2434);
   Graph_Graph1->SetMaximum(2364.361);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Position along Bar [ns]");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Location of Muon Peak [channel]");
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
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("apl");
   
   graph = new TGraph(18);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(0.7);
   graph->SetPoint(0,-7.5,781.1699407);
   graph->SetPoint(1,-6.5,826.5297566);
   graph->SetPoint(2,-5.5,830.5344597);
   graph->SetPoint(3,-4.5,849.3228815);
   graph->SetPoint(4,-3.5,881.135562);
   graph->SetPoint(5,-2.5,914.8958824);
   graph->SetPoint(6,-1.5,956.5162434);
   graph->SetPoint(7,-0.5,1011.031433);
   graph->SetPoint(8,0.5,1069.270301);
   graph->SetPoint(9,1.5,1126.030113);
   graph->SetPoint(10,2.5,1202.775408);
   graph->SetPoint(11,3.5,1289.70764);
   graph->SetPoint(12,4.5,1386.350138);
   graph->SetPoint(13,5.5,1518.772329);
   graph->SetPoint(14,6.5,1640.832014);
   graph->SetPoint(15,7.5,1796.236797);
   graph->SetPoint(16,8.5,2027.780184);
   graph->SetPoint(17,9.5,2220.434869);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,-9.2,11.2);
   Graph_Graph2->SetMinimum(637.2434);
   Graph_Graph2->SetMaximum(2364.361);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("Position along Bar [ns]");
   Graph_Graph2->GetXaxis()->CenterTitle(true);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("Location of Muon Peak [channel]");
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
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("p");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
