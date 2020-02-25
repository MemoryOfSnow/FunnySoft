# 常见的密码学解密工具
- 单表替换工具
## 单表替换工具使用办法
```
替换表用一行的形式写出，英文单引号'用来表示仍需被解密的字母
```
截图如下
```bash
Please INPUT the sourceFile path:
test.txt
****************************************************************
Each letter's frequency is :
Letter          Frequency
A               0.0271739
B               0.0434783
C               0.108696
D               0.0217391
E               0.013587
F               0.0706522
G               0.0597826
H               0.0706522
I               0.0271739
J               0.0788043
K               0
L               0.00543478
M               0.0326087
N               0.0271739
O               0.0543478
P               0.0407609
Q               0.0244565
R               0.00815217
S               0.0625
T               0.152174
U               0
V               0.0217391
W               0.0108696
X               0.00543478
Y               0.0163043
Z               0.0163043
****************************************************************
Middle rep_table is:
A'B'TD'E'F'G'H'I'J'K'L'M'N'O'P'Q'R'S'EU'V'W'X'Y'Z'
Origianl Letter         New Letter              Flag
A                               A               0
B                               B               0
C                               T               1
D                               D               0
E                               E               0
F                               F               0
G                               G               0
H                               H               0
I                               I               0
J                               J               0
K                               K               0
L                               L               0
M                               M               0
N                               N               0
O                               O               0
P                               P               0
Q                               Q               0
R                               R               0
S                               S               0
T                               E               1
U                               U               0
V                               V               0
W                               W               0
X                               X               0
Y                               Y               0
Z                               Z               0
For now there are only 2 letters replaced!
Letters had been used:T E
Original str is:
NTCGPDOPANFLHJ INTOOF ITOVJHJCTMMHI HEMTCPFDWTSOFSHTOGFWTE
TTJJTBTOOF SZOVEOCHCVCHPJHOCGTOHNQMTOCNTCGPDCGFCSTQMFBTO
FBGFSFBCTSHJCGTQMFHJCTYCXHCGE AHYTDDHAATSTJCBGFSFBCTSHJC
GTBHQGTSCTYCCGHONTCGPDQSTOTSWTOCGTMICCTSASTRVTJBZHJCGTQ
MFHJCTYCFJDOPPJTBFJOTFSBGAPSCGTQMFHJCTYCASPNF I HWTJBHQGT
SCTYCEZBPNQF SHJ ICGTASTRVTJBZPATFBGMTCCTSF IFHJOCCGTLJPXJ
BPNNPJASTRVTJBZHJCGTVJDTSMZHJIMFJIVFIT

Decoded str is:
NETGPDOPANFLHJ INEOOF IEOVJHJTEMMHI HEMETPFDWESOFSHEOGFWEE
EEJJEBEOOF SZOVEOTHTVTHPJHOTGEOHNQMEOTNETGPDTGFTSEQMFBEO
FBGFSFBTESHJTGEQMFHJTEYTXHTGE AHYEDDHAAESEJTBGFSFBTESHJT
GEBHQGESTEYTTGHONETGPDQSEOESWEOTGEMITTESASERVEJBZHJTGEQ
MFHJTEYTFJDOPPJEBFJOEFSBGAPSTGEQMFHJTEYTASPNF I HWEJBHQGE
STEYTEZBPNQF SHJ ITGEASERVEJBZPAEFBGMETTESF IFHJOTTGELJPXJ
BPNNPJASERVEJBZHJTGEVJDESMZHJIMFJIVFIE

****************************************************************
Middle rep_table is:
FCTDBAHIGNKKLMSOPQREUUVWXY
Origianl Letter         New Letter              Flag
A                               F               1
B                               C               1
C                               T               1
D                               D               1
E                               B               1
F                               A               1
G                               H               1
H                               I               1
I                               G               1
J                               N               1
K                               K               1
L                               K               1
M                               L               1
N                               M               1
O                               S               1
P                               O               1
Q                               P               1
R                               Q               1
S                               R               1
T                               E               1
U                               U               1
V                               U               1
W                               V               1
X                               W               1
Y                               X               1
Z                               Y               1
Rep_table is complete!
Original str is:
NTCGPDOPANFLHJ INTOOF ITOVJHJCTMMHI HEMTCPFDWTSOFSHTOGFWTE
TTJJTBTOOF SZOVEOCHCVCHPJHOCGTOHNQMTOCNTCGPDCGFCSTQMFBTO
FBGFSFBCTSHJCGTQMFHJCTYCXHCGE AHYTDDHAATSTJCBGFSFBCTSHJC
GTBHQGTSCTYCCGHONTCGPDQSTOTSWTOCGTMICCTSASTRVTJBZHJCGTQ
MFHJCTYCFJDOPPJTBFJOTFSBGAPSCGTQMFHJCTYCASPNF I HWTJBHQGT
SCTYCEZBPNQF SHJ ICGTASTRVTJBZPATFBGMTCCTSF IFHJOCCGTLJPXJ
BPNNPJASTRVTJBZHJCGTVJDTSMZHJIMFJIVFIT

Decoded str is:
METHODSOFMAKIN GMESSA GESUNINTELLIG IBLETOADVERSARIESHAVEB
EENNECESSA RYSUBSTITUTIONISTHESIMPLESTMETHODTHATREPLACES
ACHARACTERINTHEPLAINTEXTWITHB FIXEDDIFFERENTCHARACTERINT
HECIPHERTEXTTHISMETHODPRESERVESTHELGTTERFREQUENCYINTHEP
LAINTEXTANDSOONECANSEARCHFORTHEPLAINTEXTFROMA G IVENCIPHE
RTEXTBYCOMPA RIN GTHEFREQUENCYOFEACHLETTERA GAINSTTHEKNOWN
COMMONFREQUENCYINTHEUNDERLYINGLANGUAGE

```
