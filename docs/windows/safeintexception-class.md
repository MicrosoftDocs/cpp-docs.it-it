---
title: Classe SafeIntException
ms.date: 10/22/2018
ms.topic: reference
f1_keywords:
- SafeIntException Class
- SafeIntException
- SafeIntException.SafeIntException
- SafeIntException::SafeIntException
helpviewer_keywords:
- SafeIntException class
- SafeIntException, constructor
ms.assetid: 88bef958-1f48-4d55-ad4f-d1f9581a293a
ms.openlocfilehash: 80a1573c2f43b1f4b31731083974f87ba389fac2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50566660"
---
# <a name="safeintexception-class"></a>Classe SafeIntException

Il `SafeInt` utilizzato dalla classe `SafeIntException` per identificare il motivo per cui non è possibile completare un'operazione matematica.

> [!NOTE]
> La versione più recente di questa libreria è disponibile all'indirizzo [ https://github.com/dcleblanc/SafeInt ](https://github.com/dcleblanc/SafeInt).

## <a name="syntax"></a>Sintassi

```cpp
class SafeIntException;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                    | Descrizione
------------------------------------------------------- | ------------------------------------
[SafeIntException::SafeIntException](#safeintexception) | Crea un oggetto `SafeIntException`.

## <a name="remarks"></a>Note

Il [classe SafeInt](../windows/safeint-class.md) è l'unica classe che utilizza il `SafeIntException` classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SafeIntException`

## <a name="requirements"></a>Requisiti

**Intestazione:** SafeInt. h

**Namespace:** MSL:: Utilities

## <a name="safeintexception"></a>SafeIntException:: SafeIntException

Crea un oggetto `SafeIntException`.

```cpp
SafeIntException();

SafeIntException(
   SafeIntError code
);
```

### <a name="parameters"></a>Parametri

*codice*<br/>
[in] Un valore di dati enumerato che descrive l'errore che si sono verificati.

### <a name="remarks"></a>Note

I valori possibili per *codice* sono definiti nel file di SafeInt. h. Per praticità, i valori possibili sono inoltre elencati di seguito.

- `SafeIntNoError`
- `SafeIntArithmeticOverflow`
- `SafeIntDivideByZero`
