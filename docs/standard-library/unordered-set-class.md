---
title: Classe unordered_set | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- unordered_set
- std::unordered_set
- unordered_set/std::unordered_set
- std::unordered_set::allocator_type
- unordered_set/std::unordered_set::allocator_type
- std::unordered_set::const_iterator
- unordered_set/std::unordered_set::const_iterator
- std::unordered_set::const_local_iterator
- unordered_set/std::unordered_set::const_local_iterator
- std::unordered_set::const_pointer
- unordered_set/std::unordered_set::const_pointer
- std::unordered_set::const_reference
- unordered_set/std::unordered_set::const_reference
- std::unordered_set::difference_type
- unordered_set/std::unordered_set::difference_type
- std::unordered_set::hasher
- unordered_set/std::unordered_set::hasher
- std::unordered_set::iterator
- unordered_set/std::unordered_set::iterator
- std::unordered_set::key_equal
- unordered_set/std::unordered_set::key_equal
- std::unordered_set::key_type
- unordered_set/std::unordered_set::key_type
- std::unordered_set::local_iterator
- unordered_set/std::unordered_set::local_iterator
- std::unordered_set::pointer
- unordered_set/std::unordered_set::pointer
- std::unordered_set::reference
- unordered_set/std::unordered_set::reference
- std::unordered_set::size_type
- unordered_set/std::unordered_set::size_type
- std::unordered_set::value_type
- unordered_set/std::unordered_set::value_type
- std::unordered_set::begin
- unordered_set/std::unordered_set::begin
- std::unordered_set::bucket
- unordered_set/std::unordered_set::bucket
- std::unordered_set::bucket_count
- unordered_set/std::unordered_set::bucket_count
- std::unordered_set::bucket_size
- unordered_set/std::unordered_set::bucket_size
- std::unordered_set::cbegin
- unordered_set/std::unordered_set::cbegin
- std::unordered_set::cend
- unordered_set/std::unordered_set::cend
- std::unordered_set::clear
- unordered_set/std::unordered_set::clear
- std::unordered_set::count
- unordered_set/std::unordered_set::count
- std::unordered_set::emplace
- unordered_set/std::unordered_set::emplace
- std::unordered_set::emplace_hint
- unordered_set/std::unordered_set::emplace_hint
- std::unordered_set::empty
- unordered_set/std::unordered_set::empty
- std::unordered_set::end
- unordered_set/std::unordered_set::end
- std::unordered_set::equal_range
- unordered_set/std::unordered_set::equal_range
- std::unordered_set::erase
- unordered_set/std::unordered_set::erase
- std::unordered_set::find
- unordered_set/std::unordered_set::find
- std::unordered_set::get_allocator
- unordered_set/std::unordered_set::get_allocator
- std::unordered_set::hash_function
- unordered_set/std::unordered_set::hash_function
- std::unordered_set::insert
- unordered_set/std::unordered_set::insert
- std::unordered_set::key_eq
- unordered_set/std::unordered_set::key_eq
- std::unordered_set::load_factor
- unordered_set/std::unordered_set::load_factor
- std::unordered_set::max_bucket_count
- unordered_set/std::unordered_set::max_bucket_count
- std::unordered_set::max_load_factor
- unordered_set/std::unordered_set::max_load_factor
- std::unordered_set::max_size
- unordered_set/std::unordered_set::max_size
- std::unordered_set::rehash
- unordered_set/std::unordered_set::rehash
- std::unordered_set::size
- unordered_set/std::unordered_set::size
- std::unordered_set::swap
- unordered_set/std::unordered_set::swap
- std::unordered_set::unordered_set
- unordered_set/std::unordered_set::unordered_set
- std::unordered_set::operator=
- unordered_set/std::unordered_set::operator=
dev_langs:
- C++
helpviewer_keywords:
- unordered_set class
ms.assetid: ac08084e-05a7-48c0-9ae4-d40c529922dd
caps.latest.revision: 23
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
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: e41fbf26ba7a2209dac67965ac3a5e045bf93324
ms.lasthandoff: 02/24/2017

---
# <a name="unorderedset-class"></a>Classe unordered_set
La classe modello descrive un oggetto che controlla una sequenza di elementi di lunghezza diversa di tipo `const Key`. La sequenza viene ordinata in modo debole da una funzione hash, che esegue il partizionamento della sequenza in un set ordinato di sottosequenze denominate bucket. In ogni bucket una funzione di confronto determina se una coppia di elementi ha un ordinamento equivalente. Ogni elemento viene utilizzato sia come chiave di ordinamento che come valore. La sequenza viene rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario mediante una serie di operazioni che possono essere indipendenti dal numero di elementi della sequenza (tempo costante), almeno quando tutti i bucket sono più o meno lunghi uguali. Nella peggiore delle ipotesi, quando tutti gli elementi si trovano in un unico bucket, il numero di operazioni è proporzionale al numero di elementi della sequenza (tempo lineare). Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <
   class Key,  
   class Hash = std::hash<Key>,  
   class Pred = std::equal_to<Key>,  
   class Alloc = std::allocator<Key>>  
class unordered_set;  
```  
  
#### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Key`|Tipo di chiave.|  
|`Hash`|Tipo di oggetto della funzione hash.|  
|`Pred`|Tipo di oggetto della funzione di confronto di uguaglianza.|  
|`Alloc`|Classe Allocator.|  
  
## <a name="members"></a>Membri  
  
