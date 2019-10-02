---
title: Classe Platform::Collections::Map
ms.date: 10/01/2019
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::Map::Map
- COLLECTION/Platform::Collections::Map::Clear
- COLLECTION/Platform::Collections::Map::First
- COLLECTION/Platform::Collections::Map::GetView
- COLLECTION/Platform::Collections::Map::HasKey
- COLLECTION/Platform::Collections::Map::Insert
- COLLECTION/Platform::Collections::Map::Lookup
- COLLECTION/Platform::Collections::Map::Remove
- COLLECTION/Platform::Collections::Map::Size
helpviewer_keywords:
- Map Class (C++/Cx)
ms.assetid: 2b8cf968-1167-4898-a149-1195b32c1785
ms.openlocfilehash: 81721d719a424250beed89f4a5656b3f2fc27922
ms.sourcegitcommit: 4517932a67bbf2db16cfb122d3bef57a43696242
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/02/2019
ms.locfileid: "71816303"
---
# <a name="platformcollectionsmap-class"></a>Classe Platform::Collections::Map

Rappresenta una *mappa*, che è una raccolta di coppie chiave-valore. Implementa [Windows:: Foundation:: Collections:: IObservableMap](/uwp/api/windows.foundation.collections.iobservablemap_k_v_) per semplificare la [Data Binding](/windows/uwp/data-binding/data-binding-in-depth)XAML.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename K,
   typename V,
   typename C = std::less<K>>
ref class Map sealed;
```

### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di chiave nella coppia chiave-valore.

*V*<br/>
Tipo di valore nella coppia chiave-valore.

*C*<br/>
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa. Per impostazione predefinita, [std:: less @ no__t-1k >](../standard-library/less-struct.md).

*__is_valid_winrt_type ()* Funzione generata dal compilatore che convalida il tipo di *K* e *V* e fornisce un messaggio di errore descrittivo se il tipo non può essere archiviato nella mappa.

### <a name="remarks"></a>Note

I tipi consentiti sono:

- Integer

- classe di interfaccia ^

- classe di riferimento pubblica^

- value struct

- classe enum pubblica

La mappa è fondamentalmente un wrapper per [std::map](../standard-library/map-class.md). Si tratta di C++ un'implementazione concreta dei tipi [Windows:: Foundation:: Collections:: IMAP < Windows:: Foundation:: Collections:: IKeyValuePair @ no__t-2k, V > >](/uwp/api/Windows.Foundation.Collections.IMap_K_V_) e [IObservableMap](/uwp/api/Windows.Foundation.Collections.IObservableMap_K_V_) passati tra le finestre pubbliche Interfacce di Runtime. Se tenti di usare un tipo `Platform::Collections::Map` in un parametro o valore restituito pubblico, viene generato l'errore del compilatore C3986. È possibile correggere l'errore modificando il tipo del parametro o del valore restituito in [Windows:: Foundation:: Collections:: IMAP @ no__t-1K, V >](/uwp/api/Windows.Foundation.Collections.IMap_K_V_).

Per ulteriori informazioni, vedere [raccolte](../cppcx/collections-c-cx.md).

### <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Map:: Map](#ctor)|Inizializza una nuova istanza della classe Map.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Map:: Clear](#clear)|Rimuove tutte le coppie chiave-valore dall'oggetto Map corrente.|
|[Map::First](#first)|Restituisce un iteratore che specifica il primo elemento nella mappa.|
|[Map:: GetView](#getview)|Restituisce una visualizzazione di sola lettura dell'oggetto Map corrente, ovvero [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md).|
|[Map::HasKey](#haskey)|Determina se l'oggetto Map corrente contiene la chiave specificata.|
|[Map:: Insert](#insert)|Aggiunge la coppia chiave-valore all'oggetto Map corrente.|
|[Map::Lookup](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto Map corrente.|
|[Map:: Remove](#remove)|Elimina la coppia chiave-valore specificata dall'oggetto Map corrente.|
|[Map:: size](#size)|Restituisce il numero di elementi nell'oggetto Map corrente.|

### <a name="events"></a>Events

|||
|-|-|
|nome|Descrizione|
|Evento [Map:: mapchanged](#mapchanged)|Si verifica quando l'oggetto Map subisce delle modifiche.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Map`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="clear"></a>Metodo Map:: Clear

