---
title: _unlink, _wunlink
ms.date: 11/04/2016
api_name:
- _unlink
- _wunlink
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _tunlink
- _unlink
- wunlink
- _wunlink
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
ms.openlocfilehash: 878a1b4aa009bc8528dfac1908ed26c7e3b269ae
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957385"
---
# <a name="_unlink-_wunlink"></a>_unlink, _wunlink

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

Ognuna di queste funzioni restituisce 0 in caso di esito positivo. In caso contrario, la funzione restituisce-1 e **errno** viene impostato su **EACCES**, il che indica che il percorso specifica un file di sola lettura o una directory o **ENOENT**, il che significa che il file o il percorso non è stato trovato.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione **_unlink** Elimina il file specificato da *filename*. **_wunlink** è una versione a caratteri wide di **_unlink**; l'argomento *filename* per **_wunlink** è una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tunlink**|**_unlink**|**_unlink**|**_wunlink**|

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

### <a name="input-crt_unlinktxt"></a>Input: crt_unlink.txt

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
