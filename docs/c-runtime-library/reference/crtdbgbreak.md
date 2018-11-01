---
title: _CrtDbgBreak
ms.date: 11/04/2016
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
helpviewer_keywords:
- CrtDbgBreak function
- _CrtDbgBreak function
ms.assetid: 01f8b4a2-a2c7-4e1f-9f39-e573b4a7871f
ms.openlocfilehash: 4cf64daaea3193f7cf6b3aaa0b1aab031f104704
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50478301"
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

Il **CrtDbgBreak** funzione imposta un punto di interruzione di debug per il particolare riga di codice in cui risiede la funzione. Questa funzione viene usata solo in modalità debug e dipende **debug** definito in precedenza.

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
