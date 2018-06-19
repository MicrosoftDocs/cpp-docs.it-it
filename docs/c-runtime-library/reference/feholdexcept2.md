---
title: feholdexcept | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- feholdexcept
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
- feholdexcept
- fenv/feholdexcept
dev_langs:
- C++
helpviewer_keywords:
- feholdexcept function
ms.assetid: 88e512ae-b5d8-452c-afe9-c824cd3ef1d8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6250de98b2eb3f8cc8c475d341c1d63a79262362
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32397542"
---
# <a name="feholdexcept"></a>feholdexcept

Salva l'ambiente a virgola mobile corrente nell'oggetto specificato, cancella i flag di stato a virgola mobile e, se possibile, inserisce l'ambiente a virgola mobile in modalità senza interruzioni.

## <a name="syntax"></a>Sintassi

```C
int feholdexcept(
   fenv_t *penv
);
```

### <a name="parameters"></a>Parametri

*penv*<br/>
Puntatore a un **fenv_t** oggetto che contiene una copia dell'ambiente a virgola mobile.

## <a name="return-value"></a>Valore restituito

Restituisce zero se e solo se la funzione è in grado di attivare correttamente la gestione delle eccezioni a virgola mobile non significative.

## <a name="remarks"></a>Note

Il **feholdexcept** funzione viene utilizzata per archiviare lo stato dell'ambiente punto Mobile corrente nel **fenv_t** oggetto a cui punta *penv*e per impostare l'ambiente non interrompere l'esecuzione in caso di eccezioni a virgola mobile. Questa attività è nota come modalità senza interruzioni.  Questa modalità continua fino a quando l'ambiente viene ripristinato tramite [fesetenv](fesetenv1.md) o [feupdateenv](feupdateenv.md).

È possibile usare questa funzione all'inizio di una subroutine che deve nascondere uno o più eccezioni a virgola mobile dal chiamante. Per segnalare un'eccezione, è possibile eliminare semplicemente le eccezioni indesiderate mediante [feclearexcept,](feclearexcept1.md) e quindi terminare la modalità di interruzione non con una chiamata a **feupdateenv**.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**feholdexcept**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[fesetenv](fesetenv1.md)<br/>
[feupdateenv](feupdateenv.md)<br/>
