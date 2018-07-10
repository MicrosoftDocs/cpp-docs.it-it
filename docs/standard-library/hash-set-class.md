---
title: Classe hash_set | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- hash_set/stdext::hash_set
- hash_set/stdext::hash_set::allocator_type
- hash_set/stdext::hash_set::const_iterator
- hash_set/stdext::hash_set::const_pointer
- hash_set/stdext::hash_set::const_reference
- hash_set/stdext::hash_set::const_reverse_iterator
- hash_set/stdext::hash_set::difference_type
- hash_set/stdext::hash_set::iterator
- hash_set/stdext::hash_set::key_compare
- hash_set/stdext::hash_set::key_type
- hash_set/stdext::hash_set::pointer
- hash_set/stdext::hash_set::reference
- hash_set/stdext::hash_set::reverse_iterator
- hash_set/stdext::hash_set::size_type
- hash_set/stdext::hash_set::value_compare
- hash_set/stdext::hash_set::value_type
- hash_set/stdext::hash_set::begin
- hash_set/stdext::hash_set::cbegin
- hash_set/stdext::hash_set::cend
- hash_set/stdext::hash_set::clear
- hash_set/stdext::hash_set::count
- hash_set/stdext::hash_set::crbegin
- hash_set/stdext::hash_set::crend
- hash_set/stdext::hash_set::emplace
- hash_set/stdext::hash_set::emplace_hint
- hash_set/stdext::hash_set::empty
- hash_set/stdext::hash_set::end
- hash_set/stdext::hash_set::equal_range
- hash_set/stdext::hash_set::erase
- hash_set/stdext::hash_set::find
- hash_set/stdext::hash_set::get_allocator
- hash_set/stdext::hash_set::insert
- hash_set/stdext::hash_set::key_comp
- hash_set/stdext::hash_set::lower_bound
- hash_set/stdext::hash_set::max_size
- hash_set/stdext::hash_set::rbegin
- hash_set/stdext::hash_set::rend
- hash_set/stdext::hash_set::size
- hash_set/stdext::hash_set::swap
- hash_set/stdext::hash_set::upper_bound
- hash_set/stdext::hash_set::value_comp
dev_langs:
- C++
helpviewer_keywords:
- stdext::hash_set
- stdext::hash_set::allocator_type
- stdext::hash_set::const_iterator
- stdext::hash_set::const_pointer
- stdext::hash_set::const_reference
- stdext::hash_set::const_reverse_iterator
- stdext::hash_set::difference_type
- stdext::hash_set::iterator
- stdext::hash_set::key_compare
- stdext::hash_set::key_type
- stdext::hash_set::pointer
- stdext::hash_set::reference
- stdext::hash_set::reverse_iterator
- stdext::hash_set::size_type
- stdext::hash_set::value_compare
- stdext::hash_set::value_type
- stdext::hash_set::begin
- stdext::hash_set::cbegin
- stdext::hash_set::cend
- stdext::hash_set::clear
- stdext::hash_set::count
- stdext::hash_set::crbegin
- stdext::hash_set::crend
- stdext::hash_set::emplace
- stdext::hash_set::emplace_hint
- stdext::hash_set::empty
- stdext::hash_set::end
- stdext::hash_set::equal_range
- stdext::hash_set::erase
- stdext::hash_set::find
- stdext::hash_set::get_allocator
- stdext::hash_set::insert
- stdext::hash_set::key_comp
- stdext::hash_set::lower_bound
- stdext::hash_set::max_size
- stdext::hash_set::rbegin
- stdext::hash_set::rend
- stdext::hash_set::size
- stdext::hash_set::swap
- stdext::hash_set::upper_bound
- stdext::hash_set::value_comp
ms.assetid: c765c06e-cbb6-48c2-93ca-d15468eb28d7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8e2a6dc618795872e3587c1872c4fb020872861f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33848989"
---
# <a name="hashset-class"></a>Classe hash_set

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

La classe contenitore hash_set è un'estensione di una libreria standard C++ e viene usata per l'archiviazione e il recupero veloce dei dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key,
    class Traits=hash_compare<Key, less<Key>>,
    class Allocator=allocator<Key>>
