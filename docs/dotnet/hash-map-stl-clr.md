---
title: hash_map (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- cliext::hash_map
- cliext::hash_map::begin
- cliext::hash_map::bucket_count
- cliext::hash_map::clear
- cliext::hash_map::const_iterator
- cliext::hash_map::const_reference
- cliext::hash_map::const_reverse_iterator
- cliext::hash_map::count
- cliext::hash_map::difference_type
- cliext::hash_map::empty
- cliext::hash_map::end
- cliext::hash_map::equal_range
- cliext::hash_map::erase
- cliext::hash_map::find
- cliext::hash_map::generic_container
- cliext::hash_map::generic_iterator
- cliext::hash_map::generic_reverse_iterator
- cliext::hash_map::generic_value
- cliext::hash_map::hash_delegate
- cliext::hash_map::hash_map
- cliext::hash_map::hasher
- cliext::hash_map::insert
- cliext::hash_map::iterator
- cliext::hash_map::key_comp
- cliext::hash_map::key_compare
- cliext::hash_map::key_type
- cliext::hash_map::load_factor
- cliext::hash_map::lower_bound
- cliext::hash_map::make_value
- cliext::hash_map::mapped_type
- cliext::hash_map::max_load_factor
- cliext::hash_map::operator=
- cliext::hash_map::operator
- cliext::hash_map::rbegin
- cliext::hash_map::reference
- cliext::hash_map::rehash
- cliext::hash_map::rend
- cliext::hash_map::reverse_iterator
- cliext::hash_map::size
- cliext::hash_map::size_type
- cliext::hash_map::swap
- cliext::hash_map::to_array
- cliext::hash_map::upper_bound
- cliext::hash_map::value_comp
- cliext::hash_map::value_compare
- cliext::hash_map::value_type
helpviewer_keywords:
- <cliext/hash_map> header [STL/CLR]
- <hash_map> header [STL/CLR]
- hash_map class [STL/CLR]
- begin member [STL/CLR]
- bucket_count member [STL/CLR]
- clear member [STL/CLR]
- const_iterator member [STL/CLR]
- const_reference member [STL/CLR]
- const_reverse_iterator member [STL/CLR]
- count member [STL/CLR]
- difference_type member [STL/CLR]
- empty member [STL/CLR]
- end member [STL/CLR]
- equal_range member [STL/CLR]
- erase member [STL/CLR]
- find member [STL/CLR]
- generic_container member [STL/CLR]
- generic_iterator member [STL/CLR]
- generic_reverse_iterator member [STL/CLR]
- generic_value member [STL/CLR]
- hash_delegate member [STL/CLR]
- hash_map member [STL/CLR]
- hasher member [STL/CLR]
- insert member [STL/CLR]
- iterator member [STL/CLR]
- key_comp member [STL/CLR]
- key_compare member [STL/CLR]
- key_type member [STL/CLR]
- load_factor member [STL/CLR]
- lower_bound member [STL/CLR]
- make_value member [STL/CLR]
- mapped_type member [STL/CLR]
- max_load_factor member [STL/CLR]
- operator= member [STL/CLR]
- operator member [STL/CLR]
- rbegin member [STL/CLR]
- reference member [STL/CLR]
- rehash member [STL/CLR]
- rend member [STL/CLR]
- reverse_iterator member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- swap member [STL/CLR]
- to_array member [STL/CLR]
- upper_bound member [STL/CLR]
- value_comp member [STL/CLR]
- value_compare member [STL/CLR]
- value_type member [STL/CLR]
ms.assetid: c3cfc69b-04c6-42ae-a30e-0eda953fe883
ms.openlocfilehash: d87444fe5a62bac30d62cd7e44dfba7934083ef4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80208741"
---
# <a name="hash_map-stlclr"></a>hash_map (STL/CLR)

La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi con accesso bidirezionale. Usare il contenitore `hash_map` per gestire una sequenza di elementi come tabella hash, ogni voce di tabella che archivia un elenco collegato bidirezionale di nodi e ogni nodo che archivia un elemento. Un elemento è costituito da una chiave, per ordinare la sequenza e un valore mappato, che viene utilizzato per la corsa.

Nella descrizione seguente `GValue` è uguale a:

`Microsoft::VisualC::StlClr::GenericPair<GKey, GMapped>`

dove:

`GKey` è uguale a `Key` a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Key^`

`GMapped` è uguale a `Mapped` a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Mapped^`

## <a name="syntax"></a>Sintassi

```cpp
template<typename Key,
    typename Mapped>
    ref class hash_map
        :   public
        System::ICloneable,
        System::Collections::IEnumerable,
        System::Collections::ICollection,
        System::Collections::Generic::IEnumerable<GValue>,
        System::Collections::Generic::ICollection<GValue>,
        System::Collections::Generic::IList<GValue>,
        System::Collections::Generic::IDictionary<Gkey, GMapped>,
        Microsoft::VisualC::StlClr::IHash<Gkey, GValue>
    { ..... };
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Tipo del componente chiave di un elemento nella sequenza controllata.

*Mappato*<br/>
Tipo del componente aggiuntivo di un elemento nella sequenza controllata.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<cliext/hash_map >

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|[hash_map::const_iterator (STL/CLR)](#const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|
|[hash_map::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|
|[hash_map::const_reverse_iterator (STL/CLR)](#const_reverse_iterator)|Tipo di un iteratore inverso costante per la sequenza controllata.|
|[hash_map::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza (possibilmente firmata) tra due elementi.|
|[hash_map::generic_container (STL/CLR)](#generic_container)|Tipo dell'interfaccia generica per il contenitore.|
|[hash_map::generic_iterator (STL/CLR)](#generic_iterator)|Tipo di un iteratore per l'interfaccia generica per il contenitore.|
|[hash_map::generic_reverse_iterator (STL/CLR)](#generic_reverse_iterator)|Tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|
|[hash_map::generic_value (STL/CLR)](#generic_value)|Tipo di un elemento per l'interfaccia generica per il contenitore.|
|[hash_map::hasher (STL/CLR)](#hasher)|Delegato di hashing per una chiave.|
|[hash_map::iterator (STL/CLR)](#iterator)|Tipo di un iteratore per la sequenza controllata.|
|[hash_map::key_compare (STL/CLR)](#key_compare)|Delegato di ordinamento per due chiavi.|
|[hash_map::key_type (STL/CLR)](#key_type)|Tipo di una chiave di ordinamento.|
|[hash_map::mapped_type (STL/CLR)](#mapped_type)|Tipo del valore mappato associato a ogni chiave.|
|[hash_map::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|
|[hash_map::reverse_iterator (STL/CLR)](#reverse_iterator)|Tipo di un iteratore inverso della sequenza controllata.|
|[hash_map::size_type (STL/CLR)](#size_type)|Il tipo di una distanza (non negativa) tra due elementi.|
|[hash_map::value_compare (STL/CLR)](#value_compare)|Delegato di ordinamento per i valori di due elementi.|
|[hash_map::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|

|Funzione membro|Descrizione|
|---------------------|-----------------|
|[hash_map::begin (STL/CLR)](#begin)|Indica l'inizio della sequenza controllata.|
|[hash_map::bucket_count (STL/CLR)](#bucket_count)|Conta il numero di bucket.|
|[hash_map::clear (STL/CLR)](#clear)|Rimuove tutti gli elementi.|
|[hash_map::count (STL/CLR)](#count)|Conta gli elementi che corrispondono a una chiave specificata.|
|[hash_map::empty (STL/CLR)](#empty)|Verifica se sono presenti o meno degli elementi.|
|[hash_map::end (STL/CLR)](#end)|Designa la fine della sequenza controllata.|
|[hash_map::equal_range (STL/CLR)](#equal_range)|Trova un intervallo che corrisponde a una chiave specificata.|
|[hash_map::erase (STL/CLR)](#erase)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|
|[hash_map::find (STL/CLR)](#find)|Trova un elemento che corrisponde a una chiave specificata.|
|[hash_map::hash_delegate (STL/CLR)](#hash_delegate)|Copia il delegato di hashing per una chiave.|
|[hash_map::hash_map (STL/CLR)](#hash_map)|Costruisce un oggetto contenitore.|
|[hash_map::insert (STL/CLR)](#insert)|Aggiunge elementi.|
|[hash_map::key_comp (STL/CLR)](#key_comp)|Copia il delegato di ordinamento per due chiavi.|
|[hash_map::load_factor (STL/CLR)](#load_factor)|Conta il numero medio di elementi per bucket.|
|[hash_map::lower_bound (STL/CLR)](#lower_bound)|Trova l'inizio dell'intervallo che corrisponde a una chiave specificata.|
|[hash_map::make_value (STL/CLR)](#make_value)|Costruisce un oggetto valore.|
|[hash_map::max_load_factor (STL/CLR)](#max_load_factor)|Ottiene o imposta il numero massimo di elementi per bucket.|
|[hash_map::rbegin (STL/CLR)](#rbegin)|Indica l'inizio della sequenza controllata inversa.|
|[hash_map::rehash (STL/CLR)](#rehash)|Ricompila la tabella hash.|
|[hash_map::rend (STL/CLR)](#rend)|Indica la fine della sequenza controllata inversa.|
|[hash_map::size (STL/CLR)](#size)|Conta il numero di elementi.|
|[hash_map::swap (STL/CLR)](#swap)|Scambia il contenuto di due contenitori.|
|[hash_map::to_array (STL/CLR)](#to_array)|Copia la sequenza controllata in una nuova matrice.|
|[hash_map::upper_bound (STL/CLR)](#upper_bound)|Trova la fine dell'intervallo che corrisponde a una chiave specificata.|
|[hash_map::value_comp (STL/CLR)](#value_comp)|Copia il delegato di ordinamento per due valori di elemento.|

|Operatore|Descrizione|
|--------------|-----------------|
|[hash_map::operator= (STL/CLR)](#op_as)|Sostituisce la sequenza controllata.|
|[hash_map::operator(STL/CLR)](#op)|Esegue il mapping di una chiave al relativo valore mappato associato.|

## <a name="interfaces"></a>Interfacce

|Interfaccia|Descrizione|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicare un oggetto.|
|<xref:System.Collections.IEnumerable>|Sequenza tramite elementi.|
|<xref:System.Collections.ICollection>|Mantiene il gruppo di elementi.|
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza di elementi tipizzati.|
|<xref:System.Collections.Generic.ICollection%601>|Mantiene il gruppo di elementi tipizzati.|
|<xref:System.Collections.Generic.IDictionary%602>|Mantiene il gruppo di coppie {Key, value}.|
|Chiave < IHash, valore >|Mantiene il contenitore generico.|

## <a name="remarks"></a>Osservazioni

L'oggetto alloca e libera la memoria per la sequenza che controlla come singoli nodi in un elenco collegato bidirezionale. Per velocizzare l'accesso, l'oggetto gestisce anche una matrice di lunghezza variabile di puntatori nell'elenco (tabella hash), gestendo in modo efficace l'intero elenco come sequenza di sottoelenchi o bucket. Inserisce gli elementi in un bucket che mantiene ordinato modificando i collegamenti tra i nodi, mai copiando il contenuto di un nodo in un altro. Ciò significa che è possibile inserire e rimuovere elementi liberamente senza disturbare gli elementi rimanenti.

L'oggetto ordina ogni bucket che controlla chiamando un oggetto delegato archiviato di tipo [hash_set:: key_compare (STL/CLR)](../dotnet/hash-set-key-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce la hash_set; Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<=(key_type, key_type)`.

È possibile accedere all'oggetto delegato archiviato chiamando la funzione membro [hash_set:: key_comp (STL/CLR)](../dotnet/hash-set-key-comp-stl-clr.md)`()`. Tale oggetto delegato deve definire un ordinamento equivalente tra chiavi di tipo [hash_set:: key_type (STL/CLR)](../dotnet/hash-set-key-type-stl-clr.md). Ciò significa che, per due chiavi `X` e `Y`:

`key_comp()(X, Y)` restituisce lo stesso risultato booleano a ogni chiamata.

Se `key_comp()(X, Y) && key_comp()(Y, X)` è true, `X` e `Y` hanno un ordinamento equivalente.

Tutte le regole di ordinamento che si comportano come `operator<=(key_type, key_type)`, `operator>=(key_type, key_type)` o `operator==(key_type, key_type)` definiscono l'ordinamento eqivalent.

Si noti che il contenitore garantisce solo che gli elementi le cui chiavi hanno un ordinamento equivalente (e quale hash per lo stesso valore Integer) siano adiacenti all'interno di un bucket. A differenza della classe modello [hash_multimap (STL/CLR)](../dotnet/hash-multimap-stl-clr.md), un oggetto della classe modello `hash_map` garantisce che le chiavi per tutti gli elementi siano univoche. (Due chiavi non hanno un ordinamento equivalente).

L'oggetto determina quale bucket deve contenere una chiave di ordinamento specificata chiamando un oggetto delegato archiviato di tipo [hash_set:: hasher (STL/CLR)](../dotnet/hash-set-hasher-stl-clr.md). È possibile accedere a questo oggetto archiviato chiamando la funzione membro [hash_set:: hash_delegate (STL/CLR)](../dotnet/hash-set-hash-delegate-stl-clr.md)`()` per ottenere un valore integer che dipende dal valore della chiave. È possibile specificare l'oggetto delegato archiviato quando si costruisce la hash_set; Se non si specifica alcun oggetto delegato, il valore predefinito è la funzione `System::Object::hash_value(key_type)`. Ciò significa che per qualsiasi chiave `X` e `Y`:

`hash_delegate()(X)` restituisce lo stesso risultato Integer a ogni chiamata.

Se `X` e `Y` hanno un ordinamento equivalente, `hash_delegate()(X)` deve restituire lo stesso risultato Integer `hash_delegate()(Y)`.

Ogni elemento contiene una chiave separata e un valore mappato. La sequenza viene rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario con una serie di operazioni indipendenti dal numero di elementi nella sequenza (tempo costante), almeno nei casi migliori. Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.

Se i valori hash non sono distribuiti in modo uniforme, tuttavia, una tabella hash può essere degenerata. Nell'estremo, per una funzione hash che restituisce sempre lo stesso valore, la ricerca, l'inserimento e la rimozione sono proporzionali al numero di elementi nella sequenza (tempo lineare). Il contenitore tenta di scegliere una funzione hash ragionevole, le dimensioni del bucket medio e le dimensioni della tabella hash (numero totale di bucket), ma è possibile eseguire l'override di una o tutte le opzioni. Vedere, ad esempio, le funzioni [hash_set:: max_load_factor (STL/CLR)](../dotnet/hash-set-max-load-factor-stl-clr.md) e [hash_set:: rehash (STL/CLR)](../dotnet/hash-set-rehash-stl-clr.md).

Un hash_map supporta gli iteratori bidirezionali, il che significa che è possibile passare agli elementi adiacenti, dato un iteratore che designa un elemento nella sequenza controllata. Un nodo head speciale corrisponde all'iteratore restituito dal`()`[hash_map:: end (STL/CLR)](../dotnet/hash-map-end-stl-clr.md) . È possibile decrementare questo iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore di hash_map per raggiungere il nodo Head, che verrà quindi confrontato con l'`end()`. Non è tuttavia possibile dereferenziare l'iteratore restituito da `end()`.

Si noti che non è possibile fare riferimento a un elemento hash_map direttamente in base alla posizione numerica, che richiede un iteratore ad accesso casuale.

Un iteratore di hash_map archivia un handle al nodo hash_map associato, che a sua volta archivia un handle per il contenitore associato. È possibile utilizzare gli iteratori solo con gli oggetti contenitore associati. Un iteratore di hash_map rimane valido finché il relativo nodo hash_map associato è associato ad alcune hash_map. Inoltre, un iteratore valido è dereferenziabile, che può essere usato per accedere o modificare il valore dell'elemento che designa, purché non sia uguale a `end()`.

La cancellazione o la rimozione di un elemento chiama il distruttore per il valore archiviato. L'eliminazione definitiva del contenitore Cancella tutti gli elementi. Pertanto, un contenitore il cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva al contenitore. Si noti, tuttavia, che un contenitore di handle *non elimina definitivamente* i relativi elementi.

## <a name="members"></a>Members

## <a name="hash_mapbegin-stlclr"></a><a name="begin"></a>hash_map:: begin (STL/CLR)

Indica l'inizio della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator begin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore bidirezionale che designa il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_begin.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // inspect first two items
    Myhash_map::iterator it = c1.begin();
    System::Console::WriteLine("*begin() = [{0} {1}]",
        it->first, it->second);
    ++it;
    System::Console::WriteLine("*++begin() = [{0} {1}]",
        it->first, it->second);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
*begin() = [a 1]
*++begin() = [b 2]
```

## <a name="hash_mapbucket_count-stlclr"></a><a name="bucket_count"></a>hash_map:: bucket_count (STL/CLR)

Conta il numero di bucket.

### <a name="syntax"></a>Sintassi

```cpp
int bucket_count();
```

### <a name="remarks"></a>Osservazioni

Le funzioni membro restituiscono il numero corrente di bucket. Viene utilizzato per determinare le dimensioni della tabella hash.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_bucket_count.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1 = gcnew Myhash_map;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // inspect current parameters
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    System::Console::WriteLine();

    // change max_load_factor and redisplay
    c1.max_load_factor(0.25f);
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    System::Console::WriteLine();

    // rehash and redisplay
    c1.rehash(100);
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
bucket_count() = 16
load_factor() = 0.1875
max_load_factor() = 4

bucket_count() = 16
load_factor() = 0.1875
max_load_factor() = 0.25

bucket_count() = 128
load_factor() = 0.0234375
max_load_factor() = 0.25
```

## <a name="hash_mapclear-stlclr"></a><a name="clear"></a>hash_map:: Clear (STL/CLR)

Rimuove tutti gli elementi.

### <a name="syntax"></a>Sintassi

```cpp
void clear();
```

### <a name="remarks"></a>Osservazioni

La funzione membro chiama in modo efficace [hash_map:: erase (STL/CLR)](../dotnet/hash-map-erase-stl-clr.md)`(` [hash_map:: begin (STL/CLR)](../dotnet/hash-map-begin-stl-clr.md)`(),` hash_map [:: end (STL/CLR)](../dotnet/hash-map-end-stl-clr.md)`())`. Viene usato per garantire che la sequenza controllata sia vuota.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_clear.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());

    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));

    // display contents " [a 1] [b 2]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
