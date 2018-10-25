---
title: Classe allocator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- memory/std::allocator
- memory/std::allocator::const_pointer
- memory/std::allocator::const_reference
- memory/std::allocator::difference_type
- memory/std::allocator::pointer
- memory/std::allocator::reference
- memory/std::allocator::size_type
- memory/std::allocator::value_type
- memory/std::allocator::address
- memory/std::allocator::allocate
- memory/std::allocator::construct
- memory/std::allocator::deallocate
- memory/std::allocator::destroy
- memory/std::allocator::max_size
- memory/std::allocator::rebind
dev_langs:
- C++
helpviewer_keywords:
- std::allocator [C++]
- std::allocator [C++], const_pointer
- std::allocator [C++], const_reference
- std::allocator [C++], difference_type
- std::allocator [C++], pointer
- std::allocator [C++], reference
- std::allocator [C++], size_type
- std::allocator [C++], value_type
- std::allocator [C++], address
- std::allocator [C++], allocate
- std::allocator [C++], construct
- std::allocator [C++], deallocate
- std::allocator [C++], destroy
- std::allocator [C++], max_size
- std::allocator [C++], rebind
ms.assetid: 3fd58076-56cc-43bb-ad58-b4b7c9c6b410
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a6bd8c230f17e3b62d02d724cfd0744c0d335eac
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50060546"
---
# <a name="allocator-class"></a>Classe allocator

La classe modello descrive un oggetto che gestisce l'allocazione della memoria e la liberazione per le matrici di oggetti di tipo `Type`. Un oggetto della classe `allocator` è l'oggetto allocatore predefinito specificato nei costruttori per diverse classi di modello di contenitore nella libreria Standard C++.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator
```

### <a name="parameters"></a>Parametri

*Type*<br/>
Tipo di oggetto per cui è in corso l'allocazione o la deallocazione dell'archiviazione.

## <a name="remarks"></a>Note

Tutti i contenitori della libreria Standard C++ hanno un parametro di modello che viene impostato su `allocator`. La costruzione di un contenitore con un allocatore personalizzato consente di controllare l'allocazione e il rilascio degli di elementi di tale contenitore.

Ad esempio, un oggetto allocatore potrebbe allocare spazio di archiviazione in un heap privato o nella memoria condivisa o potrebbe ottimizzare per le dimensioni piccole o grandi dell'oggetto. Potrebbe anche specificare, attraverso le definizioni di tipo fornite, che è possibile accedere agli elementi con speciali oggetti funzione di accesso che gestiscono la memoria condivisa o eseguono operazioni automatiche di Garbage Collection. Di conseguenza, una classe che alloca memoria usando un oggetto allocatore deve usare questi tipi per il puntatore di dichiarazione e gli oggetti di riferimento, proprio come i contenitori della libreria standard C++.

**(Solo C_++98/03)** Quando si deriva dalla classe allocator, è necessario fornire uno struct [rebind](#rebind), il cui typedef `_Other` si riferisce alla nuova classe derivata.

Di conseguenza, un allocatore definisce i tipi seguenti:

- [puntatore](#pointer) si comporta come un puntatore a `Type`.

- [const_pointer](#const_pointer) si comporta come un puntatore const a `Type`.

- [riferimento](#reference) si comporta come un riferimento a `Type`.

- [const_reference](#const_reference) si comporta come un riferimento const a `Type`.

Questi `Type`specificano il form che puntatori e riferimenti devono accettare per gli elementi allocati. ( [allocator:: Pointer](#pointer) non è necessariamente identico `Type*` per tutti gli oggetti allocatore, anche se ha questa definizione ovvia per la classe `allocator`.)

**C++11 e versioni successive:** per abilitare le operazioni di spostamento nell'allocatore, usare l'interfaccia dell'allocatore minimo e implementare il costruttore di copia, gli operatori == e !=, allocate e deallocate. Per altre informazioni e un esempio, vedere [Allocatori](../standard-library/allocators.md)

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[allocator](#allocator)|Costruttori usati per la creazione di oggetti `allocator`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore costante al tipo di oggetto gestito dall'allocatore.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento costante al tipo di oggetto gestito dall'allocatore.|
|[difference_type](#difference_type)|Tipo integrale con segno che può rappresentare la differenza tra valori di puntatori al tipo di oggetto gestito dall'allocatore.|
|[pointer](#pointer)|Tipo che fornisce un puntatore al tipo di oggetto gestito dall'allocatore.|
|[reference](#reference)|Tipo che fornisce un riferimento al tipo di oggetto gestito dall'allocatore.|
|[size_type](#size_type)|Un tipo integrale senza segno che può rappresentare la lunghezza di qualsiasi sequenza che un oggetto della classe modello `allocator` può allocare.|
|[value_type](#value_type)|Tipo gestito dall'allocatore.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[address](#address)|Trova l'indirizzo di un oggetto il cui valore è specificato.|
|[allocate](#allocate)|Alloca un blocco di memoria sufficiente a contenere almeno un numero specificato di elementi.|
|[construct](#construct)|Costruisce un tipo specifico di oggetto su un indirizzo specificato che viene inizializzato con un valore specificato.|
|[deallocate](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|
|[destroy](#destroy)|Chiama un distruttore di oggetti senza deallocare la memoria in cui è stato archiviato l'oggetto.|
|[max_size](#max_size)|Restituisce il numero di elementi di tipo `Type` che potrebbe essere assegnata da un oggetto della classe `allocator` prima che la memoria libera si esaurisca.|
|[rebind](#rebind)|Una struttura che consente a un allocatore per gli oggetti di un unico tipo di allocare memoria per gli oggetti di un altro tipo.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator=](#op_eq)|Assegna un oggetto `allocator` a un altro oggetto `allocator`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<memory>

**Spazio dei nomi:** std

## <a name="address"></a>  allocator::address

Trova l'indirizzo di un oggetto il cui valore è specificato.

```cpp
pointer address(reference val) const;
const_pointer address(const_reference val) const;
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Valore const o nonconst dell'oggetto di cui viene cercato l'indirizzo.

