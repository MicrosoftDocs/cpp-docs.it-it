---
title: hash_set (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_set
- cliext::hash_set::begin
- cliext::hash_set::bucket_count
- cliext::hash_set::clear
- cliext::hash_set::const_iterator
- cliext::hash_set::const_reference
- cliext::hash_set::const_reverse_iterator
- cliext::hash_set::count
- cliext::hash_set::difference_type
- cliext::hash_set::empty
- cliext::hash_set::end
- cliext::hash_set::equal_range
- cliext::hash_set::erase
- cliext::hash_set::find
- cliext::hash_set::generic_container
- cliext::hash_set::generic_iterator
- cliext::hash_set::generic_reverse_iterator
- cliext::hash_set::generic_value
- cliext::hash_set::hash_delegate
- cliext::hash_set::hash_set
- cliext::hash_set::hasher
- cliext::hash_set::insert
- cliext::hash_set::iterator
- cliext::hash_set::key_comp
- cliext::hash_set::key_compare
- cliext::hash_set::key_type
- cliext::hash_set::load_factor
- cliext::hash_set::lower_bound
- cliext::hash_set::make_value
- cliext::hash_set::max_load_factor
- cliext::hash_set::operator=
- cliext::hash_set::rbegin
- cliext::hash_set::reference
- cliext::hash_set::rehash
- cliext::hash_set::rend
- cliext::hash_set::reverse_iterator
- cliext::hash_set::size
- cliext::hash_set::size_type
- cliext::hash_set::swap
- cliext::hash_set::to_array
- cliext::hash_set::upper_bound
- cliext::hash_set::value_comp
- cliext::hash_set::value_compare
- cliext::hash_set::value_type
dev_langs:
- C++
helpviewer_keywords:
- <cliext/hash_set> header [STL/CLR]
- hash_set class [STL/CLR]
- <hash_set> header [STL/CLR]
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
- hash_set member [STL/CLR]
- hasher member [STL/CLR]
- insert member [STL/CLR]
- iterator member [STL/CLR]
- key_comp member [STL/CLR]
- key_compare member [STL/CLR]
- key_type member [STL/CLR]
- load_factor member [STL/CLR]
- lower_bound member [STL/CLR]
- make_value member [STL/CLR]
- max_load_factor member [STL/CLR]
- operator= member [STL/CLR]
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
ms.assetid: d110e356-ba3e-4e52-9e2d-d997bf975c96
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: ba3494599c57160bf87a10e53aa2143d9e2b78c0
ms.sourcegitcommit: 301bb19056e5bae84ff50f7d1df1e546efe225ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/21/2018
ms.locfileid: "36305738"
---
# <a name="hashset-stlclr"></a>hash_set (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone di accesso bidirezionale. Utilizzare il contenitore `hash_set` per gestire una sequenza di elementi come una tabella hash, l'archiviazione di un bidirezionale ogni voce della tabella collegata elenco di nodi e ogni nodo di archiviazione di un elemento. Il valore di ogni elemento viene utilizzato come chiave per la sequenza di ordinamento.  
  
 Nella sezione successiva, `GValue` equivale `GKey`, che a sua volta equivale `Key` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Key^`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Key>  
    ref class hash_set  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        Microsoft::VisualC::StlClr::IHash<Gkey, GValue>  
    { ..... };  
```  
  
#### <a name="parameters"></a>Parametri  
 Chiave  
 Il tipo del componente chiave di un elemento nella sequenza controllata.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_set >  
  
 **Namespace:** cliext  

## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[hash_set::const_iterator (STL/CLR)](#const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|  
|[hash_set::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|  
|[hash_set::const_reverse_iterator (STL/CLR)](#const_reverse_iterator)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[hash_set::difference_type (STL/CLR)](#difference_type)|Il tipo di una distanza tra due elementi (possibilmente firmato).|  
|[hash_set::generic_container (STL/CLR)](#generic_container)|Il tipo dell'interfaccia generica per il contenitore.|  
|[hash_set::generic_iterator (STL/CLR)](#generic_iterator)|Il tipo di iteratore per l'interfaccia generica per il contenitore.|  
|[hash_set::generic_reverse_iterator (STL/CLR)](#generic_reverse_iterator)|Il tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|  
|[hash_set::generic_value (STL/CLR)](#generic_value)|Il tipo di un elemento per l'interfaccia generica per il contenitore.|  
|[hash_set::hasher (STL/CLR)](#hasher)|Il delegato hash per una chiave.|  
|[hash_set::iterator (STL/CLR)](#iterator)|Tipo di un iteratore per la sequenza controllata.|  
|[hash_set::key_compare (STL/CLR)](#key_compare)|Delegato per due chiavi di ordinamento.|  
|[hash_set::key_type (STL/CLR)](#key_type)|Tipo di una chiave di ordinamento.|  
|[hash_set::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|  
|[hash_set::reverse_iterator (STL/CLR)](#reverse_iterator)|Tipo di un iteratore inverso della sequenza controllata.|  
|[hash_set::size_type (STL/CLR)](#size_type)|Il tipo di una distanza (negativo) tra due elementi.|  
|[hash_set::value_compare (STL/CLR)](#value_compare)|Il delegato di ordinamento per valori di due elementi.|  
|[hash_set::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[hash_set::begin (STL/CLR)](#begin)|Indica l'inizio della sequenza controllata.|  
|[hash_set::bucket_count (STL/CLR)](#bucket_count)|Conta il numero di bucket.|  
|[hash_set::clear (STL/CLR)](#clear)|Rimuove tutti gli elementi.|  
|[hash_set::count (STL/CLR)](#count)|Conteggi di elementi corrispondenti a una chiave specificata.|  
|[hash_set::empty (STL/CLR)](#empty)|Verifica se sono presenti o meno degli elementi.|  
|[hash_set::end (STL/CLR)](#end)|Designa la fine della sequenza controllata.|  
|[hash_set::equal_range (STL/CLR)](#equal_range)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[hash_set::erase (STL/CLR)](#erase)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[hash_set::find (STL/CLR)](#find)|Trova un elemento che corrisponde a una chiave specificata.|  
|[hash_set::hash_delegate (STL/CLR)](#hash_delegate)|Copia il delegato per una chiave hash.|  
|[hash_set::hash_set (STL/CLR)](#hash_set)|Costruisce un oggetto contenitore.|  
|[hash_set::insert (STL/CLR)](#insert)|Aggiunge elementi.|  
|[hash_set::key_comp (STL/CLR)](#key_comp)|Copia il delegato per due chiavi di ordinamento.|  
|[hash_set::load_factor (STL/CLR)](#load_factor)|Conta il numero medio di elementi per bucket.|  
|[hash_set::lower_bound (STL/CLR)](#lower_bound)|Consente di trovare l'inizio dell'intervallo che corrisponde a una chiave specificata.|  
|[hash_set::make_value (STL/CLR)](#make_value)|Costruisce un oggetto valore.|  
|[hash_set::max_load_factor (STL/CLR)](#max_load_factor)|Ottiene o imposta il numero massimo di elementi per bucket.|  
|[hash_set::rbegin (STL/CLR)](#rbegin)|Indica l'inizio della sequenza controllata inversa.|  
|[hash_set::rehash (STL/CLR)](#rehash)|Ricompila la tabella hash.|  
|[hash_set::rend (STL/CLR)](#rend)|Indica la fine della sequenza controllata inversa.|  
|[hash_set::size (STL/CLR)](#size)|Conta il numero di elementi.|  
|[hash_set::swap (STL/CLR)](#swap)|Scambia il contenuto di due contenitori.|  
|[hash_set::to_array (STL/CLR)](#to_array)|La sequenza controllata viene copiata in una nuova matrice.|  
|[hash_set::upper_bound (STL/CLR)](#upper_bound)|Trova fine dell'intervallo che corrisponde a una chiave specificata.|  
|[hash_set::value_comp (STL/CLR)](#value_comp)|Copia il delegato di ordinamento per valori di due elementi.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[hash_set::operator= (STL/CLR)](#op)|Sostituisce la sequenza controllata.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|<xref:System.Collections.IEnumerable>|Tra gli elementi di sequenza.|  
|<xref:System.Collections.ICollection>|Gestione gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza tramite elementi tipizzati.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestione gruppo di elementi tipizzati.|  
|IHash\<chiave, valore >|Gestisci contenitore generico.|  
  
### <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza che controlla come singoli nodi in un elenco collegato bidirezionale. Per velocizzare l'accesso, l'oggetto gestisce una matrice di lunghezza variabile di puntatori nell'elenco (la tabella hash), in modo efficace la gestione dell'intero elenco come una sequenza di sottoelenchi, o bucket. Inserisce gli elementi in un bucket che mantiene ordinato modificando i collegamenti tra nodi, mai copiando il contenuto di un nodo a un altro. Pertanto, è possibile inserire e rimuovere elementi liberamente senza disturbare elementi rimanenti.  
  
 L'oggetto ordini ogni bucket esso controllata chiamando un oggetto delegato archiviato di tipo [hash_set:: key_compare (STL/CLR)](../dotnet/hash-set-key-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce hash_set; Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<=(key_type, key_type)`.  
  
 Accedere all'oggetto delegato archiviato chiamando la funzione membro [hash_set:: key_comp (STL/CLR)](../dotnet/hash-set-key-comp-stl-clr.md)`()`. Tale oggetto delegato deve definire un ordinamento equivalente tra le chiavi di tipo [hash_set:: KEY_TYPE (STL/CLR)](../dotnet/hash-set-key-type-stl-clr.md). Pertanto, per le due chiavi `X` e `Y`:  
  
 `key_comp()(X, Y)` Restituisce il valore booleano stesso risultato a ogni chiamata.  
  
 Se `key_comp()(X, Y) && key_comp()(Y, X)` è true, `X` e `Y` rientrano hanno un ordinamento equivalente.  
  
 Tutte le regole di ordinamento che si comporta come `operator<=(key_type, key_type)`, `operator>=(key_type, key_type)` o `operator==(key_type, key_type)` definisce eqivalent ordinamento.  
  
 Si noti che il contenitore assicura solo che gli elementi le cui chiavi hanno un ordinamento equivalente (e quali hash con lo stesso valore di tipo integer) sono adiacenti all'interno di un bucket. A differenza di classe modello [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md), un oggetto della classe modello `hash_set` assicura che le chiavi per tutti gli elementi siano univoche. (Nessun due chiavi hanno un ordinamento equivalente).  
  
 L'oggetto determina quale bucket deve contenere una determinata chiave di ordinamento chiamando un oggetto delegato archiviato di tipo [hash_set::hasher (STL/CLR)](../dotnet/hash-set-hasher-stl-clr.md). L'accesso all'oggetto archiviato chiamando la funzione membro [hash_set::hash_delegate (STL/CLR)](../dotnet/hash-set-hash-delegate-stl-clr.md) `()` per ottenere un valore intero che dipende dal valore della chiave. È possibile specificare l'oggetto delegato archiviato quando si costruisce hash_set; Se non si specifica alcun oggetto delegato, il valore predefinito è la funzione `System::Object::hash_value(key_type)`. Pertanto, per le chiavi `X` e `Y`:  
  
 `hash_delegate()(X)` Restituisce lo stesso risultato di tipo integer a ogni chiamata.  
  
 Se `X` e `Y` hanno un ordinamento equivalente, quindi `hash_delegate()(X)` deve restituire lo stesso risultato intero `hash_delegate()(Y)`.  
  
 Ogni elemento agisce come una chiave e un valore. La sequenza viene rappresentata in modo da consentire la ricerca, inserimento e rimozione di un elemento arbitrario con un numero di operazioni che è indipendente dal numero di elementi nella sequenza (tempo costante): almeno la migliore dei casi. Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
 Se i valori hash non vengono distribuiti in modo uniforme, tuttavia, una tabella hash può degeneri. In casi estremi, per una funzione hash che restituisce sempre lo stesso valore, ricerca, inserimento e rimozione sono proporzionali al numero di elementi della sequenza (tempo lineare). Il contenitore incentrati scegliere una funzione hash ragionevole, la dimensione del bucket medio e dimensioni di tabella hash (numero totale di bucket), ma è possibile sostituire qualsiasi o tutte queste scelte. Visualizzare, ad esempio, le funzioni [hash_set::max_load_factor (STL/CLR)](../dotnet/hash-set-max-load-factor-stl-clr.md) e [hash_set::rehash (STL/CLR)](../dotnet/hash-set-rehash-stl-clr.md).  
  
 Un hash_set supporta gli iteratori bidirezionali, pertanto che è possibile eseguire per gli elementi adiacenti, dato un iteratore che definisce un elemento nella sequenza controllata. Un nodo head speciale corrispondente per l'iteratore restituito da [hash_set:: end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md)`()`. È possibile diminuire l'iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore hash_set per raggiungere il nodo head e quindi confronterà uguale a `end()`. Ma non è possibile dereferenziare l'iteratore restituito da `end()`.  
  
 Si noti che è possibile fare riferimento a un elemento hash_set assegnato direttamente alla posizione numerica, che richiede un iteratore ad accesso casuale.  
  
 Un iteratore hash_set archivia un handle al relativo nodo hash_set associato, che a sua volta memorizza un handle per il contenitore associato. È possibile utilizzare gli iteratori solo con i relativi oggetti contenitore associato. Un iteratore hash_set rimane valido finché il relativo nodo hash_set associato è associato a un hash_set. Inoltre, un iteratore valido dereferencable--è possibile utilizzarlo per accedere o modificare il valore dell'elemento che definisce, in modo fino a quando non è uguale a `end()`.  
  
 La cancellazione o eliminazione di un elemento chiama il distruttore per il valore archiviato. Eliminazione del contenitore Cancella tutti gli elementi. Di conseguenza, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento sopravvivere al contenitore. Si noti, tuttavia, che non è un contenitore di handle `not` eliminare definitivamente gli elementi.  
  
## <a name="begin"></a> hash_set:: Begin (STL/CLR)
Indica l'inizio della sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
iterator begin();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore bidirezionale che definisce il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota. È utilizzato per ottenere un iteratore che definisce il `current` inizio della sequenza controllata, ma il cui stato è possibile modificare se viene modificata la lunghezza della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_begin.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items   
    Myhash_set::iterator it = c1.begin();   
    System::Console::WriteLine("*begin() = {0}", *it);   
    System::Console::WriteLine("*++begin() = {0}", *++it);   
    return (0);   
    }  
  
```  

## <a name="bucket_count"></a> hash_set::bucket_count (STL/CLR)
Conta il numero di bucket.  
  
### <a name="syntax"></a>Sintassi  
  
```  
int bucket_count();  
```  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituisce il numero corrente di bucket. Utilizzarla per determinare le dimensioni della tabella hash.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_bucket_count.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
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
 a b c  
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

## <a name="clear"></a> hash_set:: Clear (STL/CLR)
Rimuove tutti gli elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void clear();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro chiama in modo efficace [hash_set:: Erase (STL/CLR)](../dotnet/hash-set-erase-stl-clr.md) `(` [hash_set:: Begin (STL/CLR)](../dotnet/hash-set-begin-stl-clr.md) `(),` [hash_set:: end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md) `())`. Utilizzarla per garantire che la sequenza controllata vuota.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_clear.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// add elements and clear again   
    c1.insert(L'a');   
    c1.insert(L'b');   
  
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
size() = 0  
 a b  
size() = 0  
```  

## <a name="const_iterator"></a> hash_set:: const_iterator (STL/CLR)
Tipo di un iteratore costante per la sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef T2 const_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T2` che può essere utilizzato come un iteratore costante bidirezionale per la sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_const_iterator.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    Myhash_set::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        System::Console::Write(" {0}", *cit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="const_reference"></a> hash_set:: const_reference (STL/CLR)
Tipo di un riferimento costante a un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef value_type% const_reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un riferimento costante a un elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_const_reference.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    Myhash_set::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        {   // get a const reference to an element   
        Myhash_set::const_reference cref = *cit;   
        System::Console::Write(" {0}", cref);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="const_reverse_iterator"></a> hash_set:: const_reverse_iterator (STL/CLR)
Il tipo di un iteratore inverso costante per la sequenza controllata...  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef T4 const_reverse_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T4` che può essere utilizzato come un iteratore inverso costante per la sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_const_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" reversed   
    Myhash_set::const_reverse_iterator crit = c1.rbegin();   
    for (; crit != c1.rend(); ++crit)   
        System::Console::Write(" {0}", *crit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
c b a  
```  
  
## <a name="count"></a> hash_set:: Count (STL/CLR)
Trova il numero di elementi corrispondenti a una chiave specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
size_type count(key_type key);  
```  
  
#### <a name="parameters"></a>Parametri  
 key  
 Valore della chiave da cercare.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il numero di elementi nella sequenza controllata che hanno un ordinamento equivalente con `key`. Utilizzarla per determinare il numero di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_count.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("count(L'A') = {0}", c1.count(L'A'));   
    System::Console::WriteLine("count(L'b') = {0}", c1.count(L'b'));   
    System::Console::WriteLine("count(L'C') = {0}", c1.count(L'C'));   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
count(L'A') = 0  
count(L'b') = 1  
count(L'C') = 0  
```  

## <a name="difference_type"></a> hash_set:: difference_type (STL/CLR)
I tipi di una distanza signed tra due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef int difference_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un conteggio di elementi eventualmente negativo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_difference_type.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Myhash_set::difference_type diff = 0;   
    for (Myhash_set::iterator it = c1.begin(); it != c1.end(); ++it)   
        ++diff;   
    System::Console::WriteLine("end()-begin() = {0}", diff);   
  
// compute negative difference   
    diff = 0;   
    for (Myhash_set::iterator it = c1.end(); it != c1.begin(); --it)   
        --diff;   
    System::Console::WriteLine("begin()-end() = {0}", diff);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
end()-begin() = 3  
begin()-end() = -3  
```  

## <a name="empty"></a> hash_set:: Empty (STL/CLR)
Verifica se sono presenti o meno degli elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool empty();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce true per una sequenza controllata vuota. È equivalente a [hash_set:: Size (STL/CLR)](../dotnet/hash-set-size-stl-clr.md)`() == 0`. Utilizzarla per verificare se l'hash_set è vuoto.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_empty.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
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
 a b c  
size() = 3  
empty() = False  
size() = 0  
empty() = True  
```  

## <a name="end"></a> hash_set:: end (STL/CLR)
Designa la fine della sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
iterator end();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore bidirezionale che punta appena oltre la fine della sequenza controllata. È utilizzato per ottenere un iteratore che definisce la fine della sequenza controllata. il relativo stato modifica se viene modificata la lunghezza della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_end.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last two items   
    Myhash_set::iterator it = c1.end();   
    --it;   
    System::Console::WriteLine("*-- --end() = {0}", *--it);   
    System::Console::WriteLine("*--end() = {0}", *++it);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
*-- --end() = b  
*--end() = c  
```  

## <a name="equal_range"></a> hash_set:: equal_range (STL/CLR)
Trova un intervallo che corrisponde a una chiave specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
cliext::pair<iterator, iterator> equal_range(key_type key);  
```  
  
#### <a name="parameters"></a>Parametri  
 key  
 Valore della chiave da cercare.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce una coppia di iteratori `cliext::pair<iterator, iterator>(` [hash_set:: lower_bound (STL/CLR)](../dotnet/hash-set-lower-bound-stl-clr.md) `(key),` [hash_set:: upper_bound (STL/CLR)](../dotnet/hash-set-upper-bound-stl-clr.md)`(key))`. Utilizzarla per determinare l'intervallo di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_equal_range.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
typedef Myhash_set::pair_iter_iter Pairii;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display results of failed search   
    Pairii pair1 = c1.equal_range(L'x');   
    System::Console::WriteLine("equal_range(L'x') empty = {0}",   
        pair1.first == pair1.second);   
  
// display results of successful search   
    pair1 = c1.equal_range(L'b');   
    for (; pair1.first != pair1.second; ++pair1.first)   
        System::Console::Write(" {0}", *pair1.first);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
equal_range(L'x') empty = True  
 b  
``` 

## <a name="erase"></a> hash_set:: Erase (STL/CLR)
Rimuove gli elementi in corrispondenza delle posizioni specificate.  
  
### <a name="syntax"></a>Sintassi  
  
```  
iterator erase(iterator where);  
iterator erase(iterator first, iterator last);  
bool erase(key_type key)  
```  
  
#### <a name="parameters"></a>Parametri  
 primo  
 Inizio dell'intervallo da cancellare.  
  
 key  
 Valore della chiave da cancellare.  
  
 last  
 Fine dell'intervallo da cancellare.  
  
 dove  
 Elemento da cancellare.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro rimuove l'elemento della sequenza controllata a cui puntata `where`e restituisce un iteratore che definisce il primo elemento rimanente oltre l'elemento rimosso, o [hash_set:: end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md) `()` se tale elemento non esiste. Utilizzarlo per rimuovere un singolo elemento.  
  
 La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`) e restituisce un iteratore che definisce il primo elemento rimanente successivo a tutti gli elementi eliminati, o `end()` se tale elemento non è presente... Utilizzarlo per rimuovere zero o più elementi adiacenti.  
  
 La terza funzione membro rimuove qualsiasi elemento della sequenza controllata la cui chiave ha un ordinamento equivalente a `key`e restituisce un conteggio del numero di elementi rimossi. Utilizzarla per rimuovere e il conteggio di tutti gli elementi che corrispondono a una chiave specificata.  
  
 La cancellazione di ogni elemento richiede tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_erase.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// erase an element and reinspect   
    System::Console::WriteLine("erase(begin()) = {0}",   
        *c1.erase(c1.begin()));   
  
// add elements and display " b c d e"   
    c1.insert(L'd');   
    c1.insert(L'e');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// erase all but end   
    Myhash_set::iterator it = c1.end();   
    System::Console::WriteLine("erase(begin(), end()-1) = {0}",   
        *c1.erase(c1.begin(), --it));   
    System::Console::WriteLine("size() = {0}", c1.size());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
erase(begin()) = b  
 b c d e  
erase(begin(), end()-1) = e  
size() = 1  
```  

## <a name="find"></a> hash_set:: Find (STL/CLR)
Trova un elemento che corrisponde a una chiave specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
iterator find(key_type key);  
```  
  
#### <a name="parameters"></a>Parametri  
 key  
 Valore della chiave da cercare.  
  
### <a name="remarks"></a>Note  
 Se almeno un elemento nella sequenza controllata ha un ordinamento equivalente con `key`, la funzione membro restituisce un iteratore che definisce uno di questi elementi; in caso contrario restituisce [hash_set:: end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md) `()`. Utilizzarla per individuare un elemento attualmente nella sequenza controllata che corrisponde a una chiave specificata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_find.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("find {0} = {1}",   
        L'A', c1.find(L'A') != c1.end());   
    System::Console::WriteLine("find {0} = {1}",   
        L'b', *c1.find(L'b'));   
    System::Console::WriteLine("find {0} = {1}",   
        L'C', c1.find(L'C') != c1.end());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
find A = False  
find b = b  
find C = False  
```   

## <a name="generic_container"></a> hash_set::generic_container (STL/CLR)
Il tipo dell'interfaccia generica per il contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Microsoft::VisualC::StlClr::  
    IHash<GKey, GValue>  
    generic_container;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive l'interfaccia generica per questa classe di contenitori di modelli.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_generic_container.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    Myhash_set::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify generic and display original   
    gc1->insert(L'd');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify original and display generic   
    c1.insert(L'e');   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
a b c d  
a b c d e  
```  

## <a name="generic_iterator"></a> hash_set::generic_iterator (STL/CLR)
Il tipo di iteratore per l'utilizzo con l'interfaccia generica per il contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Microsoft::VisualC::StlClr::Generic::  
    ContainerBidirectionalIterator<generic_value>  
    generic_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un iteratore generico che può essere utilizzato con l'interfaccia generica per questa classe di contenitori di modelli.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_generic_iterator.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    Myhash_set::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// get an element and display it   
    Myhash_set::generic_iterator gcit = gc1->begin();   
    Myhash_set::generic_value gcval = *gcit;   
    System::Console::WriteLine(" {0}", gcval);   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
a  
```  

## <a name="generic_reverse_iterator"></a> hash_set::generic_reverse_iterator (STL/CLR)
Il tipo di un iteratore inverso per l'utilizzo con l'interfaccia generica per il contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Microsoft::VisualC::StlClr::Generic::  
    ReverseRandomAccessIterator<generic_value>  
    generic_reverse_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un iteratore inverso generico che può essere utilizzato con l'interfaccia generica per questa classe di contenitori di modelli.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_generic_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    Myhash_set::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// get an element and display it   
    Myhash_set::generic_reverse_iterator gcit = gc1->rbegin();   
    Myhash_set::generic_value gcval = *gcit;   
    System::Console::WriteLine(" {0}", gcval);   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
c  
```  
  
## <a name="generic_value"></a> hash_set::generic_value (STL/CLR)
Il tipo di elemento per l'utilizzo con l'interfaccia generica per il contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef GValue generic_value;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato per l'utilizzo con l'interfaccia generica per questa classe di contenitori di modelli.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_generic_value.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    Myhash_set::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// get an element and display it   
    Myhash_set::generic_iterator gcit = gc1->begin();   
    Myhash_set::generic_value gcval = *gcit;   
    System::Console::WriteLine(" {0}", gcval);   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
a  
```  

## <a name="hash_delegate"></a> hash_set::hash_delegate (STL/CLR)
Trova un elemento che corrisponde a una chiave specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
hasher^ hash_delegate();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il delegato utilizzato per convertire un valore di chiave in un intero. È utilizzato per una chiave hash.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_hash_delegate.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    Myhash_set::hasher^ myhash = c1.hash_delegate();   
  
    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));   
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));   
    return (0);   
    }  
  
```  
  
```Output  
hash(L'a') = 1616896120  
hash(L'b') = 570892832  
```  

## <a name="hash_set"></a> hash_set:: hash_set (STL/CLR)
Costruisce un oggetto contenitore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
hash_set();  
explicit hash_set(key_compare^ pred);  
hash_set(key_compare^ pred, hasher^ hashfn);  
hash_set(hash_set<Key>% right);  
hash_set(hash_set<Key>^ right);  
template<typename InIter>  
    hash_sethash_set(InIter first, InIter last);  
template<typename InIter>  
    hash_set(InIter first, InIter last,  
        key_compare^ pred);  
template<typename InIter>  
    hash_set(InIter first, InIter last,  
        key_compare^ pred, hasher^ hashfn);  
hash_set(System::Collections::Generic::IEnumerable<GValue>^ right);  
hash_set(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
hash_set(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred, hasher^ hashfn);  
```  
  
#### <a name="parameters"></a>Parametri  
 primo  
 Inizio dell'intervallo da inserire.  
  
 hashfn  
 Funzione per le chiavi di mapping a bucket di hash.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 pred  
 Ordinamento di predicato per la sequenza controllata.  
  
 right  
 Oggetto o un intervallo da inserire.  
  
### <a name="remarks"></a>Note  
 Il costruttore:  
  
 `hash_set();`  
  
 Inizializza la sequenza controllata con alcun elemento, con il predicato dell'ordinamento predefinito `key_compare()`e con la funzione hash predefinita. È utilizzata per specificare una sequenza controllata iniziale vuota, con il funzione di predicato e hash dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `explicit hash_set(key_compare^ pred);`  
  
 Inizializza la sequenza controllata con alcun elemento, con il predicato ordinamento `pred`e con la funzione hash predefinita. È utilizzata per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Il costruttore:  
  
 `hash_set(key_compare^ pred, hasher^ hashfn);`  
  
 Inizializza la sequenza controllata con alcun elemento, con il predicato ordinamento `pred`e con la funzione hash `hashfn`. È utilizzata per specificare una sequenza controllata iniziale vuota, con la funzione di predicato e hash ordinamento specificata.  
  
 Il costruttore:  
  
 `hash_set(hash_set<Key>% right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right.begin()`, `right.end()`), con il predicato dell'ordinamento predefinito e con la funzione hash predefinita. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto hash_set `right`, con il predicato di ordinamento predefinito e una funzione hash.  
  
 Il costruttore:  
  
 `hash_set(hash_set<Key>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right->begin()`, `right->end()`), con il predicato dell'ordinamento predefinito e con la funzione hash predefinita. Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto hash_set `right`, con il predicato di ordinamento predefinito e una funzione hash.  
  
 Il costruttore:  
  
 `template<typename InIter> hash_set(InIter first, InIter last);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il predicato dell'ordinamento predefinito e con la funzione hash predefinita. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza, con il funzione di predicato e hash dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `template<typename InIter> hash_set(InIter first, InIter last, key_compare^ pred);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il predicato ordinamento `pred`e con la funzione hash predefinita. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento specificato e la funzione hash predefinita.  
  
 Il costruttore:  
  
 `template<typename InIter> hash_set(InIter first, InIter last, key_compare^ pred, hasher^ hashfn);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`), con il predicato ordinamento `pred`e con la funzione hash `hashfn`. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza, con la funzione di predicato e hash ordinamento specificata.  
  
 Il costruttore:  
  
 `hash_set(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`, con il predicato dell'ordinamento predefinito e con la funzione hash predefinita. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con il funzione di predicato e hash dell'ordinamento predefinito.  
  
 Il costruttore:  
  
 `hash_set(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`, con il predicato ordinamento `pred`e con la funzione hash predefinita. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con la funzione di hash di predicato e predefinito ordinamento specificato.  
  
 Il costruttore:  
  
 `hash_set(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred, hasher^ hashfn);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`, con il predicato ordinamento `pred`e con la funzione hash `hashfn`. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con la funzione di predicato e hash ordinamento specificato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_construct.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
int myfun(wchar_t key)   
    { // hash a key   
    return (key ^ 0xdeadbeef);   
    }   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
// construct an empty container   
    Myhash_set c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Myhash_set c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule and hash function   
    Myhash_set c2h(cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_set::hasher(&myfun));   
    System::Console::WriteLine("size() = {0}", c2h.size());   
  
    c2h.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Myhash_set c3(c1.begin(), c1.end());   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Myhash_set c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule and hash function   
    Myhash_set c4h(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_set::hasher(&myfun));   
    for each (wchar_t elem in c4h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Myhash_set c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Myhash_set c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c6)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule and hash function   
    Myhash_set c6h(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>(),   
                gcnew Myhash_set::hasher(&myfun));   
    for each (wchar_t elem in c6h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct from a generic container   
    Myhash_set c7(c4);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myhash_set c8(%c3);   
    for each (wchar_t elem in c8)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 a b c  
size() = 0  
 a b c  
size() = 0  
 c b a  
  
 a b c  
 a b c  
 c b a  
  
 a b c  
 a b c  
 c b a  
  
 a b c  
 a b c  
```  

## <a name="hasher"></a> hash_set::hasher (STL/CLR)
Il delegato hash per una chiave.  
  
### <a name="syntax"></a>Sintassi  
  
```  
Microsoft::VisualC::StlClr::UnaryDelegate<GKey, int>  
    hasher;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un delegato che converte un valore di chiave in un intero.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_hasher.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    Myhash_set::hasher^ myhash = c1.hash_delegate();   
  
    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));   
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));   
    return (0);   
    }  
  
```  
  
```Output  
hash(L'a') = 1616896120  
hash(L'b') = 570892832  
```  

## <a name="insert"></a> hash_set:: Insert (STL/CLR)
Aggiunge elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
cliext::pair<iterator, bool> insert(value_type val);  
iterator insert(iterator where, value_type val);  
template<typename InIter>  
    void insert(InIter first, InIter last);  
void insert(System::Collections::Generic::IEnumerable<value_type>^ right);  
```  
  
#### <a name="parameters"></a>Parametri  
 primo  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 right  
 Enumerazione da inserire.  
  
 Val  
 Valore della chiave da inserire.  
  
 dove  
 Posizione in cui nel contenitore per inserire (solo hint).  
  
### <a name="remarks"></a>Note  
 Tutte le funzioni membro inserisce una sequenza specificata dagli operandi rimanenti.  
  
 La prima funzione membro incentrati inserire un elemento con valore `val`e restituisce una coppia di valori `X`. Se `X.second` è true, `X.first` definisce l'elemento appena inserito; in caso contrario `X.first` definisce un elemento con l'equivalente di ordinamento che già esiste e non viene inserito alcun nuovo elemento. Utilizzarla per inserire un singolo elemento.  
  
 La seconda funzione membro inserisce un elemento con valore `val`, utilizzando `where` come un suggerimento (per migliorare le prestazioni) e restituisce un iteratore che definisce l'elemento appena inserito. Utilizzarla per inserire un singolo elemento che può essere adiacente a un elemento a cui che si è certi.  
  
 La terza funzione membro inserisce la sequenza [`first`, `last`). Utilizzarla per l'inserimento di zero o più elementi copiati da un'altra sequenza.  
  
 La quarta funzione membro inserisce la sequenza designata dal `right`. Utilizzarla per inserire una sequenza descritta dall'enumeratore.  
  
 Ogni inserimento di elementi tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata. Inserimento può avvenire in tempo costante ammortizzato, tuttavia, dato un suggerimento che designa un elemento adiacente al punto di inserimento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_insert.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
typedef Myhash_set::pair_iter_bool Pairib;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a single value, unique and duplicate   
    Pairib pair1 = c1.insert(L'x');   
    System::Console::WriteLine("insert(L'x') = [{0} {1}]",   
        *pair1.first, pair1.second);   
  
    pair1 = c1.insert(L'b');   
    System::Console::WriteLine("insert(L'b') = [{0} {1}]",   
        *pair1.first, pair1.second);   
  
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a single value with hint   
    System::Console::WriteLine("insert(begin(), L'y') = {0}",   
        *c1.insert(c1.begin(), L'y'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an iterator range   
    Myhash_set c2;   
    Myhash_set::iterator it = c1.end();   
    c2.insert(c1.begin(), --it);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    Myhash_set c3;   
    c3.insert(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
insert(L'x') = [x True]  
insert(L'b') = [b False]  
 a b c x  
insert(begin(), L'y') = y  
 a b c x y  
 a b c x  
 a b c x y  
```  

## <a name="iterator"></a> hash_set:: Iterator (STL/CLR)
Tipo di un iteratore per la sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef T1 iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T1` che può essere utilizzato come un iteratore bidirezionale per la sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_iterator.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    Myhash_set::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        System::Console::Write(" {0}", *it);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="key_comp"></a> hash_set:: key_comp (STL/CLR)
Copia il delegato per due chiavi di ordinamento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
key_compare^key_comp();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. È utilizzato per confrontare due chiavi.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_key_comp.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    Myhash_set::key_compare^ kcomp = c1.key_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
  
// test a different ordering rule   
    Myhash_set c2 = cliext::greater<wchar_t>();   
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

## <a name="key_comp"></a> hash_set:: key_comp (STL/CLR)
Copia il delegato per due chiavi di ordinamento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
key_compare^key_comp();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. È utilizzato per confrontare due chiavi.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_key_comp.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    Myhash_set::key_compare^ kcomp = c1.key_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
  
// test a different ordering rule   
    Myhash_set c2 = cliext::greater<wchar_t>();   
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

## <a name="key_compare"></a> hash_set:: key_compare (STL/CLR)
Delegato per due chiavi di ordinamento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
Microsoft::VisualC::StlClr::BinaryDelegate<GKey, GKey, bool>  
    key_compare;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo per il delegato che determina l'ordine dei relativi argomenti di chiave.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_key_compare.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    Myhash_set::key_compare^ kcomp = c1.key_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
  
// test a different ordering rule   
    Myhash_set c2 = cliext::greater<wchar_t>();   
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

## <a name="key_type"></a> hash_set:: KEY_TYPE (STL/CLR)
Tipo di una chiave di ordinamento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Key key_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Key`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_key_type.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using key_type   
    for (Myhash_set::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in key_type object   
        Myhash_set::key_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="load_factor"></a> hash_set::load_factor (STL/CLR)
Conta il numero medio di elementi per bucket.  
  
### <a name="syntax"></a>Sintassi  
  
```  
float load_factor();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `(float)` [hash_set:: Size (STL/CLR)](../dotnet/hash-set-size-stl-clr.md) `() /` [hash_set::bucket_count (STL/CLR)](../dotnet/hash-set-bucket-count-stl-clr.md)`()`. Utilizzarla per determinare la dimensione del bucket medio.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_load_factor.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
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
 a b c  
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

## <a name="lower_bound"></a> hash_set:: lower_bound (STL/CLR)
Consente di trovare l'inizio dell'intervallo che corrisponde a una chiave specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
iterator lower_bound(key_type key);  
```  
  
#### <a name="parameters"></a>Parametri  
 key  
 Valore della chiave da cercare.  
  
### <a name="remarks"></a>Note  
 La funzione membro determina il primo elemento `X` nella sequenza controllata che genera un hash allo stesso bucket di `key` e ha un ordinamento equivalente a `key`. Se tale elemento non esiste, restituisce [hash_set:: end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md)`()`; in caso contrario restituisce un iteratore che definisce `X`. Utilizzarla per individuare l'inizio di una sequenza di elementi attualmente nella sequenza controllata che corrispondono a una chiave specificata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_lower_bound.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("lower_bound(L'x')==end() = {0}",   
        c1.lower_bound(L'x') == c1.end());   
  
    System::Console::WriteLine("*lower_bound(L'a') = {0}",   
        *c1.lower_bound(L'a'));   
    System::Console::WriteLine("*lower_bound(L'b') = {0}",   
        *c1.lower_bound(L'b'));   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
lower_bound(L'x')==end() = True  
*lower_bound(L'a') = a  
*lower_bound(L'b') = b  
```  

## <a name="make_value"></a> hash_set::make_value (STL/CLR)
Costruisce un oggetto valore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
static value_type make_value(key_type key);  
```  
  
#### <a name="parameters"></a>Parametri  
 key  
 Valore della chiave da utilizzare.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un `value_type` oggetto la cui chiave è `key`. Utilizzarla per creare un oggetto può essere utilizzato con diverse altre funzioni membro.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_make_value.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(Myhash_set::make_value(L'a'));   
    c1.insert(Myhash_set::make_value(L'b'));   
    c1.insert(Myhash_set::make_value(L'c'));   
  
// display contents " a b c"   
    for each (Myhash_set::value_type elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="max_load_factor"></a> hash_set::max_load_factor (STL/CLR)
Ottiene o imposta il numero massimo di elementi per bucket.  
  
### <a name="syntax"></a>Sintassi  
  
```  
float max_load_factor();  
void max_load_factor(float new_factor);  
```  
  
#### <a name="parameters"></a>Parametri  
 new_factor  
 Nuovo massimo fattore per l'archiviazione di carico.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce il fattore di carico massimo archiviato corrente. Utilizzarla per determinare le dimensioni massime bucket medio.  
  
 La seconda funzione membro sostituisce il fattore di carico massimo di archivio con `new_factor`. Nessun automatico generando un nuovo hash si verifica fino a quando l'inserimento di una successivo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_max_load_factor.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
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

## <a name="op"></a> hash_set::operator = (STL/CLR)
Sostituisce la sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
hash_set<Key>% operator=(hash_set<Key>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Contenitore da copiare.  
  
### <a name="remarks"></a>Note  
 Le copie di operatore membro `right` all'oggetto, quindi restituisce `*this`. Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata in `right`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_operator_as.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c"   
    for each (Myhash_set::value_type elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myhash_set c2;   
    c2 = c1;   
// display contents " a b c"   
    for each (Myhash_set::value_type elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
```  

## <a name="rbegin"></a> hash_set:: rbegin (STL/CLR)
Indica l'inizio della sequenza controllata inversa.  
  
### <a name="syntax"></a>Sintassi  
  
```  
reverse_iterator rbegin();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore inverso che definisce l'ultimo elemento della sequenza controllata o appena oltre l'inizio di una sequenza vuota. Di conseguenza, indica il `beginning` della sequenza inversa. È utilizzato per ottenere un iteratore che definisce il `current` inizio della sequenza controllata considerata in ordine inverso, ma il cui stato è possibile modificare se viene modificata la lunghezza della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_rbegin.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items in reversed sequence   
    Myhash_set::reverse_iterator rit = c1.rbegin();   
    System::Console::WriteLine("*rbegin() = {0}", *rit);   
    System::Console::WriteLine("*++rbegin() = {0}", *++rit);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
*rbegin() = c  
*++rbegin() = b  
```  

## <a name="reference"></a> hash_set:: Reference (STL/CLR)
Tipo di un riferimento a un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef value_type% reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un riferimento a un elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_reference.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    Myhash_set::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        {   // get a reference to an element   
        Myhash_set::reference ref = *it;   
        System::Console::Write(" {0}", ref);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="rehash"></a> hash_set::rehash (STL/CLR)
Ricompila la tabella hash.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void rehash();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro Ricompila la tabella hash, assicurando che [hash_set::load_factor (STL/CLR)](../dotnet/hash-set-load-factor-stl-clr.md) `() <=` [hash_set::max_load_factor (STL/CLR)](../dotnet/hash-set-max-load-factor-stl-clr.md). In caso contrario, la tabella hash aumenta le dimensioni solo se necessario, dopo un inserimento. (Mai automaticamente riduce le dimensioni.) Utilizzarla per regolare le dimensioni della tabella hash.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_rehash.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
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
 a b c  
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

## <a name="rend"></a> hash_set:: rend (STL/CLR)
Indica la fine della sequenza controllata inversa.  
  
### <a name="syntax"></a>Sintassi  
  
```  
reverse_iterator rend();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore inverso che punta appena oltre l'inizio della sequenza controllata. Di conseguenza, indica il `end` della sequenza inversa. È utilizzato per ottenere un iteratore che definisce il `current` fine della sequenza controllata considerata in ordine inverso, ma il cui stato è possibile modificare se viene modificata la lunghezza della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_rend.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items   
    Myhash_set::reverse_iterator rit = c1.rend();   
    --rit;   
    System::Console::WriteLine("*-- --rend() = {0}", *--rit);   
    System::Console::WriteLine("*--rend() = {0}", *++rit);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
*-- --rend() = b  
*--rend() = a  
```  

## <a name="reverse_iterator"></a> hash_set:: reverse_iterator (STL/CLR)
Tipo di un iteratore inverso della sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef T3 reverse_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T3` che può essere utilizzato come iteratore inverso per la sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" reversed   
    Myhash_set::reverse_iterator rit = c1.rbegin();   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" {0}", *rit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
c b a  
```  

## <a name="size"></a> hash_set:: Size (STL/CLR)
Conta il numero di elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
size_type size();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la lunghezza della sequenza controllata. Utilizzarla per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se invece è rilevante se la sequenza è diverso da zero dimensioni, vedere [hash_set:: Empty (STL/CLR)](../dotnet/hash-set-empty-stl-clr.md)`()`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_size.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());   
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0} after clearing", c1.size());   
  
// add elements and clear again   
    c1.insert(L'a');   
    c1.insert(L'b');   
    System::Console::WriteLine("size() = {0} after adding 2", c1.size());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
size() = 3 starting with 3  
size() = 0 after clearing  
size() = 2 after adding 2  
```  

## <a name="size_type"></a> hash_set:: size_type (STL/CLR)
Il tipo di una distanza signed tra due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef int size_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un conteggio di elementi non negativo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_size_type.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Myhash_set::size_type diff = 0;   
    for (Myhash_set::iterator it = c1.begin(); it != c1.end(); ++it)   
        ++diff;   
    System::Console::WriteLine("end()-begin() = {0}", diff);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
end()-begin() = 3  
```  

## <a name="swap"></a> hash_set:: swap (STL/CLR)
Scambia il contenuto di due contenitori.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void swap(hash_set<Key>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Contenitore con cui scambiare il contenuto.  
  
### <a name="remarks"></a>Note  
 La funzione membro scambia le sequenze controllate tra `this` e `right`. Esegue l'operazione in un tempo costante e non genera alcuna eccezione. Utilizzato come un modo rapido per scambiare il contenuto di due contenitori.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_swap.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct another container with repetition of values   
    Myhash_set c2;   
    c2.insert(L'd');   
    c2.insert(L'e');   
    c2.insert(L'f');   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// swap and redisplay   
    c1.swap(c2);   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
d e f  
d e f  
a b c  
```  

## <a name="to_array"></a> hash_set::to_array (STL/CLR)
La sequenza controllata viene copiata in una nuova matrice.  
  
### <a name="syntax"></a>Sintassi  
  
```  
cli::array<value_type>^ to_array();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce una matrice che contiene la sequenza controllata. È utilizzato per ottenere una copia della sequenza controllata in forma di matrice.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_to_array.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// copy the container and modify it   
    cli::array<wchar_t>^ a1 = c1.to_array();   
  
    c1.insert(L'd');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display the earlier array copy   
    for each (wchar_t elem in a1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c d  
a b c  
```  

## <a name="upper_bound"></a> hash_set:: upper_bound (STL/CLR)
Trova fine dell'intervallo che corrisponde a una chiave specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
iterator upper_bound(key_type key);  
```  
  
#### <a name="parameters"></a>Parametri  
 key  
 Valore della chiave da cercare.  
  
### <a name="remarks"></a>Note  
 La funzione membro determina l'ultimo elemento `X` nella sequenza controllata che genera un hash allo stesso bucket di `key` e ha un ordinamento equivalente a `key`. Se tale elemento non esiste o se `X` è l'ultimo elemento nella sequenza controllata, restituisce [hash_set:: end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md)`()`; in caso contrario restituisce un iteratore che definisce il primo elemento oltre `X`. Utilizzarla per individuare la fine di una sequenza di elementi attualmente nella sequenza controllata che corrispondono a una chiave specificata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_upper_bound.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("upper_bound(L'x')==end() = {0}",   
        c1.upper_bound(L'x') == c1.end());   
  
    System::Console::WriteLine("*upper_bound(L'a') = {0}",   
        *c1.upper_bound(L'a'));   
    System::Console::WriteLine("*upper_bound(L'b') = {0}",   
        *c1.upper_bound(L'b'));   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
upper_bound(L'x')==end() = True  
*upper_bound(L'a') = b  
*upper_bound(L'b') = c  
```  

## <a name="value_comp"></a> hash_set:: value_comp (STL/CLR)
Copia il delegato di ordinamento per valori di due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
value_compare^ value_comp();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. È utilizzato per confrontare due valori di elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_value_comp.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    Myhash_set::value_compare^ kcomp = c1.value_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
compare(L'a', L'a') = True  
compare(L'a', L'b') = True  
compare(L'b', L'a') = False  
```  

## <a name="value_compare"></a> hash_set:: value_compare (STL/CLR)
Il delegato di ordinamento per valori di due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
Microsoft::VisualC::StlClr::BinaryDelegate<generic_value, generic_value, bool>  
    value_compare;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo per il delegato che determina l'ordine dei relativi argomenti di valore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_value_compare.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    Myhash_set::value_compare^ kcomp = c1.value_comp();   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
compare(L'a', L'a') = True  
compare(L'a', L'b') = True  
compare(L'b', L'a') = False  
```  

## <a name="value_type"></a> hash_set:: value_type (STL/CLR)
Tipo di un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef generic_value value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è sinonimo di `generic_value`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_hash_set_value_type.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using value_type   
    for (Myhash_set::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in value_type object   
        Myhash_set::value_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  