---
description: 'Altre informazioni su: classe Platform:: Collections:: InputIterator'
title: Classe Platform::Collections::InputIterator
ms.date: 03/27/2019
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::InputIterator::InputIterator
helpviewer_keywords:
- InputIterator Class
ms.assetid: ef72eea4-32a9-42b9-8119-ce87dbdcd3be
ms.openlocfilehash: 7345435c57c75c04f0eb30d9773d655d713853de
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283955"
---
# <a name="platformcollectionsinputiterator-class"></a>Classe Platform::Collections::InputIterator

Fornisce una libreria di modelli standard InputIterator per le raccolte derivate dalla Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <typename X>
class InputIterator;
```

#### <a name="parameters"></a>Parametri

*X*<br/>
Typename della classe modello InputIterator.

### <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`difference_type`|Differenza del puntatore (ptrdiff_t).|
|`iterator_category`|Categoria di un iteratore di input (::std::input_iterator_tag).|
|`pointer`|Puntatore a `const X`|
|`reference`|Riferimento a un oggetto `const X`.|
|`value_type`|Typename `X` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[InputIterator:: InputIterator](#ctor)|Inizializza una nuova istanza della classe InputIterator.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore InputIterator:: operator! =](#operator-inequality)|Indica se l'oggetto InputIterator corrente è diverso dall'oggetto InputIterator specificato.|
|[Operatore InputIterator::operator*](#operator-dereference)|Recupera un riferimento all'elemento specificato dall'oggetto InputIterator corrente.|
|[Operatore InputIterator:: operator + +](#operator-increment)|Incrementa l'oggetto InputIterator corrente.|
|[Operatore InputIterator:: operator = =](#operator-equality)|Indica se l'oggetto InputIterator corrente è uguale all'oggetto InputIterator specificato.|
|[Operatore InputIterator:: operator->](#operator-arrow)|Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto InputIterator corrente.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InputIterator`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="inputiteratorinputiterator-constructor"></a><a name="ctor"></a> Costruttore InputIterator:: InputIterator

Inizializza una nuova istanza della classe InputIterator.

### <a name="syntax"></a>Sintassi

```
InputIterator();
explicit InputIterator(Windows::Foundation::Collections<X>^ iterator);
```

### <a name="parameters"></a>Parametri

*iteratore*<br/>
Oggetto iteratore.

## <a name="inputiteratoroperator-gt-operator"></a><a name="operator-arrow"></a>Operatore InputIterator:: operator- &gt;

Recupera l'indirizzo dell'elemento specificato dall'oggetto InputIterator corrente.

### <a name="syntax"></a>Sintassi

```
pointer operator->() const;
```

### <a name="return-value"></a>Valore restituito

Indirizzo dell'elemento specificato dall'oggetto InputIterator corrente.

## <a name="inputiteratoroperator-operator"></a><a name="operator-dereference"></a>Operatore InputIterator:: operator \*

Recupera un riferimento all'elemento specificato dall'oggetto InputIterator corrente.

### <a name="syntax"></a>Sintassi

```
reference operator*() const;
```

### <a name="return-value"></a>Valore restituito

Elemento specificato dall'oggetto InputIterator corrente.

## <a name="inputiteratoroperator-operator"></a><a name="operator-equality"></a> Operatore InputIterator:: operator = =

Indica se l'oggetto InputIterator corrente è uguale all'oggetto InputIterator specificato.

### <a name="syntax"></a>Sintassi

```
bool operator== (const InputIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro InputIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se il InputIterator corrente è uguale all' *altro*; in caso contrario, **`false`** .

## <a name="inputiteratoroperator-operator"></a><a name="operator-increment"></a> Operatore InputIterator:: operator + +

Incrementa l'oggetto InputIterator corrente.

### <a name="syntax"></a>Sintassi

```
InputIterator& operator++();
InputIterator operator++(int);
```

### <a name="return-value"></a>Valore restituito

Con la prima sintassi viene applicato l'incremento e successivamente viene restituito l'oggetto InputIterator corrente. Con la seconda sintassi viene restituita una copia dell'oggetto InputIterator corrente, quindi viene applicato l'incremento all'oggetto.

### <a name="remarks"></a>Commenti

Con la prima sintassi di InputIteator viene applicato all'oggetto InputIterator corrente un pre-incremento.

Con la seconda sintassi viene applicato all'oggetto InputIterator corrente un post-incremento. Il **`int`** tipo nella seconda sintassi indica un'operazione di post-incremento, non un effettivo operando Integer.

## <a name="inputiteratoroperator-operator"></a><a name="operator-inequality"></a> Operatore InputIterator:: operator! =

Indica se l'oggetto InputIterator corrente è diverso dall'oggetto InputIterator specificato.

### <a name="syntax"></a>Sintassi

```
bool operator!=(const InputIterator& other) const;
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Altro InputIterator.

### <a name="return-value"></a>Valore restituito

**`true`** Se il InputIterator corrente non è uguale ad *altro*; in caso contrario, **`false`** .

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)
