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
ms.openlocfilehash: e118d7e3cce47ebb93cef16319a8fc45aab1118b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81349947"
---
# <a name="safeintexception-class"></a>Classe SafeIntException

La classe `SafeInt` usa `SafeIntException` per identificare il motivo per cui non è stato possibile completare un'operazione matematica.

> [!NOTE]
> L'ultima versione di questa [https://github.com/dcleblanc/SafeInt](https://github.com/dcleblanc/SafeInt)libreria si trova all'indirizzo .

## <a name="syntax"></a>Sintassi

```cpp
class SafeIntException;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                    | Descrizione
------------------------------------------------------- | ------------------------------------
[SafeIntException::SafeIntException (Eccezione insicurezza](#safeintexception) | Crea un oggetto `SafeIntException`.

## <a name="remarks"></a>Osservazioni

La [classe SafeInt](../safeint/safeint-class.md) è l'unica classe che usa la classe `SafeIntException`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SafeIntException`

## <a name="requirements"></a>Requisiti

**Intestazione:** safeint.h

**Spazio dei nomi:** msl::utilities

## <a name="safeintexceptionsafeintexception"></a><a name="safeintexception"></a>SafeIntException::SafeIntException (Eccezione insicurezza

Crea un oggetto `SafeIntException`.

```cpp
SafeIntException();

SafeIntException(
   SafeIntError code
);
```

### <a name="parameters"></a>Parametri

*Codice*<br/>
[in] Valore di dati enumerato che descrive l'errore che si è verificato.

### <a name="remarks"></a>Osservazioni

I valori possibili per *code* sono definiti nel file Safeint.h. Per praticità, i valori possibili sono anche elencati qui.

- `SafeIntNoError`
- `SafeIntArithmeticOverflow`
- `SafeIntDivideByZero`
