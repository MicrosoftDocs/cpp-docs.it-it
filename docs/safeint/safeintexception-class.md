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
ms.openlocfilehash: 2998bbb83fd568d7ff627d6598c32fb5b17c1e40
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65515566"
---
# <a name="safeintexception-class"></a>Classe SafeIntException

La classe `SafeInt` usa `SafeIntException` per identificare il motivo per cui non è stato possibile completare un'operazione matematica.

> [!NOTE]
> La versione più recente di questa libreria è disponibile all'indirizzo [https://github.com/dcleblanc/SafeInt](https://github.com/dcleblanc/SafeInt).

## <a name="syntax"></a>Sintassi

```cpp
class SafeIntException;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

nome                                                    | Description
------------------------------------------------------- | ------------------------------------
[SafeIntException::SafeIntException](#safeintexception) | Crea un oggetto `SafeIntException`.

## <a name="remarks"></a>Osservazioni

La [classe SafeInt](../safeint/safeint-class.md) è l'unica classe che usa la classe `SafeIntException`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SafeIntException`

## <a name="requirements"></a>Requisiti

**Intestazione:** safeint.h

**Spazio dei nomi:** msl::utilities

## <a name="safeintexception"></a>SafeIntException::SafeIntException

Crea un oggetto `SafeIntException`.

```cpp
SafeIntException();

SafeIntException(
   SafeIntError code
);
```

### <a name="parameters"></a>Parametri

*codice*<br/>
[in] Valore di dati enumerato che descrive l'errore che si è verificato.

### <a name="remarks"></a>Osservazioni

I valori possibili per *code* sono definiti nel file Safeint.h. Per praticità, i valori possibili sono anche elencati qui.

- `SafeIntNoError`
- `SafeIntArithmeticOverflow`
- `SafeIntDivideByZero`