### <a name="return-value"></a>Valore restituito

Un puntatore const o nonconst all'oggetto trovato rispettivamente di valore const o nonconst.

### <a name="remarks"></a>Note

Le funzioni membro restituiscono l'indirizzo del *val*, nel form che puntatori devono accettare per gli elementi allocati.

### <a name="example"></a>Esempio

```cpp
// allocator_address.cpp
// compile with: /EHsc
#include <memory>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( 2 * i );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::const_pointer v1Ptr;
   const int k = 8;
   v1Ptr = v1Alloc.address( *find(v1.begin( ), v1.end( ), k) );
   // v1Ptr = v1Alloc.address( k );
   cout << "The integer addressed by v1Ptr has a value of: "
        << "*v1Ptr = " << *v1Ptr << "." << endl;
}
```

```Output
The original vector v1 is:
( 2 4 6 8 10 12 14 ).
The integer addressed by v1Ptr has a value of: *v1Ptr = 8.
```

## <a name="allocate"></a>  allocator::allocate

Alloca un blocco di memoria sufficiente a contenere almeno un numero specificato di elementi.

```cpp
pointer allocate(size_type count, const void* _Hint);
```

### <a name="parameters"></a>Parametri

*count*<br/>
Numero di elementi per cui deve essere allocata memoria sufficiente.

*_Hint*<br/>
Puntatore const che può essere utile all'oggetto allocatore per soddisfare la richiesta di spazio di archiviazione individuando l'indirizzo di un oggetto allocato prima della richiesta.

### <a name="return-value"></a>Valore restituito

Un puntatore all'oggetto allocato o null se non è stata allocata memoria.

### <a name="remarks"></a>Note

La funzione membro alloca memoria per una matrice di elementi count di tipo `Type`, dalla chiamata all'operatore new (*conteggio*). Restituisce un puntatore all'oggetto allocato. L'argomento hint consente ad alcuni allocatori di migliorare la posizione del riferimento. Una scelta valida è l'indirizzo di un oggetto allocato in precedenza dallo stesso oggetto allocatore e non ancora deallocato. Per non specificare hint, usare un argomento di puntatore null.

### <a name="example"></a>Esempio

```cpp
// allocator_allocate.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   allocator<int> v1Alloc;
   allocator<int>::pointer v1aPtr;
   v1aPtr = v1Alloc.allocate ( 10 );

   int i;
   for ( i = 0 ; i < 10 ; i++ )
   {
      v1aPtr[ i ] = i;
   }

   for ( i = 0 ; i < 10 ; i++ )
   {
      cout << v1aPtr[ i ] << " ";
   }
   cout << endl;
   v1Alloc.deallocate( v1aPtr, 10 );
}
```

