---
description: 'Altre informazioni su: _chdrive'
title: _chdrive
ms.date: 4/2/2020
api_name:
- _chdrive
- _o__chdrive
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
- api-ms-win-crt-filesystem-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- chdrive
- _chdrive
helpviewer_keywords:
- drives, changing
- _chdrive function
- chdrive function
ms.assetid: 212a1a4b-4fa8-444e-9677-7fca4c8c47e3
ms.openlocfilehash: d3935c64d8ae67c72f8516e4c2d21a7a0aa6e21b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186688"
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

*unità*<br/>
Numero intero da 1 a 26 che specifica l'unità di lavoro corrente (1=A, 2=B e così via).

## <a name="return-value"></a>Valore restituito

Zero (0) se l'unità di lavoro corrente è stata modificata correttamente, in caso contrario -1.

## <a name="remarks"></a>Commenti

Se l' *unità* non è compresa nell'intervallo da 1 a 26, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione **_chdrive** restituisce-1, **errno** viene impostato su **EACCES** e **_doserrno** è impostato su **ERROR_INVALID_DRIVE**.

La funzione **_chdrive** non è thread-safe poiché dipende dalla funzione **SetCurrentDirectory** che non è a sua volta thread-safe. Per usare **_chdrive** in modo sicuro in un'applicazione multithread, è necessario includere la propria sincronizzazione dei thread. Per ulteriori informazioni, vedere [SetCurrentDirectory](/windows/win32/api/winbase/nf-winbase-setcurrentdirectory).

La funzione **_chdrive** modifica solo l'unità di lavoro corrente. **_chdir** modifica la directory di lavoro corrente.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_chdrive**|\<direct.h>|

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_getdrive](getdrive.md).

## <a name="see-also"></a>Vedi anche

[Controllo Directory](../../c-runtime-library/directory-control.md)<br/>
[_chdir, _wchdir](chdir-wchdir.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_getcwd, _wgetcwd](getcwd-wgetcwd.md)<br/>
[_getdrive](getdrive.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_rmdir, _wrmdir](rmdir-wrmdir.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
