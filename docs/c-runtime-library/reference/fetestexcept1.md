---
title: fetestexcept
ms.date: 04/05/2018
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
helpviewer_keywords:
- fetestexept function
ms.assetid: ca4dc43f-5573-440d-bc19-ead7571b13dc
ms.openlocfilehash: ed75ab0ff13029f6ec10c1aafbcb7f7b23b46fd6
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51521363"
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

*tranne che ai*<br/>
OR bit per bit dei flag di stato a virgola mobile da testare.

## <a name="return-value"></a>Valore restituito

Se l'esito è positivo, restituisce una maschera di bit che contiene OR bit per bit delle macro di eccezioni a virgola mobile che corrispondono ai flag di stato delle eccezioni attualmente impostati. Restituisce 0 se non è impostata nessuna eccezione.

## <a name="remarks"></a>Note

Usare la funzione fetestexcept per determinare le eccezioni generate da un'operazione a virgola mobile. Usare la *eccetto* parametro per specificare quali flag di stato di eccezione da testare. Il **fetestexcept** funzione vengono utilizzate queste macro di eccezioni definite nelle \<fenv. h > in *eccetto* e il valore restituito:

|Macro di eccezioni|Descrizione|
|---------------------|-----------------|
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|
|FE_ALLEXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|

L'oggetto specificato *eccetto* argomento può essere 0, una delle macro di eccezioni a virgola mobile supportate o bit per bit di due o più macro. L'effetto di qualsiasi altra *eccetto* valore dell'argomento non è definito.

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