|||  
|-|-|  
|Definizione dei tipi|Descrizione|  
|[unordered_set::allocator_type](#unordered_set__allocator_type)|Tipo di un allocatore per gestire l'archiviazione.|  
|[unordered_set::const_iterator](#unordered_set__const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|  
|[unordered_set::const_local_iterator](#unordered_set__const_local_iterator)|Tipo di un iteratore di bucket costante per la sequenza controllata.|  
|[unordered_set::const_pointer](#unordered_set__const_pointer)|Tipo di un puntatore costante a un elemento.|  
|[unordered_set::const_reference](#unordered_set__const_reference)|Tipo di un riferimento costante a un elemento.|  
|[unordered_set::difference_type](#unordered_set__difference_type)|Tipo di una distanza Signed tra due elementi.|  
|[unordered_set::hasher](#unordered_set__hasher)|Tipo della funzione hash.|  
|[unordered_set::iterator](#unordered_set__iterator)|Tipo di un iteratore per la sequenza controllata.|  
|[unordered_set::key_equal](#unordered_set__key_equal)|Tipo della funzione di confronto.|  
|[unordered_set::key_type](#unordered_set__key_type)|Tipo di una chiave di ordinamento.|  
|[unordered_set::local_iterator](#unordered_set__local_iterator)|Tipo di un iteratore di bucket per la sequenza controllata.|  
|[unordered_set::pointer](#unordered_set__pointer)|Tipo di un puntatore a un elemento.|  
|[unordered_set::reference](#unordered_set__reference)|Tipo di un riferimento a un elemento.|  
|[unordered_set::size_type](#unordered_set__size_type)|Tipo di una distanza Unsigned tra due elementi.|  
|[unordered_set::value_type](#unordered_set__value_type)|Tipo di un elemento.|  
  
|||  
|-|-|  
|Funzione membro|Descrizione|  
|[unordered_set::begin](#unordered_set__begin)|Indica l'inizio della sequenza controllata.|  
|[unordered_set::bucket](#unordered_set__bucket)|Ottiene il numero di bucket relativo a un valore della chiave.|  
|[unordered_set::bucket_count](#unordered_set__bucket_count)|Ottiene il numero di bucket.|  
|[unordered_set::bucket_size](#unordered_set__bucket_size)|Ottiene le dimensioni di un bucket.|  
|[unordered_set::cbegin](#unordered_set__cbegin)|Indica l'inizio della sequenza controllata.|  
|[unordered_set::cend](#unordered_set__cend)|Designa la fine della sequenza controllata.|  
|[unordered_set::clear](#unordered_set__clear)|Rimuove tutti gli elementi.|  
|[unordered_set::count](#unordered_set__count)|Trova il numero di elementi corrispondenti a una chiave specificata.|  
|[unordered_set::emplace](#unordered_set__emplace)|Aggiunge un elemento costruito sul posto.|  
|[unordered_set::emplace_hint](#unordered_set__emplace_hint)|Aggiunge un elemento costruito sul posto, con il suggerimento.|  
|[unordered_set::empty](#unordered_set__empty)|Verifica se sono presenti o meno degli elementi.|  
|[unordered_set::end](#unordered_set__end)|Designa la fine della sequenza controllata.|  
|[unordered_set::equal_range](#unordered_set__equal_range)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[unordered_set::erase](#unordered_set__erase)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[unordered_set::find](#unordered_set__find)|Trova un elemento che corrisponde a una chiave specificata.|  
|[unordered_set::get_allocator](#unordered_set__get_allocator)|Ottiene l'oggetto allocatore archiviato.|  
|[unordered_set::hash_function](#unordered_set__hash_function)|Ottiene l'oggetto della funzione hash archiviato.|  
|[unordered_set::insert](#unordered_set__insert)|Aggiunge elementi.|  
|[unordered_set::key_eq](#unordered_set__key_eq)|Ottiene l'oggetto archiviato della funzione di confronto.|  
|[unordered_set::load_factor](#unordered_set__load_factor)|Conta il numero medio di elementi per bucket.|  
|[unordered_set::max_bucket_count](#unordered_set__max_bucket_count)|Ottiene il numero massimo di bucket.|  
|[unordered_set::max_load_factor](#unordered_set__max_load_factor)|Ottiene o imposta il numero massimo di elementi per bucket.|  
|[unordered_set::max_size](#unordered_set__max_size)|Ottiene la dimensione massima della sequenza controllata.|  
|[unordered_set::rehash](#unordered_set__rehash)|Ricompila la tabella hash.|  
|[unordered_set::size](#unordered_set__size)|Conta il numero di elementi.|  
|[unordered_set::swap](#unordered_set__swap)|Scambia il contenuto di due contenitori.|  
|[unordered_set::unordered_set](#unordered_set__unordered_set)|Costruisce un oggetto contenitore.|  
  
|||  
|-|-|  
|Operatori|Descrizione|  
|[unordered_set::operator=](#unordered_set__operator_eq)|Copia una tabella hash.|  
  
## <a name="remarks"></a>Note  
 L'oggetto ordina la sequenza da esso controllata chiamando due oggetti archiviati, un oggetto della funzione di confronto di tipo [unordered_set::key_equal](#unordered_set__key_equal) e un oggetto della funzione hash di tipo [unordered_set::hasher](#unordered_set__hasher). È possibile accedere al primo oggetto archiviato chiamando la funzione membro [unordered_set::key_eq](#unordered_set__key_eq)`()` ed è possibile accedere al secondo oggetto archiviato chiamando la funzione membro [unordered_set::hash_function](#unordered_set__hash_function)`()`. In particolare, per tutti i valori `X` e `Y` di tipo `Key`, la chiamata a `key_eq()(X, Y)` restituisce true solo se i valori dei due argomenti hanno un ordinamento equivalente; la chiamata a `hash_function()(keyval)` produce una distribuzione di valori di tipo `size_t`. A differenza della classe modello [unordered_multiset](../standard-library/unordered-multiset-class.md), un oggetto della classe modello `unordered_set` garantisce che `key_eq()(X, Y)` sia sempre false per due elementi qualsiasi della sequenza controllata. Le chiavi sono univoche.  
  
 L'oggetto consente inoltre di archiviare un fattore di carico massimo che specifica il numero medio massimo di elementi per bucket desiderato. Se l'inserimento di un elemento comporta il superamento del fattore di carico massimo da parte di [unordered_set::load_factor](#unordered_set__load_factor)`()`, il contenitore aumenta il numero dei bucket e ricompila la tabella hash in base alle necessità.  
  
 L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di confronto, dall'ordine di inserimento, dal fattore di carico massimo e dal numero corrente di bucket. Non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata. Si può tuttavia avere sempre la certezza dell'adiacenza dei subset di elementi con un ordinamento equivalente nella sequenza controllata.  
  
 L'oggetto alloca e libera la memoria per la sequenza da esso controllata tramite un oggetto allocatore archiviato di tipo [unordered_set::allocator_type](#unordered_set__allocator_type). Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe modello `allocator`. Si noti che l'oggetto allocatore archiviato non viene copiato dopo l'assegnazione dell'oggetto contenitore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<unordered_set>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-nameunorderedsetallocatortypea--unorderedsetallocatortype"></a><a name="unordered_set__allocator_type"></a>  unordered_set::allocator_type  
 Tipo di un allocatore per gestire l'archiviazione.  
  
```  
typedef Alloc allocator_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Alloc`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_allocator_type.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
typedef std::allocator<std::pair<const char, int> > Myalloc;  
int main()  
{  
Myset c1;  
  
Myset::allocator_type al = c1.get_allocator();  
std::cout << "al == std::allocator() is "  
<< std::boolalpha << (al == Myalloc()) << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
al == std::allocator() is true  
```  
  
##  <a name="a-nameunorderedsetbegina--unorderedsetbegin"></a><a name="unordered_set__begin"></a>  unordered_set::begin  
 Designa l'inizio della sequenza controllata o di un bucket.  
  
```  
 
iterator begin();

const_iterator begin() const;

 
local_iterator begin(size_type nbucket);

const_local_iterator begin(size_type nbucket) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`nbucket`|Numero di bucket.|  
  
### <a name="remarks"></a>Note  
 Le prime due funzioni membro restituiscono un iteratore in avanti che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota). Le ultime due funzioni membro restituiscono un iteratore in avanti che punta al primo elemento del bucket `nbucket` (o appena oltre la fine di un bucket vuoto).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// unordered_set_begin.cpp  
// compile using: cl.exe /EHsc /nologo /W4 /MTd  
#include <unordered_set>  
#include <iostream>  
  
using namespace std;  
  
typedef unordered_set<char> MySet;  
  
int main()  
{  
MySet c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents using range-based for  
for (auto it : c1) {  
cout << " [" << it << "]";  
}  
  
cout << endl;  
  
// display contents using explicit for  
for (MySet::const_iterator it = c1.begin(); it != c1.end(); ++it) {  
cout << " [" << *it << "]";  
}  
  
cout << std::endl;  
  
// display first two items  
MySet::iterator it2 = c1.begin();  
cout << " [" << *it2 << "]";  
++it2;  
cout << " [" << *it2 << "]";  
cout << endl;  
  
// display bucket containing 'a'  
MySet::const_local_iterator lit = c1.begin(c1.bucket('a'));  
cout << " [" << *lit << "]";  
  
return (0);  
}  
  
```  
  
```Output  
  
[a] [b] [c]                                   
  
[a] [b] [c]                                  
  
[a] [b]                                   
  
[a]  
  
```  
  
##  <a name="a-nameunorderedsetbucketa--unorderedsetbucket"></a><a name="unordered_set__bucket"></a>  unordered_set::bucket  
 Ottiene il numero di bucket relativo a un valore della chiave.  
  
```  
size_type bucket(const Key& keyval) const;
```  
  
### <a name="parameters"></a>Parametri  
 `keyval`  
 Valore della chiave da mappare.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il numero di bucket che corrisponde attualmente al valore della chiave `keyval`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_bucket.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// display buckets for keys  
Myset::size_type bs = c1.bucket('a');  
std::cout << "bucket('a') == " << bs << std::endl;  
std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)  
<< std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
bucket('a') == 7  
bucket_size(7) == 1  
```  
  
##  <a name="a-nameunorderedsetbucketcounta--unorderedsetbucketcount"></a><a name="unordered_set__bucket_count"></a>  unordered_set::bucket_count  
 Ottiene il numero di bucket.  
  
```  
size_type bucket_count() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il numero corrente di bucket.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_bucket_count.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// inspect current parameters  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// change max_load_factor and redisplay  
c1.max_load_factor(0.10f);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// rehash and redisplay  
c1.rehash(100);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
bucket_count() == 8  
load_factor() == 0.375  
max_bucket_count() == 8  
max_load_factor() == 4  
  
bucket_count() == 8  
load_factor() == 0.375  
max_bucket_count() == 8  
max_load_factor() == 0.1  
  
bucket_count() == 128  
load_factor() == 0.0234375  
max_bucket_count() == 128  
max_load_factor() == 0.1  
```  
  
##  <a name="a-nameunorderedsetbucketsizea--unorderedsetbucketsize"></a><a name="unordered_set__bucket_size"></a>  unordered_set::bucket_size  
 Ottiene le dimensioni di un bucket.  
  
```  
size_type bucket_size(size_type nbucket) const;
```  
  
### <a name="parameters"></a>Parametri  
 `nbucket`  
 Numero di bucket.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la dimensione del numero di bucket `nbucket`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_bucket_size.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// display buckets for keys  
Myset::size_type bs = c1.bucket('a');  
std::cout << "bucket('a') == " << bs << std::endl;  
std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)  
<< std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
bucket('a') == 7  
bucket_size(7) == 1  
```  
  
##  <a name="a-nameunorderedsetcbegina--unorderedsetcbegin"></a><a name="unordered_set__cbegin"></a>  unordered_set::cbegin  
 Restituisce un iteratore `const` che punta al primo elemento dell'intervallo.  
  
```  
const_iterator cbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore di accesso in avanti `const` che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).  
  
### <a name="remarks"></a>Note  
 Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.  
  
 È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri `Container` come un contenitore (non `const`) modificabile di qualsiasi tipo che supporta `begin()` e `cbegin()`.  
  
```cpp  
auto i1 = Container.begin();
// i1 isContainer<T>::iterator  
auto i2 = Container.cbegin();

// i2 isContainer<T>::const_iterator  
```  
  
##  <a name="a-nameunorderedsetcenda--unorderedsetcend"></a><a name="unordered_set__cend"></a>  unordered_set::cend  
 Restituisce un iteratore `const` che punta alla posizione oltre l'ultimo elemento di un intervallo.  
  
```  
const_iterator cend() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore di accesso in avanti `const` che punta oltre la fine dell'intervallo.  
  
### <a name="remarks"></a>Note  
 `cend` viene utilizzato per verificare se un iteratore ha superato la fine del relativo intervallo.  
  
 È possibile usare questa funzione membro anziché la funzione membro `end()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri `Container` come un contenitore (non `const`) modificabile di qualsiasi tipo che supporta `end()` e `cend()`.  
  
```cpp  
auto i1 = Container.end();
// i1 isContainer<T>::iterator  
auto i2 = Container.cend();

// i2 isContainer<T>::const_iterator  
```  
  
 Non è consigliabile dereferenziare il valore restituito da `cend`.  
  
##  <a name="a-nameunorderedsetcleara--unorderedsetclear"></a><a name="unordered_set__clear"></a>  unordered_set::clear  
 Rimuove tutti gli elementi.  
  
```  
void clear();
```  
  
### <a name="remarks"></a>Note  
 La funzione membro chiama [unordered_set::erase](#unordered_set__erase)`(` [unordered_set::begin](#unordered_set__begin)`(),` [unordered_set::end](#unordered_set__end)`())`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_clear.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// clear the container and reinspect  
c1.clear();  
std::cout << "size == " << c1.size() << std::endl;  
std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;  
std::cout << std::endl;  
  
c1.insert('d');  
c1.insert('e');  
  
// display contents " [e] [d]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
std::cout << "size == " << c1.size() << std::endl;  
std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
size == 0  
empty() == true  
  
[e] [d]  
size == 2  
empty() == false  
```  
  
##  <a name="a-nameunorderedsetconstiteratora--unorderedsetconstiterator"></a><a name="unordered_set__const_iterator"></a>  unordered_set::const_iterator  
 Tipo di un iteratore costante per la sequenza controllata.  
  
```  
typedef T1 const_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come iteratore costante in avanti per la sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T1`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_const_iterator.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="a-nameunorderedsetconstlocaliteratora--unorderedsetconstlocaliterator"></a><a name="unordered_set__const_local_iterator"></a>  unordered_set::const_local_iterator  
 Tipo di un iteratore di bucket costante per la sequenza controllata.  
  
```  
typedef T5 const_local_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come iteratore in avanti costante per un bucket. Qui è descritto come sinonimo del tipo definito dall'implementazione `T5`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_const_local_iterator.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// inspect bucket containing 'a'  
Myset::const_local_iterator lit = c1.begin(c1.bucket('a'));  
std::cout << " [" << *lit << "]";  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
[a]  
  
```  
  
##  <a name="a-nameunorderedsetconstpointera--unorderedsetconstpointer"></a><a name="unordered_set__const_pointer"></a>  unordered_set::const_pointer  
 Tipo di un puntatore costante a un elemento.  
  
```  
typedef Alloc::const_pointer const_pointer;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come puntatore costante a un elemento della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_const_pointer.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::iterator it = c1.begin();  
it != c1.end(); ++it)  
{  
Myset::const_pointer p = &*it;  
std::cout << " [" << *p << "]";  
}  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="a-nameunorderedsetconstreferencea--unorderedsetconstreference"></a><a name="unordered_set__const_reference"></a>  unordered_set::const_reference  
 Tipo di un riferimento costante a un elemento.  
  
```  
typedef Alloc::const_reference const_reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come riferimento costante a un elemento della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_const_reference.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::iterator it = c1.begin();  
it != c1.end(); ++it)  
{  
Myset::const_reference ref = *it;  
std::cout << " [" << ref << "]";  
}  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="a-nameunorderedsetcounta--unorderedsetcount"></a><a name="unordered_set__count"></a>  unordered_set::count  
 Trova il numero di elementi corrispondenti a una chiave specificata.  
  
```  
size_type count(const Key& keyval) const;
```  
  
### <a name="parameters"></a>Parametri  
 `keyval`  
 Valore della chiave da cercare.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il numero di elementi nell'intervallo delimitato da [unordered_set::equal_range](#unordered_set__equal_range)`(keyval)`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_count.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
std::cout << "count('A') == " << c1.count('A') << std::endl;  
std::cout << "count('b') == " << c1.count('b') << std::endl;  
std::cout << "count('C') == " << c1.count('C') << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
count('A') == 0  
count('b') == 1  
count('C') == 0  
```  
  
##  <a name="a-nameunorderedsetdifferencetypea--unorderedsetdifferencetype"></a><a name="unordered_set__difference_type"></a>  unordered_set::difference_type  
 Tipo di una distanza Signed tra due elementi.  
  
```  
typedef T3 difference_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo di valore integer con segno descrive un oggetto che può rappresentare la differenza tra gli indirizzi di due elementi qualsiasi della sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T3`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_difference_type.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// compute positive difference  
Myset::difference_type diff = 0;  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
++diff;  
std::cout << "end()-begin() == " << diff << std::endl;  
  
// compute negative difference  
diff = 0;  
for (Myset::const_iterator it = c1.end();  
it != c1.begin(); --it)  
--diff;  
std::cout << "begin()-end() == " << diff << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
end()-begin() == 3  
begin()-end() == -3  
```  
  
##  <a name="a-nameunorderedsetemplacea--unorderedsetemplace"></a><a name="unordered_set__emplace"></a>  unordered_set::emplace  
 Inserisce un elemento costruito sul posto, senza operazioni di copia o spostamento.  
  
```  
 
template <class... Args>  
pair<iterator, bool>  
emplace(
Args&&... args);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`args`|Argomenti inoltrati per costruire un elemento da inserire nell'oggetto unordered_set a meno che non vi sia già contenuto un elemento il cui valore è ordinato in modo equivalente.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `pair` il cui componente `bool` restituisce true se è stato effettuato un inserimento e false se in `unordered_set` è già contenuto un elemento la cui chiave ha un valore equivalente nell'ordinamento e il cui componente iteratore restituisce l'indirizzo in cui è stato inserito un nuovo elemento o in cui si trovava già l'elemento.  
  
 Per accedere al componente iteratore di una coppia `pr` restituita da questa funzione membro, usare `pr.first` e per deferenziarlo, usare `*(pr.first)`. Per accedere al componente `bool` di una coppia `pr` restituita da questa funzione membro, usare `pr.second`.  
  
### <a name="remarks"></a>Note  
 Questa funzione non invalida alcun iteratore né riferimento.  
  
 Durante l'inserimento, se viene generata un'eccezione che non si trova nella funzione hash del contenitore, quest'ultimo non viene modificato. Se l'eccezione viene generata nella funzione hash, il risultato non sarà definito.  
  
 Per un esempio di codice, vedere [set::emplace](../standard-library/set-class.md#set__emplace).  
  
##  <a name="a-nameunorderedsetemplacehinta--unorderedsetemplacehint"></a><a name="unordered_set__emplace_hint"></a>  unordered_set::emplace_hint  
 Inserisce un elemento costruito in locale (senza che vengano eseguite operazioni di copia o di spostamento), con un suggerimento sulla posizione.  
  
```  
 
template <class... Args>  
iterator emplace_hint(
const_iteratorwhere,  
Args&&... args);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`args`|Argomenti inoltrati per costruire un elemento da inserire in un oggetto unordered_set a meno che quest'ultimo non contenga già tale elemento o, più in generale, a meno che non contenga già un elemento la cui la chiave sia equivalentemente ordinata.|  
|`where`|Suggerimento sulla posizione per avviare la ricerca del punto di inserimento corretto.|  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore all'elemento appena inserito.  
  
 Se l'inserimento ha avuto esito negativo perché l'elemento esiste già, restituisce un iteratore all'elemento esistente.  
  
### <a name="remarks"></a>Note  
 Questa funzione non invalida alcun iteratore né riferimento.  
  
 Durante l'inserimento, se viene generata un'eccezione che non si trova nella funzione hash del contenitore, quest'ultimo non viene modificato. Se l'eccezione viene generata nella funzione hash, il risultato non sarà definito.  
  
 Per un esempio di codice, vedere [set::emplace_hint](../standard-library/set-class.md#set__emplace_hint).  
  
##  <a name="a-nameunorderedsetemptya--unorderedsetempty"></a><a name="unordered_set__empty"></a>  unordered_set::empty  
 Verifica se sono presenti o meno degli elementi.  
  
```  
bool empty() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce true per una sequenza controllata vuota.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_empty.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// clear the container and reinspect  
c1.clear();  
std::cout << "size == " << c1.size() << std::endl;  
std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;  
std::cout << std::endl;  
  
c1.insert('d');  
c1.insert('e');  
  
// display contents " [e] [d]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
std::cout << "size == " << c1.size() << std::endl;  
std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
size == 0  
empty() == true  
  
[e] [d]  
size == 2  
empty() == false  
```  
  
##  <a name="a-nameunorderedsetenda--unorderedsetend"></a><a name="unordered_set__end"></a>  unordered_set::end  
 Designa la fine della sequenza controllata.  
  
```  
 
iterator end();

const_iterator end() const;

 
local_iterator end(size_type nbucket);

const_local_iterator end(size_type nbucket) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`nbucket`|Numero di bucket.|  
  
### <a name="remarks"></a>Note  
 Le prime due funzioni membro restituiscono un iteratore in avanti che punta poco oltre la fine della sequenza. Le ultime due funzioni membro restituiscono un iteratore in avanti che punta poco oltre la fine del bucket `nbucket`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__unordered_set__unordered_set_end.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// inspect last two items " [a] [b]"  
Myset::iterator it2 = c1.end();  
--it2;  
std::cout << " [" << *it2 << "]";  
--it2;  
std::cout << " [" << *it2 << "]";  
std::cout << std::endl;  
  
// inspect bucket containing 'a'  
Myset::const_local_iterator lit = c1.end(c1.bucket('a'));  
--lit;  
std::cout << " [" << *lit << "]";  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
[a] [b]  
[a]  
  
```  
  
##  <a name="a-nameunorderedsetequalrangea--unorderedsetequalrange"></a><a name="unordered_set__equal_range"></a>  unordered_set::equal_range  
 Trova un intervallo che corrisponde a una chiave specificata.  
  
```  
 
std::pair<iterator, iterator>  
equal_range(const Key& keyval);

std::pair<const_iterator, const_iterator>  
equal_range(const Key& keyval) const;
```  
  
### <a name="parameters"></a>Parametri  
 `keyval`  
 Valore della chiave da cercare.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce una coppia di iteratori `X`, in modo tale che `[X.first, X.second)` delimiti solo gli elementi della sequenza controllata con un ordinamento equivalente con `keyval`. Se tali elementi non esistono, entrambi gli iteratori sono `end()`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_equal_range.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// display results of failed search  
std::pair<Myset::iterator, Myset::iterator> pair1 =  
c1.equal_range('x');  
std::cout << "equal_range('x'):";  
for (; pair1.first != pair1.second; ++pair1.first)  
std::cout << " [" << *pair1.first << "]";  
std::cout << std::endl;  
  
// display results of successful search  
pair1 = c1.equal_range('b');  
std::cout << "equal_range('b'):";  
for (; pair1.first != pair1.second; ++pair1.first)  
std::cout << " [" << *pair1.first << "]";  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
equal_range('x'):  
equal_range('b'): [b]  
  
```  
  
##  <a name="a-nameunorderedseterasea--unorderedseterase"></a><a name="unordered_set__erase"></a>  unordered_set::erase  
 Rimuove un elemento o un intervallo di elementi in un oggetto unordered_set dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.  
  
```  
 
iterator erase(const_iteratorWhere);

iterator erase(
const_iteratorFirst, const_iteratorLast);

size_type erase(
const key_type& Key);
```  
  
### <a name="parameters"></a>Parametri  
 `Where`  
 Posizione dell'elemento che deve essere rimosso.  
  
 `First`  
 Posizione del primo elemento che deve essere rimosso.  
  
 `Last`  
 Posizione immediatamente successiva all'ultimo elemento che deve essere rimosso.  
  
 `Key`  
 Valore della chiave dell'elemento che deve essere rimosso.  
  
### <a name="return-value"></a>Valore restituito  
 Per le prime due funzioni membro, iteratore bidirezionale che definisce il primo elemento rimanente oltre gli eventuali elementi rimossi o elemento che rappresenta la fine dell'oggetto unordered_set se tali elementi non sono presenti.  
  
 Per la terza funzione membro, restituisce il numero di elementi rimossi dall'oggetto unordered_set.  
  
### <a name="remarks"></a>Note  
 Per un esempio di codice, vedere [set::erase](../standard-library/set-class.md#set__erase).  
  
##  <a name="a-nameunorderedsetfinda--unorderedsetfind"></a><a name="unordered_set__find"></a>  unordered_set::find  
 Trova un elemento che corrisponde a una chiave specificata.  
  
```  
const_iterator find(const Key& keyval) const;
```  
  
### <a name="parameters"></a>Parametri  
 `keyval`  
 Valore della chiave da cercare.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [unordered_set::equal_range](#unordered_set__equal_range)`(keyval).first`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_find.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// try to find and fail  
std::cout << "find('A') == "  
<< std::boolalpha << (c1.find('A') != c1.end()) << std::endl;  
  
// try to find and succeed  
Myset::iterator it = c1.find('b');  
std::cout << "find('b') == "  
<< std::boolalpha << (it != c1.end())  
<< ": [" << *it << "]" << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
find('A') == false  
find('b') == true: [b]  
  
```  
  
##  <a name="a-nameunorderedsetgetallocatora--unorderedsetgetallocator"></a><a name="unordered_set__get_allocator"></a>  unordered_set::get_allocator  
 Ottiene l'oggetto allocatore archiviato.  
  
```  
Alloc get_allocator() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce l'oggetto allocatore archiviato.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_get_allocator.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
typedef std::allocator<std::pair<const char, int> > Myalloc;  
int main()  
{  
Myset c1;  
  
Myset::allocator_type al = c1.get_allocator();  
std::cout << "al == std::allocator() is "  
<< std::boolalpha << (al == Myalloc()) << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
al == std::allocator() is true  
```  
  
##  <a name="a-nameunorderedsethashfunctiona--unorderedsethashfunction"></a><a name="unordered_set__hash_function"></a>  unordered_set::hash_function  
 Ottiene l'oggetto della funzione hash archiviato.  
  
```  
Hash hash_function() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce l'oggetto archiviato della funzione hash.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_hash_function.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
Myset::hasher hfn = c1.hash_function();  
std::cout << "hfn('a') == " << hfn('a') << std::endl;  
std::cout << "hfn('b') == " << hfn('b') << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
hfn('a') == 1630279  
hfn('b') == 1647086  
```  
  
##  <a name="a-nameunorderedsethashera--unorderedsethasher"></a><a name="unordered_set__hasher"></a>  unordered_set::hasher  
 Tipo della funzione hash.  
  
```  
typedef Hash hasher;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Hash`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_hasher.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
Myset::hasher hfn = c1.hash_function();  
std::cout << "hfn('a') == " << hfn('a') << std::endl;  
std::cout << "hfn('b') == " << hfn('b') << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
hfn('a') == 1630279  
hfn('b') == 1647086  
```  
  
##  <a name="a-nameunorderedsetinserta--unorderedsetinsert"></a><a name="unordered_set__insert"></a>  unordered_set::insert  
 Inserisce un elemento o un intervallo di elementi in un unordered_set.  
  
```  
 
// (1) single element  
pair<iterator, bool> insert(
const value_type& Val);

 
// (2) single element, perfect forwarded  
template <class ValTy>  
pair<iterator, bool>  
insert(
ValTy&& Val);

 
// (3) single element with hint  
iterator insert(
const_iterator Where,  
const value_type& Val);

 
// (4) single element, perfect forwarded, with hint  
template <class ValTy>  
iterator insert(
const_iterator Where,  
ValTy&& Val);

 
// (5) range  
template <class InputIterator>  
void insert(
InputIterator First,  
InputIterator Last);

 
// (6) initializer list  
void insert(
initializer_list<value_type>  
IList);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Val`|Valore di un elemento da inserire in unordered_set a meno che non vi sia già contenuto un elemento la cui chiave è ordinata in modo equivalente.|  
|`Where`|Posizione in cui iniziare a cercare il punto di inserimento corretto.|  
|`ValTy`|Parametro di modello che specifica il tipo di argomento che può essere usato da unordered_set per costruire un elemento di [value_type](../standard-library/map-class.md#map__value_type) e che esegue l'inoltro perfetto di `Val` come argomento.|  
|`First`|Posizione del primo elemento da copiare.|  
|`Last`|Posizione immediatamente dopo l'ultimo elemento da copiare.|  
|`InputIterator`|Argomento della funzione modello che soddisfa i requisiti di un [iteratore di input](../standard-library/input-iterator-tag-struct.md) che punta agli elementi di un tipo utilizzabili per costruire oggetti [value_type](../standard-library/map-class.md#map__value_type).|  
|`IList`|Oggetto [initializer_list](../standard-library/initializer-list.md) da cui copiare gli elementi.|  
  
### <a name="return-value"></a>Valore restituito  
 Le funzioni membro a elemento singolo (1) e (2) restituiscono un oggetto [pair](../standard-library/pair-structure.md) il cui componente `bool` è true se è stato eseguito un inserimento e false se unordered_set contiene già un elemento la cui chiave ha un valore equivalente nell'ordinamento. Il componente iteratore dell'oggetto pair del valore restituito punta all'elemento appena inserito se il componente `bool` è true oppure all'elemento esistente se il componente `bool` è false.  
  
 Le funzioni membro a elemento singolo con suggerimento, (3) e (4), restituiscono un iteratore che fa riferimento alla posizione in cui il nuovo elemento è stato inserito in unordered_set o all'elemento già esistente se esiste un elemento con una chiave equivalente.  
  
### <a name="remarks"></a>Note  
 Non ci sono iteratori, puntatori o riferimenti invalidati da questa funzione.  
  
 Se viene generata un'eccezione durante l'inserimento di un solo elemento, ma l'eccezione non si manifesta nella funzione hash del contenitore, lo stato del contenitore non verrà modificato. Se l'eccezione viene generata nella funzione hash, il risultato non sarà definito. Se viene generata un'eccezione durante l'inserimento di più elementi, il contenitore viene lasciato in uno stato non specificato ma comunque valido.  
  
 Per accedere al componente iteratore di un oggetto `pair``pr` restituito dalle funzioni membro a elemento singolo, usare `pr.first`; per dereferenziare l'iteratore all'interno dell'oggetto pair restituito, usare `*pr.first`, che fornisce un elemento. Per accedere al componente `bool`, usare `pr.second`. Per un esempio, vedere il codice di esempio più avanti in questo articolo.  
  
 L'oggetto [value_type](../standard-library/map-class.md#map__value_type) di un contenitore è un typedef appartenente al contenitore e, per set, `unordered_set<V>::value_type` è di tipo `const V`.  
  
 La funzione membro di intervallo (5) inserisce la sequenza di valori di elemento in un oggetto unordered_set che corrisponde a ogni elemento a cui punta un iteratore nell'intervallo `[First, Last)`. Non viene quindi inserito `Last`. La funzione membro di contenitore `end()` fa riferimento alla posizione immediatamente dopo l'ultimo elemento nel contenitore. L'istruzione `s.insert(v.begin(), v.end());`, ad esempio, cerca di inserire tutti gli elementi di `v` in `s`. Solo gli elementi che hanno valori univoci nell'intervallo vengono inseriti; i duplicati vengono ignorati. Per osservare quali elementi vengono rifiutati, usare le versioni con un singolo elemento di `insert`.  
  
 La funzione membro di elenco di inizializzatori (6) usa un oggetto [initializer_list](../standard-library/initializer-list.md) per copiare gli elementi nell'oggetto unordered_set.  
  
 Per l'inserimento di un elemento costruito sul posto, ovvero senza operazioni di copia o spostamento, vedere [set::emplace](../standard-library/set-class.md#set__emplace) e [set::emplace_hint](../standard-library/set-class.md#set__emplace_hint).  
  
 Per un esempio di codice, vedere [set::insert](../standard-library/set-class.md#set__insert).  
  
##  <a name="a-nameunorderedsetiteratora--unorderedsetiterator"></a><a name="unordered_set__iterator"></a>  unordered_set::iterator  
 Tipo che fornisce un [iteratore in avanti](../standard-library/forward-iterator-tag-struct.md) costante in grado di leggere gli elementi in un oggetto unordered_set.  
  
```  
typedef implementation-defined iterator;  
```  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [begin](../standard-library/set-class.md#set__begin) per indicazioni su come dichiarare e usare un **iteratore**.  
  
##  <a name="a-nameunorderedsetkeyeqa--unorderedsetkeyeq"></a><a name="unordered_set__key_eq"></a>  unordered_set::key_eq  
 Ottiene l'oggetto archiviato della funzione di confronto.  
  
```  
Pred key_eq() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce l'oggetto archiviato della funzione di confronto.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_key_eq.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
Myset::key_equal cmpfn = c1.key_eq();  
std::cout << "cmpfn('a', 'a') == "  
<< std::boolalpha << cmpfn('a', 'a') << std::endl;  
std::cout << "cmpfn('a', 'b') == "  
<< std::boolalpha << cmpfn('a', 'b') << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
cmpfn('a', 'a') == true  
cmpfn('a', 'b') == false  
```  
  
##  <a name="a-nameunorderedsetkeyequala--unorderedsetkeyequal"></a><a name="unordered_set__key_equal"></a>  unordered_set::key_equal  
 Tipo della funzione di confronto.  
  
```  
typedef Pred key_equal;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Pred`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_key_equal.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
Myset::key_equal cmpfn = c1.key_eq();  
std::cout << "cmpfn('a', 'a') == "  
<< std::boolalpha << cmpfn('a', 'a') << std::endl;  
std::cout << "cmpfn('a', 'b') == "  
<< std::boolalpha << cmpfn('a', 'b') << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
cmpfn('a', 'a') == true  
cmpfn('a', 'b') == false  
```  
  
##  <a name="a-nameunorderedsetkeytypea--unorderedsetkeytype"></a><a name="unordered_set__key_type"></a>  unordered_set::key_type  
 Tipo di una chiave di ordinamento.  
  
```  
typedef Key key_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Key`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_key_type.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// add a value and reinspect  
Myset::key_type key = 'd';  
Myset::value_type val = key;  
c1.insert(val);  
  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
[d] [c] [b] [a]  
  
```  
  
##  <a name="a-nameunorderedsetloadfactora--unorderedsetloadfactor"></a><a name="unordered_set__load_factor"></a>  unordered_set::load_factor  
 Conta il numero medio di elementi per bucket.  
  
```  
float load_factor() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `(float)`[unordered_set::size](#unordered_set__size)`() / (float)`[unordered_set::bucket_count](#unordered_set__bucket_count)`()`, il numero medio di elementi per bucket.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_load_factor.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// inspect current parameters  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// change max_load_factor and redisplay  
c1.max_load_factor(0.10f);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// rehash and redisplay  
c1.rehash(100);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
bucket_count() == 8  
load_factor() == 0.375  
max_bucket_count() == 8  
max_load_factor() == 4  
  
bucket_count() == 8  
load_factor() == 0.375  
max_bucket_count() == 8  
max_load_factor() == 0.1  
  
bucket_count() == 128  
load_factor() == 0.0234375  
max_bucket_count() == 128  
max_load_factor() == 0.1  
```  
  
##  <a name="a-nameunorderedsetlocaliteratora--unorderedsetlocaliterator"></a><a name="unordered_set__local_iterator"></a>  unordered_set::local_iterator  
 Tipo di iteratore di bucket.  
  
```  
typedef T4 local_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come iteratore in avanti per un bucket. Qui è descritto come sinonimo del tipo definito dall'implementazione `T4`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_local_iterator.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// inspect bucket containing 'a'  
Myset::local_iterator lit = c1.begin(c1.bucket('a'));  
std::cout << " [" << *lit << "]";  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
[a]  
  
```  
  
##  <a name="a-nameunorderedsetmaxbucketcounta--unorderedsetmaxbucketcount"></a><a name="unordered_set__max_bucket_count"></a>  unordered_set::max_bucket_count  
 Ottiene il numero massimo di bucket.  
  
```  
size_type max_bucket_count() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il numero massimo di bucket attualmente consentiti.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_max_bucket_count.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// inspect current parameters  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// change max_load_factor and redisplay  
c1.max_load_factor(0.10f);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// rehash and redisplay  
c1.rehash(100);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
bucket_count() == 8  
load_factor() == 0.375  
max_bucket_count() == 8  
max_load_factor() == 4  
  
bucket_count() == 8  
load_factor() == 0.375  
max_bucket_count() == 8  
max_load_factor() == 0.1  
  
bucket_count() == 128  
load_factor() == 0.0234375  
max_bucket_count() == 128  
max_load_factor() == 0.1  
```  
  
##  <a name="a-nameunorderedsetmaxloadfactora--unorderedsetmaxloadfactor"></a><a name="unordered_set__max_load_factor"></a>  unordered_set::max_load_factor  
 Ottiene o imposta il numero massimo di elementi per bucket.  
  
```  
 
float max_load_factor() const;

 
void max_load_factor(float factor);
```  
  
### <a name="parameters"></a>Parametri  
 `factor`  
 Nuovo fattore di carico massimo.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce il fattore di carico massimo archiviato. La seconda funzione membro sostituisce il fattore di carico massimo archiviato con `factor`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_max_load_factor.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// inspect current parameters  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// change max_load_factor and redisplay  
c1.max_load_factor(0.10f);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// rehash and redisplay  
c1.rehash(100);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_bucket_count() == "  
<< c1.max_bucket_count() << std::endl;  
std::cout << "max_load_factor() == "  
<< c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
bucket_count() == 8  
load_factor() == 0.375  
max_bucket_count() == 8  
max_load_factor() == 4  
  
bucket_count() == 8  
load_factor() == 0.375  
max_bucket_count() == 8  
max_load_factor() == 0.1  
  
bucket_count() == 128  
load_factor() == 0.0234375  
max_bucket_count() == 128  
max_load_factor() == 0.1  
```  
  
##  <a name="a-nameunorderedsetmaxsizea--unorderedsetmaxsize"></a><a name="unordered_set__max_size"></a>  unordered_set::max_size  
 Ottiene la dimensione massima della sequenza controllata.  
  
```  
size_type max_size() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la lunghezza della sequenza più lunga che l'oggetto può controllare.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_max_size.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
std::cout << "max_size() == " << c1.max_size() << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
max_size() == 4294967295  
```  
  
##  <a name="a-nameunorderedsetoperatoreqa--unorderedsetoperator"></a><a name="unordered_set__operator_eq"></a>  unordered_set::operator=  
 Copia una tabella hash.  
  
```  
 
unordered_set& operator=(const unordered_set& right);

unordered_set& operator=(unordered_set&& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|` right`|Oggetto [unordered_set](../standard-library/unordered-set-class.md) copiato nell'oggetto `unordered_set`.|  
  
### <a name="remarks"></a>Note  
 Dopo la cancellazione di tutti gli elementi esistenti in un oggetto `unordered_set`, `operator=` copia o sposta il contenuto di ` right` nell'oggetto `unordered_set`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// unordered_set_operator_as.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
int main( )  
{  
using namespace std;  
unordered_set<int> v1, v2, v3;  
unordered_set<int>::iterator iter;  
  
v1.insert(10);  
  
cout << "v1 = " ;  
for (iter = v1.begin(); iter != v1.end(); iter++)  
cout << *iter << " ";  
cout << endl;  
  
v2 = v1;  
cout << "v2 = ";  
for (iter = v2.begin(); iter != v2.end(); iter++)  
cout << *iter << " ";  
cout << endl;  
  
// move v1 into v2  
v2.clear();  
v2 = move(v1);  
cout << "v2 = ";  
for (iter = v2.begin(); iter != v2.end(); iter++)  
cout << *iter << " ";  
cout << endl;  
}  
  
```  
  
##  <a name="a-nameunorderedsetpointera--unorderedsetpointer"></a><a name="unordered_set__pointer"></a>  unordered_set::pointer  
 Tipo di un puntatore a un elemento.  
  
```  
typedef Alloc::pointer pointer;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come puntatore a un elemento della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_pointer.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::iterator it = c1.begin();  
it != c1.end(); ++it)  
{  
Myset::key_type key = *it;  
Myset::pointer p = &key;  
std::cout << " [" << *p << "]";  
}  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="a-nameunorderedsetreferencea--unorderedsetreference"></a><a name="unordered_set__reference"></a>  unordered_set::reference  
 Tipo di un riferimento a un elemento.  
  
```  
typedef Alloc::reference reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come riferimento a un elemento della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_reference.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::iterator it = c1.begin();  
it != c1.end(); ++it)  
{  
Myset::key_type key = *it;  
Myset::reference ref = key;  
std::cout << " [" << ref << "]";  
}  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="a-nameunorderedsetrehasha--unorderedsetrehash"></a><a name="unordered_set__rehash"></a>  unordered_set::rehash  
 Ricompila la tabella hash.  
  
```  
void rehash(size_type nbuckets);
```  
  
### <a name="parameters"></a>Parametri  
 `nbuckets`  
 Numero di bucket richiesto.  
  
### <a name="remarks"></a>Note  
 La funzione membro modifica il numero di bucket in modo da essere almeno pari a `nbuckets` e ricompila la tabella hash in base alle esigenze.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_rehash.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// inspect current parameters  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_load_factor() == " << c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// change max_load_factor and redisplay  
c1.max_load_factor(0.10f);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_load_factor() == " << c1.max_load_factor() << std::endl;  
std::cout << std::endl;  
  
// rehash and redisplay  
c1.rehash(100);  
std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;  
std::cout << "load_factor() == " << c1.load_factor() << std::endl;  
std::cout << "max_load_factor() == " << c1.max_load_factor() << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
bucket_count() == 8  
load_factor() == 0.375  
max_load_factor() == 4  
  
bucket_count() == 8  
load_factor() == 0.375  
max_load_factor() == 0.1  
  
bucket_count() == 128  
load_factor() == 0.0234375  
max_load_factor() == 0.1  
```  
  
##  <a name="a-nameunorderedsetsizea--unorderedsetsize"></a><a name="unordered_set__size"></a>  unordered_set::size  
 Conta il numero di elementi.  
  
```  
size_type size() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la lunghezza della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_size.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// clear the container and reinspect  
c1.clear();  
std::cout << "size == " << c1.size() << std::endl;  
std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;  
std::cout << std::endl;  
  
c1.insert('d');  
c1.insert('e');  
  
// display contents " [e] [d]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
std::cout << "size == " << c1.size() << std::endl;  
std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
size == 0  
empty() == true  
  
[e] [d]  
size == 2  
empty() == false  
```  
  
##  <a name="a-nameunorderedsetsizetypea--unorderedsetsizetype"></a><a name="unordered_set__size_type"></a>  unordered_set::size_type  
 Tipo di una distanza Unsigned tra due elementi.  
  
```  
typedef T2 size_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo Unsigned Integer descrive un oggetto che può rappresentare la lunghezza di una sequenza controllata. Qui è descritto come sinonimo del tipo definito dall'implementazione `T2`.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_size_type.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
Myset::size_type sz = c1.size();  
  
std::cout << "size == " << sz << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
size == 0  
```  
  
##  <a name="a-nameunorderedsetswapa--unorderedsetswap"></a><a name="unordered_set__swap"></a>  unordered_set::swap  
 Scambia il contenuto di due contenitori.  
  
```  
void swap(unordered_set& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Contenitore con cui eseguire lo scambio.  
  
### <a name="remarks"></a>Note  
 La funzione membro scambia le sequenze controllate tra `*this` e `right`. Se [unordered_set::get_allocator](#unordered_set__get_allocator)`() == right.get_allocator()`, esegue l'operazione in un tempo costante, genera un'eccezione solo in seguito alla copia dell'oggetto traits archiviato di tipo `Tr` e non invalida alcun riferimento, puntatore o iteratore che definisce gli elementi nelle due sequenze controllate. In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_swap.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
Myset c2;  
  
c2.insert('d');  
c2.insert('e');  
c2.insert('f');  
  
c1.swap(c2);  
  
// display contents " [f] [e] [d]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
swap(c1, c2);  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
[f] [e] [d]  
[c] [b] [a]  
  
```  
  
##  <a name="a-nameunorderedsetunorderedseta--unorderedsetunorderedset"></a><a name="unordered_set__unordered_set"></a>  unordered_set::unordered_set  
 Costruisce un oggetto contenitore.  
  
```  
 
unordered_set(
const unordered_set& Right);

explicit unordered_set(
size_typebucket_count = N0,  
const Hash& Hash = Hash(),  
const Comp& Comp = Comp(),  
const Allocator& Al = Alloc());

unordered_set(
unordered_set&& Right);

unordered_set(
initializer_list<Type> IList);

unordered_set(
initializer_list<Type> IList, size_typebucket_count);

unordered_set(
initializer_list<Type> IList,  
size_typebucket_count,  
const Hash& Hash);

unordered_set(
initializer_list<Type> IList,  
size_typebucket_count,  
const Hash& Hash,  
const Comp& Comp);

unordered_set(
initializer_list<Type> IList,  
size_typebucket_count,  
const Hash& Hash,  
const Comp& Comp,  
const Allocator& Al);

template <class InputIterator>  
unordered_set(
InputIteratorfirst,  
InputIteratorlast,  
size_typebucket_count = N0,  
const Hash& Hash = Hash(),  
const Comp& Comp = Comp(),  
const Allocator& Al = Alloc());
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`InputIterator`|Tipo di iteratore.|  
|`Al`|Oggetto allocatore da archiviare.|  
|`Comp`|Oggetto della funzione di confronto da archiviare.|  
|`Hash`|Oggetto della funzione hash da archiviare.|  
|`bucket_count`|Numero minimo di bucket.|  
|`Right`|Contenitore da copiare.|  
|`IList`|Oggetto initializer_list contenente gli elementi da copiare.|  
  
### <a name="remarks"></a>Note  
 Il primo costruttore specifica una copia della sequenza controllata da `Right`. Il secondo costruttore specifica una sequenza controllata vuota. Il terzo costruttore specifica una copia della sequenza spostando `Right`. I costruttori dal quarto all'ottavo usano un oggetto initializer_list per specificare gli elementi da copiare. Il nono costruttore inserisce la sequenza di valori degli elementi `[first, last)`.  
  
 Tutti i costruttori inizializzano inoltre diversi valori archiviati. Per il costruttore di copia, i valori vengono ottenuti da `Right`. In caso contrario:  
  
 Il numero minimo di bucket è costituito dall'argomento `bucket_count`, se disponibile; in caso contrario è costituito da un valore predefinito descritto qui come il valore `N0` definito a livello di implementazione.  
  
 L'oggetto della funzione hash è costituito dall'argomento `Hash`, se disponibile; in caso contrario, è `Hash()`.  
  
 L'oggetto della funzione di confronto è costituito dall'argomento `Comp`, se disponibile; in caso contrario, è `Comp()`.  
  
 L'oggetto allocatore è costituito dall'argomento `Al`, se disponibile; in caso contrario, è `Alloc()`.  
  
##  <a name="a-nameunorderedsetvaluetypea--unorderedsetvaluetype"></a><a name="unordered_set__value_type"></a>  unordered_set::value_type  
 Tipo di un elemento.  
  
```  
typedef Key value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un elemento nella sequenza controllata.  
  
### <a name="example"></a>Esempio  
  Â  
  
```  
  
// std__unordered_set__unordered_set_value_type.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
typedef std::unordered_set<char> Myset;  
int main()  
{  
Myset c1;  
  
c1.insert('a');  
c1.insert('b');  
c1.insert('c');  
  
// display contents " [c] [b] [a]"  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
// add a value and reinspect  
Myset::key_type key = 'd';  
Myset::value_type val = key;  
c1.insert(val);  
  
for (Myset::const_iterator it = c1.begin();  
it != c1.end(); ++it)  
std::cout << " [" << *it << "]";  
std::cout << std::endl;  
  
return (0);  
}  
  
```  
  
```Output  
  
[c] [b] [a]  
[d] [c] [b] [a]  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [<unordered_set>](../standard-library/unordered-set.md)   
 [Contenitori](../cpp/containers-modern-cpp.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)


