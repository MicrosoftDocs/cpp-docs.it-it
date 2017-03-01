---
title: Funzioni &lt;ostream&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: d6e56cc0-c8df-4dbe-be10-98e14c35ed3a
caps.latest.revision: 15
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 44708461657101b1ddad7db76f1c3c8d4df07f3a
ms.lasthandoff: 02/24/2017

---
# <a name="ltostreamgt-functions"></a>Funzioni &lt;ostream&gt;
||||  
|-|-|-|  
|[swap](#swap)|[endl](#endl)|[ends](#ends)|  
|[flush](#flush)|  
  
##  <a name="a-nameendla--endl"></a><a name="endl"></a>  endl  
 Termina una riga e scarica il buffer.  
  
```  
template class<Elem, Tr> basic_ostream<Elem, Tr>& endl(basic_ostream<Elem, Tr>& Ostr);
```  
  
### <a name="parameters"></a>Parametri  
 `Elem`  
 Tipo dell'elemento.  
  
 `Ostr`  
 Oggetto di tipo `basic_ostream`.  
  
 `Tr`  
 Tratti di carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto di tipo `basic_ostream`.  
  
### <a name="remarks"></a>Note  
 Il manipolatore chiama `Ostr`**.**[put](../standard-library/basic-ostream-class.md#basic_ostream__put)( `Ostr`**.** [widen](../standard-library/basic-ios-class.md#basic_ios__widen)( **'\n'**)), quindi chiama `Ostr`**.**[flush](../standard-library/basic-ostream-class.md#basic_ostream__flush). Restituisce `Ostr`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ostream_endl.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "testing" << endl;  
}  
```  
  
```Output  
testing  
```  
  
##  <a name="a-nameendsa--ends"></a><a name="ends"></a>  ends  
 Termina una stringa.  
  
```  
template class<Elem, Tr> basic_ostream<Elem, Tr>& ends(basic_ostream<Elem, Tr>& Ostr);
```  
  
### <a name="parameters"></a>Parametri  
 `Elem`  
 Tipo dell'elemento.  
  
 `Ostr`  
 Oggetto di tipo `basic_ostream`.  
  
 `Tr`  
 Tratti di carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto di tipo `basic_ostream`.  
  
### <a name="remarks"></a>Note  
 Il manipolatore chiama `Ostr`**.**[put](../standard-library/basic-ostream-class.md#basic_ostream__put)( `Elem`( **'\0'**)). Restituisce `Ostr.`  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ostream_ends.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "a";  
   cout << "b" << ends;  
   cout << "c" << endl;  
}  
```  
  
```Output  
ab c  
```  
  
##  <a name="a-nameflusha--flush"></a><a name="flush"></a>  flush  
 Scarica il buffer.  
  
```  
template class<Elem, Tr> basic_ostream<Elem, Tr>& flush(basic_ostream<Elem, Tr>& Ostr);
```  
  
### <a name="parameters"></a>Parametri  
 `Elem`  
 Tipo dell'elemento.  
  
 `Ostr`  
 Oggetto di tipo `basic_ostream`.  
  
 `Tr`  
 Tratti di carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto di tipo `basic_ostream`.  
  
### <a name="remarks"></a>Note  
 Il manipolatore chiama `Ostr`**.**[flush](../standard-library/basic-ostream-class.md#basic_ostream__flush). Restituisce `Ostr`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ostream_flush.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "testing" << flush;  
}  
```  
  
```Output  
testing  
```  
  
##  <a name="a-nameswapa--swap"></a><a name="swap"></a>  swap  
 Scambia i valori di due oggetti `basic_ostream`.  
  
```  
template <class Elem, class Tr>  
void swap(
    basic_ostream<Elem, Tr>& left,  
    basic_ostream<Elem, Tr>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` left`  
 Riferimento lvalue a un oggetto `basic_ostream`.  
  
 ` right`  
 Riferimento lvalue a un oggetto `basic_ostream`.  
  
### <a name="remarks"></a>Note  
 La funzione modello `swap` esegue ` left.swap(`` right``)`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<ostream>](../standard-library/ostream.md)