size() = 0
[a 1] [b 2]
size() = 0
```

## <a name="hash_mapconst_iterator-stlclr"></a><a name="const_iterator"></a>hash_map:: const_iterator (STL/CLR)

Tipo di un iteratore costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T2 const_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T2` che può fungere da iteratore bidirezionale costante per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_const_iterator.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    Myhash_map::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        System::Console::Write("[{0} {1}] ", cit->first, cit->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
```

## <a name="hash_mapconst_reference-stlclr"></a><a name="const_reference"></a>hash_map:: const_reference (STL/CLR)

Tipo di un riferimento costante a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% const_reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento costante a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_const_reference.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    Myhash_map::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        {   // get a const reference to an element
        Myhash_map::const_reference cref = *cit;
        System::Console::Write("[{0} {1}] ", cref->first, cref->second);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
```

## <a name="hash_mapconst_reverse_iterator-stlclr"></a><a name="const_reverse_iterator"></a>hash_map:: const_reverse_iterator (STL/CLR)

Tipo di un iteratore inverso costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T4 const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T4` che può fungere da iteratore inverso costante per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_const_reverse_iterator.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]" reversed
    Myhash_map::const_reverse_iterator crit = c1.rbegin();
    for (; crit != c1.rend(); ++crit)
        System::Console::Write("[{0} {1}] ", crit->first, crit->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[c 3] [b 2] [a 1]
```

## <a name="hash_mapcount-stlclr"></a><a name="count"></a>hash_map:: Count (STL/CLR)

Trova il numero di elementi corrispondenti a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
size_type count(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il numero di elementi nella sequenza controllata che hanno un ordinamento equivalente con la *chiave*. Viene utilizzata per determinare il numero di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_count.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    System::Console::WriteLine("count(L'A') = {0}", c1.count(L'A'));
    System::Console::WriteLine("count(L'b') = {0}", c1.count(L'b'));
    System::Console::WriteLine("count(L'C') = {0}", c1.count(L'C'));
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
count(L'A') = 0
count(L'b') = 1
count(L'C') = 0
```

## <a name="hash_mapdifference_type-stlclr"></a><a name="difference_type"></a>hash_map::d ifference_type (STL/CLR)

Tipi di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi probabilmente negativo.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_difference_type.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // compute positive difference
    Myhash_map::difference_type diff = 0;
    for (Myhash_map::iterator it = c1.begin(); it != c1.end(); ++it)
        ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);

    // compute negative difference
    diff = 0;
    for (Myhash_map::iterator it = c1.end(); it != c1.begin(); --it)
        --diff;
    System::Console::WriteLine("begin()-end() = {0}", diff);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
end()-begin() = 3
begin()-end() = -3
```

## <a name="hash_mapempty-stlclr"></a><a name="empty"></a>hash_map:: Empty (STL/CLR)

Verifica se sono presenti o meno degli elementi.

### <a name="syntax"></a>Sintassi

```cpp
bool empty();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce true per una sequenza controllata vuota. Equivale a [hash_map:: size (STL/CLR)](../dotnet/hash-map-size-stl-clr.md)`() == 0`. Viene usato per verificare se la hash_map è vuota.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_empty.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());

    // clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
size() = 3
empty() = False
size() = 0
empty() = True
```

## <a name="hash_mapend-stlclr"></a><a name="end"></a>hash_map:: end (STL/CLR)

Designa la fine della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator end();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore bidirezionale che punta appena oltre la fine della sequenza controllata. Viene usato per ottenere un iteratore che designa la fine della sequenza controllata. lo stato non viene modificato se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_end.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // inspect last two items
    Myhash_map::iterator it = c1.end();
    --it;
    --it;
    System::Console::WriteLine("*-- --end() = [{0} {1}]",
        it->first, it->second);
    ++it;
    System::Console::WriteLine("*--end() = [{0} {1}]",
        it->first, it->second);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
*-- --end() = [b 2]
*--end() = [c 3]
```

## <a name="hash_mapequal_range-stlclr"></a><a name="equal_range"></a>hash_map:: equal_range (STL/CLR)

Trova un intervallo che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
cliext::pair<iterator, iterator> equal_range(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una coppia di iteratori `cliext::pair<iterator, iterator>(lower_bound(key), upper_bound(key))`. Viene usato per determinare l'intervallo di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_equal_range.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
typedef Myhash_map::pair_iter_iter Pairii;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // display results of failed search
    Pairii pair1 = c1.equal_range(L'x');
    System::Console::WriteLine("equal_range(L'x') empty = {0}",
        pair1.first == pair1.second);

    // display results of successful search
    pair1 = c1.equal_range(L'b');
    for (; pair1.first != pair1.second; ++pair1.first)
        System::Console::Write("[{0} {1}] ",
            pair1.first->first, pair1.first->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
equal_range(L'x') empty = True
[b 2]
```

## <a name="hash_maperase-stlclr"></a><a name="erase"></a>hash_map:: erase (STL/CLR)

Rimuove gli elementi in corrispondenza delle posizioni specificate.

### <a name="syntax"></a>Sintassi

```cpp
iterator erase(iterator where);
iterator erase(iterator first, iterator last);
bool erase(key_type key)
```

#### <a name="parameters"></a>Parametri

*first*<br/>
Inizio dell'intervallo da cancellare.

*key*<br/>
Valore della chiave da cancellare.

*last*<br/>
Fine dell'intervallo da cancellare.

*where*<br/>
Elemento da cancellare.

### <a name="remarks"></a>Osservazioni

La prima funzione membro rimuove l'elemento della sequenza controllata a *cui*punta e restituisce un iteratore che definisce il primo elemento rimanente oltre l'elemento rimosso o [hash_map:: end (STL/CLR)](../dotnet/hash-map-end-stl-clr.md)`()` se tale elemento non esiste. Viene usato per rimuovere un singolo elemento.

La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`) e restituisce un iteratore che definisce il primo elemento rimanente oltre gli eventuali elementi rimossi oppure `end()` se tale elemento non esiste. Viene usato per rimuovere zero o più elementi contigui.

La terza funzione membro rimuove qualsiasi elemento della sequenza controllata la cui chiave ha un ordinamento equivalente a *Key*e restituisce un conteggio del numero di elementi rimossi. Viene usato per rimuovere e contare tutti gli elementi che corrispondono a una chiave specificata.

Ogni cancellazione di elementi richiede tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_erase.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    cliext::hash_map<wchar_t, int> c1;
    c1.insert(cliext::hash_map<wchar_t, int>::make_value(L'a', 1));
    c1.insert(cliext::hash_map<wchar_t, int>::make_value(L'b', 2));
    c1.insert(cliext::hash_map<wchar_t, int>::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (cliext::hash_map<wchar_t, int>::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // erase an element and reinspect
    cliext::hash_map<wchar_t, int>::iterator it =
        c1.erase(c1.begin());
    System::Console::WriteLine("erase(begin()) = [{0} {1}]",
        it->first, it->second);

    // add elements and display " b c d e"
    c1.insert(cliext::hash_map<wchar_t, int>::make_value(L'd', 4));
    c1.insert(cliext::hash_map<wchar_t, int>::make_value(L'e', 5));
    for each (cliext::hash_map<wchar_t, int>::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // erase all but end
    it = c1.end();
    it = c1.erase(c1.begin(), --it);
    System::Console::WriteLine("erase(begin(), end()-1) = [{0} {1}]",
        it->first, it->second);
    System::Console::WriteLine("size() = {0}", c1.size());

    // erase end
    System::Console::WriteLine("erase(L'x') = {0}", c1.erase(L'x'));
    System::Console::WriteLine("erase(L'e') = {0}", c1.erase(L'e'));
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
erase(begin()) = [b 2]
[b 2] [c 3] [d 4] [e 5]
erase(begin(), end()-1) = [e 5]
size() = 1
erase(L'x') = 0
erase(L'e') = 1
```

## <a name="hash_mapfind-stlclr"></a><a name="find"></a>hash_map:: Find (STL/CLR)

Trova un elemento che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator find(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

Se almeno un elemento nella sequenza controllata ha un ordinamento equivalente con la *chiave*, la funzione membro restituisce un iteratore che designa uno di tali elementi. in caso contrario, restituisce [hash_map:: end (STL/CLR)](../dotnet/hash-map-end-stl-clr.md)`()`. Viene usato per individuare un elemento attualmente nella sequenza controllata che corrisponde a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_find.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    System::Console::WriteLine("find {0} = {1}",
        L'A', c1.find(L'A') != c1.end());

    Myhash_map::iterator it = c1.find(L'b');
    System::Console::WriteLine("find {0} = [{1} {2}]",
        L'b', it->first, it->second);

    System::Console::WriteLine("find {0} = {1}",
        L'C', c1.find(L'C') != c1.end());
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
find A = False
find b = [b 2]
find C = False
```

## <a name="hash_mapgeneric_container-stlclr"></a><a name="generic_container"></a>hash_map:: generic_container (STL/CLR)

Tipo dell'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::
    IHash<GKey, GValue>
    generic_container;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_generic_container.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct a generic container
    Myhash_map::generic_container^ gc1 = %c1;
    for each (Myhash_map::value_type elem in gc1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // modify generic and display original
    gc1->insert(Myhash_map::make_value(L'd', 4));
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // modify original and display generic
    c1.insert(Myhash_map::make_value(L'e', 5));
    for each (Myhash_map::value_type elem in gc1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
[a 1] [b 2] [c 3]
[a 1] [b 2] [c 3] [d 4]
[a 1] [b 2] [c 3] [d 4] [e 5]
```

## <a name="hash_mapgeneric_iterator-stlclr"></a><a name="generic_iterator"></a>hash_map:: generic_iterator (STL/CLR)

Tipo di un iteratore da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ContainerBidirectionalIterator<generic_value>
    generic_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore generico che può essere usato con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_generic_iterator.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct a generic container
    Myhash_map::generic_container^ gc1 = %c1;
    for each (Myhash_map::value_type elem in gc1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // get an element and display it
    Myhash_map::generic_iterator gcit = gc1->begin();
    Myhash_map::generic_value gcval = *gcit;
    System::Console::Write("[{0} {1}] ", gcval->first, gcval->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
[a 1] [b 2] [c 3]
[a 1]
```

## <a name="hash_mapgeneric_reverse_iterator-stlclr"></a><a name="generic_reverse_iterator"></a>hash_map:: generic_reverse_iterator (STL/CLR)

Tipo di un iteratore inverso da usare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ReverseRandomAccessIterator<generic_value>
    generic_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore inverso generico che può essere usato con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_generic_reverse_iterator.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct a generic container
    Myhash_map::generic_container^ gc1 = %c1;
    for each (Myhash_map::value_type elem in gc1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // get an element and display it
    Myhash_map::generic_reverse_iterator gcit = gc1->rbegin();
    Myhash_map::generic_value gcval = *gcit;
    System::Console::WriteLine("[{0} {1}] ", gcval->first, gcval->second);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
[a 1] [b 2] [c 3]
[c 3]
```

## <a name="hash_mapgeneric_value-stlclr"></a><a name="generic_value"></a>hash_map:: generic_value (STL/CLR)

Tipo di un elemento da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef GValue generic_value;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato da usare con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_generic_value.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct a generic container
    Myhash_map::generic_container^ gc1 = %c1;
    for each (Myhash_map::value_type elem in gc1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // get an element and display it
    Myhash_map::generic_iterator gcit = gc1->begin();
    Myhash_map::generic_value gcval = *gcit;
    System::Console::WriteLine("[{0} {1}] ", gcval->first, gcval->second);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
[a 1] [b 2] [c 3]
[a 1]
```

## <a name="hash_maphash_delegate-stlclr"></a><a name="hash_delegate"></a>hash_map:: hash_delegate (STL/CLR)

Trova un elemento che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
hasher^ hash_delegate();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il delegato utilizzato per convertire un valore di chiave in un intero. Viene usato per eseguire l'hashing di una chiave.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_hash_delegate.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    Myhash_map::hasher^ myhash = c1.hash_delegate();

    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));
    return (0);
    }
```

```Output
hash(L'a') = 1616896120
hash(L'b') = 570892832
```

## <a name="hash_maphash_map-stlclr"></a><a name="hash_map"></a>hash_map:: hash_map (STL/CLR)

Costruisce un oggetto contenitore.

### <a name="syntax"></a>Sintassi

```cpp
hash_map();
explicit hash_map(key_compare^ pred);
hash_map(key_compare^ pred, hasher^ hashfn);
hash_map(hash_map<Key, Mapped>% right);
hash_map(hash_map<Key, Mapped>^ right);
template<typename InIter>
    hash_maphash_map(InIter first, InIter last);
template<typename InIter>
    hash_map(InIter first, InIter last,
        key_compare^ pred);
template<typename InIter>
    hash_map(InIter first, InIter last,
        key_compare^ pred, hasher^ hashfn);
hash_map(System::Collections::Generic::IEnumerable<GValue>^ right);
hash_map(System::Collections::Generic::IEnumerable<GValue>^ right,
    key_compare^ pred);
hash_map(System::Collections::Generic::IEnumerable<GValue>^ right,
    key_compare^ pred, hasher^ hashfn);
```

#### <a name="parameters"></a>Parametri

*first*<br/>
Inizio dell'intervallo da inserire.

*hashfn*<br/>
Funzione hash per il mapping delle chiavi ai bucket.

*last*<br/>
Fine dell'intervallo da inserire.

*Pred*<br/>
Predicato di ordinamento per la sequenza controllata.

*right*<br/>
Oggetto o un intervallo da inserire.

### <a name="remarks"></a>Osservazioni

Il costruttore:

`hash_map();`

Inizializza la sequenza controllata senza elementi, con il predicato di ordinamento predefinito `key_compare()`e con la funzione hash predefinita. Viene usato per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento e la funzione hash predefiniti.

Il costruttore:

`explicit hash_map(key_compare^ pred);`

Inizializza la sequenza controllata senza elementi, con il predicato di ordinamento *predazione*e con la funzione hash predefinita. Viene usato per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento specificato e la funzione hash predefinita.

Il costruttore:

`hash_map(key_compare^ pred, hasher^ hashfn);`

Inizializza la sequenza controllata senza elementi, con il predicato di ordinamento *predazione*e con la funzione hash *hashfn*. Viene usato per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento e la funzione hash specificati.

Il costruttore:

`hash_map(hash_map<Key, Mapped>% right);`

Inizializza la sequenza controllata con la sequenza [`right.begin()`, `right.end()`), con il predicato di ordinamento predefinito e con la funzione hash predefinita. Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dal hash_map oggetto a *destra*, con il predicato di ordinamento e la funzione hash predefiniti.

Il costruttore:

`hash_map(hash_map<Key, Mapped>^ right);`

Inizializza la sequenza controllata con la sequenza [`right->begin()`, `right->end()`), con il predicato di ordinamento predefinito e con la funzione hash predefinita. Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dal hash_map oggetto a *destra*, con il predicato di ordinamento e la funzione hash predefiniti.

Il costruttore:

`template<typename InIter> hash_map(InIter first, InIter last);`

Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il predicato di ordinamento predefinito e con la funzione hash predefinita. Viene usato per rendere la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento e la funzione hash predefiniti.

Il costruttore:

`template<typename InIter> hash_map(InIter first, InIter last, key_compare^ pred);`

Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il *predicato*Order predicate e con la funzione hash predefinita. Viene usato per rendere la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento specificato e la funzione hash predefinita.

Il costruttore:

`template<typename InIter> hash_map(InIter first, InIter last, key_compare^ pred, hasher^ hashfn);`

Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il *predicato*Order predicate e con la funzione hash *hashfn*. Viene usato per rendere la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento e la funzione hash specificati.

Il costruttore:

`hash_map(System::Collections::Generic::IEnumerable<Key>^ right);`

Inizializza la sequenza controllata con la sequenza designata dal *diritto*dell'enumeratore, con il predicato di ordinamento predefinito e con la funzione hash predefinita. Viene usato per fare in modo che la sequenza controllata venga copiata da un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento e la funzione hash predefiniti.

Il costruttore:

`hash_map(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred);`

Inizializza la sequenza controllata con la sequenza designata dal *diritto*dell'enumeratore, con il *predicato*di ordinamento e con la funzione hash predefinita. Viene usato per fare in modo che la sequenza controllata venga copiata da un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento e la funzione hash predefiniti specificati.

Il costruttore:

`hash_map(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred, hasher^ hashfn);`

Inizializza la sequenza controllata con la sequenza designata dal *diritto*dell'enumeratore, con il *predicato*di ordinamento e con la funzione hash *hashfn*. Viene usato per fare in modo che la sequenza controllata venga copiata da un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento e la funzione hash specificati.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_construct.cpp
// compile with: /clr
#include <cliext/hash_map>

int myfun(wchar_t key)
    { // hash a key
    return (key ^ 0xdeadbeef);
    }

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
// construct an empty container
    Myhash_map c1;
    System::Console::WriteLine("size() = {0}", c1.size());

    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct with an ordering rule
    Myhash_map c2 = cliext::greater_equal<wchar_t>();
    System::Console::WriteLine("size() = {0}", c2.size());

    c2.insert(c1.begin(), c1.end());
    for each (Myhash_map::value_type elem in c2)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct with an ordering rule and hash function
    Myhash_map c2h(cliext::greater_equal<wchar_t>(),
        gcnew Myhash_map::hasher(&myfun));
    System::Console::WriteLine("size() = {0}", c2h.size());

    c2h.insert(c1.begin(), c1.end());
    for each (Myhash_map::value_type elem in c2h)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    System::Console::WriteLine();

    // construct with an iterator range
    Myhash_map c3(c1.begin(), c1.end());
    for each (Myhash_map::value_type elem in c3)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct with an iterator range and an ordering rule
    Myhash_map c4(c1.begin(), c1.end(),
        cliext::greater_equal<wchar_t>());
    for each (Myhash_map::value_type elem in c4)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct with an iterator range and an ordering rule and hash function
    Myhash_map c4h(c1.begin(), c1.end(),
        cliext::greater_equal<wchar_t>(),
        gcnew Myhash_map::hasher(&myfun));
    for each (Myhash_map::value_type elem in c4h)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    System::Console::WriteLine();

    // construct with an enumeration
    Myhash_map c5(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<
            Myhash_map::value_type>^)%c3);
    for each (Myhash_map::value_type elem in c5)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct with an enumeration and an ordering rule
    Myhash_map c6(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<
            Myhash_map::value_type>^)%c3,
                cliext::greater_equal<wchar_t>());
    for each (Myhash_map::value_type elem in c6)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct with an enumeration and an ordering rule and hash function
    Myhash_map c6h(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<
            Myhash_map::value_type>^)%c3,
                cliext::greater_equal<wchar_t>(),
                gcnew Myhash_map::hasher(&myfun));
    for each (Myhash_map::value_type elem in c6h)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    System::Console::WriteLine();

    // construct by copying another container
    Myhash_map c7(c4);
    for each (Myhash_map::value_type elem in c7)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct by copying a container handle
    Myhash_map c8(%c3);
    for each (Myhash_map::value_type elem in c8)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
size() = 0
[a 1] [b 2] [c 3]
size() = 0
[a 1] [b 2] [c 3]
size() = 0
[c 3] [b 2] [a 1]

[a 1] [b 2] [c 3]
[a 1] [b 2] [c 3]
[c 3] [b 2] [a 1]

[a 1] [b 2] [c 3]
[a 1] [b 2] [c 3]
[c 3] [b 2] [a 1]

[a 1] [b 2] [c 3]
[a 1] [b 2] [c 3]
```

## <a name="hash_maphasher-stlclr"></a><a name="hasher"></a>hash_map:: hasher (STL/CLR)

Delegato di hashing per una chiave.

### <a name="syntax"></a>Sintassi

```cpp
Microsoft::VisualC::StlClr::UnaryDelegate<GKey, int>
    hasher;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un delegato che converte un valore di chiave in un intero.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_hasher.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    Myhash_map::hasher^ myhash = c1.hash_delegate();

    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));
    return (0);
    }
