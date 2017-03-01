---
title: Classe ostream_iterator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ostream_iterator
- std.ostream_iterator
- std::ostream_iterator
- iterator/std::ostream_iterator
dev_langs:
- C++
helpviewer_keywords:
- ostream_iterator class
ms.assetid: 24d842d3-9f45-4bf6-a697-62f5968f5a03
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 2d05749ba2837a3879c91886b9266de47dd2ece6
ms.openlocfilehash: 3542d4a47abc3616c00360f9885761d08de5e884
ms.lasthandoff: 02/24/2017

---
# <a name="ostreamiterator-class"></a>Classe ostream_iterator
La classe modello ostream_iterator descrive un oggetto iteratore di output che consente di scrivere elementi consecutivi nel flusso di output con l'estrazione **operator <<**.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Type class CharType = char class Traits = char_traits <CharType>>  
class ostream_iterator
```  
  
#### <a name="parameters"></a>Parametri  
 *Type*  
 Il tipo di oggetto da inserire nel flusso di output.  
  
 `CharType`  
 Tipo che rappresenta il tipo di carattere per `ostream_iterator`. Questo argomento è facoltativo e il valore predefinito è `char`*.*  
  
 `Traits`  
 Tipo che rappresenta il tipo di carattere per `ostream_iterator`. Questo argomento è facoltativo e il valore predefinito è `char_traits`\< *CharType>.*  
  
 La classe ostream_iterator deve soddisfare i requisiti per un iteratore di output. Gli algoritmi possono essere scritti direttamente nei flussi di output utilizzando un `ostream_iterator`.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[ostream_iterator](#ostream_iterator__ostream_iterator)|Costruisce `ostream_iterator` inizializzato e delimitato per scrivere nel flusso di output.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#ostream_iterator__char_type)|Tipo che fornisce il tipo di carattere di `ostream_iterator`.|  
|[ostream_type](#ostream_iterator__ostream_type)|Tipo che fornisce il tipo di flusso di `ostream_iterator`.|  
|[traits_type](#ostream_iterator__traits_type)|Tipo che fornisce il tipo di tratti di `ostream_iterator`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator*](#ostream_iterator__operator_star)|Operatore di dereferenziazione usato per implementare l'espressione dell'iteratore di output * `i` = `x`.|  
|[operator++](#ostream_iterator__operator_add_add)|Operatore di incremento non funzionale che restituisce `ostream_iterator` allo stesso oggetto a cui ha puntato prima che venisse chiamata l'operazione.|  
|[operator=](#ostream_iterator__operator_eq)|Operatore di assegnazione usato per implementare l'espressione dell'iteratore di output * `i` = `x` per la scrittura in un flusso di output.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<iterator>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-nameostreamiteratorchartypea--ostreamiteratorchartype"></a><a name="ostream_iterator__char_type"></a>  ostream_iterator::char_type  
 Tipo che fornisce il tipo di carattere dell'iteratore.  
  
```
typedef CharType char_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ostream_iterator_char_type.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   typedef ostream_iterator<int>::char_type CHT1;  
   typedef ostream_iterator<int>::traits_type CHTR1;  
  
   // ostream_iterator for stream cout  
   // with new line delimiter:  
    ostream_iterator<int, CHT1, CHTR1> intOut ( cout , "\n" );  
  
   // Standard iterator interface for writing  
   // elements to the output stream:  
   cout << "The integers written to the output stream\n"  
        << "by intOut are:" << endl;  
 *intOut = 10;  
 *intOut = 20;  
 *intOut = 30;  
}  
\* Output:   
The integers written to the output stream  
by intOut are:  
10  
20  
30  
*\  
```  
  
##  <a name="a-nameostreamiteratoroperatorstara--ostreamiteratoroperator"></a><a name="ostream_iterator__operator_star"></a>  ostream_iterator::operator*  
 Operatore di dereferenziazione usato per implementare l'espressione dell'iteratore di output \* *ii* = *x*.  
  
```
ostream_iterator<Type, CharType, Traits>& operator*();
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento a `ostream_iterator`.  
  
