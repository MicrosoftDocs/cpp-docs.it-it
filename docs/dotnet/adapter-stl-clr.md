---
title: scheda (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 06/15/2018
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- <cliext/adapter>
- cliext::collection_adapter
- cliext::collection_adapter::base
- cliext::collection_adapter::begin
- cliext::collection_adapter
- cliext::collection_adapter::collection_adapter
- cliext::collection_adapter::difference_type
- cliext::collection_adapter::end
- cliext::collection_adapter::iterator
- cliext::collection_adapter::key_type
- cliext::collection_adapter::mapped_type
- cliext::collection_adapter::operator=
- cliext::collection_adapter::reference
- cliext::collection_adapter::size
- cliext::collection_adapter::size_type
- cliext::collection_adapter::swap
- cliext::collection_adapter::value_type
- cliext::make_collection
- cliext::range_adapter
- cliext::operator=
- cliext::range_adapter::operator=
- cliext::range_adapter::range_adapter
dev_langs:
- C++
helpviewer_keywords:
- <adapter> header [STL/CLR]
- adapter [STL/CLR]
- <cliext/adapter> header [STL/CLR]
- collection_adapter class [STL/CLR]
- base member [STL/CLR]
- begin member [STL/CLR]
- collection_adapter member [STL/CLR]
- difference_type member [STL/CLR]
- end member [STL/CLR]
- iterator member [STL/CLR]
- key_type member [STL/CLR]
- mapped_type member [STL/CLR]
- operator= member [STL/CLR]
- reference member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- swap member [STL/CLR]
- value_type member [STL/CLR]
- make_collection function [STL/CLR]
- range_adapter class [STL/CLR]
- operator= member [STL/CLR]
- range_adapter member [STL/CLR]
ms.assetid: 71ce7e51-42b6-4f70-9595-303791a97677
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 598159ff01fe1628a693085f84077d9adfcbbf49
ms.sourcegitcommit: 301bb19056e5bae84ff50f7d1df1e546efe225ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/21/2018
ms.locfileid: "36305542"
---
# <a name="adapter-stlclr"></a>adapter (STL/CLR)
L'intestazione STL/CLR `<cliext/adapter>` specifica due classi di modello (`collection_adapter` e `range_adapter`), la funzione di modello e `make_collection`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <cliext/adapter>  
```  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/adapter >  
  
 **Namespace:** cliext 
  
## <a name="members"></a>Membri  
  
|Classe|Descrizione|  
|-----------|-----------------|  
|[collection_adapter (STL/CLR)](#collection_adapter)|Esegue il wrapping dell'insieme di libreria di classi Base (BCL) come un intervallo.|  
|[range_adapter (STL/CLR)](#range_adapter)|Esegue il wrapping dell'intervallo come una raccolta di BCL.|  

|Funzione|Descrizione|  
|--------------|-----------------|  
|[make_collection (STL/CLR)](#make_collection)|Crea un adattatore di intervallo mediante una coppia di iteratori.|   
  
## <a name="collection_adapter"></a> collection_adapter (STL/CLR)
Esegue il wrapping di una raccolta di .NET per l'utilizzo come un contenitore STL/CLR. Oggetto `collection_adapter` è una classe modello che descrive un oggetto contenitore STL/CLR semplice. Esegue il wrapping di un'interfaccia della libreria di classi Base (BCL) e restituisce una coppia iteratore che consente di modificare la sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Coll>  
    ref class collection_adapter;  
  
template<>  
    ref class collection_adapter<  
        System::Collections::ICollection>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IEnumerable>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IList>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IDictionary>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::ICollection<Value>>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IEnumerable<Value>>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IList<Value>>;  
template<typename Key,  
    typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IDictionary<Key, Value>>;  
```  
  
##### <a name="parameters"></a>Parametri  
 Comprimi  
 Il tipo della raccolta sottoposta a wrapping.  
  
### <a name="specializations"></a>Specializzazioni  
  
|Specializzazione|Descrizione|  
|--------------------|-----------------|  
|IEnumerable|Sequenze tramite gli elementi.|  
|ICollection|Gestisce un gruppo di elementi.|  
|IList|Gestisce un gruppo ordinato di elementi.|  
|IDictionary|Mantenere un set di {chiave, valore} coppie.|  
|IEnumerable\<valore >|Sequenze tramite elementi tipizzati.|  
|ICollection\<valore >|Gestisce un gruppo di elementi tipizzati.|  
|IList\<valore >|Gestisce un gruppo ordinato di elementi tipizzati.|  
|IDictionary\<valore >|Gestisce un set di tipizzato {chiave, valore} coppie.|  
  
### <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[collection_adapter::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza Signed tra due elementi.|  
|[collection_adapter::iterator (STL/CLR)](#iterator)|Tipo di un iteratore per la sequenza controllata.|  
|[collection_adapter::key_type (STL/CLR)](#key_type)|Il tipo di una chiave del dizionario.|  
|[collection_adapter::mapped_type (STL/CLR)](#mapped_type)|Il tipo di un valore di dizionario.|  
|[collection_adapter::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|  
|[collection_adapter::size_type (STL/CLR)](#size_type)|Tipo di una distanza Signed tra due elementi.|  
|[collection_adapter::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[collection_adapter::base (STL/CLR)](#base)|Definisce l'interfaccia BCL sottoposta a wrapping.|  
|[collection_adapter::begin (STL/CLR)](#begin)|Indica l'inizio della sequenza controllata.|  
|[collection_adapter::collection_adapter (STL/CLR)](#collection_adapter_collection_adapter)|Costruisce un oggetto adattatore.|  
|[collection_adapter::end (STL/CLR)](#end)|Designa la fine della sequenza controllata.|  
|[collection_adapter::size (STL/CLR)](#size)|Conta il numero di elementi.|  
|[collection_adapter::swap (STL/CLR)](#swap)|Scambia il contenuto di due contenitori.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[collection_adapter::operator= (STL/CLR)](#op_eq)|Sostituisce l'handle memorizzato BCL.|  
  
### <a name="remarks"></a>Note  
 Utilizzare questa classe di modello per modificare un contenitore BCL come un contenitore STL/CLR. Il `collection_adapter` archivia un handle a un'interfaccia BCL, che a sua volta controlla una sequenza di elementi. Oggetto `collection_adapter` oggetto `X` restituisce una coppia di iteratori input `X.begin()` e `X.end()` che si utilizza per visitare gli elementi, in ordine. Alcune delle specializzazioni consentono inoltre di scrivere `X.size()` per determinare la lunghezza della sequenza controllata.  

## <a name="base"></a> collection_adapter::base (STL/CLR)
Definisce l'interfaccia BCL sottoposta a wrapping.  
  
### <a name="syntax"></a>Sintassi  
  
```  
Coll^ base();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce l'handle di interfaccia BCL stored.  
  
### <a name="example"></a>Esempio  
  
```cpp
// cliext_collection_adapter_base.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d6x(6, L'x');   
    Mycoll c1(%d6x);   
  
// display initial contents " x x x x x x"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("base() same = {0}", c1.base() == %c1);   
    return (0);   
    }  
  
```  
  
```Output  
 x x x x x x  
base() same = True  
```  

## <a name="begin"></a> collection_adapter::Begin (STL/CLR)
Indica l'inizio della sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
iterator begin();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore di input che definisce il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_collection_adapter_begin.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items   
    Mycoll::iterator it = c1.begin();   
    System::Console::WriteLine("*begin() = {0}", *it);   
    System::Console::WriteLine("*++begin() = {0}", *++it);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
*begin() = a  
*++begin() = b  
```  

## <a name="collection_adapter_collection_adapter"></a> collection_adapter::collection_adapter (STL/CLR)
Costruisce un oggetto adattatore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
collection_adapter();  
collection_adapter(collection_adapter<Coll>% right);  
collection_adapter(collection_adapter<Coll>^ right);  
collection_adapter(Coll^ collection);  
```  
  
#### <a name="parameters"></a>Parametri  
 raccolta  
 Handle di libreria di classi base per eseguire il wrapping.  
  
 right  
 Oggetto da copiare.  
  
### <a name="remarks"></a>Note  
 Il costruttore:  
  
 `collection_adapter();`  
  
 Inizializza l'handle memorizzato con `nullptr`.  
  
 Il costruttore:  
  
 `collection_adapter(collection_adapter<Coll>% right);`  
  
 Inizializza l'handle memorizzato con `right.` [collection_adapter::base (STL/CLR)](../dotnet/collection-adapter-base-stl-clr.md)`()`.  
  
 Il costruttore:  
  
 `collection_adapter(collection_adapter<Coll>^ right);`  
  
 Inizializza l'handle memorizzato con `right->` [collection_adapter::base (STL/CLR)](../dotnet/collection-adapter-base-stl-clr.md)`()`.  
  
 Il costruttore:  
  
 `collection_adapter(Coll^ collection);`  
  
 Inizializza l'handle memorizzato con con `collection`.  
  
### <a name="example"></a>Esempio  
  
```cpp 
// cliext_collection_adapter_construct.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d6x(6, L'x');   
  
// construct an empty container   
    Mycoll c1;   
    System::Console::WriteLine("base() null = {0}", c1.base() == nullptr);   
  
// construct with a handle   
    Mycoll c2(%d6x);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mycoll c3(c2);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    Mycoll c4(%c3);   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
```Output  
base() null = True  
 x x x x x x  
 x x x x x x  
 x x x x x x  
```  

## <a name="difference_type"></a> collection_adapter::difference_type (STL/CLR)
I tipi di una distanza signed tra due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef int difference_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un conteggio di elementi con segno.  
  
### <a name="example"></a>Esempio  
  
```cpp 
// cliext_collection_adapter_difference_type.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// compute positive difference   
    Mycoll::difference_type diff = 0;   
    Mycoll::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        ++diff;   
    System::Console::WriteLine("end()-begin() = {0}", diff);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
end()-begin() = 3  
```  

## <a name="end"></a> collection_adapter::end (STL/CLR)
Designa la fine della sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
iterator end();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce un iteratore di input che punta appena oltre la fine della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp 
// cliext_collection_adapter_end.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    Mycoll::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        System::Console::Write(" {0}", *it);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="iterator"></a> collection_adapter::Iterator (STL/CLR)
Tipo di un iteratore per la sequenza controllata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef T1 iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto di tipo non specificato `T1` che può essere utilizzato come un iteratore di input per la sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_collection_adapter_iterator.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    Mycoll::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        System::Console::Write(" {0}", *it);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="key_type"></a> collection_adapter::KEY_TYPE (STL/CLR)
Il tipo di una chiave del dizionario.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Key key_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Key`, in una specializzazione per `IDictionary` o `IDictionary<Value>`; in caso contrario non è definito.  
  
### <a name="example"></a>Esempio  
  
```cpp
// cliext_collection_adapter_key_type.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
typedef cliext::collection_adapter<   
    System::Collections::Generic::IDictionary<wchar_t, int>> Mycoll;   
typedef System::Collections::Generic::KeyValuePair<wchar_t,int> Mypair;   
int main()   
    {   
    Mymap d1;   
    d1.insert(Mymap::make_value(L'a', 1));   
    d1.insert(Mymap::make_value(L'b', 2));   
    d1.insert(Mymap::make_value(L'c', 3));   
    Mycoll c1(%d1);   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mypair elem in c1)   
        {   
        Mycoll::key_type key = elem.Key;   
        Mycoll::mapped_type value = elem.Value;   
        System::Console::Write(" [{0} {1}]", key, value);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
```  

## <a name="mapped_type"></a> collection_adapter::mapped_type (STL/CLR)
Il tipo di un valore di dizionario.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Value mapped_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Value`, in una specializzazione per `IDictionary` o `IDictionary<Value>`; in caso contrario non è definito.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_collection_adapter_mapped_type.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
typedef cliext::collection_adapter<   
    System::Collections::Generic::IDictionary<wchar_t, int>> Mycoll;   
typedef System::Collections::Generic::KeyValuePair<wchar_t,int> Mypair;   
int main()   
    {   
    Mymap d1;   
    d1.insert(Mymap::make_value(L'a', 1));   
    d1.insert(Mymap::make_value(L'b', 2));   
    d1.insert(Mymap::make_value(L'c', 3));   
    Mycoll c1(%d1);   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mypair elem in c1)   
        {   
        Mycoll::key_type key = elem.Key;   
        Mycoll::mapped_type value = elem.Value;   
        System::Console::Write(" [{0} {1}]", key, value);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
```  

## <a name="op_eq"></a> collection_adapter::operator = (STL/CLR)
Sostituisce l'handle memorizzato BCL.  
  
### <a name="syntax"></a>Sintassi  
  
```  
collection_adapter<Coll>% operator=(collection_adapter<Coll>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Adapter da copiare.  
  
### <a name="remarks"></a>Note  
 Le copie di operatore membro `right` all'oggetto, quindi restituisce `*this`. Usarlo per sostituire l'handle BCL stored con una copia dell'handle BCL stored in `right`.  
  
### <a name="example"></a>Esempio  
  
```cpp 
// cliext_collection_adapter_operator_as.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Mycoll c2;   
    c2 = c1;   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
```  

## <a name="reference"></a> collection_adapter::Reference (STL/CLR)
Tipo di un riferimento a un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef value_type% reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un riferimento a un elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp 
// cliext_collection_adapter_reference.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    Mycoll::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        {   // get a reference to an element   
        Mycoll::reference ref = *it;   
        System::Console::Write(" {0}", ref);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="size"></a> collection_adapter::Size (STL/CLR)
Conta il numero di elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
size_type size();  
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la lunghezza della sequenza controllata. Non è definito in una specializzazione per `IEnumerable` o `IEnumerable<Value>`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_collection_adapter_size.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d6x(6, L'x');   
    Mycoll c1(%d6x);   
  
// display initial contents " x x x x x x"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    return (0);   
    }  
  
```  
  
```Output  
 x x x x x x  
size() = 6  
```  

## <a name="size_type"></a> collection_adapter::size_type (STL/CLR)
Il tipo di una distanza signed tra due elementi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef int size_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un conteggio di elementi non negativo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_collection_adapter_size_type.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d6x(6, L'x');   
    Mycoll c1(%d6x);   
  
// display initial contents " x x x x x x"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    Mycoll::size_type size = c1.size();   
    System::Console::WriteLine("size() = {0}", size);   
    return (0);   
    }  
  
```  
  
```Output  
 x x x x x x  
size() = 6  
```  

## <a name="swap"></a> collection_adapter::swap (STL/CLR)
Scambia il contenuto di due contenitori.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void swap(collection_adapter<Coll>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Contenitore con cui scambiare il contenuto.  
  
### <a name="remarks"></a>Note  
 La funzione membro Scambia le maniglie BCL stored tra `*this` e `right`.  
  
### <a name="example"></a>Esempio  
  
```cpp
// cliext_collection_adapter_swap.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct another container with repetition of values   
    cliext::deque<wchar_t> d2(5, L'x');   
    Mycoll c2(%d2);   
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
x x x x x  
x x x x x  
a b c  
```  

## <a name="value_type"></a> collection_adapter::value_type (STL/CLR)
Tipo di un elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef Value value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Value`, se presente nella specializzazione; in caso contrario è un sinonimo per `System::Object^`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_collection_adapter_value_type.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display contents " a b c" using value_type   
    for (Mycoll::iterator it = c1.begin();   
        it != c1.end(); ++it)   
        {   // store element in value_type object   
        Mycoll::value_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  

## <a name="make_collection"></a> make_collection (STL/CLR)
Rendere un `range_adapter` da una coppia di iteratori.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Iter>  
    range_adapter<Iter> make_collection(Iter first, Iter last);  
```  
  
#### <a name="parameters"></a>Parametri  
 `Iter`  
 Tipo degli iteratori di sottoposta a wrapping.  
  
 `first`  
 Primo iteratore per eseguire il wrapping.  
  
 `last`  
 Secondo iteratore per eseguire il wrapping.  
  
### <a name="remarks"></a>Note  
 La funzione modello restituisce `gcnew range_adapter<Iter>(first, last)`. Utilizzato per costruire un `range_adapter<Iter>` oggetto da una coppia di iteratori.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_make_collection.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::deque<wchar_t> Mycont;   
typedef cliext::range_adapter<Mycont::iterator> Myrange;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in d1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Collections::ICollection^ p1 =   
        cliext::make_collection(d1.begin(), d1.end());   
    System::Console::WriteLine("Count = {0}", p1->Count);   
    System::Console::WriteLine("IsSynchronized = {0}",   
        p1->IsSynchronized);   
    System::Console::WriteLine("SyncRoot not nullptr = {0}",   
        p1->SyncRoot != nullptr);   
  
// copy the sequence   
    cli::array<System::Object^>^ a1 = gcnew cli::array<System::Object^>(5);   
  
    a1[0] = L'|';   
    p1->CopyTo(a1, 1);   
    a1[4] = L'|';   
    for each (wchar_t elem in a1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
Count = 3  
IsSynchronized = False  
SyncRoot not nullptr = True  
 | a b c |  
```  

## <a name="range_adapter"></a> range_adapter (STL/CLR)
Classe modello che esegue il wrapping di una coppia di iteratori che consentono di implementare più interfacce di libreria di classi Base (BCL). Utilizzare il range_adapter per modificare un intervallo STL/CLR come se fosse un insieme di BCL.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template<typename Iter>  
    ref class range_adapter  
        :   public  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<Value>,  
        System::Collections::Generic::ICollection<Value>  
    { ..... };  
```  
  
#### <a name="parameters"></a>Parametri  
 iter  
 Il tipo associato gli iteratori sottoposta a wrapping.  
  
### <a name="members"></a>Membri  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[range_adapter::range_adapter (STL/CLR)](#range_adapter_range_adapter)|Costruisce un oggetto adattatore.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[range_adapter::operator= (STL/CLR)](#range_adapter_op_eq)|Sostituisce la coppia iteratore archiviato.|  
  
### <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.Collections.IEnumerable>|Scorre gli elementi nella raccolta.|  
|<xref:System.Collections.ICollection>|Gestisce un gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Elementi tipizzati nella raccolta vengono scorsi...|  
|<xref:System.Collections.Generic.ICollection%601>|Gestisce un gruppo di elementi tipizzati.|  
  
### <a name="remarks"></a>Note  
 Il range_adapter archivia una coppia di iteratori, che a sua volta delimitare una sequenza di elementi. L'oggetto implementa quattro interfacce di libreria di classi base che consentono di scorrere gli elementi, in ordine. Utilizzare questa classe di modello per modificare gli intervalli STL/CLR come contenitori BCL.  

## <a name="range_adapter_op_eq"></a> range_adapter::operator = (STL/CLR)
Sostituisce la coppia iteratore archiviato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
range_adapter<Iter>% operator=(range_adapter<Iter>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 right  
 Adapter da copiare.  
  
### <a name="remarks"></a>Note  
 Le copie di operatore membro `right` all'oggetto, quindi restituisce `*this`. Usarlo per sostituire la coppia iteratore archiviato con una copia della coppia iteratore archiviato in `right`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_range_adapter_operator_as.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::deque<wchar_t> Mycont;   
typedef cliext::range_adapter<Mycont::iterator> Myrange;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Myrange c1(d1.begin(), d1.end());   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myrange c2;   
    c2 = c1;   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
```  

## <a name="range_adapter_range_adapter"></a> range_adapter::range_adapter (STL/CLR)
Costruisce un oggetto adattatore.  
  
### <a name="syntax"></a>Sintassi  
  
```  
range_adapter();  
range_adapter(range_adapter<Iter>% right);  
range_adapter(range_adapter<Iter>^ right);  
range_adapter(Iter first, Iter last);  
```  
  
#### <a name="parameters"></a>Parametri  
 primo  
 Primo iteratore per eseguire il wrapping.  
  
 last  
 Secondo iteratore per eseguire il wrapping.  
  
 right  
 Oggetto da copiare.  
  
### <a name="remarks"></a>Note  
 Il costruttore:  
  
 `range_adapter();`  
  
 Inizializza la coppia iteratore archiviato con gli iteratori costruita predefinita.  
  
 Il costruttore:  
  
 `range_adapter(range_adapter<Iter>% right);`  
  
 Inizializza la coppia iteratore archiviato copiando la coppia archiviata in `right`.  
  
 Il costruttore:  
  
 `range_adapter(range_adapter<Iter>^ right);`  
  
 Inizializza la coppia iteratore archiviato copiando la coppia archiviata in `*right`.  
  
 Il costruttore:  
  
 `range_adapter(Iter^ first, last);`  
  
 Inizializza la coppia iteratore archiviato con `first` e `last`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_range_adapter_construct.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::deque<wchar_t> Mycont;   
typedef cliext::range_adapter<Mycont::iterator> Myrange;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
  
// construct an empty adapter   
    Myrange c1;   
  
// construct with an iterator pair   
    Myrange c2(d1.begin(), d1.end());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another adapter   
    Myrange c3(c2);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying an adapter handle   
    Myrange c4(%c3);   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
a b c  
```  