```

```Output
hash(L'a') = 1616896120
hash(L'b') = 570892832
```

## <a name="hash_mapinsert-stlclr"></a><a name="insert"></a>hash_map:: Insert (STL/CLR)

Aggiunge elementi.

### <a name="syntax"></a>Sintassi

```cpp
cliext::pair<iterator, bool> insert(value_type val);
iterator insert(iterator where, value_type val);
template<typename InIter>
    void insert(InIter first, InIter last);
void insert(System::Collections::Generic::IEnumerable<value_type>^ right);
```

#### <a name="parameters"></a>Parametri

*first*<br/>
Inizio dell'intervallo da inserire.

*last*<br/>
Fine dell'intervallo da inserire.

*right*<br/>
Enumerazione da inserire.

*val*<br/>
Valore della chiave da inserire.

*where*<br/>
Posizione del contenitore da inserire (solo hint).

### <a name="remarks"></a>Osservazioni

Ogni funzione membro inserisce una sequenza specificata dagli operandi rimanenti.

La prima funzione membro tenta di inserire un elemento con il valore `val`e restituisce una coppia di valori `X`. Se `X.second` è true, `X.first` designa l'elemento appena inserito; in caso contrario `X.first` definisce un elemento con ordinamento equivalente già esistente e non viene inserito alcun nuovo elemento. Viene utilizzato per inserire un singolo elemento.

La seconda funzione membro inserisce un elemento con il valore *Val*, usando *where* come hint (per migliorare le prestazioni) e restituisce un iteratore che designa l'elemento appena inserito. Viene usato per inserire un singolo elemento che può essere adiacente a un elemento noto.

La terza funzione membro inserisce la sequenza [`first``last`). Viene usato per inserire zero o più elementi copiati da un'altra sequenza.

La quarta funzione membro inserisce la sequenza designata dal *diritto*. Viene usato per inserire una sequenza descritta da un enumeratore.

Ogni inserimento di elementi richiede tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata. L'inserimento può essere eseguito in un tempo costante ammortizzato, tuttavia, dato un suggerimento che designa un elemento adiacente al punto di inserimento.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_insert.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
typedef Myhash_map::pair_iter_bool Pairib;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // insert a single value, unique and duplicate
    Pairib pair1 =
        c1.insert(Myhash_map::make_value(L'x', 24));
    System::Console::WriteLine("insert([L'x' 24]) = [{0} {1}] {2}",
        pair1.first->first, pair1.first->second, pair1.second);

    pair1 = c1.insert(Myhash_map::make_value(L'b', 2));
    System::Console::WriteLine("insert([L'b' 2]) = [{0} {1}] {2}",
        pair1.first->first, pair1.first->second, pair1.second);

    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // insert a single value with hint
    Myhash_map::iterator it =
        c1.insert(c1.begin(), Myhash_map::make_value(L'y', 25));
    System::Console::WriteLine("insert(begin(), [L'y' 25]) = [{0} {1}]",
        it->first, it->second);
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // insert an iterator range
    Myhash_map c2;
    it = c1.end();
    c2.insert(c1.begin(), --it);
    for each (Myhash_map::value_type elem in c2)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // insert an enumeration
    Myhash_map c3;
    c3.insert(   // NOTE: cast is not needed
        (System::Collections::Generic::
            IEnumerable<Myhash_map::value_type>^)%c1);
    for each (Myhash_map::value_type elem in c3)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
insert([L'x' 24]) = [x 24] True
insert([L'b' 2]) = [b 2] False
[a 1] [b 2] [c 3] [x 24]
insert(begin(), [L'y' 25]) = [y 25]
[a 1] [b 2] [c 3] [x 24] [y 25]
[a 1] [b 2] [c 3] [x 24]
[a 1] [b 2] [c 3] [x 24] [y 25]
```

