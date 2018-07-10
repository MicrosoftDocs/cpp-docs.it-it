---
title: Classe hash_multiset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- hash_set/stdext::hash_multiset
- hash_set/stdext::hash_multiset::allocator_type
- hash_set/stdext::hash_multiset::const_iterator
- hash_set/stdext::hash_multiset::const_pointer
- hash_set/stdext::hash_multiset::const_reference
- hash_set/stdext::hash_multiset::const_reverse_iterator
- hash_set/stdext::hash_multiset::difference_type
- hash_set/stdext::hash_multiset::iterator
- hash_set/stdext::hash_multiset::key_compare
- hash_set/stdext::hash_multiset::key_type
- hash_set/stdext::hash_multiset::pointer
- hash_set/stdext::hash_multiset::reference
- hash_set/stdext::hash_multiset::reverse_iterator
- hash_set/stdext::hash_multiset::size_type
- hash_set/stdext::hash_multiset::value_compare
- hash_set/stdext::hash_multiset::value_type
- hash_set/stdext::hash_multiset::begin
- hash_set/stdext::hash_multiset::cbegin
- hash_set/stdext::hash_multiset::cend
- hash_set/stdext::hash_multiset::clear
- hash_set/stdext::hash_multiset::count
- hash_set/stdext::hash_multiset::crbegin
- hash_set/stdext::hash_multiset::crend
- hash_set/stdext::hash_multiset::emplace
- hash_set/stdext::hash_multiset::emplace_hint
- hash_set/stdext::hash_multiset::empty
- hash_set/stdext::hash_multiset::end
- hash_set/stdext::hash_multiset::equal_range
- hash_set/stdext::hash_multiset::erase
- hash_set/stdext::hash_multiset::find
- hash_set/stdext::hash_multiset::get_allocator
- hash_set/stdext::hash_multiset::insert
- hash_set/stdext::hash_multiset::key_comp
- hash_set/stdext::hash_multiset::lower_bound
- hash_set/stdext::hash_multiset::max_size
- hash_set/stdext::hash_multiset::rbegin
- hash_set/stdext::hash_multiset::rend
- hash_set/stdext::hash_multiset::size
- hash_set/stdext::hash_multiset::swap
- hash_set/stdext::hash_multiset::upper_bound
- hash_set/stdext::hash_multiset::value_comp
dev_langs:
- C++
helpviewer_keywords:
- stdext::hash_multiset
- stdext::hash_multiset::allocator_type
- stdext::hash_multiset::const_iterator
- stdext::hash_multiset::const_pointer
- stdext::hash_multiset::const_reference
- stdext::hash_multiset::const_reverse_iterator
- stdext::hash_multiset::difference_type
- stdext::hash_multiset::iterator
- stdext::hash_multiset::key_compare
- stdext::hash_multiset::key_type
- stdext::hash_multiset::pointer
- stdext::hash_multiset::reference
- stdext::hash_multiset::reverse_iterator
- stdext::hash_multiset::size_type
- stdext::hash_multiset::value_compare
- stdext::hash_multiset::value_type
- stdext::hash_multiset::begin
- stdext::hash_multiset::cbegin
- stdext::hash_multiset::cend
- stdext::hash_multiset::clear
- stdext::hash_multiset::count
- stdext::hash_multiset::crbegin
- stdext::hash_multiset::crend
- stdext::hash_multiset::emplace
- stdext::hash_multiset::emplace_hint
- stdext::hash_multiset::empty
- stdext::hash_multiset::end
- stdext::hash_multiset::equal_range
- stdext::hash_multiset::erase
- stdext::hash_multiset::find
- stdext::hash_multiset::get_allocator
- stdext::hash_multiset::insert
- stdext::hash_multiset::key_comp
- stdext::hash_multiset::lower_bound
- stdext::hash_multiset::max_size
- stdext::hash_multiset::rbegin
- stdext::hash_multiset::rend
- stdext::hash_multiset::size
- stdext::hash_multiset::swap
- stdext::hash_multiset::upper_bound
- stdext::hash_multiset::value_comp
ms.assetid: 0580397a-a76e-40ad-aea2-5c6f3a9d0a21
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9baef962ab3a71e9dd350c3429c5b8f85d3adb9a
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33849015"
---
# <a name="hashmultiset-class"></a>Classe hash_multiset

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

