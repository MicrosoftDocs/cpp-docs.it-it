---
description: 'Altre informazioni su: classe Platform:: Collections:: oggetto VectorIterator'
title: Classe Platform::Collections::VectorIterator
ms.date: 03/27/2019
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::VectorIterator::VectorIterator
helpviewer_keywords:
- VectorIterator Class
ms.assetid: d531cb42-27e0-48a6-bf5e-c265891a18ff
ms.openlocfilehash: ad572a8b426092fb0ddb39db44f387598674c988
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97253910"
---
# <a name="platformcollectionsvectoriterator-class"></a>Classe Platform::Collections::VectorIterator

Fornisce un iteratore della libreria di modelli standard per gli oggetti derivati dall'interfaccia Windows Runtime IVector.

Oggetto VectorIterator è un iteratore proxy che archivia elementi di tipo VectorProxy \<T> . L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

## <a name="syntax"></a>Sintassi

```
template <typename T>
class VectorIterator;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Typename della classe modello VectorIterator.

### <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`difference_type`|Differenza del puntatore (ptrdiff_t).|
|`iterator_category`|Categoria di un iteratore di accesso casuale (::std::random_access_iterator_tag).|
|`pointer`|Puntatore a un tipo interno, Platform:: Collections::D etails:: VectorProxy \<T> , necessario per l'implementazione di oggetto VectorIterator.|
|`reference`|Riferimento a un tipo interno, Platform:: Collections::D etails:: VectorProxy \<T> ,, necessario per l'implementazione di oggetto VectorIterator.|
|`value_type`|Typename `T` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Oggetto VectorIterator:: oggetto VectorIterator](#ctor)|Inizializza una nuova istanza della classe VectorIterator.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore oggetto VectorIterator:: operator-](#operator-minus)|Sottrae un numero specificato di elementi dall'iteratore corrente creando un nuovo iteratore o un iteratore specificato dall'iteratore corrente creando il numero di elementi tra gli iteratori.|
|[Operatore oggetto VectorIterator:: operator--](#operator-decrement)|Decrementa l'oggetto VectorIterator corrente.|
|[Operatore oggetto VectorIterator:: operator! =](#operator-inequality)|Indica se l'oggetto VectorIterator corrente è diverso dall'oggetto VectorIterator specificato.|
|[Operatore oggetto VectorIterator:: operator *](#operator-dereference)|Recupera un riferimento all'elemento specificato dall'oggetto VectorIterator corrente.|
|[Operatore oggetto VectorIterator::\[\]](#operator-at)|Recupera un riferimento all'elemento che è distanziato dall'oggetto VectorIterator corrente dello spostamento specificato.|
|[Operatore oggetto VectorIterator:: operator +](#operator-plus)|Restituisce un oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorIterator specificato.|
|[Operatore oggetto VectorIterator:: operator + +](#operator-increment)|Incrementa l'oggetto VectorIterator corrente.|
|[Operatore oggetto VectorIterator:: operator + =](#operator-plus-assign)|Incrementa l'oggetto VectorIterator corrente dello spostamento specificato.|
|[Operatore oggetto VectorIterator:: operator<](#operator-less-than)|Indica se l'oggetto VectorIterator corrente è minore dell'oggetto VectorIterator specificato.|
|[Operatore oggetto VectorIterator:: operator \< =](#operator-less-than-or-equals)|Indica se l'oggetto VectorIterator corrente è minore o uguale all'oggetto VectorIterator specificato.|
|[Operatore VectorIterator::operator-=](#operator-minus-equals)|Decrementa l'oggetto VectorIterator corrente dello spostamento specificato.|
|[Operatore oggetto VectorIterator:: operator = =](#operator-equality)|Indica se l'oggetto VectorIterator corrente è uguale all'oggetto VectorIterator specificato.|
|[Operatore oggetto VectorIterator:: operator>](#operator-greater-than)|Indica se l'oggetto VectorIterator corrente è maggiore dell'oggetto VectorIterator specificato.|
|[Operatore oggetto VectorIterator:: operator->](#operator-arrow)|Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorIterator corrente.|
|[Operatore oggetto VectorIterator:: operator>=](#operator-greater-than-or-equals)|Indica se l'oggetto VectorIterator corrente è maggiore o uguale a un oggetto VectorIterator specificato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VectorIterator`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="vectoriteratoroperator-gt-operator"></a><a name="operator-arrow"></a>Operatore oggetto VectorIterator:: operator- &gt;

Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorIterator corrente.

### <a name="syntax"></a>Sintassi

```
Detail::ArrowProxy<T> operator->() const;
```

### <a name="return-value"></a>Valore restituito

