---
title: _CrtDbgBreak | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _CrtDbgBreak
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
- _CrtDbgBreak
- CrtDbgBreak
dev_langs:
- C++
helpviewer_keywords:
- CrtDbgBreak function
- _CrtDbgBreak function
ms.assetid: 01f8b4a2-a2c7-4e1f-9f39-e573b4a7871f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2141b3c70755eb03e77c8f66feed482b5e86b529
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="crtdbgbreak"></a>_CrtDbgBreak

Imposta un punto di interruzione su una particolare riga di codice. (Usato solo in modalità debug).

## <a name="syntax"></a>Sintassi

```C
void _CrtDbgBreak( void );
```

## <a name="return-value"></a>Valore restituito

Nessun valore restituito.

## <a name="remarks"></a>Note

Il **CrtDbgBreak** funzione imposta un punto di interruzione di debug nella riga di codice specifica in cui risiede la funzione. Questa funzione viene utilizzata solo in modalità debug e dipende **debug** viene definito in precedenza.

Per informazioni sull'uso di altre funzioni di runtime capaci di eseguire l'hook e sulla scrittura delle funzioni di hook definite dal client, vedere [Writing Your Own Debug Hook Functions](/visualstudio/debugger/debug-hook-function-writing) (Scrittura di funzioni di hook di debug).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtDbgBreak**|\<CRTDBG.h>|

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[__debugbreak](../../intrinsics/debugbreak.md)<br/>
