---
title: _makepath, _wmakepath
ms.date: 11/04/2016
apiname:
- _makepath
- _wmakepath
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
- _wmakepath
- _tmakepath
- makepath
- tmakepath
- wmakepath
- _makepath
helpviewer_keywords:
- _makepath function
- wmakepath function
- makepath function
- _tmakepath function
- paths
- _wmakepath function
- tmakepath function
ms.assetid: 5930b197-a7b8-46eb-8519-2841a58cd026
ms.openlocfilehash: 073f8aba6936aa33dafcef7ed47f5286802a4948
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62285699"
---
# <a name="makepath-wmakepath"></a>_makepath, _wmakepath

Crea un nome di percorso da componenti. Sono disponibili versioni più sicure di queste funzioni. Vedere [_makepath_s, _wmakepath_s](makepath-s-wmakepath-s.md).

## <a name="syntax"></a>Sintassi

```C
void _makepath(
   char *path,
   const char *drive,
   const char *dir,
   const char *fname,
   const char *ext
);
void _wmakepath(
   wchar_t *path,
   const wchar_t *drive,
   const wchar_t *dir,
   const wchar_t *fname,
   const wchar_t *ext
);
```

### <a name="parameters"></a>Parametri

*path*<br/>
Buffer del percorso completo.

*drive*<br/>
Contiene una lettera (A, B e così via) corrispondente all'unità desiderata e i due punti finali opzionali. **makepath** inserisce automaticamente i due punti nel percorso composto se mancante. Se *unità* viene **NULL** o punta a una stringa vuota, nessuna lettera di unità viene visualizzata nella composita *percorso* stringa.

*dir*<br/>
Contiene il percorso delle directory, escluso il designatore di unità o il nome del file effettivo. La barra finale è facoltativa e una barra (/) o una barra rovesciata (\\) o entrambe possono essere usate in un'unica *dir* argomento. Se non viene specificata una barra finale (/o \\), viene inserita automaticamente. Se *dir* viene **NULL** o punta a una stringa vuota, nessun percorso di directory viene inserito in composita *percorso* stringa.

*fname*<br/>
Contiene il nome del file di base senza alcuna estensione di nome file. Se *fname* viene **NULL** o punta a una stringa vuota, nessun nome file viene inserito in composita *percorso* stringa.

*ext*<br/>
Contiene l'estensione di nome file effettiva, con o senza un punto iniziale (.). **makepath** inserisce il punto automaticamente se non viene visualizzato nella *ext*. Se *ext* viene **NULL** o punta a una stringa vuota, nessuna estensione viene inserito in composita *percorso* stringa.

## <a name="remarks"></a>Note

Il **makepath** funzione crea una stringa di percorso composita da singoli componenti, archiviando il risultato in *percorso*. Il *percorso* potrebbe includere una lettera di unità, percorso della directory, filename ed estensione del nome file. **wmakepath** è una versione a caratteri wide di **makepath**; gli argomenti **wmakepath** sono stringhe a caratteri wide. **wmakepath** e **makepath** hanno lo stesso comportamento in caso contrario.

**Nota sulla sicurezza** Usare una stringa con terminazione Null. Per evitare sovraccarichi del buffer, la stringa con terminazione null non può superare le dimensioni dei *percorso* buffer. **makepath** non garantisce che la lunghezza della stringa di percorso composto non superi **MAX_PATH**. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/desktop/SecBP/avoiding-buffer-overruns).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tmakepath**|**_makepath**|**_makepath**|**_wmakepath**|

Il *percorso* argomento deve puntare a un buffer vuoto sufficientemente grande da contenere il percorso completo. Composita *tracciato* deve essere superiore al **MAX_PATH** costante, definita in STDLIB. h.

Se il percorso è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). È inoltre **errno** è impostata su **EINVAL**. **NULL** valori consentiti per tutti gli altri parametri.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_makepath**|\<stdlib.h>|
|**_wmakepath**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_makepath.c
#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char path_buffer[_MAX_PATH];
   char drive[_MAX_DRIVE];
   char dir[_MAX_DIR];
   char fname[_MAX_FNAME];
   char ext[_MAX_EXT];

   _makepath( path_buffer, "c", "\\sample\\crt\\", "makepath", "c" ); // C4996
   // Note: _makepath is deprecated; consider using _makepath_s instead
   printf( "Path created with _makepath: %s\n\n", path_buffer );
   _splitpath( path_buffer, drive, dir, fname, ext ); // C4996
   // Note: _splitpath is deprecated; consider using _splitpath_s instead
   printf( "Path extracted with _splitpath:\n" );
   printf( "   Drive: %s\n", drive );
   printf( "   Dir: %s\n", dir );
   printf( "   Filename: %s\n", fname );
   printf( "   Ext: %s\n", ext );
}
```

```Output
Path created with _makepath: c:\sample\crt\makepath.c

Path extracted with _splitpath:
   Drive: c:
   Dir: \sample\crt\
   Filename: makepath
   Ext: .c
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_splitpath, _wsplitpath](splitpath-wsplitpath.md)<br/>
[_makepath_s, _wmakepath_s](makepath-s-wmakepath-s.md)<br/>
