---
title: Classe Platform::Collections::UnorderedMap
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- collection/Platform::Collections::UnorderedMap
ms.assetid: dc84f261-b13c-4c0a-9b57-30dcb9e3065e
ms.openlocfilehash: ec458f5d4a47b6eced939c4fe346d5d0414ea7c2
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88839127"
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

*K*<br/>
Tipo di chiave nella coppia chiave-valore.

*V*<br/>
Tipo di valore nella coppia chiave-valore.

*C*<br/>
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa. Per impostazione predefinita, [std:: \<K> equal_to](../standard-library/equal-to-struct.md).

### <a name="remarks"></a>Osservazioni

I tipi consentiti sono:

- integer

- classe di interfaccia ^

- classe di riferimento pubblica^

- value struct

- classe enum pubblica

**UnorderedMap** è fondamentalmente un wrapper per [std:: unordered_map](../standard-library/unordered-map-class.md) che supporta l'archiviazione di tipi di Windows Runtime. Si tratta di un'implementazione concreta dei tipi [Windows:: Foundation:: Collections:: IMAP](/uwp/api/windows.foundation.collections.imap-2) e [IObservableMap](/uwp/api/windows.foundation.collections.iobservablemap-2) passati attraverso le interfacce di Windows Runtime pubbliche. Se tenti di usare un tipo `Platform::Collections::UnorderedMap` in un parametro o valore restituito pubblico, viene generato l'errore del compilatore C3986. Per correggere l'errore, modificare il tipo di parametro o di valore restituito in [Windows::Foundation::Collections::IMap](/uwp/api/windows.foundation.collections.imap-2).