### <a name="remarks"></a>Note  
 I requisiti per un iteratore di output che devono essere soddisfatti da `ostream_iterator` richiedono solo che l'espressione \* *ii* = *t* sia valida e non riguardano individualmente gli operatori **operator** o `operator=`. L'operatore membro in questa implementazione restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ostream_iterator_op_deref.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   // ostream_iterator for stream cout  
   // with new line delimiter  
   ostream_iterator<int> intOut ( cout , "\n" );  
  
   // Standard iterator interface for writing  
   // elements to the output stream  
   cout << "Elements written to output stream:" << endl;  
 *intOut = 10;  
   intOut++;      // No effect on iterator position  
 *intOut = 20;  
 *intOut = 30;  
}  
\* Output:   
Elements written to output stream:  
10  
20  
30  
*\  
```  
  
##  <a name="a-nameostreamiteratoroperatoraddadda--ostreamiteratoroperator"></a><a name="ostream_iterator__operator_add_add"></a>  ostream_iterator::operator++  
 Operatore di incremento non funzionale che restituisce `ostream_iterator` allo stesso oggetto a cui ha puntato prima che venisse chiamata l'operazione.  
  
```
ostream_iterator<Type, CharType, Traits>& operator++();
ostream_iterator<Type, CharType, Traits> operator++(int);
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento a `ostream_iterator`.  
  
### <a name="remarks"></a>Note  
 Questi operatori membro restituiscono entrambi **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ostream_iterator_op_incr.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   // ostream_iterator for stream cout  
   // with new line delimiter  
   ostream_iterator<int> intOut ( cout , "\n" );  
  
   // standard iterator interface for writing  
   // elements to the output stream  
   cout << "Elements written to output stream:" << endl;  
 *intOut = 10;  
   intOut++;      // No effect on iterator position  
 *intOut = 20;  
 *intOut = 30;  
}  
\* Output:   
Elements written to output stream:  
10  
20  
30  
*\  
```  
  
##  <a name="a-nameostreamiteratoroperatoreqa--ostreamiteratoroperator"></a><a name="ostream_iterator__operator_eq"></a>  ostream_iterator::operator=  
 Operatore di assegnazione usato per implementare l'espressione di output_iterator * `i` = `x` per la scrittura in un flusso di output.  
  
```
ostream_iterator<Type, CharType, Traits>& operator=(const Type& val);
```  
  
### <a name="parameters"></a>Parametri  
 `val`  
 Valore dell'oggetto di tipo `Type` da inserire nel flusso di output.  
  
### <a name="return-value"></a>Valore restituito  
 L'operatore inserisce `val` nel flusso di output associato all'oggetto, seguito dal delimitatore specificato nel [costruttore di ostream_iterator](#ostream_iterator__ostream_iterator) (se presente) e quindi restituisce un riferimento a `ostream_iterator`.  
  
### <a name="remarks"></a>Note  
 I requisiti per un iteratore di output che devono essere soddisfatti da `ostream_iterator` richiedono solo che l'espressione * `ii` = `t` sia valida e non riguardano individualmente gli operatori operator o operator=. Questo operatore membro restituisce `*this`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ostream_iterator_op_assign.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   // ostream_iterator for stream cout  
   // with new line delimiter  
   ostream_iterator<int> intOut ( cout , "\n" );  
  
   // Standard iterator interface for writing  
   // elements to the output stream  
   cout << "Elements written to output stream:" << endl;  
 *intOut = 10;  
   intOut++;      // No effect on iterator position  
 *intOut = 20;  
 *intOut = 30;  
}  
\* Output:   
Elements written to output stream:  
10  
20  
30  
*\  
```  
  