```Output
0 1 2 3 4 5 6 7 8 9
```

## <a name="allocator"></a>  allocator::allocator

Costruttori usati per la creazione di oggetti allocatore.

```cpp
allocator();
allocator(const allocator<Type>& right);
template <class Other>
allocator(const allocator<Other>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Oggetto allocatore da copiare.

### <a name="remarks"></a>Note

Il costruttore non esegue alcuna operazione. In generale, tuttavia, un oggetto allocatore costruito da un altro oggetto allocatore dovrebbe essere uguale e consentire una combinazione di allocazione di oggetti e il rilascio tra i due oggetti allocatore.

### <a name="example"></a>Esempio

```cpp
// allocator_allocator.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

class Int {
public:
   Int( int i )
   {
      cout << "Constructing " << ( void* )this  << endl;
      x = i;
      bIsConstructed = true;
   };
   ~Int( )
   {
      cout << "Destructing " << ( void* )this << endl;
      bIsConstructed = false;
   };
   Int &operator++( )
   {
      x++;
      return *this;
   };
   int x;
private:
   bool bIsConstructed;
};

int main( )
{
   allocator<double> Alloc;
   vector <Int>:: allocator_type v1Alloc;

   allocator<double> cAlloc(Alloc);
   allocator<Int> cv1Alloc(v1Alloc);

   if ( cv1Alloc == v1Alloc )
      cout << "The allocator objects cv1Alloc & v1Alloc are equal."
           << endl;
   else
      cout << "The allocator objects cv1Alloc & v1Alloc are not equal."
           << endl;

   if ( cAlloc == Alloc )
      cout << "The allocator objects cAlloc & Alloc are equal."
           << endl;
   else
      cout << "The allocator objects cAlloc & Alloc are not equal."
           << endl;
}
```

```Output
The allocator objects cv1Alloc & v1Alloc are equal.
The allocator objects cAlloc & Alloc are equal.
```

## <a name="const_pointer"></a>  allocator::const_pointer

Tipo che fornisce un puntatore costante al tipo di oggetto gestito dall'allocatore.

```cpp
typedef const value_type *const_pointer;
```

### <a name="remarks"></a>Note

Il tipo di puntatore descrive un oggetto `ptr` che può definire, tramite l'espressione `*ptr`, qualsiasi oggetto const che un oggetto della classe di modello allocator può allocare.

### <a name="example"></a>Esempio

```cpp
// allocator_const_ptr.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( i * 2 );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::const_pointer v1Ptr;
   const int k = 10;
   v1Ptr = v1Alloc.address( k );

   cout << "The integer's address found has a value of: "
        << *v1Ptr << "." << endl;
}
```

```Output
The original vector v1 is:
( 2 4 6 8 10 12 14 ).
The integer's address found has a value of: 10.
```

## <a name="const_reference"></a>  allocator::const_reference

Tipo che fornisce un riferimento costante al tipo di oggetto gestito dall'allocatore.

```cpp
typedef const value_type& const_reference;
```

### <a name="remarks"></a>Note

Il tipo di riferimento descrive un oggetto che può definire qualsiasi oggetto const che può essere allocato da un oggetto della classe di modello allocator.

### <a name="example"></a>Esempio

```cpp
// allocator_const_ref.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <double> v;
   vector <double> ::iterator vIter, vfIter;
   vector <double> :: allocator_type vAlloc;

   int j;
   for ( j = 1 ; j <= 7 ; j++ )
   {
      v.push_back( 100.0 * j );
   }

   cout << "The original vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   vfIter = v.begin( );
   allocator<double>::const_reference vcref =*vfIter;
   cout << "The value of the element referred to by vref is: "
        << vcref << ",\n the first element in the vector." << endl;

   // const references can have their elements modified,
   // so the following would generate an error:
   // vcref = 150;
   // but the value of the first element could be modified through
   // its nonconst iterator and the const reference would remain valid
