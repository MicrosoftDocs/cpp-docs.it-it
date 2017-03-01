---
title: Classe reverse_iterator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- reverse_iterator
- std::reverse_iterator
- std.reverse_iterator
- xutility/std::reverse_iterator
dev_langs:
- C++
helpviewer_keywords:
- reverse_iterator class
ms.assetid: c0b34d04-ae9a-4999-9aff-28b313897ffa
caps.latest.revision: 21
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
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: ff83cfe68b15e1e94328e96dcd6f33f266bf531a
ms.lasthandoff: 02/24/2017

---
# <a name="reverseiterator-class"></a>Classe reverse_iterator
La classe modello è un adattatore di iteratore che descrive un oggetto iteratore inverso che si comporta come un iteratore ad accesso casuale o bidirezionale solo in senso inverso. Consente l'attraversamento all'indietro di un intervallo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class RandomIterator>  
class reverse_iterator  
```  
  
#### <a name="parameters"></a>Parametri  
 RandomIterator  
 Tipo che rappresenta l'iteratore da adattare perché operi in senso inverso.  
  
## <a name="remarks"></a>Note  
 I contenitori della libreria standard C++ definiscono anche i tipi `reverse_iterator` e `const_reverse_iterator` e hanno funzioni membro `rbegin` e `rend` che restituiscono iteratori inversi. Tali iteratori dispongono di una semantica di sovrascrittura. L'adattatore `reverse_iterator` integra questa funzionalità in quanto offre semantica di inserimento e può essere utilizzato anche con i flussi.  
  
 Gli `reverse_iterator` che richiedono un iteratore bidirezionale non devono chiamare alcuna funzione membro `operator+=`, `operator+`, `operator-=`, `operator-` o `operator[]` che possono essere utilizzate solo con gli iteratori ad accesso casuale.  
  
 Se l'intervallo di un iteratore è [ ` first`,  last), dove la parentesi quadra a sinistra indica l'inclusione di \_ *First* e la parentesi a destra indica l'inclusione degli elementi fino a \_ *Left* ma escludendo lo stesso \_ *Left*. Questi stessi elementi sono inclusi nella sequenza inversa [ **rev** â€“ ` first`, **rev** â€“ \_ *Left*) in modo che se \_ *Left* è l'elemento immediatamente successivo all'ultimo elemento di una sequenza, il primo elemento **rev** â€“ \_ *First* della sequenza inversa punti a \*(\_ *Left* â€“ 1 ). L'identità che collega tutti gli iteratori inversi ai relativi iteratori sottostanti è:  
  
 &\*( **reverse_iterator** ( *i* ) ) == &\*( *i* â€“ 1 ).  
  
 In pratica, questo significa che in tale sequenza inversa reverse_iterator farà riferimento all'elemento immediatamente successivo (a destra) all'elemento a cui ha fatto riferimento l'iteratore nella sequenza originale. Quindi, se un iteratore ha puntato all'elemento 6 della sequenza (2, 4, 6, 8), `reverse_iterator` punterà all'elemento 4 della sequenza inversa (8, 6, 4, 2).  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[reverse_iterator](#reverse_iterator__reverse_iterator)|Costruisce un `reverse_iterator` predefinito o un `reverse_iterator` da un iteratore sottostante.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[difference_type](#reverse_iterator__difference_type)|Tipo che fornisce la differenza tra due `reverse_iterator` che fanno riferimento agli elementi all'interno dello stesso contenitore.|  
|[iterator_type](#reverse_iterator__iterator_type)|Tipo che fornisce l'iteratore sottostante per un `reverse_iterator`.|  
|[pointer](#reverse_iterator__pointer)|Tipo che fornisce un puntatore a un elemento a cui punta un `reverse_iterator`.|  
|[reference](#reverse_iterator__reference)|Tipo che fornisce un riferimento a un elemento a cui punta un `reverse_iterator`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[base](#reverse_iterator__base)|Recupera l'iteratore sottostante dal relativo `reverse_iterator`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator_star](#reverse_iterator__operator_star)|Restituisce l'elemento a cui punta un `reverse_iterator`.|  
|[operator+](#reverse_iterator__operator_add)|Aggiunge un offset a un iteratore e restituisce il nuovo `reverse_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.|  
|[operator++](#reverse_iterator__operator_add_add)|Incrementa `reverse_iterator` all'elemento successivo.|  
|[operator+=](#reverse_iterator__operator_add_eq)|Aggiunge un offset specificato da un `reverse_iterator`.|  
|[operator-](#reverse_iterator__operator-)|Sottrae un offset da un `reverse_iterator` e restituisce un `reverse_iterator` che punta all'elemento in corrispondenza della posizione dell'offset.|  
|[operator--](#reverse_iterator__operator--)|Decrementa `reverse_iterator` all'elemento precedente.|  
|[operator-=](#reverse_iterator__operator-_eq)|Sottrae un offset specificato da un `reverse_iterator`.|  
|[operator->](#reverse_iterator__operator-_gt_)|Restituisce un puntatore all'elemento a cui punta un `reverse_iterator`.|  
|[operator&#91;&#93;](#reverse_iterator__operator_at)|Restituisce un riferimento all'offset di un elemento dall'elemento a cui punta un `reverse_iterator` di un numero specificato di posizioni.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<iterator>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namereverseiteratorbasea--reverseiteratorbase"></a><a name="reverse_iterator__base"></a>  reverse_iterator::base  
 Recupera l'iteratore sottostante dal relativo `reverse_iterator`.  
  
```   
RandomIterator base() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore sottostante l'oggetto `reverse_iterator`.  
  
### <a name="remarks"></a>Note  
 L'identità che collega tutti gli iteratori inversi ai relativi iteratori sottostanti è:  
  
 &\*( `reverse_iterator` ( *i* ) ) == &\*( *i* â€“ 1 ).  
  
 In pratica, questo significa che in tale sequenza inversa l'oggetto `reverse_iterator` farà riferimento all'elemento immediatamente successivo (a destra) all'elemento a cui ha fatto riferimento l'iteratore nella sequenza originale. Quindi, se un iteratore ha puntato all'elemento 6 della sequenza (2, 4, 6, 8), `reverse_iterator` punterà all'elemento 4 della sequenza inversa (8, 6, 4, 2).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_base.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <algorithm>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for ( i = 1 ; i < 6 ; ++i )    
   {  
      vec.push_back ( 2 * i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::iterator pos, bpos;  
   pos = find ( vec.begin ( ), vec.end ( ), 6 );  
   cout << "The iterator pos points to: " << *pos << "." << endl;  
  
   typedef reverse_iterator<vector<int>::iterator>::iterator_type it_vec_int_type;  
  
   reverse_iterator<it_vec_int_type> rpos ( pos );  
   cout << "The reverse_iterator rpos points to: " << *rpos   
        << "." << endl;  
  
   bpos = rpos.base ( );  
   cout << "The iterator underlying rpos is bpos & it points to: "   
        << *bpos << "." << endl;  
}  
```  
  
##  <a name="a-namereverseiteratordifferencetypea--reverseiteratordifferencetype"></a><a name="reverse_iterator__difference_type"></a>  reverse_iterator::difference_type  
 Tipo che fornisce la differenza tra due `reverse_iterator` che fanno riferimento agli elementi all'interno dello stesso contenitore.  
  
```   
typedef typename iterator_traits<RandomIterator>::difference_type  difference_type; 
```  
  
### <a name="remarks"></a>Note  
 Il tipo di differenza `reverse_iterator` è uguale al tipo di differenza dell'iteratore.  
  
 Il tipo è un sinonimo del nome tipo del tratto dell'iteratore `iterator_traits`\< **RandomIterator**> **::pointer**.  
  
### <a name="example"></a>Esempio  
  Vedere [reverse_iterator::operator&#91;&#93;](#reverse_iterator__operator_at) per indicazioni su come dichiarare e usare `difference_type`.  
  
##  <a name="a-namereverseiteratoriteratortypea--reverseiteratoriteratortype"></a><a name="reverse_iterator__iterator_type"></a>  reverse_iterator::iterator_type  
 Tipo che fornisce l'iteratore sottostante per un `reverse_iterator`.  
  
```  
typedef RandomIterator iterator_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Iterator`.  
  
### <a name="example"></a>Esempio  
  Vedere [reverse_iterator::base](#reverse_iterator__base) per indicazioni su come dichiarare e usare `iterator_type`.  
  
##  <a name="a-namereverseiteratoroperatorstara--reverseiteratoroperator"></a><a name="reverse_iterator__operator_star"></a>  reverse_iterator::operator*  
 Restituisce l'elemento a cui punta un oggetto reverse_iterator.  
  
```   
reference operator*() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore degli elementi a cui punta l'oggetto reverse_iterator.  
  
### <a name="remarks"></a>Note  
 L'operatore restituisce \*( **current** â€“ 1).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_op_ref.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <algorithm>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 6 ; ++i )    
   {  
      vec.push_back ( 2 * i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::iterator pos, bpos;  
   pos = find ( vec.begin ( ), vec.end ( ), 6 );  
  
   // Declare a difference type for a parameter  
   // declare a reference return type  
   reverse_iterator<vector<int>::iterator>::reference refpos = *pos;  
   cout << "The iterator pos points to: " << refpos << "." << endl;  
}  
```  
  
##  <a name="a-namereverseiteratoroperatoradda--reverseiteratoroperator"></a><a name="reverse_iterator__operator_add"></a>  reverse_iterator::operator+  
 Aggiunge un offset a un iteratore e restituisce il nuovo `reverse_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.  
  
```  
reverse_iterator<RandomIterator> operator+(difference_type Off) const;
```  
  
### <a name="parameters"></a>Parametri  
 `Off`  
 Offset da aggiungere all'iteratore inverso.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `reverse_iterator` che punta all'elemento di offset.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può essere usata solo se `reverse_iterator` soddisfa i requisiti di un iteratore ad accesso causale.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_op_add.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 6 ; ++i )    
   {  
      vec.push_back ( 2 * i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   // Initializing reverse_iterators to the first element  
   vector <int>::reverse_iterator rVPOS1 = vec.rbegin ( );  
  
   cout << "The iterator rVPOS1 initially points to the first "  
        << "element\n in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
  
   vector <int>::reverse_iterator rVPOS2 =rVPOS1 + 2; // offset added  
   cout << "After the +2 offset, the iterator rVPOS2 points\n"  
        << " to the 3rd element in the reversed sequence: "  
        << *rVPOS2 << "." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 2 4 6 8 10 ).  
The vector vec reversed is: ( 10 8 6 4 2 ).  
The iterator rVPOS1 initially points to the first element  
 in the reversed sequence: 10.  
After the +2 offset, the iterator rVPOS2 points  
 to the 3rd element in the reversed sequence: 6.  
```  
  
##  <a name="a-namereverseiteratoroperatoraddadda--reverseiteratoroperator"></a><a name="reverse_iterator__operator_add_add"></a>  reverse_iterator::operator++  
 Incrementa l'oggetto reverse_iterator all'elemento precedente.  
  
```  
reverse_iterator<RandomIterator>& operator++();
reverse_iterator<RandomIterator> operator++(int);
```  
  
### <a name="return-value"></a>Valore restituito  
 Il primo operatore restituisce l'oggetto `reverse_iterator` pre-incrementato e il secondo, l'operatore di post-incremento, restituisce una copia dell'oggetto `reverse_iterator` incrementato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può essere usata solo se `reverse_iterator` soddisfa i requisiti di un iteratore bidirezionale.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_op_incr.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for ( i = 1 ; i < 6 ; ++i )    
   {  
      vec.push_back ( 2 * i - 1 );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   // Initializing reverse_iterators to the last element  
   vector <int>::reverse_iterator rVPOS1 = vec.rbegin( );  
  
   cout << "The iterator rVPOS1 initially points to the first "  
        << "element\n in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
  
   rVPOS1++;  // postincrement, preincrement: ++rVPSO1  
  
   cout << "After incrementing, the iterator rVPOS1 points\n"  
        << " to the second element in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 1 3 5 7 9 ).  
The vector vec reversed is: ( 9 7 5 3 1 ).  
The iterator rVPOS1 initially points to the first element  
 in the reversed sequence: 9.  
After incrementing, the iterator rVPOS1 points  
 to the second element in the reversed sequence: 7.  
```  
  
##  <a name="a-namereverseiteratoroperatoraddeqa--reverseiteratoroperator"></a><a name="reverse_iterator__operator_add_eq"></a>  reverse_iterator::operator+=  
 Aggiunge un offset specificato da un oggetto reverse_iterator.  
  
```  
reverse_iterator<RandomIterator>& operator+=(difference_type Off);
```  
  
### <a name="parameters"></a>Parametri  
 `Off`  
 Offset di incremento dell'iteratore.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'elemento a cui punta l'oggetto `reverse_iterator`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_op_addoff.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 6 ; ++i )   
   {  
      vec.push_back ( 2 * i );  
   }  
  
   vector <int>::iterator vIter;  
  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   // Initializing reverse_iterators to the last element  
   vector <int>::reverse_iterator rVPOS1 = vec.rbegin ( );  
  
   cout << "The iterator rVPOS1 initially points to the first "  
        << "element\n in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
  
   rVPOS1+=2;   // addition of an offset  
   cout << "After the +2 offset, the iterator rVPOS1 now points\n"  
        << " to the third element in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 2 4 6 8 10 ).  
The vector vec reversed is: ( 10 8 6 4 2 ).  
The iterator rVPOS1 initially points to the first element  
 in the reversed sequence: 10.  
After the +2 offset, the iterator rVPOS1 now points  
 to the third element in the reversed sequence: 6.  
```  
  
##  <a name="a-namereverseiteratoroperator-a--reverseiteratoroperator-"></a><a name="reverse_iterator__operator-"></a>  reverse_iterator::operator-  
 Sottrae un offset da un `reverse_iterator` e restituisce un `reverse_iterator` che punta all'elemento in corrispondenza della posizione dell'offset.  
  
```  
reverse_iterator<RandomIterator> operator-(difference_type Off) const;
```  
  
### <a name="parameters"></a>Parametri  
 `Off`  
 Offset da sottrarre dall'oggetto reverse_iterator.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `reverse_iterator` che punta all'elemento di offset.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può essere usata solo se `reverse_iterator` soddisfa i requisiti di un iteratore ad accesso causale.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_op_sub.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for ( i = 1 ; i < 6 ; ++i )  
   {  
      vec.push_back ( 3 * i );  
   }  
  
   vector <int>::iterator vIter;  
  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   // Initializing reverse_iterators to the first element  
   vector <int>::reverse_iterator rVPOS1 = vec.rend ( ) - 1;  
  
   cout << "The iterator rVPOS1 initially points to the last "  
        << "element\n in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
  
   vector <int>::reverse_iterator rVPOS2 =rVPOS1 - 2; // offset subtracted  
   cout << "After the -2 offset, the iterator rVPOS2 points\n"  
        << " to the 2nd element from the last in the reversed sequence: "  
        << *rVPOS2 << "." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 3 6 9 12 15 ).  
The vector vec reversed is: ( 15 12 9 6 3 ).  
The iterator rVPOS1 initially points to the last element  
 in the reversed sequence: 3.  
After the -2 offset, the iterator rVPOS2 points  
 to the 2nd element from the last in the reversed sequence: 9.  
```  
  
##  <a name="a-namereverseiteratoroperator--a--reverseiteratoroperator--"></a><a name="reverse_iterator__operator--"></a>  reverse_iterator::operator--  
 Decrementa l'oggetto reverse_iterator all'elemento precedente.  
  
```  
reverse_iterator<RandomIterator>& operator--();
reverse_iterator<RandomIterator> operator--(int);
```  
  
### <a name="return-value"></a>Valore restituito  
 Il primo operatore restituisce l'oggetto `reverse_iterator` pre-decrementato e il secondo, l'operatore di post-decremento, restituisce una copia dell'oggetto `reverse_iterator` decrementato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può essere usata solo se `reverse_iterator` soddisfa i requisiti di un iteratore bidirezionale.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_op_decr.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 6 ; ++i )    
   {  
      vec.push_back ( 2 * i - 1 );  
   }  
  
   vector <int>::iterator vIter;  
  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   // Initializing reverse_iterators to the first element  
   vector <int>::reverse_iterator rVPOS1 = vec.rend ( ) - 1;  
  
   cout << "The iterator rVPOS1 initially points to the last "  
        << "element\n in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
   rVPOS1--;  // postdecrement, predecrement: --rVPSO1  
  
   cout << "After the decrement, the iterator rVPOS1 points\n"  
        << " to the next-to-last element in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 1 3 5 7 9 ).  
The vector vec reversed is: ( 9 7 5 3 1 ).  
The iterator rVPOS1 initially points to the last element  
 in the reversed sequence: 1.  
After the decrement, the iterator rVPOS1 points  
 to the next-to-last element in the reversed sequence: 3.  
```  
  
##  <a name="a-namereverseiteratoroperator-eqa--reverseiteratoroperator-"></a><a name="reverse_iterator__operator-_eq"></a>  reverse_iterator::operator-=  
 Sottrae un offset specificato da un `reverse_iterator`.  
  
```  
reverse_iterator<RandomIterator>& operator-=(difference_type Off);
```  
  
### <a name="parameters"></a>Parametri  
 `Off`  
 Offset da sottrarre dall'oggetto `reverse_iterator`.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può essere usata solo se `reverse_iterator` soddisfa i requisiti di un iteratore ad accesso causale.  
  
 L'operatore valuta **current** + _ *Off*. quindi restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_op_suboff.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 6 ; ++i )  
   {  
      vec.push_back ( 3 * i );  
   }  
  
   vector <int>::iterator vIter;  
  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   // Initializing reverse_iterators to the first element  
   vector <int>::reverse_iterator rVPOS1 = vec.rend ( ) - 1;  
  
   cout << "The iterator rVPOS1 initially points to the last "  
        << "element\n in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
  
   rVPOS1-=2;      // Subtraction of an offset  
   cout << "After the -2 offset, the iterator rVPOS1 now points\n"  
        << " to the 2nd element from the last in the reversed sequence: "  
        << *rVPOS1 << "." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 3 6 9 12 15 ).  
The vector vec reversed is: ( 15 12 9 6 3 ).  
The iterator rVPOS1 initially points to the last element  
 in the reversed sequence: 3.  
After the -2 offset, the iterator rVPOS1 now points  
 to the 2nd element from the last in the reversed sequence: 9.  
```  
  
##  <a name="a-namereverseiteratoroperator-gta--reverseiteratoroperator-gt"></a><a name="reverse_iterator__operator-_gt_"></a>  reverse_iterator::operator-&gt;  
 Restituisce un puntatore all'elemento a cui punta un `reverse_iterator`.  
  
```   
pointer operator->() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'elemento a cui punta l'oggetto `reverse_iterator`.  
  
### <a name="remarks"></a>Note  
 L'operatore restituisce **&\*\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_ptrto.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <algorithm>  
#include <vector>  
#include <utility>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   typedef vector<pair<int,int> > pVector;  
   pVector vec;  
   vec.push_back(pVector::value_type(1,2));  
   vec.push_back(pVector::value_type(3,4));  
   vec.push_back(pVector::value_type(5,6));  
  
   pVector::iterator pvIter;  
   cout << "The vector vec of integer pairs is:\n( ";  
   for ( pvIter = vec.begin ( ) ; pvIter != vec.end ( ); pvIter++)  
      cout << "( " << pvIter -> first << ", " << pvIter -> second << ") ";  
   cout << ")" << endl << endl;  
  
   pVector::reverse_iterator rpvIter;  
   cout << "The vector vec reversed is:\n( ";  
   for ( rpvIter = vec.rbegin( ) ; rpvIter != vec.rend( ); rpvIter++ )  
      cout << "( " << rpvIter -> first << ", " << rpvIter -> second << ") ";  
   cout << ")" << endl << endl;  
  
   pVector::iterator pos = vec.begin ( );  
   pos++;  
   cout << "The iterator pos points to:\n( " << pos -> first << ", "   
   << pos -> second << " )" << endl << endl;  
  
   pVector::reverse_iterator rpos (pos);   
  
   // Use operator -> with return type: why type int and not int*  
   int fint = rpos -> first;  
   int sint = rpos -> second;  
  
   cout << "The reverse_iterator rpos points to:\n( " << fint << ", "   
   << sint << " )" << endl;  
}  
```  
  
```Output  
The vector vec of integer pairs is:  
( ( 1, 2) ( 3, 4) ( 5, 6) )  
  
The vector vec reversed is:  
( ( 5, 6) ( 3, 4) ( 1, 2) )  
  
The iterator pos points to:  
( 3, 4 )  
  
The reverse_iterator rpos points to:  
( 1, 2 )  
```  
  
##  <a name="a-namereverseiteratoroperatorata--reverseiteratoroperator"></a><a name="reverse_iterator__operator_at"></a>  reverse_iterator::operator[]  
 Restituisce un riferimento all'offset di un elemento dall'elemento a cui punta un `reverse_iterator` di un numero specificato di posizioni.  
  
```   
reference operator[](difference_type Off) const;
```  
  
### <a name="parameters"></a>Parametri  
 `Off`  
 Offset dall'indirizzo dell'oggetto `reverse_iterator`.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'offset dell'elemento.  
  
### <a name="remarks"></a>Note  
 L'operatore restituisce **\***( **\*this** + `Off`).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_ret_ref.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <algorithm>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 6 ; ++i )  
   {  
      vec.push_back ( 2 * i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::iterator pos;  
   pos = find ( vec.begin ( ), vec.end ( ), 8 );  
   reverse_iterator<vector<int>::iterator> rpos ( pos );  
  
   // Declare a difference type for a parameter  
   reverse_iterator<vector<int>::iterator>::difference_type diff = 2;  
  
   cout << "The iterator pos points to: " << *pos << "." << endl;  
   cout << "The iterator rpos points to: " << *rpos << "." << endl;  
  
   // Declare a reference return type & use operator[]  
   reverse_iterator<vector<int>::iterator>::reference refrpos = rpos [diff];  
   cout << "The iterator rpos now points to: " << refrpos << "." << endl;     
}  
```  
  
```Output  
The vector vec is: ( 2 4 6 8 10 ).  
The vector vec reversed is: ( 10 8 6 4 2 ).  
The iterator pos points to: 8.  
The iterator rpos points to: 6.  
The iterator rpos now points to: 2.  
```  
  
##  <a name="a-namereverseiteratorpointera--reverseiteratorpointer"></a><a name="reverse_iterator__pointer"></a>  reverse_iterator::pointer  
 Tipo che fornisce un puntatore a un elemento a cui punta un `reverse_iterator`.  
  
```  
typedef typename iterator_traits<RandomIterator>::pointer pointer;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del nome tipo del tratto dell'iteratore `iterator_traits`\< *RandomIterator*> **::pointer**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_pointer.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <algorithm>  
#include <vector>  
#include <utility>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   typedef vector<pair<int,int> > pVector;  
   pVector vec;  
   vec.push_back( pVector::value_type( 1,2 ) );  
   vec.push_back( pVector::value_type( 3,4 ) );  
   vec.push_back( pVector::value_type( 5,6 ) );  
  
   pVector::iterator pvIter;  
   cout << "The vector vec of integer pairs is:\n" << "( ";  
   for ( pvIter = vec.begin ( ) ; pvIter != vec.end ( ); pvIter++)  
      cout << "( " << pvIter -> first << ", " << pvIter -> second << ") ";  
   cout << ")" << endl;  
  
   pVector::reverse_iterator rpvIter;  
   cout << "\nThe vector vec reversed is:\n" << "( ";  
   for ( rpvIter = vec.rbegin( ) ; rpvIter != vec.rend( ); rpvIter++)  
      cout << "( " << rpvIter -> first << ", " << rpvIter -> second << ") ";  
   cout << ")" << endl;  
  
   pVector::iterator pos = vec.begin ( );  
   pos++;  
   cout << "\nThe iterator pos points to:\n"  
        << "( " << pos -> first << ", "  
        << pos -> second << " )" << endl;  
  
   pVector::reverse_iterator rpos (pos);  
   cout << "\nThe iterator rpos points to:\n"  
        << "( " << rpos -> first << ", "  
        << rpos -> second << " )" << endl;  
}  
```  
  
```Output  
The vector vec of integer pairs is:  
( ( 1, 2) ( 3, 4) ( 5, 6) )  
  
The vector vec reversed is:  
( ( 5, 6) ( 3, 4) ( 1, 2) )  
  
The iterator pos points to:  
( 3, 4 )  
  
The iterator rpos points to:  
( 1, 2 )  
```  
  
##  <a name="a-namereverseiteratorreferencea--reverseiteratorreference"></a><a name="reverse_iterator__reference"></a>  reverse_iterator::reference  
 Tipo che fornisce un riferimento a un elemento a cui punta un oggetto reverse_iterator.  
  
```  
typedef typename iterator_traits<RandomIterator>::reference reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del nome tipo del tratto dell'iteratore `iterator_traits`\< *RandomIterator*> **::reference**.  
  
### <a name="example"></a>Esempio  
  Vedere [reverse_iterator::operator&#91;&#93;](#reverse_iterator__operator_at) o [reverse_iterator::operator*](#reverse_iterator__operator_star) per indicazioni su come dichiarare e usare **reference**.  
  
##  <a name="a-namereverseiteratorreverseiteratora--reverseiteratorreverseiterator"></a><a name="reverse_iterator__reverse_iterator"></a>  reverse_iterator::reverse_iterator  
 Costruisce un `reverse_iterator` predefinito o un `reverse_iterator` da un iteratore sottostante.  
  
```   
reverse_iterator();  
explicit reverse_iterator(RandomIterator right);

template <class Type>  
reverse_iterator(const reverse_iterator<Type>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Iteratore da adattare a un oggetto `reverse_iterator`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `reverse_iterator` predefinito o `reverse_iterator` adattato da un iteratore sottostante.  
  
### <a name="remarks"></a>Note  
 L'identità che collega tutti gli iteratori inversi ai relativi iteratori sottostanti è:  
  
 &\*( `reverse_iterator` ( *i* ) ) == &\*( *i* â€“ 1 ).  
  
 In pratica, questo significa che in tale sequenza inversa reverse_iterator farà riferimento all'elemento immediatamente successivo (a destra) all'elemento a cui ha fatto riferimento l'iteratore nella sequenza originale. Quindi, se un iteratore ha puntato all'elemento 6 della sequenza (2, 4, 6, 8), `reverse_iterator` punterà all'elemento 4 della sequenza inversa (8, 6, 4, 2).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// reverse_iterator_reverse_iterator.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <algorithm>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for ( i = 1 ; i < 6 ; ++i )  
   {  
      vec.push_back ( i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::reverse_iterator rvIter;  
   cout << "The vector vec reversed is: ( ";  
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)  
      cout << *rvIter << " ";  
   cout << ")." << endl;  
  
   vector <int>::iterator pos;  
   pos = find ( vec.begin ( ), vec.end ( ), 4 );  
   cout << "The iterator pos = " << *pos << "." << endl;  
  
   vector <int>::reverse_iterator rpos ( pos );  
   cout << "The reverse_iterator rpos = " << *rpos   
        << "." << endl;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<iterator>](../standard-library/iterator.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)


