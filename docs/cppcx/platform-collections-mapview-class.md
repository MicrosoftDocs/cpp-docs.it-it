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
ms.openlocfilehash: 6c50825cb3003c2b1b63a25419ca67742c92b52f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214997"
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
Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo in MapView. Per impostazione predefinita, [std:: \<K> less](../standard-library/less-struct.md).

### <a name="remarks"></a>Osservazioni

MapView è un'implementazione concreta di C++ dell'interfaccia [Windows:: Foundation:: Collections \<K,V> :: IMapView](/uwp/api/windows.foundation.collections.imapview-2) passata attraverso l'interfaccia ABI (Application Binary Interface). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[MapView:: MapView](#ctor)|Inizializza una nuova istanza della classe MapView.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[MapView:: First](#first)|Restituisce un iteratore che viene inizializzato al primo elemento nella visualizzazione della mappa.|
|[MapView:: HasKey](#haskey)|Determina se l'oggetto MapView corrente contiene la chiave specificata.|
|[MapView:: Lookup](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto MapView corrente.|
|[MapView::Size](#size)|Restituisce il numero di elementi nell'oggetto MapView corrente.|
|[MapView:: Split](#split)|Divide un oggetto MapView originale in due oggetti MapView.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`MapView`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="mapviewfirst-method"></a><a name="first"></a>Metodo MapView:: First

Restituisce un iteratore che specifica il primo elemento nella visualizzazione della mappa.

### <a name="syntax"></a>Sintassi

```
virtual Windows::Foundation::Collections::IIterator<
   Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella visualizzazione della mappa.

### <a name="remarks"></a>Osservazioni

Un modo pratico per conservare l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **`auto`** parola chiave di deduzione del tipo. Ad esempio: `auto x = myMapView->First();`.

## <a name="mapviewhaskey-method"></a><a name="haskey"></a>Metodo MapView:: HasKey

Determina se l'oggetto MapView corrente contiene la chiave specificata.

### <a name="syntax"></a>Sintassi

```

bool HasKey(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare l'elemento MapView. Il tipo di *chiave* è TypeName *K*.

### <a name="return-value"></a>Valore restituito

**`true`** Se la chiave viene trovata; in caso contrario, **`false`** .

## <a name="mapviewlookup-method"></a><a name="lookup"></a>Metodo MapView:: Lookup

Recupera il valore di tipo V associato alla chiave specificata di tipo K.

### <a name="syntax"></a>Sintassi

```
V Lookup(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave utilizzata per individuare un elemento in MapView. Il tipo di `key` è TypeName *K*.

### <a name="return-value"></a>Valore restituito

Valore abbinato a `key`. Il tipo del valore restituito è TypeName *V*.

## <a name="mapviewmapview-constructor"></a><a name="ctor"></a>Costruttore MapView:: MapView

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

*InIt*<br/>
Typename dell'oggetto MapView corrente.

*comp*<br/>
Oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo in MapView.

*m*<br/>
Riferimento o [lvalue e rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un oggetto `map Class` utilizzato per inizializzare il MapView corrente.

*first*<br/>
Iteratore di input del primo elemento in un intervallo di elementi utilizzato per inizializzare l'oggetto MapView corrente.

*last*<br/>
Iteratore di input del primo elemento dopo un intervallo di elementi utilizzato per inizializzare l'oggetto MapView corrente.

*il*<br/>
[Std:: initializer_list<STD \<K,V> > ::p Air](../standard-library/initializer-list-class.md) i cui elementi verranno inseriti in MapView.

## <a name="mapviewsize-method"></a><a name="size"></a>Metodo MapView:: size

Restituisce il numero di elementi nell'oggetto MapView corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto MapView corrente.

## <a name="mapviewsplit-method"></a><a name="split"></a>Metodo MapView:: Split

Divide l'oggetto MapView corrente in due oggetti MapView. Questo metodo non è operativo.

### <a name="syntax"></a>Sintassi

```cpp
void Split(
   Windows::Foundation::Collections::IMapView<
                         K, V>^ * firstPartition,
   Windows::Foundation::Collections::IMapView<
                         K, V>^ * secondPartition);
```

### <a name="parameters"></a>Parametri

*firstPartition*<br/>
Prima parte dell'oggetto MapView originale.

*secondPartition*<br/>
Seconda parte dell'oggetto MapView originale.

### <a name="remarks"></a>Osservazioni

Questo metodo non è operativo; non esegue alcuna operazione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)