## <a name="hash_mapiterator-stlclr"></a><a name="iterator"></a>hash_map:: iterator (STL/CLR)

Tipo di un iteratore per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T1 iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T1` che può fungere da iteratore bidirezionale per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_iterator.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    Myhash_map::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        System::Console::Write("[{0} {1}] ", it->first, it->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
```

## <a name="hash_mapkey_comp-stlclr"></a><a name="key_comp"></a>hash_map:: key_comp (STL/CLR)

Copia il delegato di ordinamento per due chiavi.

### <a name="syntax"></a>Sintassi

```cpp
key_compare^key_comp();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. Viene utilizzato per confrontare due chiavi.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_key_comp.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    Myhash_map::key_compare^ kcomp = c1.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();

    // test a different ordering rule
    Myhash_map c2 = cliext::greater<wchar_t>();
    kcomp = c2.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    return (0);
    }
```

```Output
compare(L'a', L'a') = True
compare(L'a', L'b') = True
compare(L'b', L'a') = False

compare(L'a', L'a') = False
compare(L'a', L'b') = False
compare(L'b', L'a') = True
```

## <a name="hash_mapkey_compare-stlclr"></a><a name="key_compare"></a>hash_map:: key_compare (STL/CLR)

Delegato di ordinamento per due chiavi.

