---
title: Classe Platform::Collections::UnorderedMapView
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- collection/Platform::Collections::UnorderedMapView
ms.assetid: 545a3725-2efd-4cc1-b590-4a7cd2351f61
ms.openlocfilehash: f0096982ad5d11b9ea394c9f02ba748a52e4216b
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82031485"
---
# <a name="platformcollectionsunorderedmapview-class"></a>Classe Platform::Collections::UnorderedMapView

Rappresenta una visualizzazione di sola lettura in una *mappa*, che rappresenta una raccolta di coppie chiave-valore.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename K,
   typename V,
   typename C = ::std::equal_to<K>>
ref class UnorderedMapView sealed;
```

#### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di chiave nella coppia chiave-valore.

*Presso*<br/>
Tipo di valore nella coppia chiave-valore.

*C*<br/>
Tipo che fornisce un oggetto funzione che può confrontare due valori di chiavi per la loro uguaglianza. Per impostazione predefinita, [\<std::equal_to K>](../standard-library/equal-to-struct.md)

### <a name="remarks"></a>Osservazioni

UnorderedMapView è un'implementazione concreta di C, ovvero un'implementazione di [Windows::Foundation::Collections::IMapView\<K,V>'interfaccia](/uwp/api/windows.foundation.collections.imapview-2) che viene passata attraverso l'interfaccia a binario dell'applicazione (ABI). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[UnorderedMapView::UnorderedMapViewUnorderedMapView::UnorderedMapView](#ctor)|Inizializza una nuova istanza della classe UnorderedMapView.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[UnorderedMapView::First](#first)|Restituisce un iteratore che viene inizializzato al primo elemento nella visualizzazione della mappa.|
|[UnorderedMapView::HasKey](#haskey)|Determina se l'oggetto UnorderedMapView corrente contiene la chiave specificata.|
|[UnorderedMapView::Ricerca](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto UnorderedMapView corrente.|
|[UnorderedMapView::Dimensione](#size)|Restituisce il numero di elementi nell'oggetto UnorderedMapView corrente.|
|[UnorderedMapView::Split](#split)|Divide un oggetto UnorderedMapView originale in due oggetti UnorderedMapView.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`UnorderedMapView`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="unorderedmapviewfirst-method"></a><a name="first"></a>Metodo UnorderedMapView::First

Restituisce un iteratore che specifica il primo elemento [windows::Foundation::Collections::IKeyValuePair\<K,V>](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) nella mappa non ordinata.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator<
    Windows::Foundation::Collections::IKeyValuePair<K, V>^>^
    First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella visualizzazione della mappa.

### <a name="remarks"></a>Osservazioni

Un modo pratico per contenere l'iteratore restituito da First() consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave **auto** type deduction. Ad esempio: `auto x = myMapView->First();`.

## <a name="unorderedmapviewhaskey-method"></a><a name="haskey"></a>Metodo UnorderedMapView::HasKeyUnorderedMapView::HasKey Method

Determina se l'oggetto UnorderedMap corrente contiene la chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool HasKey(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare l'elemento. Il tipo `key` di è typename *K*.

### <a name="return-value"></a>Valore restituito

**true** se la chiave viene trovata; in caso contrario, **false**.

## <a name="unorderedmapviewlookup-method"></a><a name="lookup"></a>Metodo UnorderedMapView::LookupUnorderedMapView::Lookup Method

Recupera il valore di tipo V associato alla chiave specificata di tipo K.

### <a name="syntax"></a>Sintassi

```cpp
V Lookup(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare un elemento in UnorderedMapView. Il tipo `key` di è typename *K*.

### <a name="return-value"></a>Valore restituito

Valore abbinato a `key`. Il tipo del valore restituito è typename *V*.

## <a name="unorderedmapviewsize-method"></a><a name="size"></a>Metodo UnorderedMapView::SizeUnorderedMapView::Size Method

Restituisce il numero di [elementi Windows::Foundation::Collections::IKeyValuePair\<K,V>](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) elementi in UnorderedMapView.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto UnorderedMapView.

## <a name="unorderedmapviewsplit-method"></a><a name="split"></a>Metodo UnorderedMapView::SplitUnorderedMapView::Split Method

Divide l'oggetto UnorderedMapView corrente in due oggetti UnorderedMapView. Questo metodo non è operativo.

### <a name="syntax"></a>Sintassi

```cpp
void Split(
   Windows::Foundation::Collections::IMapView<
                         K,V>^ * firstPartition,
   Windows::Foundation::Collections::IMapView<
                         K,V>^ * secondPartition);
```

### <a name="parameters"></a>Parametri

*firstPartition (partizione in primo luogo*<br/>
Prima parte dell'oggetto UnorderedMapView originale.

*secondPartition (Partizione di secondo)*<br/>
Seconda parte dell'oggetto UnorderedMapView originale.

### <a name="remarks"></a>Osservazioni

Questo metodo non è operativo; non esegue alcuna operazione.

## <a name="unorderedmapviewunorderedmapview-constructor"></a><a name="ctor"></a>Costruttore UnorderedMapView::UnorderedMapView

Inizializza una nuova istanza della classe UnorderedMapView.

### <a name="syntax"></a>Sintassi

```cpp
UnorderedMapView();
explicit UnorderedMapView(size_t n);
UnorderedMapView(size_t n, const H& h);
UnorderedMapView(size_t n, const H& h, const P& p);

explicit UnorderedMapView(
    const std::unordered_map<K, V, H, P>& m);
explicit UnorderedMapView(
    std::unordered_map<K, V, H, P>&& m);

template <typename InIt> UnorderedMapView(InIt first, InIt last );
template <typename InIt> UnorderedMapView(InIt first, InIt last, size_t n );

template <typename InIt> UnorderedMapView(
    InIt first,
    InIt last,
    size_t n,
    const H& h );

template <typename InIt> UnorderedMapView(
    InIt first,
    InIt last,
    size_t n,
    const H& h,
    const P& p );

UnorderedMapView(std::initializer_list<std::pair<const K, V>);

UnorderedMapView(std::initializer_list< std::pair<const K, V>> il, size_t n

UnorderedMapView(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n,
    const H& h);

UnorderedMapView(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n,
    const H& h,
    const P& p );
```

### <a name="parameters"></a>Parametri

*n*<br/>
Numero di elementi per cui preallocare spazio.

*Init*<br/>
Typename dell'oggetto UnorderedMapView.

*H*<br/>
Oggetto funzione che può eseguire l'hash di un valore per una chiave. Il valore predefinito è [\<std::hash K>](../standard-library/hash-class.md) per i tipi che `std::hash` supportano.

*P*<br/>
Tipo che fornisce un oggetto funzione che può confrontare due chiavi per determinare la loro uguaglianza. Il valore predefinito è [\<std::equal_to K>](../standard-library/equal-to-struct.md).

*M*<br/>
Un riferimento o [Lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md) a un std::unordered_map utilizzato per inizializzare il UnorderedMapView.A reference or Lvalues and Rvalues to a [std::unordered_map](../standard-library/unordered-map-class.md) that is used to initialize the UnorderedMapView.

*Prima*<br/>
Iteratore di input del primo elemento in un intervallo di elementi usato per inizializzare l'oggetto UnorderedMapView corrente.

*Ultima*<br/>
Iteratore di input del primo elemento dopo un intervallo di elementi usato per inizializzare l'oggetto UnorderedMapView corrente.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform::Collections](../cppcx/platform-collections-namespace.md)<br/>
[Windows::Foundation::IMapView](/uwp/api/windows.foundation.collections.imapview-2)
