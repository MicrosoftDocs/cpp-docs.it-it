---
title: fetestexcept
ms.date: 04/05/2018
api_name:
- fetestexcept
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
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fetestexcept
- fenv/fetestexcept
helpviewer_keywords:
- fetestexept function
ms.assetid: ca4dc43f-5573-440d-bc19-ead7571b13dc
ms.openlocfilehash: e70ae1b74420b8186cccd8fc8a817423df618adf
ms.sourcegitcommit: ba4180a2d79d7e391f2f705797505d4aedbc2a5e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2020
ms.locfileid: "76972152"
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

Usare la funzione fetestexcept per determinare le eccezioni generate da un'operazione a virgola mobile. Usare il parametro *excepts* per specificare i flag di stato delle eccezioni da testare. La funzione **fetestexcept** usa queste macro di eccezioni definite in \<fenv. h > in *excepts* e il valore restituito:

|Macro di eccezioni|Descrizione|
|---------------------|-----------------|
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|
|FE_ALL_EXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|

L'argomento *excepts* specificato può essere 0, una delle macro di eccezioni a virgola mobile supportate o l'operatore OR bit per bit di due o più macro. L'effetto di qualsiasi altro valore di argomento *excepts non* è definito.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti di

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fetestexcept**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[feraiseexcept](feraiseexcept.md)<br/>
