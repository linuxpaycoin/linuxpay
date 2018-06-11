
[![Build Status](https://travis-ci.org/linuxpay-project/linuxpay.svg?branch=master)](https://travis-ci.org/linuxpay-project/linuxpay) 


### Linuxpay is a fork of [PIVX](https://github.com/PIVX-Project/PIVX) that forked [Dash](https://github.com/dashpay/dash) that forked [Bitcoin](https://github.com/bitcoin/bitcoinp)

### Compiling with boost other than 1.54 will create a malfunctioning wallet. This is the default version on Ubuntu 14.04, but newer versions will come with newer boost versions.


# Linuxpay Core integration/staging repository


Linuxpay is a cutting edge cryptocurrency, with many features not available in most other cryptocurrencies.
- Anonymized transactions using zerocoin technology.
- Fast transactions featuring guaranteed zero confirmation transactions, PIVX named it _SwiftX_.
- Decentralized blockchain voting providing for consensus based advancement of the current Masternode
  technology used to secure the network and provide the above features, each Masternode is secured
  with a collateral of 10K LNP.

More information at [lnp.io](https://www.lnp.io) Visit our ANN thread at [BitcoinTalk](http://www.bitcointalk.org/index.php)


### Coin Specs
<table>
<tr><td>Algo</td><td>Xevan</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply (PoS Phase)</td><td>78,800,000 LNP</td></tr>
<tr><td>Premine</td><td>7,000,000 LNP</td></tr>
<tr><td>RPC Port</td><td>1116</td></tr>
<tr><td>P2P Port</td><td>1115</td></tr>
</table>


### Reward Distribution

<table>
<th colspan=4>PoW Phase</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th><th>Duration (Days)</th></tr>
<tr><td>1</td><td>7,000,000 LNP</td><td>Initial Premine for Coin Swap</td><td>0 Days</td></tr>
<tr><th colspan=4>PoS Phase</th></tr>
<td colspan=2>Masternodes: 60%</td><td>Stakers: 20%</td><td>Budget: 20%</td></tr>
</table>

Governance proposals (Budget) will be usable starting from _superblock_ **100,000** in cycles of 30 days. Anyone will be able to create proposals and MasterNode owners will vote them.

### PoS Rewards Breakdown

<table>
<th>Phase</th><th>Block Height</th><th>Reward</th><th>Approx. End Date</th><th>Masternodes</th><th>Stakers</th><th>Governance Max</th>
<tr><td>Phase 1</td><td>0 ->  26000</td><td>100 LNP</td><td>2018-03-01</td><td>60 LNP</td><td>40 LNP</td><td>0 LNP</td></tr>
<tr><td>Phase 2</td><td> 26001 ->  100000</td><td>120 LNP</td><td>2018-04-21</td><td>72 LNP</td><td>48 LNP</td><td>0 LNP</td></tr>
<tr><td>Phase 3</td><td>100001 ->  200000</td><td>88 LNP</td><td>2018-06-29</td><td>66 LNP</td><td>22 LNP</td><td>22 LNP</td></tr>
<tr><td>Phase 4</td><td>200001 ->  300000</td><td>80 LNP</td><td>2018-09-07</td><td>60 LNP</td><td>20 LNP</td><td>20 LNP</td></tr>
<tr><td>Phase 5</td><td>300001 ->  400000</td><td>72 LNP</td><td>2018-11-15</td><td>54 LNP</td><td>18 LNP</td><td>18 LNP</td></tr>
<tr><td>Phase 6</td><td>400001 ->  500000</td><td>64 LNP</td><td>2019-01-24</td><td>48 LNP</td><td>16 LNP</td><td>16 LNP</td></tr>
<tr><td>Phase 7</td><td>500001 ->  600000</td><td>56 LNP</td><td>2019-04-03</td><td>42 LNP</td><td>14 LNP</td><td>14 LNP</td></tr>
<tr><td>Phase 8</td><td>600001 ->  700000</td><td>48 LNP</td><td>2019-06-12</td><td>36 LNP</td><td>12 LNP</td><td>12 LNP</td></tr>
<tr><td>Phase 9</td><td>700001 ->  800000</td><td>40 LNP</td><td>2019-08-20</td><td>30 LNP</td><td>10 LNP</td><td>10 LNP</td></tr>
<tr><td>Phase 10</td><td>800001 ->  900000</td><td>32 LNP</td><td>2019-10-28</td><td>24 LNP</td><td>8 LNP</td><td>8 LNP</td></tr>
<tr><td>Phase 11</td><td>900001 -> 1000000</td><td>24 LNP</td><td>2020-01-06</td><td>18 LNP</td><td>6 LNP</td><td>6 LNP</td></tr>
<tr><td>Phase 12</td><td>1000001 -> 1100000</td><td>16 LNP</td><td>2020-03-15</td><td>12 LNP</td><td>4 LNP</td><td>4 LNP</td></tr>
<tr><td>Phase 13</td><td>1100001 -> 1200000</td><td>8 LNP</td><td>2020-05-24</td><td>6 LNP</td><td>2 LNP</td><td>2 LNP</td></tr>
<tr><td>Phase 14</td><td>1200001 -> INFINITE</td><td>0.001 LNP</td><td>3000-01-01</td><td>0.00075 LNP</td><td>0.00025 LNP</td><td>0.00025 LNP</td></tr>
</table>

The Governance percentage is only added into circulation if there are proposals voted by the MasterNodes every month.

The information in the table can be cross checked with the code [here](https://github.com/linuxpay-project/linuxpay/blob/master/src/main.cpp#L2131-L2158). `Approx. End Date` has been calculated based on the target block time of 60 seconds.

