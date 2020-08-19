---
title: Classe hash_multimap
ms.date: 10/18/2018
f1_keywords:
- hash_map/stdext::hash_multimap
- hash_map/stdext::hash_multimap::allocator_type
- hash_map/stdext::hash_multimap::const_iterator
- hash_map/stdext::hash_multimap::const_pointer
- hash_map/stdext::hash_multimap::const_reference
- hash_map/stdext::hash_multimap::const_reverse_iterator
- hash_map/stdext::hash_multimap::difference_type
- hash_map/stdext::hash_multimap::iterator
- hash_map/stdext::hash_multimap::key_compare
- hash_map/stdext::hash_multimap::key_type
- hash_map/stdext::hash_multimap::mapped_type
- hash_map/stdext::hash_multimap::pointer
- hash_map/stdext::hash_multimap::reference
- hash_map/stdext::hash_multimap::reverse_iterator
- hash_map/stdext::hash_multimap::size_type
- hash_map/stdext::hash_multimap::value_type
- hash_map/stdext::hash_multimap::begin
- hash_map/stdext::hash_multimap::cbegin
- hash_map/stdext::hash_multimap::cend
- hash_map/stdext::hash_multimap::clear
- hash_map/stdext::hash_multimap::count
- hash_map/stdext::hash_multimap::crbegin
- hash_map/stdext::hash_multimap::crend
- hash_map/stdext::hash_multimap::emplace
- hash_map/stdext::hash_multimap::emplace_hint
- hash_map/stdext::hash_multimap::empty
- hash_map/stdext::hash_multimap::end
- hash_map/stdext::hash_multimap::equal_range
- hash_map/stdext::hash_multimap::erase
- hash_map/stdext::hash_multimap::find
- hash_map/stdext::hash_multimap::get_allocator
- hash_map/stdext::hash_multimap::insert
- hash_map/stdext::hash_multimap::key_comp
- hash_map/stdext::hash_multimap::lower_bound
- hash_map/stdext::hash_multimap::max_size
- hash_map/stdext::hash_multimap::rbegin
- hash_map/stdext::hash_multimap::rend
- hash_map/stdext::hash_multimap::size
- hash_map/stdext::hash_multimap::swap
- hash_map/stdext::hash_multimap::upper_bound
- hash_map/stdext::hash_multimap::value_comp
helpviewer_keywords:
- stdext::hash_multimap
- stdext::hash_multimap::allocator_type
- stdext::hash_multimap::const_iterator
- stdext::hash_multimap::const_pointer
- stdext::hash_multimap::const_reference
- stdext::hash_multimap::const_reverse_iterator
- stdext::hash_multimap::difference_type
- stdext::hash_multimap::iterator
- stdext::hash_multimap::key_compare
- stdext::hash_multimap::key_type
- stdext::hash_multimap::mapped_type
- stdext::hash_multimap::pointer
- stdext::hash_multimap::reference
- stdext::hash_multimap::reverse_iterator
- stdext::hash_multimap::size_type
- stdext::hash_multimap::value_type
- stdext::hash_multimap::begin
- stdext::hash_multimap::cbegin
- stdext::hash_multimap::cend
- stdext::hash_multimap::clear
- stdext::hash_multimap::count
- stdext::hash_multimap::crbegin
- stdext::hash_multimap::crend
- stdext::hash_multimap::emplace
- stdext::hash_multimap::emplace_hint
- stdext::hash_multimap::empty
- stdext::hash_multimap::end
- stdext::hash_multimap::equal_range
- stdext::hash_multimap::erase
- stdext::hash_multimap::find
- stdext::hash_multimap::get_allocator
- stdext::hash_multimap::insert
- stdext::hash_multimap::key_comp
- stdext::hash_multimap::lower_bound
- stdext::hash_multimap::max_size
- stdext::hash_multimap::rbegin
- stdext::hash_multimap::rend
- stdext::hash_multimap::size
- stdext::hash_multimap::swap
- stdext::hash_multimap::upper_bound
- stdext::hash_multimap::value_comp
ms.assetid: f41a6db9-67aa-43a3-a3c5-dbfe9ec3ae7d
ms.openlocfilehash: 089204ac77403923d38f198d53b3ff711e6a4963
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88560823"
---
# <a name="hash_multimap-class"></a>Classe hash_multimap

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

La classe contenitore hash_multimap è un'estensione della libreria standard C++ e viene usata per l'archiviazione e il recupero veloce dei dati da una raccolta in cui ogni elemento è costituito da una coppia con una chiave di ordinamento il cui valore non deve essere univoco e un valore di dati associato.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key,
    class Type,
    class Traits=hash_compare <Key, less <Key>>,
    class Allocator=allocator <pair  <const Key, Type>>>
