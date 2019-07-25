---
title: Classe hash_map
ms.date: 11/04/2016
f1_keywords:
- hash_map/stdext::hash_map
- hash_map/stdext::hash_map::allocator_type
- hash_map/stdext::hash_map::const_iterator
- hash_map/stdext::hash_map::const_pointer
- hash_map/stdext::hash_map::const_reference
- hash_map/stdext::hash_map::const_reverse_iterator
- hash_map/stdext::hash_map::difference_type
- hash_map/stdext::hash_map::iterator
- hash_map/stdext::hash_map::key_compare
- hash_map/stdext::hash_map::key_type
- hash_map/stdext::hash_map::mapped_type
- hash_map/stdext::hash_map::pointer
- hash_map/stdext::hash_map::reference
- hash_map/stdext::hash_map::reverse_iterator
- hash_map/stdext::hash_map::size_type
- hash_map/stdext::hash_map::value_type
- hash_map/stdext::hash_map::at
- hash_map/stdext::hash_map::begin
- hash_map/stdext::hash_map::cbegin
- hash_map/stdext::hash_map::cend
- hash_map/stdext::hash_map::clear
- hash_map/stdext::hash_map::count
- hash_map/stdext::hash_map::crbegin
- hash_map/stdext::hash_map::crend
- hash_map/stdext::hash_map::emplace
- hash_map/stdext::hash_map::emplace_hint
- hash_map/stdext::hash_map::empty
- hash_map/stdext::hash_map::end
- hash_map/stdext::hash_map::equal_range
- hash_map/stdext::hash_map::erase
- hash_map/stdext::hash_map::find
- hash_map/stdext::hash_map::get_allocator
- hash_map/stdext::hash_map::insert
- hash_map/stdext::hash_map::key_comp
- hash_map/stdext::hash_map::lower_bound
- hash_map/stdext::hash_map::max_size
- hash_map/stdext::hash_map::rbegin
- hash_map/stdext::hash_map::rend
- hash_map/stdext::hash_map::size
- hash_map/stdext::hash_map::swap
- hash_map/stdext::hash_map::upper_bound
- hash_map/stdext::hash_map::value_comp
helpviewer_keywords:
- stdext::hash_map
- stdext::hash_map::allocator_type
- stdext::hash_map::const_iterator
- stdext::hash_map::const_pointer
- stdext::hash_map::const_reference
- stdext::hash_map::const_reverse_iterator
- stdext::hash_map::difference_type
- stdext::hash_map::iterator
- stdext::hash_map::key_compare
- stdext::hash_map::key_type
- stdext::hash_map::mapped_type
- stdext::hash_map::pointer
- stdext::hash_map::reference
- stdext::hash_map::reverse_iterator
- stdext::hash_map::size_type
- stdext::hash_map::value_type
- stdext::hash_map::at
- stdext::hash_map::begin
- stdext::hash_map::cbegin
- stdext::hash_map::cend
- stdext::hash_map::clear
- stdext::hash_map::count
- stdext::hash_map::crbegin
- stdext::hash_map::crend
- stdext::hash_map::emplace
- stdext::hash_map::emplace_hint
- stdext::hash_map::empty
- stdext::hash_map::end
- stdext::hash_map::equal_range
- stdext::hash_map::erase
- stdext::hash_map::find
- stdext::hash_map::get_allocator
- stdext::hash_map::insert
- stdext::hash_map::key_comp
- stdext::hash_map::lower_bound
- stdext::hash_map::max_size
- stdext::hash_map::rbegin
- stdext::hash_map::rend
- stdext::hash_map::size
- stdext::hash_map::swap
- stdext::hash_map::upper_bound
- stdext::hash_map::value_comp
ms.assetid: 40879dfc-51ba-4a59-9f9e-26208de568a8
ms.openlocfilehash: cc63bd89b732a0cf4d95dcd4103bfa7cf54e44cc
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68448787"
---
# <a name="hashmap-class"></a>Classe hash_map

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Archivia e recupera i dati rapidamente da una raccolta in cui ogni elemento è una coppia che ha una chiave di ordinamento con valore univoco e un valore di dati associato.

## <a name="syntax"></a>Sintassi

```cpp
template <class Key,
    class Type,
    class Traits=hash_compare<Key, less<Key>>,
    class Allocator=allocator<pair <const Key, Type>>>
class hash_map
```

### <a name="parameters"></a>Parametri

*Chiave*\
Tipo di dati relativo alle chiavi da archiviare in hash_map.

*Tipo*\
Tipo di dati relativo agli elementi da archiviare in hash_map.

*Tratti*\
Tipo che include due oggetti funzione, uno della classe compare, in grado di confrontare due valori di elemento come chiavi di ordinamento per determinarne l'ordine relativo, e una funzione hash che corrisponde a un predicato unario che esegue il mapping di valori di chiave degli elementi a valori Unsigned Integer di tipo `size_t`. Questo argomento è facoltativo e hash_compare <`Key`, less <`Key`> > è il valore predefinito.

*Allocatore*\
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione di hash_map e alla deallocazione della memoria. Questo argomento è facoltativo e il valore predefinito è allocator<pair <const `Key`, `Type`>>.

## <a name="remarks"></a>Note

Il valore per hash_map è:

- Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata.

- Reversibile, in quanto fornisce un iteratore bidirezionale per accedere ai relativi elementi.

- Con hash, poiché i rispettivi elementi sono raggruppati in bucket in base al valore di una funzione hash applicata ai valori di chiave degli elementi.

- Univoco nel senso che ogni elemento deve disporre di una chiave univoca.

- Un contenitore associativo di coppie, in quanto i valori dei dati degli elementi sono diversi dai valori delle relative chiavi.

- Una classe modello, poiché la funzionalità che fornisce è generica e completamente indipendente dal tipo specifico di dati contenuti come elementi o chiavi. I tipi di dati da utilizzare per gli elementi e le chiavi vengono invece specificati come parametri nel modello di classe i insieme alla funzione di confronto e all'allocatore.

Il vantaggio principale dell'hashing rispetto all'ordinamento è costituito da una maggiore efficienza. Un hashing corretto esegue inserimenti, eliminazioni e ricerche in un tempo medio costante rispetto al tempo proporzionale al logaritmo del numero di elementi nel contenitore per le tecniche di ordinamento. Il valore di un elemento di un hash_map, a differenza del valore della chiave associata, può essere direttamente modificato. I valori invece delle chiavi associati a elementi precedenti devono essere eliminati e i valori delle nuove chiavi devono essere associati ai nuovi elementi inseriti.

La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. I contenitori associativi con hash sono ottimizzati per le operazioni di ricerca, inserimento e rimozione. Le funzioni membro che supportano in modo esplicito queste operazioni risultano efficienti quando vengono usate con una funzione hash ben progettata, poiché eseguono le operazioni in un tempo mediamente costante e non dipendente dal numero di elementi nel contenitore. Una funzione hash ben progettata produce una distribuzione uniforme di valori con hash e riduce al minimo i numeri di conflitti. Un conflitto si verifica quando viene eseguito il mapping di valori di chiave distinti allo stesso valore con hash. Nella peggiore delle ipotesi, con la peggiore funzione hash possibile, il numero di operazioni è proporzionale al numero di elementi della sequenza (tempo lineare).

hash_map deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione. Un modello relativo a questo tipo di struttura è costituito da un elenco ordinato di parole chiave univoche con valori di stringa associati che forniscono, ad esempio, definizioni. Se, invece, le parole hanno più di una definizione corretta e quindi le chiavi non sono univoche, è opportuno scegliere il contenitore hash_multimap. Se invece è stato archiviato solo l'elenco di parole, il contenitore appropriato è rappresentato da un hash_set. Se sono state consentite più occorrenze delle parole, la struttura di contenitore appropriata è il hash_multiset.

