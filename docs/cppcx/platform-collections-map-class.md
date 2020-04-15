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
ms.openlocfilehash: 7f41a924811be95160b06a2097db6103cde8fc11
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81354439"
---
# <a name="platformcollectionsmap-class"></a>Classe Platform::Collections::Map

Rappresenta una *mappa*, che è una raccolta di coppie chiave-valore. Implementa [Windows::Foundation::Collections::IObservableMap](/uwp/api/windows.foundation.collections.iobservablemap_k_v_) per facilitare [l'associazione dati](/windows/uwp/data-binding/data-binding-in-depth)XAML.

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
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa. Per impostazione predefinita, [\<std::less K>](../standard-library/less-struct.md).

*__is_valid_winrt_type()* Funzione generata dal compilatore che convalida il tipo di *K* e *V* e fornisce un messaggio di errore descrittivo se il tipo non può essere archiviato nella mappa.

### <a name="remarks"></a>Osservazioni

I tipi consentiti sono:

- Integer

- classe di interfaccia

- classe di riferimento pubblica^

- value struct

- classe enum pubblica

La mappa è fondamentalmente un wrapper per [std::map](../standard-library/map-class.md). Si tratta di un'implementazione concreta di [Windows::Foundation::Collections::IMap<Windows::Foundation::Collections::IKeyValuePair\<K,V>>](/uwp/api/Windows.Foundation.Collections.IMap_K_V_) e [IObservableMap](/uwp/api/Windows.Foundation.Collections.IObservableMap_K_V_) tipi che vengono passati attraverso le interfacce pubbliche di Windows Runtime. Se tenti di usare un tipo `Platform::Collections::Map` in un parametro o valore restituito pubblico, viene generato l'errore del compilatore C3986. È possibile correggere l'errore modificando il tipo del parametro o il valore restituito in [Windows::Foundation::Collections::IMap\<K,V>](/uwp/api/Windows.Foundation.Collections.IMap_K_V_).

Per ulteriori informazioni, vedere [Raccolte](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Mappa::Mappa](#ctor)|Inizializza una nuova istanza della classe Map.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Mappa::Cancella](#clear)|Rimuove tutte le coppie chiave-valore dall'oggetto Map corrente.|
|[Mappa::Prima](#first)|Restituisce un iteratore che specifica il primo elemento nella mappa.|
|[Mappa::GetView](#getview)|Restituisce una visualizzazione di sola lettura dell'oggetto Map corrente, ovvero [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md).|
|[Mappa::HasKey](#haskey)|Determina se l'oggetto Map corrente contiene la chiave specificata.|
|[Mappa::Inserisci](#insert)|Aggiunge la coppia chiave-valore all'oggetto Map corrente.|
|[Mappa::Ricerca](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto Map corrente.|
|[Map::Remove](#remove)|Elimina la coppia chiave-valore specificata dall'oggetto Map corrente.|
|[Mappa::Dimensione](#size)|Restituisce il numero di elementi nell'oggetto Map corrente.|

### <a name="events"></a>Eventi

|||
|-|-|
|Nome|Descrizione|
|[Evento Map::MapChanged](#mapchanged)|Si verifica quando l'oggetto Map subisce delle modifiche.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Map`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="mapclear-method"></a><a name="clear"></a>Metodo Map::Clear

Rimuove tutte le coppie chiave-valore dall'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Clear();
```

## <a name="mapfirst-method"></a><a name="first"></a>Metodo Map::First

Restituisce un iteratore che specifica il primo elemento nella mappa o `nullptr` se la mappa è vuota.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator<
Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella mappa.

### <a name="remarks"></a>Osservazioni

Un modo pratico per contenere l'iteratore restituito da First() consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave **auto** type deduction. Ad esempio: `auto x = myMap->First();`.

## <a name="mapgetview-method"></a><a name="getview"></a>Metodo Map::GetView

Restituisce una visualizzazione di sola lettura dell'oggetto Map corrente; ovvero una [classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)che implementa l'interfaccia [Windows::Foundation::Collections::IMapView\<K,V>]/uwp/api/Windows.Foundation.Collections.IMapView_K_V_).

### <a name="syntax"></a>Sintassi

```cpp
Windows::Foundation::Collections::IMapView<K, V>^ GetView();
```

### <a name="return-value"></a>Valore restituito

Oggetto `MapView` .

## <a name="maphaskey-method"></a><a name="haskey"></a>Metodo Map::HasKey

Determina se l'oggetto Map corrente contiene la chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool HasKey(K key);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Chiave usata per individuare l'elemento Map. Il tipo di *chiave* è typename *K*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave viene trovata; in caso contrario, **false**.

## <a name="mapinsert-method"></a><a name="insert"></a>Metodo Map::Insert

Aggiunge la coppia chiave-valore all'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool Insert(K key, V value);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Chiave della coppia chiave-valore. Il tipo di *chiave* è typename *K*.

*Valore*<br/>
Valore della coppia chiave-valore. Il tipo di *valore* è nometipo *V*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave di un elemento esistente nella mappa corrente corrisponde alla *chiave* e la parte del valore di tale elemento è impostata sul *valore*. **false** se nessun elemento esistente nella mappa corrente corrisponde a *key* e i parametri *chiave* e *valore* vengono trasformati in una coppia chiave-valore e quindi aggiunti alla mappa corrente.

## <a name="maplookup-method"></a><a name="lookup"></a>Metodo Map::LookupMap::Lookup Method

Recupera il valore di tipo V associato alla chiave specificata di tipo K, se la chiave esiste.

### <a name="syntax"></a>Sintassi

```cpp
V Lookup(K key);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Chiave utilizzata per individuare un elemento in Map. Il tipo di *chiave* è typename *K*.

### <a name="return-value"></a>Valore restituito

Valore associato alla *chiave*. Il tipo del valore restituito è typename *V*.

### <a name="remarks"></a>Osservazioni

Se la chiave non esiste, viene generata [un'eccezione Platform::OutOfBoundsException.If](../cppcx/platform-outofboundsexception-class.md) the key does not exist, then a Platform::OutOfBoundsException is thrown.

## <a name="mapmap-constructor"></a><a name="ctor"></a>Costruttore Map::Map

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

*Init*<br/>
Typename dell'oggetto Map corrente.

*Comp*<br/>
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa.

*M*<br/>
Un riferimento o [rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md) a un `map Class` che viene utilizzato per inizializzare la mappa corrente.

*Prima*<br/>
Iteratore di input del primo elemento in un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.

*Ultima*<br/>
Iteratore di input del primo elemento dopo un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.

## <a name="mapmapchanged-event"></a><a name="mapchanged"></a>Evento Mappa::MapChanged

Generato quando un elemento viene inserito o rimosso dalla mappa.

### <a name="syntax"></a>Sintassi

```cpp
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;
```

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Oggetto [MapChangedEventHandler\<K,V>](/uwp/api/windows.foundation.collections.mapchangedeventhandler) che contiene informazioni sull'oggetto che ha generato l'evento e il tipo di modifica che si è verificato. Vedere anche [\<IMapChangedEventArgs K>](/uwp/api/Windows.Foundation.Collections.IMapChangedEventArgs_K_) e [CollectionChange Enumeration](/uwp/api/windows.foundation.collections.collectionchange).

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

App di Windows Runtime che usano il\<progetto C'è\<o Visual Basic IMap K,V> come IDictionary K,V>.

## <a name="mapremove-method"></a><a name="remove"></a>Metodo Map::Remove

Elimina la coppia chiave-valore specificata dall'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Remove(K key);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Chiave della coppia chiave-valore. Il tipo di *chiave* è typename *K*.

## <a name="mapsize-method"></a><a name="size"></a>Metodo Map::Size

Restituisce il numero di [elementi Windows::Foundation::Collections::IKeyValuePair\<K,V>](/uwp/api/Windows.Foundation.Collections.IKeyValuePair_K_V_) nella mappa.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi in Map.

## <a name="see-also"></a>Vedere anche

[Raccolte (C](collections-c-cx.md)<br/>
[Spazio dei nomi della piattaforma](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