*vfIter = 175;
   cout << "The value of the element referred to by vcref,"
        <<"\n after nofication through its nonconst iterator, is: "
        << vcref << "." << endl;
}
```

```Output
The original vector v is:
( 100 200 300 400 500 600 700 ).
The value of the element referred to by vref is: 100,
the first element in the vector.
The value of the element referred to by vcref,
after nofication through its nonconst iterator, is: 175.
```

## <a name="construct"></a>  allocator::construct

Costruisce un tipo specifico di oggetto su un indirizzo specificato che viene inizializzato con un valore specificato.

```cpp
void construct(pointer ptr, const Type& val);
void construct(pointer ptr, Type&& val);
template <class _Other>
void construct(pointer ptr, _Other&&...   val);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Puntatore al percorso in cui deve essere creato l'oggetto.

*Val*<br/>
Il valore con cui viene inizializzato l'oggetto costruito.

### <a name="remarks"></a>Note

La prima funzione membro è equivalente a **new** ( ( `void` \*) `ptr` ) **Type** ( `val` ).

### <a name="example"></a>Esempio

```cpp
// allocator_construct.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( 3 * i );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::pointer v1PtrA;
   int kA = 6, kB = 7;
   v1PtrA = v1Alloc.address( *find( v1.begin( ), v1.end( ), kA ) );
   v1Alloc.destroy ( v1PtrA );
   v1Alloc.construct ( v1PtrA , kB );

   cout << "The modified vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;
}
```

```Output
The original vector v1 is:
( 3 6 9 12 15 18 21 ).
The modified vector v1 is:
( 3 7 9 12 15 18 21 ).
```

## <a name="deallocate"></a>  allocator::deallocate

Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.

```cpp
void deallocate(pointer ptr, size_type count);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Puntatore al primo oggetto da deallocare dall'archivio.

*count*<br/>
Numero di oggetti da deallocare dall'archivio.

### <a name="remarks"></a>Note

La funzione membro libera la memoria per la matrice di oggetti count di tipo `Type` iniziando *ptr*, chiamando `operator delete(ptr)`. Il puntatore del mouse *ptr* deve essere stato restituito precedentemente da una chiamata a [allocare](#allocate) per un oggetto allocatore che risulta uguale a  **\*ciò**, allocare una matrice oggetto dello stesso tipo e dimensione. `deallocate` non genera mai un'eccezione.

### <a name="example"></a>Esempio

Per un esempio di utilizzo della funzione membro, vedere [allocator::allocate](#allocate).

## <a name="destroy"></a>  allocator::destroy

Chiama un distruttore di oggetti senza deallocare la memoria in cui è stato archiviato l'oggetto.

```cpp
void destroy(pointer ptr);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Un puntatore che indica l'indirizzo dell'oggetto da distruggere.

### <a name="remarks"></a>Note

La funzione membro distrugge l'oggetto specificato da *ptr*, tramite la chiamata del distruttore `ptr->` **tipo**::**~ tipo**.

### <a name="example"></a>Esempio

```cpp
// allocator_destroy.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( 2 * i );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::pointer v1PtrA;
   int kA = 12, kB = -99;
   v1PtrA = v1Alloc.address( *find(v1.begin( ), v1.end( ), kA) );
   v1Alloc.destroy ( v1PtrA );
   v1Alloc.construct ( v1PtrA , kB );

   cout << "The modified vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;
}
```

```Output
The original vector v1 is:
( 2 4 6 8 10 12 14 ).
The modified vector v1 is:
( 2 4 6 8 10 -99 14 ).
```

## <a name="difference_type"></a>  allocator::difference_type

Tipo integrale con segno che può rappresentare la differenza tra valori di puntatori al tipo di oggetto gestito dall'allocatore.

```cpp
typedef ptrdiff_t difference_type;
```

### <a name="remarks"></a>Note

Il tipo integer con segno descrive un oggetto che può rappresentare la differenza tra gli indirizzi di due elementi qualsiasi di una sequenza che possono essere allocati da un oggetto della classe di modello allocator.

### <a name="example"></a>Esempio

```cpp
// allocator_diff_type.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 0 ; i <= 7 ; i++ )
   {
      v1.push_back( i * 2 );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::const_pointer v1PtrA, v1PtrB;
   const int kA = 4, kB =12;
   v1PtrA = v1Alloc.address( kA );
   v1PtrB = v1Alloc.address( kB );
   allocator<int>::difference_type v1diff = *v1PtrB - *v1PtrA;

   cout << "Pointer v1PtrA addresses " << *v1PtrA << "." << endl;
   cout << "Pointer v1PtrB addresses " << *v1PtrB <<  "." << endl;
   cout << "The difference between the integer's addresses is: "
        << v1diff << "." << endl;
}
```