Valore dell'elemento a cui fa riferimento l'oggetto VectorIterator corrente.

Il tipo di valore restituito è un tipo interno non specificato necessario per l'implementazione di questo operatore.

## <a name="vectoriteratoroperator---operator"></a><a name="operator-decrement"></a> Operatore oggetto VectorIterator:: operator--

Decrementa l'oggetto VectorIterator corrente.

### <a name="syntax"></a>Sintassi

```

VectorIterator& operator--();
VectorIterator operator--(int);
```

### <a name="return-value"></a>Valore restituito

La prima sintassi decrementa e quindi restituisce l'oggetto VectorIterator corrente. La seconda sintassi restituisce una copia dell'oggetto VectorIterator corrente, quindi decrementa l'oggetto VectorIterator corrente.

### <a name="remarks"></a>Commenti

La prima sintassi di VectorIterator esegue un decremento preliminare dell'oggetto VectorIterator corrente.

La seconda sintassi esegue un decremento posteriore dell'oggetto VectorIterator corrente. Il **`int`** tipo nella seconda sintassi indica un'operazione di post-decremento, non un effettivo operando Integer.

## <a name="vectoriteratoroperator-operator"></a><a name="operator-dereference"></a>Operatore oggetto VectorIterator:: operator \*

Recupera l'indirizzo dell'elemento specificato dall'oggetto VectorIterator corrente.

### <a name="syntax"></a>Sintassi

```
reference operator*() const;
```

### <a name="return-value"></a>Valore restituito

Elemento specificato dall'oggetto VectorIterator corrente.

## <a name="vectoriteratoroperator-operator"></a><a name="operator-equality"></a> Operatore oggetto VectorIterator:: operator = =

Indica se l'oggetto VectorIterator corrente è uguale all'oggetto VectorIterator specificato.

### <a name="syntax"></a>Sintassi

```
bool operator==(const VectorIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se il oggetto VectorIterator corrente è uguale all' *altro*; in caso contrario, **`false`** .

## <a name="vectoriteratoroperatorgt-operator"></a><a name="operator-greater-than"></a>Operatore oggetto VectorIterator:: operator &gt;

Indica se l'oggetto VectorIterator corrente è maggiore dell'oggetto VectorIterator specificato.

### <a name="syntax"></a>Sintassi

```cpp
bool operator>(const VectorIterator& other) const
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se il oggetto VectorIterator corrente è maggiore di *altro*; in caso contrario, **`false`** .

## <a name="vectoriteratoroperatorgt-operator"></a><a name="operator-greater-than-or-equals"></a> Operatore oggetto VectorIterator:: operator &gt; =

Indica se l'oggetto VectorIterator corrente è maggiore o uguale all'oggetto VectorIterator specificato.

### <a name="syntax"></a>Sintassi

