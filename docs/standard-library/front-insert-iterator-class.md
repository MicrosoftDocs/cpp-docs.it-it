---
title: "Classe front_insert_iterator | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "iterator/std::front_insert_iterator"
  - "std::front_insert_iterator"
  - "std.front_insert_iterator"
  - "front_insert_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "front_insert_iterator (classe)"
ms.assetid: a9a9c075-136a-4419-928b-c4871afa033c
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe front_insert_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un adattatore dell'iteratore che soddisfa i requisiti dell'iteratore di output. Inserisce, anziché sovrascrivere, gli elementi nella parte iniziale di una sequenza, fornendo in questo modo una semantica diversa dalla semantica di sovrascrittura fornita dagli iteratori dei contenitori sequenziali C++. Viene creato un modello della classe `front_insert_iterator` in base al tipo di contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Container>  
class front_insert_iterator;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Container`  
 Tipo di contenitore nella cui parte iniziale devono essere inseriti gli elementi da un `front_insert_iterator`.  
  
## <a name="remarks"></a>Note  
 Il contenitore deve soddisfare i requisiti di una sequenza di inserimento all'inizio in cui è possibile inserire gli elementi all'inizio della sequenza in un tempo costante ammortizzato. I contenitori di sequenza libreria di modelli Standard definiti dalla [classe deque](../standard-library/deque-class.md) e [classe list](../standard-library/list-class.md) fornire necessarie `push_front` membro funzione e soddisfano tali requisiti. Al contrario, i contenitori sequenziali definiti per la [classe vector](vector%20Class.md) non soddisfano questi requisiti e non possono essere adattati per l'utilizzo con `front_insert_iterator`s. Un `front_insert_iterator` deve essere sempre inizializzato con il relativo contenitore.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[front_insert_iterator](#front_insert_iterator__front_insert_iterator)|Crea un iteratore in grado di inserire elementi all'inizio di un oggetto contenitore specificato.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[container_type](#front_insert_iterator__container_type)|Tipo che rappresenta il contenitore in cui è necessario effettuare un inserimento all'inizio.|  
|[riferimento](#front_insert_iterator__reference)|Tipo che fornisce un riferimento a un elemento di una sequenza controllata dal contenitore associato.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore *](#front_insert_iterator__operator_star)|Operatore di dereferenziazione utilizzato per implementare l'espressione dell'iteratore di output * `i` = `x` per un inserimento all'inizio.|  
|[operator + +](#front_insert_iterator__operator_add_add)|Incrementa `front_insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.|  
|[operatore =](#front_insert_iterator__operator_eq)|Operatore di assegnazione utilizzato per implementare l'espressione dell'iteratore di output * `i` = `x` per un inserimento all'inizio.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: \< iterator>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namefrontinsertiteratorcontainertypea-frontinsertiteratorcontainertype"></a><a name="front_insert_iterator__container_type"></a>  front_insert_iterator:: container_type  
 Tipo che rappresenta il contenitore in cui è necessario effettuare un inserimento all'inizio.  
  
```  
typedef Container container_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **contenitore**.  
  
### <a name="example"></a>Esempio  
  
```  
// front_insert_iterator_container_type.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <list>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   list<int> L1;  
   front_insert_iterator<list<int> >::container_type L2 = L1;  
   front_inserter ( L2 ) = 20;  
   front_inserter ( L2 ) = 10;  
   front_inserter ( L2 ) = 40;  
  
   list <int>::iterator vIter;  
   cout << "The list L2 is: ( ";  
   for ( vIter = L2.begin ( ) ; vIter != L2.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
\* Output:   
The list L2 is: ( 40 10 20 ).  
*\  
```  
  
##  <a name="a-namefrontinsertiteratorfrontinsertiteratora-frontinsertiteratorfrontinsertiterator"></a><a name="front_insert_iterator__front_insert_iterator"></a>  front_insert_iterator:: front_insert_iterator  
 Crea un iteratore in grado di inserire elementi all'inizio di un oggetto contenitore specificato.  
  
```  
explicit front_insert_iterator(Container& _Cont);
```  
  
### <a name="parameters"></a>Parametri  
 `_Cont`  
 L'oggetto contenitore in cui il `front_insert_iterator` consiste nell'inserire gli elementi.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `front_insert_iterator` per l'oggetto contenitore di parametro.  
  
### <a name="example"></a>Esempio  
  
```  
// front_insert_iterator_front_insert_iterator.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <list>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
   list <int>::iterator L_Iter;  
  
   list<int> L;  
   for (i = -1 ; i < 9 ; ++i )    
   {  
      L.push_back ( 2 * i );  
   }  
  
   cout << "The list L is:\n ( ";  
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)  
      cout << *L_Iter << " ";  
   cout << ")." << endl;  
  
   // Using the member function to insert an element  
   front_inserter ( L ) = 20;  
  
   // Alternatively, one may use the template function  
   front_insert_iterator< list < int> > Iter(L);  
 *Iter = 30;  
  
   cout << "After the front insertions, the list L is:\n ( ";  
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)  
      cout << *L_Iter << " ";  
   cout << ")." << endl;  
}  
\* Output:   
The list L is:  
 ( -2 0 2 4 6 8 10 12 14 16 ).  
After the front insertions, the list L is:  
 ( 30 20 -2 0 2 4 6 8 10 12 14 16 ).  
