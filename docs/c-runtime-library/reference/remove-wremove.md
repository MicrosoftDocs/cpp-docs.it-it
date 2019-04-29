---
title: remove, _wremove
ms.date: 11/04/2016
apiname:
- _wremove
- remove
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
- remove
- _wremove
- _tremove
helpviewer_keywords:
- tremove function
- _wremove function
- files [C++], deleting
- _tremove function
- files [C++], removing
- wremove function
- remove function
ms.assetid: b6345ec3-3289-4645-93a4-28b9e478cc19
ms.openlocfilehash: 05f1c5b6760520e5a982777faa903b3c5116ad05
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62357696"
---
# <a name="remove-wremove"></a>remove, _wremove

Eliminare un file.

## <a name="syntax"></a>Sintassi

```C
int remove(
   const char *path
);
int _wremove(
   const wchar_t *path
);
```

### <a name="parameters"></a>Parametri

*path*<br/>
Percorso del file da rimuovere.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce 0 se il file viene eliminato correttamente. In caso contrario, restituisce -1 e imposta **errno** al **EACCES** per indicare il percorso specifica un file di sola lettura, specifica una directory o il file è aperto, o a **ENOENT** per indicare che il nome file o percorso non è stato trovato.

Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione **remove** elimina il file specificato da *path*. **wremove** è una versione a caratteri wide di **Remove**; gli *percorso* argomento **wremove** è una stringa di caratteri "wide". **wremove** e **Rimuovi** hanno lo stesso comportamento in caso contrario. Tutti gli handle in un file devono essere chiusi prima che possano essere eliminati.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tremove**|**remove**|**remove**|**_wremove**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**remove**|\<stdio.h> o \<io.h>|
|**_wremove**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_remove.c
/* This program uses remove to delete crt_remove.txt */

#include <stdio.h>

int main( void )
{
   if( remove( "crt_remove.txt" ) == -1 )
      perror( "Could not delete 'CRT_REMOVE.TXT'" );
   else
      printf( "Deleted 'CRT_REMOVE.TXT'\n" );
}
```

### <a name="input-crtremovetxt"></a>Input: crt_remove.txt

```Input
This file will be deleted.
```

### <a name="sample-output"></a>Esempio di output

```Output
Deleted 'CRT_REMOVE.TXT'
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_unlink, _wunlink](unlink-wunlink.md)<br/>
