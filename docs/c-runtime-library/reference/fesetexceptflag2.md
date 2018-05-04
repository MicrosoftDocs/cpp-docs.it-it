---
title: fesetexceptflag | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- fesetexceptflag
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
- fesetexceptflag
- fenv/fesetexceptflag
dev_langs:
- C++
helpviewer_keywords:
- fesetexceptflag function
ms.assetid: 2f7dad77-9e54-4097-a3e3-35176ace4de5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eef8ba1c91e6db4f0d620ef820a6487b3b17e649
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fesetexceptflag"></a>fesetexceptflag

Imposta i flag di stato a virgola mobile specificati nell'ambiente corrente a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
int fesetexceptflag(
     const fexcept_t *pstatus,
     int excepts
);
```

### <a name="parameters"></a>Parametri

*pstatus*<br/>
Puntatore a un **fexcept_t** oggetto contenente i valori per impostare l'eccezione flag di stato. L'oggetto può essere impostato da una precedente chiamata a [fegetexceptflag](fegetexceptflag2.md).

*excepts*<br/>
Flag di stato delle eccezioni a virgola mobile da impostare.

## <a name="return-value"></a>Valore restituito

Se tutti i flag di stato delle eccezioni specificati sono impostati correttamente, restituisce 0. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Note

Il **fesetexceptflag** funzione imposta lo stato di flag di stato eccezione a virgola mobile specificato da *excepts* ai corrispondenti valori impostati **fexcept_t** oggetto a cui punta *pstatus*.  Non genera l'eccezione. Il *pstatus* puntatore deve puntare a un valore valido **fexcept_t** oggetto o il comportamento successive non è definito. Il **fesetexceptflag** funzione supporta questi valori di macro eccezioni nella *excepts*, definita in \<fenv. h >:

|Macro di eccezioni|Descrizione|
|---------------------|-----------------|
|FE_DIVBYZERO|Si è verificato un errore di singolarità o polo in un'operazione precedente a virgola mobile. È stato creato un valore di infinità.|
|FE_INEXACT|La funzione è stata forzata ad arrotondare il risultato archiviato di un'operazione precedente a virgola mobile.|
|FE_INVALID|Si è verificato un errore di dominio in un'operazione precedente a virgola mobile.|
|FE_OVERFLOW|Si è verificato un errore di intervallo. Un risultato dell'operazione precedente a virgola mobile era troppo grande per essere rappresentato.|
|FE_UNDERFLOW|Un risultato dell'operazione precedente a virgola mobile era troppo piccolo per essere rappresentato con la massima precisione. È stato creato un valore denormalizzato.|
|FE_ALLEXCEPT|OR bit per bit di tutte le eccezioni a virgola mobile supportate.|

Il *excepts* argomento può essere uguale a zero, una delle macro eccezioni a virgola mobile supportati o bit per bit o di due o più delle macro. L'effetto di qualsiasi altro valore di argomento non è definito.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fesetexceptflag**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fegetexceptflag](fegetexceptflag2.md)<br/>
