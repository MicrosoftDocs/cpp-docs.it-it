---
title: Operatori &lt;istream&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 7174da41-f301-4a34-b631-0ab918b188d2
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 4c2a2f8c2c2b55e3c14db9e44a4b05041c0ecfc9
ms.lasthandoff: 02/24/2017

---
# <a name="ltistreamgt-operators"></a>Operatori &lt;istream&gt;
 
##  <a name="a-nameoperatorgtgta--operatorgtgt"></a><a name="operator_gt__gt_"></a>  operator&gt;&gt;  
 Estrae caratteri e stringhe dal flusso.  
  
```  
template <class Elem, class Tr>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr,   
    Elem* str);

template <class Elem, class Tr>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr,   
    Elem& Ch);

template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,   
    signed char* str);

template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,   
    signed char& Ch);

template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,   
    unsigned char* str);

template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,   
    unsigned char& Ch);

template <class Elem, class Tr, class Type>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& Istr,  
    Type& val);
```  
  
### <a name="parameters"></a>Parametri  
 `Ch`  
 Carattere.  
  
 `Istr`  
 Flusso.  
  
 ` str`  
 Una stringa.  
  
 ` val`  
 Tipo.  
  
### <a name="return-value"></a>Valore restituito  
 Flusso.  
  
### <a name="remarks"></a>Note  
 La classe `basic_istream` definisce anche diversi operatori di estrazione. Per altre informazioni, vedere [basic_istream::operator>>](../standard-library/basic-istream-class.md#basic_istream__operator_gt__gt_).  
  
 La funzione modello:  
  
```cpp  
template <class Elem, class Tr>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem* str);
```  
  
 estrae un massimo di *N* - 1 elementi e li archivia nella matrice a partire da _ *Str*. Se `Istr`. [width](../standard-library/ios-base-class.md#ios_base__width) è maggiore di zero, *N* è `Istr`. **width**; in caso contrario, è possibile dichiarare la dimensione della matrice più grande di **Elem**. La funzione archivia sempre il valore **Elem()** dopo gli elementi estratti archiviati. L'estrazione termina prima della fine del file, in corrispondenza di un carattere con valore **Elem**(0) (non estratto) o di qualsiasi elemento (non estratto) che verrebbe rimosso da [ws](../standard-library/istream-functions.md#ws). Se non estrae alcun elemento, la funzione chiama `Istr`. [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In tutti i casi, chiama `Istr`. **width**(0) e restituisce `Istr`.  
  
 **Nota sulla sicurezza** La stringa con terminazione Null estratta dal flusso di input non deve superare la dimensione del buffer di destinazione ` str`. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 La funzione modello:  
  
```cpp  
template <class Elem, class Tr>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem& Ch);
```  
  
 estrae un elemento, se possibile, e lo archivia in `Ch`. In caso contrario, chiama **is**. [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In tutti i casi, restituisce `Istr`.  
  
 La funzione modello:  
  
```cpp  
template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char* str);
```  
  
 restituisce `Istr` >> ( `char`**\***) ` str`.  
  
 La funzione modello:  
  
```cpp  
template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char& Ch);
```  
  
 restituisce `Istr` >> ( **char&**) `Ch`.  
  
 La funzione modello:  
  
```cpp  
template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char* str);
```  
  
 restituisce `Istr` >> ( **char \***) ` str`.  
  
 La funzione modello:  
  
```cpp  
template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char& Ch);
```  
  
 restituisce `Istr` >> ( **char&**) `Ch`.  
  
 La funzione modello:  
  
```cpp  
template <class Elem, class Tr, class Type>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& Istr,  
    Type& val);
```  
  
 restituisce `Istr` `>>` ` val` e converte un `rvalue reference` a `Istr` in un `lvalue` nel processo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// istream_op_extract.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   ws( cin );  
   char c[10];  
  
   cin.width( 9 );  
   cin >> c;  
   cout << c << endl;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<istream>](../standard-library/istream.md)