La classe contenitore hash_multiset è un'estensione della libreria standard C++ e viene usata per l'archiviazione e il recupero veloce dei dati da una raccolta in cui i valori degli elementi contenuti vengono usati come valori delle chiavi e non devono essere necessariamente univoci.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key, class Traits =hash_compare<Key, less <Key>>, class Allocator =allocator <Key>>
class hash_multiset
```

### <a name="parameters"></a>Parametri

*Chiave* tipo di dati degli elementi da archiviare in hash_multiset.

`Traits` Tipo che include due oggetti funzione, uno della classe compare, vale a dire un predicato binario in grado di confrontare due valori di elementi come chiavi di ordinamento per determinarne l'ordine relativo e una funzione hash che rappresenta un mapping predicato unario chiave i valori degli elementi da senza segno valori integer di tipo **size_t**. Questo argomento è facoltativo e il `hash_compare` *< chiave,* **meno * * *\<chiave >>* è il valore predefinito.

`Allocator` Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli sull'allocazione dell'hash_multiset e alla deallocazione della memoria. Questo argomento è facoltativo e il valore predefinito è **allocatore * * *\<chiave >.*

## <a name="remarks"></a>Note

L'hash_multiset è:

- Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata. È inoltre un contenitore associativo semplice, in quanto i valori dei relativi elementi corrispondono ai valori delle chiavi.

- Reversibile, in quanto fornisce un iteratore bidirezionale per accedere ai relativi elementi.

- Con hash, poiché i rispettivi elementi sono raggruppati in bucket in base al valore di una funzione hash applicata ai valori di chiave degli elementi.

- Univoco nel senso che ogni elemento deve disporre di una chiave univoca. Poiché hash_multiset è anche un contenitore associativo semplice, anche i relativi elementi sono univoci.

- Una classe modello, poiché la funzionalità che fornisce è generica e indipendente dal tipo specifico di dati contenuti come elementi o chiavi. I tipi di dati da utilizzare per gli elementi e le chiavi vengono invece specificati come parametri nel modello di classe i insieme alla funzione di confronto e all'allocatore.

Il vantaggio principale dell'hashing rispetto all'ordinamento è costituito da una maggiore efficienza. Un hashing corretto esegue inserimenti, eliminazioni e ricerche in un tempo medio costante rispetto al tempo proporzionale al logaritmo del numero di elementi nel contenitore per le tecniche di ordinamento. Non è possibile modificare direttamente il valore di un elemento di un set. È invece necessario eliminare i valori precedenti e inserire gli elementi che presentano nuovi valori.

La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. I contenitori associativi con hash sono ottimizzati per le operazioni di ricerca, inserimento e rimozione. Le funzioni membro che supportano in modo esplicito queste operazioni risultano efficienti quando vengono usate con una funzione hash ben progettata, poiché eseguono le operazioni in un tempo mediamente costante e non dipendente dal numero di elementi nel contenitore. Una funzione hash ben progettata produce una distribuzione uniforme di valori con hash e riduce al minimo i numeri di conflitti. Un conflitto si verifica quando viene eseguito il mapping di valori di chiave distinti allo stesso valore con hash. Nella peggiore delle ipotesi, con la peggiore funzione hash possibile, il numero di operazioni è proporzionale al numero di elementi della sequenza (tempo lineare).

L'hash_multiset deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione. Un hash_multiset può contenere più elementi che possono essere usati come chiavi di ordinamento, pertanto le chiavi non sono univoche. Un modello relativo a questo tipo di struttura è ad esempio un elenco ordinato di parole in cui tali parole possono essere presenti più volte. Se non sono consentite più occorrenze delle parole, la struttura di contenitore appropriata è rappresentata da un hash_multiset. Se le definizioni univoche sono state allegate come valori all'elenco di parole chiave univoche, un hash_map rappresenta una struttura appropriata per contenere questi dati. Se invece le definizioni non sono univoche, è opportuno scegliere come contenitore un hash_multimap.

L'oggetto hash_multiset ordina la sequenza che controlla chiamando un oggetto di tratti hash archiviato di tipo [value_compare](#value_compare). È possibile accedere a questo oggetto archiviato chiamando la funzione membro [key_comp](#key_comp). Un oggetto funzione di questo tipo deve comportarsi come un oggetto della classe `hash_compare` *< chiave,* **meno * * *\<chiave >>.* In particolare, per tutti i valori *Key* di tipo **Key**, la chiamata **Trait**( *Key*) genera una distribuzione di valori di tipo **size_t**.

In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti (ovvero che uno non è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard. Un predicato binario *f*( *x*, *y*) è un oggetto funzione che dispone di due oggetti argomento x e y e di un valore restituito true o false. Un ordinamento imposto a un oggetto hash_multiset è un ordinamento di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti x e y vengono definiti equivalenti quando sia *f*( *x*, *y*) che *f*( *y*, *x*) sono false. Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.

L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di ordinamento e dalle dimensioni correnti della tabella hash archiviata nell'oggetto contenitore. Non è possibile determinare le dimensioni correnti della tabella hash, quindi non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata. L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.

L'iteratore fornito dalla classe hash_multiset è un iteratore bidirezionale, ma le funzioni membro insert e hash_multiset della classe hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali. I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità. Ogni concetto di iteratore ha un proprio hash_multiset di requisiti e gli algoritmi usati con tali concetti devono limitare i propri presupposti ai requisiti forniti da tale tipo di iteratore. Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza. Si tratta di un hash_multiset di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori (`first`, `last`) nel contesto delle funzioni membro della classe.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[hash_multiset](#hash_multiset)|Costruisce un `hash_multiset` vuoto o che rappresenta una copia totale o parziale di un altro `hash_multiset`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto `hash_multiset`.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `hash_multiset`.|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un elemento `const` in un `hash_multiset`.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un elemento `const` archiviato in un `hash_multiset` per la lettura e l'esecuzione di operazioni `const`.|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `hash_multiset`.|
|[difference_type](#difference_type)|Tipo Signed Integer che specifica la differenza tra due iteratori che puntano a elementi all'interno dello stesso `hash_multiset`.|
|[iterator](#iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un `hash_multiset`.|
|[key_compare](#key_compare)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `hash_multiset`.|
|[key_type](#key_type)|Tipo che descrive un oggetto archiviato come elemento di un `hash_set` grazie alla relativa funzione di chiave di ordinamento.|
|[pointer](#pointer)|Tipo che fornisce un puntatore a un elemento in un `hash_multiset`.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento archiviato in un `hash_multiset`.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un `hash_multiset` invertito.|
|[size_type](#size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `hash_multiset`.|
|[value_compare](#value_compare)|Tipo che fornisce due oggetti funzione, un predicato binario della classe compare in grado di confrontare due valori di elemento di un `hash_multiset` per determinarne l'ordine relativo e un predicato unario che genera un hash per gli elementi.|
|[value_type](#value_type)|Tipo che descrive un oggetto archiviato come elemento di un `hash_multiset` grazie alla relativa funzione di un valore.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[begin](#begin)|Restituisce un iteratore che punta al primo elemento in `hash_multiset`.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento del `hash_multiset`.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `hash_multiset`.|
|[clear](#clear)|Cancella tutti gli elementi di un `hash_multiset`.|
|[count](#count)|Restituisce il numero di elementi di un `hash_multiset` la cui chiave corrisponde a una chiave specificata dal parametro|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di un `hash_multiset` invertito.|
|[crend](#crend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set `hash_multiset` invertito.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto in un `hash_multiset`.|
|[emplace_hint](#emplace_hint)|Inserisce un elemento costruito sul posto in un `hash_multiset`, con un suggerimento sulla posizione.|
|[empty](#empty)|Verifica se un `hash_multiset` è vuoto.|
|[end](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_multiset`.|
|[equal_range](#equal_range)|Restituisce una coppia di iteratori rispettivamente al primo elemento di un `hash_multiset` con una chiave maggiore di una chiave specificata e al primo elemento di `hash_multiset` con una chiave uguale o maggiore di tale chiave.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi di un `hash_multiset` dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.|
|[find](#find)|Restituisce un iteratore che punta alla posizione di un elemento in un `hash_multiset` che dispone di una chiave equivalente a una chiave specificata.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `hash_multiset`.|
|[insert](#insert)|Inserisce un elemento o un intervallo di elementi in un `hash_multiset`.|
|[key_comp](#key_compare)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di un `hash_multiset`.|
|[lower_bound](#lower_bound)|Restituisce un iteratore al primo elemento di un `hash_multiset` con una chiave uguale o maggiore di una chiave specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima del `hash_multiset`.|
|[rbegin](#rbegin)|Restituisce un iteratore che punta al primo elemento di un `hash_multiset` invertito.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_multiset` invertito.|
|[size](#size)|Restituisce il numero di elementi nel `hash_multiset`.|
|[swap](#swap)|Scambia gli elementi di due `hash_multiset`.|
|[upper_bound](#upper_bound)|Restituisce un iteratore al primo elemento di un `hash_multiset` con una chiave uguale o maggiore di una chiave specificata.|
|[value_comp](#value_comp)|Recupera una copia dell'oggetto dei tratti hash usato per generare un hash e ordinare i valori delle chiavi dell'elemento in un `hash_multiset`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[hash_multiset::operator=](#op_eq)|Sostituisce gli elementi dell'oggetto hash_multiset con una copia di un altro oggetto hash_multiset.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<hash_set>

**Spazio dei nomi:** stdext

## <a name="allocator_type"></a>  hash_multiset::allocator_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che rappresenta la classe allocator per l'oggetto hash_multiset.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::allocator_type allocator_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator) per indicazioni su come usare `allocator_type`.

## <a name="begin"></a>  hash_multiset::begin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore che punta al primo elemento dell'oggetto hash_multiset.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta al primo elemento dell'oggetto hash_multiset o alla posizione successiva a un oggetto hash_multiset vuoto.

### <a name="remarks"></a>Note

Se il valore restituito di **begin** viene assegnato a un `const_iterator`, gli elementi dell'oggetto hash_multiset non possono essere modificati. Se il valore restituito di **begin** viene assegnato a un **iterator**, gli elementi dell'oggetto hash_multiset possono essere modificati.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_begin.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter;
   hash_multiset <int>::const_iterator hms1_cIter;

   hms1.insert( 1 );
   hms1.insert( 2 );
   hms1.insert( 3 );

   hms1_Iter = hms1.begin( );
   cout << "The first element of hms1 is " << *hms1_Iter << endl;

   hms1_Iter = hms1.begin( );
   hms1.erase( hms1_Iter );

   // The following 2 lines would err because the iterator is const
   // hms1_cIter = hms1.begin( );
   // hms1.erase( hms1_cIter );

   hms1_cIter = hms1.begin( );
   cout << "The first element of hms1 is now " << *hms1_cIter << endl;
}
```

```Output
The first element of hms1 is 1
The first element of hms1 is now 2
```

## <a name="cbegin"></a>  hash_multiset::cbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore const che punta al primo elemento dell'oggetto hash_multiset.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const che punta al primo elemento dell'oggetto [hash_multiset](../standard-library/hash-multiset-class.md) o alla posizione successiva a un oggetto `hash_multiset` vuoto.

### <a name="remarks"></a>Note

Con il valore restituito di `cbegin`, gli elementi dell'oggetto `hash_multiset` non possono essere modificati.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_cbegin.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1;
   hash_multiset <int>::const_iterator hs1_cIter;

   hs1.insert( 1 );
   hs1.insert( 2 );
   hs1.insert( 3 );

   hs1_cIter = hs1.cbegin( );
   cout << "The first element of hs1 is " << *hs1_cIter << endl;
}
```

```Output
The first element of hs1 is 1
```

## <a name="cend"></a>  hash_multiset::cend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multiset.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const che punta alla posizione successiva all'ultimo elemento di un oggetto [hash_multiset](../standard-library/hash-multiset-class.md). Se l'oggetto `hash_multiset` è vuoto, `hash_multiset::cend == hash_multiset::begin`.

### <a name="remarks"></a>Note

`cend` viene usato per verificare se un iteratore ha raggiunto la fine del relativo oggetto `hash_multiset`. Non è consigliabile dereferenziare il valore restituito da `cend`.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_cend.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1;
   hash_multiset <int> :: const_iterator hs1_cIter;

   hs1.insert( 1 );
   hs1.insert( 2 );
   hs1.insert( 3 );

   hs1_cIter = hs1.cend( );
   hs1_cIter--;
   cout << "The last element of hs1 is " << *hs1_cIter << endl;
}
```

```Output
The last element of hs1 is 3
```

## <a name="clear"></a>  hash_multiset::clear

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Cancella tutti gli elementi di un oggetto hash_multiset.

```cpp
void clear();
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_multiset_clear.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;

   hms1.insert( 1 );
   hms1.insert( 2 );

   cout << "The size of the hash_multiset is initially " << hms1.size( )
        << "." << endl;

   hms1.clear( );
   cout << "The size of the hash_multiset after clearing is "
        << hms1.size( ) << "." << endl;
}
```

```Output
The size of the hash_multiset is initially 2.
The size of the hash_multiset after clearing is 0.
```

## <a name="const_iterator"></a>  hash_multiset::const_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento **const** dell'oggetto hash_multiset.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_iterator const_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](#begin) per indicazioni su come usare `const_iterator`.

## <a name="const_pointer"></a>  hash_multiset::const_pointer

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce un puntatore a un elemento **const** di un oggetto hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_pointer const_pointer;
```

### <a name="remarks"></a>Note

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un [const_iterator](#const_iterator) per accedere agli elementi di un oggetto **const** hash_multiset.

## <a name="const_reference"></a>  hash_multiset::const_reference

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce un riferimento a un elemento **const** archiviato in un oggetto hash_multiset per la lettura e l'esecuzione di operazioni **const**.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_reference const_reference;
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_multiset_const_reference.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;

   hms1.insert( 10 );
   hms1.insert( 20 );

   // Declare and initialize a const_reference &Ref1
   // to the 1st element
   const int &Ref1 = *hms1.begin( );

   cout << "The first element in the hash_multiset is "
        << Ref1 << "." << endl;

   // The following line would cause an error because the
   // const_reference cannot be used to modify the hash_multiset
   // Ref1 = Ref1 + 5;
}
```

```Output
The first element in the hash_multiset is 10.
```

## <a name="const_reverse_iterator"></a>  hash_multiset::const_reverse_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento **const** dell'oggetto hash_multiset.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_reverse_iterator const_reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto hash_multiset in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rend](#rend) per indicazioni su come dichiarare e usare `const_reverse_iterator`.

## <a name="count"></a>  hash_multiset::count

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce il numero di elementi di un hash_multiset la cui chiave corrisponde a una chiave specificata dal parametro.

```cpp
size_type count(const Key& key) const;
```

### <a name="parameters"></a>Parametri

`key` La chiave degli elementi per cui trovare una corrispondenza dall'hash_multiset.

### <a name="return-value"></a>Valore restituito

Il numero di elementi nell'hash_multiset con la chiave specificata dal parametro.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di elementi nell'intervallo seguente:

[ `lower_bound` (_ `Key` ), `upper_bound` (\_ `Key` ) ).

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro hash_multiset::count.

```cpp
// hash_multiset_count.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
    using namespace std;
    using namespace stdext;
    hash_multiset<int> hms1;
    hash_multiset<int>::size_type i;

    hms1.insert(1);
    hms1.insert(1);

    // Keys do not need to be unique in hash_multiset,
    // so duplicates may exist.
    i = hms1.count(1);
    cout << "The number of elements in hms1 with a sort key of 1 is: "
         << i << "." << endl;

    i = hms1.count(2);
    cout << "The number of elements in hms1 with a sort key of 2 is: "
         << i << "." << endl;
}
```

```Output
The number of elements in hms1 with a sort key of 1 is: 2.
The number of elements in hms1 with a sort key of 2 is: 0.
```

## <a name="crbegin"></a>  hash_multiset::crbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore const che punta al primo elemento di un oggetto hash_multiset invertito.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta al primo elemento di un oggetto [hash_multiset](../standard-library/hash-multiset-class.md) invertito o a quello che è stato l'ultimo elemento dell'oggetto `hash_multiset` non invertito.

### <a name="remarks"></a>Note

`crbegin` viene usato con un oggetto `hash_multiset` invertito proprio come [hash_multiset::begin](#begin) viene usato con un oggetto `hash_multiset`.

Con il valore restituito di `crbegin`, l'oggetto `hash_multiset` non può essere modificato.

`crbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto `hash_multiset`.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_crbegin.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1;
   hash_multiset <int>::const_reverse_iterator hs1_crIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_crIter = hs1.crbegin( );
   cout << "The first element in the reversed hash_multiset is "
        << *hs1_crIter << "." << endl;
}
```

```Output
The first element in the reversed hash_multiset is 30.
```

## <a name="crend"></a>  hash_multiset::crend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multiset invertito.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto [hash_multiset](../standard-library/hash-multiset-class.md) invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto `hash_multiset` non invertito.

### <a name="remarks"></a>Note

`crend` viene usato con un oggetto `hash_multiset` invertito proprio come [hash_multiset::end](#end) viene usato con un oggetto `hash_multiset`.

Con il valore restituito di `crend`, l'oggetto `hash_multiset` non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto hash_multiset.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_crend.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1;
   hash_multiset <int>::const_reverse_iterator hs1_crIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_crIter = hs1.crend( );
   hs1_crIter--;
   cout << "The last element in the reversed hash_multiset is "
        << *hs1_crIter << "." << endl;
}
```

```Output
The last element in the reversed hash_multiset is 10.
```

## <a name="difference_type"></a>  hash_multiset::difference_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo Signed Integer che specifica la differenza tra due iteratori che puntano a elementi all'interno dello stesso oggetto hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::difference_type difference_type;
```

### <a name="remarks"></a>Note

`difference_type` è il tipo restituito quando si sottrae o si incrementa tramite gli iteratori del contenitore. `difference_type` viene in genere usato per rappresentare il numero di elementi nell'intervallo [ `first`, `last`) tra gli iteratori `first` e `last`, includendo l'elemento a cui punta `first` e l'intervallo di elementi fino all'elemento a cui punta `last`, escluso tale elemento.

Si noti che, sebbene `difference_type` sia disponibile per tutti gli iteratori che soddisfano i requisiti di un iteratore di input, inclusa la classe degli iteratori bidirezionali supportati da contenitori reversibili come set, la sottrazione tra gli iteratori è supportata solo da iteratori ad accesso casuale forniti da un contenitore ad accesso casuale, ad esempio vector o deque.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <hash_set>
#include <algorithm>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter, hms1_bIter, hms1_eIter;

   hms1.insert( 20 );
   hms1.insert( 10 );

   // hash_multiset elements need not be unique
   hms1.insert( 20 );

   hms1_bIter = hms1.begin( );
   hms1_eIter = hms1.end( );

   hash_multiset <int>::difference_type   df_typ5, df_typ10,
        df_typ20;

   df_typ5 = count( hms1_bIter, hms1_eIter, 5 );
   df_typ10 = count( hms1_bIter, hms1_eIter, 10 );
   df_typ20 = count( hms1_bIter, hms1_eIter, 20 );

   // The keys & hence the elements of a hash_multiset
   // need not be unique and may occur multiple times
   cout << "The number '5' occurs " << df_typ5
        << " times in hash_multiset hms1.\n";
   cout << "The number '10' occurs " << df_typ10
        << " times in hash_multiset hms1.\n";
   cout << "The number '20' occurs " << df_typ20
        << " times in hash_multiset hms1.\n";

   // Count the number of elements in a hash_multiset
   hash_multiset <int>::difference_type  df_count = 0;
   hms1_Iter = hms1.begin( );
   while ( hms1_Iter != hms1_eIter)
   {
      df_count++;
      hms1_Iter++;
   }

   cout << "The number of elements in the hash_multiset hms1 is "
        << df_count << "." << endl;
}
```

```Output
The number '5' occurs 0 times in hash_multiset hms1.
The number '10' occurs 1 times in hash_multiset hms1.
The number '20' occurs 2 times in hash_multiset hms1.
The number of elements in the hash_multiset hms1 is 3.
```

## <a name="emplace"></a>  hash_multiset::emplace

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Inserisce un elemento costruito sul posto in un oggetto hash_multiset.

```cpp
template <class ValTy>
iterator insert(ValTy&& val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`val`|Valore di un elemento da inserire nell'oggetto [hash_multiset](../standard-library/hash-multiset-class.md), a meno che l'oggetto `hash_multiset` non contenga già tale elemento o, più in generale, un elemento la cui la chiave sia ordinata in modo equivalente.|

### <a name="return-value"></a>Valore restituito

La funzione membro `emplace` restituisce un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_multiset_emplace.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset<string> hms3;
   string str1("a");

   hms3.emplace(move(str1));
   cout << "After the emplace insertion, hms3 contains "
      << *hms3.begin() << "." << endl;
}
```

```Output
After the emplace insertion, hms3 contains a.
```

## <a name="emplace_hint"></a>  hash_multiset::emplace_hint

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Inserisce un elemento costruito sul posto in un oggetto hash_multiset, con un suggerimento sulla posizione.

```cpp
template <class ValTy>
iterator insert(
    const_iterator _Where,
    ValTy&& val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`val`|Valore di un elemento da inserire nell'oggetto [hash_multiset](../standard-library/hash-multiset-class.md), a meno che l'oggetto `hash_multiset` non contenga già tale elemento o, più in generale, un elemento la cui la chiave sia ordinata in modo equivalente.|
|`_Where`|Posizione in cui iniziare a cercare il punto di inserimento corretto. Se il punto di inserimento è immediatamente successivo a `_Where`, l'inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.|

### <a name="return-value"></a>Valore restituito

La funzione membro [hash_multiset::emplace](#emplace) restituisce un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito nell'oggetto `hash_multiset`.

### <a name="remarks"></a>Note

Se il punto di inserimento è immediatamente successivo a `_Where`, l'inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_emplace_hint.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset<string> hms1;
   string str1("a");

   hms1.insert(hms1.begin(), move(str1));
   cout << "After the emplace insertion, hms1 contains "
      << *hms1.begin() << "." << endl;
}
```

```Output
After the emplace insertion, hms1 contains a.
```

## <a name="empty"></a>  hash_multiset::empty

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Verifica se un oggetto hash_multiset è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto hash_multiset è vuoto; in caso contrario, **false**.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_multiset_empty.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1, hms2;
   hms1.insert ( 1 );

   if ( hms1.empty( ) )
      cout << "The hash_multiset hms1 is empty." << endl;
   else
      cout << "The hash_multiset hms1 is not empty." << endl;

   if ( hms2.empty( ) )
      cout << "The hash_multiset hms2 is empty." << endl;
   else
      cout << "The hash_multiset hms2 is not empty." << endl;
}
```

```Output
The hash_multiset hms1 is not empty.
The hash_multiset hms2 is empty.
```

## <a name="end"></a>  hash_multiset::end

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multiset.

```cpp
const_iterator end() const;

iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multiset. Se l'oggetto hash_multiset è vuoto, hash_multiset::end == hash_multiset::begin.

### <a name="remarks"></a>Note

**end** viene usato per verificare se un iteratore ha raggiunto la fine del relativo oggetto hash_multiset. Non è consigliabile dereferenziare il valore restituito da **end**.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_end.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: iterator hms1_Iter;
   hash_multiset <int> :: const_iterator hms1_cIter;

   hms1.insert( 1 );
   hms1.insert( 2 );
   hms1.insert( 3 );

   hms1_Iter = hms1.end( );
   hms1_Iter--;
   cout << "The last element of hms1 is " << *hms1_Iter << endl;

   hms1.erase( hms1_Iter );

   // The following 3 lines would err because the iterator is const
   // hms1_cIter = hms1.end( );
   // hms1_cIter--;
   // hms1.erase( hms1_cIter );

   hms1_cIter = hms1.end( );
   hms1_cIter--;
   cout << "The last element of hms1 is now " << *hms1_cIter << endl;
}
```

```Output
The last element of hms1 is 3
The last element of hms1 is now 2
```

## <a name="equal_range"></a>  hash_multiset::equal_range

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce una coppia di iteratori rispettivamente al primo elemento di un oggetto hash_multiset con una chiave maggiore di una chiave specificata e al primo elemento dell'oggetto hash_multiset con una chiave uguale o maggiore di tale chiave.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### <a name="parameters"></a>Parametri

`key` Chiave dell'argomento deve essere confrontato con la chiave di ordinamento di un elemento dall'hash_multiset cercato.

### <a name="return-value"></a>Valore restituito

Coppia di iteratori in cui il primo è l'elemento [lower_bound](#lower_bound) e il secondo è l'elemento [upper_bound](#upper_bound) della chiave.

Per accedere al primo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **first** e per dereferenziare l'iteratore del limite inferiore, usare \*( `pr`. **first**). Per accedere al secondo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **second** e per dereferenziare l'iteratore del limite superiore, usare \*( `pr`. **second**).

### <a name="example"></a>Esempio

```cpp
// hash_multiset_equal_range.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef hash_multiset<int> IntHSet;
   IntHSet hms1;
   hash_multiset <int> :: const_iterator hms1_RcIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   pair <IntHSet::const_iterator, IntHSet::const_iterator> p1, p2;
   p1 = hms1.equal_range( 20 );

   cout << "The upper bound of the element with "
        << "a key of 20\nin the hash_multiset hms1 is: "
        << *(p1.second) << "." << endl;

   cout << "The lower bound of the element with "
        << "a key of 20\nin the hash_multiset hms1 is: "
        << *(p1.first) << "." << endl;

   // Compare the upper_bound called directly
   hms1_RcIter = hms1.upper_bound( 20 );
   cout << "A direct call of upper_bound( 20 ) gives "
        << *hms1_RcIter << "," << endl
        << "matching the 2nd element of the pair"
        << " returned by equal_range( 20 )." << endl;

   p2 = hms1.equal_range( 40 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == hms1.end( ) )
      && ( p2.second == hms1.end( ) ) )
      cout << "The hash_multiset hms1 doesn't have an element "
           << "with a key less than 40." << endl;
   else
      cout << "The element of hash_multiset hms1"
           << "with a key >= 40 is: "
           << *(p1.first) << "." << endl;
}
```

```Output
The upper bound of the element with a key of 20
in the hash_multiset hms1 is: 30.
The lower bound of the element with a key of 20
in the hash_multiset hms1 is: 20.
A direct call of upper_bound( 20 ) gives 30,
matching the 2nd element of the pair returned by equal_range( 20 ).
The hash_multiset hms1 doesn't have an element with a key less than 40.
```

## <a name="erase"></a>  hash_multiset::erase

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Rimuove un elemento o un intervallo di elementi in un hash_multiset dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

```cpp
iterator erase(iterator _Where);

iterator erase(iterator first, iterator last);

size_type erase(const key_type& key);
```

### <a name="parameters"></a>Parametri

`_Where` Posizione dell'elemento da rimuovere dall'hash_multiset.

`first` Posizione del primo elemento rimosso dall'hash_multiset.

`last` Posizione immediatamente successiva all'ultimo elemento rimosso dall'hash_multiset.

`key` La chiave degli elementi da rimuovere dall'hash_multiset.

### <a name="return-value"></a>Valore restituito

Per le prime due funzioni, iteratore bidirezionale che definisce il primo elemento rimanente successivo a tutti gli elementi eliminati o un puntatore al termine dell'hash_multiset se tali elementi non sono presenti. Per la terza funzione membro, il numero di elementi rimossi dall'hash_multiset.

### <a name="remarks"></a>Note

Le funzioni membro non generano mai un'eccezione.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'uso della funzione membro hash_multiset::erase.

```cpp
// hash_multiset_erase.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_multiset<int> hms1, hms2, hms3;
    hash_multiset<int> :: iterator pIter, Iter1, Iter2;
    int i;
    hash_multiset<int>::size_type n;

    for (i = 1; i < 5; i++)
    {
        hms1.insert(i);
        hms2.insert(i * i);
        hms3.insert(i - 1);
    }

    // The 1st member function removes an element at a given position
    Iter1 = ++hms1.begin();
    hms1.erase(Iter1);

    cout << "After the 2nd element is deleted,\n "
         << "the hash_multiset hms1 is:" ;
    for (pIter = hms1.begin(); pIter != hms1.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;

    // The 2nd member function removes elements
    // in the range [ first,  last)
    Iter1 = ++hms2.begin();
    Iter2 = --hms2.end();
    hms2.erase(Iter1, Iter2);

    cout << "After the middle two elements are deleted,\n "
         << "the hash_multiset hms2 is:" ;
    for (pIter = hms2.begin(); pIter != hms2.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;

    // The 3rd member function removes elements with a given  key
    n = hms3.erase(2);

    cout << "After the element with a key of 2 is deleted,\n "
         << "the hash_multiset hms3 is:" ;
    for (pIter = hms3.begin(); pIter != hms3.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;

    // The 3rd member function returns the number of elements removed
    cout << "The number of elements removed from hms3 is: "
         << n << "." << endl;

    // The dereferenced iterator can also be used to specify a key
    Iter1 = ++hms3.begin();
    hms3.erase(Iter1);

    cout << "After another element with a key "
         << "equal to that of the 2nd element\n is deleted, "
         << "the hash_multiset hms3 is:" ;
    for (pIter = hms3.begin(); pIter != hms3.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;
}
```

```Output
After the 2nd element is deleted,
 the hash_multiset hms1 is: 1 3 4.
After the middle two elements are deleted,
 the hash_multiset hms2 is: 16 4.
After the element with a key of 2 is deleted,
 the hash_multiset hms3 is: 0 1 3.
The number of elements removed from hms3 is: 1.
After another element with a key equal to that of the 2nd element
 is deleted, the hash_multiset hms3 is: 0 3.
```

## <a name="find"></a>  hash_multiset::find

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore che punta alla posizione di un elemento in un oggetto hash_multiset che dispone di una chiave equivalente a una chiave specificata.

```cpp
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```

### <a name="parameters"></a>Parametri

`key` Chiave dell'argomento per la corrispondenza con la chiave di ordinamento di un elemento dall'hash_multiset cercato.

### <a name="return-value"></a>Valore restituito

Tipo [iterator](#iterator) o [const_iterator](#const_iterator) che punta alla posizione di un elemento equivalente a una chiave specificata o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_multiset se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

La funzione membro restituisce un iteratore che punta a un elemento dell'oggetto hash_multiset la cui chiave di ordinamento è **equivalente** alla chiave dell'argomento in un predicato binario che causa un ordinamento basato su una relazione di comparabilità "minore di".

Se il valore restituito di **find** viene assegnato a un `const_iterator`, l'oggetto hash_multiset non può essere modificato. Se il valore restituito di **find** viene assegnato a un **iterator**, l'oggetto hash_multiset può essere modificato.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_find.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: const_iterator hms1_AcIter, hms1_RcIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_RcIter = hms1.find( 20 );
   cout << "The element of hash_multiset hms1 with a key of 20 is: "
        << *hms1_RcIter << "." << endl;

   hms1_RcIter = hms1.find( 40 );

   // If no match is found for the key, end( ) is returned
   if ( hms1_RcIter == hms1.end( ) )
      cout << "The hash_multiset hms1 doesn't have an element "
           << "with a key of 40." << endl;
   else
      cout << "The element of hash_multiset hms1 with a key of 40 is: "
           << *hms1_RcIter << "." << endl;

   // The element at a specific location in the hash_multiset can be found
   // by using a dereferenced iterator addressing the location
   hms1_AcIter = hms1.end( );
   hms1_AcIter--;
   hms1_RcIter = hms1.find( *hms1_AcIter );
   cout << "The element of hms1 with a key matching "
        << "that of the last element is: "
        << *hms1_RcIter << "." << endl;
}
```

```Output
The element of hash_multiset hms1 with a key of 20 is: 20.
The hash_multiset hms1 doesn't have an element with a key of 40.
The element of hms1 with a key matching that of the last element is: 30.
```

## <a name="get_allocator"></a>  hash_multiset::get_allocator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce una copia dell'oggetto allocatore usato per costruire l'oggetto hash_multiset.

```cpp
Allocator get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dall'oggetto hash_multiset per gestire la memoria, che corrisponde al parametro di modello `Allocator` della classe.

Per altre informazioni su `Allocator`, vedere la sezione Note dell'argomento [Classe hash_multiset](../standard-library/hash-multiset-class.md).

### <a name="remarks"></a>Note

Gli allocatori per la classe hash_multiset specificano il modo in cui la classe gestisce la memoria. Gli allocatori predefiniti acclusi alle classi contenitore della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_get_allocator.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   // The following lines declare objects
   // that use the default allocator.
   hash_multiset <int, hash_compare <int, less<int> > > hms1;
   hash_multiset <int, hash_compare <int, greater<int> > > hms2;
   hash_multiset <double, hash_compare <double,
      less<double> >, allocator<double> > hms3;

   hash_multiset <int, hash_compare <int,
      greater<int> > >::allocator_type hms2_Alloc;
   hash_multiset <double>::allocator_type hms3_Alloc;
   hms2_Alloc = hms2.get_allocator( );

   cout << "The number of integers that can be allocated"
        << endl << "before free memory is exhausted: "
        << hms1.max_size( ) << "." << endl;

   cout << "The number of doubles that can be allocated"
        << endl << "before free memory is exhausted: "
        << hms3.max_size( ) <<  "." << endl;

   // The following lines create a hash_multiset hms4
   // with the allocator of hash_multiset hms1.
   hash_multiset <int>::allocator_type hms4_Alloc;
   hash_multiset <int> hms4;
   hms4_Alloc = hms2.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated by the other
   if( hms2_Alloc == hms4_Alloc )
   {
      cout << "The allocators are interchangeable."
           << endl;
   }
   else
   {
      cout << "The allocators are not interchangeable."
           << endl;
   }
}
```

## <a name="hash_multiset"></a>  hash_multiset::hash_multiset

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Costruisce un `hash_multiset` vuoto o che rappresenta una copia totale o parziale di un altro `hash_multiset`.

```cpp
hash_multiset();

explicit hash_multiset(
    const Traits& Comp);

hash_multiset(
    const Traits& Comp,
    const Allocator& Al);

hash_multiset(
    const hash_multiset<Key, Traits, Allocator>& Right);

hash_multiset(
    hash_multiset&& Right
};
hash_multiset (initializer_list<Type> IList);

hash_multiset(
    initializer_list<Tu[e> IList, const Compare& Comp):
hash_multiset(
    initializer_list<Type> IList, const Compare& Comp, const Allocator& Al);

template <class InputIterator>
hash_multiset(
 InputIterator First,
    InputIterator Last);

template <class InputIterator>
hash_multiset(
 InputIterator First,
    InputIterator Last,
    const Traits& Comp);

template <class InputIterator>
hash_multiset(
 InputIterator First,
    InputIterator Last,
    const Traits& Comp,
    const Allocator& Al);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`Al`|Classe dell'allocatore di memoria da usare per l'oggetto `hash_multiset`. Per impostazione predefinita è `Allocator`.|
|`Comp`|Funzione di confronto di tipo `const Traits` usata per ordinare gli elementi nell'oggetto `hash_multiset`. Per impostazione predefinita è `hash_compare`.|
|`Right`|Oggetto `hash_multiset` di cui l'oggetto `hash_multiset` costruito deve essere una copia.|
|`First`|Posizione del primo elemento nell'intervallo di elementi da copiare.|
|`Last`|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|
|`IList`|initializer_list che contiene gli elementi da copiare.|

### <a name="remarks"></a>Note

Tutti i costruttori archiviano un tipo di oggetto allocatore che gestisce la memoria per l'oggetto `hash_multiset` e che può essere restituito in un secondo momento chiamando [hash_multiset::get_allocator](#get_allocator). Il parametro allocator viene spesso omesso nelle dichiarazioni di classe e vengono usate macro di pre-elaborazione per introdurre allocatori alternativi.

Tutti i costruttori inizializzano i relativi oggetti hash_multiset.

Tutti i costruttori archiviano un oggetto funzione di tipo `Traits` che viene usato per stabilire un ordine tra le chiavi dell'oggetto `hash_multiset` e che può essere restituito in un secondo momento chiamando [hash_multiset::key_comp](#key_comp). Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_multiset](../standard-library/hash-multiset-class.md).

I primi tre costruttori specificano un oggetto `hash_multiset` iniziale vuoto. Di questi, il secondo specifica il tipo di funzione di confronto ( `Comp`) da usare per stabilire l'ordine degli elementi e il terzo specifica in modo esplicito il tipo di allocatore ( `Al`) da usare. La parola chiave `explicit` elimina alcuni tipi di conversione automatica del tipo.

Il quarto costruttore sposta il `hash_multiset` `Right`.

Il quinto, il sesto e il settimo costruttore usano un oggetto initializer_list.

Gli ultimi tre costruttori copiano l'intervallo [ `First`, `Last`) di un oggetto `hash_multiset` con un grado di esplicitazione crescente nello specificare il tipo di funzione di confronto della classe Compare e il tipo di allocatore.

L'ordine effettivo degli elementi in un contenitore di set hash dipende dalla funzione hash, dalla funzione di ordinamento e dalla dimensione corrente della tabella hash e, in generale, non può essere previsto come avveniva per il contenitore di set, in cui era determinato solo dalla funzione di ordinamento.

## <a name="insert"></a>  hash_multiset::insert

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Inserisce un elemento o un intervallo di elementi in un oggetto hash_multiset.

```cpp
iterator insert(
    const Type& Val);

iterator insert(
    iterator Where,
    const Type& Al);

void insert(
    initializer_list<Type> IList);

iterator insert(
    const Type& Val);

iterator insert(
    Iterator Where,
    const Type& Val);

template <class InputIterator>
void insert(
    InputIterator First,
    InputIterator Last);

template <class ValTy>
iterator insert(
    ValTy&& Val);

template <class ValTy>
iterator insert(
    const_iterator Where,
    ValTy&& Val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`Val`|Valore di un elemento da inserire nell'oggetto hash_multiset, a meno che quest'ultimo non contenga già tale elemento o, più in generale, un elemento la cui la chiave sia ordinata in modo equivalente.|
|`Where`|Posizione in cui iniziare a cercare il punto di inserimento corretto. Se il punto di inserimento è immediatamente successivo a `_Where`, l'inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.|
|`First`|Posizione del primo elemento da copiare da un oggetto hash_multiset.|
|`Last`|Posizione immediatamente dopo l'ultimo elemento da copiare da un oggetto hash_multiset.|
|`IList`|Oggetto initializer_list che contiene gli elementi da copiare.|

### <a name="return-value"></a>Valore restituito

Le prime due funzioni membro di inserimento restituiscono un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento.

Le tre funzioni membro successive usano un oggetto initializer_list.

La terza funzione membro inserisce la sequenza di valori di elemento in un oggetto hash_multiset che corrisponde a ogni elemento interessato da un iteratore nell'intervallo [ `First`, `Last`) di un oggetto hash_multiset specificato.

### <a name="remarks"></a>Note

Se il punto di inserimento è immediatamente successivo a `Where`, l'inserimento per la versione del suggerimento di insert può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.

## <a name="iterator"></a>  hash_multiset::iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un oggetto hash_multiset.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::iterator iterator;
```

### <a name="remarks"></a>Note

Un tipo **iterator** può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](#begin) per indicazioni su come dichiarare e usare **iterator**.

## <a name="key_comp"></a>  hash_multiset::key_comp

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Recupera una copia dell'oggetto di confronto usato per ordinare le chiavi di un oggetto hash_multiset.

```cpp
key_compare key_comp() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il parametro di modello hash_multiset `Traits`, che contiene gli oggetti funzione usati per generare un hash e ordinare gli elementi del contenitore.

Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_multiset](../standard-library/hash-multiset-class.md).

### <a name="remarks"></a>Note

L'oggetto archiviato definisce una funzione membro:

**bool operator**( **const Key&** *_xVal,* **const Key&** _ `yVal`);

che restituisce **true** se `_xVal` precede e non è uguale a `_yVal` nell'ordinamento.

Si noti che [key_compare](#key_compare) e [value_compare](#value_compare) sono sinonimi per il parametro di modello **Traits**. Entrambi i tipi vengono forniti per le classi hash_set e hash_multiset, dove sono identici, per la compatibilità con le classi hash_map e hash_multimap, dove sono distinti.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_key_comp.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_multiset <int, hash_compare < int, less<int> > >hms1;
   hash_multiset<int, hash_compare < int, less<int> > >::key_compare kc1
          = hms1.key_comp( ) ;
   bool result1 = kc1( 2, 3 ) ;
   if( result1 == true )
   {
      cout << "kc1( 2,3 ) returns value of true, "
           << "where kc1 is the function object of hms1."
           << endl;
   }
   else
   {
      cout << "kc1( 2,3 ) returns value of false "
           << "where kc1 is the function object of hms1."
        << endl;
   }

   hash_multiset <int, hash_compare < int, greater<int> > > hms2;
   hash_multiset<int, hash_compare < int, greater<int> > >::key_compare
         kc2 = hms2.key_comp( ) ;
   bool result2 = kc2( 2, 3 ) ;
   if( result2 == true )
   {
      cout << "kc2( 2,3 ) returns value of true, "
           << "where kc2 is the function object of hms2."
           << endl;
   }
   else
   {
      cout << "kc2( 2,3 ) returns value of false, "
           << "where kc2 is the function object of hms2."
           << endl;
   }
}
```

## <a name="key_compare"></a>  hash_multiset::key_compare

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce due oggetti funzione, un predicato binario della classe compare in grado di confrontare due valori di elemento di un oggetto hash_multiset per determinarne l'ordine relativo e un predicato unario che genera un hash per gli elementi.

```cpp
typedef Traits key_compare;
```

### <a name="remarks"></a>Note

**key_compare** è un sinonimo per il parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_multiset](../standard-library/hash-multiset-class.md).

Si noti che `key_compare` e value_compare sono sinonimi per il parametro di modello **Traits**. Entrambi i tipi vengono forniti per le classi hash_set e hash_multiset, dove sono identici, per la compatibilità con le classi hash_map e hash_multimap, dove sono distinti.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [key_comp](#key_comp) per indicazioni su come dichiarare e usare `key_compare`.

## <a name="key_type"></a>  hash_multiset::key_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce un oggetto funzione in grado di confrontare chiavi di ordinamento per determinare l'ordine relativo di due elementi nell'oggetto hash_multiset.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Note

**key_type** è un sinonimo per il parametro di modello `Key`.

Si noti che `key_type` e [value_type](../standard-library/hash-set-class.md#value_type) sono sinonimi per il parametro di modello **Key**. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

Per altre informazioni su `Key`, vedere la sezione Note dell'argomento [Classe hash_multiset](../standard-library/hash-multiset-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="lower_bound"></a>  hash_multiset::lower_bound

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore al primo elemento di un oggetto hash_multiset con una chiave uguale o maggiore di quella specificata.

```cpp
const_iterator lower_bound(const Key& key) const;

iterator lower_bound(const Key& key);
```

### <a name="parameters"></a>Parametri

`key` Chiave dell'argomento deve essere confrontato con la chiave di ordinamento di un elemento dall'hash_multiset cercato.

### <a name="return-value"></a>Valore restituito

Tipo [iterator](#iterator) o [const_iterator](#const_iterator) che punta alla posizione del primo elemento di un oggetto hash_multiset con una chiave uguale o maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_multiset se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_multiset_lower_bound.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main() {
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: const_iterator hms1_AcIter, hms1_RcIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_RcIter = hms1.lower_bound( 20 );
   cout << "The element of hash_multiset hms1 with a key of 20 is: "
        << *hms1_RcIter << "." << endl;

   hms1_RcIter = hms1.lower_bound( 40 );

   // If no match is found for the key, end( ) is returned
   if ( hms1_RcIter == hms1.end( ) )
      cout << "The hash_multiset hms1 doesn't have an element "
           << "with a key of 40." << endl;
   else
      cout << "The element of hash_multiset hms1 with a key of 40 is: "
           << *hms1_RcIter << "." << endl;

   // An element at a specific location in the hash_multiset can be found
   // by using a dereferenced iterator that addresses the location
   hms1_AcIter = hms1.end( );
   hms1_AcIter--;
   hms1_RcIter = hms1.lower_bound( *hms1_AcIter );
   cout << "The element of hms1 with a key matching "
        << "that of the last element is: "
        << *hms1_RcIter << "." << endl;
}
```

## <a name="max_size"></a>  hash_multiset::max_size

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce la lunghezza massima dell'oggetto hash_multiset.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza massima possibile dell'oggetto hash_multiset.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_multiset_max_size.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::size_type i;

   i = hms1.max_size( );
   cout << "The maximum possible length "
        << "of the hash_multiset is " << i << "." << endl;
}
```

## <a name="op_eq"></a>  hash_multiset::operator=

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Sostituisce gli elementi dell'oggetto hash_multiset con una copia di un altro oggetto hash_multiset.

```cpp
hash_multiset& operator=(const hash_multiset& right);

hash_multiset& operator=(hash_multiset&& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`right`|[Classe hash_multiset](../standard-library/hash-multiset-class.md) copiata nell'oggetto `hash_multiset`.|

### <a name="remarks"></a>Note

Dopo la cancellazione di tutti gli elementi esistenti in un oggetto `hash_multiset`, `operator=` copia o sposta il contenuto di `right` nell'oggetto `hash_multiset`.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_operator_as.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset<int> v1, v2, v3;
   hash_multiset<int>::iterator iter;

   v1.insert(10);

   cout << "v1 = " ;
   for (iter = v1.begin(); iter != v1.end(); iter++)
      cout << iter << " ";
   cout << endl;

   v2 = v1;
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter << " ";
   cout << endl;

// move v1 into v2
   v2.clear();
   v2 = move(v1);
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter << " ";
   cout << endl;
}
```

## <a name="pointer"></a>  hash_multiset::pointer

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce un puntatore a un elemento di un oggetto hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::pointer pointer;
```

### <a name="remarks"></a>Note

Un tipo **pointer** può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto multiset.

## <a name="rbegin"></a>  hash_multiset::rbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore che punta al primo elemento di un oggetto hash_multiset invertito.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta al primo elemento di un oggetto hash_multiset invertito o a quello che è stato l'ultimo elemento dell'oggetto hash_multiset non invertito.

### <a name="remarks"></a>Note

`rbegin` viene usato con un oggetto hash_multiset invertito proprio come [begin](#begin) viene usato con un oggetto hash_multiset.

Se il valore restituito di `rbegin` viene assegnato a un `const_reverse_iterator`, l'oggetto hash_multiset non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un `reverse_iterator`, l'oggetto hash_multiset può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto hash_multiset.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_rbegin.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter;
   hash_multiset <int>::reverse_iterator hms1_rIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_rIter = hms1.rbegin( );
   cout << "The first element in the reversed hash_multiset is "
        << *hms1_rIter << "." << endl;

   // begin can be used to start an iteration
   // throught a hash_multiset in a forward order
   cout << "The hash_multiset is: ";
   for ( hms1_Iter = hms1.begin( ) ; hms1_Iter != hms1.end( );
         hms1_Iter++ )
      cout << *hms1_Iter << " ";
   cout << endl;

   // rbegin can be used to start an iteration
   // throught a hash_multiset in a reverse order
   cout << "The reversed hash_multiset is: ";
   for ( hms1_rIter = hms1.rbegin( ) ; hms1_rIter != hms1.rend( );
         hms1_rIter++ )
      cout << *hms1_rIter << " ";
   cout << endl;

   // A hash_multiset element can be erased by dereferencing to its key
   hms1_rIter = hms1.rbegin( );
   hms1.erase ( *hms1_rIter );

   hms1_rIter = hms1.rbegin( );
   cout << "After the erasure, the first element "
        << "in the reversed hash_multiset is "<< *hms1_rIter << "."
        << endl;
}
```

```Output
The first element in the reversed hash_multiset is 30.
The hash_multiset is: 10 20 30
The reversed hash_multiset is: 30 20 10
After the erasure, the first element in the reversed hash_multiset is 20.
```

## <a name="reference"></a>  hash_multiset::reference

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce un riferimento a un elemento archiviato in un oggetto hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::reference reference;
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_multiset_reference.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;

   hms1.insert( 10 );
   hms1.insert( 20 );

   // Declare and initialize a reference &Ref1 to the 1st element
   int &Ref1 = *hms1.begin( );

   cout << "The first element in the hash_multiset is "
        << Ref1 << "." << endl;

   // The value of the 1st element of the hash_multiset can be
   // changed by operating on its (non const) reference
   Ref1 = Ref1 + 5;

   cout << "The first element in the hash_multiset is now "
        << *hms1.begin() << "." << endl;
}
```

```Output
The first element in the hash_multiset is 10.
The first element in the hash_multiset is now 15.
```

## <a name="rend"></a>  hash_multiset::rend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multiset invertito.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multiset invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto hash_multiset non invertito.

### <a name="remarks"></a>Note

`rend` viene usato con un oggetto hash_multiset invertito proprio come [end](#end) viene usato con un oggetto hash_multiset.

Se il valore restituito di `rend` viene assegnato a un `const_reverse_iterator`, l'oggetto hash_multiset non può essere modificato. Se il valore restituito di `rend` viene assegnato a un `reverse_iterator`, l'oggetto hash_multiset può essere modificato. Non è consigliabile dereferenziare il valore restituito da `rend`.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto hash_multiset.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_rend.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter;
   hash_multiset <int>::reverse_iterator hms1_rIter;
   hash_multiset <int>::const_reverse_iterator hms1_crIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_rIter = hms1.rend( );
   hms1_rIter--;
   cout << "The last element in the reversed hash_multiset is "
        << *hms1_rIter << "." << endl;

   // end can be used to terminate an iteration
   // through a hash_multiset in a forward order
   cout << "The hash_multiset is: ";
   for ( hms1_Iter = hms1.begin( ) ; hms1_Iter != hms1.end( );
         hms1_Iter++ )
      cout << *hms1_Iter << " ";
   cout << "." << endl;

   // rend can be used to terminate an iteration
   // throught a hash_multiset in a reverse order
   cout << "The reversed hash_multiset is: ";
   for ( hms1_rIter = hms1.rbegin( ) ; hms1_rIter != hms1.rend( );
         hms1_rIter++ )
      cout << *hms1_rIter << " ";
   cout << "." << endl;

   hms1_rIter = hms1.rend( );
   hms1_rIter--;
   hms1.erase ( *hms1_rIter );

   hms1_rIter = hms1.rend( );
   hms1_rIter--;
   cout << "After the erasure, the last element in the "
        << "reversed hash_multiset is " << *hms1_rIter << "."
        << endl;
}
```

```Output
The last element in the reversed hash_multiset is 10.
The hash_multiset is: 10 20 30 .
The reversed hash_multiset is: 30 20 10 .
After the erasure, the last element in the reversed hash_multiset is 20.
```

## <a name="reverse_iterator"></a>  hash_multiset::reverse_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un oggetto hash_multiset invertito.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::reverse_iterator reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `reverse_iterator` viene usato per eseguire l'iterazione sull'oggetto hash_multiset in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rbegin](#rbegin) per indicazioni su come dichiarare e usare `reverse_iterator`.

## <a name="size"></a>  hash_multiset::size

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce il numero di elementi nell'oggetto hash_multiset.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente dell'oggetto hash_multiset.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_multiset_size.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: size_type i;

   hms1.insert( 1 );
   i = hms1.size( );
   cout << "The hash_multiset length is " << i << "." << endl;

   hms1.insert( 2 );
   i = hms1.size( );
   cout << "The hash_multiset length is now " << i << "." << endl;
}
```

```Output
The hash_multiset length is 1.
The hash_multiset length is now 2.
```

## <a name="size_type"></a>  hash_multiset::size_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un oggetto hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::size_type size_type;
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.

## <a name="swap"></a>  hash_multiset::swap

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Scambia gli elementi di due oggetti hash_multiset.

```cpp
void swap(hash_multiset& right);
```

### <a name="parameters"></a>Parametri

`right` L'hash_multiset di argomento che fornisce gli elementi da scambiare con l'hash_multiset di destinazione.

### <a name="remarks"></a>Note

La funzione membro non invalida riferimenti, puntatori o iteratori che designano gli elementi dei due oggetti hash_multiset di cui vengono scambiati gli elementi.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_swap.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1, hms2, hms3;
   hash_multiset <int>::iterator hms1_Iter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );
   hms2.insert( 100 );
   hms2.insert( 200 );
   hms3.insert( 300 );

   cout << "The original hash_multiset hms1 is:";
   for ( hms1_Iter = hms1.begin( ); hms1_Iter != hms1.end( );
         hms1_Iter++ )
         cout << " " << *hms1_Iter;
   cout   << "." << endl;

   // This is the member function version of swap
   hms1.swap( hms2 );

   cout << "After swapping with hms2, list hms1 is:";
   for ( hms1_Iter = hms1.begin( ); hms1_Iter != hms1.end( );
         hms1_Iter++ )
         cout << " " << *hms1_Iter;
   cout  << "." << endl;

   // This is the specialized template version of swap
   swap( hms1, hms3 );

   cout << "After swapping with hms3, list hms1 is:";
   for ( hms1_Iter = hms1.begin( ); hms1_Iter != hms1.end( );
         hms1_Iter++ )
         cout << " " << *hms1_Iter;
   cout   << "." << endl;
}
```

```Output
The original hash_multiset hms1 is: 10 20 30.
After swapping with hms2, list hms1 is: 200 100.
After swapping with hms3, list hms1 is: 300.
```

## <a name="upper_bound"></a>  hash_multiset::upper_bound

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Restituisce un iteratore al primo elemento di un oggetto hash_multiset con una chiave maggiore di quella specificata.

```cpp
const_iterator upper_bound(const Key& key) const;

iterator upper_bound(const Key& key);
```

### <a name="parameters"></a>Parametri

`key` Chiave dell'argomento deve essere confrontato con la chiave di ordinamento di un elemento dall'hash_multiset cercato.

### <a name="return-value"></a>Valore restituito

Tipo [iterator](#iterator) o [const_iterator](#const_iterator) che punta alla posizione del primo elemento di un oggetto hash_multiset con una chiave maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_multiset se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_multiset_upper_bound.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: const_iterator hms1_AcIter, hms1_RcIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_RcIter = hms1.upper_bound( 20 );
   cout << "The first element of hash_multiset hms1" << endl
        << " with a key greater than 20 is: "
        << *hms1_RcIter << "." << endl;

   hms1_RcIter = hms1.upper_bound( 30 );

   // If no match is found for the key, end( ) is returned
   if ( hms1_RcIter == hms1.end( ) )
      cout << "The hash_multiset hms1 doesn't have an element "
           << "\n with a key greater than 30." << endl;
   else
      cout << "The element of hash_multiset hms1"
           << "with a key > 40 is: "
           << *hms1_RcIter << "." << endl;

   // An element at a specific location in the hash_multiset can be
   // found by using a dereferenced iterator addressing the location
   hms1_AcIter = hms1.begin( );
   hms1_RcIter = hms1.upper_bound( *hms1_AcIter );
   cout << "The first element of hms1\n with a key greater than "
        << endl << "that of the initial element of hms1 is: "
        << *hms1_RcIter << "." << endl;
}
```

```Output
The first element of hash_multiset hms1
 with a key greater than 20 is: 30.
The hash_multiset hms1 doesn't have an element
 with a key greater than 30.
The first element of hms1
 with a key greater than
that of the initial element of hms1 is: 20.
```

## <a name="value_comp"></a>  hash_multiset::value_comp

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Recupera una copia dell'oggetto di confronto usato per ordinare i valori degli elementi di un oggetto hash_multiset.

```cpp
value_compare value_comp() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il parametro di modello hash_multiset `Traits`, che contiene gli oggetti funzione usati per generare un hash e ordinare gli elementi del contenitore.

Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_multiset](../standard-library/hash-multiset-class.md).

### <a name="remarks"></a>Note

L'oggetto archiviato definisce una funzione membro:

**bool operator**( **constKey&**`_xVal`, **const Key&** *_yVal*);

che restituisce **true** se `_xVal` precede e non è uguale a `_yVal` nell'ordinamento.

Si noti che [key_compare](#key_compare) e [value_compare](#value_compare) sono sinonimi per il parametro di modello **Traits**. Entrambi i tipi vengono forniti per le classi hash_set e hash_multiset, dove sono identici, per la compatibilità con le classi hash_map e hash_multimap, dove sono distinti.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_value_comp.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_multiset <int, hash_compare < int, less<int> > > hms1;
   hash_multiset <int, hash_compare < int, less<int> > >::value_compare
      vc1 = hms1.value_comp( );
   bool result1 = vc1( 2, 3 );
   if( result1 == true )
   {
      cout << "vc1( 2,3 ) returns value of true, "
           << "where vc1 is the function object of hms1."
           << endl;
   }
   else
   {
      cout << "vc1( 2,3 ) returns value of false, "
           << "where vc1 is the function object of hms1."
           << endl;
   }

   hash_multiset <int, hash_compare < int, greater<int> > > hms2;
   hash_multiset<int, hash_compare < int, greater<int> > >::
           value_compare vc2 = hms2.value_comp( );
   bool result2 = vc2( 2, 3 );
   if( result2 == true )
   {
      cout << "vc2( 2,3 ) returns value of true, "
           << "where vc2 is the function object of hms2."
           << endl;
   }
   else
   {
      cout << "vc2( 2,3 ) returns value of false, "
           << "where vc2 is the function object of hms2."
           << endl;
   }
}
```

```Output
vc1( 2,3 ) returns value of true, where vc1 is the function object of hms1.
vc2( 2,3 ) returns value of false, where vc2 is the function object of hms2.
```

## <a name="value_compare"></a>  hash_multiset::value_compare

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che fornisce due oggetti funzione, un predicato binario della classe compare in grado di confrontare due valori di elemento di un oggetto hash_multiset per determinarne l'ordine relativo e un predicato unario che genera un hash per gli elementi.

```cpp
typedef key_compare value_compare;
```

### <a name="remarks"></a>Note

**value_compare** è un sinonimo per il parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_multiset](../standard-library/hash-multiset-class.md).

Si noti che [key_compare](#key_compare) e **value_compare** sono sinonimi per il parametro di modello **Traits**. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_comp](#value_comp) per indicazioni su come dichiarare e usare `value_compare`.

## <a name="value_type"></a>  hash_multiset::value_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Tipo che descrive un oggetto archiviato come elemento di un oggetto hash_multiset in qualità di valore.

```cpp
typedef Key value_type;
```

### <a name="example"></a>Esempio

```cpp
// hash_multiset_value_type.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter;

   // Declare value_type
   hash_multiset <int> :: value_type hmsvt_Int;

   hmsvt_Int = 10;   // Initialize value_type

   // Declare key_type
   hash_multiset <int> :: key_type hmskt_Int;
   hmskt_Int = 20;             // Initialize key_type

   hms1.insert( hmsvt_Int );         // Insert value into s1
   hms1.insert( hmskt_Int );         // Insert key into s1

   // A hash_multiset accepts key_types or value_types as elements
   cout << "The hash_multiset has elements:";
   for ( hms1_Iter = hms1.begin() ; hms1_Iter != hms1.end( );
         hms1_Iter++)
      cout << " " << *hms1_Iter;
      cout << "." << endl;
}
```

```Output
The hash_multiset has elements: 10 20.
```

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
