---
description: 'Altre informazioni su: costanti di errore matematico'
title: Costanti di errori matematici
ms.date: 11/04/2016
f1_keywords:
- _PLOSS
- _UNDERFLOW
- _TLOSS
- _SING
- _DOMAIN
- _OVERFLOW
helpviewer_keywords:
- _TLOSS constant
- _SING constant
- PLOSS constant
- UNDERFLOW constant
- _UNDERFLOW constant
- _OVERFLOW constant
- DOMAIN constant
- OVERFLOW constant
- TLOSS constant
- SING constant
- _DOMAIN constant
- _PLOSS constant
- math error constants
ms.assetid: 4be933a6-674e-45a5-8ac9-090023542f5b
ms.openlocfilehash: e5f94f94a28543f0405cce57941a872c416d0c20
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258746"
---
# <a name="math-error-constants"></a>Costanti di errori matematici

## <a name="syntax"></a>Sintassi

```
#include <math.h>
```

## <a name="remarks"></a>Osservazioni

Le routine matematiche della libreria di runtime possono generare costanti di errori matematici.

Questi errori, descritti di seguito, corrispondono ai tipi di eccezione definiti in MATH.H e vengono restituiti dalla funzione `_matherr` quando si verifica un errore matematico.

|Costante|Significato|
|--------------|-------------|
|`_DOMAIN`|L'argomento alla funzione è esterno al dominio della funzione.|
|`_OVERFLOW`|Il risultato è troppo grande per essere rappresentato nel tipo restituito della funzione.|
|`_PLOSS`|Si è verificata una perdita parziale di significato.|
|`_SING`|Singolarità dell'argomento: l'argomento a funzione contiene un valore non valido. (Ad esempio, viene passato il valore 0 alla funzione che richiede un valore diverso da zero).|
|`_TLOSS`|Si è verificata una perdita totale di significato.|
|`_UNDERFLOW`|Il risultato è troppo piccolo per essere rappresentato.|

## <a name="see-also"></a>Vedi anche

[_matherr](../c-runtime-library/reference/matherr.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
