---
title: Classe platform::Collections::UnorderedMap | Documenti Microsoft
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- collection/Platform::Collections::UnorderedMap
ms.assetid: dc84f261-b13c-4c0a-9b57-30dcb9e3065e
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 248b25e61af0ce766c81d480d7ebf39618a8dfec
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="platformcollectionsunorderedmap-class"></a>Classe Platform::Collections::UnorderedMap

Rappresenta una *mappa*non ordinata, che è una raccolta di coppie chiave-valore.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename K,
   typename V,
   typename C = std::equal_to<K>
>
ref class Map sealed;
```

#### <a name="parameters"></a>Parametri

*K*  
Tipo di chiave nella coppia chiave-valore.

*V*  
Tipo di valore nella coppia chiave-valore.

*C*  
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa. Per impostazione predefinita, [std:: equal_to\<K >](../standard-library/equal-to-struct.md).

### <a name="remarks"></a>Note

I tipi consentiti sono:

- Integer

- classe di interfaccia ^

- classe di riferimento pubblica^

- value struct

- classe enum pubblica

**UnorderedMap** è fondamentalmente un wrapper per [std:: unordered_map](../standard-library/unordered-map-class.md) che supporta l'archiviazione dei tipi di Windows Runtime. È di un'implementazione concreta del [Windows::Foundation::Collections::IMap](/uwp/api/Windows.Foundation.Collections.IMap_K_V_) e [IObservableMap](/uwp/api/Windows.Foundation.Collections.IObservableMap_K_V_) tipi che vengono passati attraverso le interfacce di Windows Runtime. Se tenti di usare un tipo `Platform::Collections::UnorderedMap` in un parametro o valore restituito pubblico, viene generato l'errore del compilatore C3986. È possibile correggere l'errore modificando il tipo di valore restituito o parametro in [Windows::Foundation::Collections::IMap](/uwp/api/Windows.Foundation.Collections.IMap_K_V_).

Per ulteriori informazioni, vedere [raccolte](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[UnorderedMap::UnorderedMap](#ctor)|Inizializza una nuova istanza della classe Map.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Unorderedmap:: Clear](#clear)|Rimuove tutte le coppie chiave-valore dall'oggetto Map corrente.|
|[UnorderedMap::First](#first)|Restituisce un iteratore che specifica il primo elemento nella mappa.|
|[Unorderedmap:: GetView](#getview)|Restituisce una visualizzazione in sola lettura dell'elemento Map corrente, ovvero una classe Platform::Collections::UnorderedMapView.|
|[UnorderedMap::HasKey](#haskey)|Determina se l'oggetto Map corrente contiene la chiave specificata.|
|[UnorderedMap::Insert](#insert)|Aggiunge la coppia chiave-valore all'oggetto Map corrente.|
|[UnorderedMap::Lookup](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto Map corrente.|
|[Unorderedmap:: Remove](#remove)|Elimina la coppia chiave-valore specificata dall'oggetto Map corrente.|
|[Unorderedmap:: Size](#size)|Restituisce il numero di elementi nell'oggetto Map corrente.|

### <a name="events"></a>Eventi

|||
|-|-|
|nome|Descrizione|
|[Map:: mapchanged](#mapchanged) evento|Si verifica quando l'oggetto Map subisce delle modifiche.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`UnorderedMap`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="clear"></a>  Metodo unorderedmap:: Clear

Rimuove tutte le coppie chiave-valore dall'oggetto UnorderedMap corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Clear();
```

## <a name="first"></a>  Metodo unorderedmap:: First

Restituisce un iteratore che specifica il primo [Windows::Foundation::Collections::IKeyValuePair\<K, V >](http://msdn.microsoft.com/library/windows/apps/br226031.aspx) elemento nella mappa non ordinata.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator<
   Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ 
   First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella mappa.

### <a name="remarks"></a>Note

Un modo pratico per contenere l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **auto** parola chiave di deduzione del tipo. Ad esempio `auto x = myUnorderedMap->First();`.

## <a name="getview"></a>  Metodo unorderedmap:: GetView

Restituisce una visualizzazione di sola lettura dell'elemento UnorderedMap corrente; vale a dire un [Platform::Collections::UnorderedMapView classe](../cppcx/platform-collections-unorderedmapview-class.md) che implementa il [Windows::Foundation::Collections::IMapView::IMapView](http://msdn.microsoft.com/library/windows/apps/br226037.aspx) interfaccia.

### <a name="syntax"></a>Sintassi

```cpp
Windows::Foundation::Collections::IMapView<K, V>^ GetView();
```

### <a name="return-value"></a>Valore restituito

Oggetto `UnorderedMapView`.

## <a name="haskey"></a>  Metodo unorderedmap:: Haskey

Determina se l'oggetto UnorderedMap corrente contiene la chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool HasKey(
   K key
);
```

### <a name="parameters"></a>Parametri

*key*  
Chiave usata per individuare l'elemento UnorderedMap. Il tipo di *chiave* è typename *K*.

### <a name="return-value"></a>Valore restituito

`true` se la chiave viene trovata; in caso contrario, `false`.

## <a name="insert"></a>  UnorderedMap::Insert Method

Aggiunge la coppia chiave-valore specificata all'oggetto UnorderedMap corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool Insert(
   K key,
   V value
);
```

### <a name="parameters"></a>Parametri

