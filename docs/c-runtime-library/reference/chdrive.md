---
title: _chdrive | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _chdrive
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
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- chdrive
- _chdrive
dev_langs:
- C++
helpviewer_keywords:
- drives, changing
- _chdrive function
- chdrive function
ms.assetid: 212a1a4b-4fa8-444e-9677-7fca4c8c47e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6b6d8d53ea3b7331de08ea2aa2a00e5fdfb106c8
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43684323"
---
# <a name="chdrive"></a>_chdrive

Modifica l'unità di lavoro corrente.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _chdrive(
   int drive
);
```

### <a name="parameters"></a>Parametri

*Unità*<br/>
Numero intero da 1 a 26 che specifica l'unità di lavoro corrente (1=A, 2=B e così via).

## <a name="return-value"></a>Valore restituito

Zero (0) se l'unità di lavoro corrente è stata modificata correttamente, in caso contrario -1.

## <a name="remarks"></a>Note

Se *unità* è non compresa nell'intervallo da 1a 26, viene richiamato il gestore di parametri non validi come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la **ChDrive** funzione restituisce -1, **errno** è impostata su **EACCES**, e **doserrno** è impostato su  **ERROR_INVALID_DRIVE**.

La funzione **_chdrive** non è thread-safe poiché dipende dalla funzione **SetCurrentDirectory** che non è a sua volta thread-safe. Per usare **_chdrive** in modo sicuro in un'applicazione multithread, è necessario includere la propria sincronizzazione dei thread. Per altre informazioni, vedere [SetCurrentDirectory](/windows/desktop/api/winbase/nf-winbase-setcurrentdirectory).

La funzione **_chdrive** modifica solo l'unità di lavoro corrente. **_chdir** modifica la directory di lavoro corrente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_chdrive**|\<direct.h>|

Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_getdrive](getdrive.md).

## <a name="see-also"></a>Vedere anche

[Controllo delle directory](../../c-runtime-library/directory-control.md)<br/>
[_chdir, _wchdir](chdir-wchdir.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_getcwd, _wgetcwd](getcwd-wgetcwd.md)<br/>
[_getdrive](getdrive.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_rmdir, _wrmdir](rmdir-wrmdir.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
