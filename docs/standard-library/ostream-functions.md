---
title: Funzioni &lt;ostream&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ostream/std::swap
- ostream/std::endl
- ostream/std::ends
- ostream/std::flush
ms.assetid: d6e56cc0-c8df-4dbe-be10-98e14c35ed3a
caps.latest.revision: "15"
manager: ghogen
helpviewer_keywords:
- std::swap [C++]
- std::endl [C++]
- std::ends [C++]
- std::flush [C++]
ms.openlocfilehash: 252a178f1ce71c30bdd830811cbce59b22acc791
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ltostreamgt-functions"></a>Funzioni &lt;ostream&gt;
||||  
|-|-|-|  
|[swap](#swap)|[endl](#endl)|[ends](#ends)|  
|[flush](#flush)|  
  
##  <a name="endl"></a>  endl  
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
 Il manipolatore chiama `Ostr`**.**[put](../standard-library/basic-ostream-class.md#put)( `Ostr`**.** [widen](../standard-library/basic-ios-class.md#widen)( **'\n'**)), quindi chiama `Ostr`**.**[flush](../standard-library/basic-ostream-class.md#flush). Restituisce `Ostr`.  
  
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
  
##  <a name="ends"></a>  ends  
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
 Il manipolatore chiama `Ostr`**.**[put](../standard-library/basic-ostream-class.md#put)( `Elem`( **'\0'**)). Restituisce `Ostr.`  
  
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
  
##  <a name="flush"></a>  flush  
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
 Il manipolatore chiama `Ostr`**.**[flush](../standard-library/basic-ostream-class.md#flush). Restituisce `Ostr`.  
  
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
  
##  <a name="swap"></a>  swap  
 Scambia i valori di due oggetti `basic_ostream`.  
  
```  
template <class Elem, class Tr>  
void swap(
    basic_ostream<Elem, Tr>& left,  
    basic_ostream<Elem, Tr>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Riferimento lvalue a un oggetto `basic_ostream`.  
  
 `right`  
 Riferimento lvalue a un oggetto `basic_ostream`.  
  
### <a name="remarks"></a>Note  
 La funzione modello `swap` esegue `left.swap(right)`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<ostream>](../standard-library/ostream.md)

