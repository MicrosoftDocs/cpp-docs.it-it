---
title: Classe Platform::Collections::VectorViewIterator
ms.date: 03/27/2019
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::VectorViewIterator::VectorViewIterator
helpviewer_keywords:
- VectorViewIterator Class
ms.assetid: be3aa1ae-e6ba-4a06-8d6b-86d8128026f7
ms.openlocfilehash: 3fed25b975eefe33f9eb7014ca91a52ba419c936
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211567"
---
# <a name="platformcollectionsvectorviewiterator-class"></a>Classe Platform::Collections::VectorViewIterator

Fornisce un iteratore della libreria di modelli standard per gli oggetti derivati dall' `IVectorView` interfaccia Windows Runtime.

`ViewVectorIterator` è un iteratore proxy che archivia elementi di tipo `VectorProxy<T>`. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

## <a name="syntax"></a>Sintassi

```
template <typename T>
class VectorViewIterator;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Typename della classe modello VectorViewIterator.

### <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`difference_type`|Differenza del puntatore (ptrdiff_t).|
|`iterator_category`|Categoria di un iteratore di accesso casuale (::std::random_access_iterator_tag).|
|`pointer`|Puntatore a un tipo interno richiesto per l'implementazione di VectorViewIterator.|
|`reference`|Riferimento a un tipo interno richiesto per l'implementazione di VectorViewIterator.|
|`value_type`|Typename `T` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto VectorViewIterator:: oggetto VectorViewIterator](#ctor)|Inizializza una nuova istanza della classe VectorViewIterator.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore oggetto VectorViewIterator:: operator-](#operator-minus)|Sottrae un numero specificato di elementi dall'iteratore corrente creando un nuovo iteratore o un iteratore specificato dall'iteratore corrente creando il numero di elementi tra gli iteratori.|
|[Operatore oggetto VectorViewIterator:: operator--](#operator-decrement)|Decrementa l'oggetto VectorViewIterator corrente.|
|[Operatore oggetto VectorViewIterator:: operator! =](#operator-inequality)|Indica se l'oggetto VectorViewIterator corrente è diverso dall'oggetto VectorViewIterator specificato.|
|[Operatore oggetto VectorViewIterator:: operator *](#operator-dereference)|Recupera un riferimento all'elemento specificato dall'oggetto VectorViewIterator corrente.|
|[Operatore oggetto VectorViewIterator::\[\]](#operator-at)|Recupera un riferimento all'elemento che è distanziato dall'oggetto VectorViewIterator corrente dello spostamento specificato.|
|[Operatore oggetto VectorViewIterator:: operator +](#operator-plus)|Restituisce un oggetto VectorViewIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorViewIterator specificato.|
|[Operatore oggetto VectorViewIterator:: operator + +](#operator-increment)|Incrementa l'oggetto VectorViewIterator corrente.|
|[Operatore oggetto VectorViewIterator:: operator + =](#operator-plus-equals)|Incrementa l'oggetto VectorViewIterator corrente dello spostamento specificato.|
|[Operatore oggetto VectorViewIterator:: operator<](#operator-less-than)|Indica se l'oggetto VectorViewIterator corrente è minore dell'oggetto VectorViewIterator specificato.|
|[Operatore oggetto VectorViewIterator:: operator \< =](#operator-less-than-or-equals)|Indica se l'oggetto VectorViewIterator corrente è minore o uguale all'oggetto VectorViewIterator specificato.|
|[Operatore oggetto VectorViewIterator:: operator-=](#operator-minus-assign)|Decrementa l'oggetto VectorViewIterator corrente dello spostamento specificato.|
|[Operatore oggetto VectorViewIterator:: operator = =](#operator-equality)|Indica se l'oggetto VectorViewIterator corrente è uguale all'oggetto VectorViewIterator specificato.|
|[Operatore oggetto VectorViewIterator:: operator>](#operator-greater-than)|Indica se l'oggetto VectorViewIterator corrente è maggiore dell'oggetto VectorViewIterator specificato.|
|[Operatore VectorViewIterator::operator->](#operator-arrow)|Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorViewIterator corrente.|
|[Operatore oggetto VectorViewIterator:: operator>=](#operator-greater-than-or-equals)|Indica se l'oggetto VectorViewIterator corrente è maggiore o uguale a un oggetto VectorViewIterator specificato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VectorViewIterator`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="vectorviewiteratoroperator-gt-operator"></a><a name="operator-arrow"></a>Operatore oggetto VectorViewIterator:: operator- &gt;

Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorViewIterator corrente.

### <a name="syntax"></a>Sintassi

```
Detail::ArrowProxy<T> operator->() const;
```

### <a name="return-value"></a>Valore restituito

Valore dell'elemento a cui fa riferimento l'oggetto VectorViewIterator corrente.

Il tipo di valore restituito è un tipo interno non specificato necessario per l'implementazione di questo operatore.

