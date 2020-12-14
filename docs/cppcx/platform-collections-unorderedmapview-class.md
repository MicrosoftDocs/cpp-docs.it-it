---
description: 'Altre informazioni su: classe Platform:: Collections:: UnorderedMapView'
title: Classe Platform::Collections::UnorderedMapView
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- collection/Platform::Collections::UnorderedMapView
ms.assetid: 545a3725-2efd-4cc1-b590-4a7cd2351f61
ms.openlocfilehash: 39f33fd75db92e81fa5321d8983b1b5ea9fce79a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252376"
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

*V*<br/>
Tipo di valore nella coppia chiave-valore.

*C*<br/>
Tipo che fornisce un oggetto funzione che può confrontare due valori di chiavi per la loro uguaglianza. Per impostazione predefinita, [std:: \<K> equal_to](../standard-library/equal-to-struct.md)

### <a name="remarks"></a>Commenti

UnorderedMapView è un'implementazione concreta di C++ dell'interfaccia [Windows:: Foundation:: Collections \<K,V> :: IMapView](/uwp/api/windows.foundation.collections.imapview-2) passata attraverso l'interfaccia ABI (Application Binary Interface). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[UnorderedMapView:: UnorderedMapView](#ctor)|Inizializza una nuova istanza della classe UnorderedMapView.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[UnorderedMapView:: First](#first)|Restituisce un iteratore che viene inizializzato al primo elemento nella visualizzazione della mappa.|
|[UnorderedMapView:: HasKey](#haskey)|Determina se l'oggetto UnorderedMapView corrente contiene la chiave specificata.|
|[UnorderedMapView:: Lookup](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto UnorderedMapView corrente.|
|[UnorderedMapView:: size](#size)|Restituisce il numero di elementi nell'oggetto UnorderedMapView corrente.|
|[UnorderedMapView:: Split](#split)|Divide un oggetto UnorderedMapView originale in due oggetti UnorderedMapView.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`UnorderedMapView`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="unorderedmapviewfirst-method"></a><a name="first"></a> Metodo UnorderedMapView:: First

Restituisce un iteratore che specifica il primo elemento [Windows:: Foundation:: Collections \<K,V> :: IKeyValuePair](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) nella mappa non ordinata.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator<
    Windows::Foundation::Collections::IKeyValuePair<K, V>^>^
    First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento nella visualizzazione della mappa.

### <a name="remarks"></a>Commenti

Un modo pratico per conservare l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **`auto`** parola chiave di deduzione del tipo. Ad esempio: `auto x = myMapView->First();`.

## <a name="unorderedmapviewhaskey-method"></a><a name="haskey"></a> Metodo UnorderedMapView:: HasKey

Determina se l'oggetto UnorderedMap corrente contiene la chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool HasKey(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare l'elemento. Il tipo di `key` è TypeName *K*.

### <a name="return-value"></a>Valore restituito

**`true`** Se la chiave viene trovata; in caso contrario, **`false`** .

## <a name="unorderedmapviewlookup-method"></a><a name="lookup"></a> Metodo UnorderedMapView:: Lookup

Recupera il valore di tipo V associato alla chiave specificata di tipo K.

### <a name="syntax"></a>Sintassi

```cpp
V Lookup(K key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave usata per individuare un elemento in UnorderedMapView. Il tipo di `key` è TypeName *K*.

### <a name="return-value"></a>Valore restituito

Valore abbinato a `key`. Il tipo del valore restituito è TypeName *V*.

## <a name="unorderedmapviewsize-method"></a><a name="size"></a> Metodo UnorderedMapView:: size

Restituisce il numero di elementi [Windows:: Foundation:: Collections: \<K,V> : IKeyValuePair](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) in UnorderedMapView.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto UnorderedMapView.

## <a name="unorderedmapviewsplit-method"></a><a name="split"></a> Metodo UnorderedMapView:: Split

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

*firstPartition*<br/>
Prima parte dell'oggetto UnorderedMapView originale.

*secondPartition*<br/>
Seconda parte dell'oggetto UnorderedMapView originale.

### <a name="remarks"></a>Commenti

Questo metodo non è operativo; non esegue alcuna operazione.

## <a name="unorderedmapviewunorderedmapview-constructor"></a><a name="ctor"></a> Costruttore UnorderedMapView:: UnorderedMapView

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

*InIt*<br/>
Typename dell'oggetto UnorderedMapView.

*H*<br/>
Oggetto funzione che può eseguire l'hash di un valore per una chiave. Il valore predefinito è [std:: \<K> hash](../standard-library/hash-class.md) per i tipi `std::hash` supportati da.

*P*<br/>
Tipo che fornisce un oggetto funzione che può confrontare due chiavi per determinare la loro uguaglianza. Il valore predefinito è [std:: \<K> equal_to](../standard-library/equal-to-struct.md).

*m*<br/>
Un riferimento o [lvalue e rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un [std:: unordered_map](../standard-library/unordered-map-class.md) usato per inizializzare UnorderedMapView.

*first*<br/>
Iteratore di input del primo elemento in un intervallo di elementi usato per inizializzare l'oggetto UnorderedMapView corrente.

*last*<br/>
Iteratore di input del primo elemento dopo un intervallo di elementi usato per inizializzare l'oggetto UnorderedMapView corrente.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform:: Collections](../cppcx/platform-collections-namespace.md)<br/>
[Windows::Foundation::IMapView](/uwp/api/windows.foundation.collections.imapview-2)