*\  
```  
  
##  <a name="a-namefrontinsertiteratoroperatorstara-frontinsertiteratoroperator"></a><a name="front_insert_iterator__operator_star"></a>  front_insert_iterator:: operator *  
 Consente di dereferenziare l'iteratore insert restituire l'elemento che consente di risolvere.  
  
```  
front_insert_iterator<Container>& operator*();
```  
  
### <a name="return-value"></a>Valore restituito  
 La funzione membro restituisce il valore dell'elemento a cui punta.  
  
### <a name="remarks"></a>Note  
 Utilizzato per implementare l'espressione dell'iteratore di output **\*Iter** = **valore**. Se **Iter** è un iteratore che punta un elemento in una sequenza, quindi **\*Iter** = **valore** sostituisce l'elemento con valore e non modifica il numero totale di elementi nella sequenza.  
  
### <a name="example"></a>Esempio  
  
```  
// front_insert_iterator_deref.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <list>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
   list <int>::iterator L_Iter;  
  
   list<int> L;  
   for ( i = -1 ; i < 9 ; ++i )   
   {  
      L.push_back ( 2 * i );  
   }  
  
   cout << "The list L is:\n ( ";  
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)  
      cout << *L_Iter << " ";  
   cout << ")." << endl;  
  
   front_insert_iterator< list < int> > Iter(L);  
 *Iter = 20;  
  
   // Alternatively, you may use  
   front_inserter ( L ) = 30;  
  
   cout << "After the front insertions, the list L is:\n ( ";  
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)  
      cout << *L_Iter << " ";  
   cout << ")." << endl;  
}  
\* Output:   
The list L is:  
 ( -2 0 2 4 6 8 10 12 14 16 ).  
After the front insertions, the list L is:  
 ( 30 20 -2 0 2 4 6 8 10 12 14 16 ).  
*\  
```  
  
##  <a name="a-namefrontinsertiteratoroperatoraddadda-frontinsertiteratoroperator"></a><a name="front_insert_iterator__operator_add_add"></a>  front_insert_iterator:: operator + +  
 Incrementa `back_insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.  
  
```  
front_insert_iterator<Container>& operator++();

front_insert_iterator<Container> operator++(int);
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `front_insert_iterator` addressing dalla posizione successiva in cui è possibile archiviare un valore.  
  
### <a name="remarks"></a>Note  
 Gli operatori sia preincrementation e postincrementation restituiscono lo stesso risultato.  
  
### <a name="example"></a>Esempio  
  
```  
// front_insert_iterator_op_incre.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <list>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   list<int> L1;  
   front_insert_iterator<list<int> > iter ( L1 );  
 *iter = 10;  
   iter++;  
 *iter = 20;  
   iter++;  
 *iter = 30;  
   iter++;  
  
   list <int>::iterator vIter;  
   cout << "The list L1 is: ( ";  
   for ( vIter = L1.begin ( ) ; vIter != L1.end ( ); vIter++ )  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
\* Output:   
The list L1 is: ( 30 20 10 ).  
*\  
```  
  
##  <a name="a-namefrontinsertiteratoroperatoreqa-frontinsertiteratoroperator"></a><a name="front_insert_iterator__operator_eq"></a>  front_insert_iterator:: operator =  
 Accoda (push) un valore nella parte anteriore del contenitore.  
  
```  
front_insert_iterator<Container>& operator=(typename Container::const_reference val);

front_insert_iterator<Container>& operator=(typename Container::value_type&& val);
```  
  
### <a name="parameters"></a>Parametri  
 ` val`  
 Il valore da assegnare al contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'ultimo elemento inserito all'inizio del contenitore.  
  
### <a name="remarks"></a>Note  
 Restituisce il primo operatore membro `container.push_front( val)`, quindi restituisce `*this`.  
  
 Valuta il secondo operatore membro  
  
 `container->push_front((typename Container::value_type&&) val)`,  
  
 Restituisce quindi `*this`.  
  
### <a name="example"></a>Esempio  
  
```  
// front_insert_iterator_op_assign.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <list>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   list<int> L1;  
   front_insert_iterator<list<int> > iter ( L1 );  
 *iter = 10;  
   iter++;  
 *iter = 20;  
   iter++;  
 *iter = 30;  
   iter++;  
  
   list <int>::iterator vIter;  
   cout << "The list L1 is: ( ";  
   for ( vIter = L1.begin ( ) ; vIter != L1.end ( ); vIter++ )  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
\* Output:   
The list L1 is: ( 30 20 10 ).  
*\  
```  
  
##  <a name="a-namefrontinsertiteratorreferencea-frontinsertiteratorreference"></a><a name="front_insert_iterator__reference"></a>  front_insert_iterator:: Reference  
 Tipo che fornisce un riferimento a un elemento di una sequenza controllata dal contenitore associato.  
  
```  
typedef typename Container::reference reference;  
```  
  
### <a name="example"></a>Esempio  
  
```  
// front_insert_iterator_reference.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <list>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   list<int> L;  
   front_insert_iterator<list<int> > fiivIter( L );  
 *fiivIter = 10;  
 *fiivIter = 20;  
 *fiivIter = 30;  
  
   list<int>::iterator LIter;  
   cout << "The list L is: ( ";  
   for ( LIter = L.begin ( ) ; LIter != L.end ( ); LIter++)  
      cout << *LIter << " ";  
   cout << ")." << endl;  
  
   front_insert_iterator<list<int> >::reference   
        RefFirst = *(L.begin ( ));  
   cout << "The first element in the list L is: "   
        << RefFirst << "." << endl;  
}  
\* Output:   
The list L is: ( 30 20 10 ).  
The first element in the list L is: 30.  
*\  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\< iteratore>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)