## <a name="vectorviewiteratoroperator---operator"></a><a name="operator-decrement"></a>Operatore oggetto VectorViewIterator:: operator--

Decrementa l'oggetto VectorViewIterator corrente.

### <a name="syntax"></a>Sintassi

```
VectorViewIterator& operator--();
VectorViewIterator operator--(int);
```

### <a name="return-value"></a>Valore restituito

La prima sintassi decrementa e quindi restituisce l'oggetto VectorViewIterator corrente. La seconda sintassi restituisce una copia dell'oggetto VectorViewIterator corrente, quindi decrementa l'oggetto VectorViewIterator corrente.

### <a name="remarks"></a>Osservazioni

La prima sintassi di VectorViewIterator esegue un decremento preliminare dell'oggetto VectorViewIterator corrente.

La seconda sintassi esegue un decremento posteriore dell'oggetto VectorViewIterator corrente. Il **`int`** tipo nella seconda sintassi indica un'operazione di post-decremento, non un effettivo operando Integer.

## <a name="vectorviewiteratoroperator-operator"></a><a name="operator-dereference"></a>Operatore oggetto VectorViewIterator:: operator \*

Recupera un riferimento all'elemento specificato dall'oggetto VectorViewIterator corrente.

### <a name="syntax"></a>Sintassi

```
reference operator*() const;
```

### <a name="return-value"></a>Valore restituito

Elemento specificato dall'oggetto VectorViewIterator corrente.

## <a name="vectorviewiteratoroperator-operator"></a><a name="operator-equality"></a>Operatore oggetto VectorViewIterator:: operator = =

Indica se l'oggetto VectorViewIterator corrente è uguale all'oggetto VectorViewIterator specificato.

### <a name="syntax"></a>Sintassi

```
bool operator==(const VectorViewIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorViewIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto corrente `VectorViewIterator` è uguale ad *altro*; in caso contrario, **`false`** .

## <a name="vectorviewiteratoroperatorgt-operator"></a><a name="operator-greater-than"></a>Operatore oggetto VectorViewIterator:: operator &gt;

Indica se l'oggetto VectorViewIterator corrente è maggiore dell'oggetto VectorViewIterator specificato.

### <a name="syntax"></a>Sintassi

```