Per ulteriori informazioni, vedere [raccolte](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[UnorderedMap:: UnorderedMap](#ctor)|Inizializza una nuova istanza della classe Map.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[UnorderedMap:: Clear](#clear)|Rimuove tutte le coppie chiave-valore dall'oggetto Map corrente.|
|[UnorderedMap:: First](#first)|Restituisce un iteratore che specifica il primo elemento nella mappa.|
|[UnorderedMap:: GetView](#getview)|Restituisce una visualizzazione in sola lettura dell'elemento Map corrente, ovvero una classe Platform::Collections::UnorderedMapView.|
|[UnorderedMap:: HasKey](#haskey)|Determina se l'oggetto Map corrente contiene la chiave specificata.|
|[UnorderedMap:: Insert](#insert)|Aggiunge la coppia chiave-valore all'oggetto Map corrente.|
|[UnorderedMap:: Lookup](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto Map corrente.|
|[UnorderedMap:: Remove](#remove)|Elimina la coppia chiave-valore specificata dall'oggetto Map corrente.|
|[UnorderedMap:: size](#size)|Restituisce il numero di elementi nell'oggetto Map corrente.|

### <a name="events"></a>Eventi

| Nome | Descrizione |
|--|--|
| Evento [Map:: mapchanged](#mapchanged) | Si verifica quando l'oggetto Map subisce delle modifiche. |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`UnorderedMap`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="unorderedmapclear-method"></a><a name="clear"></a> Metodo UnorderedMap:: Clear

Rimuove tutte le coppie chiave-valore dall'oggetto UnorderedMap corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Clear();
```

## <a name="unorderedmapfirst-method"></a><a name="first"></a> Metodo UnorderedMap:: First

Restituisce un iteratore che specifica il primo elemento [Windows:: Foundation:: Collections \<K,V> :: IKeyValuePair](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) nella mappa non ordinata.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator<
   Windows::Foundation::Collections::IKeyValuePair<K, V>^>^
   First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella mappa.

### <a name="remarks"></a>Osservazioni

Un modo pratico per conservare l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **`auto`** parola chiave di deduzione del tipo. Ad esempio: `auto x = myUnorderedMap->First();`.

## <a name="unorderedmapgetview-method"></a><a name="getview"></a> Metodo UnorderedMap:: GetView

Restituisce una visualizzazione di sola lettura dell'oggetto UnorderedMap corrente. ovvero una [Classe Platform:: Collections:: UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md) che implementa l'interfaccia [Windows:: Foundation:: Collections:: IMapView:: IMapView](/uwp/api/windows.foundation.collections.imapview-2) .

### <a name="syntax"></a>Sintassi

```cpp
Windows::Foundation::Collections::IMapView<K, V>^ GetView();
```

### <a name="return-value"></a>Valore restituito

Oggetto `UnorderedMapView`.

## <a name="unorderedmaphaskey-method"></a><a name="haskey"></a> Metodo UnorderedMap:: HasKey

Determina se l'oggetto UnorderedMap corrente contiene la chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool HasKey(
   K key
);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare l'elemento UnorderedMap. Il tipo di *chiave* è TypeName *K*.

### <a name="return-value"></a>Valore restituito

**`true`** Se la chiave viene trovata; in caso contrario, **`false`** .

## <a name="unorderedmapinsert-method"></a><a name="insert"></a> Metodo UnorderedMap:: Insert

Aggiunge la coppia chiave-valore specificata all'oggetto UnorderedMap corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool Insert(
   K key,
   V value
);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave della coppia chiave-valore. Il tipo di *chiave* è TypeName *K*.

*value*<br/>
Valore della coppia chiave-valore. Il tipo di *valore* è TypeName *V*.

### <a name="return-value"></a>Valore restituito

**`true`** Se la chiave di un elemento esistente nella mappa corrente corrisponde alla *chiave* e la parte relativa al valore dell'elemento è impostata su *value*. **`false`** Se nessun elemento esistente nell'oggetto Map corrente corrisponde alla *chiave* e i parametri *Key* e *value* vengono eseguiti in una coppia chiave-valore e quindi aggiunti al UnorderedMap corrente.

## <a name="unorderedmaplookup-method"></a><a name="lookup"></a> Metodo UnorderedMap:: Lookup

Recupera il valore di tipo V associato alla chiave specificata di tipo K.

### <a name="syntax"></a>Sintassi

```cpp
V Lookup(
   K key
);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare un elemento in UnorderedMap. Il tipo di *chiave* è TypeName *K*.

### <a name="return-value"></a>Valore restituito

Valore abbinato alla *chiave*. Il tipo del valore restituito è TypeName *V*.

## <a name="unorderedmapmapchanged"></a><a name="mapchanged"></a> UnorderedMap:: MapChanged

Generato quando un elemento viene inserito o rimosso dalla mappa.

### <a name="syntax"></a>Sintassi

```cpp
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;
```

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Oggetto [MapChangedEventHandler \<K,V> ](/uwp/api/windows.foundation.collections.mapchangedeventhandler-2) che contiene informazioni sull'oggetto che ha generato l'evento e il tipo di modifica che si è verificata. Vedere anche [enumerazione \<K> IMapChangedEventArgs](/uwp/api/windows.foundation.collections.imapchangedeventargs-1) e [CollectionChange](/uwp/api/windows.foundation.collections.collectionchange).

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

Windows Runtime app che usa C# o Visual Basic progetto IMap \<K,V> come IDictionary \<K,V> .

## <a name="unorderedmapremove-method"></a><a name="remove"></a> Metodo UnorderedMap:: Remove

Elimina la coppia chiave-valore specificata dall'oggetto UnorderedMap corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Remove(
   K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave della coppia chiave-valore. Il tipo di *chiave* è TypeName *K*.

## <a name="unorderedmapsize-method"></a><a name="size"></a> Metodo UnorderedMap:: size

Restituisce il numero di elementi [Windows:: Foundation:: Collections: \<K,V> : IKeyValuePair](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) in UnorderedMap.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto Mappa non ordinata.

## <a name="unorderedmapunorderedmap-constructor"></a><a name="ctor"></a> Costruttore UnorderedMap:: UnorderedMap

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

*InIt*<br/>
Typename dell'oggetto UnorderedMap corrente.

*P*<br/>
Oggetto funzione che può confrontare due chiavi per determinare se sono uguali. Il valore predefinito di questo parametro è [std: \<K> : equal_to](../standard-library/equal-to-struct.md).

*H*<br/>
Oggetto funzione che produce un valore hash per una chiave. Per impostazione predefinita, questo parametro è la [classe hash 1](../standard-library/hash-class.md) per i tipi di chiave supportati dalla classe.

*m*<br/>
Un riferimento o [lvalue e rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un [std:: unordered_map](../standard-library/unordered-map-class.md) usato per inizializzare il UnorderedMap corrente.

*il*<br/>
[Std:: initializer_list](../standard-library/initializer-list-class.md) degli oggetti [std::p aria](../standard-library/pair-structure.md) utilizzati per inizializzare la mappa.

*first*<br/>
Iteratore di input del primo elemento in un intervallo di elementi usato per inizializzare l'oggetto UnorderedMap corrente.

*last*<br/>
Iteratore di input del primo elemento dopo un intervallo di elementi usato per inizializzare l'oggetto UnorderedMap corrente.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)<br/>
[Spazio dei nomi Platform:: Collections](../cppcx/platform-collections-namespace.md)<br/>
[Classe Platform:: Collections:: Map](../cppcx/platform-collections-map-class.md)<br/>
[Classe Platform:: Collections:: UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md)<br/>
[raccolte](../cppcx/collections-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
