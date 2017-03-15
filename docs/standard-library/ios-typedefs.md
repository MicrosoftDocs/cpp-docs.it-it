---
title: Typedef &lt;ios&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 0b962632-3439-44de-bf26-20c67a7f0ff3
caps.latest.revision: 13
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: d9f9dd5f13f0f4559455ff8d8cf09bab5350b1f0
ms.lasthandoff: 02/24/2017

---
# <a name="ltiosgt-typedefs"></a>Typedef &lt;ios&gt;
||||  
|-|-|-|  
|[ios](#ios)|[streamoff](#streamoff)|[streampos](#streampos)|  
|[streamsize](#streamsize)|[wios](#wios)|[wstreampos](#wstreampos)|  
  
##  <a name="a-nameiosa--ios"></a><a name="ios"></a>  ios  
 Supporta la classe ios dalla libreria iostream precedente.  
  
```  
typedef basic_ios<char, char_traits<char>> ios;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_ios](../standard-library/basic-ios-class.md), specializzata per elementi di tipo `char` con tratti di carattere predefiniti.  
  
##  <a name="a-namestreamoffa--streamoff"></a><a name="streamoff"></a>  streamoff  
 Supporta operazioni interne.  
  
```  
#ifdef _WIN64  
    typedef __int64 streamoff;  
#else  
    typedef long streamoff;  
#endif  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un intero con segno che descrive un oggetto in grado di archiviare un offset di byte interessato da varie operazioni di posizionamento del flusso. La relativa rappresentazione contiene almeno 32 bit di valore. Non necessariamente è abbastanza ampia da rappresentare una posizione di byte arbitraria all'interno di un flusso. Il valore **streamoff(-1)** indica generalmente un offset errato.  
  
##  <a name="a-namestreamposa--streampos"></a><a name="streampos"></a>  streampos  
 Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.  
  
```  
typedef fpos<mbstate_t> streampos;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo di [fpos](../standard-library/fpos-class.md)< `mbstate_t`>.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_streampos.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )   
{  
   using namespace std;  
  
   ofstream x( "iostream.txt" );  
   x << "testing";  
   streampos y = x.tellp( );  
   cout << y << endl;  
}  
```  
  
```Output  
7  
```  
  
##  <a name="a-namestreamsizea--streamsize"></a><a name="streamsize"></a>  streamsize  
 Denota le dimensioni del flusso.  
  
```  
#ifdef _WIN64  
    typedef __int64 streamsize;  
#else  
    typedef int streamsize;  
#endif  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un intero con segno che descrive un oggetto in grado di archiviare il numero totale di elementi interessati da varie operazioni di flusso. La relativa rappresentazione contiene almeno 16 bit. Non necessariamente è abbastanza ampia da rappresentare una posizione di byte arbitraria all'interno di un flusso.  
  
### <a name="example"></a>Esempio  
  Dopo aver compilato ed eseguito il programma seguente, esaminare il file test.txt per visualizzare l'effetto dell'impostazione `streamsize`.  
  
```  
// ios_streamsize.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )   
{  
   using namespace std;  
   char a[16] = "any such text";  
   ofstream x( "test.txt" );  
   streamsize y = 6;  
   x.write( a, y );  
}  
```  
  
##  <a name="a-namewiosa--wios"></a><a name="wios"></a>  wios  
 Supporta la classe wios dalla libreria iostream precedente.  
  
```  
typedef basic_ios<wchar_t, char_traits<wchar_t>> wios;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_ios](../standard-library/basic-ios-class.md), specializzata per elementi di tipo `wchar_t` con tratti di carattere predefiniti.  
  
##  <a name="a-namewstreamposa--wstreampos"></a><a name="wstreampos"></a>  wstreampos  
 Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.  
  
```  
typedef fpos<mbstate_t> wstreampos;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo di [fpos](../standard-library/fpos-class.md)< `mbstate_t`>.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_wstreampos.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )   
{  
   using namespace std;  
   wofstream xw( "wiostream.txt" );  
   xw << L"testing";  
   wstreampos y = xw.tellp( );  
   cout << y << endl;  
}  
```  
  
```Output  
7  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<ios>](../standard-library/ios.md)