bool operator>(const VectorViewIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorViewIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se il oggetto VectorViewIterator corrente è maggiore di *altro*; in caso contrario, **`false`** .

## <a name="vectorviewiteratoroperatorgt-operator"></a><a name="operator-greater-than-or-equals"></a>Operatore oggetto VectorViewIterator:: operator &gt; =

Indica se l'oggetto corrente `VectorViewIterator` è maggiore o uguale all'oggetto specificato `VectorViewIterator` .

### <a name="syntax"></a>Sintassi

```

bool operator>=(const VectorViewIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorViewIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto corrente `VectorViewIterator` è maggiore o uguale ad *altro*; in caso contrario, **`false`** .

## <a name="vectorviewiteratoroperator-operator"></a><a name="operator-increment"></a>Operatore oggetto VectorViewIterator:: operator + +

Incrementa l'oggetto VectorViewIterator corrente.

### <a name="syntax"></a>Sintassi

```

VectorViewIterator& operator++();
VectorViewIterator operator++(int);
```

### <a name="return-value"></a>Valore restituito

Con la prima sintassi viene applicato l'incremento e successivamente viene restituito l'oggetto VectorViewIterator corrente. Con la seconda sintassi viene restituita una copia dell'oggetto VectorViewIterator corrente, quindi viene applicato l'incremento all'oggetto VectorViewIterator corrente.

### <a name="remarks"></a>Osservazioni

Con la prima sintassi di VectorViewIterator viene applicato all'oggetto VectorViewIterator corrente un pre-incremento.

Con la seconda sintassi viene applicato all'oggetto VectorViewIterator corrente un post-incremento. Il **`int`** tipo nella seconda sintassi indica un'operazione di post-incremento, non un effettivo operando Integer.

## <a name="vectorviewiteratoroperator-operator"></a><a name="operator-inequality"></a>Operatore oggetto VectorViewIterator:: operator! =

Indica se l'oggetto VectorViewIterator corrente è diverso dall'oggetto VectorViewIterator specificato.

### <a name="syntax"></a>Sintassi

```
bool operator!=(const VectorViewIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto VectorViewIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto corrente `VectorViewIterator` non è uguale ad *altro*; in caso contrario, **`false`** .

## <a name="vectorviewiteratoroperatorlt-operator"></a><a name="operator-less-than"></a>Operatore oggetto VectorViewIterator:: operator &lt;

Indica se l'oggetto VectorIterator corrente è minore dell'oggetto VectorIterator specificato.

### <a name="syntax"></a>Sintassi

```
bool operator<(const VectorViewIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto `VectorIterator`.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto corrente `VectorIterator` è minore di *other*; in caso contrario, **`false`** .

## <a name="vectorviewiteratoroperatorlt-operator"></a><a name="operator-less-than-or-equals"></a>Operatore oggetto VectorViewIterator:: operator &lt; =

Indica se l'oggetto corrente `VectorIterator` è minore o uguale a un oggetto specificato `VectorIterator` .

### <a name="syntax"></a>Sintassi

```

bool operator<=(const VectorViewIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro oggetto `VectorIterator`.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto corrente `VectorIterator` è minore o uguale ad *altro*; in caso contrario, **`false`** .

## <a name="vectorviewiteratoroperator--operator"></a><a name="operator-minus"></a>Operatore oggetto VectorViewIterator:: operator-

Sottrae un numero specificato di elementi dall'iteratore corrente creando un nuovo iteratore o un iteratore specificato dall'iteratore corrente creando il numero di elementi tra gli iteratori.

### <a name="syntax"></a>Sintassi

```

VectorViewIterator operator-(difference_type n) const;

difference_type operator-(const VectorViewIterator& other) const;
```

### <a name="parameters"></a>Parametri

*n*<br/>
Numero di elementi.

*altri*<br/>
Altro oggetto VectorViewIterator.

### <a name="return-value"></a>Valore restituito

La prima sintassi dell'operatore restituisce un oggetto VectorViewIterator costituito da `n` elementi in meno rispetto all'oggetto VectorViewIterator corrente. La seconda sintassi dell'operatore restituisce il numero di elementi tra l'oggetto VectorViewIterator corrente e `other`.

## <a name="vectorviewiteratoroperator-operator"></a><a name="operator-plus-equals"></a>Operatore oggetto VectorViewIterator:: operator + =

Incrementa l'oggetto VectorViewIterator corrente dello spostamento specificato.

### <a name="syntax"></a>Sintassi

```
VectorViewIterator& operator+=(difference_type n);
```

### <a name="parameters"></a>Parametri

*n*<br/>
Spostamento espresso come Integer.

### <a name="return-value"></a>Valore restituito

VectorViewIterator aggiornato.

## <a name="vectorviewiteratoroperator-operator"></a><a name="operator-plus"></a>Operatore oggetto VectorViewIterator:: operator +

Restituisce un oggetto VectorViewIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorViewIterator specificato.

### <a name="syntax"></a>Sintassi

```

VectorViewIterator operator+(difference_type n) const;

template <typename T>
inline VectorViewIterator<T> operator+
   (ptrdiff_t n,
   const VectorViewIterator<T>& i);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Nella seconda sintassi, typename di VectorViewIterator.

*n*<br/>
Spostamento espresso come Integer.

*i*<br/>
Nella seconda sintassi, oggetto VectorViewIterator.

### <a name="return-value"></a>Valore restituito

Nella prima sintassi, oggetto VectorViewIterator che fa riferimento all'elemento con lo spostamento specificato rispetto all'oggetto VectorViewIterator corrente.

Nella seconda sintassi, oggetto VectorViewIterator che fa riferimento all'elemento con lo spostamento specificato rispetto all'inizio del parametro `i`.

## <a name="vectorviewiteratoroperator--operator"></a><a name="operator-minus-assign"></a>Operatore oggetto VectorViewIterator:: operator-=

Decrementa l'oggetto VectorIterator corrente dello spostamento specificato.

### <a name="syntax"></a>Sintassi

```
VectorViewIterator& operator-=(difference_type n);
```

### <a name="parameters"></a>Parametri

*n*<br/>
Spostamento espresso come Integer.

### <a name="return-value"></a>Valore restituito

VectorIterator aggiornato.

## <a name="vectorviewiteratoroperator"></a><a name="operator-at"></a>Operatore oggetto VectorViewIterator::\[\]

Recupera un riferimento all'elemento che è distanziato dall'oggetto VectorViewIterator corrente dello spostamento specificato.

### <a name="syntax"></a>Sintassi

```
reference operator[](difference_type n) const;
```

### <a name="parameters"></a>Parametri

*n*<br/>
Spostamento espresso come Integer.

### <a name="return-value"></a>Valore restituito

Elemento che viene spostato da `n` elementi rispetto all'oggetto VectorViewIterator corrente.

## <a name="vectorviewiteratorvectorviewiterator-constructor"></a><a name="ctor"></a>Costruttore oggetto VectorViewIterator:: oggetto VectorViewIterator

Inizializza una nuova istanza della classe VectorViewIterator.

### <a name="syntax"></a>Sintassi

```

VectorViewIterator();

explicit VectorViewIterator(
   Windows::Foundation::Collections::IVectorView<T>^ v
);
```

### <a name="parameters"></a>Parametri

*v*<br/>
Oggetto IVectorView \<T> .

### <a name="remarks"></a>Osservazioni

Il primo esempio di sintassi è il costruttore predefinito. Il secondo esempio di sintassi è un costruttore esplicito usato per costruire un oggetto VectorViewIterator da un \<T> oggetto IVectorView.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)
