---
title: Classe Platform::Collections::UnorderedMap
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- collection/Platform::Collections::UnorderedMap
ms.assetid: dc84f261-b13c-4c0a-9b57-30dcb9e3065e
ms.openlocfilehash: d3e6069f4bf7b0c23d5db5844821524ee80589da
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648331"
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
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa. Per impostazione predefinita [std:: equal_to\<K >](../standard-library/equal-to-struct.md).

### <a name="remarks"></a>Note

I tipi consentiti sono:

- Integer

- classe di interfaccia ^

- classe di riferimento pubblica^

- value struct

- classe enum pubblica

**UnorderedMap** è fondamentalmente un wrapper per [std:: unordered_map](../standard-library/unordered-map-class.md) che supporta l'archiviazione dei tipi Windows Runtime. È di un'implementazione concreta del [Windows::Foundation::Collections::IMap](/uwp/api/Windows.Foundation.Collections.IMap_K_V_) e [IObservableMap](/uwp/api/Windows.Foundation.Collections.IObservableMap_K_V_) tipi che vengono passati attraverso interfacce di Windows Runtime. Se tenti di usare un tipo `Platform::Collections::UnorderedMap` in un parametro o valore restituito pubblico, viene generato l'errore del compilatore C3986. Per correggere l'errore, modificare il tipo di parametro o di valore restituito in [Windows::Foundation::Collections::IMap](/uwp/api/Windows.Foundation.Collections.IMap_K_V_).

Per altre informazioni, vedere [raccolte](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Unorderedmap:: Unorderedmap](#ctor)|Inizializza una nuova istanza della classe Map.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Unorderedmap:: Clear](#clear)|Rimuove tutte le coppie chiave-valore dall'oggetto Map corrente.|
|[Unorderedmap:: First](#first)|Restituisce un iteratore che specifica il primo elemento nella mappa.|
|[Unorderedmap:: GetView](#getview)|Restituisce una visualizzazione in sola lettura dell'elemento Map corrente, ovvero una classe Platform::Collections::UnorderedMapView.|
|[Unorderedmap:: Haskey](#haskey)|Determina se l'oggetto Map corrente contiene la chiave specificata.|
|[Unorderedmap:: Insert](#insert)|Aggiunge la coppia chiave-valore all'oggetto Map corrente.|
|[Unorderedmap:: lookup](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto Map corrente.|
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

Restituisce un iteratore che specifica il primo [Windows::Foundation::Collections::IKeyValuePair\<K, V >](https://msdn.microsoft.com/library/windows/apps/br226031.aspx) elemento della mappa non ordinata.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator<
   Windows::Foundation::Collections::IKeyValuePair<K, V>^>^
   First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella mappa.

### <a name="remarks"></a>Note

Un modo pratico per contenere l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **automatica** digita parola chiave di deduzione dei tipi. Ad esempio `auto x = myUnorderedMap->First();`.

## <a name="getview"></a>  Metodo unorderedmap:: GetView

Restituisce una visualizzazione di sola lettura dell'elemento UnorderedMap corrente; vale a dire, un' [classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md) che implementa il [interfaccia Windows::Foundation::Collections::IMapView::IMapView]/uwp/api/Windows.Foundation.Collections.IMapView_K_V_).

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

*key*<br/>
Chiave usata per individuare l'elemento UnorderedMap. Il tipo della *key* è typename *K*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave venga trovata; in caso contrario, **false**.

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

*key*<br/>
Chiave della coppia chiave-valore. Il tipo della *key* è typename *K*.

*valore*<br/>
Valore della coppia chiave-valore. Il tipo della *valore* è typename *V*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave di un elemento esistente nell'oggetto Map corrente corrisponde al *chiave* e la parte valore di tale elemento è impostata su *valore*. **false** se nessun elemento esistente nell'oggetto Map corrente corrisponde *chiave* e il *chiave* e *valore* parametri vengono trasformati in una coppia chiave-valore e successivamente aggiunti per il oggetto UnorderedMap corrente.

## <a name="lookup"></a>  Metodo unorderedmap:: lookup

Recupera il valore di tipo V associato alla chiave specificata di tipo K.

### <a name="syntax"></a>Sintassi

```cpp
V Lookup(
   K key
);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare un elemento in UnorderedMap. Il tipo della *key* è typename *K*.

### <a name="return-value"></a>Valore restituito

Il valore che è associato il *chiave*. Il tipo del valore restituito è typename *V*.

## <a name="mapchanged"></a>  UnorderedMap::MapChanged

Generato quando un elemento viene inserito o rimosso dalla mappa.

### <a name="syntax"></a>Sintassi

```cpp
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;
```

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Oggetto [MapChangedEventHandler\<K, V >](/uwp/api/windows.foundation.collections.mapchangedeventhandler) che contiene informazioni sull'oggetto che ha generato l'evento e il tipo di modifica che si sono verificati. Vedere anche [IMapChangedEventArgs\<K >](https://msdn.microsoft.com/library/windows/apps/br226034.aspx) e [CollectionChange Enumeration](https://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.collectionchange.aspx).

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

Le app di Windows Runtime che usano c# o Visual Basic il progetto IMap\<K, V > come IDictionary\<K, V >.

## <a name="remove"></a>  Metodo unorderedmap:: Remove

Elimina la coppia chiave-valore specificata dall'oggetto UnorderedMap corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Remove(
   K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave della coppia chiave-valore. Il tipo della *key* è typename *K*.

## <a name="size"></a>  Metodo unorderedmap:: Size

Restituisce il numero di [Windows::Foundation::Collections::IKeyValuePair\<K, V >](https://msdn.microsoft.com/library/windows/apps/br226031.aspx) elementi in UnorderedMap.

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

*InIt*<br/>
Typename dell'oggetto UnorderedMap corrente.

*P*<br/>
Oggetto funzione che può confrontare due chiavi per determinare se sono uguali. Questo parametro viene impostato su [std:: equal_to\<K >](../standard-library/equal-to-struct.md).

*H*<br/>
Oggetto funzione che produce un valore hash per una chiave. Questo parametro viene impostato su [hash classe 1](../standard-library/hash-class.md) per i tipi di chiave che supporta la classe.

*m*<br/>
Un riferimento oppure [Lvalues e Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un [std:: unordered_map](../standard-library/unordered-map-class.md) che viene usato per inizializzare l'oggetto UnorderedMap corrente.

*il*<br/>
Oggetto [std:: initializer_list](../standard-library/initializer-list-class.md) dei [std:: Pair](../standard-library/pair-structure.md) gli oggetti che consente di inizializzare la mappa.

*first*<br/>
Iteratore di input del primo elemento in un intervallo di elementi usato per inizializzare l'oggetto UnorderedMap corrente.

*last*<br/>
Iteratore di input del primo elemento dopo un intervallo di elementi usato per inizializzare l'oggetto UnorderedMap corrente.

## <a name="see-also"></a>Vedere anche

[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Spazio dei nomi Platform::Collections](../cppcx/platform-collections-namespace.md)<br/>
[Platform::Collections::Map](../cppcx/platform-collections-map-class.md)<br/>
[Classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md)<br/>
[Raccolte](../cppcx/collections-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