```Output
The original vector v1 is:
( 0 2 4 6 8 10 12 14 ).
Pointer v1PtrA addresses 4.
Pointer v1PtrB addresses 12.
The difference between the integer's addresses is: 8.
```

## <a name="max_size"></a>  allocator::max_size

Restituisce il numero di elementi di tipo `Type` che potrebbe essere assegnata da un oggetto dell'allocatore della classe prima che la memoria libera si esaurisca.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Numero degli elementi che possono essere allocati.

### <a name="example"></a>Esempio

```cpp
// allocator_max_size.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( i );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   vector <double> v2;
   vector <double> ::iterator v2Iter;
   vector <double> :: allocator_type v2Alloc;
   allocator<int>::size_type v1size;
   v1size = v1Alloc.max_size( );

   cout << "The number of integers that can be allocated before\n"
        << " the free memory in the vector v1 is used up is: "
        << v1size << "." << endl;

   int ii;
   for ( ii = 1 ; ii <= 7 ; ii++ )
   {
      v2.push_back( ii * 10.0 );
   }

   cout << "The original vector v2 is:\n ( " ;
   for ( v2Iter = v2.begin( ) ; v2Iter != v2.end( ) ; v2Iter++ )
      cout << *v2Iter << " ";
   cout << ")." << endl;
   allocator<double>::size_type v2size;
   v2size = v2Alloc.max_size( );

   cout << "The number of doubles that can be allocated before\n"
        << " the free memory in the vector v2 is used up is: "
        << v2size << "." << endl;
}
```

## <a name="op_eq"></a>  allocator::operator=

Assegna un oggetto allocatore a un altro oggetto allocatore.

```cpp
template <class Other>
allocator<Type>& operator=(const allocator<Other>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Oggetto allocatore da assegnare a un altro oggetto di questo tipo.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto allocatore

### <a name="remarks"></a>Note

L'operatore di assegnazione del modello non esegue alcuna operazione. In generale, tuttavia, un oggetto allocatore assegnato a un altro oggetto allocatore dovrebbe essere uguale e consentire una combinazione di allocazione di oggetti e il rilascio tra i due oggetti allocatore.

### <a name="example"></a>Esempio

```cpp
// allocator_op_assign.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

class Int {
public:
   Int(int i)
   {
      cout << "Constructing " << ( void* )this  << endl;
      x = i;
      bIsConstructed = true;
   };
   ~Int( ) {
      cout << "Destructing " << ( void* )this << endl;
      bIsConstructed = false;
   };
   Int &operator++( )
   {
      x++;
      return *this;
   };
   int x;
private:
   bool bIsConstructed;
};

