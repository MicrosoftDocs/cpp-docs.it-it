---
title: _CrtGetReportHook
ms.date: 11/04/2016
api_name:
- _CrtGetReportHook
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
- DLLExport
topic_type:
- apiref
f1_keywords:
- CrtGetReportHook
- _CrtGetReportHook
helpviewer_keywords:
- CrtGetReportHook function
- _CrtGetReportHook function
ms.assetid: 922758ed-7edd-4359-9c92-0535192dc11a
ms.openlocfilehash: bc005dda435b5e11d6c3c886de180ed85b9c2a04
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70942395"
---
# <a name="_crtgetreporthook"></a>_CrtGetReportHook

Recupera la funzione per la creazione di report definita dal client per eseguire l'hook nel runtime di C per il processo di creazione di report sul debug (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
_CRT_REPORT_HOOK _CrtGetReportHook( void );
```

## <a name="return-value"></a>Valore restituito

Restituisce la funzione per la creazione di report corrente definita dal client.

## <a name="remarks"></a>Note

**_CrtGetReportHook** consente a un'applicazione di recuperare la funzione di creazione di report corrente per il processo di creazione di report della libreria di debug del runtime C.

Per informazioni sull'uso di altre funzioni di runtime capaci di eseguire l'hook e sulla scrittura delle funzioni di hook definite dal client, vedere [Writing Your Own Debug Hook Functions](/visualstudio/debugger/debug-hook-function-writing) (Scrittura di funzioni hook di debug).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtGetReportHook**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **_CrtSetReportHook**, vedere [report](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/report).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtSetReportHook](crtsetreporthook.md)<br/>
