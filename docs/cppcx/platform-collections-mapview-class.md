---
title: Classe Platform::Collections::MapView
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::MapView::MapView
- COLLECTION/Platform::Collections::MapView::First
- COLLECTION/Platform::Collections::MapView::HasKey
- COLLECTION/Platform::Collections::MapView::Lookup
- COLLECTION/Platform::Collections::MapView::Size
- COLLECTION/Platform::Collections::MapView::Split
helpviewer_keywords:
- MapView Class
ms.assetid: 9577dde7-f599-43c6-b1e4-7d653706fd62
ms.openlocfilehash: 24995f553c5fcb8626c0d51758577b948c9c67ad
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81354433"
---
# <a name="platformcollectionsmapview-class"></a>Classe Platform::Collections::MapView

Rappresenta una visualizzazione di sola lettura in una *mappa*, che rappresenta una raccolta di coppie chiave-valore.

## <a name="syntax"></a>Sintassi

```
template <
   typename K,
   typename V,
   typename C = ::std::less<K>>
ref class MapView sealed;
```

#### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di chiave nella coppia chiave-valore.

*V*<br/>
Tipo di valore nella coppia chiave-valore.

*C*<br/>
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo in MapView. Per impostazione predefinita, [\<std::less K>](../standard-library/less-struct.md).

### <a name="remarks"></a>Osservazioni

MapView è un'implementazione concreta di C, di [Windows::Foundation::Collections::IMapView \<K,V>'interfaccia](/uwp/api/Windows.Foundation.Collections.IMapView_K_V_) che viene passata attraverso l'interfaccia binaria dell'applicazione (ABI). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[MapView::MapView](#ctor)|Inizializza una nuova istanza della classe MapView.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[MapView::Primo](#first)|Restituisce un iteratore che viene inizializzato al primo elemento nella visualizzazione della mappa.|
|[MapView::HasKey](#haskey)|Determina se l'oggetto MapView corrente contiene la chiave specificata.|
|[MapView::Ricerca](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto MapView corrente.|
|[MapView::Size](#size)|Restituisce il numero di elementi nell'oggetto MapView corrente.|
|[MapView::Dividi](#split)|Divide un oggetto MapView originale in due oggetti MapView.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`MapView`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="mapviewfirst-method"></a><a name="first"></a>Metodo MapView::First

Restituisce un iteratore che specifica il primo elemento nella visualizzazione della mappa.

### <a name="syntax"></a>Sintassi

```
virtual Windows::Foundation::Collections::IIterator<
   Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella visualizzazione della mappa.

### <a name="remarks"></a>Osservazioni

Un modo pratico per contenere l'iteratore restituito da First() consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave **auto** type deduction. Ad esempio: `auto x = myMapView->First();`.

## <a name="mapviewhaskey-method"></a><a name="haskey"></a>Metodo MapView::HasKeyMapView::HasKey Method

Determina se l'oggetto MapView corrente contiene la chiave specificata.

### <a name="syntax"></a>Sintassi

```

bool HasKey(K key);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Chiave usata per individuare l'elemento MapView. Il tipo di *chiave* è typename *K*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave viene trovata; in caso contrario, **false**.

## <a name="mapviewlookup-method"></a><a name="lookup"></a>Metodo MapView::LookupMapView::Lookup Method

Recupera il valore di tipo V associato alla chiave specificata di tipo K.

### <a name="syntax"></a>Sintassi

```
V Lookup(K key);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Chiave utilizzata per individuare un elemento in MapView. Il tipo `key` di è typename *K*.

### <a name="return-value"></a>Valore restituito

Valore abbinato a `key`. Il tipo del valore restituito è typename *V*.

## <a name="mapviewmapview-constructor"></a><a name="ctor"></a>Costruttore MapView::MapViewMapView::MapView Constructor

Inizializza una nuova istanza della classe MapView.

### <a name="syntax"></a>Sintassi

```cpp
explicit MapView(const C& comp = C());

explicit MapView(const ::std::map<K, V, C>& m);

explicit MapView(std::map<K, V, C>&& m);

template <typename InIt> MapView(
    InIt first,
    InIt last,
    const C& comp = C());

MapView(
    ::std::initializer_list<std::pair<const K, V>> il,
    const C& comp = C());
```

### <a name="parameters"></a>Parametri

*Init*<br/>
Typename dell'oggetto MapView corrente.

*Comp*<br/>
Oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo in MapView.

*M*<br/>
Un riferimento o [Lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md) a un `map Class` che viene utilizzato per inizializzare il MapView corrente.

*Prima*<br/>
Iteratore di input del primo elemento in un intervallo di elementi utilizzato per inizializzare l'oggetto MapView corrente.

*Ultima*<br/>
Iteratore di input del primo elemento dopo un intervallo di elementi utilizzato per inizializzare l'oggetto MapView corrente.

*il il*<br/>
Un [<std::initializer_list<\<std::pair K,V>>](../standard-library/initializer-list-class.md) i cui elementi verranno inseriti nel MapView.

## <a name="mapviewsize-method"></a><a name="size"></a>Metodo MapView::SizeMapView::Size

Restituisce il numero di elementi nell'oggetto MapView corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto MapView corrente.

## <a name="mapviewsplit-method"></a><a name="split"></a>Metodo MapView::SplitMapView::Split Method

Divide l'oggetto MapView corrente in due oggetti MapView. Questo metodo non è operativo.

### <a name="syntax"></a>Sintassi

```
void Split(
   Windows::Foundation::Collections::IMapView<
                         K, V>^ * firstPartition,
   Windows::Foundation::Collections::IMapView<
                         K, V>^ * secondPartition);
```

### <a name="parameters"></a>Parametri

*firstPartition (partizione in primo luogo*<br/>
Prima parte dell'oggetto MapView originale.

*secondPartition (Partizione di secondo)*<br/>
Seconda parte dell'oggetto MapView originale.

### <a name="remarks"></a>Osservazioni

Questo metodo non è operativo; non esegue alcuna operazione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi della piattaforma](platform-namespace-c-cx.md)
