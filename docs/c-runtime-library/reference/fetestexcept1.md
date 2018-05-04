---
title: fetestexcept | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- fetestexcept
apilocation:
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- fetestexcept
- fenv/fetestexcept
dev_langs:
- C++
helpviewer_keywords:
- fetestexept function
ms.assetid: ca4dc43f-5573-440d-bc19-ead7571b13dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0450fcaddf8ca05484d0b2bd122ff006eb8355f1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fetestexcept"></a>fetestexcept

Determina quali flag di stato delle eccezioni a virgola mobile specificati sono attualmente impostati.

## <a name="syntax"></a>Sintassi

```C
int fetestexcept(
   int excepts
);

```

### <a name="parameters"></a>Parametri

*excepts*<br/>
OR bit per bit dei flag di stato a virgola mobile da testare.

## <a name="return-value"></a>Valore restituito

Se l'esito è positivo, restituisce una maschera di bit che contiene OR bit per bit delle macro di eccezioni a virgola mobile che corrispondono ai flag di stato delle eccezioni attualmente impostati. Restituisce 0 se non è impostata nessuna eccezione.

## <a name="remarks"></a>Note

Usare la funzione fetestexcept per determinare le eccezioni generate da un'operazione a virgola mobile. Usare la *excepts* parametro per specificare i flag di stato eccezione da testare. Il **fetestexcept** funzione vengono utilizzate queste macro delle eccezioni definite in \<fenv. h > in *excepts* e il valore restituito:

|Macro di eccezioni|Descrizione|
|---------------------|-----------------|
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|
|FE_ALLEXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|

L'oggetto specificato *excepts* argomento può essere 0, una delle macro eccezioni a virgola mobile supportati o bit per bit o di due o più delle macro. L'effetto di eventuali altri *excepts* valore dell'argomento non è definito.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fetestexcept**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[feraiseexcept](feraiseexcept.md)<br/>