Hash_map Ordina la sequenza da esso controllata chiamando un oggetto di *tratti* hash archiviato della classe [value_compare](../standard-library/value-compare-class.md). È possibile accedere a questo oggetto archiviato chiamando la funzione membro [key_comp](#key_comp). Un oggetto funzione di questo tipo deve comportarsi come un oggetto della classe [hash_compare](../standard-library/hash-compare-class.md)<Key, less\<Key>>. In particolare, per tutti i valori *Key* di tipo *Key*, `Traits`la `Key` chiamata () produce una distribuzione di valori di `size_t`tipo.

In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti (ovvero che uno non è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard. Un predicato binario f (x y) è un oggetto funzione che ha due `x` oggetti `y` argomento e e un valore restituito **true** o **false**. Un ordinamento imposto a un hash_map è un ordinamento di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti x e y vengono definiti equivalenti quando sia f(x, y) che f(y, x) sono false. Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.

L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di ordinamento e dalle dimensioni correnti della tabella hash archiviata nell'oggetto contenitore. Non è possibile determinare le dimensioni correnti della tabella hash, quindi non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata. L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.

L'iteratore fornito dalla classe hash_map è un iteratore bidirezionale, ma le funzioni membro [insert](#insert) e [hash_map](#hash_map) della classe hanno versioni che accettano come parametri di modello un iteratore di input più debole, i cui requisiti di funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali. I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità. Ogni concetto di iteratore dispone di un proprio set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore. Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza. Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori `[First, Last)` nel contesto delle funzioni membro della classe.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[hash_map](#hash_map)|Costruisce un `hash_map` vuoto o che rappresenta una copia totale o parziale di un altro `hash_map`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|DESCRIZIONE|
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto `hash_map`.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `hash_map`.|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un elemento **const** in un `hash_map`oggetto.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un elemento **const** archiviato in un `hash_map` oggetto per la lettura e l'esecuzione di operazioni **const** .|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi  elemento const in `hash_map`.|
|[difference_type](#difference_type)|Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un `hash_map` in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|
|[iterator](#iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un `hash_map`.|
|[key_compare](#key_compare)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `hash_map`.|
|[key_type](#key_type)|Tipo che descrive l'oggetto chiave di ordinamento di cui è costituito ogni elemento del `hash_map`.|
|[mapped_type](#mapped_type)|Tipo che rappresenta il tipo di dati archiviati in un `hash_map`.|
|[pointer](#pointer)|Tipo che fornisce un puntatore a un elemento in un `hash_map`.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento archiviato in un `hash_map`.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un `hash_map` invertito.|
|[size_type](#size_type)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `hash_map`.|
|[value_type](#value_type)|Tipo che fornisce un oggetto funzione in grado di confrontare due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel `hash_map`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[at](#at)|Trova un elemento in un `hash_map` con un valore di chiave specificato.|
|[begin](#begin)|Restituisce un iteratore che punta al primo elemento del `hash_map`.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento del `hash_map`.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `hash_map`.|
|[clear](#clear)|Cancella tutti gli elementi di un `hash_map`.|
|[count](#count)|Restituisce il numero di elementi di un `hash_map` la cui chiave corrisponde a una chiave specificata dal parametro.|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di un `hash_map` invertito.|
|[crend](#crend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set `hash_map` invertito.|
|[emplace](#emplace)|Inserisce un elemento costruito sul posto in un `hash_map`.|
|[emplace_hint](#emplace_hint)|Inserisce un elemento costruito sul posto in un `hash_map`, con un suggerimento sulla posizione.|
|[empty](#empty)|Verifica se un `hash_map` è vuoto.|
|[end](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_map`.|
|[equal_range](#equal_range)|Restituisce una coppia di iteratori rispettivamente al primo elemento di un `hash_map` con una chiave maggiore di una chiave specificata e al primo elemento di `hash_map` con una chiave uguale o maggiore di tale chiave.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi di un `hash_map` dalle posizioni specificate.|
|[find](#find)|Restituisce un iteratore che punta alla posizione di un elemento in un `hash_map` che dispone di una chiave equivalente a una chiave specificata.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `hash_map`.|
|[insert](#insert)|Inserisce un elemento o un intervallo di elementi in un `hash_map`.|
|[key_comp](#key_comp)|Restituisce un iteratore al primo elemento di un `hash_map` con un valore della chiave uguale o maggiore di quello di una chiave specificata.|
|[lower_bound](#lower_bound)|Restituisce un iteratore al primo elemento di un `hash_map` con un valore della chiave uguale o maggiore di quello di una chiave specificata.|
|[max_size](#max_size)|Restituisce la lunghezza massima del `hash_map`.|
|[rbegin](#rbegin)|Restituisce un iteratore che punta al primo elemento di un `hash_map` invertito.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_map` invertito.|
|[size](#size)|Restituisce il numero di elementi nel `hash_map`.|
|[swap](#swap)|Scambia gli elementi di due `hash_map`.|
|[upper_bound](#upper_bound)|Restituisce un iteratore al primo elemento di un `hash_map` con un valore della chiave maggiore di quello di una chiave specificata.|
|[value_comp](#value_comp)|Recupera una copia dell'oggetto di confronto usato per ordinare i valori degli elementi di un `hash_map`.|

### <a name="operators"></a>Operatori

|Operator|DESCRIZIONE|
|-|-|
|[operator&#91;&#93;](#op_at)|Inserisce un elemento in un `hash_map` con un valore di chiave specificato.|
|[hash_map::operator=](#op_eq)|Sostituisce gli elementi di un `hash_map` con una copia di un altro `hash_map`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<hash_map>

**Spazio dei nomi:** stdext

## <a name="allocator_type"></a>  hash_map::allocator_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che rappresenta la classe allocator per l'oggetto hash_map.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::allocator_type allocator_type;
```

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get_allocator](#get_allocator) per indicazioni su come usare `allocator_type`.

## <a name="at"></a>  hash_map::at

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Trova un elemento in una classe hash_map con un valore di chiave specificato.

```cpp
Type& at(const Key& key);

const Type& at(const Key& key) const;
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|-|-|
|*key*|Valore della chiave dell'elemento da trovare.|

### <a name="return-value"></a>Valore restituito

Riferimento al valore dei dati dell'elemento trovato.

### <a name="remarks"></a>Note

Se non viene trovato il valore della chiave dell'argomento, la funzione genera un oggetto della [classe out_of_range](../standard-library/out-of-range-class.md).

### <a name="example"></a>Esempio

```cpp
// hash_map_at.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef pair <const int, int> cInt2Int;
   hash_map <int, int> hm1;

   // Insert data values
   hm1.insert ( cInt2Int ( 1, 10 ) );
   hm1.insert ( cInt2Int ( 2, 20 ) );
   hm1.insert ( cInt2Int ( 3, 30 ) );

   cout  << "The values of the mapped elements are:";
   for ( int i = 1 ; i <= hm1.size() ; i++ )
      cout << " " << hm1.at(i);
   cout << "." << endl;
}
```

## <a name="begin"></a>  hash_map::begin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore che punta al primo elemento dell'oggetto hash_map.

```cpp
const_iterator begin() const;

iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta al primo elemento dell'oggetto hash_map o alla posizione successiva a un oggetto hash_map vuoto.

### <a name="example"></a>Esempio

```cpp
// hash_map_begin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: iterator hm1_Iter;
   hash_map <int, int> :: const_iterator hm1_cIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 0, 0 ) );
   hm1.insert ( Int_Pair ( 1, 1 ) );
   hm1.insert ( Int_Pair ( 2, 4 ) );

   hm1_cIter = hm1.begin ( );
   cout << "The first element of hm1 is "
        << hm1_cIter -> first << "." << endl;

   hm1_Iter = hm1.begin ( );
   hm1.erase ( hm1_Iter );

   // The following 2 lines would err because the iterator is const
   // hm1_cIter = hm1.begin ( );
   // hm1.erase ( hm1_cIter );

   hm1_cIter = hm1.begin( );
   cout << "The first element of hm1 is now "
        << hm1_cIter -> first << "." << endl;
}
```

```Output
The first element of hm1 is 0.
The first element of hm1 is now 1.
```

## <a name="cbegin"></a>  hash_map::cbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore const che punta al primo elemento dell'oggetto hash_map.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Un iteratore bidirezionale const che punta al primo elemento dell'oggetto [hash_map](../standard-library/hash-map-class.md) o alla posizione successiva a un oggetto `hash_map` vuoto.

### <a name="example"></a>Esempio

```cpp
// hash_map_cbegin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: const_iterator hm1_cIter;
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

## <a name="cend"></a>  hash_map::cend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto hash_map.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const che punta alla posizione successiva all'ultimo elemento di un oggetto [hash_map](../standard-library/hash-map-class.md). Se l'oggetto `hash_map` è vuoto, `hash_map::cend == hash_map::begin`.

### <a name="remarks"></a>Note

`cend` viene usato per verificare se un iteratore ha raggiunto la fine del relativo oggetto `hash_map`.

Non è consigliabile dereferenziare il valore restituito da `cend`.

### <a name="example"></a>Esempio

```cpp
// hash_map_cend.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: const_iterator hm1_cIter;
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

## <a name="clear"></a>  hash_map::clear

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Cancella tutti gli elementi di un hash_map.

```cpp
void clear();
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro hash_map::clear.

```cpp
// hash_map_clear.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int> hm1;
    hash_map<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 1));
    hm1.insert(Int_Pair(2, 4));

    i = hm1.size();
    cout << "The size of the hash_map is initially "
         << i << "." << endl;

    hm1.clear();
    i = hm1.size();
    cout << "The size of the hash_map after clearing is "
         << i << "." << endl;
}
```

```Output
The size of the hash_map is initially 2.
The size of the hash_map after clearing is 0.
```

## <a name="const_iterator"></a>  hash_map::const_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento **const** dell'oggetto hash_map.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_iterator const_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.

L' `const_iterator` oggetto definito da hash_map punta a elementi che sono oggetti di [value_type](#value_type), ovvero di tipo `pair< const Key, Type >`, il cui primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato incluso nell'elemento.

Per dereferenziare `const_iterator` un oggetto `cIter` che punta a un elemento in un oggetto `->` hash_map, usare l'operatore.

Per accedere al valore della chiave per l'elemento, usare `cIter->first`, che equivale a. `(*cIter).first` Per accedere al valore del punto di riferimento mappato per l'elemento `cIter->second`, usare, che equivale `(*cIter).second`a.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [begin](#begin) per indicazioni su come usare `const_iterator`.

## <a name="const_pointer"></a>  hash_map::const_pointer

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che fornisce un puntatore a un elemento **const** di un oggetto hash_map.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_pointer const_pointer;
```

### <a name="remarks"></a>Note

Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto hash_map.

## <a name="const_reference"></a>  hash_map::const_reference

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che fornisce un riferimento a un elemento **const** archiviato in un oggetto hash_map per la lettura e l'esecuzione di operazioni **const**.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_reference const_reference;
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_map_const_ref.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map<int, int> hm1;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( hm1.begin( ) -> first );

   // The following line would cause an error because the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( hm1.begin( ) -> first );

   cout << "The key of the first element in the hash_map is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( hm1.begin( ) -> second );

   cout << "The data value of the first element in the hash_map is "
        << Ref2 << "." << endl;
}
```

```Output
The key of the first element in the hash_map is 1.
The data value of the first element in the hash_map is 10.
```

## <a name="const_reverse_iterator"></a>  hash_map::const_reverse_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento **const** dell'oggetto hash_map.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_reverse)iterator const_reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto hash_map in ordine inverso.

Il tipo `const_reverse_iterator` definito da hash_map punta a elementi che sono oggetti di [value_type](#value_type), ovvero di tipo `pair`\< **const Key, Type**>, dove il primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato incluso nell'elemento.

Per dereferenziare `const_reverse_iterator` un oggetto `crIter` che punta a un elemento in un oggetto **->** hash_map, usare l'operatore.

Per accedere al valore della chiave per l'elemento, usare `crIter` -> **first**, che equivale a (\* `crIter`) **.first**. Per accedere al valore del punto di riferimento mappato per l'elemento, usare `crIter` -> **second**, che equivale a (\* `crIter`). **first**.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rend](#rend) per indicazioni su come dichiarare e usare `const_reverse_iterator`.

## <a name="count"></a>  hash_map::count

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce il numero di elementi in un oggetto hash_map la cui chiave corrisponde a una chiave specificata dal parametro.

```cpp
size_type count(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Valore della chiave degli elementi per cui trovare un corrispondenza nell'oggetto hash_map.

### <a name="return-value"></a>Valore restituito

1 se hash_map contiene un elemento la cui chiave di ordinamento corrispondere alla chiave del parametro. 0 se hash_map non contiene un elemento con una chiave corrispondente.

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di elementi *x* nell'intervallo

\[lower_bound (*chiave*), upper_bound (*chiave*))

corrispondente a 0 o 1 nel caso di hash_map, che è un contenitore associativo univoco.

### <a name="example"></a>Esempio

L'esempio seguente mostra l'uso della funzione membro hash_map::count.

```cpp
// hash_map_count.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int> hm1;
    hash_map<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair (1, 1));
    hm1.insert(Int_Pair (2, 1));
    hm1.insert(Int_Pair (1, 4));
    hm1.insert(Int_Pair (2, 1));

    // Keys must be unique in hash_map, so duplicates are ignored
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
The number of elements in hm1 with a sort key of 1 is: 1.
The number of elements in hm1 with a sort key of 2 is: 1.
The number of elements in hm1 with a sort key of 3 is: 0.
```

## <a name="crbegin"></a>  hash_map::crbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore const che punta al primo elemento di un oggetto hash_map invertito.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta al primo elemento di un oggetto [hash_map](../standard-library/hash-map-class.md) invertito o a quello che è stato l'ultimo elemento dell'oggetto `hash_map` non invertito.

### <a name="remarks"></a>Note

`crbegin` viene usato con un oggetto hash_map invertito proprio come [begin](#begin) viene usato con un oggetto `hash_map`.

Con il valore restituito di `crbegin`, l'oggetto `hash_map` non può essere modificato.

`crbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto `hash_map`.

### <a name="example"></a>Esempio

```cpp
// hash_map_crbegin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_crIter = hm1.crbegin( );
   cout << "The first element of the reversed hash_map hm1 is "
        << hm1_crIter -> first << "." << endl;
}
```

```Output
The first element of the reversed hash_map hm1 is 3.
```

## <a name="crend"></a>  hash_map::crend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un oggetto hash_map invertito.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale const inverso che punta alla posizione successiva all'ultimo elemento di un oggetto [hash_map](../standard-library/hash-map-class.md) invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto `hash_map` non invertito.

### <a name="remarks"></a>Note

`crend` viene usato con un oggetto `hash_map` invertito proprio come [hash_map::end](#end) viene usato con un oggetto `hash_map`.

Con il valore restituito di `crend`, l'oggetto `hash_map` non può essere modificato.

`crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine dell'oggetto `hash_map`.

Non è consigliabile dereferenziare il valore restituito da `crend`.

### <a name="example"></a>Esempio

```cpp
// hash_map_crend.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_crIter = hm1.crend( );
   hm1_crIter--;
   cout << "The last element of the reversed hash_map hm1 is "
        << hm1_crIter -> first << "." << endl;
}
```

```Output
The last element of the reversed hash_map hm1 is 3.
```

## <a name="difference_type"></a>  hash_map::difference_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo Signed Integer che può essere usato per rappresentare il numero di elementi di un oggetto hash_map in un intervallo compreso tra gli elementi a cui puntano gli iteratori.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::difference_type difference_type;
```

### <a name="example"></a>Esempio

```cpp
// hash_map_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <hash_map>
#include <algorithm>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 3, 20 ) );

   // The following won't insert, because map keys are unique
   hm1.insert ( Int_Pair ( 2, 30 ) );

   hash_map <int, int>::iterator hm1_Iter, hm1_bIter, hm1_eIter;
   hm1_bIter = hm1.begin( );
   hm1_eIter = hm1.end( );

   // Count the number of elements in a hash_map
   hash_map <int, int>::difference_type  df_count = 0;
   hm1_Iter = hm1.begin( );
   while ( hm1_Iter != hm1_eIter)
   {
      df_count++;
      hm1_Iter++;
   }

   cout << "The number of elements in the hash_map hm1 is: "
        << df_count << "." << endl;

   cout  << "The keys of the mapped elements are:";
   for ( hm1_Iter= hm1.begin( ) ; hm1_Iter!= hm1.end( ) ;
         hm1_Iter++)
      cout << " " << hm1_Iter-> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are:";
   for ( hm1_Iter= hm1.begin( ) ; hm1_Iter!= hm1.end( ) ;
         hm1_Iter++)
      cout << " " << hm1_Iter-> second;
   cout << "." << endl;
}
```

```Output
The number of elements in the hash_map hm1 is: 3.
The keys of the mapped elements are: 1 2 3.
The values of the mapped elements are: 10 20 20.
```

## <a name="emplace"></a>  hash_map::emplace

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Inserisce un elemento costruito sul posto in un oggetto hash_map.

```cpp
template <class ValTy>
pair <iterator, bool>
emplace(
    ValTy&& val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*val*|Valore usato per eseguire move-contruct su un elemento da inserire nell'oggetto [hash_map](../standard-library/hash-map-class.md), a meno che `hash_map` non contenga già tale elemento o, più in generale, un elemento la cui chiave sia ordinata in modo equivalente.|

### <a name="return-value"></a>Valore restituito

La funzione membro `emplace` restituisce una coppia il cui componente bool restituisce true se è stato effettuato un inserimento e false se nell'oggetto `hash_map` è già contenuto un elemento con le caratteristiche seguenti: la chiave dell'elemento ha un valore equivalente nell'ordinamento e il relativo componente iterator restituisce l'indirizzo in cui è stato inserito un nuovo elemento o in cui si trovava già l'elemento.

Per accedere al componente iterator di una coppia `pr` restituita da questa funzione membro, usare `pr.first` e per dereferenziarlo, usare `*(pr.first)`. Per accedere al componente **bool** di una coppia `pr` restituita da questa funzione membro, `pr.second`usare e per dereferenziarlo, usare `*(pr.second)`.

### <a name="remarks"></a>Note

L'oggetto [hash_map::value_type](#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

### <a name="example"></a>Esempio

```cpp
// hash_map_emplace.cpp
// compile with: /EHsc
#include<hash_map>
#include<iostream>
#include <string>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, string> hm1;
    typedef pair<int, string> is1(1, "a");

    hm1.emplace(move(is1));
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

## <a name="emplace_hint"></a>  hash_map::emplace_hint

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Inserisce un elemento costruito sul posto in un oggetto hash_map, con un suggerimento sulla posizione.

```cpp
template <class ValTy>
iterator emplace_hint(
    const_iterator _Where,
    ValTy&& val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*val*|Valore usato per eseguire move-contruct su un elemento da inserire nell'oggetto [hash_map](../standard-library/hash-map-class.md), a meno che `hash_map` non contenga già tale elemento o, più in generale, un elemento la cui chiave sia ordinata in modo equivalente.|
|*_Where*|Suggerimento sulla posizione per avviare la ricerca del punto di inserimento corretto.|

### <a name="return-value"></a>Valore restituito

La funzione membro [hash_multimap::emplace](../standard-library/hash-multimap-class.md#emplace) restituisce un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito nell'oggetto `hash_map` o in cui si trova l'elemento esistente con ordinamento equivalente.

### <a name="remarks"></a>Note

L'oggetto [hash_map::value_type](#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

L'inserimento può essere eseguito in un tempo costante ammortizzato, anziché in un'ora logaritmica, se il punto di inserimento segue immediatamente *_Where*.

### <a name="example"></a>Esempio

```cpp
// hash_map_emplace_hint.cpp
// compile with: /EHsc
#include<hash_map>
#include<iostream>
#include <string>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, string> hm1;
    typedef pair<int, string> is1(1, "a");

    hm1.emplace(hm1.begin(), move(is1));
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

## <a name="empty"></a>  hash_map::empty

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Verifica se un oggetto hash_map è vuoto.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto hash_map è vuoto; in caso contrario, **false**.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_map_empty.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1, hm2;

   typedef pair <int, int> Int_Pair;
   hm1.insert ( Int_Pair ( 1, 1 ) );

   if ( hm1.empty( ) )
      cout << "The hash_map hm1 is empty." << endl;
   else
      cout << "The hash_map hm1 is not empty." << endl;

   if ( hm2.empty( ) )
      cout << "The hash_map hm2 is empty." << endl;
   else
      cout << "The hash_map hm2 is not empty." << endl;
}
```

```Output
The hash_map hm1 is not empty.
The hash_map hm2 is empty.
```

## <a name="end"></a>  hash_map::end

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto hash_map.

```cpp
const_iterator end() const;

iterator end();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta alla posizione successiva all'ultimo elemento di un oggetto hash_map. Se l'oggetto hash_map è vuoto, hash_map::end == hash_map::begin.

### <a name="remarks"></a>Note

`end`viene usato per verificare se un iteratore ha raggiunto la fine del relativo oggetto hash_map.

Non è consigliabile dereferenziare il valore restituito da `end`.

### <a name="example"></a>Esempio

```cpp
// hash_map_end.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: iterator hm1_Iter;
   hash_map <int, int> :: const_iterator hm1_cIter;
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

## <a name="equal_range"></a>  hash_map::equal_range

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce una coppia di iteratori rispettivamente al primo elemento di un oggetto hash_map con una chiave maggiore di una chiave specificata e al primo elemento dell'oggetto hash_map con una chiave uguale o maggiore di tale chiave.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### <a name="parameters"></a>Parametri

*chiave*\
Valore della chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto hash_map in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Coppia di iteratori in cui il primo è l'elemento [lower_bound](#lower_bound) e il secondo è l'elemento [upper_bound](#upper_bound) della chiave.

Per accedere al primo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **first** e per dereferenziare l'iteratore del limite inferiore, usare \*( `pr`. **first**). Per accedere al secondo iteratore di una coppia `pr` restituita dalla funzione membro, usare `pr`. **second** e per dereferenziare l'iteratore del limite superiore, usare \*( `pr`. **second**).

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_map_equal_range.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef hash_map <int, int> IntMap;
   IntMap hm1;
   hash_map <int, int> :: const_iterator hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   pair <IntMap::const_iterator, IntMap::const_iterator> p1, p2;
   p1 = hm1.equal_range( 2 );

   cout << "The lower bound of the element with "
        << "a key of 2 in the hash_map hm1 is: "
        << p1.first -> second << "." << endl;

   cout << "The upper bound of the element with "
        << "a key of 2 in the hash_map hm1 is: "
        << p1.second -> second << "." << endl;

   // Compare the upper_bound called directly
   hm1_RcIter = hm1.upper_bound( 2 );

   cout << "A direct call of upper_bound( 2 ) gives "
        << hm1_RcIter -> second << "," << endl
        << "matching the 2nd element of the pair"
        << " returned by equal_range( 2 )." << endl;

   p2 = hm1.equal_range( 4 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == hm1.end( ) ) && ( p2.second == hm1.end( ) ) )
      cout << "The hash_map hm1 doesn't have an element "
             << "with a key less than 40." << endl;
   else
      cout << "The element of hash_map hm1 with a key >= 40 is: "
           << p1.first -> first << "." << endl;
}
```

```Output
The lower bound of the element with a key of 2 in the hash_map hm1 is: 20.
The upper bound of the element with a key of 2 in the hash_map hm1 is: 30.
A direct call of upper_bound( 2 ) gives 30,
matching the 2nd element of the pair returned by equal_range( 2 ).
The hash_map hm1 doesn't have an element with a key less than 40.
```

## <a name="erase"></a>  hash_map::erase

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Rimuove un elemento o un intervallo di elementi in un hash_map dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.

```cpp
iterator erase(iterator _Where);

iterator erase(iterator first, iterator last);

size_type erase(const key_type& key);
```

### <a name="parameters"></a>Parametri

*_Where*\
Posizione dell'elemento da rimuovere dall'hash_map.

*prima*\
Posizione del primo elemento rimosso dall'hash_map.

*Ultima*\
Posizione oltre l'ultimo elemento rimosso dall'hash_map.

*chiave*\
La chiave degli elementi da rimuovere dall'hash_map.

### <a name="return-value"></a>Valore restituito

Per le prime due funzioni, iteratore bidirezionale che definisce il primo elemento rimanente successivo a tutti gli elementi eliminati o un puntatore al termine dell'hash_map se tali elementi non sono presenti.

Per la terza funzione membro, restituisce il numero di elementi rimossi dall'hash_map.

### <a name="remarks"></a>Note

Le funzioni membro non generano mai un'eccezione.

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro hash_map::erase.

```cpp
// hash_map_erase.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int> hm1, hm2, hm3;
    hash_map<int, int> :: iterator pIter, Iter1, Iter2;
    int i;
    hash_map<int, int>::size_type n;
    typedef pair<int, int> Int_Pair;

    for (i = 1; i < 5; i++)
    {
        hm1.insert(Int_Pair (i, i));
        hm2.insert(Int_Pair (i, i*i));
        hm3.insert(Int_Pair (i, i-1));
    }

    // The 1st member function removes an element at a given position
    Iter1 = ++hm1.begin();
    hm1.erase(Iter1);

    cout << "After the 2nd element is deleted, the hash_map hm1 is:";
    for (pIter = hm1.begin(); pIter != hm1.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;

    // The 2nd member function removes elements
    // in the range [ first,  last)
    Iter1 = ++hm2.begin();
    Iter2 = --hm2.end();
    hm2.erase(Iter1, Iter2);

    cout << "After the middle two elements are deleted, "
         << "the hash_map hm2 is:";
    for (pIter = hm2.begin(); pIter != hm2.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;

    // The 3rd member function removes elements with a given  key
    n = hm3.erase(2);

    cout << "After the element with a key of 2 is deleted,\n"
         << "the hash_map hm3 is:";
    for (pIter = hm3.begin(); pIter != hm3.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;

    // The 3rd member function returns the number of elements removed
    cout << "The number of elements removed from hm3 is: "
         << n << "." << endl;

    // The dereferenced iterator can also be used to specify a key
    Iter1 = ++hm3.begin();
    hm3.erase(Iter1);

    cout << "After another element with a key equal to that"
         << endl;
    cout  << "of the 2nd element is deleted, "
          << "the hash_map hm3 is:";
    for (pIter = hm3.begin(); pIter != hm3.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;
}
```

```Output
After the 2nd element is deleted, the hash_map hm1 is: 1 3 4.
After the middle two elements are deleted, the hash_map hm2 is: 1 16.
After the element with a key of 2 is deleted,
the hash_map hm3 is: 0 2 3.
The number of elements removed from hm3 is: 1.
After another element with a key equal to that
of the 2nd element is deleted, the hash_map hm3 is: 0 3.
```

## <a name="find"></a>  hash_map::find

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore che punta alla posizione di un elemento in un oggetto hash_map che dispone di una chiave equivalente a una chiave specificata.

```cpp
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Valore della chiave per cui trovare una corrispondenza in base alla chiave di ordinamento di un elemento presente nell'oggetto hash_map in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Iteratore che punta alla posizione di un elemento con una chiave specificata o alla posizione successiva all'ultimo elemento dell'oggetto hash_map se non viene trovata alcuna corrispondenza per la chiave.

### <a name="remarks"></a>Note

`find`Restituisce un iteratore che punta a un elemento dell'oggetto hash_map la cui chiave di ordinamento è equivalente alla chiave dell'argomento in un predicato binario che provoca un ordinamento basato su una relazione di comparabilità minore di.

Se il valore restituito di `find` viene assegnato a un [const_iterator](#const_iterator), l'oggetto hash_map non può essere modificato. Se il valore restituito di `find` viene assegnato a un [iterator](#iterator), l'oggetto hash_map può essere modificato.

### <a name="example"></a>Esempio

```cpp
// hash_map_find.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   hash_map <int, int> :: const_iterator hm1_AcIter, hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_RcIter = hm1.find( 2 );
   cout << "The element of hash_map hm1 with a key of 2 is: "
        << hm1_RcIter -> second << "." << endl;

   // If no match is found for the key, end( ) is returned
   hm1_RcIter = hm1.find( 4 );

   if ( hm1_RcIter == hm1.end( ) )
      cout << "The hash_map hm1 doesn't have an element "
           << "with a key of 4." << endl;
   else
      cout << "The element of hash_map hm1 with a key of 4 is: "
           << hm1_RcIter -> second << "." << endl;

   // The element at a specific location in the hash_map can be found
   // using a dereferenced iterator addressing the location
   hm1_AcIter = hm1.end( );
   hm1_AcIter--;
   hm1_RcIter = hm1.find( hm1_AcIter -> first );
   cout << "The element of hm1 with a key matching "
        << "that of the last element is: "
        << hm1_RcIter -> second << "." << endl;
}
```

```Output
The element of hash_map hm1 with a key of 2 is: 20.
The hash_map hm1 doesn't have an element with a key of 4.
The element of hm1 with a key matching that of the last element is: 30.
```

## <a name="get_allocator"></a>  hash_map::get_allocator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce una copia dell'oggetto allocatore usato per costruire l'oggetto hash_map.

```cpp
Allocator get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dall'oggetto hash_map.

### <a name="remarks"></a>Note

Gli allocatori per la classe hash_map specificano il modo in cui la classe gestisce la memoria. Gli allocatori predefiniti acclusi alle classi contenitore della libreria standard C++ sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// hash_map_get_allocator.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int>::allocator_type hm1_Alloc;
   hash_map <int, int>::allocator_type hm2_Alloc;
   hash_map <int, double>::allocator_type hm3_Alloc;
   hash_map <int, int>::allocator_type hm4_Alloc;

   // The following lines declare objects
   // that use the default allocator.
   hash_map <int, int> hm1;
   hash_map <int, int> hm2;
   hash_map <int, double> hm3;

   hm1_Alloc = hm1.get_allocator( );
   hm2_Alloc = hm2.get_allocator( );
   hm3_Alloc = hm3.get_allocator( );

   cout << "The number of integers that can be allocated"
        << endl << "before free memory is exhausted: "
        << hm2.max_size( ) << "." << endl;

   cout << "The number of doubles that can be allocated"
        << endl << "before free memory is exhausted: "
        << hm3.max_size( ) <<  "." << endl;

   // The following line creates a hash_map hm4
   // with the allocator of hash_map hm1.
   hash_map <int, int> hm4( less<int>( ), hm1_Alloc );

   hm4_Alloc = hm4.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated with the other
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

## <a name="hash_map"></a>  hash_map::hash_map

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Costruisce un oggetto hash_map vuoto o che rappresenta una copia totale o parziale di un altro oggetto hash_map.

```cpp
hash_map();

explicit hash_map(
    const Traits& Comp);

hash_map(
    const Traits& Comp,
    const Allocator& Al);

hash_map(
    const hash_map& Right);

hash_map(
    hash_map&& Right);

hash_map(
    initializer_list<Type> IList);hash_map(initializer_list<Type> IList,
    const key_compare& Comp);

hash_map(
    initializer_list<Type> IList,
    const key_compare& Comp,
    const allocator_type& Al);

template <class InputIterator>
hash_map(
    InputIterator First,
    InputIterator Last);

template <class InputIterator>
hash_map(
    InputIterator First,
    InputIterator Last,
    const Traits& Comp);

template <class InputIterator>
hash_map(
    InputIterator First,
    InputIterator Last,
    const Traits& Comp,
    const Allocator& Al
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*Al*|Classe dell'allocatore di archiviazione da usare per questo oggetto hash_map, il cui valore `Allocator`predefinito è.|
|*Comp*|Funzione di confronto di tipo const `Traits` usata per ordinare gli elementi nell'oggetto hash_map. Per impostazione predefinita è `hash_compare`.|
|*A destra*|Oggetto hash_map di cui la mappa costruita deve essere una copia.|
|*Prima*|Posizione del primo elemento nell'intervallo di elementi da copiare.|
|*Ultima*|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|
|*IList*|Oggetto initializer_list.|

### <a name="remarks"></a>Note

Tutti i costruttori archiviano un tipo di oggetto allocatore che gestisce la memoria per l'oggetto hash_map e che può essere restituito in un secondo momento chiamando [get_allocator](#get_allocator). Il parametro allocator viene spesso omesso nelle dichiarazioni di classe e vengono usate macro di pre-elaborazione per introdurre allocatori alternativi.

Tutti i costruttori inizializzano il relativo oggetto hash_map.

Tutti i costruttori archiviano un oggetto funzione di tipo `Traits` che viene usato per stabilire un ordine tra le chiavi dell'oggetto hash_map e che può essere restituito in un secondo momento chiamando [key_comp](#key_comp).

I primi tre costruttori specificano un hash_map iniziale vuoto, inoltre il secondo specifica il tipo di funzione di confronto (*comp*) da usare per stabilire l'ordine degli elementi e il terzo specifica in modo esplicito il tipo di allocatore (*al* ) da utilizzare. La parola chiave **explicit** elimina alcuni tipi di conversione automatica del tipo.

Il quarto costruttore specifica una copia dell'oggetto hash_map *right*.

I tre costruttori successivi copiano l'intervallo `[First, Last)` di un oggetto hash_map con un grado di esplicitazione crescente nello specificare il tipo di funzione di confronto della classe `Traits` e il tipo di allocatore.

L'ultimo costruttore sposta l'oggetto hash_map a *destra*.

## <a name="insert"></a>  hash_map::insert

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Inserisce un elemento o un intervallo di elementi in un oggetto hash_map.

```cpp
pair <iterator, bool> insert(
    const value_type& val);

iterator insert(
    const_iterator _Where,
    const value_type& val);

template <class InputIterator>
void insert(
    InputIterator first,
    InputIterator last);

template <class ValTy>
pair <iterator, bool>
insert(
    ValTy&& val);

template <class ValTy>
iterator insert(
    const_iterator _Where,
    ValTy&& val);
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|-|-|
|*val*|Valore di un elemento da inserire nell'oggetto hash_map, a meno che quest'ultimo non contenga già tale elemento o, più in generale, un elemento la cui chiave sia ordinata in modo equivalente.|
|*_Where*|Suggerimento sulla posizione per avviare la ricerca del punto di inserimento corretto.|
|*first*|Posizione del primo elemento da copiare da un oggetto hash_map.|
|*last*|Posizione immediatamente dopo l'ultimo elemento da copiare da un oggetto hash_map.|

### <a name="return-value"></a>Valore restituito

La prima `insert` funzione membro restituisce una coppia il cui componente bool restituisce true se è stato eseguito un inserimento e false se l'oggetto hash_map contiene già un elemento la cui chiave ha un valore equivalente nell'ordinamento e il cui componente iteratore restituisce l'oggetto Indirizzo in cui è stato inserito un nuovo elemento o in cui si trovava già l'elemento.

Per accedere al componente iterator di una coppia `pr` restituita da questa funzione membro, usare `pr`. **first** e per dereferenziarlo, usare \*( `pr`. **first**). Per accedere al componente **bool** di una coppia `pr` restituita da questa funzione membro, `pr`usare. **second** e per dereferenziarlo, usare \*( `pr`. **second**).

La seconda `insert` funzione membro, la versione del suggerimento, restituisce un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito nell'oggetto hash_map.

Le ultime due `insert` funzioni membro si comportano come le prime due, con la differenza che spostano la costruzione del valore inserito.

### <a name="remarks"></a>Note

L'oggetto [value_type](../standard-library/map-class.md#value_type) di un elemento è una coppia, pertanto il valore di un elemento sarà una coppia ordinata in cui il primo componente equivale al valore della chiave e il secondo componente equivale al valore dei dati dell'elemento.

L'inserimento può essere eseguito in un tempo costante ammortizzato per la versione del suggerimento di inserimento, invece dell'ora logaritmica, se il punto di inserimento segue immediatamente *_Where*.

La terza funzione membro inserisce la sequenza di valori di elemento in un oggetto hash_map che corrisponde a ogni elemento interessato da un iteratore nell'intervallo *[First, Last)* di un set specificato.

### <a name="example"></a>Esempio

```cpp
// hash_map_insert.cpp
// compile with: /EHsc
#include<hash_map>
#include<iostream>
#include <string>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int>::iterator hm1_pIter, hm2_pIter;

    hash_map<int, int> hm1, hm2;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 10));
    hm1.insert(Int_Pair(2, 20));
    hm1.insert(Int_Pair(3, 30));
    hm1.insert(Int_Pair(4, 40));

    cout << "The original elements (Key => Value) of hm1 are:";
    for (hm1_pIter = hm1.begin(); hm1_pIter != hm1.end(); hm1_pIter++)
        cout << endl << " " << hm1_pIter -> first << " => "
             << hm1_pIter->second;
    cout << endl;

    pair< hash_map<int,int>::iterator, bool > pr;
    pr = hm1.insert(Int_Pair(1, 10));

    if (pr.second == true)
    {
        cout << "The element 10 was inserted in hm1 successfully."
            << endl;
    }
    else
    {
        cout << "The element 10 already exists in hm1\n"
            << "with a key value of "
            << "((pr.first) -> first) = " << (pr.first)->first
            << "." << endl;
    }

    // The hint version of insert
    hm1.insert(--hm1.end(), Int_Pair(5, 50));

    cout << "After the insertions, the elements of hm1 are:";
    for (hm1_pIter = hm1.begin(); hm1_pIter != hm1.end(); hm1_pIter++)
        cout << endl << hm1_pIter -> first << " => "
             << hm1_pIter->second;
    cout << endl;

    hm2.insert(Int_Pair(10, 100));

    // The templatized version inserting a range
    hm2.insert( ++hm1.begin(), --hm1.end() );

    cout << "After the insertions, the elements of hm2 are:";
    for (hm2_pIter = hm2.begin(); hm2_pIter != hm2.end(); hm2_pIter++)
        cout << endl << hm2_pIter -> first << " => "
             << hm2_pIter->second;
    cout << endl;

    // The templatized versions move constructing elements
    hash_map<int, string> hm3, hm4;
    pair<int, string> is1(1, "a"), is2(2, "b");

    hm3.insert(move(is1));
    cout << "After the move insertion, hm3 contains:" << endl
      << hm3.begin()->first
      << " => " << hm3.begin()->second
      << endl;

    hm4.insert(hm4.begin(), move(is2));
    cout << "After the move insertion, hm4 contains:" << endl
      << hm4.begin()->first
      << " => " << hm4.begin()->second
      << endl;
}
```

```Output
The original elements (Key => Value) of hm1 are:
1 => 10
2 => 20
3 => 30
4 => 40
The element 10 already exists in hm1
with a key value of ((pr.first) -> first) = 1.
After the insertions, the elements of hm1 are:
1 => 10
2 => 20
3 => 30
4 => 40
5 => 50
After the insertions, the elements of hm2 are:
2 => 20
10 => 100
3 => 30
4 => 40
After the move insertion, hm3 contains:
1 => a
After the move insertion, hm4 contains:
2 => b
```

## <a name="iterator"></a>  hash_map::iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un oggetto hash_map.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::iterator iterator;
```

### <a name="remarks"></a>Note

Il `iterator` tipo definito da hash_map punta a elementi che sono oggetti di [value_type](#value_type), ovvero di tipo **pair\<const Key, Type >,** il cui primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato utilizzato dal elemento.

Per dereferenziare  `Iter` un iteratore che punta a un elemento in un oggetto `->` multimap, usare l'operatore.

Per accedere al valore della chiave per l'elemento, usare `Iter` -> **first**, che equivale a (\* `Iter`). **first**. Per accedere al valore del punto di riferimento mappato per l'elemento, usare `Iter` -> **second**, che equivale a (\* `Iter`). **second**.

Un tipo `iterator` può essere usato per modificare il valore di un elemento.

### <a name="example"></a>Esempio

Vedere l' `iterator`esempio relativo a [Begin](#begin) per un esempio di come dichiarare e usare.

## <a name="key_comp"></a>  hash_map::key_comp

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Recupera una copia dell'oggetto di confronto usato per ordinare le chiavi di un oggetto hash_map.

```cpp
key_compare key_comp() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto funzione che viene usato da un oggetto hash_map per ordinare gli elementi.

### <a name="remarks"></a>Note

L'oggetto archiviato definisce la funzione membro

**bool operator**( **const Key&** `left` **, const Key&** `right`);

che restituisce **true** se `left` precede e non è uguale a `right` nell'ordinamento.

### <a name="example"></a>Esempio

```cpp
// hash_map_key_comp.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_map <int, int, hash_compare<int, less<int> > > hm1;
   hash_map <int, int, hash_compare<int, less<int> > >::key_compare
      kc1 = hm1.key_comp( ) ;

   // Operator stored in kc1 tests order & returns bool value
   bool result1 = kc1( 2, 3 ) ;
   if( result1 == true )
   {
      cout << "kc1( 2,3 ) returns value of true,"
           << "\n where kc1 is the function object of hm1"
           << " of type key_compare." << endl;
   }
   else
   {
      cout << "kc1( 2,3 ) returns value of false"
           << "\n where kc1 is the function object of hm1"
           << " of type key_compare." << endl;
   }

   hash_map <int, int, hash_compare<int, greater<int> > > hm2;
   hash_map <int, int, hash_compare<int, greater<int> > >
      ::key_compare kc2 = hm2.key_comp( );

   // Operator stored in kc2 tests order & returns bool value
   bool result2 = kc2( 2, 3 ) ;
   if( result2 == true )
   {
      cout << "kc2( 2,3 ) returns value of true,"
           << "\n where kc2 is the function object of hm2"
           << " of type key_compare." << endl;
   }
   else
   {
      cout << "kc2( 2,3 ) returns value of false,"
           << "\n where kc2 is the function object of hm2"
           << " of type key_compare." << endl;
   }
}
```

## <a name="key_compare"></a>  hash_map::key_compare

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nell'oggetto map.

```cpp
typedef Traits key_compare;
```

### <a name="remarks"></a>Note

`key_compare` è un sinonimo per il parametro di modello `Traits`.

Per altre informazioni su `Traits`, vedere l'argomento [Classe hash_map](../standard-library/hash-map-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [key_comp](#key_comp) per indicazioni su come dichiarare e usare `key_compare`.

## <a name="key_type"></a>  hash_map::key_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che descrive l'oggetto chiave di ordinamento di cui è costituito ogni elemento dell'oggetto hash_map.

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Note

`key_type` è un sinonimo per il parametro di modello `Key`.

Per altre informazioni su `Key`, vedere la sezione Note dell'argomento [Classe hash_map](../standard-library/hash-map-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="lower_bound"></a>  hash_map::lower_bound

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore al primo elemento di un oggetto hash_map con un valore della chiave uguale o maggiore di quello di una chiave specificata.

```cpp
iterator lower_bound(const Key& key);

const_iterator lower_bound(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Valore della chiave dell'argomento per cui trovare una corrispondenza con la chiave di ordinamento di un elemento presente nell'oggetto hash_map in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Tipo [iterator](#iterator) o [const_iterator](#const_iterator) che punta alla posizione di un elemento di un oggetto hash_map con una chiave uguale o maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_map se non viene trovata alcuna corrispondenza per la chiave.

Se il valore restituito di `lower_bound` viene assegnato a un `const_iterator`, l'oggetto hash_map non può essere modificato. Se il valore restituito di `lower_bound` viene assegnato a un `iterator`, l'oggetto hash_map può essere modificato.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_map_lower_bound.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   hash_map <int, int> :: const_iterator hm1_AcIter, hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_RcIter = hm1.lower_bound( 2 );
   cout << "The first element of hash_map hm1 with a key of 2 is: "
        << hm1_RcIter -> second << "." << endl;

   // If no match is found for the key, end( ) is returned
   hm1_RcIter = hm1. lower_bound ( 4 );

   if ( hm1_RcIter == hm1.end( ) )
      cout << "The hash_map hm1 doesn't have an element "
           << "with a key of 4." << endl;
   else
      cout << "The element of hash_map hm1 with a key of 4 is: "
           << hm1_RcIter -> second << "." << endl;

   // An element at a specific location in the hash_map can be
   // found using a dereferenced iterator addressing the location
   hm1_AcIter = hm1.end( );
   hm1_AcIter--;
   hm1_RcIter = hm1. lower_bound ( hm1_AcIter -> first );
   cout << "The element of hm1 with a key matching "
        << "that of the last element is: "
        << hm1_RcIter -> second << "." << endl;
}
```

```Output
The first element of hash_map hm1 with a key of 2 is: 20.
The hash_map hm1 doesn't have an element with a key of 4.
The element of hm1 with a key matching that of the last element is: 30.
```

## <a name="mapped_type"></a>  hash_map::mapped_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che rappresenta il tipo di dati archiviato in un oggetto hash_map.

```cpp
typedef Type mapped_type;
```

### <a name="remarks"></a>Note

Il tipo `mapped_type` è un sinonimo per il parametro di modello `Type`.

Per altre informazioni su `Type`, vedere l'argomento [Classe hash_map](../standard-library/hash-map-class.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_type](#value_type) per indicazioni su come dichiarare e usare `key_type`.

## <a name="max_size"></a>  hash_map::max_size

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce la lunghezza massima dell'oggetto hash_map.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza massima possibile dell'oggetto hash_map.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_map_max_size.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   hash_map <int, int> :: size_type i;

   i = hm1.max_size( );
   cout << "The maximum possible length "
        << "of the hash_map is " << i << "."
        << endl << "(Magnitude is machine specific.)";
}
```

## <a name="op_at"></a>  hash_map::operator[]

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Inserisce un elemento in un `hash_map` con un valore di chiave specificato.

```cpp
Type& operator[](const Key& key);

Type& operator[](Key&& key);
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|-|-|
|*key*|Valore della chiave dell'elemento da inserire.|

### <a name="return-value"></a>Valore restituito

Riferimento al valore dei dati dell'elemento inserito.

### <a name="remarks"></a>Note

Se non viene trovato il valore della chiave dell'argomento, viene inserito insieme al valore predefinito del tipo di dati.

`operator[]` può essere usato per inserire elementi in un oggetto `hash_map m` tramite

`m[ key] = DataValue`;

dove DataValue è il valore `mapped_type` di dell'elemento con un valore della chiave Key.

Quando si usa `operator[]` per inserire elementi, il riferimento restituito non indica se un inserimento modifica un elemento già esistente o ne crea uno nuovo. Le funzioni membro [find](../standard-library/map-class.md#find) e [insert](../standard-library/map-class.md#insert) possono essere usate per determinare se un elemento con una chiave specificata è già presente prima di un inserimento.

### <a name="example"></a>Esempio

```cpp
// hash_map_op_ref.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef pair <const int, int> cInt2Int;
   hash_map <int, int> hm1;
   hash_map <int, int> :: iterator pIter;

   // Insert a data value of 10 with a key of 1
   // into a hash_map using the operator[] member function
   hm1[ 1 ] = 10;

   // Compare other ways to insert objects into a hash_map
   hm1.insert ( hash_map <int, int> :: value_type ( 2, 20 ) );
   hm1.insert ( cInt2Int ( 3, 30 ) );

   cout  << "The keys of the mapped elements are:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> second;
   cout << "." << endl;

   // If the key already exists, operator[]
   // changes the value of the datum in the element
   hm1[ 2 ] = 40;

   // operator[] will also insert the value of the data
   // type's default constructor if the value is unspecified
   hm1[5];

   cout  << "The keys of the mapped elements are now:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are now:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> second;
   cout << "." << endl;

   // operator[] will also insert by moving a key
   hash_map <string, int> hm2;
   string str("a");
   hm2[move(str)] = 1;
   cout << "The moved key is " << hm2.begin()->first
      << ", with value " << hm2.begin()->second << endl;
}
```

## <a name="op_eq"></a>  hash_map::operator=

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Sostituisce gli elementi dell'oggetto hash_map con una copia di un altro oggetto hash_map.

```cpp
hash_map& operator=(const hash_map& right);

hash_map& operator=(hash_map&& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*right*|[Classe hash_map](../standard-library/hash-map-class.md) copiata nell'oggetto `hash_map`.|

### <a name="remarks"></a>Note

Dopo la cancellazione di tutti gli elementi esistenti `hash_map`in `operator=` un oggetto, copia o sposta il  `hash_map`contenuto di direttamente in.

### <a name="example"></a>Esempio

```cpp
// hash_map_operator_as.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map<int, int> v1, v2, v3;
   hash_map<int, int>::iterator iter;

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

## <a name="pointer"></a>  hash_map::pointer

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che fornisce un puntatore a un elemento di un oggetto hash_map.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::pointer pointer;
```

### <a name="remarks"></a>Note

Un tipo `pointer` può essere usato per modificare il valore di un elemento.

Nella maggior parte dei casi, è consigliabile usare un tipo [iterator](#iterator) per accedere agli elementi di un oggetto hash_map.

## <a name="rbegin"></a>  hash_map::rbegin

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore che punta al primo elemento di un oggetto hash_map invertito.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta al primo elemento di un oggetto hash_map invertito o a quello che è stato l'ultimo elemento dell'oggetto hash_map non invertito.

### <a name="remarks"></a>Note

`rbegin` viene usato con un oggetto hash_map invertito proprio come [begin](#begin) viene usato con un oggetto hash_map.

Se il valore restituito di `rbegin` viene assegnato a un [const_reverse_iterator](#const_reverse_iterator), l'oggetto hash_map non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un [reverse_iterator](#reverse_iterator), l'oggetto hash_map può essere modificato.

`rbegin` può essere usato per eseguire l'iterazione all'indietro su un oggetto hash_map.

### <a name="example"></a>Esempio

```cpp
// hash_map_rbegin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: iterator hm1_Iter;
   hash_map <int, int> :: reverse_iterator hm1_rIter;
   hash_map <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_rIter = hm1.rbegin( );
   cout << "The first element of the reversed hash_map hm1 is "
        << hm1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a hash_map in a forward order
   cout << "The hash_map is: ";
   for ( hm1_Iter = hm1.begin( ) ; hm1_Iter != hm1.end( ); hm1_Iter++)
      cout << hm1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a hash_map in a reverse order
   cout << "The reversed hash_map is: ";
   for ( hm1_rIter = hm1.rbegin( ) ; hm1_rIter != hm1.rend( ); hm1_rIter++)
      cout << hm1_rIter -> first << " ";
      cout << "." << endl;

   // A hash_map element can be erased by dereferencing to its key
   hm1_rIter = hm1.rbegin( );
   hm1.erase ( hm1_rIter -> first );

   hm1_rIter = hm1.rbegin( );
   cout << "After the erasure, the first element "
        << "in the reversed hash_map is "
        << hm1_rIter -> first << "." << endl;
}
```

```Output
The first element of the reversed hash_map hm1 is 3.
The hash_map is: 1 2 3 .
The reversed hash_map is: 3 2 1 .
After the erasure, the first element in the reversed hash_map is 2.
```

## <a name="reference"></a>  hash_map::reference

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che fornisce un riferimento a un elemento archiviato in un oggetto hash_map.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::reference reference;
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_map_reference.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( hm1.begin( ) -> first );

   // The following line would cause an error as the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( hm1.begin( ) -> first );

   cout << "The key of first element in the hash_map is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( hm1.begin( ) -> second );

   cout << "The data value of first element in the hash_map is "
        << Ref2 << "." << endl;

   // The non-const_reference can be used to modify the
   // data value of the first element
   Ref2 = Ref2 + 5;
   cout << "The modified data value of first element is "
        << Ref2 << "." << endl;
}
```

```Output
The key of first element in the hash_map is 1.
The data value of first element in the hash_map is 10.
The modified data value of first element is 15.
```

## <a name="rend"></a>  hash_map::rend

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un oggetto hash_map invertito.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale inverso che punta alla posizione successiva all'ultimo elemento di un oggetto hash_map invertito, ovvero la posizione che precedeva il primo elemento dell'oggetto hash_map non invertito.

### <a name="remarks"></a>Note

`rend` viene usato con un oggetto hash_map invertito proprio come [end](#end) viene usato con un oggetto hash_map.

Se il valore restituito di `rend` viene assegnato a un [const_reverse_iterator](#const_reverse_iterator), l'oggetto hash_map non può essere modificato. Se il valore restituito di `rend` viene assegnato a un [reverse_iterator](#reverse_iterator), l'oggetto hash_map può essere modificato.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo oggetto hash_map.

Non è consigliabile dereferenziare il valore restituito da `rend`.

### <a name="example"></a>Esempio

```cpp
// hash_map_rend.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: iterator hm1_Iter;
   hash_map <int, int> :: reverse_iterator hm1_rIter;
   hash_map <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_rIter = hm1.rend( );
   hm1_rIter--;
   cout << "The last element of the reversed hash_map hm1 is "
        << hm1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a hash_map in a forward order
   cout << "The hash_map is: ";
   for ( hm1_Iter = hm1.begin( ) ; hm1_Iter != hm1.end( );
   hm1_Iter++)
      cout << hm1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a hash_map in a reverse order
   cout << "The reversed hash_map is: ";
   for ( hm1_rIter = hm1.rbegin( ) ; hm1_rIter != hm1.rend( );
      hm1_rIter++)
      cout << hm1_rIter -> first << " ";
      cout << "." << endl;

   // A hash_map element can be erased by dereferencing to its key
   hm1_rIter = --hm1.rend( );
   hm1.erase ( hm1_rIter -> first );

   hm1_rIter = hm1.rend( );
   hm1_rIter--;
   cout << "After the erasure, the last element "
        << "in the reversed hash_map is "
        << hm1_rIter -> first << "." << endl;
}
```

```Output
The last element of the reversed hash_map hm1 is 1.
The hash_map is: 1 2 3 .
The reversed hash_map is: 3 2 1 .
After the erasure, the last element in the reversed hash_map is 2.
```

## <a name="reverse_iterator"></a>  hash_map::reverse_iterator

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un oggetto hash_map invertito.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::reverse_iterator reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `reverse_iterator` non può modificare il valore di un elemento e viene usato per eseguire l'iterazione sull'oggetto hash_map in ordine inverso.

Il tipo `reverse_iterator` definito da hash_map punta a elementi che sono oggetti di [value_type](#value_type), ovvero di tipo **pair\<const Key, Type>** , dove il primo membro è la chiave dell'elemento e il secondo membro è il punto di riferimento mappato incluso nell'elemento.

Per dereferenziare `reverse_iterator` un oggetto `rIter` che punta a un elemento in un oggetto hash_map, usare l'operatore->.

Per accedere al valore della chiave per l'elemento, usare `rIter` -> **first**, che equivale a (\* `rIter`). **first**. Per accedere al valore del punto di riferimento mappato per l'elemento, usare `rIter` -> **second**, che equivale a (\* `rIter`). **first**.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [rbegin](#rbegin) per indicazioni su come dichiarare e usare `reverse_iterator`.

## <a name="size"></a>  hash_map::size

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce il numero di elementi in hash_map.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza corrente di hash_map.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della funzione membro hash_map::size.

```cpp
// hash_map_size.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int> hm1, hm2;
    hash_map<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 1));
    i = hm1.size();
    cout << "The hash_map length is " << i << "." << endl;

    hm1.insert(Int_Pair(2, 4));
    i = hm1.size();
    cout << "The hash_map length is now " << i << "." << endl;
}
```

```Output
The hash_map length is 1.
The hash_map length is now 2.
```

## <a name="size_type"></a>  hash_map::size_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un oggetto hash_map.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::size_type size_type;
```

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [size](#size) per indicazioni su come dichiarare e usare `size_type`.

## <a name="swap"></a>  hash_map::swap

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Scambia gli elementi di due oggetti hash_map.

```cpp
void swap(hash_map& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Argomento di tipo hash_map che fornisce gli elementi da scambiare con l'oggetto hash_map di destinazione.

### <a name="remarks"></a>Note

La funzione membro non invalida riferimenti, puntatori o iteratori che designano gli elementi dei due oggetti hash_map di cui vengono scambiati gli elementi.

### <a name="example"></a>Esempio

```cpp
// hash_map_swap.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1, hm2, hm3;
   hash_map <int, int>::iterator hm1_Iter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );
   hm2.insert ( Int_Pair ( 10, 100 ) );
   hm2.insert ( Int_Pair ( 20, 200 ) );
   hm3.insert ( Int_Pair ( 30, 300 ) );

   cout << "The original hash_map hm1 is:";
   for ( hm1_Iter = hm1.begin( ); hm1_Iter != hm1.end( ); hm1_Iter++ )
      cout << " " << hm1_Iter -> second;
   cout   << "." << endl;

   // This is the member function version of swap
   // hm2 is said to be the argument hash_map;
   // hm1 is said to be the target hash_map
   hm1.swap( hm2 );

   cout << "After swapping with hm2, hash_map hm1 is:";
   for ( hm1_Iter = hm1.begin( ); hm1_Iter != hm1.end( ); hm1_Iter++ )
      cout << " " << hm1_Iter -> second;
   cout  << "." << endl;

   // This is the specialized template version of swap
   swap( hm1, hm3 );

   cout << "After swapping with hm3, hash_map hm1 is:";
   for ( hm1_Iter = hm1.begin( ); hm1_Iter != hm1.end( ); hm1_Iter++ )
      cout << " " << hm1_Iter -> second;
   cout   << "." << endl;
}
```

```Output
The original hash_map hm1 is: 10 20 30.
After swapping with hm2, hash_map hm1 is: 100 200.
After swapping with hm3, hash_map hm1 is: 300.
```

## <a name="upper_bound"></a>  hash_map::upper_bound

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un iteratore al primo elemento di un oggetto hash_map con un valore della chiave maggiore di quello di una chiave specificata.

```cpp
iterator upper_bound(const Key& key);

const_iterator upper_bound(const Key& key) const;
```

### <a name="parameters"></a>Parametri

*chiave*\
Valore della chiave dell'argomento per cui trovare una corrispondenza con il valore della chiave di ordinamento di un elemento presente nell'oggetto hash_map in cui si esegue la ricerca.

### <a name="return-value"></a>Valore restituito

Tipo [iterator](#iterator) o [const_iterator](#const_iterator) che punta alla posizione di un elemento di un oggetto hash_map con una chiave maggiore della chiave dell'argomento o che punta alla posizione successiva all'ultimo elemento dell'oggetto hash_map se non viene trovata alcuna corrispondenza per la chiave.

Se il valore restituito viene assegnato a un `const_iterator`, l'oggetto hash_map non può essere modificato. Se il valore restituito viene assegnato a un `iterator`, l'oggetto hash_map può essere modificato.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

```cpp
// hash_map_upper_bound.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   hash_map <int, int> :: const_iterator hm1_AcIter, hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_RcIter = hm1.upper_bound( 2 );
   cout << "The first element of hash_map hm1 with a key "
        << "greater than 2 is: "
        << hm1_RcIter -> second << "." << endl;

   // If no match is found for the key, end is returned
   hm1_RcIter = hm1. upper_bound ( 4 );

   if ( hm1_RcIter == hm1.end( ) )
      cout << "The hash_map hm1 doesn't have an element "
           << "with a key greater than 4." << endl;
   else
      cout << "The element of hash_map hm1 with a key > 4 is: "
           << hm1_RcIter -> second << "." << endl;

   // The element at a specific location in the hash_map can be found
   // using a dereferenced iterator addressing the location
   hm1_AcIter = hm1.begin( );
   hm1_RcIter = hm1. upper_bound ( hm1_AcIter -> first );
   cout << "The 1st element of hm1 with a key greater than that\n"
        << "of the initial element of hm1 is: "
        << hm1_RcIter -> second << "." << endl;
}
```

```Output
The first element of hash_map hm1 with a key greater than 2 is: 30.
The hash_map hm1 doesn't have an element with a key greater than 4.
The 1st element of hm1 with a key greater than that
of the initial element of hm1 is: 20.
```

## <a name="value_comp"></a>  hash_map::value_comp

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Restituisce un oggetto funzione che determina l'ordine degli elementi in un oggetto hash_map confrontando i valori delle relative chiavi.

```cpp
value_compare value_comp() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto funzione di confronto che viene usato da un oggetto hash_map per ordinare gli elementi.

### <a name="remarks"></a>Note

Per un oggetto hash_map *m*, se due elementi *E1* (*K1*, *D1*) ed *E2* (*K2*, *D2*) sono oggetti di tipo [value_type](#value_type), dove *K1* e *K2* sono le chiavi di tipo [key_type](#key_type) e *D1* e *D2* sono i dati di tipo [mapped_type](#mapped_type), quindi `m.value_comp()(e1, e2)` equivale a. `m.key_comp()(k1, k2)` Un oggetto archiviato definisce la funzione membro

`bool operator(value_type& left, value_type& right);`

che restituisce **true** se il valore della chiave `left` precede e non è uguale al valore della chiave `right` nell'ordinamento.

### <a name="example"></a>Esempio

```cpp
// hash_map_value_comp.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_map <int, int, hash_compare<int, less<int> > > hm1;
   hash_map <int, int, hash_compare<int, less<int> > >
   ::value_compare vc1 = hm1.value_comp( );
   pair< hash_map<int,int>::iterator, bool > pr1, pr2;

   pr1= hm1.insert ( hash_map <int, int> :: value_type ( 1, 10 ) );
   pr2= hm1.insert ( hash_map <int, int> :: value_type ( 2, 5 ) );

   if( vc1( *pr1.first, *pr2.first ) == true )
   {
      cout << "The element ( 1,10 ) precedes the element ( 2,5 )."
           << endl;
   }
   else
   {
      cout << "The element ( 1,10 ) does not precede the element ( 2,5 )."
           << endl;
   }

   if( vc1 ( *pr2.first, *pr1.first ) == true )
   {
      cout << "The element ( 2,5 ) precedes the element ( 1,10 )."
           << endl;
   }
   else
   {
      cout << "The element ( 2,5 ) does not precede the element ( 1,10 )."
           << endl;
   }
}
```

## <a name="value_type"></a>  hash_map::value_type

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Tipo che rappresenta il tipo di oggetto archiviato in un oggetto hash_map.

```cpp
typedef pair<const Key, Type> value_type;
```

### <a name="remarks"></a>Note

`value_type`viene dichiarato `pair<const key_type, mapped_type>` come and not `pair<key_type, mapped_type>` perché non è possibile modificare le chiavi di un contenitore associativo utilizzando un iteratore o un riferimento non costante.

### <a name="example"></a>Esempio

```cpp
// hash_map_value_type.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef pair <const int, int> cInt2Int;
   hash_map <int, int> hm1;
   hash_map <int, int> :: key_type key1;
   hash_map <int, int> :: mapped_type mapped1;
   hash_map <int, int> :: value_type value1;
   hash_map <int, int> :: iterator pIter;

   // value_type can be used to pass the correct type
   // explicitly to avoid implicit type conversion
   hm1.insert ( hash_map <int, int> :: value_type ( 1, 10 ) );

   // Compare other ways to insert objects into a hash_map
   hm1.insert ( cInt2Int ( 2, 20 ) );
   hm1[ 3 ] = 30;

   // Initializing key1 and mapped1
   key1 = ( hm1.begin( ) -> first );
   mapped1 = ( hm1.begin( ) -> second );

   cout << "The key of first element in the hash_map is "
        << key1 << "." << endl;

   cout << "The data value of first element in the hash_map is "
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
The key of first element in the hash_map is 1.
The data value of first element in the hash_map is 10.
The keys of the mapped elements are: 1 2 3.
The values of the mapped elements are: 10 20 30.
```

## <a name="see-also"></a>Vedere anche

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