### <a name="syntax"></a>Sintassi

```cpp
Microsoft::VisualC::StlClr::BinaryDelegate<GKey, GKey, bool>
    key_compare;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del delegato che determina l'ordinamento degli argomenti chiave.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_key_compare.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    Myhash_map::key_compare^ kcomp = c1.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();

    // test a different ordering rule
    Myhash_map c2 = cliext::greater<wchar_t>();
    kcomp = c2.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    return (0);
    }
```

```Output
compare(L'a', L'a') = True
compare(L'a', L'b') = True
compare(L'b', L'a') = False

compare(L'a', L'a') = False
compare(L'a', L'b') = False
compare(L'b', L'a') = True
```

## <a name="hash_mapkey_type-stlclr"></a><a name="key_type"></a>hash_map:: key_type (STL/CLR)

Tipo di una chiave di ordinamento.

### <a name="syntax"></a>Sintassi

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo della *chiave*del parametro di modello.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_key_type.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]" using key_type
    for (Myhash_map::iterator it = c1.begin(); it != c1.end(); ++it)
        {   // store element in key_type object
        Myhash_map::key_type val = it->first;

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="hash_mapload_factor-stlclr"></a><a name="load_factor"></a>hash_map:: load_factor (STL/CLR)

Conta il numero medio di elementi per bucket.

### <a name="syntax"></a>Sintassi

```cpp
float load_factor();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce `(float)`[hash_map:: size (STL/CLR)](../dotnet/hash-map-size-stl-clr.md)`() /` [hash_map:: bucket_count (STL/CLR)](../dotnet/hash-map-bucket-count-stl-clr.md)`()`. Viene usato per determinare le dimensioni medie del bucket.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_load_factor.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1 = gcnew Myhash_map;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // inspect current parameters
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    System::Console::WriteLine();

    // change max_load_factor and redisplay
    c1.max_load_factor(0.25f);
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    System::Console::WriteLine();

    // rehash and redisplay
    c1.rehash(100);
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
bucket_count() = 16
load_factor() = 0.1875
max_load_factor() = 4

bucket_count() = 16
load_factor() = 0.1875
max_load_factor() = 0.25

bucket_count() = 128
load_factor() = 0.0234375
max_load_factor() = 0.25
```

## <a name="hash_maplower_bound-stlclr"></a><a name="lower_bound"></a>hash_map:: lower_bound (STL/CLR)

Trova l'inizio dell'intervallo che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator lower_bound(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

La funzione membro determina il primo elemento `X` nella sequenza controllata che effettua l'hashing allo stesso bucket della *chiave* e ha un ordinamento equivalente a *Key*. Se tale elemento non esiste, restituisce [hash_map:: end (STL/CLR)](../dotnet/hash-map-end-stl-clr.md)`()`; in caso contrario, restituisce un iteratore che definisce `X`. Viene usato per individuare l'inizio di una sequenza di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_lower_bound.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    System::Console::WriteLine("lower_bound(L'x')==end() = {0}",
        c1.lower_bound(L'x') == c1.end());

    Myhash_map::iterator it = c1.lower_bound(L'a');
    System::Console::WriteLine("*lower_bound(L'a') = [{0} {1}]",
        it->first, it->second);
    it = c1.lower_bound(L'b');
    System::Console::WriteLine("*lower_bound(L'b') = [{0} {1}]",
        it->first, it->second);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
lower_bound(L'x')==end() = True
*lower_bound(L'a') = [a 1]
*lower_bound(L'b') = [b 2]
```

## <a name="hash_mapmake_value-stlclr"></a><a name="make_value"></a>hash_map:: make_value (STL/CLR)

Costruisce un oggetto valore.

### <a name="syntax"></a>Sintassi

```cpp
static value_type make_value(key_type key, mapped_type mapped);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da usare.

*mappato*<br/>
Valore mappato da cercare.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un oggetto `value_type` la cui chiave *è la chiave e il* cui valore mappato è *mappato*. Viene usato per comporre un oggetto adatto per l'uso con diverse altre funzioni membro.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_make_value.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
```

## <a name="hash_mapmapped_type-stlclr"></a><a name="mapped_type"></a>hash_map:: mapped_type (STL/CLR)

Tipo di un valore mappato associato a ogni chiave.

### <a name="syntax"></a>Sintassi

```cpp
typedef Mapped mapped_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `Mapped`.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_mapped_type.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]" using mapped_type
    for (Myhash_map::iterator it = c1.begin(); it != c1.end(); ++it)
        {   // store element in mapped_type object
        Myhash_map::mapped_type val = it->second;

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
1 2 3
```

## <a name="hash_mapmax_load_factor-stlclr"></a><a name="max_load_factor"></a>hash_map:: max_load_factor (STL/CLR)

Ottiene o imposta il numero massimo di elementi per bucket.

### <a name="syntax"></a>Sintassi

```cpp
float max_load_factor();
void max_load_factor(float new_factor);
```

#### <a name="parameters"></a>Parametri

*new_factor*<br/>
Nuovo fattore di carico massimo da archiviare.

### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce il fattore di carico massimo archiviato corrente. Viene usato per determinare le dimensioni massime del bucket medio.

La seconda funzione membro sostituisce il fattore di carico massimo dell'archivio con *new_factor*. Non viene eseguito alcun rihashing automatico fino a un inserimento successivo.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_max_load_factor.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1 = gcnew Myhash_map;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // inspect current parameters
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    System::Console::WriteLine();

    // change max_load_factor and redisplay
    c1.max_load_factor(0.25f);
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    System::Console::WriteLine();

    // rehash and redisplay
    c1.rehash(100);
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
bucket_count() = 16
load_factor() = 0.1875
max_load_factor() = 4

bucket_count() = 16
load_factor() = 0.1875
max_load_factor() = 0.25

bucket_count() = 128
load_factor() = 0.0234375
max_load_factor() = 0.25
```

## <a name="hash_mapoperator-stlclr"></a><a name="op_as"></a>hash_map:: operator = (STL/CLR)

Sostituisce la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
hash_map<Key, Mapped>% operator=(hash_map<Key, Mapped>% right);
```

#### <a name="parameters"></a>Parametri

*right*<br/>
Contenitore da copiare.

### <a name="remarks"></a>Osservazioni

L'operatore membro copia *right* nell'oggetto, quindi restituisce `*this`. Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata a *destra*.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_operator_as.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // assign to a new container
    Myhash_map c2;
    c2 = c1;
// display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c2)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
[a 1] [b 2] [c 3]
```

## <a name="hash_mapoperatorstlclr"></a><a name="op"></a>operatore hash_map:: (STL/CLR)

Esegue il mapping di una chiave al relativo valore mappato associato.

### <a name="syntax"></a>Sintassi

```cpp
mapped_type operator[](key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

Le funzioni membro tentano di trovare un elemento con un ordinamento equivalente alla *chiave*. Se ne trova uno, restituisce il valore mappato associato; in caso contrario, inserisce `value_type(key, mapped_type())` e restituisce il valore mappato (predefinito) associato. Viene usato per cercare un valore mappato in base alla relativa chiave associata oppure per assicurarsi che esista una voce per la chiave se non ne viene trovata una.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_operator_sub.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    System::Console::WriteLine("c1[{0}] = {1}",
        L'A', c1[L'A']);
    System::Console::WriteLine("c1[{0}] = {1}",
        L'b', c1[L'b']);

    // redisplay altered contents
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // alter mapped values and redisplay
    c1[L'A'] = 10;
    c1[L'c'] = 13;
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
c1[A] = 0
c1[b] = 2
[a 1] [A 0] [b 2] [c 3]
[a 1] [A 10] [b 2] [c 13]
```

## <a name="hash_maprbegin-stlclr"></a><a name="rbegin"></a>hash_map:: rbegin (STL/CLR)

Indica l'inizio della sequenza controllata inversa.

### <a name="syntax"></a>Sintassi

```cpp
reverse_iterator rbegin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore inverso che definisce l'ultimo elemento della sequenza controllata o appena oltre l'inizio di una sequenza vuota. Definisce quindi l'oggetto `beginning` della sequenza inversa. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_rbegin.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // inspect first two items in reversed sequence
    Myhash_map::reverse_iterator rit = c1.rbegin();
    System::Console::WriteLine("*rbegin() = [{0} {1}]",
        rit->first, rit->second);
    ++rit;
    System::Console::WriteLine("*++rbegin() = [{0} {1}]",
        rit->first, rit->second);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
*rbegin() = [c 3]
*++rbegin() = [b 2]
```

## <a name="hash_mapreference-stlclr"></a><a name="reference"></a>hash_map:: Reference (STL/CLR)

Tipo di un riferimento a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_reference.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    Myhash_map::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        {   // get a reference to an element
        Myhash_map::reference ref = *it;
        System::Console::Write("[{0} {1}] ", ref->first, ref->second);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
```

## <a name="hash_maprehash-stlclr"></a><a name="rehash"></a>hash_map:: rehash (STL/CLR)

Ricompila la tabella hash.

### <a name="syntax"></a>Sintassi

```cpp
void rehash();
```

### <a name="remarks"></a>Osservazioni

La funzione membro ricompila la tabella hash, assicurando che [hash_map:: load_factor (STL/CLR)](../dotnet/hash-map-load-factor-stl-clr.md)`() <=` [hash_map:: max_load_factor (STL/CLR)](../dotnet/hash-map-max-load-factor-stl-clr.md). In caso contrario, la tabella hash aumenta di dimensioni solo se necessario dopo un inserimento. Non diminuisce mai automaticamente le dimensioni. Viene usato per regolare le dimensioni della tabella hash.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_rehash.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1 = gcnew Myhash_map;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // inspect current parameters
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    System::Console::WriteLine();

    // change max_load_factor and redisplay
    c1.max_load_factor(0.25f);
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    System::Console::WriteLine();

    // rehash and redisplay
    c1.rehash(100);
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());
    System::Console::WriteLine("max_load_factor() = {0}",
        c1.max_load_factor());
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
bucket_count() = 16
load_factor() = 0.1875
max_load_factor() = 4

bucket_count() = 16
load_factor() = 0.1875
max_load_factor() = 0.25

bucket_count() = 128
load_factor() = 0.0234375
max_load_factor() = 0.25
```

## <a name="hash_maprend-stlclr"></a><a name="rend"></a>hash_map:: rend (STL/CLR)

Indica la fine della sequenza controllata inversa.

### <a name="syntax"></a>Sintassi

```cpp
reverse_iterator rend();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore inverso che punta appena oltre l'inizio della sequenza controllata. Definisce quindi l'oggetto `end` della sequenza inversa. Viene utilizzato per ottenere un iteratore che definisce la fine `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_rend.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // inspect first two items in reversed sequence
    Myhash_map::reverse_iterator rit = c1.rend();
    --rit;
    --rit;
    System::Console::WriteLine("*-- --rend() = [{0} {1}]",
        rit->first, rit->second);
    ++rit;
    System::Console::WriteLine("*--rend() = [{0} {1}]",
        rit->first, rit->second);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
*-- --rend() = [b 2]
*--rend() = [a 1]
```

## <a name="hash_mapreverse_iterator-stlclr"></a><a name="reverse_iterator"></a>hash_map:: reverse_iterator (STL/CLR)

Tipo di un iteratore inverso della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T3 reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T3` che può essere utilizzato come iteratore inverso per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_reverse_iterator.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]" reversed
    Myhash_map::reverse_iterator rit = c1.rbegin();
    for (; rit != c1.rend(); ++rit)
        System::Console::Write("[{0} {1}] ", rit->first, rit->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[c 3] [b 2] [a 1]
```

## <a name="hash_mapsize-stlclr"></a><a name="size"></a>hash_map:: size (STL/CLR)

Conta il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
size_type size();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza controllata. Viene usato per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se è sufficiente che la sequenza abbia dimensioni diversi da zero, vedere [hash_map:: Empty (STL/CLR)](../dotnet/hash-map-empty-stl-clr.md)`()`.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_size.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0} after clearing", c1.size());

    // add elements and clear again
    c1.insert(Myhash_map::make_value(L'd', 4));
    c1.insert(Myhash_map::make_value(L'e', 5));
    System::Console::WriteLine("size() = {0} after adding 2", c1.size());
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
size() = 0 after clearing
size() = 2 after adding 2
```

## <a name="hash_mapsize_type-stlclr"></a><a name="size_type"></a>hash_map:: size_type (STL/CLR)

Tipo di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int size_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi non negativi.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_size_type.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // compute positive difference
    Myhash_map::size_type diff = 0;
    for (Myhash_map::iterator it = c1.begin(); it != c1.end(); ++it)
        ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
end()-begin() = 3
```

## <a name="hash_mapswap-stlclr"></a><a name="swap"></a>hash_map:: swap (STL/CLR)

Scambia il contenuto di due contenitori.

### <a name="syntax"></a>Sintassi

```cpp
void swap(hash_map<Key, Mapped>% right);
```

#### <a name="parameters"></a>Parametri

*right*<br/>
Contenitore con cui scambiare il contenuto.

### <a name="remarks"></a>Osservazioni

La funzione membro scambia le sequenze controllate tra `this` e *right*. Esegue questa operazione in un tempo costante e non genera alcuna eccezione. Viene usato come modo rapido per scambiare il contenuto di due contenitori.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_swap.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // construct another container with repetition of values
    Myhash_map c2;
    c2.insert(Myhash_map::make_value(L'd', 4));
    c2.insert(Myhash_map::make_value(L'e', 5));
    c2.insert(Myhash_map::make_value(L'f', 6));
    for each (Myhash_map::value_type elem in c2)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // swap and redisplay
    c1.swap(c2);
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    for each (Myhash_map::value_type elem in c2)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
[d 4] [e 5] [f 6]
[d 4] [e 5] [f 6]
[a 1] [b 2] [c 3]
```

## <a name="hash_mapto_array-stlclr"></a><a name="to_array"></a>hash_map:: to_array (STL/CLR)

Copia la sequenza controllata in una nuova matrice.

### <a name="syntax"></a>Sintassi

```cpp
cli::array<value_type>^ to_array();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una matrice che contiene la sequenza controllata. Viene usato per ottenere una copia della sequenza controllata in forma di matrice.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_to_array.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // copy the container and modify it
    cli::array<Myhash_map::value_type>^ a1 = c1.to_array();

    c1.insert(Myhash_map::make_value(L'd', 4));
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    // display the earlier array copy
    for each (Myhash_map::value_type elem in a1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3] [d 4]
[a 1] [b 2] [c 3]
```

## <a name="hash_mapupper_bound-stlclr"></a><a name="upper_bound"></a>hash_map:: upper_bound (STL/CLR)

Trova la fine dell'intervallo che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator upper_bound(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

La funzione membro determina l'ultimo elemento `X` nella sequenza controllata che effettua l'hashing allo stesso bucket della *chiave* e ha un ordinamento equivalente a *Key*. Se tale elemento non esiste o `X` è l'ultimo elemento nella sequenza controllata, restituisce [hash_map:: end (STL/CLR)](../dotnet/hash-map-end-stl-clr.md)`()`; in caso contrario, restituisce un iteratore che definisce il primo elemento oltre `X`. Viene usato per individuare la fine di una sequenza di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_upper_bound.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]"
    for each (Myhash_map::value_type elem in c1)
        System::Console::Write("[{0} {1}] ", elem->first, elem->second);
    System::Console::WriteLine();

    System::Console::WriteLine("upper_bound(L'x')==end() = {0}",
        c1.upper_bound(L'x') == c1.end());

    Myhash_map::iterator it = c1.upper_bound(L'a');
    System::Console::WriteLine("*upper_bound(L'a') = [{0} {1}]",
        it->first, it->second);
    it = c1.upper_bound(L'b');
    System::Console::WriteLine("*upper_bound(L'b') = [{0} {1}]",
        it->first, it->second);
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
upper_bound(L'x')==end() = True
*upper_bound(L'a') = [b 2]
*upper_bound(L'b') = [c 3]
```

## <a name="hash_mapvalue_comp-stlclr"></a><a name="value_comp"></a>hash_map:: value_comp (STL/CLR)

Copia il delegato di ordinamento per due valori di elemento.

### <a name="syntax"></a>Sintassi

```cpp
value_compare^ value_comp();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. Viene utilizzato per confrontare due valori di elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_value_comp.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    Myhash_map::value_compare^ kcomp = c1.value_comp();

    System::Console::WriteLine("compare([L'a', 1], [L'a', 1]) = {0}",
        kcomp(Myhash_map::make_value(L'a', 1),
            Myhash_map::make_value(L'a', 1)));
    System::Console::WriteLine("compare([L'a', 1], [L'b', 2]) = {0}",
        kcomp(Myhash_map::make_value(L'a', 1),
            Myhash_map::make_value(L'b', 2)));
    System::Console::WriteLine("compare([L'b', 2], [L'a', 1]) = {0}",
        kcomp(Myhash_map::make_value(L'b', 2),
            Myhash_map::make_value(L'a', 1)));
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare([L'a', 1], [L'a', 1]) = True
compare([L'a', 1], [L'b', 2]) = True
compare([L'b', 2], [L'a', 1]) = False
```

## <a name="hash_mapvalue_compare-stlclr"></a><a name="value_compare"></a>hash_map:: value_compare (STL/CLR)

Delegato di ordinamento per i valori di due elementi.

### <a name="syntax"></a>Sintassi

```cpp
Microsoft::VisualC::StlClr::BinaryDelegate<generic_value, generic_value, bool>
    value_compare;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del delegato che determina l'ordine dei relativi argomenti valore.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_value_compare.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    Myhash_map::value_compare^ kcomp = c1.value_comp();

    System::Console::WriteLine("compare([L'a', 1], [L'a', 1]) = {0}",
        kcomp(Myhash_map::make_value(L'a', 1),
            Myhash_map::make_value(L'a', 1)));
    System::Console::WriteLine("compare([L'a', 1], [L'b', 2]) = {0}",
        kcomp(Myhash_map::make_value(L'a', 1),
            Myhash_map::make_value(L'b', 2)));
    System::Console::WriteLine("compare([L'b', 2], [L'a', 1]) = {0}",
        kcomp(Myhash_map::make_value(L'b', 2),
            Myhash_map::make_value(L'a', 1)));
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare([L'a', 1], [L'a', 1]) = True
compare([L'a', 1], [L'b', 2]) = True
compare([L'b', 2], [L'a', 1]) = False
```

## <a name="hash_mapvalue_type-stlclr"></a><a name="value_type"></a>hash_map:: value_type (STL/CLR)

Tipo di un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef generic_value value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è sinonimo di `generic_value`.

### <a name="example"></a>Esempio

```cpp
// cliext_hash_map_value_type.cpp
// compile with: /clr
#include <cliext/hash_map>

typedef cliext::hash_map<wchar_t, int> Myhash_map;
int main()
    {
    Myhash_map c1;
    c1.insert(Myhash_map::make_value(L'a', 1));
    c1.insert(Myhash_map::make_value(L'b', 2));
    c1.insert(Myhash_map::make_value(L'c', 3));

    // display contents " [a 1] [b 2] [c 3]" using value_type
    for (Myhash_map::iterator it = c1.begin(); it != c1.end(); ++it)
        {   // store element in value_type object
        Myhash_map::value_type val = *it;
        System::Console::Write("[{0} {1}] ", val->first, val->second);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
[a 1] [b 2] [c 3]
```
