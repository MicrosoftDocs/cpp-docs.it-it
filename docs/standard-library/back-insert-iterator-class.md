---
title: "Classe back_insert_iterator | Microsoft Docs"
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
  - "iterator/std::back_insert_iterator"
  - "std::back_insert_iterator"
  - "back_insert_iterator"
  - "std.back_insert_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "back_insert_iterator (classe)"
ms.assetid: a1ee07f2-cf9f-46a1-8608-cfaf207f9713
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe back_insert_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

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
 Il contenitore deve soddisfare i requisiti di una sequenza di inserimento inversa in cui è possibile inserire gli elementi alla fine della sequenza in un tempo costante ammortizzato. Contenitori sequenziali STL definiti dalla [classe deque](../standard-library/deque-class.md), [classe list](../standard-library/list-class.md) e [classe vector](vector%20Class.md) fornire necessarie `push_back` membro funzione e soddisfano tali requisiti. Questi tre contenitori oltre alle stringhe possono essere adattati per l'utilizzo con i `back_insert_iterator`. Un `back_insert_iterator` deve essere sempre inizializzato con il relativo contenitore.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[back_insert_iterator](#back_insert_iterator__back_insert_iterator)|Costruisce un `back_insert_iterator` che inserisce gli elementi dopo l'ultimo elemento di un contenitore.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[container_type](#back_insert_iterator__container_type)|Tipo che fornisce un contenitore per `back_insert_iterator`.|  
|[riferimento](#back_insert_iterator__reference)|Tipo che fornisce un riferimento per `back_insert_iterator`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore *](#back_insert_iterator__operator_star)|Operatore di dereferenziazione utilizzato per implementare l'espressione dell'iteratore di output * `i` = `x` per un inserimento inverso.|  
|[operator + +](#back_insert_iterator__operator_add_add)|Incrementa `back_insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.|  
|[operatore =](#back_insert_iterator__operator_eq)|Operatore di assegnazione utilizzato per implementare l'espressione dell'iteratore di output * `i` = `x` per un inserimento inverso.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: \< iterator>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namebackinsertiteratorbackinsertiteratora-backinsertiteratorbackinsertiterator"></a><a name="back_insert_iterator__back_insert_iterator"></a>  back_insert_iterator:: back_insert_iterator  
 Costruisce un `back_insert_iterator` che inserisce gli elementi dopo l'ultimo elemento di un contenitore.  
  
```  
 
explicit back_insert_iterator(Container& _Cont);
```  
  
### <a name="parameters"></a>Parametri  
 `_Cont`  
 Il contenitore che il `back_insert_iterator` consiste nell'inserire un elemento in.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `back_insert_iterator` per il contenitore di parametro.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namebackinsertiteratorcontainertypea-backinsertiteratorcontainertype"></a><a name="back_insert_iterator__container_type"></a>  back_insert_iterator:: container_type  
 Tipo che fornisce un contenitore per `back_insert_iterator`.  
  
```  
 
typedef Container  
container_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **contenitore**.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namebackinsertiteratoroperatorstara-backinsertiteratoroperator"></a><a name="back_insert_iterator__operator_star"></a>  back_insert_iterator:: operator *  
 Operatore di dereferenziazione utilizzato per implementare l'espressione dell'iteratore di output \* *i* = *x*.  
  
```  
back_insert_iterator<Container>& operator*();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'elemento inserito nella parte posteriore del contenitore.  
  
### <a name="remarks"></a>Note  
 Utilizzato per implementare l'espressione dell'iteratore di output **\*Iter** = **valore**. Se **Iter** è un iteratore che punta un elemento in una sequenza, quindi **\*Iter** = **valore** sostituisce l'elemento con valore e non modifica il numero totale di elementi nella sequenza.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namebackinsertiteratoroperatoraddadda-backinsertiteratoroperator"></a><a name="back_insert_iterator__operator_add_add"></a>  back_insert_iterator:: operator + +  
 Incrementa `back_insert_iterator` alla posizione successiva in cui è possibile archiviare un valore.  
  
```  
back_insert_iterator<Container>& operator++();

back_insert_iterator<Container> operator++(int);
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `back_insert_iterator` addressing dalla posizione successiva in cui è possibile archiviare un valore.  
  
### <a name="remarks"></a>Note  
 Gli operatori sia preincrementation e postincrementation restituiscono lo stesso risultato.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namebackinsertiteratoroperatoreqa-backinsertiteratoroperator"></a><a name="back_insert_iterator__operator_eq"></a>  back_insert_iterator:: operator =  
 Aggiunge o inserisce un valore nel back-end di un contenitore.  
  
```  
back_insert_iterator<Container>& operator=(typename Container::const_reference val);

    back_insert_iterator<Container>& operator=(typename Container::value_type&& val);
```  
  
### <a name="parameters"></a>Parametri  
 ` val`  
 Il valore da inserire nel contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'ultimo elemento inserito nella parte posteriore del contenitore.  
  
### <a name="remarks"></a>Note  
 Restituisce il primo operatore membro `Container.push_back( val)`,  
  
 Restituisce quindi `*this`. Valuta il secondo operatore membro  
  
 `container->push_back((typename Container::value_type&&)val)`,  
  
 Restituisce quindi `*this`.  
  
### <a name="example"></a>Esempio  
  
```  
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
  
##  <a name="a-namebackinsertiteratorreferencea-backinsertiteratorreference"></a><a name="back_insert_iterator__reference"></a>  back_insert_iterator:: Reference  
 Tipo che fornisce un riferimento per `back_insert_iterator`.  
  
```  
 
typedef typename Container::reference reference;  
```  
  
### <a name="remarks"></a>Note  
 Tipo che descrive un riferimento a un elemento della sequenza controllata dal contenitore associato.  
  
### <a name="example"></a>Esempio  
  
```  
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
 [\< iteratore>](../standard-library/iterator.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)

