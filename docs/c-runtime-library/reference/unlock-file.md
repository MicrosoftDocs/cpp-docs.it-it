---
title: _unlock_file
ms.date: 11/04/2016
apiname:
- _unlock_file
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
- _unlock_file
- unlock_file
helpviewer_keywords:
- files [C++], unlocking
- unlock_file function
- _unlock_file function
- unlocking files
ms.assetid: cf380a51-6d3a-4f38-bd64-2d4fb57b4369
ms.openlocfilehash: e3d11cbd59ef5846b33908ae6b6c40d7ea6125e8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62353547"
---
# <a name="unlockfile"></a>_unlock_file

Sblocca un file, consentendo ad altri processi di accedere al file.

## <a name="syntax"></a>Sintassi

```C
void _unlock_file(
   FILE* file
);
```

### <a name="parameters"></a>Parametri

*file*<br/>
Handle di file.

## <a name="remarks"></a>Note

Il **unlock_file** funzione Sblocca il file specificato da *file*. Lo sblocco di un file consente l'accesso al file da altri processi. Questa funzione non deve essere chiamata solo se **lock_file** in precedenza è stato chiamato sulle *file* puntatore. La chiamata **unlock_file** su un file che non sia bloccato può causare un deadlock. Per un esempio, vedere [_lock_file](lock-file.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_unlock_file**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_lock_file](lock-file.md)<br/>
