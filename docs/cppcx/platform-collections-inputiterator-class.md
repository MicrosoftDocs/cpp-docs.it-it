---
title: Classe Platform::Collections::InputIterator
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::InputIterator::InputIterator
helpviewer_keywords:
- InputIterator Class
ms.assetid: ef72eea4-32a9-42b9-8119-ce87dbdcd3be
ms.openlocfilehash: f5cd6afa591ba2a03fbfe492e566b0fc938ae396
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57745795"
---
# <a name="platformcollectionsinputiterator-class"></a>Classe Platform::Collections::InputIterator

Fornisce un oggetto InputIterator della libreria di modelli Standard per le raccolte derivate da Windows Runtime.

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

|Nome|Descrizione|
|----------|-----------------|
|`difference_type`|Differenza del puntatore (ptrdiff_t).|
|`iterator_category`|Categoria di un iteratore di input (::std::input_iterator_tag).|
|`pointer`|Puntatore a `const X`|
|`reference`|Riferimento a `const X`|
|`value_type`|Typename `X` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[InputIterator::InputIterator](#ctor)|Inizializza una nuova istanza della classe InputIterator.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operator InputIterator::operator!=](#operator-inequality)|Indica se l'oggetto InputIterator corrente è diverso dall'oggetto InputIterator specificato.|
|[Operatore InputIterator::operator*](#operator-decrement)|Recupera un riferimento all'elemento specificato dall'oggetto InputIterator corrente.|
|[Operatore InputIterator::operator++](#operator-increment)|Incrementa l'oggetto InputIterator corrente.|
|[Operatore InputIterator::operator==](#operator-equality)|Indica se l'oggetto InputIterator corrente è uguale all'oggetto InputIterator specificato.|
|[Operatore InputIterator::operator->](#operator-arrow)|Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto InputIterator corrente.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InputIterator`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="ctor"></a>  Costruttore inputiterator:: Inputiterator

Inizializza una nuova istanza della classe InputIterator.

### <a name="syntax"></a>Sintassi

```
InputIterator();
explicit InputIterator(Windows::Foundation::Collections<X>^ iter);
```

### <a name="parameters"></a>Parametri

*iter*<br/>
Oggetto iteratore.

## <a name="operator-arrow"></a>  Inputiterator:: operator -&gt; operatore

Recupera l'indirizzo dell'elemento specificato dall'oggetto InputIterator corrente.

### <a name="syntax"></a>Sintassi

```
pointer operator->() const;
```

### <a name="return-value"></a>Valore restituito

Indirizzo dell'elemento specificato dall'oggetto InputIterator corrente.

## <a name="operator-dereference"></a>  Inputiterator:: operator\* operatore

Recupera un riferimento all'elemento specificato dall'oggetto InputIterator corrente.

### <a name="syntax"></a>Sintassi

```
reference operator*() const;
```

### <a name="return-value"></a>Valore restituito

Elemento specificato dall'oggetto InputIterator corrente.

## <a name="operator-equality"></a>  Inputiterator:: operator = = Operator

Indica se l'oggetto InputIterator corrente è uguale all'oggetto InputIterator specificato.

### <a name="syntax"></a>Sintassi

```
bool operator== (const InputIterator& other) const;
```

### <a name="parameters"></a>Parametri

*other*<br/>
Altro InputIterator.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto InputIterator corrente è uguale a *altri*; in caso contrario, **false**.

## <a name="operator-increment"></a>  Operatore inputiterator:: operator + +

Incrementa l'oggetto InputIterator corrente.

### <a name="syntax"></a>Sintassi

```
InputIterator& operator++();
InputIterator operator++(int);
```

### <a name="return-value"></a>Valore restituito

Con la prima sintassi viene applicato l'incremento e successivamente viene restituito l'oggetto InputIterator corrente. Con la seconda sintassi viene restituita una copia dell'oggetto InputIterator corrente, quindi viene applicato l'incremento all'oggetto.

### <a name="remarks"></a>Note

Con la prima sintassi di InputIteator viene applicato all'oggetto InputIterator corrente un pre-incremento.

Con la seconda sintassi viene applicato all'oggetto InputIterator corrente un post-incremento. Il tipo `int` nella seconda sintassi indica un'operazione di post-incremento, non un effettivo operando Integer.

## <a name="operator-inequality"></a>  InputIterator::operator!= Operator

Indica se l'oggetto InputIterator corrente è diverso dall'oggetto InputIterator specificato.

### <a name="syntax"></a>Sintassi

```
bool operator!=(const InputIterator& other) const;
```

### <a name="parameters"></a>Parametri

*other*<br/>
Altro InputIterator.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto InputIterator corrente non è uguale a *altri*; in caso contrario, **false**.

## <a name="see-also"></a>Vedere anche

[Platform Namespace](platform-namespace-c-cx.md)