##  <a name="a-nameostreamiteratorostreamiteratora--ostreamiteratorostreamiterator"></a><a name="ostream_iterator__ostream_iterator"></a>  ostream_iterator::ostream_iterator  
 Costruisce `ostream_iterator` inizializzato e delimitato per scrivere nel flusso di output.  
  
```
ostream_iterator(
    ostream_type& _Ostr);

ostream_iterator(
    ostream_type& _Ostr,
    const CharType* _Delimiter);
```  
  
### <a name="parameters"></a>Parametri  
 `_Ostr`  
 Flusso di output di tipo [ostream_iterator:: ostream_type](#ostream_iterator__ostream_type) di cui eseguire l'iterazione.  
  
 `_Delimiter`  
 Delimitatore inserito nel flusso di output tra i valori.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore inizializza il puntatore del flusso di output con `&_Ostr`. Il puntatore di stringa del delimitatore designa una stringa vuota.  
  
 Il secondo costruttore inizializza il puntatore del flusso di output con `&_Ostr` e il puntatore di stringa del delimitatore con `_Delimiter`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ostream_iterator_ostream_iterator.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   // ostream_iterator for stream cout  
   ostream_iterator<int> intOut ( cout , "\n" );  
 *intOut = 10;  
   intOut++;  
 *intOut = 20;  
   intOut++;  
  
   int i;  
   vector<int> vec;  
   for ( i = 1 ; i < 7 ; ++i )  
   {  
      vec.push_back (  i );  
   }  
  
   // Write elements to standard output stream  
   cout << "Elements output without delimiter: ";  
   copy ( vec.begin ( ), vec.end ( ),  
          ostream_iterator<int> ( cout ) );  
   cout << endl;  
  
   // Write elements with delimiter " : " to output stream  
   cout << "Elements output with delimiter: ";  
   copy ( vec.begin ( ), vec.end ( ),  
          ostream_iterator<int> ( cout, " : " ) );  
   cout << endl;  
}  
\* Output:   
10  
20  
Elements output without delimiter: 123456  
Elements output with delimiter: 1 : 2 : 3 : 4 : 5 : 6 :   
*\  
```  
  
##  <a name="a-nameostreamiteratorostreamtypea--ostreamiteratorostreamtype"></a><a name="ostream_iterator__ostream_type"></a>  ostream_iterator::ostream_type  
 Tipo che fornisce il tipo di flusso dell'iteratore.  
  
```
typedef basic_ostream<CharType, Traits> ostream_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo di [basic_ostream](../standard-library/basic-ostream-class.md)< `CharType`, `Traits`>, una classe di flusso della gerarchia di iostream che definisce gli oggetti che possono essere usati per la scrittura.  
  
### <a name="example"></a>Esempio  
  Vedere [ostream_iterator](#ostream_iterator__ostream_iterator) per indicazioni su come dichiarare e usare `ostream_type`.  
  
##  <a name="a-nameostreamiteratortraitstypea--ostreamiteratortraitstype"></a><a name="ostream_iterator__traits_type"></a>  ostream_iterator::traits_type  
 Tipo che fornisce il tipo di tratti di carattere dell'iteratore.  
  
```
typedef Traits traits_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **Traits**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ostream_iterator_traits_type.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   // The following not OK, but are just the default values:  
   typedef ostream_iterator<int>::char_type CHT1;  
   typedef ostream_iterator<int>::traits_type CHTR1;  
  
   // ostream_iterator for stream cout  
   // with new line delimiter:  
    ostream_iterator<int, CHT1, CHTR1> intOut ( cout , "\n" );  
  
   // Standard iterator interface for writing  
   // elements to the output stream:  
   cout << "The integers written to output stream\n"  
        << "by intOut are:" << endl;  
 *intOut = 1;  
 *intOut = 10;  
 *intOut = 100;  
}  
\* Output:   
The integers written to output stream  
by intOut are:  
1  
10  
100  
*\  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<iterator>](../standard-library/iterator.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