class hash_multimap
```

### <a name="parameters"></a>Parametri

*Chiave*\
Tipo di dati relativo alle chiavi da archiviare in hash_multimap.

*Tipo*\
Tipo di dati degli elementi da archiviare in hash_multimap.

*Tratti*\
Tipo che include due oggetti funzione, uno dei *tratti* della classe che è in grado di confrontare due valori di elemento come chiavi di ordinamento per determinarne l'ordine relativo e una funzione hash che è un predicato unario che mappa i valori di chiave degli elementi a interi senza segno di tipo `size_t` . Questo argomento è facoltativo e il valore predefinito è `hash_compare<Key, less<Key>>`.

*Allocatore*\
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione di multi_map e alla deallocazione della memoria. Questo argomento è facoltativo e il valore predefinito è `allocator<pair <const Key, Type>>`.

## <a name="remarks"></a>Osservazioni

hash_multimap è:

- Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata.

- Reversibile, in quanto fornisce un iteratore bidirezionale per accedere ai relativi elementi.

- Con hash, poiché i rispettivi elementi sono raggruppati in bucket in base al valore di una funzione hash applicata ai valori di chiave degli elementi.

- Multipla, in quanto i relativi elementi non richiedono necessariamente chiavi univoche, in modo tale che al valore di una singola chiave possano essere associati i valori dei dati di più elementi.

- Un contenitore associativo di coppie, perché i valori degli elementi sono diversi dai valori delle relative chiavi.

- Un modello di classe, poiché la funzionalità che fornisce è generica e indipendente dal tipo specifico di dati contenuti come elementi o chiavi. I tipi di dati da utilizzare per gli elementi e le chiavi vengono invece specificati come parametri nel modello di classe i insieme alla funzione di confronto e all'allocatore.

Il vantaggio principale dell'hashing rispetto all'ordinamento è costituito da una maggiore efficienza. Un hashing corretto esegue inserimenti, eliminazioni e ricerche in un tempo medio costante rispetto al tempo proporzionale al logaritmo del numero di elementi nel contenitore per le tecniche di ordinamento. Il valore di un elemento di un hash_multimap, a differenza del valore della chiave associata, può essere direttamente modificato. I valori invece delle chiavi associati a elementi precedenti devono essere eliminati e i valori delle nuove chiavi devono essere associati ai nuovi elementi inseriti.

La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. I contenitori associativi con hash sono ottimizzati per le operazioni di ricerca, inserimento e rimozione. Le funzioni membro che supportano in modo esplicito queste operazioni risultano efficienti quando vengono usate con una funzione hash ben progettata, poiché eseguono le operazioni in un tempo mediamente costante e non dipendente dal numero di elementi nel contenitore. Una funzione hash ben progettata produce una distribuzione uniforme di valori con hash e riduce al minimo i numeri di conflitti. Un conflitto si verifica quando viene eseguito il mapping di valori di chiave distinti allo stesso valore con hash. Nella peggiore delle ipotesi, con la peggiore funzione hash possibile, il numero di operazioni è proporzionale al numero di elementi della sequenza (tempo lineare).

hash_multimap deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione. Un modello di questo tipo di struttura è rappresentato da un elenco ordinato di parole chiave a cui sono associati valori di stringa che forniscono, ad esempio, definizioni, in cui le parole non erano sempre state definite in modo univoco. Nel caso invece in cui le parole chiave siano state definite in modo univoco, il contenitore da preferire è un hash_map. Se invece è stato archiviato solo l'elenco di parole, il contenitore appropriato è rappresentato da un hash_set. Se sono state consentite più occorrenze delle parole, la struttura di contenitore appropriata è il hash_multiset.

L'oggetto hash_multimap ordina la sequenza che controlla chiamando un oggetto hash `Traits` archiviato del tipo [value_compare](../standard-library/value-compare-class.md). È possibile accedere a questo oggetto archiviato chiamando la funzione membro [key_comp](../standard-library/hash-map-class.md#key_comp). Un oggetto funzione di questo tipo deve comportarsi come un oggetto della classe [hash_compare](../standard-library/hash-compare-class.md) `<Key, less<Key>>` . In particolare, per tutti i valori `Key` di tipo `Key`, la chiamata `Traits (Key)` produce una distribuzione di valori di tipo `size_t`.

In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti (ovvero che uno non è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard. Un predicato binario f (x, y) è un oggetto funzione che ha due oggetti argomento `x` e `y` e un valore restituito di **`true`** o **`false`** . Un ordinamento imposto a una hash_multimap è un ordinamento debole rigido se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti `x` e `y` vengono definiti equivalenti quando sia f (x, y) che f (y, x) sono **`false`** . Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.

L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di ordinamento e dalle dimensioni correnti della tabella hash archiviata nell'oggetto contenitore. Non è possibile determinare le dimensioni correnti della tabella hash, quindi non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata. L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.

L'iteratore fornito dalla classe hash_multimap è un iteratore bidirezionale, ma le funzioni membro [insert](#insert) e [hash_multimap](#hash_multimap) della classe hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali. I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità. Ogni concetto di iteratore ha un proprio hash_multimap di requisiti e gli algoritmi usati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore. Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza. Si tratta di un hash_multimap di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori `[First, Last)` nel contesto delle funzioni membro.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[hash_multimap](#hash_multimap)|Costruisce una lista di dimensioni specifiche con elementi di un valore specifico, con un `allocator` specifico o come copia di un altro `hash_multimap`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto `hash_multimap`.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un **`const`** elemento in `hash_multimap` .|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un **`const`** elemento in un oggetto `hash_multimap` .|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un `hash_multimap` per la lettura e l'esecuzione di **`const`** operazioni.|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi **`const`** elemento in `hash_multimap` .|
|[difference_type](#difference_type)|Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un `hash_multimap` in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|
|[iteratore](#iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un `hash_multimap`.|
|[key_compare](#key_compare)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `hash_multimap`.|
|[key_type](#key_type)|Tipo che descrive l'oggetto chiave di ordinamento di cui è costituito ogni elemento del `hash_multimap`.|
|[mapped_type](#mapped_type)|Tipo che rappresenta il tipo di dati archiviati in un `hash_multimap`.|
|[puntatore](#pointer)|Tipo che fornisce un puntatore a un elemento in un `hash_multimap`.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento archiviato in un `hash_multimap`.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un `hash_multimap` invertito.|
|[size_type](#size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `hash_multimap`.|
|[value_type](#value_type)|Tipo che fornisce un oggetto funzione in grado di confrontare due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel `hash_multimap`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[iniziare](#begin)|Restituisce un iteratore che punta al primo elemento del `hash_multimap`.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento del `hash_multimap`.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `hash_multimap`.|
|[deselezionare](#clear)|Cancella tutti gli elementi di un `hash_multimap`.|
|[count](#count)|Restituisce il numero di elementi di un `hash_multimap` la cui chiave corrisponde a una chiave specificata dal parametro.|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di un `hash_multimap` invertito.|
|[crend](#crend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set `hash_multimap` invertito.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto in un `hash_multimap`.|
|[emplace_hint](#emplace_hint)|Inserisce un elemento costruito sul posto in un `hash_multimap`, con un suggerimento sulla posizione.|
|[empty](#empty)|Verifica se un `hash_multimap` è vuoto.|
|[fine](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_multimap`.|
|[equal_range](#equal_range)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_multimap`.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi di un `hash_multimap` dalle posizioni specificate.|
|[find](#find)|Restituisce un iteratore che punta alla posizione di un elemento in un `hash_multimap` che dispone di una chiave equivalente a una chiave specificata.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `hash_multimap`.|
|[insert](#insert)|Incolla un elemento o un intervallo di elementi nel `hash_multimap` in una posizione specificata.|
|[key_comp](#key_comp)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di un `hash_multimap`.|
|[lower_bound](#lower_bound)|Restituisce un iteratore al primo elemento di un `hash_multimap` con un valore della chiave uguale o maggiore di quello di una chiave specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima del `hash_multimap`.|
|[rbegin](#rbegin)|Restituisce un iteratore che punta al primo elemento di un `hash_multimap` invertito.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_multimap` invertito.|
|[size](#size)|Specifica una nuova dimensione per `hash_multimap`.|
|[scambio](#swap)|Scambia gli elementi di due `hash_multimap`.|
|[upper_bound](#upper_bound)|Restituisce un iteratore al primo elemento di un `hash_multimap` con un valore della chiave maggiore di quello di una chiave specificata.|
|[value_comp](#value_comp)|Recupera una copia dell'oggetto di confronto usato per ordinare i valori degli elementi di un `hash_multimap`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[hash_multimap::operator=](#op_eq)|Sostituisce gli elementi di un `hash_multimap` con una copia di un altro `hash_multimap`.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<hash_map>

**Spazio dei nomi:** stdext

## <a name="hash_multimapallocator_type"></a><a name="allocator_type"></a> hash_multimap:: allocator_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che rappresenta la classe allocator per l'oggetto hash_multimap.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::allocator_type allocator_type;
```

### <a name="remarks"></a>Osservazioni

`allocator_type` è un sinonimo per il parametro di modello `Allocator`.

Per altre informazioni su `Allocator`, vedere la sezione Note dell'argomento [Classe hash_multimap](../standard-library/hash-multimap-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator) per indicazioni su come usare `allocator_type`.

## <a name="hash_multimapbegin"></a><a name="begin"></a> hash_multimap:: Begin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore che punta al primo elemento dell'oggetto hash_multimap.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta al primo elemento dell'oggetto hash_multimap o alla posizione successiva a un oggetto hash_multimap vuoto.

### <a name="remarks"></a>Osservazioni

Se il valore restituito di `begin` viene assegnato a un `const_iterator` , gli elementi nell'oggetto hash_multimap non possono essere modificati. Se il valore restituito di `begin` viene assegnato a un `iterator` , gli elementi dell'oggetto hash_multimap possono essere modificati.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_begin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;

   hash_multimap <int, int> :: iterator hm1_Iter;
   hash_multimap <int, int> :: const_iterator hm1_cIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 0, 0 ) );
   hm1.insert ( Int_Pair ( 1, 1 ) );
   hm1.insert ( Int_Pair ( 2, 4 ) );

   hm1_cIter = hm1.begin ( );
   cout << "The first element of hm1 is " << hm1_cIter -> first
        << "." << endl;

   hm1_Iter = hm1.begin ( );
   hm1.erase ( hm1_Iter );

   // The following 2 lines would err because the iterator is const
   // hm1_cIter = hm1.begin ( );
   // hm1.erase ( hm1_cIter );

   hm1_cIter = hm1.begin( );
   cout << "The first element of hm1 is now " << hm1_cIter -> first
        << "." << endl;
}
```

```Output
The first element of hm1 is 0.
The first element of hm1 is now 1.
```

## <a name="hash_multimapcbegin"></a><a name="cbegin"></a> hash_multimap:: cbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore const che punta al primo elemento dell'oggetto hash_multimap.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const che punta al primo elemento dell'oggetto [hash_multimap](../standard-library/hash-multimap-class.md) o alla posizione successiva a un oggetto `hash_multimap` vuoto.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_cbegin.cpp
// compile with: /EHsc
#include <hash_multimap>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;

   hash_multimap <int, int> :: const_iterator hm1_cIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 2, 4 ) );

   hm1_cIter = hm1.cbegin ( );
   cout << "The first element of hm1 is "
        << hm1_cIter -> first << "." << endl;
   }
```

```Output
The first element of hm1 is 2.
```

## <a name="hash_multimapcend"></a><a name="cend"></a> hash_multimap:: cend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multimap.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const che punta alla posizione successiva all'ultimo elemento di un oggetto [hash_multimap](../standard-library/hash-multimap-class.md). Se l'oggetto `hash_multimap` è vuoto, `hash_multimap::cend == hash_multimap::begin`.

### <a name="remarks"></a>Osservazioni

`cend` viene usato per verificare se un iteratore ha raggiunto la fine del relativo oggetto hash_multimap.

Non è consigliabile dereferenziare il valore restituito da `cend`.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_cend.cpp
// compile with: /EHsc
#include <hash_multimap>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;

   hash_multimap <int, int> :: const_iterator hm1_cIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_cIter = hm1.cend( );
   hm1_cIter--;
   cout << "The value of last element of hm1 is "
        << hm1_cIter -> second << "." << endl;
   }
```

```Output
The value of last element of hm1 is 30.
```

## <a name="hash_multimapclear"></a><a name="clear"></a> hash_multimap:: Clear

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Cancella tutti gli elementi di un hash_multimap.

```cpp
void clear();
```

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro hash_multimap::clear.

```cpp
// hash_multimap_clear.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_multimap<int, int> hm1;
    hash_multimap<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 1));
    hm1.insert(Int_Pair(2, 4));

    i = hm1.size();
    cout << "The size of the hash_multimap is initially "
         << i  << "." << endl;

    hm1.clear();
    i = hm1.size();
    cout << "The size of the hash_multimap after clearing is "
         << i << "." << endl;
}
```

```Output
The size of the hash_multimap is initially 2.
The size of the hash_multimap after clearing is 0.
```

## <a name="hash_multimapconst_iterator"></a><a name="const_iterator"></a> hash_multimap:: const_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere un **`const`** elemento nel hash_multimap.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_iterator const_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

L'oggetto `const_iterator` definito da hash_multimap punta a oggetti di [value_type](#value_type), che sono di tipo `pair<const Key, Type>` . Il valore della chiave è disponibile tramite il primo membro della coppia e il valore dell'elemento mappato è disponibile tramite il secondo membro della coppia.

Per dereferenziare un oggetto `const_iterator` `cIter` che punta a un elemento in un hash_multimap, usare l' `->` operatore.

Per accedere al valore della chiave per l'elemento, usare `cIter->first` , che equivale a `(*cIter).first` . Per accedere al valore del punto di riferimento mappato per l'elemento, usare `cIter->second` , che equivale a `(*cIter).second` .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](#begin) per indicazioni su come usare `const_iterator`.

## <a name="hash_multimapconst_pointer"></a><a name="const_pointer"></a> hash_multimap:: const_pointer

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che fornisce un puntatore a un **`const`** elemento in un hash_multimap.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_pointer const_pointer;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto hash_multimap.

## <a name="hash_multimapconst_reference"></a><a name="const_reference"></a> hash_multimap:: const_reference

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un hash_multimap per la lettura e l'esecuzione di **`const`** operazioni.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_reference const_reference;
```

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

```cpp
// hash_multimap_const_ref.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap<int, int> hm1;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( hm1.begin( ) -> first );

   // The following line would cause an error because the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( hm1.begin( ) -> first );

   cout << "The key of first element in the hash_multimap is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( hm1.begin() -> second );

   cout << "The data value of 1st element in the hash_multimap is "
        << Ref2 << "." << endl;
}
```

```Output
The key of first element in the hash_multimap is 1.
The data value of 1st element in the hash_multimap is 10.
```

## <a name="hash_multimapconst_reverse_iterator"></a><a name="const_reverse_iterator"></a> hash_multimap:: const_reverse_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi **`const`** elemento nel hash_multimap.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_reverse_iterator const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto hash_multimap in ordine inverso.

L'oggetto `const_reverse_iterator` definito da hash_multimap punta a oggetti di [value_type](#value_type), che sono di tipo `pair<const Key, Type>` , il cui primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato incluso nell'elemento.

Per dereferenziare un oggetto `const_reverse_iterator` `crIter` che punta a un elemento in un hash_multimap, usare l' `->` operatore.

Per accedere al valore della chiave per l'elemento, usare `crIter->first` , che equivale a `(*crIter).first` . Per accedere al valore del punto di riferimento mappato per l'elemento, usare `crIter->second` , che equivale a `(*crIter).second` .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rend](#rend) per indicazioni su come dichiarare e usare `const_reverse_iterator`.

## <a name="hash_multimapcount"></a><a name="count"></a> hash_multimap:: count

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce il numero di elementi di un hash_multimap la cui chiave corrisponde a una chiave specificata dal parametro.

```cpp
size_type count(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
La chiave degli elementi per cui trovare un corrispondenza nell'hash_multimap.

### <a name="return-value"></a>Valore restituito

1 se hash_multimap contiene un elemento la cui chiave di ordinamento corrisponde alla chiave del parametro. 0 se hash_multimap non contiene un elemento con una chiave corrispondente.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il numero di elementi nell'intervallo

**[lower_bound (** `key` **), upper_bound (** `key` **) )**

con una *chiave*del valore della chiave.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro hash_multimap::count.

```cpp
// hash_multimap_count.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
    using namespace std;
    using namespace stdext;
    hash_multimap<int, int> hm1;
    hash_multimap<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 1));
    hm1.insert(Int_Pair(2, 1));
    hm1.insert(Int_Pair(1, 4));
    hm1.insert(Int_Pair(2, 1));

    // Elements do not need to have unique keys in hash_multimap,
    // so duplicates are allowed and counted
    i = hm1.count(1);
    cout << "The number of elements in hm1 with a sort key of 1 is: "
         << i << "." << endl;

    i = hm1.count(2);
    cout << "The number of elements in hm1 with a sort key of 2 is: "
         << i << "." << endl;

    i = hm1.count(3);
    cout << "The number of elements in hm1 with a sort key of 3 is: "
         << i << "." << endl;
}
```

```Output
The number of elements in hm1 with a sort key of 1 is: 2.
The number of elements in hm1 with a sort key of 2 is: 2.
The number of elements in hm1 with a sort key of 3 is: 0.
```

## <a name="hash_multimapcrbegin"></a><a name="crbegin"></a> hash_multimap:: crbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore const che punta al primo elemento di un oggetto hash_multimap invertito.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta al primo elemento di un oggetto [hash_multimap](../standard-library/hash-multimap-class.md) invertito o a quello che è stato l'ultimo elemento dell'oggetto `hash_multimap` non invertito.

### <a name="remarks"></a>Osservazioni

`crbegin` viene usato con un oggetto hash_multimap invertito proprio come [hash_multimap::begin](#begin) viene usato con un oggetto `hash_multimap`.

Con il valore restituito di `crbegin`, l'oggetto `hash_multimap` non può essere modificato.

`crbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto `hash_multimap`.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_crbegin.cpp
// compile with: /EHsc
#include <hash_multimap>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;

   hash_multimap <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_crIter = hm1.crbegin( );
   cout << "The first element of the reversed hash_multimap hm1 is "
        << hm1_crIter -> first << "." << endl;
}
```

```Output
The first element of the reversed hash_multimap hm1 is 3.
```

## <a name="hash_multimapcrend"></a><a name="crend"></a> hash_multimap:: crend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multimap invertito.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto [hash_multimap](../standard-library/hash-multimap-class.md) invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto `hash_multimap` non invertito.

### <a name="remarks"></a>Osservazioni

`crend` viene usato con un oggetto hash_multimap invertito proprio come [hash_multimap::end](#end) viene usato con un oggetto hash_multimap.

Con il valore restituito di `crend`, l'oggetto `hash_multimap` non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto hash_multimap.

Non è consigliabile dereferenziare il valore restituito da `crend`.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_crend.cpp
// compile with: /EHsc
#include <hash_multimap>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;

   hash_multimap <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_crIter = hm1.crend( );
   hm1_crIter--;
   cout << "The last element of the reversed hash_multimap hm1 is "
        << hm1_crIter -> first << "." << endl;
}
```

```Output
The last element of the reversed hash_multimap hm1 is 3.
```

## <a name="hash_multimapdifference_type"></a><a name="difference_type"></a> hash_multimap::d ifference_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo Signed Integer che può essere usato per rappresentare il numero di elementi di un oggetto hash_multimap in un intervallo compreso tra gli elementi a cui puntano gli iteratori.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::difference_type difference_type;
```

### <a name="remarks"></a>Osservazioni

`difference_type` è il tipo restituito quando si sottrae o si incrementa tramite gli iteratori del contenitore. `difference_type` viene in genere usato per rappresentare il numero di elementi nell'intervallo *[ first,  last)* tra gli iteratori `first` e `last`, includendo l'elemento a cui punta `first` e l'intervallo di elementi fino all'elemento a cui punta `last`, escluso tale elemento.

Si noti che, sebbene `difference_type` sia disponibile per tutti gli iteratori che soddisfano i requisiti di un iteratore di input, inclusa la classe degli iteratori bidirezionali supportati da contenitori reversibili come set, la sottrazione tra gli iteratori è supportata solo da iteratori ad accesso casuale forniti da un contenitore ad accesso casuale, ad esempio vector.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_difference_type.cpp
// compile with: /EHsc
#include <iostream>
#include <hash_map>
#include <algorithm>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_multimap<int, int> hm1;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(2, 20));
    hm1.insert(Int_Pair(1, 10));
    hm1.insert(Int_Pair(3, 20));

    // The following will insert, because map keys
    // do not need to be unique
    hm1.insert(Int_Pair(2, 30));

    hash_multimap<int, int>::iterator hm1_Iter, hm1_bIter, hm1_eIter;
    hm1_bIter = hm1.begin();
    hm1_eIter = hm1.end();

    // Count the number of elements in a hash_multimap
    hash_multimap<int, int>::difference_type df_count = 0;
    hm1_Iter = hm1.begin();
    while (hm1_Iter != hm1_eIter)
    {
        df_count++;
        hm1_Iter++;
    }

    cout << "The number of elements in the hash_multimap hm1 is: "
         << df_count << "." << endl;

    cout << "The keys of the mapped elements are:";
    for (hm1_Iter= hm1.begin() ; hm1_Iter!= hm1.end();
        hm1_Iter++)
        cout << " " << hm1_Iter-> first;
    cout << "." << endl;

    cout << "The values of the mapped elements are:";
    for (hm1_Iter= hm1.begin() ; hm1_Iter!= hm1.end();
        hm1_Iter++)
        cout << " " << hm1_Iter-> second;
    cout << "." << endl;
}
```

```Output
The number of elements in the hash_multimap hm1 is: 4.
The keys of the mapped elements are: 1 2 2 3.
The values of the mapped elements are: 10 20 30 20.
```

## <a name="hash_multimapemplace"></a><a name="emplace"></a> hash_multimap:: emplace

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Inserisce un elemento costruito sul posto in un oggetto hash_multimap.

```cpp
template <class ValTy>
iterator emplace(ValTy&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Valore usato per eseguire move-contruct su un elemento da inserire nell'oggetto [hash_multimap](../standard-library/hash-multimap-class.md).

### <a name="return-value"></a>Valore restituito

La funzione membro `emplace` restituisce un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento.

### <a name="remarks"></a>Osservazioni

L'oggetto [hash_multimap::value_type](#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_emplace.cpp
// compile with: /EHsc
#include<hash_multimap>
#include<iostream>
#include <string>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_multimap<int, string> hm1;
    typedef pair<int, string> is1(1, "a");

    hm1.emplace(move(is1));
    cout << "After the emplace, hm1 contains:" << endl
      << " " << hm1.begin()->first
      << " => " << hm1.begin()->second
      << endl;
}
```

```Output
After the emplace insertion, hm1 contains:
1 => a
```

## <a name="hash_multimapemplace_hint"></a><a name="emplace_hint"></a> hash_multimap:: emplace_hint

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Inserisce un elemento costruito sul posto in un oggetto hash_multimap, con un suggerimento sulla posizione.

```cpp
template <class ValTy>
iterator emplace_hint(
    const_iterator _Where,
    ValTy&& val);
```

### <a name="parameters"></a>Parametri

*Val*\
Valore usato per eseguire move-contruct su un elemento da inserire nell'oggetto [hash_multimap](../standard-library/hash-multimap-class.md), a meno che `hash_multimap` non contenga già tale elemento o, più in generale, un elemento la cui la chiave sia ordinata in modo equivalente.

*_Where*\
Suggerimento sulla posizione per avviare la ricerca del punto di inserimento corretto.

### <a name="return-value"></a>Valore restituito

La funzione membro [hash_multimap::emplace](#emplace) restituisce un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito nell'oggetto `hash_multimap`.

### <a name="remarks"></a>Osservazioni

L'oggetto [hash_multimap::value_type](#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

L'inserimento può essere eseguito in un tempo costante ammortizzato, invece che in tempo logaritmico, se il punto di inserimento segue immediatamente *_Where*.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_emplace_hint.cpp
// compile with: /EHsc
#include<hash_multimap>
#include<iostream>
#include <string>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_multimap<int, string> hm1;
    typedef pair<int, string> is1(1, "a");

    hm1.emplace(hm1.begin(), move(is1));
    cout << "After the emplace insertion, hm1 contains:" << endl
      << " " << hm1.begin()->first
      << " => " << hm1.begin()->second
      << endl;
}
```

```Output
After the emplace insertion, hm1 contains:
1 => a
```

## <a name="hash_multimapempty"></a><a name="empty"></a> hash_multimap:: Empty

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Verifica se un oggetto hash_multimap è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il hash_multimap è vuoto; **`false`** se il hash_multimap non è vuoto.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

```cpp
// hash_multimap_empty.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1, hm2;

   typedef pair <int, int> Int_Pair;
   hm1.insert ( Int_Pair ( 1, 1 ) );

   if ( hm1.empty( ) )
      cout << "The hash_multimap hm1 is empty." << endl;
   else
      cout << "The hash_multimap hm1 is not empty." << endl;

   if ( hm2.empty( ) )
      cout << "The hash_multimap hm2 is empty." << endl;
   else
      cout << "The hash_multimap hm2 is not empty." << endl;
}
```

```Output
The hash_multimap hm1 is not empty.
The hash_multimap hm2 is empty.
```

## <a name="hash_multimapend"></a><a name="end"></a> hash_multimap:: end

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multimap.

```cpp
const_iterator end() const;

iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multimap. Se l'oggetto hash_multimap è vuoto, hash_multimap::end == hash_multimap::begin.

### <a name="remarks"></a>Osservazioni

`end` viene usato per verificare se un iteratore ha raggiunto la fine del relativo oggetto hash_multimap.

Non è consigliabile dereferenziare il valore restituito da `end`.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_end.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;

   hash_multimap <int, int> :: iterator hm1_Iter;
   hash_multimap <int, int> :: const_iterator hm1_cIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_cIter = hm1.end( );
   hm1_cIter--;
   cout << "The value of last element of hm1 is "
        << hm1_cIter -> second << "." << endl;

   hm1_Iter = hm1.end( );
   hm1_Iter--;
   hm1.erase ( hm1_Iter );

   // The following 2 lines would err because the iterator is const
   // hm1_cIter = hm1.end ( );
   // hm1_cIter--;
   // hm1.erase ( hm1_cIter );

   hm1_cIter = hm1.end( );
   hm1_cIter--;
   cout << "The value of last element of hm1 is now "
        << hm1_cIter -> second << "." << endl;
}
```

```Output
The value of last element of hm1 is 30.
The value of last element of hm1 is now 20.
```

## <a name="hash_multimapequal_range"></a><a name="equal_range"></a> hash_multimap:: equal_range

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce una coppia di iteratori rispettivamente al primo elemento di un oggetto hash_multimap con una chiave maggiore di una chiave specificata e al primo elemento dell'oggetto hash_multimap con una chiave uguale o maggiore di tale chiave.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### <a name="parameters"></a>Parametri

*chiave*\
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto hash_multimap in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Coppia di iteratori in cui il primo è l'elemento [lower_bound](#lower_bound) e il secondo è l'elemento [upper_bound](#upper_bound) della chiave.

Per accedere al primo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **First** e per dereferenziare l'iteratore del limite inferiore, usare \* ( `pr` . **primo**). Per accedere al secondo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **secondo** e per dereferenziare l'iteratore del limite superiore, usare \* ( `pr` . **secondo**).

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

```cpp
// hash_multimap_equal_range.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef hash_multimap <int, int> IntMMap;
   IntMMap hm1;
   hash_multimap <int, int> :: const_iterator hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   pair <IntMMap::const_iterator, IntMMap::const_iterator> p1, p2;
   p1 = hm1.equal_range( 2 );

   cout << "The lower bound of the element with a key of 2\n"
        << "in the hash_multimap hm1 is: "
        << p1.first -> second << "." << endl;

   cout << "The upper bound of the element with a key of 2\n"
        << "in the hash_multimap hm1 is: "
        << p1.second -> second << "." << endl;

   // Compare the upper_bound called directly
   hm1_RcIter = hm1.upper_bound( 2 );

   cout << "A direct call of upper_bound( 2 ) gives "
        << hm1_RcIter -> second << "," << endl
        << "matching the 2nd element of the pair "
        << "returned by equal_range( 2 )." << endl;

   p2 = hm1.equal_range( 4 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == hm1.end( ) ) && ( p2.second == hm1.end( ) ) )
      cout << "The hash_multimap hm1 doesn't have an element "
           << "with a key less than 4." << endl;
   else
      cout << "The element of hash_multimap hm1 with a key >= 40 is: "
           << p1.first -> first << "." << endl;
}
```

```Output
The lower bound of the element with a key of 2
in the hash_multimap hm1 is: 20.
The upper bound of the element with a key of 2
in the hash_multimap hm1 is: 30.
A direct call of upper_bound( 2 ) gives 30,
matching the 2nd element of the pair returned by equal_range( 2 ).
The hash_multimap hm1 doesn't have an element with a key less than 4.
```

## <a name="hash_multimaperase"></a><a name="erase"></a> hash_multimap:: erase

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Rimuove un elemento o un intervallo di elementi in un hash_multimap dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

```cpp
iterator erase(iterator _Where);

iterator erase(iterator first, iterator last);

size_type erase(const key_type& key);
```

### <a name="parameters"></a>Parametri

*_Where*\
Posizione dell'elemento da rimuovere dall'hash_multimap.

*prima*\
Posizione del primo elemento rimosso dall'hash_multimap.

*Ultima*\
Posizione oltre l'ultimo elemento rimosso dall'hash_multimap.

*chiave*\
La chiave degli elementi da rimuovere dall'hash_multimap.

### <a name="return-value"></a>Valore restituito

Per le prime due funzioni membro, un iteratore bidirezionale che definisce il primo elemento rimanente successivo a tutti gli elementi eliminati o un puntatore al termine dell'hash_multimap se tali elementi non sono presenti.

Per la terza funzione membro, restituisce il numero di elementi rimossi dall'hash_multimap.

### <a name="remarks"></a>Osservazioni

Le funzioni membro non generano mai un'eccezione.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'uso della funzione membro hash_multimap::erase.

```cpp
// hash_multimap_erase.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_multimap<int, int> hm1, hm2, hm3;
    hash_multimap<int, int> :: iterator pIter, Iter1, Iter2;
    int i;
    hash_multimap<int, int>::size_type n;
    typedef pair<int, int> Int_Pair;

    for (i = 1; i < 5; i++)
    {
        hm1.insert(Int_Pair (i, i) );
        hm2.insert(Int_Pair (i, i*i) );
        hm3.insert(Int_Pair (i, i-1) );
    }

    // The 1st member function removes an element at a given position
    Iter1 = ++hm1.begin();
    hm1.erase(Iter1);

    cout << "After the 2nd element is deleted, "
         << "the hash_multimap hm1 is:";
    for (pIter = hm1.begin(); pIter != hm1.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;

    // The 2nd member function removes elements
    // in the range [ first,  last)
    Iter1 = ++hm2.begin();
    Iter2 = --hm2.end();
    hm2.erase(Iter1, Iter2);

    cout << "After the middle two elements are deleted, "
         << "the hash_multimap hm2 is:";
    for (pIter = hm2.begin(); pIter != hm2.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;

    // The 3rd member function removes elements with a given  key
    hm3.insert(Int_Pair (2, 5));
    n = hm3.erase(2);

    cout << "After the element with a key of 2 is deleted,\n"
         << "the hash_multimap hm3 is:";
    for (pIter = hm3.begin(); pIter != hm3.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;

    // The 3rd member function returns the number of elements removed
    cout << "The number of elements removed from hm3 is: "
         << n << "." << endl;

    // The dereferenced iterator can also be used to specify a key
    Iter1 = ++hm3.begin();
    hm3.erase(Iter1);

    cout << "After another element with a key equal to that of the"
         << endl;
    cout  << "2nd element is deleted, "
          << "the hash_multimap hm3 is:";
    for (pIter = hm3.begin(); pIter != hm3.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;
}
```

```Output
After the 2nd element is deleted, the hash_multimap hm1 is: 1 3 4.
After the middle two elements are deleted, the hash_multimap hm2 is: 1 16.
After the element with a key of 2 is deleted,
the hash_multimap hm3 is: 0 2 3.
The number of elements removed from hm3 is: 2.
After another element with a key equal to that of the
2nd element is deleted, the hash_multimap hm3 is: 0 3.
```

## <a name="hash_multimapfind"></a><a name="find"></a> hash_multimap:: Find

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore che punta alla prima posizione di un elemento in un oggetto hash_multimap che dispone di una chiave equivalente a una chiave specificata.

```cpp
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Chiave per cui trovare una corrispondenza in base alla chiave di ordinamento di un elemento presente nell'oggetto hash_multimap in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Iteratore che punta alla prima posizione di un elemento con una chiave specificata o alla posizione successiva all'ultimo elemento dell'oggetto hash_multimap se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore che punta a un elemento nel hash_multimap la cui chiave `equivalent` di ordinamento corrisponde alla chiave dell'argomento in un predicato binario che provoca un ordinamento basato su una relazione di comparabilità minore di.

Se il valore restituito di `find` viene assegnato a un `const_iterator`, l'oggetto hash_multimap non può essere modificato. Se il valore restituito di `find` viene assegnato a un `iterator` , l'oggetto hash_multimap può essere modificato.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_find.cpp
// compile with: /EHsc
#include <iostream>
#include <hash_map>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_multimap<int, int> hm1;
    hash_multimap<int, int> :: const_iterator hm1_AcIter, hm1_RcIter;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 10));
    hm1.insert(Int_Pair(2, 20));
    hm1.insert(Int_Pair(3, 20));
    hm1.insert(Int_Pair(3, 30));

    hm1_RcIter = hm1.find(2);
    cout << "The element of hash_multimap hm1 with a key of 2 is: "
          << hm1_RcIter -> second << "." << endl;

    hm1_RcIter = hm1.find(3);
    cout << "The first element of hash_multimap hm1 with a key of 3 is: "
          << hm1_RcIter -> second << "." << endl;

    // If no match is found for the key, end() is returned
    hm1_RcIter = hm1.find(4);

    if (hm1_RcIter == hm1.end())
        cout << "The hash_multimap hm1 doesn't have an element "
             << "with a key of 4." << endl;
    else
        cout << "The element of hash_multimap hm1 with a key of 4 is: "
             << hm1_RcIter -> second << "." << endl;

    // The element at a specific location in the hash_multimap can be
    // found using a dereferenced iterator addressing the location
    hm1_AcIter = hm1.end();
    hm1_AcIter--;
    hm1_RcIter = hm1.find(hm1_AcIter -> first);
    cout << "The first element of hm1 with a key matching"
         << endl << "that of the last element is: "
         << hm1_RcIter -> second << "." << endl;

    // Note that the first element with a key equal to
    // the key of the last element is not the last element
    if (hm1_RcIter == --hm1.end())
        cout << "This is the last element of hash_multimap hm1."
             << endl;
    else
        cout << "This is not the last element of hash_multimap hm1."
             << endl;
}
```

```Output
The element of hash_multimap hm1 with a key of 2 is: 20.
The first element of hash_multimap hm1 with a key of 3 is: 20.
The hash_multimap hm1 doesn't have an element with a key of 4.
The first element of hm1 with a key matching
that of the last element is: 20.
This is not the last element of hash_multimap hm1.
```

## <a name="hash_multimapget_allocator"></a><a name="get_allocator"></a> hash_multimap:: get_allocator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce una copia dell'oggetto allocatore usato per costruire l'oggetto hash_multimap.

```cpp
Allocator get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dall'oggetto hash_multimap.

### <a name="remarks"></a>Osservazioni

Gli allocatori per la classe hash_multimap specificano il modo in cui la classe gestisce la memoria. Gli allocatori predefiniti forniti con le classi dei contenitori della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_get_allocator.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int>::allocator_type hm1_Alloc;
   hash_multimap <int, int>::allocator_type hm2_Alloc;
   hash_multimap <int, double>::allocator_type hm3_Alloc;
   hash_multimap <int, int>::allocator_type hm4_Alloc;

   // The following lines declare objects
   // that use the default allocator.
   hash_multimap <int, int> hm1;
   hash_multimap <int, int> hm2;
   hash_multimap <int, double> hm3;

   hm1_Alloc = hm1.get_allocator( );
   hm2_Alloc = hm2.get_allocator( );
   hm3_Alloc = hm3.get_allocator( );

   cout << "The number of integers that can be allocated"
        << endl << " before free memory is exhausted: "
        << hm2.max_size( ) << "." << endl;

   cout << "The number of doubles that can be allocated"
        << endl << " before free memory is exhausted: "
        << hm3.max_size( ) <<  "." << endl;

   // The following line creates a hash_multimap hm4
   // with the allocator of hash_multimap hm1.
   hash_multimap <int, int> hm4( less<int>( ), hm1_Alloc );

   hm4_Alloc = hm4.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated by the other
   if( hm1_Alloc == hm4_Alloc )
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

## <a name="hash_multimaphash_multimap"></a><a name="hash_multimap"></a> hash_multimap:: hash_multimap

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Costruisce un oggetto hash_multimap vuoto o che rappresenta una copia totale o parziale di un altro oggetto hash_multimap.

```cpp
hash_multimap();

explicit hash_multimap(
    const Compare& Comp);

hash_multimap(
    const Compare& Comp,
    const Allocator& Al);

hash_multimap(
    const hash_multimap& Right);

hash_multimap(
    hash_multimap&& Right);

hash_multimap(
    initializer_list<Type> IList);

hash_multimap(
    initializer_list<Type> IList,
    const Compare& Comp);

hash_multimap(
    initializer_list<Type> IList,
    const Compare& Comp,
    const Allocator& Al);

template <class InputIterator>
hash_multimap(
    InputIterator First,
    InputIterator Last);

template <class InputIterator>
hash_multimap(
    InputIterator First,
    InputIterator Last,
    const Compare& Comp);

template <class InputIterator>
hash_multimap(
    InputIterator First,
    InputIterator Last,
    const Compare& Comp,
    const Allocator& Al);
```

### <a name="parameters"></a>Parametri

*Al*\
Classe dell'allocatore di memoria da usare per l'oggetto hash_multimap. Per impostazione predefinita è `Allocator`.

*Comp*\
Funzione di confronto di tipo `const Traits` usata per ordinare gli elementi nell'oggetto map. Per impostazione predefinita è `Traits`.

*Ok*\
Oggetto map di cui il set costruito deve essere una copia.

*Prima*\
Posizione del primo elemento nell'intervallo di elementi da copiare.

*Ultima*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

*IList*\
Oggetto Initializer_list da cui copiare.

### <a name="remarks"></a>Osservazioni

Tutti i costruttori archiviano un tipo di oggetto allocatore che gestisce la memoria per l'oggetto hash_multimap e che può essere restituito in un secondo momento chiamando [get_allocator](#get_allocator). Il parametro allocator viene spesso omesso nelle dichiarazioni di classe e vengono usate macro di pre-elaborazione per introdurre allocatori alternativi.

Tutti i costruttori inizializzano il relativo oggetto hash_multimap.

Tutti i costruttori archiviano un oggetto funzione di tipo `Traits` che viene usato per stabilire un ordine tra le chiavi dell'oggetto hash_multimap e che può essere restituito in un secondo momento chiamando [key_comp](#key_comp).

I primi tre costruttori specificano un hash_multimap iniziale vuoto; il secondo specifica il tipo di funzione di confronto (*comp*) da usare per stabilire l'ordine degli elementi e il terzo specifica in modo esplicito il tipo di allocatore ( `_Al` ) da usare. La parola chiave **`explicit`** evita alcuni tipi di conversione automatica del tipo.

Il quarto costruttore specifica una copia dell'oggetto hash_multimap `Right`.

I tre costruttori successivi copiano l'intervallo `First, Last)` di un oggetto map con un grado di esplicitazione crescente nello specificare il tipo di funzione di confronto della classe `Traits` e il tipo di allocatore.

L'ottavo costruttore sposta l'oggetto hash_multimap in base al parametro `Right`.

Gli ultimi tre costruttori usano un oggetto initializer_list.

## <a name="hash_multimapinsert"></a><a name="insert"></a> hash_multimap:: Insert

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Inserisce un elemento o un intervallo di elementi in un oggetto hash_multimap.

```cpp
iterator insert(
    const value_type& Val);

iterator insert(
    const_iterator Where,
    const value_type& Val);void insert(
    initializer_list<value_type> IList);

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

*Val*\
Valore di un elemento da inserire nell'oggetto hash_multimap, a meno che quest'ultimo non contenga già tale elemento o, più in generale, a meno che non contenga già un elemento la cui la chiave sia ordinata in modo equivalente.

*In cui*\
Suggerimento sulla posizione da cui avviare la ricerca del punto di inserimento corretto.

*Prima*\
Posizione del primo elemento da copiare da una mappa.

*Ultima*\
Posizione immediatamente dopo l'ultimo elemento da copiare da una mappa.

### <a name="return-value"></a>Valore restituito

Le prime due funzioni membro `insert` restituiscono un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento.

La terza funzione membro usa un oggetto initializer_list per gli elementi da inserire.

La quarta funzione membro inserisce la sequenza di valori di elemento in una mappa che corrisponde a ogni elemento interessato da un iteratore nell'intervallo `[First, Last)` di un set specificato.

Il comportamento delle ultime due funzioni membro `insert` è uguale a quello delle prime due, con la differenza che move-construct viene usato per costruire il valore inserito.

### <a name="remarks"></a>Osservazioni

L'oggetto [value_type](#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

L'inserimento può essere eseguito in un tempo costante ammortizzato per la versione del suggerimento di `insert` , anziché l'ora logaritmica, se il punto di inserimento segue immediatamente *dove*.

## <a name="hash_multimapiterator"></a><a name="iterator"></a> hash_multimap:: iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un oggetto hash_multimap.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::iterator iterator;
```

### <a name="remarks"></a>Osservazioni

L'oggetto `iterator` definito da hash_multimap punta a oggetti di [value_type](#value_type), che sono di tipo `pair` \< **const Key, Type**> , il cui primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato incluso nell'elemento.

Per dereferenziare un iteratore denominato `Iter` che punta a un elemento in un hash_multimap, usare l' `->` operatore.

Per accedere al valore della chiave per l'elemento, usare `Iter->first` , che equivale a `(*Iter).first` . Per accedere al valore del punto di riferimento mappato per l'elemento, usare `Iter->second` , che equivale a `(*Iter).first` .

Un tipo `iterator` può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l'esempio per [begin](#begin) per un esempio di dichiarazione e utilizzo di `iterator`.

## <a name="hash_multimapkey_comp"></a><a name="key_comp"></a> hash_multimap:: key_comp

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Recupera una copia dell'oggetto di confronto usato per ordinare le chiavi di un oggetto hash_multimap.

```cpp
key_compare key_comp() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto funzione che viene usato da un oggetto hash_multimap per ordinare gli elementi.

### <a name="remarks"></a>Osservazioni

L'oggetto archiviato definisce la funzione membro

`bool operator( const Key& left, const Key& right );`

che restituisce **`true`** se `left` precede e non è uguale a `right` nell'ordinamento.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_key_comp.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_multimap <int, int, hash_compare<int, less<int>>> hm1;
   hash_multimap <int, int, hash_compare<int, less<int>>
      >::key_compare kc1 = hm1.key_comp( ) ;
   bool result1 = kc1( 2, 3 ) ;
   if( result1 == true )
   {
      cout << "kc1( 2,3 ) returns value of true,\n"
           << "where kc1 is the function object of hm1.\n"
           << endl;
   }
   else
   {
      cout << "kc1( 2,3 ) returns value of false,\n"
           << "where kc1 is the function object of hm1.\n"
           << endl;
   }

   hash_multimap <int, int, hash_compare<int, greater<int>>> hm2;
   hash_multimap <int, int, hash_compare<int, greater<int>>
      >::key_compare kc2 = hm2.key_comp( );
   bool result2 = kc2( 2, 3 ) ;
   if( result2 == true )
   {
      cout << "kc2( 2,3 ) returns value of true,\n"
           << "where kc2 is the function object of hm2."
           << endl;
   }
   else
   {
      cout << "kc2( 2,3 ) returns value of false,\n"
           << "where kc2 is the function object of hm2."
           << endl;
   }
}
```

## <a name="hash_multimapkey_compare"></a><a name="key_compare"></a> hash_multimap:: key_compare

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nell'oggetto hash_multimap.

```cpp
typedef Traits key_compare;
```

### <a name="remarks"></a>Osservazioni

`key_compare` è un sinonimo dei *tratti*di parametro di modello.

Per ulteriori informazioni sui *tratti* , vedere l'argomento relativo alla [classe hash_multimap](../standard-library/hash-multimap-class.md) .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [key_comp](#key_comp) per indicazioni su come dichiarare e usare `key_compare`.

## <a name="hash_multimapkey_type"></a><a name="key_type"></a> hash_multimap:: key_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che descrive l'oggetto chiave di ordinamento di cui è costituito ogni elemento dell'oggetto hash_multimap.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Osservazioni

`key_type` è un sinonimo della *chiave*del parametro di modello.

Per ulteriori informazioni sulla *chiave*, vedere la sezione Osservazioni dell'argomento [classe hash_multimap](../standard-library/hash-multimap-class.md) .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_compare`.

## <a name="hash_multimaplower_bound"></a><a name="lower_bound"></a> hash_multimap:: lower_bound

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore al primo elemento di un oggetto hash_multimap con una chiave uguale o maggiore di quella specificata.

```cpp
iterator lower_bound(const Key& key);

const_iterator lower_bound(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto hash_multimap in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Tipo [iterator](#iterator) o [const_iterator](#const_iterator) che punta alla posizione di un elemento di un oggetto hash_multimap con una chiave uguale o maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_multimap se non viene trovata alcuna corrispondenza per la chiave.

Se il valore restituito di `lower_bound` viene assegnato a un `const_iterator`, l'oggetto hash_multimap non può essere modificato. Se il valore restituito di `lower_bound` viene assegnato a un `iterator` , l'oggetto hash_multimap può essere modificato.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

```cpp
// hash_multimap_lower_bound.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;
   hash_multimap <int, int> :: const_iterator hm1_AcIter,
      hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_RcIter = hm1.lower_bound( 2 );
   cout << "The element of hash_multimap hm1 with a key of 2 is: "
        << hm1_RcIter -> second << "." << endl;

   hm1_RcIter = hm1.lower_bound( 3 );
   cout << "The first element of hash_multimap hm1 with a key of 3 is: "
        << hm1_RcIter -> second << "." << endl;

   // If no match is found for the key, end( ) is returned
   hm1_RcIter = hm1.lower_bound( 4 );

   if ( hm1_RcIter == hm1.end( ) )
      cout << "The hash_multimap hm1 doesn't have an element "
           << "with a key of 4." << endl;
   else
      cout << "The element of hash_multimap hm1 with a key of 4 is: "
           << hm1_RcIter -> second << "." << endl;

   // The element at a specific location in the hash_multimap can be
   // found using a dereferenced iterator addressing the location
   hm1_AcIter = hm1.end( );
   hm1_AcIter--;
   hm1_RcIter = hm1.lower_bound( hm1_AcIter -> first );
   cout << "The first element of hm1 with a key matching"
        << endl << "that of the last element is: "
        << hm1_RcIter -> second << "." << endl;

   // Note that the first element with a key equal to
   // the key of the last element is not the last element
   if ( hm1_RcIter == --hm1.end( ) )
      cout << "This is the last element of hash_multimap hm1."
           << endl;
   else
      cout << "This is not the last element of hash_multimap hm1."
           << endl;
}
```

```Output
The element of hash_multimap hm1 with a key of 2 is: 20.
The first element of hash_multimap hm1 with a key of 3 is: 20.
The hash_multimap hm1 doesn't have an element with a key of 4.
The first element of hm1 with a key matching
that of the last element is: 20.
This is not the last element of hash_multimap hm1.
```

## <a name="hash_multimapmapped_type"></a><a name="mapped_type"></a> hash_multimap:: mapped_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che rappresenta il tipo di dati archiviato in un oggetto hash_multimap.

```cpp
typedef Type mapped_type;
```

### <a name="remarks"></a>Osservazioni

`mapped_type` è sinonimo del parametro di modello *Type*.

Per ulteriori informazioni sul *tipo* , vedere l'argomento [classe hash_multimap](../standard-library/hash-multimap-class.md) .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="hash_multimapmax_size"></a><a name="max_size"></a> hash_multimap:: max_size

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce la lunghezza massima dell'oggetto hash_multimap.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza massima possibile dell'oggetto hash_multimap.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

```cpp
// hash_multimap_max_size.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;
   hash_multimap <int, int> :: size_type i;

   i = hm1.max_size( );
   cout << "The maximum possible length "
        << "of the hash_multimap is " << i << "." << endl;
}
```

## <a name="hash_multimapoperator"></a><a name="op_eq"></a> hash_multimap:: operator =

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Sostituisce gli elementi dell'oggetto hash_multimap con una copia di un altro oggetto hash_multimap.

```cpp
hash_multimap& operator=(const hash_multimap& right);

hash_multimap& operator=(hash_multimap&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
[Classe hash_multimap](../standard-library/hash-multimap-class.md) copiata nell'oggetto `hash_multimap`.

### <a name="remarks"></a>Osservazioni

Dopo la cancellazione di tutti gli elementi esistenti in un oggetto `hash_multimap` , `operator=` copia o sposta il contenuto di *direttamente* in `hash_multimap` .

### <a name="example"></a>Esempio

```cpp
// hash_multimap_operator_as.cpp
// compile with: /EHsc
#include <hash_multimap>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap<int, int> v1, v2, v3;
   hash_multimap<int, int>::iterator iter;

   v1.insert(pair<int, int>(1, 10));

   cout << "v1 = " ;
   for (iter = v1.begin(); iter != v1.end(); iter++)
      cout << iter->second << " ";
   cout << endl;

   v2 = v1;
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter->second << " ";
   cout << endl;

// move v1 into v2
   v2.clear();
   v2 = move(v1);
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter->second << " ";
   cout << endl;
}
```

## <a name="hash_multimappointer"></a><a name="pointer"></a> hash_multimap::p ointer

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che fornisce un puntatore a un elemento di un oggetto hash_multimap.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::pointer pointer;
```

### <a name="remarks"></a>Osservazioni

Un tipo `pointer` può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto hash_multimap.

## <a name="hash_multimaprbegin"></a><a name="rbegin"></a> hash_multimap:: rbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore che punta al primo elemento di un oggetto hash_multimap invertito.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta al primo elemento di un oggetto hash_multimap invertito o a quello che è stato l'ultimo elemento dell'oggetto hash_multimap non invertito.

### <a name="remarks"></a>Osservazioni

`rbegin` viene usato con un oggetto hash_multimap invertito proprio come [begin](#begin) viene usato con un oggetto hash_multimap.

Se il valore restituito di `rbegin` viene assegnato a un `const_reverse_iterator`, l'oggetto hash_multimap non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un `reverse_iterator`, l'oggetto hash_multimap può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto hash_multimap.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_rbegin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;

   hash_multimap <int, int> :: iterator hm1_Iter;
   hash_multimap <int, int> :: reverse_iterator hm1_rIter;
   hash_multimap <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_rIter = hm1.rbegin( );
   cout << "The first element of the reversed hash_multimap hm1 is "
        << hm1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a hash_multimap in a forward order
   cout << "The hash_multimap is: ";
   for ( hm1_Iter = hm1.begin( ) ; hm1_Iter != hm1.end( ); hm1_Iter++)
      cout << hm1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a hash_multimap in a reverse order
   cout << "The reversed hash_multimap is: ";
   for ( hm1_rIter = hm1.rbegin( ) ; hm1_rIter != hm1.rend( ); hm1_rIter++)
      cout << hm1_rIter -> first << " ";
      cout << "." << endl;

   // A hash_multimap element can be erased by dereferencing its key
   hm1_rIter = hm1.rbegin( );
   hm1.erase ( hm1_rIter -> first );

   hm1_rIter = hm1.rbegin( );
   cout << "After the erasure, the first element\n"
        << "in the reversed hash_multimap is "
        << hm1_rIter -> first << "." << endl;
}
```

```Output
The first element of the reversed hash_multimap hm1 is 3.
The hash_multimap is: 1 2 3 .
The reversed hash_multimap is: 3 2 1 .
After the erasure, the first element
in the reversed hash_multimap is 2.
```

## <a name="hash_multimapreference"></a><a name="reference"></a> hash_multimap:: Reference

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che fornisce un riferimento a un elemento archiviato in un oggetto hash_multimap.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::reference reference;
```

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

```cpp
// hash_multimap_reference.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( hm1.begin( ) -> first );

   // The following line would cause an error as the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( hm1.begin( ) -> first );

   cout << "The key of first element in the hash_multimap is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( hm1.begin( ) -> second );

   cout << "The data value of first element in the hash_multimap is "
        << Ref2 << "." << endl;

   //The non-const_reference can be used to modify the
   //data value of the first element
   Ref2 = Ref2 + 5;
   cout << "The modified data value of first element is "
        << Ref2 << "." << endl;
}
```

```Output
The key of first element in the hash_multimap is 1.
The data value of first element in the hash_multimap is 10.
The modified data value of first element is 15.
```

## <a name="hash_multimaprend"></a><a name="rend"></a> hash_multimap:: rend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multimap invertito.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto hash_multimap invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto hash_multimap non invertito.

### <a name="remarks"></a>Osservazioni

`rend` viene usato con un oggetto hash_multimap invertito proprio come [end](#end) viene usato con un oggetto hash_multimap.

Se il valore restituito di `rend` viene assegnato a un [const_reverse_iterator](#const_reverse_iterator), l'oggetto hash_multimap non può essere modificato. Se il valore restituito di `rend` viene assegnato a un [reverse_iterator](#reverse_iterator), l'oggetto hash_multimap può essere modificato.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto hash_multimap.

Non è consigliabile dereferenziare il valore restituito da `rend`.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_rend.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;

   hash_multimap <int, int> :: iterator hm1_Iter;
   hash_multimap <int, int> :: reverse_iterator hm1_rIter;
   hash_multimap <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_rIter = hm1.rend( );
   hm1_rIter--;
   cout << "The last element of the reversed hash_multimap hm1 is "
        << hm1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a hash_multimap in a forward order
   cout << "The hash_multimap is: ";
   for ( hm1_Iter = hm1.begin( ) ; hm1_Iter != hm1.end( ); hm1_Iter++)
      cout << hm1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a hash_multimap in a reverse order
   cout << "The reversed hash_multimap is: ";
   for ( hm1_rIter = hm1.rbegin( ) ; hm1_rIter != hm1.rend( ); hm1_rIter++)
      cout << hm1_rIter -> first << " ";
      cout << "." << endl;

   // A hash_multimap element can be erased by dereferencing its key
   hm1_rIter = --hm1.rend( );
   hm1.erase ( hm1_rIter -> first );

   hm1_rIter = hm1.rend( );
   hm1_rIter--;
   cout << "After the erasure, the last element "
        << "in the reversed hash_multimap is "
        << hm1_rIter -> first << "." << endl;
}
```

```Output
The last element of the reversed hash_multimap hm1 is 1.
The hash_multimap is: 1 2 3 .
The reversed hash_multimap is: 3 2 1 .
After the erasure, the last element in the reversed hash_multimap is 2.
```

## <a name="hash_multimapreverse_iterator"></a><a name="reverse_iterator"></a> hash_multimap:: reverse_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un oggetto hash_multimap invertito.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::reverse_iterator reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Un tipo `reverse_iterator` viene usato per eseguire l'iterazione sull'oggetto hash_multimap in ordine inverso.

L'oggetto `reverse_iterator` definito da hash_multimap punta a oggetti di [value_type](#value_type), che sono di tipo `pair` \< **const Key, Type**> . Il valore della chiave è disponibile tramite il primo membro della coppia e il valore dell'elemento mappato è disponibile tramite il secondo membro della coppia.

### <a name="example"></a>Esempio

Vedere l'esempio per [rbegin](#rbegin) per un esempio di dichiarazione e utilizzo di `reverse_iterator`.

## <a name="hash_multimapsize"></a><a name="size"></a> hash_multimap:: size

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce il numero di elementi in hash_multimap.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente di hash_multimap.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro hash_multimap::size.

```cpp
// hash_multimap_size.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
    using namespace std;
    using namespace stdext;
    hash_multimap<int, int> hm1, hm2;
    hash_multimap<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 1));
    i = hm1.size();
    cout << "The hash_multimap length is " << i << "." << endl;

    hm1.insert(Int_Pair(2, 4));
    i = hm1.size();
    cout << "The hash_multimap length is now " << i << "." << endl;
}
```

```Output
The hash_multimap length is 1.
The hash_multimap length is now 2.
```

## <a name="hash_multimapsize_type"></a><a name="size_type"></a> hash_multimap:: size_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo Unsigned Integer in grado di contare il numero di elementi di un oggetto hash_multimap.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::size_type size_type;
```

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.

## <a name="hash_multimapswap"></a><a name="swap"></a> hash_multimap:: swap

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Scambia gli elementi di due oggetti hash_multimap.

```cpp
void swap(hash_multimap& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Oggetto hash_multimap che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto hash_multimap.

### <a name="remarks"></a>Osservazioni

La funzione membro non invalida riferimenti, puntatori o iteratori che designano gli elementi dei due oggetti hash_multimap di cui vengono scambiati gli elementi.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_swap.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1, hm2, hm3;
   hash_multimap <int, int>::iterator hm1_Iter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );
   hm2.insert ( Int_Pair ( 10, 100 ) );
   hm2.insert ( Int_Pair ( 20, 200 ) );
   hm3.insert ( Int_Pair ( 30, 300 ) );

   cout << "The original hash_multimap hm1 is:";
   for ( hm1_Iter = hm1.begin( ); hm1_Iter != hm1.end( ); hm1_Iter++ )
      cout << " " << hm1_Iter -> second;
   cout   << "." << endl;

   // This is the member function version of swap
   hm1.swap( hm2 );

   cout << "After swapping with hm2, hash_multimap hm1 is:";
   for ( hm1_Iter = hm1.begin( ); hm1_Iter != hm1.end( ); hm1_Iter++ )
      cout << " " << hm1_Iter -> second;
   cout  << "." << endl;

   // This is the specialized template version of swap
   swap( hm1, hm3 );

   cout << "After swapping with hm3, hash_multimap hm1 is:";
   for ( hm1_Iter = hm1.begin( ); hm1_Iter != hm1.end( ); hm1_Iter++ )
      cout << " " << hm1_Iter -> second;
   cout   << "." << endl;
}
```

```Output
The original hash_multimap hm1 is: 10 20 30.
After swapping with hm2, hash_multimap hm1 is: 100 200.
After swapping with hm3, hash_multimap hm1 is: 300.
```

## <a name="hash_multimapupper_bound"></a><a name="upper_bound"></a> hash_multimap:: upper_bound

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Restituisce un iteratore al primo elemento di un oggetto hash_multimap con una chiave maggiore di quella specificata.

```cpp
iterator upper_bound(const Key& key);

const_iterator upper_bound(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto hash_multimap in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Tipo [iterator](#iterator) o [const_iterator](#const_iterator) che punta alla posizione di un elemento di un oggetto hash_multimap con una chiave maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_multimap se non viene trovata alcuna corrispondenza per la chiave.

Se il valore restituito di `upper_bound` viene assegnato a un `const_iterator`, l'oggetto hash_multimap non può essere modificato. Se il valore restituito di `upper_bound` viene assegnato a un `iterator` , l'oggetto hash_multimap può essere modificato.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

```cpp
// hash_multimap_upper_bound.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1;
   hash_multimap <int, int> :: const_iterator hm1_AcIter, hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );
   hm1.insert ( Int_Pair ( 3, 40 ) );

   hm1_RcIter = hm1.upper_bound( 1 );
   cout << "The 1st element of hash_multimap hm1 with "
        << "a key greater than 1 is: "
        << hm1_RcIter -> second << "." << endl;

   hm1_RcIter = hm1.upper_bound( 2 );
   cout << "The first element of hash_multimap hm1\n"
        << "with a key greater than 2 is: "
        << hm1_RcIter -> second << "." << endl;

   // If no match is found for the key, end( ) is returned
   hm1_RcIter = hm1.lower_bound( 4 );

   if ( hm1_RcIter == hm1.end( ) )
      cout << "The hash_multimap hm1 doesn't have an element "
           << "with a key of 4." << endl;
   else
      cout << "The element of hash_multimap hm1 with a key of 4 is: "
           << hm1_RcIter -> second << "." << endl;

   // The element at a specific location in the hash_multimap can be
   // found using a dereferenced iterator addressing the location
   hm1_AcIter = hm1.begin( );
   hm1_RcIter = hm1.upper_bound( hm1_AcIter -> first );
   cout << "The first element of hm1 with a key greater than"
        << endl << "that of the initial element of hm1 is: "
        << hm1_RcIter -> second << "." << endl;
}
```

```Output
The 1st element of hash_multimap hm1 with a key greater than 1 is: 20.
The first element of hash_multimap hm1
with a key  greater than 2 is: 30.
The hash_multimap hm1 doesn't have an element with a key of 4.
The first element of hm1 with a key greater than
that of the initial element of hm1 is: 20.
```

## <a name="hash_multimapvalue_comp"></a><a name="value_comp"></a> hash_multimap:: value_comp

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

La funzione membro restituisce un oggetto funzione che determina l'ordine degli elementi in un oggetto hash_multimap confrontando i valori delle relative chiavi.

```cpp
value_compare value_comp() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto funzione di confronto che viene usato da un oggetto hash_multimap per ordinare gli elementi.

### <a name="remarks"></a>Osservazioni

Per un hash_multimap *m*, se due elementi *E1* (*K1*, *D1*) ed *E2*(*K2*, *D2*) sono oggetti di tipo [value_type](#value_type), dove *K1* e *K2* sono le chiavi di tipo [key_type](#key_type) e *D1* e *D2* sono i dati di tipo [mapped_type](#mapped_type), quindi `m.value_comp()(e1, e2)` è equivalente a `m.key_comp()(k1, k2)` . Un oggetto archiviato definisce la funzione membro

`bool operator( value_type& left, value_type& right);`

che restituisce **`true`** se il valore della chiave di `left` precede e non è uguale al valore della chiave di `right` nell'ordinamento.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_value_comp.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_multimap <int, int, hash_compare<int, less<int>>> hm1;
   hash_multimap <int, int, hash_compare<int, less<int>>
      >::value_compare vc1 = hm1.value_comp( );
   hash_multimap <int,int>::iterator Iter1, Iter2;

   Iter1= hm1.insert ( hash_multimap <int, int> :: value_type ( 1, 10 ) );
   Iter2= hm1.insert ( hash_multimap <int, int> :: value_type ( 2, 5 ) );

   if( vc1( *Iter1, *Iter2 ) == true )
   {
      cout << "The element ( 1,10 ) precedes the element ( 2,5 )."
           << endl;
   }
   else
   {
      cout << "The element ( 1,10 ) does "
           << "not precede the element ( 2,5 )."
           << endl;
   }

   if( vc1( *Iter2, *Iter1 ) == true )
   {
      cout << "The element ( 2,5 ) precedes the element ( 1,10 )."
           << endl;
   }
   else
   {
      cout << "The element ( 2,5 ) does "
           << "not precede the element ( 1,10 )."
           << endl;
   }
}
```

## <a name="hash_multimapvalue_type"></a><a name="value_type"></a> hash_multimap:: value_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Tipo che rappresenta il tipo di oggetto archiviato in un oggetto hash_multimap.

```cpp
typedef pair<const Key, Type> value_type;
```

### <a name="remarks"></a>Osservazioni

`value_type` viene dichiarato come coppia \<const [key_type](#key_type), [mapped_type](#mapped_type)> e non come coppia \<key_type, mapped_type> perché non è possibile modificare le chiavi di un contenitore associativo utilizzando un iteratore o un riferimento non costante.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_value_type.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef pair <const int, int> cInt2Int;
   hash_multimap <int, int> hm1;
   hash_multimap <int, int> :: key_type key1;
   hash_multimap <int, int> :: mapped_type mapped1;
   hash_multimap <int, int> :: value_type value1;
   hash_multimap <int, int> :: iterator pIter;

   // value_type can be used to pass the correct type
   // explicitly to avoid implicit type conversion
   hm1.insert ( hash_multimap <int, int> :: value_type ( 1, 10 ) );

   // Compare another way to insert objects into a hash_multimap
   hm1.insert ( cInt2Int ( 2, 20 ) );

   // Initializing key1 and mapped1
   key1 = ( hm1.begin( ) -> first );
   mapped1 = ( hm1.begin( ) -> second );

   cout << "The key of first element in the hash_multimap is "
        << key1 << "." << endl;

   cout << "The data value of first element in the hash_multimap is "
        << mapped1 << "." << endl;

   // The following line would cause an error because
   // the value_type is not assignable
   // value1 = cInt2Int ( 4, 40 );

   cout  << "The keys of the mapped elements are:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> second;
   cout << "." << endl;
}
```

```Output
The key of first element in the hash_multimap is 1.
The data value of first element in the hash_multimap is 10.
The keys of the mapped elements are: 1 2.
The values of the mapped elements are: 10 20.
```

## <a name="see-also"></a>Vedere anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
