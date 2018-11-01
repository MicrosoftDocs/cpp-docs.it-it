---
title: Classe Platform::Collections::Map
ms.date: 01/18/2018
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
ms.openlocfilehash: c6edd8cdd089e24011df41db09f3c1bb5d6465f9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481458"
---
# <a name="platformcollectionsmap-class"></a>Classe Platform::Collections::Map

Rappresenta una *mappa*, che è una raccolta di coppie chiave-valore.

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
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa. Per impostazione predefinita [std:: less\<K >](../standard-library/less-struct.md).

*__is_valid_winrt_type()* una funzione generato dal compilatore che convalida il tipo di *K* e *V* e fornisce un messaggio di errore descrittivo se il tipo non può essere archiviato nella mappa.

### <a name="remarks"></a>Note

I tipi consentiti sono:

- Integer

- classe di interfaccia ^

- classe di riferimento pubblica^

- value struct

- classe enum pubblica

La mappa è fondamentalmente un wrapper per [std::map](../standard-library/map-class.md). È un'implementazione concreta di C++ del [Windows::Foundation::Collections::IMap < Windows::Foundation::Collections::IKeyValuePair\<K, V >>](/uwp/api/Windows.Foundation.Collections.IMap_K_V_) e [IObservableMap](/uwp/api/Windows.Foundation.Collections.IObservableMap_K_V_) i tipi che vengono passati attraverso le interfacce Windows Runtime. Se tenti di usare un tipo `Platform::Collections::Map` in un parametro o valore restituito pubblico, viene generato l'errore del compilatore C3986. Puoi correggere l'errore modificando il tipo di valore restituito o parametro in [Windows::Foundation::Collections::IMap\<K, V >](/uwp/api/Windows.Foundation.Collections.IMap_K_V_).

Per altre informazioni, vedere [raccolte](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

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
|[Map:: Size](#size)|Restituisce il numero di elementi nell'oggetto Map corrente.|

### <a name="events"></a>Eventi

|||
|-|-|
|nome|Descrizione|
|[Map:: mapchanged](#mapchanged-event.md) `event`|Si verifica quando l'oggetto Map subisce delle modifiche.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Map`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="clear"></a>  Metodo Map:: Clear

Rimuove tutte le coppie chiave-valore dall'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Clear();
```

## <a name="first"></a>  Metodo Map:: First

Restituisce un iteratore che specifica il primo elemento nella mappa o `nullptr` se la mappa è vuota.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator<
Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella mappa.

### <a name="remarks"></a>Note

Un modo pratico per contenere l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **automatica** digita parola chiave di deduzione dei tipi. Ad esempio `auto x = myMap->First();`.

## <a name="getview"></a>  Metodo Map:: GetView

Restituisce una visualizzazione di sola lettura dell'oggetto Map corrente, vale a dire, un [Mapview](../cppcx/platform-collections-mapview-class.md), che implementa il [Windows::Foundation::Collections::IMapView\<K, V >] / uwp/api/Windows.Foundation.Collections.IMapView_K_V_) dell'interfaccia.

### <a name="syntax"></a>Sintassi

```cpp
Windows::Foundation::Collections::IMapView<K, V>^ GetView();
```

### <a name="return-value"></a>Valore restituito

Oggetto `MapView`.

## <a name="haskey"></a>  Metodo Map:: haskey

Determina se l'oggetto Map corrente contiene la chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool HasKey(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare l'elemento Map. Il tipo della *key* è typename *K*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave venga trovata; in caso contrario, **false**.

## <a name="insert"></a>  Metodo Map:: Insert

Aggiunge la coppia chiave-valore all'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool Insert(K key, V value);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave della coppia chiave-valore. Il tipo della *key* è typename *K*.

*valore*<br/>
Valore della coppia chiave-valore. Il tipo della *valore* è typename *V*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave di un elemento esistente nell'oggetto Map corrente corrisponde al *chiave* e la parte valore di tale elemento è impostata su *valore*. **false** se nessun elemento esistente nell'oggetto Map corrente corrisponde *chiave* e il *chiave* e *valore* parametri vengono trasformati in una coppia chiave-valore e successivamente aggiunti per il oggetto Map corrente.

## <a name="lookup"></a>  Metodo Map:: lookup

Recupera il valore di tipo V associato alla chiave specificata di tipo K, se la chiave esiste.

### <a name="syntax"></a>Sintassi

```cpp
V Lookup(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave utilizzata per individuare un elemento in Map. Il tipo della *key* è typename *K*.

### <a name="return-value"></a>Valore restituito

Il valore che è associato il *chiave*. Il tipo del valore restituito è typename *V*.

### <a name="remarks"></a>Note

Se la chiave non esiste, un' [platform:: outofboundsexception](../cppcx/platform-outofboundsexception-class.md) viene generata un'eccezione.

## <a name="ctor"></a>  Costruttore Map:: Map

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
Un riferimento oppure [Lvalues e Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un `map Class` che viene usato per inizializzare l'oggetto Map corrente.

*first*<br/>
Iteratore di input del primo elemento in un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.

*last*<br/>
Iteratore di input del primo elemento dopo un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.

## <a name="mapchanged"></a>  Evento Map:: mapchanged

Generato quando un elemento viene inserito o rimosso dalla mappa.

### <a name="syntax"></a>Sintassi

```cpp
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;
```

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Oggetto [MapChangedEventHandler\<K, V >](/uwp/api/windows.foundation.collections.mapchangedeventhandler) che contiene informazioni sull'oggetto che ha generato l'evento e il tipo di modifica che si sono verificati. Vedere anche [IMapChangedEventArgs\<K >](https://msdn.microsoft.com/library/windows/apps/br226034.aspx) e [CollectionChange Enumeration](https://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.collectionchange.aspx).

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

Le app di Windows Runtime che usano c# o Visual Basic il progetto IMap\<K, V > come IDictionary\<K, V >.

## <a name="remove"></a>  Metodo Map:: Remove

Elimina la coppia chiave-valore specificata dall'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Remove(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave della coppia chiave-valore. Il tipo della *key* è typename *K*.

## <a name="size"></a>  Metodo Map:: Size

Restituisce il numero di [Windows::Foundation::Collections::IKeyValuePair\<K, V >](https://msdn.microsoft.com/library/windows/apps/br226031.aspx) gli elementi della mappa.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi in Map.

## <a name="see-also"></a>Vedere anche

[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
