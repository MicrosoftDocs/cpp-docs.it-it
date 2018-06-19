---
title: Classe platform::Collections::Map | Documenti Microsoft
ms.custom: ''
ms.date: 01/18/2018
ms.technology: cpp-windows
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
dev_langs:
- C++
helpviewer_keywords:
- Map Class (C++/Cx)
ms.assetid: 2b8cf968-1167-4898-a149-1195b32c1785
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6580ccb9ca19a575bac6a9fedbb4e8f16c7060ba
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093181"
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

*K*  
 Tipo di chiave nella coppia chiave-valore.

*V*  
Tipo di valore nella coppia chiave-valore.

*C*  
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa. Per impostazione predefinita, [std:: less\<K >](../standard-library/less-struct.md).

*__is_valid_winrt_type()*  
Una funzione generata dal compilatore che convalida il tipo di *K* e *V* e fornisce un messaggio di errore descrittivo se il tipo non può essere archiviato nella mappa.

### <a name="remarks"></a>Note

I tipi consentiti sono:

- Integer

- classe di interfaccia ^

- classe di riferimento pubblica^

- value struct

- classe enum pubblica

La mappa è fondamentalmente un wrapper per [std::map](../standard-library/map-class.md). È un'implementazione concreta di C++ del [Windows::Foundation::Collections::IMap < Windows::Foundation::Collections::IKeyValuePair\<K, V >>](http://go.microsoft.com/fwlink/p/?LinkId=262408) e [IObservableMap](http://msdn.microsoft.com/library/windows/apps/br226050.aspx) i tipi che vengono passati attraverso le interfacce di Windows Runtime. Se tenti di usare un tipo `Platform::Collections::Map` in un parametro o valore restituito pubblico, viene generato l'errore del compilatore C3986. È possibile correggere l'errore modificando il tipo di valore restituito o parametro in [Windows::Foundation::Collections::IMap\<K, V >](http://go.microsoft.com/fwlink/p/?LinkId=262408).

Per ulteriori informazioni, vedere [raccolte](../cppcx/collections-c-cx.md).

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

Un modo pratico per contenere l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **auto** parola chiave di deduzione del tipo. Ad esempio `auto x = myMap->First();`.

## <a name="getview"></a>  Metodo Map:: GetView

Restituisce una visualizzazione di sola lettura della mappa corrente. vale a dire un [Mapview](../cppcx/platform-collections-mapview-class.md), che implementa il [Windows::Foundation::Collections::IMapView\<K, V >](http://msdn.microsoft.com/library/windows/apps/br226037.aspx) interfaccia.

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

*key*  
Chiave usata per individuare l'elemento Map. Il tipo di *chiave* è typename *K*.

### <a name="return-value"></a>Valore restituito

`true` se la chiave viene trovata; in caso contrario, `false`.

## <a name="insert"></a>  Metodo Map:: Insert

Aggiunge la coppia chiave-valore all'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool Insert(K key, V value);
```

### <a name="parameters"></a>Parametri

*key*  
Chiave della coppia chiave-valore. Il tipo di *chiave* è typename *K*.

*valore*  
Valore della coppia chiave-valore. Il tipo di *valore* è typename *V*.

### <a name="return-value"></a>Valore restituito

`true` Se la chiave di un elemento esistente nell'oggetto Map corrente corrisponde *chiave* e parte del valore di tale elemento è impostata su *valore*. `false` Se nessun elemento esistente nell'oggetto Map corrente corrisponde *chiave* e *chiave* e *valore* i parametri vengono applicati a una coppia chiave-valore e successivamente aggiunti all'oggetto Map corrente.

## <a name="lookup"></a>  Metodo Map:: lookup

Recupera il valore di tipo V associato alla chiave specificata di tipo K, se la chiave esiste.

### <a name="syntax"></a>Sintassi

```cpp
V Lookup(K key);
```

### <a name="parameters"></a>Parametri

*key*  
Chiave utilizzata per individuare un elemento in Map. Il tipo di *chiave* è typename *K*.

### <a name="return-value"></a>Valore restituito

Il valore che è associato il *chiave*. Il tipo del valore restituito è typename *V*.

### <a name="remarks"></a>Note

Se la chiave non esiste, quindi un [platform:: outofboundsexception](../cppcx/platform-outofboundsexception-class.md) viene generata un'eccezione.

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

*InIt*  
Typename dell'oggetto Map corrente.

*comp*  
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo nella mappa.

*m*  
Un riferimento o [elementi lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md) per un `map Class` che viene utilizzato per inizializzare l'oggetto Map corrente.

*first*  
Iteratore di input del primo elemento in un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.

*last*  
Iteratore di input del primo elemento dopo un intervallo di elementi utilizzato per inizializzare l'oggetto Map corrente.

## <a name="mapchanged"></a>  Evento Map:: mapchanged

Generato quando un elemento viene inserito o rimosso dalla mappa.

### <a name="syntax"></a>Sintassi

```cpp
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;
```

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Oggetto [MapChangedEventHandler\<K, V >](http://msdn.microsoft.com/library/windows/apps/br206644.aspx) che contiene informazioni sull'oggetto che ha generato l'evento e il tipo di modifica che si sono verificati. Vedere anche [IMapChangedEventArgs\<K >](http://msdn.microsoft.com/library/windows/apps/br226034.aspx) e [CollectionChange Enumeration](http://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.collectionchange.aspx).

## <a name="net-framework-equivalent"></a>Equivalente .NET Framework

App di Windows Runtime che utilizzano c# o Visual Basic il progetto IMap\<K, V > come IDictionary\<K, V >.

## <a name="remove"></a>  Metodo Map:: Remove

Elimina la coppia chiave-valore specificata dall'oggetto Map corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Remove(K key);
```

### <a name="parameters"></a>Parametri

*key*  
Chiave della coppia chiave-valore. Il tipo di *chiave* è typename *K*.

## <a name="size"></a>  Metodo Map:: Size

Restituisce il numero di [Windows::Foundation::Collections::IKeyValuePair\<K, V >](http://msdn.microsoft.com/library/windows/apps/br226031.aspx) elementi nella mappa.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi in Map.

## <a name="see-also"></a>Vedere anche

[Piattaforma Namespace](platform-namespace-c-cx.md)  
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)  
