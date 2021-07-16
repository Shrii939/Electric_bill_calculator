# Electric_bill_calculator

<h3>Tax Calculation </h3>
<h5>The tax is currently 9% (or 0.09) in my area </h5>
<pre>Tax = energy charge * 0.09 ;</pre>

<h3>Energy Charges </h3>
<pre>LT2 (A) II 
    0-30 -> 3.85
    31-100 -> 5.15
    101-200 -> 6.70
    200 & above -> 7.55
<h4>The logic to calculate Energy Charges (eg: 141)</h4>   
<pre>Energy charge = 30*3.85 + (Units consumed - 30)*5.15 </pre> 

<h3>Total Bill </h3>
<pre>Total Bill = ((Energy charge + fix charges + Tax + arrears)-(credit + subsidy))</pre>
