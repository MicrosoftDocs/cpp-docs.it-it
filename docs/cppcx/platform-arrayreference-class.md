---
title: Platform::ArrayReference (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::ArrayReference::ArrayReference
helpviewer_keywords:
- Platform::ArrayReference Class
ms.assetid: 9ab3b15e-8a60-4600-8fcb-7d6c86284f4b
ms.openlocfilehash: 923f60e90517e377b99d5e29f38c48b2633c3c46
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62161571"
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

### <a name="remarks"></a>Note

Utilizzando `ArrayReference` per compilare una matrice di tipo C, puoi evitare l'operazione di copia aggiuntiva che sarebbe richiesta per la copia prima in una variabile `Platform::Array` quindi nella matrice di tipo C. Quando usi `ArrayReference`, viene effettuata un'unica operazione di copia. Per un esempio di codice, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Intestazione:** vccorlib.h

## <a name="ctor"></a>  Costruttore arrayreference:: Arrayreference

Inizializza una nuova istanza di [platform:: arrayreference](../cppcx/platform-arrayreference-class.md) classe.

### <a name="syntax"></a>Sintassi

```cpp
ArrayReference(TArg* ataArg, unsigned int sizeArg, bool needsInitArg = false);
ArrayReference(ArrayReference&& otherArg)
```

### <a name="parameters"></a>Parametri

*dataArg*<br/>
Puntatore alla matrice di dati.

*sizeArg*<br/>
Numero di elementi nella matrice di origine.

*otherArg*<br/>
Oggetto `ArrayReference` i cui dati verranno spostati per inizializzare la nuova istanza.

### <a name="remarks"></a>Note

## <a name="operator-assign"></a>  Arrayreference:: operator = (operatore)

Assegna l'oggetto specificato all'oggetto corrente [platform:: arrayreference](../cppcx/platform-arrayreference-class.md) oggetto usando la semantica di spostamento.

### <a name="syntax"></a>Sintassi

```cpp
ArrayReference& operator=(ArrayReference&& otherArg);
```

### <a name="parameters"></a>Parametri

*otherArg*<br/>
Oggetto spostato nell'oggetto `ArrayReference` corrente.

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto di tipo `ArrayReference`.

### <a name="remarks"></a>Note

`Platform::ArrayReference` è un modello di classe C++ standard, non una classe di riferimento.

## <a name="operator-call"></a>  Operatore Arrayreference

Converte l'oggetto corrente [platform:: arrayreference](../cppcx/platform-arrayreference-class.md) dell'oggetto a un [platform:: Array](../cppcx/platform-array-class.md) classe.

### <a name="syntax"></a>Sintassi

```cpp
Array<TArg>^ operator ();
```

### <a name="return-value"></a>Valore restituito

Handle a oggetto di tipo `Array<TArg>^`

### <a name="remarks"></a>Note

[Platform:: arrayreference](../cppcx/platform-arrayreference-class.md) e [platform:: Array](../cppcx/platform-array-class.md) sono classi di modelli di classe C++ standard, non ref.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