class hash_set
```

### <a name="parameters"></a>Parametri

`Key` Il tipo di elemento di dati da archiviare in hash_set.

`Traits` Tipo che include due oggetti funzione, uno della classe compare, vale a dire un predicato binario in grado di confrontare due valori di elementi come chiavi di ordinamento per determinarne l'ordine relativo e una funzione hash che rappresenta un mapping predicato unario chiave i valori degli elementi da senza segno valori integer di tipo **size_t**. Questo argomento è facoltativo e il `hash_compare` *< chiave,* **meno * * *\<chiave >>* è il valore predefinito.

`Allocator` Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli sull'allocazione di hash_set e alla deallocazione della memoria. Questo argomento è facoltativo e il valore predefinito è **allocatore * * *\<chiave >.*

## <a name="remarks"></a>Note

hash_set è:

- Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata. È inoltre un contenitore associativo semplice, in quanto i valori dei relativi elementi corrispondono ai valori delle chiavi.

- Reversibile, in quanto fornisce un iteratore bidirezionale per accedere ai relativi elementi.

- Con hash, poiché i rispettivi elementi sono raggruppati in bucket in base al valore di una funzione hash applicata ai valori di chiave degli elementi.

- Univoco nel senso che ogni elemento deve disporre di una chiave univoca. Poiché hash_set è anche un contenitore associativo semplice, anche i relativi elementi sono univoci.

- Una classe modello, poiché la funzionalità che fornisce è generica e completamente indipendente dal tipo specifico di dati contenuti come elementi o chiavi. I tipi di dati da utilizzare per gli elementi e le chiavi vengono invece specificati come parametri nel modello di classe i insieme alla funzione di confronto e all'allocatore.

Il vantaggio principale dell'hashing rispetto all'ordinamento è costituito da una maggiore efficienza. Un hashing corretto esegue inserimenti, eliminazioni e ricerche in un tempo medio costante rispetto al tempo proporzionale al logaritmo del numero di elementi nel contenitore per le tecniche di ordinamento. Non è possibile modificare direttamente il valore di un elemento di un set. È invece necessario eliminare i valori precedenti e inserire gli elementi che presentano nuovi valori.

La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. I contenitori associativi con hash sono ottimizzati per le operazioni di ricerca, inserimento e rimozione. Le funzioni membro che supportano in modo esplicito queste operazioni risultano efficienti quando vengono usate con una funzione hash ben progettata, poiché eseguono le operazioni in un tempo mediamente costante e non dipendente dal numero di elementi nel contenitore. Una funzione hash ben progettata produce una distribuzione uniforme di valori con hash e riduce al minimo i numeri di conflitti. Un conflitto si verifica quando viene eseguito il mapping di valori di chiave distinti allo stesso valore con hash. Nella peggiore delle ipotesi, con la peggiore funzione hash possibile, il numero di operazioni è proporzionale al numero di elementi della sequenza (tempo lineare).

hash_set deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione. Gli elementi di un hash_set sono univoci e vengono usati come personali chiavi di ordinamento. Un modello relativo a questo tipo di struttura è ad esempio un elenco ordinato di parole in cui ogni parola deve essere presente una sola volta. Se sono state consentite più occorrenze delle parole, la struttura di contenitore appropriata è il hash_multiset. Se i valori devono essere associati a un elenco di parole chiave univoche, un hash_map rappresenta la struttura appropriata per contenere questi dati. Se invece le chiavi non sono univoche, è preferibile scegliere come contenitore un hash_multimap.

L'oggetto hash_set ordina la sequenza che controlla chiamando un oggetto hash **Traits** archiviato del tipo [value_compare](#value_compare). È possibile accedere a questo oggetto archiviato chiamando la funzione membro [key_comp](#key_comp). Un oggetto funzione di questo tipo deve comportarsi come un oggetto della classe *hash_compare<Key, less\<Key> >.* In particolare, per tutti i valori `key` di tipo Key, la chiamata Trait( `key` ) genera una distribuzione di valori di tipo size_t.

In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti (ovvero che uno non è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard. Un predicato binario *f*( *x*, *y*) è un oggetto funzione che dispone di due oggetti argomento x e y e di un valore restituito true o false. Un ordinamento imposto a un oggetto hash_set è un ordinamento di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti *x* e *y* vengono definiti equivalenti quando sia *f*( *x*, *y*) che *f*( *y*, *x*) sono false. Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.

L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di ordinamento e dalle dimensioni correnti della tabella hash archiviata nell'oggetto contenitore. Non è possibile determinare le dimensioni correnti della tabella hash, quindi non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata. L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.

L'iteratore fornito dalla classe hash_set è un iteratore bidirezionale, ma le funzioni membro [insert](#insert) e [hash_set](#hash_set) della classe hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali. I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità. Ogni concetto di iteratore dispone di un proprio set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore. Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza. Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori [ `first`, `last`) nel contesto delle funzioni membro della classe.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[hash_set](#hash_set)|Costruisce un `hash_set` vuoto o che rappresenta una copia totale o parziale di un altro `hash_set`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto `hash_set`.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `hash_set`.|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un elemento `const` in un `hash_set`.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un elemento `const` archiviato in un `hash_set` per la lettura e l'esecuzione di operazioni `const`.|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `hash_set`.|
|[difference_type](#difference_type)|Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un `hash_set` in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|
|[iterator](#iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un `hash_set`.|
|[key_compare](#key_compare)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `hash_set`.|
|[key_type](#key_type)|Tipo che descrive un oggetto archiviato come elemento di un `hash_set` grazie alla relativa funzione di chiave di ordinamento.|
|[pointer](#pointer)|Tipo che fornisce un puntatore a un elemento in un `hash_set`.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento archiviato in un `hash_set`.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un `hash_set` invertito.|
|[size_type](#size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `hash_set`.|
|[value_compare](#value_compare)|Tipo che fornisce due oggetti funzione, un predicato binario della classe compare in grado di confrontare due valori di elemento di un `hash_set` per determinarne l'ordine relativo e un predicato unario che genera un hash per gli elementi.|
|[value_type](#value_type)|Tipo che descrive un oggetto archiviato come elemento di un `hash_set` grazie alla relativa funzione di un valore.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[begin](#begin)|Restituisce un iteratore che punta al primo elemento in `hash_set`.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento del `hash_set`.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `hash_set`.|
|[clear](#clear)|Cancella tutti gli elementi di un `hash_set`.|
|[count](#count)|Restituisce il numero di elementi di un `hash_set` la cui chiave corrisponde a una chiave specificata dal parametro.|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di un `hash_set` invertito.|
|[crend](#crend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set `hash_set` invertito.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto in un `hash_set`.|
|[emplace_hint](#emplace_hint)|Inserisce un elemento costruito sul posto in un `hash_set`, con un suggerimento sulla posizione.|
|[empty](#empty)|Verifica se un `hash_set` è vuoto.|
|[end](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_set`.|
|[equal_range](#equal_range)|Restituisce una coppia di iteratori rispettivamente al primo elemento di un `hash_set` con una chiave maggiore di una chiave specificata e al primo elemento di `hash_set` con una chiave uguale o maggiore di tale chiave.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi di un `hash_set` dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.|
|[find](#find)|Restituisce un iteratore che punta alla posizione di un elemento in un `hash_set` che dispone di una chiave equivalente a una chiave specificata.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `hash_set`.|
|[insert](#insert)|Inserisce un elemento o un intervallo di elementi in un `hash_set`.|
|[key_comp](#key_comp)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di un `hash_set`.|
|[lower_bound](#lower_bound)|Restituisce un iteratore al primo elemento di un `hash_set` con una chiave uguale o maggiore di una chiave specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima del `hash_set`.|
|[rbegin](#rbegin)|Restituisce un iteratore che punta al primo elemento di un `hash_set` invertito.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_set` invertito.|
|[size](#size)|Restituisce il numero di elementi nel `hash_set`.|
|[swap](#swap)|Scambia gli elementi di due `hash_set`.|
|[upper_bound](#upper_bound)|Restituisce un iteratore al primo elemento di un `hash_set` con una chiave uguale o maggiore di una chiave specificata.|
|[value_comp](#value_comp)|Recupera una copia dell'oggetto dei tratti hash usato per generare un hash e ordinare i valori delle chiavi dell'elemento in un `hash_set`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[hash_set::operator=](#op_eq)|Sostituisce gli elementi di un `hash_set` con una copia di un altro `hash_set`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<hash_set>

**Spazio dei nomi:** stdext

## <a name="allocator_type"></a>  hash_set::allocator_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che rappresenta la classe allocator per l'oggetto hash_set.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::allocator_type allocator_type;
```

### <a name="remarks"></a>Note

**allocator_type** è un sinonimo per il parametro di modello `Allocator`.

Per altre informazioni su `Allocator`, vedere la sezione Note dell'argomento [Classe hash_set](../standard-library/hash-set-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator) per indicazioni su come usare `allocator_type`.

## <a name="begin"></a>  hash_set::begin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore che punta al primo elemento dell'oggetto hash_set.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta al primo elemento dell'oggetto hash_set o alla posizione successiva a un oggetto hash_set vuoto.

### <a name="remarks"></a>Note

Se il valore restituito di **begin** viene assegnato a un `const_iterator`, gli elementi dell'oggetto hash_set non possono essere modificati. Se il valore restituito di **begin** viene assegnato a un **iterator**, gli elementi dell'oggetto hash_set possono essere modificati.

### <a name="example"></a>Esempio

```cpp
// hash_set_begin.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int>::iterator hs1_Iter;
   hash_set <int>::const_iterator hs1_cIter;

   hs1.insert( 1 );
   hs1.insert( 2 );
   hs1.insert( 3 );

   hs1_Iter = hs1.begin( );
   cout << "The first element of hs1 is " << *hs1_Iter << endl;

   hs1_Iter = hs1.begin( );
   hs1.erase( hs1_Iter );

   // The following 2 lines would err because the iterator is const
   // hs1_cIter = hs1.begin( );
   // hs1.erase( hs1_cIter );

   hs1_cIter = hs1.begin( );
   cout << "The first element of hs1 is now " << *hs1_cIter << endl;
}
```

```Output
The first element of hs1 is 1
The first element of hs1 is now 2
```

## <a name="cbegin"></a>  hash_set::cbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore const che punta al primo elemento dell'oggetto hash_set.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const che punta al primo elemento dell'oggetto [hash_set](../standard-library/hash-set-class.md) o alla posizione successiva a un oggetto `hash_set` vuoto.

### <a name="remarks"></a>Note

Con il valore restituito di `cbegin`, gli elementi dell'oggetto `hash_set` non possono essere modificati.

### <a name="example"></a>Esempio

```cpp
// hash_set_cbegin.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int>::const_iterator hs1_cIter;

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

## <a name="cend"></a>  hash_set::cend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto hash_set.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const che punta alla posizione successiva all'ultimo elemento di un oggetto [hash_set](../standard-library/hash-set-class.md). Se l'oggetto `hash_set` è vuoto, `hash_set::cend == hash_set::begin`.

### <a name="remarks"></a>Note

`cend` viene usato per verificare se un iteratore ha raggiunto la fine del relativo oggetto `hash_set`. Non è consigliabile dereferenziare il valore restituito da `cend`.

### <a name="example"></a>Esempio

```cpp
// hash_set_cend.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int> :: const_iterator hs1_cIter;

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

## <a name="clear"></a>  hash_set::clear

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Cancella tutti gli elementi di un oggetto hash_set.

```cpp
void clear();
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_clear.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;

   hs1.insert( 1 );
   hs1.insert( 2 );

   cout << "The size of the hash_set is initially " << hs1.size( )
        << "." << endl;

   hs1.clear( );
   cout << "The size of the hash_set after clearing is "
        << hs1.size( ) << "." << endl;
}
```

```Output
The size of the hash_set is initially 2.
The size of the hash_set after clearing is 0.
```

## <a name="const_iterator"></a>  hash_set::const_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento **const** dell'oggetto hash_set.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_iterator const_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](#begin) per indicazioni su come usare `const_iterator`.

## <a name="const_pointer"></a>  hash_set::const_pointer

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce un puntatore a un elemento **const** di un oggetto hash_set.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_pointer const_pointer;
```

### <a name="remarks"></a>Note

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un [const_iterator](#const_iterator) per accedere agli elementi di un oggetto **const** hash_set.

## <a name="const_reference"></a>  hash_set::const_reference

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce un riferimento a un elemento **const** archiviato in un oggetto hash_set per la lettura e l'esecuzione di operazioni **const**.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_reference const_reference;
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_const_ref.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;

   hs1.insert( 10 );
   hs1.insert( 20 );

   // Declare and initialize a const_reference &Ref1
   // to the 1st element
   const int &Ref1 = *hs1.begin( );

   cout << "The first element in the hash_set is "
        << Ref1 << "." << endl;

   // The following line would cause an error because the
   // const_reference cannot be used to modify the hash_set
   // Ref1 = Ref1 + 5;
}
```

```Output
The first element in the hash_set is 10.
```

## <a name="const_reverse_iterator"></a>  hash_set::const_reverse_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento **const** dell'oggetto hash_set.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_reverse_iterator const_reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto hash_set in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rend](#rend) per indicazioni su come dichiarare e usare `const_reverse_iterator`.

## <a name="count"></a>  hash_set::count

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce il numero di elementi di un hash_set la cui chiave corrisponde a una chiave specificata dal parametro.

```cpp
size_type count(const Key& key) const;
```

### <a name="parameters"></a>Parametri

`key` La chiave degli elementi per cui trovare una corrispondenza dall'hash_set.

### <a name="return-value"></a>Valore restituito

1 se l'hash_set contiene un elemento la cui chiave di ordinamento corrisponde alla chiave del parametro.

0 se l'hash_set non contiene un elemento con una chiave corrispondente.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di elementi nell'intervallo seguente:

[ **lower_bound** (_ *Key* ), **upper_bound** (\_ *Key* ) ).

### <a name="example"></a>Esempio

L'esempio seguente mostra l'uso della funzione membro hash_set::count.

```cpp
// hash_set_count.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
    using namespace std;
    using namespace stdext;
    hash_set<int> hs1;
    hash_set<int>::size_type i;

    hs1.insert(1);
    hs1.insert(1);

    // Keys must be unique in hash_set, so duplicates are ignored.
    i = hs1.count(1);
    cout << "The number of elements in hs1 with a sort key of 1 is: "
         << i << "." << endl;

    i = hs1.count(2);
    cout << "The number of elements in hs1 with a sort key of 2 is: "
         << i << "." << endl;
}
```

```Output
The number of elements in hs1 with a sort key of 1 is: 1.
The number of elements in hs1 with a sort key of 2 is: 0.
```

## <a name="crbegin"></a>  hash_set::crbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore const che punta al primo elemento di un oggetto hash_set invertito.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta al primo elemento di un oggetto [hash_set](../standard-library/hash-set-class.md) invertito o a quello che è stato l'ultimo elemento dell'oggetto `hash_set` non invertito.

### <a name="remarks"></a>Note

`crbegin` viene usato con un oggetto hash_set invertito proprio come [hash_set::begin](#begin) viene usato con un oggetto hash_set.

Con il valore restituito di `crbegin`, l'oggetto `hash_set` non può essere modificato.

`crbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto `hash_set`.

### <a name="example"></a>Esempio

```cpp
// hash_set_crbegin.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int>::const_reverse_iterator hs1_crIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_crIter = hs1.crbegin( );
   cout << "The first element in the reversed hash_set is "
        << *hs1_crIter << "." << endl;
}
```

```Output
The first element in the reversed hash_set is 30.
```

## <a name="crend"></a>  hash_set::crend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto hash_set invertito.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto [hash_set](../standard-library/hash-set-class.md) invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto `hash_set` non invertito.

### <a name="remarks"></a>Note

`crend` viene usato con un oggetto `hash_set` invertito proprio come [hash_set::end](#end) viene usato con un oggetto `hash_set`.

Con il valore restituito di `crend`, l'oggetto `hash_set` non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine dell'oggetto `hash_set`.

### <a name="example"></a>Esempio

```cpp
// hash_set_crend.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int>::const_reverse_iterator hs1_crIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_crIter = hs1.crend( );
   hs1_crIter--;
   cout << "The last element in the reversed hash_set is "
        << *hs1_crIter << "." << endl;
}
```

```Output
The last element in the reversed hash_set is 10.
```

## <a name="difference_type"></a>  hash_set::difference_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo Signed Integer che può essere usato per rappresentare il numero di elementi di un oggetto hash_set in un intervallo compreso tra gli elementi a cui puntano gli iteratori.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::difference_type difference_type;
```

### <a name="remarks"></a>Note

`difference_type` è il tipo restituito quando si sottrae o si incrementa tramite gli iteratori del contenitore. `difference_type` viene in genere usato per rappresentare il numero di elementi nell'intervallo [ `first`, `last`) tra gli iteratori `first` e `last`, includendo l'elemento a cui punta `first` e l'intervallo di elementi fino all'elemento a cui punta `last`, escluso tale elemento.

Si noti che, sebbene `difference_type` sia disponibile per tutti gli iteratori che soddisfano i requisiti di un iteratore di input, inclusa la classe degli iteratori bidirezionali supportati da contenitori reversibili come set, la sottrazione tra gli iteratori è supportata solo da iteratori ad accesso casuale forniti da un contenitore ad accesso casuale, ad esempio vector o deque.

### <a name="example"></a>Esempio

```cpp
// hash_set_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <hash_set>
#include <algorithm>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_set <int> hs1;
   hash_set <int>::iterator hs1_Iter, hs1_bIter, hs1_eIter;

   hs1.insert( 20 );
   hs1.insert( 10 );
   hs1.insert( 20 );   // Won't insert as hash_set elements are unique

   hs1_bIter = hs1.begin( );
   hs1_eIter = hs1.end( );

   hash_set <int>::difference_type   df_typ5, df_typ10, df_typ20;

   df_typ5 = count( hs1_bIter, hs1_eIter, 5 );
   df_typ10 = count( hs1_bIter, hs1_eIter, 10 );
   df_typ20 = count( hs1_bIter, hs1_eIter, 20 );

   // The keys, and hence the elements, of a hash_set are unique,
   // so there is at most one of a given value
   cout << "The number '5' occurs " << df_typ5
        << " times in hash_set hs1.\n";
   cout << "The number '10' occurs " << df_typ10
        << " times in hash_set hs1.\n";
   cout << "The number '20' occurs " << df_typ20
        << " times in hash_set hs1.\n";

   // Count the number of elements in a hash_set
   hash_set <int>::difference_type  df_count = 0;
   hs1_Iter = hs1.begin( );
   while ( hs1_Iter != hs1_eIter)
   {
      df_count++;
      hs1_Iter++;
   }

   cout << "The number of elements in the hash_set hs1 is: "
        << df_count << "." << endl;
}
```

```Output
The number '5' occurs 0 times in hash_set hs1.
The number '10' occurs 1 times in hash_set hs1.
The number '20' occurs 1 times in hash_set hs1.
The number of elements in the hash_set hs1 is: 2.
```

## <a name="emplace"></a>  hash_set::emplace

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Inserisce un elemento costruito sul posto in un oggetto hash_set.

```cpp
template <class ValTy>
pair <iterator, bool>
emplace(
    ValTy&& val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`val`|Valore di un elemento da inserire nell'oggetto [hash_set](../standard-library/hash-set-class.md), a meno che l'oggetto `hash_set` non contenga già tale elemento o, più in generale, un elemento la cui la chiave sia ordinata in modo equivalente.|

### <a name="return-value"></a>Valore restituito

La funzione membro `emplace` restituisce una coppia il cui componente `bool` restituisce `true` se è stato effettuato un inserimento e `false` se nell'oggetto `hash_set` è già contenuto un elemento con le caratteristiche seguenti: la chiave dell'elemento ha un valore equivalente nell'ordinamento e il relativo componente iterator restituisce l'indirizzo in cui è stato inserito un nuovo elemento o in cui si trovava già l'elemento.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_emplace.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set<string> hs3;
   string str1("a");

   hs3.emplace(move(str1));
   cout << "After the emplace insertion, hs3 contains "
      << *hs3.begin() << "." << endl;
}
```

```Output
After the emplace insertion, hs3 contains a.
```

## <a name="emplace_hint"></a>  hash_set::emplace_hint

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Inserisce un elemento costruito sul posto in un oggetto hash_set.

```cpp
template <class ValTy>
iterator emplace(
    const_iterator _Where,
    ValTy&& val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`val`|Valore di un elemento da inserire nell'oggetto [hash_set](../standard-library/hash-set-class.md), a meno che l'oggetto `hash_set` non contenga già tale elemento o, più in generale, un elemento la cui la chiave sia ordinata in modo equivalente.|
|`_Where`|Posizione in cui iniziare a cercare il punto di inserimento corretto. Se il punto di inserimento è immediatamente successivo a `_Where`, l'inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.|

### <a name="return-value"></a>Valore restituito

La funzione membro [hash_set::emplace](#emplace) restituisce un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito nell'oggetto `hash_set` o in cui si trova l'elemento esistente con ordinamento equivalente.

### <a name="remarks"></a>Note

Se il punto di inserimento è immediatamente successivo a `_Where`, l'inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.

### <a name="example"></a>Esempio

```cpp
// hash_set_emplace_hint.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set<string> hs3;
   string str1("a");

   hs3.insert(hs3.begin(), move(str1));
   cout << "After the emplace insertion, hs3 contains "
      << *hs3.begin() << "." << endl;
}
```

```Output
After the emplace insertion, hs3 contains a.
```

## <a name="empty"></a>  hash_set::empty

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Verifica se un oggetto hash_set è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto hash_set è vuoto; in caso contrario, **false**.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_empty.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1, hs2;
   hs1.insert ( 1 );

   if ( hs1.empty( ) )
      cout << "The hash_set hs1 is empty." << endl;
   else
      cout << "The hash_set hs1 is not empty." << endl;

   if ( hs2.empty( ) )
      cout << "The hash_set hs2 is empty." << endl;
   else
      cout << "The hash_set hs2 is not empty." << endl;
}
```

```Output
The hash_set hs1 is not empty.
The hash_set hs2 is empty.
```

## <a name="end"></a>  hash_set::end

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto hash_set.

```cpp
const_iterator end() const;

iterator end();
```

### <a name="return-value"></a>Valore restituito

Un iteratore bidirezionale che punta alla posizione successiva all'ultimo elemento di un oggetto hash_set. Se l'oggetto hash_set è vuoto, hash_set::end == hash_set::begin.

### <a name="remarks"></a>Note

**end** viene usato per verificare se un iteratore ha raggiunto la fine del relativo oggetto hash_set. Non è consigliabile dereferenziare il valore restituito da **end**.

### <a name="example"></a>Esempio

```cpp
// hash_set_end.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int> :: iterator hs1_Iter;
   hash_set <int> :: const_iterator hs1_cIter;

   hs1.insert( 1 );
   hs1.insert( 2 );
   hs1.insert( 3 );

   hs1_Iter = hs1.end( );
   hs1_Iter--;
   cout << "The last element of hs1 is " << *hs1_Iter << endl;

   hs1.erase( hs1_Iter );

   // The following 3 lines would err because the iterator is const:
   // hs1_cIter = hs1.end( );
   // hs1_cIter--;
   // hs1.erase( hs1_cIter );

   hs1_cIter = hs1.end( );
   hs1_cIter--;
   cout << "The last element of hs1 is now " << *hs1_cIter << endl;
}
```

```Output
The last element of hs1 is 3
The last element of hs1 is now 2
```

## <a name="equal_range"></a>  hash_set::equal_range

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce una coppia di iteratori rispettivamente al primo elemento di un oggetto hash_set con una chiave uguale a una chiave specificata e al primo elemento dell'oggetto hash_set con una chiave maggiore di tale chiave.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### <a name="parameters"></a>Parametri

`key` Chiave dell'argomento deve essere confrontato con la chiave di ordinamento di un elemento dall'hash_set cercato.

### <a name="return-value"></a>Valore restituito

Coppia di iteratori in cui il primo è l'elemento [lower_bound](../standard-library/set-class.md#lower_bound) e il secondo è l'elemento [upper_bound](../standard-library/set-class.md#upper_bound) della chiave.

Per accedere al secondo iteratore di una coppia pr restituita dalla funzione membro, usare `pr`. **first** e per dereferenziare l'iteratore del limite inferiore, usare \*( `pr`. **first**). Per accedere al secondo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **second** e per dereferenziare l'iteratore del limite superiore, usare \*( `pr`. **second**).

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_equal_range.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef hash_set<int> IntHSet;
   IntHSet hs1;
   hash_set <int> :: const_iterator hs1_RcIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   pair <IntHSet::const_iterator, IntHSet::const_iterator> p1, p2;
   p1 = hs1.equal_range( 20 );

   cout << "The upper bound of the element with "
        << "a key of 20 in the hash_set hs1 is: "
        << *(p1.second) << "." << endl;

   cout << "The lower bound of the element with "
        << "a key of 20 in the hash_set hs1 is: "
        << *(p1.first) << "." << endl;

   // Compare the upper_bound called directly
   hs1_RcIter = hs1.upper_bound( 20 );
   cout << "A direct call of upper_bound( 20 ) gives "
        << *hs1_RcIter << "," << endl
        << "matching the 2nd element of the pair"
        << " returned by equal_range( 20 )." << endl;

   p2 = hs1.equal_range( 40 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == hs1.end( ) ) && ( p2.second == hs1.end( ) ) )
      cout << "The hash_set hs1 doesn't have an element "
           << "with a key greater than or equal to 40." << endl;
   else
      cout << "The element of hash_set hs1 with a key >= 40 is: "
           << *(p1.first) << "." << endl;
}
```

```Output
The upper bound of the element with a key of 20 in the hash_set hs1 is: 30.
The lower bound of the element with a key of 20 in the hash_set hs1 is: 20.
A direct call of upper_bound( 20 ) gives 30,
matching the 2nd element of the pair returned by equal_range( 20 ).
The hash_set hs1 doesn't have an element with a key greater than or equal to 40.
```

## <a name="erase"></a>  hash_set::erase

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Rimuove un elemento o un intervallo di elementi in un hash_set dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

```cpp
iterator erase(iterator _Where);

iterator erase(iterator first, iterator last);

size_type erase(const key_type& key);
```

### <a name="parameters"></a>Parametri

`_Where` Posizione dell'elemento da rimuovere dall'hash_set.

`first` Posizione del primo elemento rimosso dall'hash_set.

`last` Posizione immediatamente successiva all'ultimo elemento rimosso dall'hash_set.

`key` La chiave degli elementi da rimuovere dall'hash_set.

### <a name="return-value"></a>Valore restituito

Per le prime due funzioni, iteratore bidirezionale che definisce il primo elemento rimanente successivo a tutti gli elementi eliminati o un puntatore al termine dell'hash_set se tali elementi non sono presenti. Per la terza funzione membro, il numero di elementi rimossi dall'hash_set.

### <a name="remarks"></a>Note

Le funzioni membro non generano mai un'eccezione.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro hash_set::erase.

```cpp
// hash_set_erase.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_set<int> hs1, hs2, hs3;
    hash_set<int>::iterator pIter, Iter1, Iter2;
    int i;
    hash_set<int>::size_type n;

    for (i = 1; i < 5; i++)
    {
        hs1.insert (i);
        hs2.insert (i * i);
        hs3.insert (i - 1);
    }

    // The 1st member function removes an element at a given position
    Iter1 = ++hs1.begin();
    hs1.erase(Iter1);

    cout << "After the 2nd element is deleted, the hash_set hs1 is:";
    for (pIter = hs1.begin(); pIter != hs1.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;

    // The 2nd member function removes elements
    // in the range [ first,  last)
    Iter1 = ++hs2.begin();
    Iter2 = --hs2.end();
    hs2.erase(Iter1, Iter2);

    cout << "After the middle two elements are deleted, "
         << "the hash_set hs2 is:";
    for (pIter = hs2.begin(); pIter != hs2.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;

    // The 3rd member function removes elements with a given  key
    n = hs3.erase(2);

    cout << "After the element with a key of 2 is deleted, "
         << "the hash_set hs3 is:";
    for (pIter = hs3.begin(); pIter != hs3.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;

    // The 3rd member function returns the number of elements removed
    cout << "The number of elements removed from hs3 is: "
         << n << "." << endl;

    // The dereferenced iterator can also be used to specify a key
    Iter1 = ++hs3.begin();
    hs3.erase(Iter1);

    cout << "After another element (unique for hash_set) with a key "
         << endl;
    cout  << "equal to that of the 2nd element is deleted, "
          << "the hash_set hs3 is:";
    for (pIter = hs3.begin(); pIter != hs3.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;
}
```

```Output
After the 2nd element is deleted, the hash_set hs1 is: 1 3 4.
After the middle two elements are deleted, the hash_set hs2 is: 16 4.
After the element with a key of 2 is deleted, the hash_set hs3 is: 0 1 3.
The number of elements removed from hs3 is: 1.
After another element (unique for hash_set) with a key
equal to that of the 2nd element is deleted, the hash_set hs3 is: 0 3.
```

## <a name="find"></a>  hash_set::find

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore che punta alla posizione di un elemento in un oggetto hash_set che dispone di una chiave equivalente a una chiave specificata.

```cpp
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```

### <a name="parameters"></a>Parametri

`key` Chiave dell'argomento per la corrispondenza con la chiave di ordinamento di un elemento dall'hash_set cercato.

### <a name="return-value"></a>Valore restituito

Tipo **iterator** o `const_iterator` che punta alla posizione di un elemento equivalente a una chiave specificata o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_set se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

La funzione membro restituisce un iteratore che punta a un elemento dell'oggetto hash_set la cui chiave di ordinamento è **equivalente** alla chiave dell'argomento in un predicato binario che causa un ordinamento basato su una relazione di comparabilità "minore di".

Se il valore restituito di **find** viene assegnato a un `const_iterator`, l'oggetto hash_set non può essere modificato. Se il valore restituito di **find** viene assegnato a un **iterator**, l'oggetto hash_set può essere modificato.

### <a name="example"></a>Esempio

```cpp
// hash_set_find.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int> :: const_iterator hs1_AcIter, hs1_RcIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_RcIter = hs1.find( 20 );
   cout << "The element of hash_set hs1 with a key of 20 is: "
        << *hs1_RcIter << "." << endl;

   hs1_RcIter = hs1.find( 40 );

   // If no match is found for the key, end( ) is returned
   if ( hs1_RcIter == hs1.end( ) )
      cout << "The hash_set hs1 doesn't have an element "
           << "with a key of 40." << endl;
   else
      cout << "The element of hash_set hs1 with a key of 40 is: "
           << *hs1_RcIter << "." << endl;

   // The element at a specific location in the hash_set can be found
   // by using a dereferenced iterator addressing the location
   hs1_AcIter = hs1.end( );
   hs1_AcIter--;
   hs1_RcIter = hs1.find( *hs1_AcIter );
   cout << "The element of hs1 with a key matching "
        << "that of the last element is: "
        << *hs1_RcIter << "." << endl;
}
```

```Output
The element of hash_set hs1 with a key of 20 is: 20.
The hash_set hs1 doesn't have an element with a key of 40.
The element of hs1 with a key matching that of the last element is: 30.
```

## <a name="get_allocator"></a>  hash_set::get_allocator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce una copia dell'oggetto allocatore usato per costruire l'oggetto hash_set.

```cpp
Allocator get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dall'oggetto hash_set per gestire la memoria, che corrisponde al parametro di modello `Allocator`.

Per altre informazioni su `Allocator`, vedere la sezione Note dell'argomento [Classe hash_set](../standard-library/hash-set-class.md).

### <a name="remarks"></a>Note

Gli allocatori per la classe hash_set specificano il modo in cui la classe gestisce la memoria. Gli allocatori predefiniti acclusi alle classi contenitore della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// hash_set_get_allocator.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   // The following lines declare objects
   // that use the default allocator.
   hash_set <int, hash_compare <int, less<int> > > hs1;
   hash_set <int,  hash_compare <int, greater<int> > > hs2;
   hash_set <double, hash_compare <double,
      less<double> >, allocator<double> > hs3;

   hash_set <int, hash_compare <int,
      greater<int> > >::allocator_type hs2_Alloc;
   hash_set <double>::allocator_type hs3_Alloc;
   hs2_Alloc = hs2.get_allocator( );

   cout << "The number of integers that can be allocated"
        << endl << "before free memory is exhausted: "
        << hs1.max_size( ) << "." << endl;

   cout << "The number of doubles that can be allocated"
        << endl << "before free memory is exhausted: "
        << hs3.max_size( ) <<  "." << endl;

   // The following lines create a hash_set hs4
   // with the allocator of hash_set hs1.
   hash_set <int>::allocator_type hs4_Alloc;
   hash_set <int> hs4;
   hs4_Alloc = hs2.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated by the other
   if( hs2_Alloc == hs4_Alloc )
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

## <a name="hash_set"></a>  hash_set::hash_set

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Costruisce un `hash_set` vuoto o che rappresenta una copia totale o parziale di un altro `hash_set`.

```cpp
hash_set();

explicit hash_set(
    const Traits& Comp);

hash_set(
    const Traits& Comp,
    const Allocator& Al);

hash_set(
    const hash_set<Key, Traits, Allocator>& Right);

hash_set(
    hash_set&& Right);

hash_set(
    initializer_list<Type> IList);

hash_set(
    initializer_list<Type> IList,
    const Compare& Comp);

hash_set(
    initializer_list<value_type> IList,
    const Compare& Comp,
    const Allocator& Al);

template <class InputIterator>
hash_set(
 InputIterator First,
    InputIterator Last);

template <class InputIterator>
hash_set(
 InputIterator First,
    InputIterator Last,
    const Traits& Comp);

template <class InputIterator>
hash_set(
 InputIterator First,
    InputIterator Last,
    const Traits& Comp,
    const Allocator& Al);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`Al`|Classe dell'allocatore di memoria da usare per l'oggetto `hash_set`. Per impostazione predefinita è `Allocator`.|
|`Comp`|Funzione di confronto di tipo `const Traits` usata per ordinare gli elementi nell'oggetto `hash_set`. Per impostazione predefinita è `hash_compare`.|
|`Right`|Oggetto `hash_set` di cui l'oggetto `hash_set` costruito deve essere una copia.|
|`First`|Posizione del primo elemento nell'intervallo di elementi da copiare.|
|`Last`|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|

### <a name="remarks"></a>Note

Tutti i costruttori archiviano un tipo di oggetto allocatore che gestisce la memoria per l'oggetto `hash_set` e che può essere restituito in un secondo momento chiamando [hash_set::get_allocator](#get_allocator). Il parametro allocator viene spesso omesso nelle dichiarazioni di classe e vengono usate macro di pre-elaborazione per introdurre allocatori alternativi.

Tutti i costruttori inizializzano i relativi oggetti hash_set.

Tutti i costruttori archiviano un oggetto funzione di tipo `Traits` che viene usato per stabilire un ordine tra le chiavi dell'oggetto `hash_set` e che può essere restituito in un secondo momento chiamando [hash_set::key_comp](#key_comp). Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_set](../standard-library/hash-set-class.md).

Il primo costruttore crea un oggetto `hash_set` iniziale vuoto. Il secondo specifica il tipo di funzione di confronto ( `Comp`) da usare per stabilire l'ordine degli elementi e il terzo specifica in modo esplicito il tipo di allocatore ( `Al`) da usare. La parola chiave `explicit` elimina alcuni tipi di conversione automatica del tipo.

Il quarto e quinto costruttore viene specificata una copia del `hash_set` `Right`.

Il sesto, il settimo e l'ottavo costruttore usano un oggetto initializer_list per gli elementi.

Gli ultimi costruttori copiano l'intervallo [ `First`, `Last`) di un oggetto `hash_set` con un grado di esplicitazione crescente nello specificare il tipo di funzione di confronto della classe Traits e il tipo di allocatore.

L'ottavo costruttore sposta il `hash_set` `Right`.

L'ordine effettivo degli elementi in un contenitore `hash_set` dipende dalla funzione hash, dalla funzione di ordinamento e dalla dimensione corrente della tabella hash e, in generale, non può essere previsto come avveniva per il contenitore di set, in cui era determinato solo dalla funzione di ordinamento.

## <a name="insert"></a>  hash_set::insert

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Inserisce un elemento o un intervallo di elementi in un `hash_set`.

```cpp
pair<iterator, bool> insert(
    const value_type& Val);

iterator insert(
    iterator Where,
    const value_type& Val);

void insert(
    initializer_list<value_type> IList)
template <class InputIterator>
void insert(
    InputIterator First,
    InputIterator Last);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`Val`|Valore di un elemento da inserire nell'oggetto `hash_set`, a meno che l'oggetto `hash_set` non contenga già tale elemento o, più in generale, un elemento la cui la chiave sia ordinata in modo equivalente.|
|`Where`|Posizione in cui iniziare a cercare il punto di inserimento corretto. Se il punto di inserimento è immediatamente successivo a `_Where`, l'inserimento può avvenire in tempo costante ammortizzato anziché in tempo logaritmico.|
|`First`|Posizione del primo elemento da copiare da un oggetto `hash_set`.|
|`Last`|Posizione immediatamente dopo l'ultimo elemento da copiare da un oggetto `hash_set`.|
|`IList`|initializer_list da cui copiare gli elementi.|

### <a name="return-value"></a>Valore restituito

La prima funzione membro `insert` restituisce una coppia il cui componente `bool` restituisce `true` se è stato effettuato un inserimento e `false` se nell'oggetto `hash_set` è già contenuto un elemento con le caratteristiche seguenti: la chiave dell'elemento ha un valore equivalente nell'ordinamento e il relativo componente iterator restituisce l'indirizzo in cui è stato inserito un nuovo elemento o in cui si trovava già l'elemento.

Per accedere al componente iterator di una coppia `pr` restituita da questa funzione membro, usare `pr.first` e per dereferenziarlo, usare `*(pr.first)`. Per accedere al componente `bool` di una coppia `pr` restituita da questa funzione membro, usare `pr.second` e per dereferenziarlo, usare `*(pr.second)`.

La seconda funzione membro `insert` restituisce un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento nell'oggetto `hash_set`.

### <a name="remarks"></a>Note

La terza funzione membro inserisce gli elementi in un oggetto initializer_list.

La terza funzione membro inserisce la sequenza di valori di elemento in un oggetto `hash_set` che corrisponde a ogni elemento interessato da un iteratore nell'intervallo [ `First`, `Last`) di un oggetto `hash_set` specificato.

## <a name="iterator"></a>  hash_set::iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un oggetto hash_set.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::iterator iterator;
```

### <a name="remarks"></a>Note

Un tipo **iterator** può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio per [begin](#begin) per un esempio di dichiarazione e utilizzo di **iterator**.

## <a name="key_comp"></a>  hash_set::key_comp

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Recupera una copia dell'oggetto dei tratti hash usato per generare un hash e ordinare i valori delle chiavi dell'elemento in un oggetto hash_set.

```cpp
key_compare key_comp() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto funzione che viene usato da un oggetto hash_set per ordinare gli elementi, ovvero il parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_set](../standard-library/hash-set-class.md).

### <a name="remarks"></a>Note

L'oggetto archiviato definisce la funzione membro

**bool operator**( **const Key&** _ *xVal*, **const Key&** \_ `yVal`);

che restituisce **true** se `_xVal` precede e non è uguale a `_yVal` nell'ordinamento.

Si noti che [key_compare](#key_compare) e [value_compare](#value_compare) sono sinonimi per il parametro di modello **Traits**. Entrambi i tipi vengono forniti per le classi hash_set e hash_multiset, dove sono identici, per la compatibilità con le classi hash_map e hash_multimap, dove sono distinti.

### <a name="example"></a>Esempio

```cpp
// hash_set_key_comp.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_set <int, hash_compare < int, less<int> > >hs1;
   hash_set<int, hash_compare < int, less<int> > >::key_compare kc1
          = hs1.key_comp( ) ;
   bool result1 = kc1( 2, 3 ) ;
   if( result1 == true )
   {
      cout << "kc1( 2,3 ) returns value of true, "
           << "where kc1 is the function object of hs1."
           << endl;
   }
   else
   {
      cout << "kc1( 2,3 ) returns value of false "
           << "where kc1 is the function object of hs1."
        << endl;
   }

   hash_set <int, hash_compare < int, greater<int> > > hs2;
   hash_set<int, hash_compare < int, greater<int> > >::key_compare
         kc2 = hs2.key_comp( ) ;
   bool result2 = kc2( 2, 3 ) ;
   if(result2 == true)
   {
      cout << "kc2( 2,3 ) returns value of true, "
           << "where kc2 is the function object of hs2."
           << endl;
   }
   else
   {
      cout << "kc2( 2,3 ) returns value of false, "
           << "where kc2 is the function object of hs2."
           << endl;
   }
}
```

## <a name="key_compare"></a>  hash_set::key_compare

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nell'oggetto hash_set.

```cpp
typedef Traits key_compare;
```

### <a name="remarks"></a>Note

`key_compare` è un sinonimo per il parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_set](../standard-library/hash-set-class.md).

Si noti che `key_compare` e [value_compare](#value_compare) sono sinonimi per il parametro di modello **Traits**. Entrambi i tipi vengono forniti per le classi set e multiset, dove sono identici, per la compatibilità con le classi map e multimap, dove sono distinti.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [key_comp](#key_comp) per indicazioni su come dichiarare e usare `key_compare`.

## <a name="key_type"></a>  hash_set::key_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che descrive un oggetto archiviato come elemento di un oggetto hash_set in qualità di chiave di ordinamento.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Note

**key_type** è un sinonimo per il parametro di modello `Key`.

Per altre informazioni su `Key`, vedere la sezione Note dell'argomento [Classe hash_set](../standard-library/hash-set-class.md).

Si noti che `key_type` e [value_type](#value_type) sono sinonimi per il parametro di modello **Key**. Entrambi i tipi vengono forniti per le classi hash_set e hash_multiset, dove sono identici, per la compatibilità con le classi hash_map e hash_multimap, dove sono distinti.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="lower_bound"></a>  hash_set::lower_bound

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore al primo elemento di un oggetto hash_set con una chiave uguale o maggiore di quella specificata.

```cpp
const_iterator lower_bound(const Key& key) const;

iterator lower_bound(const Key& key);
```

### <a name="parameters"></a>Parametri

`key` Chiave dell'argomento deve essere confrontato con la chiave di ordinamento di un elemento dall'hash_set cercato.

### <a name="return-value"></a>Valore restituito

Tipo **iterator** o `const_iterator` che punta alla posizione di un elemento di un oggetto hash_set con una chiave uguale o maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_set se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_lower_bound.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int> :: const_iterator hs1_AcIter, hs1_RcIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_RcIter = hs1.lower_bound( 20 );
   cout << "The element of hash_set hs1 with a key of 20 is: "
        << *hs1_RcIter << "." << endl;

   hs1_RcIter = hs1.lower_bound( 40 );

   // If no match is found for the key, end( ) is returned
   if ( hs1_RcIter == hs1.end( ) )
      cout << "The hash_set hs1 doesn't have an element "
           << "with a key of 40." << endl;
   else
      cout << "The element of hash_set hs1 with a key of 40 is: "
           << *hs1_RcIter << "." << endl;

   // An element at a specific location in the hash_set can be found
   // by using a dereferenced iterator that addresses the location
   hs1_AcIter = hs1.end( );
   hs1_AcIter--;
   hs1_RcIter = hs1.lower_bound( *hs1_AcIter );
   cout << "The element of hs1 with a key matching "
        << "that of the last element is: "
        << *hs1_RcIter << "." << endl;
}
```

```Output
The element of hash_set hs1 with a key of 20 is: 20.
The hash_set hs1 doesn't have an element with a key of 40.
The element of hs1 with a key matching that of the last element is: 30.
```

## <a name="max_size"></a>  hash_set::max_size

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce la lunghezza massima dell'oggetto hash_set.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza massima possibile dell'oggetto hash_set.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_max_size.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int>::size_type i;

   i = hs1.max_size( );
   cout << "The maximum possible length "
        << "of the hash_set is " << i << "." << endl;
}
```

## <a name="op_eq"></a>  hash_set::operator=

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Sostituisce gli elementi dell'oggetto hash_set con una copia di un altro oggetto hash_set.

```cpp
hash_set& operator=(const hash_set& right);

hash_set& operator=(hash_set&& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|`right`|[Classe hash_set](../standard-library/hash-set-class.md) copiata nell'oggetto `hash_set`.|

### <a name="remarks"></a>Note

Dopo la cancellazione di tutti gli elementi esistenti in un oggetto `hash_set`, `operator=` copia o sposta il contenuto di `right` nell'oggetto `hash_set`.

### <a name="example"></a>Esempio

```cpp
// hash_set_operator_as.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set<int> v1, v2, v3;
   hash_set<int>::iterator iter;

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

## <a name="pointer"></a>  hash_set::pointer

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce un puntatore a un elemento di un oggetto hash_set.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::pointer pointer;
```

### <a name="remarks"></a>Note

Un tipo **pointer** può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto hash_set.

## <a name="rbegin"></a>  hash_set::rbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore che punta al primo elemento di un oggetto hash_set invertito.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta al primo elemento di un oggetto hash_set invertito o a quello che è stato l'ultimo elemento dell'oggetto hash_set non invertito.

### <a name="remarks"></a>Note

`rbegin` viene usato con un oggetto hash_set invertito proprio come [begin](#begin) viene usato con un oggetto hash_set.

Se il valore restituito di `rbegin` viene assegnato a un `const_reverse_iterator`, l'oggetto hash_set non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un `reverse_iterator`, l'oggetto hash_set può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto hash_set.

### <a name="example"></a>Esempio

```cpp
// hash_set_rbegin.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int>::iterator hs1_Iter;
   hash_set <int>::reverse_iterator hs1_rIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_rIter = hs1.rbegin( );
   cout << "The first element in the reversed hash_set is "
        << *hs1_rIter << "." << endl;

   // begin can be used to start an iteration
   // throught a hash_set in a forward order
   cout << "The hash_set is: ";
   for ( hs1_Iter = hs1.begin( ) ; hs1_Iter != hs1.end( );
         hs1_Iter++ )
      cout << *hs1_Iter << " ";
   cout << endl;

   // rbegin can be used to start an iteration
   // throught a hash_set in a reverse order
   cout << "The reversed hash_set is: ";
   for ( hs1_rIter = hs1.rbegin( ) ; hs1_rIter != hs1.rend( );
         hs1_rIter++ )
      cout << *hs1_rIter << " ";
   cout << endl;

   // A hash_set element can be erased by dereferencing to its key
   hs1_rIter = hs1.rbegin( );
   hs1.erase ( *hs1_rIter );

   hs1_rIter = hs1.rbegin( );
   cout << "After the erasure, the first element "
        << "in the reversed hash_set is "<< *hs1_rIter << "."
        << endl;
}
```

```Output
The first element in the reversed hash_set is 30.
The hash_set is: 10 20 30
The reversed hash_set is: 30 20 10
After the erasure, the first element in the reversed hash_set is 20.
```

## <a name="reference"></a>  hash_set::reference

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce un riferimento a un elemento archiviato in un oggetto hash_set.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::reference reference;
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_reference.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;

   hs1.insert( 10 );
   hs1.insert( 20 );

   // Declare and initialize a reference &Ref1 to the 1st element
   int &Ref1 = *hs1.begin( );

   cout << "The first element in the hash_set is "
        << Ref1 << "." << endl;

   // The value of the 1st element of the hash_set can be changed
   // by operating on its (non-const) reference
   Ref1 = Ref1 + 5;

   cout << "The first element in the hash_set is now "
        << *hs1.begin() << "." << endl;
}
```

```Output
The first element in the hash_set is 10.
The first element in the hash_set is now 15.
```

## <a name="rend"></a>  hash_set::rend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto hash_set invertito.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta alla posizione successiva all'ultimo elemento di un oggetto hash_set invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto hash_set non invertito.

### <a name="remarks"></a>Note

`rend` viene usato con un oggetto hash_set invertito proprio come [end](#end) viene usato con un oggetto hash_set.

Se il valore restituito di `rend` viene assegnato a un `const_reverse_iterator`, l'oggetto hash_set non può essere modificato. Se il valore restituito di `rend` viene assegnato a un `reverse_iterator`, l'oggetto hash_set può essere modificato. Non è consigliabile dereferenziare il valore restituito da `rend`.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto hash_set.

### <a name="example"></a>Esempio

```cpp
// hash_set_rend.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int>::iterator hs1_Iter;
   hash_set <int>::reverse_iterator hs1_rIter;
   hash_set <int>::const_reverse_iterator hs1_crIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_rIter = hs1.rend( );
   hs1_rIter--;
   cout << "The last element in the reversed hash_set is "
        << *hs1_rIter << "." << endl;

   // end can be used to terminate an iteration
   // throught a hash_set in a forward order
   cout << "The hash_set is: ";
   for ( hs1_Iter = hs1.begin( ) ; hs1_Iter != hs1.end( );
         hs1_Iter++ )
      cout << *hs1_Iter << " ";
   cout << "." << endl;

   // rend can be used to terminate an iteration
   // through a hash_set in a reverse order
   cout << "The reversed hash_set is: ";
   for ( hs1_rIter = hs1.rbegin( ) ; hs1_rIter != hs1.rend( );
         hs1_rIter++ )
      cout << *hs1_rIter << " ";
   cout << "." << endl;

   hs1_rIter = hs1.rend( );
   hs1_rIter--;
   hs1.erase ( *hs1_rIter );

   hs1_rIter = hs1.rend( );
   hs1_rIter--;
   cout << "After the erasure, the last element in the "
        << "reversed hash_set is " << *hs1_rIter << "."
        << endl;
}
```

```Output
The last element in the reversed hash_set is 10.
The hash_set is: 10 20 30 .
The reversed hash_set is: 30 20 10 .
After the erasure, the last element in the reversed hash_set is 20.
```

## <a name="reverse_iterator"></a>  hash_set::reverse_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un oggetto hash_set invertito.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::reverse_iterator reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `reverse_iterator` viene usato per eseguire l'iterazione sull'oggetto hash_set in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio per [rbegin](#rbegin) per un esempio di dichiarazione e utilizzo di `reverse_iterator`.

## <a name="size"></a>  hash_set::size

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce il numero di elementi nell'oggetto hash_set.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente dell'oggetto hash_set.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_size.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int> :: size_type i;

   hs1.insert( 1 );
   i = hs1.size( );
   cout << "The hash_set length is " << i << "." << endl;

   hs1.insert( 2 );
   i = hs1.size( );
   cout << "The hash_set length is now " << i << "." << endl;
}
```

```Output
The hash_set length is 1.
The hash_set length is now 2.
```

## <a name="size_type"></a>  hash_set::size_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un oggetto hash_set.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::size_type size_type;
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.

## <a name="swap"></a>  hash_set::swap

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Scambia gli elementi di due oggetti hash_set.

```cpp
void swap(hash_set& right);
```

### <a name="parameters"></a>Parametri

`right` Hash_set argomento che fornisce gli elementi da scambiare con hash_set destinazione.

### <a name="remarks"></a>Note

La funzione membro non invalida riferimenti, puntatori o iteratori che designano gli elementi dei due oggetti hash_set di cui vengono scambiati gli elementi.

### <a name="example"></a>Esempio

```cpp
// hash_set_swap.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1, hs2, hs3;
   hash_set <int>::iterator hs1_Iter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );
   hs2.insert( 100 );
   hs2.insert( 200 );
   hs3.insert( 300 );

   cout << "The original hash_set hs1 is:";
   for ( hs1_Iter = hs1.begin( ); hs1_Iter != hs1.end( );
         hs1_Iter++ )
         cout << " " << *hs1_Iter;
   cout   << "." << endl;

   // This is the member function version of swap
   hs1.swap( hs2 );

   cout << "After swapping with hs2, list hs1 is:";
   for ( hs1_Iter = hs1.begin( ); hs1_Iter != hs1.end( );
         hs1_Iter++ )
         cout << " " << *hs1_Iter;
   cout  << "." << endl;

   // This is the specialized template version of swap
   swap( hs1, hs3 );

   cout << "After swapping with hs3, list hs1 is:";
   for ( hs1_Iter = hs1.begin( ); hs1_Iter != hs1.end( );
         hs1_Iter++ )
         cout << " " << *hs1_Iter;
   cout   << "." << endl;
}
```

```Output
The original hash_set hs1 is: 10 20 30.
After swapping with hs2, list hs1 is: 200 100.
After swapping with hs3, list hs1 is: 300.
```

## <a name="upper_bound"></a>  hash_set::upper_bound

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Restituisce un iteratore al primo elemento di un oggetto hash_set con una chiave maggiore di quella specificata.

```cpp
const_iterator upper_bound(const Key& key) const;

iterator upper_bound(const Key& key);
```

### <a name="parameters"></a>Parametri

`key` Chiave dell'argomento deve essere confrontato con la chiave di ordinamento di un elemento dall'hash_set cercato.

### <a name="return-value"></a>Valore restituito

Tipo **iterator** o `const_iterator` che punta alla posizione di un elemento di un oggetto hash_set con una chiave uguale o maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_set se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_set_upper_bound.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int> :: const_iterator hs1_AcIter, hs1_RcIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_RcIter = hs1.upper_bound( 20 );
   cout << "The first element of hash_set hs1 with a key greater "
        << "than 20 is: " << *hs1_RcIter << "." << endl;

   hs1_RcIter = hs1.upper_bound( 30 );

   // If no match is found for the key, end( ) is returned
   if ( hs1_RcIter == hs1.end( ) )
      cout << "The hash_set hs1 doesn't have an element "
           << "with a key greater than 30." << endl;
   else
      cout << "The element of hash_set hs1 with a key > 40 is: "
           << *hs1_RcIter << "." << endl;

   // An element at a specific location in the hash_set can be found
   // by using a dereferenced iterator addressing the location
   hs1_AcIter = hs1.begin( );
   hs1_RcIter = hs1.upper_bound( *hs1_AcIter );
   cout << "The first element of hs1 with a key greater than "
        << endl << "that of the initial element of hs1 is: "
        << *hs1_RcIter << "." << endl;
}
```

```Output
The first element of hash_set hs1 with a key greater than 20 is: 30.
The hash_set hs1 doesn't have an element with a key greater than 30.
The first element of hs1 with a key greater than
that of the initial element of hs1 is: 20.
```

## <a name="value_comp"></a>  hash_set::value_comp

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Recupera una copia dell'oggetto di confronto usato per ordinare i valori degli elementi di un oggetto hash_set.

```cpp
value_compare value_comp() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto funzione che viene usato da un oggetto hash_set per ordinare gli elementi, ovvero il parametro di modello `Compare`.

Per altre informazioni su `Compare`, vedere la sezione Note dell'argomento [Classe hash_set](../standard-library/hash-set-class.md).

### <a name="remarks"></a>Note

L'oggetto archiviato definisce la funzione membro

**bool operator**( **const Key&** _ *xVal*, **const Key&** \_ `yVal`);

che restituisce **true** se `_xVal` precede e non è uguale a `_yVal` nell'ordinamento.

Si noti che [value_compare](../standard-library/set-class.md#value_compare) e [key_compare](../standard-library/set-class.md#key_compare) sono sinonimi per il parametro di modello `Compare`. Entrambi i tipi vengono forniti per le classi hash_set e hash_multiset, dove sono identici, per la compatibilità con le classi hash_map e hash_multimap, dove sono distinti.

### <a name="example"></a>Esempio

```cpp
// hash_set_value_comp.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_set <int, hash_compare < int, less<int> > > hs1;
   hash_set <int, hash_compare < int, less<int> >  >::value_compare
      vc1 = hs1.value_comp( );
   bool result1 = vc1( 2, 3 );
   if( result1 == true )
   {
      cout << "vc1( 2,3 ) returns value of true, "
           << "where vc1 is the function object of hs1."
           << endl;
   }
   else
   {
      cout << "vc1( 2,3 ) returns value of false, "
           << "where vc1 is the function object of hs1."
           << endl;
   }

   hash_set <int, hash_compare < int, greater<int> > > hs2;
   hash_set<int, hash_compare < int, greater<int> > >::value_compare
      vc2 = hs2.value_comp( );
   bool result2 = vc2( 2, 3 );
   if( result2 == true )
   {
      cout << "vc2( 2,3 ) returns value of true, "
           << "where vc2 is the function object of hs2."
           << endl;
   }
   else
   {
      cout << "vc2( 2,3 ) returns value of false, "
           << "where vc2 is the function object of hs2."
           << endl;
   }
}
```

## <a name="value_compare"></a>  hash_set::value_compare

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che fornisce due oggetti funzione, un predicato binario della classe compare in grado di confrontare due valori di elemento di un oggetto hash_set per determinarne l'ordine relativo e un predicato unario che genera un hash per gli elementi.

```cpp
typedef key_compare value_compare;
```

### <a name="remarks"></a>Note

**value_compare** è un sinonimo per il parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_set](../standard-library/hash-set-class.md).

Si noti che [key_compare](#key_compare) e **value_compare** sono sinonimi per il parametro di modello **Traits**. Entrambi i tipi vengono forniti per le classi hash_set e hash_multiset, dove sono identici, per la compatibilità con le classi hash_map e hash_multimap, dove sono distinti.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_comp](#value_comp) per indicazioni su come dichiarare e usare `value_compare`.

## <a name="value_type"></a>  hash_set::value_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Tipo che descrive un oggetto archiviato come elemento di un oggetto hash_set in qualità di valore.

```cpp
typedef Key value_type;
```

### <a name="example"></a>Esempio

```cpp
// hash_set_value_type.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1;
   hash_set <int>::iterator hs1_Iter;

   hash_set <int> :: value_type hsvt_Int;   // Declare value_type
   hsvt_Int = 10;             // Initialize value_type

   hash_set <int> :: key_type hskt_Int;   // Declare key_type
   hskt_Int = 20;             // Initialize key_type

   hs1.insert( hsvt_Int );         // Insert value into hs1
   hs1.insert( hskt_Int );         // Insert key into hs1

   // A hash_set accepts key_types or value_types as elements
   cout << "The hash_set has elements:";
   for ( hs1_Iter = hs1.begin( ) ; hs1_Iter != hs1.end( ); hs1_Iter++)
      cout << " " << *hs1_Iter;
   cout << "." << endl;
}
```

```Output
The hash_set has elements: 10 20.
```

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
