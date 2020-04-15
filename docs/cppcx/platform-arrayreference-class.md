---
title: Platform::ArrayReference (classe)
ms.date: 10/16/2019
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::ArrayReference::ArrayReference
helpviewer_keywords:
- Platform::ArrayReference Class
ms.assetid: 9ab3b15e-8a60-4600-8fcb-7d6c86284f4b
ms.openlocfilehash: e9dd16ad6c3f53c5562b0419197a582c06fbc642
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81354797"
---
# <a name="platformarrayreference-class"></a>Platform::ArrayReference (classe)

`ArrayReference` è un tipo di ottimizzazione che puoi sostituire a [Platform::Array^](../cppcx/platform-array-class.md) nei parametri di input quando vuoi compilare una matrice di tipo C con dati di input.

## <a name="syntax"></a>Sintassi

```cpp
class ArrayReference
```

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ArrayReference::ArrayReference](#ctor)|Inizializza una nuova istanza della classe `ArrayReference`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore ArrayReference::operator()](#operator-call)|Converte questo oggetto `ArrayReference` in `Platform::Array<T>^*`.|
|[Operatore ArrayReference::operator=](#operator-assign)|Assegna il contenuto di un altro oggetto `ArrayReference` a questa istanza.|

## <a name="exceptions"></a>Eccezioni

### <a name="remarks"></a>Osservazioni

Utilizzando `ArrayReference` per compilare una matrice di tipo C, puoi evitare l'operazione di copia aggiuntiva che sarebbe richiesta per la copia prima in una variabile `Platform::Array` quindi nella matrice di tipo C. Quando usi `ArrayReference`, viene effettuata un'unica operazione di copia. Per un esempio di codice, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8 (informazioni in due)

**Server minimo supportato:** Windows Server 2012 (informazioni in due)

**Spazio dei nomi:** Platform

**Intestazione:** vccorlib.h

## <a name="arrayreferencearrayreference-constructor"></a><a name="ctor"></a>Costruttore ArrayReference::ArrayReference

Inizializza una nuova istanza della classe [Platform::ArrayReference.](../cppcx/platform-arrayreference-class.md)

### <a name="syntax"></a>Sintassi

```cpp
ArrayReference(TArg* ataArg, unsigned int sizeArg, bool needsInitArg = false);
ArrayReference(ArrayReference&& otherArg)
```

### <a name="parameters"></a>Parametri

*dataArg (Argogo dati)*<br/>
Puntatore alla matrice di dati.

*sizeArg*<br/>
Numero di elementi nella matrice di origine.

*otherArg*<br/>
Oggetto `ArrayReference` i cui dati verranno spostati per inizializzare la nuova istanza.

### <a name="remarks"></a>Osservazioni

## <a name="arrayreferenceoperator-operator"></a><a name="operator-assign"></a>Operatore ArrayReference::operator

Assegna l'oggetto specificato all'oggetto [corrente Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) oggetto utilizzando la semantica di spostamento.

### <a name="syntax"></a>Sintassi

```cpp
ArrayReference& operator=(ArrayReference&& otherArg);
```

### <a name="parameters"></a>Parametri

*otherArg*<br/>
Oggetto spostato nell'oggetto `ArrayReference` corrente.

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto di tipo `ArrayReference`.

### <a name="remarks"></a>Osservazioni

`Platform::ArrayReference` è un modello di classe C++ standard, non una classe di riferimento.

## <a name="arrayreferenceoperator-operator"></a><a name="operator-call"></a>Operatore ArrayReference::operator()

Converte l'oggetto [Corrente Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) in una classe [Platform::Array.](../cppcx/platform-array-class.md)

### <a name="syntax"></a>Sintassi

```cpp
Array<TArg>^ operator ();
```

### <a name="return-value"></a>Valore restituito

Handle a oggetto di tipo `Array<TArg>^`

### <a name="remarks"></a>Osservazioni

[Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) è un modello di classe standard di C, e [Platform::Array](../cppcx/platform-array-class.md) è una classe di riferimento.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