Rimuove tutte le coppie chiave-valore dall'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Clear();
```

## <a name="first"></a>Metodo Map:: First

Restituisce un iteratore che specifica il primo elemento nella mappa o `nullptr` se la mappa è vuota.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator<
Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella mappa.

### <a name="remarks"></a>Note

Un modo pratico per conservare l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave di deduzione del tipo **auto** . Ad esempio `auto x = myMap->First();`.

## <a name="getview"></a>Metodo Map:: GetView

Restituisce una visualizzazione di sola lettura dell'oggetto Map corrente. ovvero una [Classe Platform:: Collections:: MapView](../cppcx/platform-collections-mapview-class.md), che implementa l'interfaccia [Windows:: Foundation:: Collections:: IMapView @ No__t-1K, V >]/UWP/API/Windows.Foundation.Collections.IMapView_K_V_).

### <a name="syntax"></a>Sintassi

```cpp
Windows::Foundation::Collections::IMapView<K, V>^ GetView();
```

### <a name="return-value"></a>Valore restituito

Oggetto `MapView`.

## <a name="haskey"></a>Metodo Map:: HasKey

Determina se l'oggetto Map corrente contiene la chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool HasKey(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare l'elemento Map. Il tipo di *chiave* è TypeName *K*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave viene trovata; in caso contrario, **false**.

## <a name="insert"></a>Metodo Map:: Insert

Aggiunge la coppia chiave-valore all'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool Insert(K key, V value);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave della coppia chiave-valore. Il tipo di *chiave* è TypeName *K*.

*value*<br/>
Valore della coppia chiave-valore. Il tipo di *valore* è TypeName *V*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave di un elemento esistente nell'oggetto Map corrente corrisponde alla *chiave* e la parte relativa al valore dell'elemento è impostata su *value*. **false** se nessun elemento esistente nell'oggetto Map corrente corrisponde alla *chiave* e i parametri *Key* e *value* vengono eseguiti in una coppia chiave-valore e quindi aggiunti alla mappa corrente.

## <a name="lookup"></a>Metodo Map:: Lookup

Recupera il valore di tipo V associato alla chiave specificata di tipo K, se la chiave esiste.

### <a name="syntax"></a>Sintassi

```cpp
V Lookup(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave utilizzata per individuare un elemento in Map. Il tipo di *chiave* è TypeName *K*.

### <a name="return-value"></a>Valore restituito

Valore abbinato alla *chiave*. Il tipo del valore restituito è TypeName *V*.

### <a name="remarks"></a>Note

Se la chiave non esiste, viene generata un'eccezione [Platform:: OutOfBoundsException](../cppcx/platform-outofboundsexception-class.md) .

## <a name="ctor"></a>Costruttore Map:: Map

Inizializza una nuova istanza della classe Map.

### <a name="syntax"></a>Sintassi

```cpp
explicit Map(const C& comp = C());
explicit Map(const StdMap& m);
explicit Map(StdMap&& m ;
template <typename InIt>
Map(
   InItfirst,
   InItlast,
   const C& comp = C());
```

### <a name="parameters"></a>Parametri

*InIt*<br/>
Typename dell'oggetto Map corrente.

*comp*<br/>
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa.

*m*<br/>
Riferimento o [rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md) a un `map Class` utilizzato per inizializzare la mappa corrente.

*first*<br/>
Iteratore di input del primo elemento in un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.

*last*<br/>
Iteratore di input del primo elemento dopo un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.

## <a name="mapchanged"></a>Evento map:: MapChanged

Generato quando un elemento viene inserito o rimosso dalla mappa.

### <a name="syntax"></a>Sintassi

```cpp
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;
```

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Un [mapChangedEventHandler @ no__t-1K, V >](/uwp/api/windows.foundation.collections.mapchangedeventhandler) che contiene informazioni sull'oggetto che ha generato l'evento e il tipo di modifica che si è verificato. Vedere anche [IMapChangedEventArgs @ no__t-1k >](/uwp/api/Windows.Foundation.Collections.IMapChangedEventArgs_K_) e [CollectionChange Enumeration](/uwp/api/windows.foundation.collections.collectionchange).

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

Windows Runtime app che usano C# o Visual Basic progetto IMAP @ No__t-1K, v > come IDictionary @ No__t-2K, v >.

## <a name="remove"></a>Metodo Map:: Remove

Elimina la coppia chiave-valore specificata dall'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Remove(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave della coppia chiave-valore. Il tipo di *chiave* è TypeName *K*.

## <a name="size"></a>Metodo Map:: size

Restituisce il numero di elementi [Windows:: Foundation:: Collections:: IKeyValuePair @ no__t-1K, V >](/uwp/api/Windows.Foundation.Collections.IKeyValuePair_K_V_) nella mappa.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi in Map.

## <a name="see-also"></a>Vedere anche

[Raccolte (C++/CX)](collections-c-cx.md)<br/>
[Spazio dei nomi Platform](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