```cpp
bool operator>=(const VectorIterator& other) const
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se il oggetto VectorIterator corrente è maggiore o uguale ad *altro*; in caso contrario, **`false`** .

## <a name="vectoriteratoroperator-operator"></a><a name="operator-increment"></a> Operatore oggetto VectorIterator:: operator + +

Incrementa l'oggetto VectorIterator corrente.

### <a name="syntax"></a>Sintassi

```
VectorIterator& operator++();
VectorIterator operator++(int);
```

### <a name="return-value"></a>Valore restituito

Con la prima sintassi viene applicato l'incremento e successivamente viene restituito l'oggetto VectorIterator corrente. Con la seconda sintassi viene restituita una copia dell'oggetto VectorIterator corrente, quindi viene applicato l'incremento all'oggetto VectorIterator corrente.

### <a name="remarks"></a>Commenti

Con la prima sintassi viene applicato all'oggetto VectorIterator corrente un pre-incremento.

Con la seconda sintassi viene applicato all'oggetto VectorIterator corrente un post-incremento. Il **`int`** tipo nella seconda sintassi indica un'operazione di post-incremento, non un effettivo operando Integer.

## <a name="vectoriteratoroperator-operator"></a><a name="operator-inequality"></a> Operatore oggetto VectorIterator:: operator! =

Indica se l'oggetto VectorIterator corrente è diverso dall'oggetto VectorIterator specificato.

### <a name="syntax"></a>Sintassi

```
bool operator!=(const VectorIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se il oggetto VectorIterator corrente non è uguale ad *altro*; in caso contrario, **`false`** .

## <a name="vectoriteratoroperatorlt-operator"></a><a name="operator-less-than"></a>Operatore oggetto VectorIterator:: operator &lt;

Indica se l'oggetto VectorIterator corrente è minore dell'oggetto VectorIterator specificato.

### <a name="syntax"></a>Sintassi

```cpp
bool operator<(const VectorIterator& other) const
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se il oggetto VectorIterator corrente è minore di *altro*; in caso contrario, **`false`** .

## <a name="vectoriteratoroperatorlt-operator"></a><a name="operator-less-than-or-equals"></a> Operatore oggetto VectorIterator:: operator &lt; =

Indica se l'oggetto VectorIterator corrente è minore o uguale all'oggetto VectorIterator specificato.

### <a name="syntax"></a>Sintassi

```cpp
bool operator<=(const VectorIterator& other) const
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se il oggetto VectorIterator corrente è minore o uguale ad *altro*; in caso contrario, **`false`** .

## <a name="vectoriteratoroperator--operator"></a><a name="operator-minus"></a> Operatore oggetto VectorIterator:: operator-

Sottrae un numero specificato di elementi dall'iteratore corrente creando un nuovo iteratore o un iteratore specificato dall'iteratore corrente creando il numero di elementi tra gli iteratori.

### <a name="syntax"></a>Sintassi

```

VectorIterator operator-(difference_type n) const;

difference_type operator-(const VectorIterator& other) const;
```

### <a name="parameters"></a>Parametri

*n*<br/>
Numero di elementi.

*altri*<br/>
Altro oggetto VectorIterator.

### <a name="return-value"></a>Valore restituito

La prima sintassi dell'operatore restituisce un oggetto VectorIterator costituito da `n` elementi in meno rispetto all'oggetto VectorIterator corrente. La seconda sintassi dell'operatore restituisce il numero di elementi tra l'oggetto VectorIterator corrente e `other`.

## <a name="vectoriteratoroperator-operator"></a><a name="operator-plus-assign"></a> Operatore oggetto VectorIterator:: operator + =

Incrementa l'oggetto VectorIterator corrente dello spostamento specificato.

### <a name="syntax"></a>Sintassi

```
VectorIterator& operator+=(difference_type n);
```

### <a name="parameters"></a>Parametri

*n*<br/>
Spostamento espresso come Integer.

### <a name="return-value"></a>Valore restituito

VectorIterator aggiornato.

## <a name="vectoriteratoroperator-operator"></a><a name="operator-plus"></a> Operatore oggetto VectorIterator:: operator +

Restituisce un oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorIterator specificato.

### <a name="syntax"></a>Sintassi

```

VectorIterator operator+(difference_type n);

template <typename T>
inline VectorIterator<T> operator+(
  ptrdiff_t n,
  const VectorIterator<T>& i);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Nella seconda sintassi, typename di VectorIterator.

*n*<br/>
Spostamento espresso come Integer.

*i*<br/>
Nella seconda sintassi, oggetto VectorIterator.

### <a name="return-value"></a>Valore restituito

Nella prima sintassi, oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorIterator corrente.

Nella seconda sintassi, oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'inizio del parametro `i`.

### <a name="remarks"></a>Commenti

Esempio della prima sintassi

## <a name="vectoriteratoroperator--operator"></a><a name="operator-minus-equals"></a> Operatore oggetto VectorIterator:: operator-=

Decrementa l'oggetto VectorIterator corrente dello spostamento specificato.

### <a name="syntax"></a>Sintassi

```
VectorIterator& operator-=(difference_type n);
```

### <a name="parameters"></a>Parametri

*n*<br/>
Spostamento espresso come Integer.

### <a name="return-value"></a>Valore restituito

VectorIterator aggiornato.

## <a name="vectoriteratoroperator"></a><a name="operator-at"></a> Operatore oggetto VectorIterator::\[\]

Recupera un riferimento all'elemento che è distanziato dall'oggetto VectorIterator corrente dello spostamento specificato.

### <a name="syntax"></a>Sintassi

```
reference operator[](difference_type n) const;
```

### <a name="parameters"></a>Parametri

*n*<br/>
Spostamento espresso come Integer.

### <a name="return-value"></a>Valore restituito

Elemento che viene spostato di `n` elementi rispetto all'oggetto VectorIterator corrente.

## <a name="vectoriteratorvectoriterator-constructor"></a><a name="ctor"></a> Costruttore oggetto VectorIterator:: oggetto VectorIterator

Inizializza una nuova istanza della classe VectorIterator.

### <a name="syntax"></a>Sintassi

```
VectorIterator();

explicit VectorIterator(
   Windows::Foundation::Collections::IVector<T>^ v);
```

### <a name="parameters"></a>Parametri

*v*<br/>
Oggetto IVector \<T> .

### <a name="remarks"></a>Commenti

Il primo esempio di sintassi è il costruttore predefinito. Il secondo esempio di sintassi è un costruttore esplicito usato per costruire un oggetto VectorIterator da un \<T> oggetto IVector.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)
