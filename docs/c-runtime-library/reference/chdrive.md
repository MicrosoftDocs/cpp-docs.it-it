---
title: _chdrive
ms.date: 11/04/2016
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
helpviewer_keywords:
- drives, changing
- _chdrive function
- chdrive function
ms.assetid: 212a1a4b-4fa8-444e-9677-7fca4c8c47e3
ms.openlocfilehash: 7e36867bb8237c549fd250be88a99244766920ba
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500281"
---
# <a name="_chdrive"></a>_chdrive

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

*drive*<br/>
Numero intero da 1 a 26 che specifica l'unità di lavoro corrente (1=A, 2=B e così via).

## <a name="return-value"></a>Valore restituito

Zero (0) se l'unità di lavoro corrente è stata modificata correttamente, in caso contrario -1.

## <a name="remarks"></a>Note

Se l' *unità* non è compresa nell'intervallo da 1 a 26, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione **_chdrive** restituisce-1, **errno** viene impostato su **EACCES**e **doserrno** è impostato su **ERROR_INVALID_DRIVE**.

La funzione **_chdrive** non è thread-safe poiché dipende dalla funzione **SetCurrentDirectory** che non è a sua volta thread-safe. Per usare **_chdrive** in modo sicuro in un'applicazione multithread, è necessario includere la propria sincronizzazione dei thread. Per ulteriori informazioni, vedere [SetCurrentDirectory](/windows/win32/api/winbase/nf-winbase-setcurrentdirectory).

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
