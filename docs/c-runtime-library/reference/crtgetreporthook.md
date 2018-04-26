---
title: _CrtGetReportHook | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _CrtGetReportHook
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
apitype: DLLExport
f1_keywords:
- CrtGetReportHook
- _CrtGetReportHook
dev_langs:
- C++
helpviewer_keywords:
- CrtGetReportHook function
- _CrtGetReportHook function
ms.assetid: 922758ed-7edd-4359-9c92-0535192dc11a
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4b1e499b1663cbde3bcaa0a01a26e96d544ca390
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="crtgetreporthook"></a>_CrtGetReportHook

Recupera la funzione per la creazione di report definita dal client per eseguire l'hook nel runtime di C per il processo di creazione di report sul debug (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
_CRT_REPORT_HOOK _CrtGetReportHook( void );
```

## <a name="return-value"></a>Valore restituito

Restituisce la funzione per la creazione di report corrente definita dal client.

## <a name="remarks"></a>Note

**Crtgetreporthook** consente a un'applicazione recuperare la funzione di segnalazione corrente per la libreria di debug del runtime C processo di segnalazione.

Per informazioni sull'uso di altre funzioni di runtime capaci di eseguire l'hook e sulla scrittura delle funzioni di hook definite dal client, vedere [Writing Your Own Debug Hook Functions](/visualstudio/debugger/debug-hook-function-writing) (Scrittura di funzioni hook di debug).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtGetReportHook**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo **CrtSetReportHook**, vedere [report](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/report).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtSetReportHook](crtsetreporthook.md)<br/>