int main( )
{
   allocator<Int> Alloc;
   allocator<Int> cAlloc ;
   cAlloc = Alloc;
}
```

## <a name="pointer"></a>  allocator::pointer

Tipo che fornisce un puntatore al tipo di oggetto gestito dall'allocatore.

```cpp
typedef value_type *pointer;
```

### <a name="remarks"></a>Note

Il tipo di puntatore descrive un oggetto `ptr` che può definire, tramite l'espressione  **\*ptr**, tutti gli oggetti che un oggetto della classe di modello allocator può allocare.

### <a name="example"></a>Esempio

```cpp
// allocator_ptr.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( 3 * i );
   }

   cout << "The original vector v1 is:\n( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::const_pointer v1Ptr;
   const int k = 12;
   v1Ptr = v1Alloc.address( k );

   cout << "The integer addressed by v1Ptr has a value of: "
        << "*v1Ptr = " << *v1Ptr << "." << endl;
}
```

```Output
The original vector v1 is:
( 3 6 9 12 15 18 21 ).
The integer addressed by v1Ptr has a value of: *v1Ptr = 12.
```

## <a name="rebind"></a>  allocator::rebind

Una struttura che consente a un allocatore per gli oggetti di un unico tipo di allocare memoria per gli oggetti di un altro tipo.
```cpp
struct rebind {    typedef allocator<_Other> other ;    };
```

### <a name="parameters"></a>Parametri

*other*<br/>
Tipo di elemento per il quale viene allocata la memoria.

### <a name="remarks"></a>Note

Questa struttura è utile per l'allocazione di memoria per un tipo diverso dal tipo di elemento del contenitore in fase di implementazione.

La classe di modello membro definisce il tipo other. La sua unica funzione è specificare il nome del tipo **allocator**\<_ **Other**> per un determinato nome del tipo **allocator**\< **Type**>.

Ad esempio, dato un oggetto allocatore `al` typu `A`, è possibile allocare un oggetto di tipo `_Other` con l'espressione:

```cpp
A::rebind<Other>::other(al).allocate(1, (Other *)0)
```

In alternativa, è possibile denominare il tipo di puntatore scrivendo il tipo:

```cpp
A::rebind<Other>::other::pointer
```

### <a name="example"></a>Esempio

```cpp
// allocator_rebind.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int>::allocator_type IntAlloc;
int main( )
{
   IntAlloc v1Iter;
   vector<int> v1;

   IntAlloc::rebind<char>::other::pointer pszC =
      IntAlloc::rebind<char>::other(v1.get_allocator()).allocate(1, (void *)0);

   int * pInt = v1Iter.allocate(10);
}
```

## <a name="reference"></a>  allocator::reference

Tipo che fornisce un riferimento al tipo di oggetto gestito dall'allocatore.

```cpp
typedef value_type& reference;
```

### <a name="remarks"></a>Note

Il tipo di riferimento descrive un oggetto che può definire qualsiasi oggetto che può essere allocato da un oggetto della classe di modello allocator.

### <a name="example"></a>Esempio

```cpp
// allocator_reference.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <double> v;
   vector <double> ::iterator vIter, vfIter;
   vector <double> :: allocator_type vAlloc;

   int j;
   for ( j = 1 ; j <= 7 ; j++ )
   {
      v.push_back( 100.0 * j );
   }

   cout << "The original vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   vfIter = v.begin( );
   allocator<double>::reference vref =*vfIter;
   cout << "The value of the element referred to by vref is: "
        << vref << ",\n the first element in the vector." << endl;

   // nonconst references can have their elements modified
   vref = 150;
   cout << "The element referred to by vref after being modified is: "
        << vref << "." << endl;
}
```

```Output
The original vector v is:
( 100 200 300 400 500 600 700 ).
The value of the element referred to by vref is: 100,
the first element in the vector.
The element referred to by vref after being modified is: 150.
```

## <a name="size_type"></a>  allocator::size_type

Un tipo integrale senza segno che può rappresentare la lunghezza di qualsiasi sequenza che un oggetto della classe di modello allocator può allocare.

```cpp
typedef size_t size_type;
```

### <a name="example"></a>Esempio

```cpp
// allocator_size_type.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <double> v;
   vector <double> ::iterator vIter;
   vector <double> :: allocator_type vAlloc;

   int j;
   for ( j = 1 ; j <= 7 ; j++ )
   {
      v.push_back( 100.0 * j );
   }

   cout << "The original vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   allocator<double>::size_type vsize;
   vsize = vAlloc.max_size( );

   cout << "The number of doubles that can be allocated before\n"
        << " the free memory in the vector v is used up is: "
        << vsize << "." << endl;
}
```

## <a name="value_type"></a>  allocator::value_type

Tipo gestito dall'allocatore.

```cpp
typedef Type value_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Type`.

### <a name="example"></a>Esempio

```cpp
// allocator_value_type.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>
using namespace std;

int main( )
{
   vector <double> v;
   vector <double> ::iterator vIter, vfIter;
   vector <double> :: allocator_type vAlloc;

   int j;
   for ( j = 1 ; j <= 7 ; j++ )
   {
      v.push_back( 100.0 * j );
   }

   cout << "The original vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   vfIter = v.begin( );
   allocator<double>::value_type vecVal = 150.0;
*vfIter = vecVal;
   cout << "The value of the element addressed by vfIter is: "
        << *vfIter << ",\n the first element in the vector." << endl;

   cout << "The modified vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;
}
```

```Output
The original vector v is:
( 100 200 300 400 500 600 700 ).
The value of the element addressed by vfIter is: 150,
the first element in the vector.
The modified vector v is:
( 150 200 300 400 500 600 700 ).
```

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
