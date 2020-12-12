---
description: 'Altre informazioni su: feraiseexcept'
title: feraiseexcept
ms.date: 04/05/2018
api_name:
- feraiseexcept
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
api_type:
- HeaderDef
f1_keywords:
- feraiseexcept
- fenv/feraiseexcept
helpviewer_keywords:
- feraiseexcept function
ms.assetid: 87e89151-83c2-4563-9a9a-45666245d437
ms.openlocfilehash: 8e7a06006cfdc768fdaa306bc293857f1c375b90
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97124943"
---
# <a name="feraiseexcept"></a>feraiseexcept

Genera le eccezioni a virgola mobile specificate.

## <a name="syntax"></a>Sintassi

```C
int feraiseexcept(
   int excepts
);
```

### <a name="parameters"></a>Parametri

*eccetto*<br/>
Eccezioni a virgola mobile da generare.

## <a name="return-value"></a>Valore restituito

Se tutte le eccezioni specificate vengono generate correttamente, restituisce 0.

## <a name="remarks"></a>Commenti

La funzione **feraiseexcept** tenta di generare le eccezioni a virgola mobile specificate da *excepts*.   La funzione **feraiseexcept** supporta queste macro di eccezioni, definite in \<fenv.h> :

|Macro di eccezioni|Description|
|---------------------|-----------------|
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|
|FE_ALL_EXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|

L'argomento *excepts* può essere zero, uno dei valori di macro di eccezione o l'operatore OR bit per bit di due o più macro di eccezioni supportate. Se una delle macro di eccezioni specificata è FE_OVERFLOW o FE_UNDERFLOW, può essere generata l'eccezione FE_INEXACT come effetto collaterale.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

**Specifico di Microsoft:** Le eccezioni specificate in *excepts* vengono generate nell'ordine FE_INVALID, FE_DIVBYZERO, FE_OVERFLOW, FE_UNDERFLOW FE_INEXACT. Tuttavia, FE_INEXACT può essere generato quando viene generato FE_OVERFLOW o FE_UNDERFLOW, anche se non è specificato in *excepts*.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|*feraiseexcept*|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fesetexceptflag](fesetexceptflag2.md)<br/>
[feholdexcept](feholdexcept2.md)<br/>
[fetestexcept](fetestexcept1.md)<br/>
[feupdateenv](feupdateenv.md)<br/>
