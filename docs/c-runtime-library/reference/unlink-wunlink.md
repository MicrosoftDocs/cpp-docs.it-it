---
title: _unlink, _wunlink | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _unlink
- _wunlink
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
- _tunlink
- _unlink
- wunlink
- _wunlink
dev_langs:
- C++
helpviewer_keywords:
- files [C++], deleting
- _wunlink function
- wunlink function
- unlink function
- _unlink function
- tunlink function
- files [C++], removing
- _tunlink function
ms.assetid: 5e4f5f1b-1e99-4391-9b18-9ac63c32fae8
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 93b3551028ade7f510b94fb560e8535665677e3b
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="unlink-wunlink"></a>_unlink, _wunlink

Eliminare un file.

## <a name="syntax"></a>Sintassi

```C
int _unlink(
   const char *filename
);
int _wunlink(
   const wchar_t *filename
);
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Nome del file da rimuovere.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce 0 in caso di esito positivo. In caso contrario, la funzione restituisce -1 e imposta **errno** a **EACCES**, ovvero il percorso specifica un file di sola lettura, o a **ENOENT**, ovvero il file o percorso non viene trovato o il percorso specificato una directory.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **Unlink** funzione Elimina il file specificato da *filename*. **wunlink** è una versione a caratteri "wide" **Unlink**; il *filename* argomento **wunlink** è una stringa di caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tunlink**|**_unlink**|**_unlink**|**_wunlink**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_unlink**|\<io.h> e \<stdio.h>|
|**_wunlink**|\<io.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="code-example"></a>Esempio di codice

Questo programma usare _unlink per eliminare CRT_UNLINK. TXT.

```C
// crt_unlink.c

#include <stdio.h>

int main( void )
{
   if( _unlink( "crt_unlink.txt" ) == -1 )
      perror( "Could not delete 'CRT_UNLINK.TXT'" );
   else
      printf( "Deleted 'CRT_UNLINK.TXT'\n" );
}
```

### <a name="input-crtunlinktxt"></a>Input: crt_unlink.txt

```Input
This file will be deleted.
```

### <a name="sample-output"></a>Esempio di output

```Output
Deleted 'CRT_UNLINK.TXT'
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_close](close.md)<br/>
[remove, _wremove](remove-wremove.md)<br/>
