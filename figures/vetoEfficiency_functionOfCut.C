{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jan 14 12:19:49 2013) by ROOT version5.34/01
   TCanvas *c1 = new TCanvas("c1", "c1",11,52,700,500);
   c1->Range(0.625,0.5319198,2.875,1.016888);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(31);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1,0.9360602904);
   graph->SetPoint(1,1.05,0.9352625263);
   graph->SetPoint(2,1.1,0.9341979652);
   graph->SetPoint(3,1.15,0.9329125775);
   graph->SetPoint(4,1.2,0.9311522848);
   graph->SetPoint(5,1.25,0.928661283);
   graph->SetPoint(6,1.3,0.9247322293);
   graph->SetPoint(7,1.35,0.9177975507);
   graph->SetPoint(8,1.4,0.9060473814);
   graph->SetPoint(9,1.45,0.889965852);
   graph->SetPoint(10,1.5,0.8730929981);
   graph->SetPoint(11,1.55,0.8564868439);
   graph->SetPoint(12,1.6,0.8401658986);
   graph->SetPoint(13,1.65,0.8241022185);
   graph->SetPoint(14,1.7,0.808647467);
   graph->SetPoint(15,1.75,0.7938821387);
   graph->SetPoint(16,1.8,0.7799072779);
   graph->SetPoint(17,1.85,0.7664381188);
   graph->SetPoint(18,1.9,0.7533561815);
   graph->SetPoint(19,1.95,0.7410205601);
   graph->SetPoint(20,2,0.7296490201);
   graph->SetPoint(21,2.05,0.719507599);
   graph->SetPoint(22,2.1,0.7102333545);
   graph->SetPoint(23,2.15,0.7019686858);
   graph->SetPoint(24,2.2,0.6931553375);
   graph->SetPoint(25,2.25,0.6830894605);
   graph->SetPoint(26,2.3,0.6717498452);
   graph->SetPoint(27,2.35,0.6589836429);
   graph->SetPoint(28,2.4,0.6446759555);
   graph->SetPoint(29,2.45,0.6294999282);
   graph->SetPoint(30,2.5,0.6127478788);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.85,2.65);
   Graph_Graph1->SetMinimum(0.5804166);
   Graph_Graph1->SetMaximum(0.9683915);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Background / Background_{Scale Factor = 1}");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Fraction of Rejected Background");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