*key*  
Chiave della coppia chiave-valore. Il tipo di *chiave* è typename *K*.

*valore*  
Valore della coppia chiave-valore. Il tipo di *valore* è typename *V*.

### <a name="return-value"></a>Valore restituito

`true` Se la chiave di un elemento esistente nell'oggetto Map corrente corrisponde *chiave* e parte del valore di tale elemento è impostata su *valore*. `false` Se nessun elemento esistente nell'oggetto Map corrente corrisponde *chiave* e *chiave* e *valore* i parametri vengono applicati a una coppia chiave-valore e successivamente aggiunti all'oggetto UnorderedMap corrente.

## <a name="lookup"></a>  Metodo unorderedmap:: lookup

Recupera il valore di tipo V associato alla chiave specificata di tipo K.

### <a name="syntax"></a>Sintassi

```cpp
V Lookup(
   K key
);
```

### <a name="parameters"></a>Parametri

*key*  
Chiave usata per individuare un elemento in UnorderedMap. Il tipo di *chiave* è typename *K*.

### <a name="return-value"></a>Valore restituito

Il valore che è associato il *chiave*. Il tipo del valore restituito è typename *V*.

## <a name="mapchanged"></a>  UnorderedMap::MapChanged

Generato quando un elemento viene inserito o rimosso dalla mappa.

### <a name="syntax"></a>Sintassi

```cpp
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;
```

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Oggetto [MapChangedEventHandler\<K, V >](http://msdn.microsoft.com/library/windows/apps/br206644.aspx) che contiene informazioni sull'oggetto che ha generato l'evento e il tipo di modifica che si sono verificati. Vedere anche [IMapChangedEventArgs\<K >](http://msdn.microsoft.com/library/windows/apps/br226034.aspx) e [CollectionChange Enumeration](http://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.collectionchange.aspx).

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

App di Windows Runtime che usa c# e Visual Basic il progetto IMap\<K, V > come IDictionary\<K, V >.

## <a name="remove"></a>  Metodo unorderedmap:: Remove

Elimina la coppia chiave-valore specificata dall'oggetto UnorderedMap corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Remove(
   K key);
```

### <a name="parameters"></a>Parametri

*key*  
Chiave della coppia chiave-valore. Il tipo di *chiave* è typename *K*.

## <a name="size"></a>  Metodo unorderedmap:: Size

Restituisce il numero di [Windows::Foundation::Collections::IKeyValuePair\<K, V >](http://msdn.microsoft.com/library/windows/apps/br226031.aspx) elementi in UnorderedMap.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto Mappa non ordinata.

## <a name="ctor"></a>  Costruttore UnorderedMap::UnorderedMap

Inizializza una nuova istanza della classe UnorderedMap.

### <a name="syntax"></a>Sintassi

```cpp
UnorderedMap();

explicit UnorderedMap(
    size_t n
    );

UnorderedMap(
    size_t n,
    const H& h
    );

UnorderedMap(
    size_t n,
    const H& h,
    const P& p
    );

explicit UnorderedMap(
    const std::unordered_map<K, V, H, P>& m
    );

explicit UnorderedMap(
    std::unordered_map<K, V, H, P>&& m
    );

template <typename InIt>
UnorderedMap(
    InIt first,
    InIt last
    );

template <typename InIt>
UnorderedMap(
    InIt first,
    InIt last,
    size_t n
    );

template <typename InIt>
UnorderedMap(
    InIt first,
    InIt last,
    size_t n,
    const H& h
    );

template <typename InIt>
UnorderedMap(
    InIt first,
    InIt last,
    size_t n,
    const H& h,
    const P& p
    );

UnorderedMap(
    std::initializer_list< std::pair<const K, V>> il
    );

UnorderedMap(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n
    );

UnorderedMap(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n,
    const H& h
    );

UnorderedMap(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n,
    const H& h,
    const P& p
    );
```

### <a name="parameters"></a>Parametri

*InIt*  
Typename dell'oggetto UnorderedMap corrente.

*P*  
Oggetto funzione che può confrontare due chiavi per determinare se sono uguali. Per impostazione predefinita questo parametro per [std:: equal_to\<K >](../standard-library/equal-to-struct.md).

*H*  
Oggetto funzione che produce un valore hash per una chiave. Per impostazione predefinita questo parametro per [hash classe 1](../standard-library/hash-class.md) per i tipi di chiave che supporta la classe.

*m*  
Un riferimento o [elementi lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md) per un [std:: unordered_map](../standard-library/unordered-map-class.md) che viene utilizzato per inizializzare l'oggetto UnorderedMap corrente.

*il* A [std:: initializer_list](../standard-library/initializer-list-class.md) di [std:: Pair](../standard-library/pair-structure.md) oggetti utilizzati per inizializzare la mappa.

*first*  
Iteratore di input del primo elemento in un intervallo di elementi usato per inizializzare l'oggetto UnorderedMap corrente.

*last*  
Iteratore di input del primo elemento dopo un intervallo di elementi usato per inizializzare l'oggetto UnorderedMap corrente.

## <a name="see-also"></a>Vedere anche

[Piattaforma Namespace](platform-namespace-c-cx.md)  
[Spazio dei nomi Platform::Collections](../cppcx/platform-collections-namespace.md)  
[Platform::Collections::Map](../cppcx/platform-collections-map-class.md)  
[Classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md)  
[Raccolte](../cppcx/collections-c-cx.md)  
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)  
