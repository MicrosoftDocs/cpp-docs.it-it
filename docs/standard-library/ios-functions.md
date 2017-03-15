---
title: Funzioni &lt;ios&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 1382d53f-e531-4b41-adf6-6a1543512e51
caps.latest.revision: 10
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 91e10200576389edcaff55860da3a8a701e75bab
ms.lasthandoff: 02/24/2017

---
# <a name="ltiosgt-functions"></a>Funzioni &lt;ios&gt;
||||  
|-|-|-|  
|[defaultfloat](#ios_defaultfloat)|[boolalpha](#boolalpha)|[dec](#dec)|  
|[fixed](#fixed)|[hex](#hex)|[internal](#internal)|  
|[left](#left)|[noboolalpha](#noboolalpha)|[noshowbase](#noshowbase)|  
|[noshowpoint](#noshowpoint)|[noshowpos](#noshowpos)|[noskipws](#noskipws)|  
|[nounitbuf](#nounitbuf)|[nouppercase](#nouppercase)|[oct](#oct)|  
|[right](#right)|[scientific](#scientific)|[showbase](#showbase)|  
|[showpoint](#showpoint)|[showpos](#showpos)|[skipws](#skipws)|  
|[unitbuf](#unitbuf)|[uppercase](#uppercase)|  
  
##  <a name="a-nameboolalphaa--boolalpha"></a><a name="boolalpha"></a>  boolalpha  
 Specifica che le variabili di tipo [bool](../cpp/bool-cpp.md) vengano visualizzate come **true** o **false** nel flusso.  
  
```  
ios_base& boolalpha(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, le variabili di tipo `bool` vengono visualizzate come 1 o 0.  
  
 `boolalpha` chiama ` str.` [setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::boolalpha`) e quindi restituisce ` str.`  
  
 [noboolalpha](../standard-library/ios-functions.md#noboolalpha) inverte l'effetto di `boolalpha`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_boolalpha.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   bool b = true;  
   cout << b << endl;  
   boolalpha( cout );  
   cout << b << endl;  
   noboolalpha( cout );  
   cout << b << endl;  
   cout << boolalpha << b << endl;  
}  
```  
  
```Output  
1  
true  
1  
true  
```  
  
##  <a name="a-namedeca--dec"></a><a name="dec"></a>  dec  
 Specifica che le variabili Integer vengano visualizzate nella notazione in base 10.  
  
```  
ios_base& dec(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, le variabili Integer vengono visualizzate in base 10.  
  
 **dec** chiama ` str``.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::dec`**, ios_base::basefield**) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_dec.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   int i = 100;  
  
   cout << i << endl;   // Default is base 10  
   cout << hex << i << endl;     
   dec( cout );  
   cout << i << endl;  
   oct( cout );  
   cout << i << endl;  
   cout << dec << i << endl;  
}  
```  
  
```Output  
100  
64  
100  
144  
100  
```  
  
##  <a name="a-nameiosdefaultfloata--ltiosgt-defaultfloat"></a><a name="ios_defaultfloat"></a>  &lt;ios&gt; defaultfloat  
 Configura i flag di un oggetto `ios_base` per usare un formato di visualizzazione predefinito per i valori float.  
  
```  
ios_base& defaultfloat(ios_base& _Iosbase);
```  
  
### <a name="parameters"></a>Parametri  
 `_Iosbase`  
 Oggetto `ios_base`.  
  
### <a name="remarks"></a>Note  
 Il manipolatore chiama _I `osbase.`[ios_base::unsetf](../standard-library/ios-base-class.md#ios_base__unsetf)`(ios_base::floatfield)` e quindi restituisce _I `osbase`.  
  
##  <a name="a-namefixeda--fixed"></a><a name="fixed"></a>  fixed  
 Specifica che un numero a virgola mobile venga visualizzato nella notazione decimale fissa.  
  
```  
ios_base& fixed(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 **fixed** è la notazione di visualizzazione predefinita per i numeri a virgola mobile. [scientific](../standard-library/ios-functions.md#scientific) fa sì che i numeri a virgola mobile vengano visualizzati usando la notazione scientifica.  
  
 Il manipolatore chiama * str.*[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::fixed`, **ios_base::floatfield**) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_fixed.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   float i = 1.1F;  
  
   cout << i << endl;   // fixed is the default  
   cout << scientific << i << endl;  
   cout.precision( 1 );  
   cout << fixed << i << endl;  
}  
```  
  
```Output  
1.1  
1.100000e+000  
1.1  
```  
  
##  <a name="a-namehexa--hex"></a><a name="hex"></a>  hex  
 Specifica che le variabili Integer vengano visualizzate nella notazione in base 16.  
  
```  
ios_base& hex(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, le variabili Integer vengono visualizzate nella notazione in base 10. [dec](../standard-library/ios-functions.md#dec) e [oct](../standard-library/ios-functions.md#oct) modificano anche il modo in cui vengono visualizzate le variabili Integer.  
  
 Il manipolatore chiama ` str`**.**[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::hex`, **ios_base::basefield**) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  Per un esempio di come usare **hex**, vedere [dec](../standard-library/ios-functions.md#dec).  
  
##  <a name="a-nameinternala--internal"></a><a name="internal"></a>  internal  
 Fa sì che il segno di un numero venga giustificato a sinistra e il numero a destra.  
  
```  
ios_base& internal(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato ` str`.  
  
### <a name="remarks"></a>Note  
 [showpos](../standard-library/ios-functions.md#showpos) determina il segno da visualizzare per i numeri positivi.  
  
 Il manipolatore chiama ` str`. [setf](../standard-library/ios-base-class.md#ios_base__setf)( [ios_base::internal](../standard-library/ios-base-class.md#ios_base__fmtflags), [ios_base::adjustfield](../standard-library/ios-base-class.md#ios_base__fmtflags)) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_internal.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iomanip>  
  
int main( void )   
{  
   using namespace std;  
   float i = -123.456F;  
   cout.fill( '.' );  
   cout << setw( 10 ) << i << endl;  
   cout << setw( 10 ) << internal << i << endl;  
}  
```  
  
```Output  
..-123.456  
-..123.456  
```  
  
##  <a name="a-namelefta--left"></a><a name="left"></a>  left  
 Fa sì che il testo la cui larghezza non corrisponde a quella dell'output venga visualizzato nel flusso allineato con il margine sinistro.  
  
```  
ios_base& left(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::left`, **ios_base::adjustfield**) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_left.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   double f1= 5.00;  
   cout.width( 20 );   
   cout << f1 << endl;  
   cout << left << f1 << endl;  
}  
```  
  
```Output  
                   5  
5  
```  
  
##  <a name="a-namenoboolalphaa--noboolalpha"></a><a name="noboolalpha"></a>  noboolalpha  
 Specifica che le variabili di tipo [bool](../cpp/bool-cpp.md) vengano visualizzate come 1 o 0 nel flusso.  
  
```  
ios_base& noboolalpha(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, l'opzione `noboolalpha` è attiva.  
  
 `noboolalpha` chiama ` str.`[unsetf](../standard-library/ios-base-class.md#ios_base__unsetf)( `ios_base::boolalpha`) e quindi restituisce ` str`.  
  
 [boolalpha](../standard-library/ios-functions.md#boolalpha) inverte l'effetto di `noboolalpha`.  
  
### <a name="example"></a>Esempio  
  Vedere [boolalpha](../standard-library/ios-functions.md#boolalpha) per un esempio d'uso di `noboolalpha`.  
  
##  <a name="a-namenoshowbasea--noshowbase"></a><a name="noshowbase"></a>  noshowbase  
 Disattiva l'indicazione della base notazionale in cui viene visualizzato un numero.  
  
```  
ios_base& noshowbase(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 L'opzione `noshowbase` è abilitata per impostazione predefinita. Usare [showbase](../standard-library/ios-functions.md#showbase) per indicare la base notazionale dei numeri.  
  
 Il manipolatore chiama ` str.`[unsetf](../standard-library/ios-base-class.md#ios_base__unsetf)( `ios_base::showbase`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  Vedere [showbase](../standard-library/ios-functions.md#showbase) per un esempio di come usare `noshowbase`.  
  
##  <a name="a-namenoshowpointa--noshowpoint"></a><a name="noshowpoint"></a>  noshowpoint  
 Visualizza solo la parte di numero intero dei numeri a virgola mobile la cui parte frazionaria è pari a zero.  
  
```  
ios_base& noshowpoint(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 `noshowpoint` è attivo per impostazione predefinita; usare [showpoint](../standard-library/ios-functions.md#showpoint) e [precision](../standard-library/ios-base-class.md#ios_base__precision) per visualizzare zeri dopo la virgola decimale.  
  
 Il manipolatore chiama ` str.`[unsetf](../standard-library/ios-base-class.md#ios_base__unsetf)( `ios_base::showpoint`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_noshowpoint.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   double f1= 5.000;  
   cout << f1 << endl;   // noshowpoint is default  
   cout.precision( 4 );  
   cout << showpoint << f1 << endl;  
   cout << noshowpoint << f1 << endl;  
}  
```  
  
```Output  
5  
5.000  
5  
```  
  
##  <a name="a-namenoshowposa--noshowpos"></a><a name="noshowpos"></a>  noshowpos  
 Fa sì che per i numeri positivi il segno non venga visualizzato in modo esplicito.  
  
```  
ios_base& noshowpos(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 L'opzione `noshowpos` è abilitata per impostazione predefinita.  
  
 Il manipolatore chiama ` str.`[unsetf](../standard-library/ios-base-class.md#ios_base__unsetf)( `ios_base::showps`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  Vedere [showpos](../standard-library/ios-functions.md#showpos) per un esempio d'uso di `noshowpos`.  
  
##  <a name="a-namenoskipwsa--noskipws"></a><a name="noskipws"></a>  noskipws  
 Fa sì che gli spazi vengano letti dal flusso di input.  
  
```  
ios_base& noskipws(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, l'opzione [skipws](../standard-library/ios-functions.md#skipws) è attiva. Quando nel flusso di input viene letto uno spazio, segnala la fine del buffer.  
  
 Il manipolatore chiama ` str.`[unsetf](../standard-library/ios-base-class.md#ios_base__unsetf)( `ios_base::skipws`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_noskipws.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string>  
  
int main() {  
   using namespace std;     
   string s1, s2, s3;  
   cout << "Enter three strings: ";  
   cin >> noskipws >> s1 >> s2 >> s3;  
   cout << "." << s1  << "." << endl;  
   cout << "." << s2 << "." << endl;  
   cout << "." << s3 << "." << endl;     
}  
```  
  
##  <a name="a-namenounitbufa--nounitbuf"></a><a name="nounitbuf"></a>  nounitbuf  
 Fa sì che l'output venga memorizzato nel buffer ed elaborato quando il buffer è pieno.  
  
```  
ios_base& nounitbuf(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 [unitbuf](../standard-library/ios-functions.md#unitbuf) fa sì che il buffer venga elaborato quando non è vuoto.  
  
 Il manipolatore chiama ` str.`[unsetf](../standard-library/ios-base-class.md#ios_base__unsetf)( `ios_base::unitbuf`) e quindi restituisce ` str`.  
  
##  <a name="a-namenouppercasea--nouppercase"></a><a name="nouppercase"></a>  nouppercase  
 Specifica che le cifre esadecimali e l'esponente nella notazione scientifica vengano visualizzati in minuscolo.  
  
```  
ios_base& nouppercase(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Il manipolatore chiama ` str.`[unsetf](../standard-library/ios-base-class.md#ios_base__unsetf)( `ios_base::uppercase`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  Vedere [uppercase](../standard-library/ios-functions.md#uppercase) per un esempio d'uso di `nouppercase`.  
  
##  <a name="a-nameocta--oct"></a><a name="oct"></a>  oct  
 Specifica che le variabili Integer vengano visualizzate nella notazione in base 8.  
  
```  
ios_base& oct(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, le variabili Integer vengono visualizzate nella notazione in base 10. [dec](../standard-library/ios-functions.md#dec) e [hex](../standard-library/ios-functions.md#hex) modificano anche il modo in cui vengono visualizzate le variabili Integer.  
  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::oct`, `ios_base::basefield`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  Vedere [dec](../standard-library/ios-functions.md#dec) per un esempio di come usare **oct**.  
  
##  <a name="a-namerighta--right"></a><a name="right"></a>  right  
 Fa sì che il testo la cui larghezza non corrisponde a quella dell'output venga visualizzato nel flusso allineato con il margine destro.  
  
```  
ios_base& right(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 [left](../standard-library/ios-functions.md#left) modifica anche la giustificazione del testo.  
  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::right`, `ios_base::adjustfield`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_right.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   double f1= 5.00;  
   cout << f1 << endl;  
   cout.width( 20 );  
   cout << f1 << endl;  
   cout.width( 20 );  
   cout << left << f1 << endl;  
   cout.width( 20 );  
   cout << f1 << endl;  
   cout.width( 20 );  
   cout << right << f1 << endl;  
   cout.width( 20 );  
   cout << f1 << endl;  
}  
```  
  
```Output  
5  
                   5  
5                     
5                     
                   5  
                   5  
```  
  
##  <a name="a-namescientifica--scientific"></a><a name="scientific"></a>  scientific  
 Fa sì che i numeri a virgola mobile vengano visualizzati usando la notazione scientifica.  
  
```  
ios_base& scientific(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, la notazione [fixed](../standard-library/ios-functions.md#fixed) è attiva per i numeri a virgola mobile.  
  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::scientific`, `ios_base::floatfield`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_scientific.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   float i = 100.23F;  
  
   cout << i << endl;  
   cout << scientific << i << endl;  
}  
```  
  
```Output  
100.23  
1.002300e+002  
```  
  
##  <a name="a-nameshowbasea--showbase"></a><a name="showbase"></a>  showbase  
 Indica la base notazionale in cui viene visualizzato un numero.  
  
```  
ios_base& showbase(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 La base notazionale di un numero può essere modificata con [dec](../standard-library/ios-functions.md#dec), [oct](../standard-library/ios-functions.md#oct) o [hex](../standard-library/ios-functions.md#hex).  
  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::showbase`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_showbase.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   int j = 100;  
  
   cout << showbase << j << endl;   // dec is default  
   cout << hex << j << showbase << endl;  
   cout << oct << j << showbase << endl;  
  
   cout << dec << j << noshowbase << endl;  
   cout << hex << j << noshowbase << endl;  
   cout << oct << j << noshowbase << endl;  
}  
```  
  
```Output  
100  
0x64  
0144  
100  
64  
144  
```  
  
##  <a name="a-nameshowpointa--showpoint"></a><a name="showpoint"></a>  showpoint  
 Visualizza la parte di numero intero di un numero a virgola mobile e le cifre a destra del separatore decimale, anche quando la parte frazionaria è pari a zero.  
  
```  
ios_base& showpoint(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, l'opzione [noshowpoint](../standard-library/ios-functions.md#noshowpoint) è attiva.  
  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::showpoint`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  Vedere [noshowpoint](../standard-library/ios-functions.md#noshowpoint) per un esempio d'uso di `showpoint`.  
  
##  <a name="a-nameshowposa--showpos"></a><a name="showpos"></a>  showpos  
 Fa sì che per i numeri positivi il segno venga visualizzato in modo esplicito.  
  
```  
ios_base& showpos(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 La funzione predefinita è [noshowpos](../standard-library/ios-functions.md#noshowpos).  
  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::showpos`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_showpos.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   int i = 1;  
  
   cout << noshowpos << i << endl;   // noshowpos is default  
   cout << showpos << i << endl;  
}  
```  
  
```Output  
1  
+1  
```  
  
##  <a name="a-nameskipwsa--skipws"></a><a name="skipws"></a>  skipws  
 Fa sì che gli spazi non vengano letti dal flusso di input.  
  
```  
ios_base& skipws(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato _ *Str*.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, l'opzione `skipws` è attiva. [noskipws](../standard-library/ios-functions.md#noskipws) fa sì che gli spazi vengano letti dal flusso di input.  
  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::skipws`) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
#include <iostream>  
#include <string>  
  
int main( )   
{  
   using namespace std;  
   char s1, s2, s3;  
   cout << "Enter three characters: ";  
   cin >> skipws >> s1 >> s2 >> s3;  
   cout << "." << s1  << "." << endl;  
   cout << "." << s2 << "." << endl;  
   cout << "." << s3 << "." << endl;  
}  
```  
  
```Output  
  
1 2 3  
  
```  
  
```Output  
  
      1 2 3.1.  
.2.  
.3.  
```  
  
##  <a name="a-nameunitbufa--unitbuf"></a><a name="unitbuf"></a>  unitbuf  
 Fa sì che l'output venga elaborato quando il buffer non è pieno.  
  
```  
ios_base& unitbuf(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato ` str`.  
  
### <a name="remarks"></a>Note  
 Tenere presente che `endl` scarica anche il buffer.  
  
 L'opzione [nounitbuf](../standard-library/ios-functions.md#nounitbuf) è attiva per impostazione predefinita.  
  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( [ios_base::unitbuf](../standard-library/ios-base-class.md#ios_base__fmtflags)) e quindi restituisce ` str`.  
  
##  <a name="a-nameuppercasea--uppercase"></a><a name="uppercase"></a>  uppercase  
 Specifica che le cifre esadecimali e l'esponente nella notazione scientifica vengano visualizzati in maiuscolo.  
  
```  
ios_base& uppercase(ios_base& str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Riferimento a un oggetto di tipo [ios_base](../standard-library/ios-base-class.md) o a un tipo che eredita da `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto da cui è derivato ` str`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, l'opzione [nouppercase](../standard-library/ios-functions.md#nouppercase) è attiva.  
  
 Il manipolatore chiama ` str.`[setf](../standard-library/ios-base-class.md#ios_base__setf)( [ios_base::uppercase](../standard-library/ios-base-class.md#ios_base__fmtflags)) e quindi restituisce ` str`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_uppercase.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( void )   
{  
   using namespace std;  
  
   double i = 1.23e100;  
   cout << i << endl;  
   cout << uppercase << i << endl;  
  
   int j = 10;  
   cout << hex << nouppercase << j << endl;  
   cout << hex << uppercase << j << endl;  
}  
```  
  
```Output  
1.23e+100  
1.23E+100  
a  
A  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<ios>](../standard-library/ios.md)


