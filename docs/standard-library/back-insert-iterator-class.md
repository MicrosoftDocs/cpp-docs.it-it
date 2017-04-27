---
title: Classe back_insert_iterator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- iterator/std::back_insert_iterator
- back_insert_iterator
- iterator/std::back_insert_iterator::container_type
- iterator/std::back_insert_iterator::reference
dev_langs:
- C++
helpviewer_keywords:
- back_insert_iterator class
ms.assetid: a1ee07f2-cf9f-46a1-8608-cfaf207f9713
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
ms.openlocfilehash: b50819686ca10a5676c75fb47375572d39974a1f
ms.lasthandoff: 02/24/2017

---
# <a name="backinsertiterator-class"></a>Classe back_insert_iterator
Descrive un adattatore dell'iteratore che soddisfa i requisiti dell'iteratore di output. Inserisce, anziché sovrascrivere, gli elementi nel back-end di una sequenza, fornendo in questo modo una semantica diversa dalla semantica di sovrascrittura fornita dagli iteratori dei contenitori sequenziali C++. Viene creato un modello della classe `back_insert_iterator` in base al tipo di contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Container>  
class back_insert_iterator;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Container`  
 Tipo di contenitore nella cui parte finale devono essere inseriti gli elementi da `back_insert_iterator`.  
  
## <a name="remarks"></a>Note  
 Il contenitore deve soddisfare i requisiti di una sequenza di inserimento inversa in cui è possibile inserire gli elementi alla fine della sequenza in un tempo costante ammortizzato. I contenitori di sequenza della libreria standard C++ definiti dalle classi [deque](../standard-library/deque-class.md), [list](../standard-library/list-class.md) e [vector](../standard-library/vector-class.md) forniscono la funzione membro `push_back` necessaria e soddisfano questi requisiti. Questi tre contenitori oltre alle stringhe possono essere adattati per l'utilizzo con i `back_insert_iterator`. Un `back_insert_iterator` deve essere sempre inizializzato con il relativo contenitore.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[back_insert_iterator](#back_insert_iterator__back_insert_iterator)|Costruisce un `back_insert_iterator` che inserisce gli elementi dopo l'ultimo elemento di un contenitore.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[container_type](#back_insert_iterator__container_type)|Tipo che fornisce un contenitore per `back_insert_iterator`.|  
|[reference](#back_insert_iterator__reference)|Tipo che fornisce un riferimento per `back_insert_iterator`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator*](#back_insert_iterator__operator_star)|Operatore di dereferenziazione usato per implementare l'espressione dell'iteratore di output * `i` = `x` per un inserimento inverso.|  
|[operator++](#back_insert_iterator__operator_add_add)|Incrementa `back_insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.|  
|[operator=](#back_insert_iterator__operator_eq)|Operatore di assegnazione usato per implementare l'espressione dell'iteratore di output * `i` = `x` per un inserimento inverso.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: \<iterator>  
  
 **Spazio dei nomi:** std  
  
##  <a name="back_insert_iterator__back_insert_iterator"></a>  back_insert_iterator::back_insert_iterator  
 Costruisce un `back_insert_iterator` che inserisce gli elementi dopo l'ultimo elemento di un contenitore.  
  
```   
explicit back_insert_iterator(Container& _Cont);
```  
  
### <a name="parameters"></a>Parametri  
 `_Cont`  
 Il contenitore in cui `back_insert_iterator` deve inserire un elemento.  
  
### <a name="return-value"></a>Valore restituito  
 `back_insert_iterator` per il contenitore di parametri.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// back_insert_iterator_back_insert_iterator.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for ( i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back ( i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The initial vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   // Insertions with member function  
   back_inserter ( vec ) = 40;  
   back_inserter ( vec ) = 50;  
  
   // Alternatively, insertions can be done with template function  
   back_insert_iterator<vector<int> > backiter ( vec );  
 *backiter = 600;  
   backiter++;  
 *backiter = 700;  
  
   cout << "After the insertions, the vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The initial vector vec is: ( 1 2 3 ).  
After the insertions, the vector vec is: ( 1 2 3 40 50 600 700 ).  
```  
  
##  <a name="back_insert_iterator__container_type"></a>  back_insert_iterator::container_type  
 Tipo che fornisce un contenitore per `back_insert_iterator`.  
  
```   
typedef Container  
container_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **Container**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// back_insert_iterator_container_type.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back (  i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The original vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> >::container_type vec1 = vec;  
   back_inserter ( vec1 ) = 40;  
  
   cout << "After the insertion, the vector is: ( ";  
   for ( vIter = vec1.begin ( ) ; vIter != vec1.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The original vector vec is: ( 1 2 3 ).  
After the insertion, the vector is: ( 1 2 3 40 ).  
```  
  
##  <a name="back_insert_iterator__operator_star"></a>  back_insert_iterator::operator*  
 Operatore di dereferenziazione usato per implementare l'espressione dell'iteratore di output \* *i* = *x*.  
  
```  
back_insert_iterator<Container>& operator*();
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'elemento inserito alla fine del contenitore.  
  
### <a name="remarks"></a>Note  
 Usato per implementare l'espressione dell'iteratore di output **\*Iter** = **value**. Se **Iter** è un iteratore che punta a un elemento in una sequenza, **\*Iter** = **value** sostituisce l'elemento con il valore senza modificare il numero totale di elementi presenti nella sequenza.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// back_insert_iterator_back_insert.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back ( i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> > backiter ( vec );  
 *backiter = 10;  
   backiter++;      // Increment to the next element  
 *backiter = 20;  
   backiter++;  
  
   cout << "After the insertions, the vector vec becomes: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 1 2 3 ).  
After the insertions, the vector vec becomes: ( 1 2 3 10 20 ).  
```  
  
##  <a name="back_insert_iterator__operator_add_add"></a>  back_insert_iterator::operator++  
 Incrementa `back_insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.  
  
```  
back_insert_iterator<Container>& operator++();
back_insert_iterator<Container> operator++(int);
```  
  
### <a name="return-value"></a>Valore restituito  
 `back_insert_iterator` che punta alla posizione successiva in cui può essere archiviato un valore.  
  
### <a name="remarks"></a>Note  
 Sia gli operatori di pre-incremento che quelli di post-incremento restituiscono lo stesso risultato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// back_insert_iterator_op_incre.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 3 ; ++i )    
   {  
      vec.push_back ( 10 * i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> > backiter ( vec );  
 *backiter = 30;  
   backiter++;      // Increment to the next element  
 *backiter = 40;  
   backiter++;  
  
   cout << "After the insertions, the vector vec becomes: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 10 20 ).  
After the insertions, the vector vec becomes: ( 10 20 30 40 ).  
```  
  
##  <a name="back_insert_iterator__operator_eq"></a>  back_insert_iterator::operator=  
 Aggiunge o esegue il push di un valore nel back-end di un contenitore.  
  
```  
back_insert_iterator<Container>& operator=(typename Container::const_reference val);
back_insert_iterator<Container>& operator=(typename Container::value_type&& val);
```  
  
### <a name="parameters"></a>Parametri  
 `val`  
 Valore da inserire nel contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'ultimo elemento inserito alla fine del contenitore.  
  
### <a name="remarks"></a>Note  
 Il primo operatore membro valuta `Container.push_back( val)`  
  
 e quindi restituisce `*this`. Il secondo operatore membro valuta  
  
 `container->push_back((typename Container::value_type&&)val)`,  
  
 e quindi restituisce `*this`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// back_insert_iterator_op_assign.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back ( i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> > backiter ( vec );  
 *backiter = 10;  
   backiter++;      // Increment to the next element  
 *backiter = 20;  
   backiter++;  
  
   cout << "After the insertions, the vector vec becomes: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
##  <a name="back_insert_iterator__reference"></a>  back_insert_iterator::reference  
 Tipo che fornisce un riferimento per `back_insert_iterator`.  
  
```  
typedef typename Container::reference reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un riferimento a un elemento della sequenza controllata dal contenitore associato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// back_insert_iterator_reference.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back ( i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> >::reference   
        RefLast = *(vec.end ( ) - 1 );  
   cout << "The last element in the vector vec is: "   
        << RefLast << "." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 1 2 3 ).  
The last element in the vector vec is: 3.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<iterator>](../standard-library/iterator.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)


