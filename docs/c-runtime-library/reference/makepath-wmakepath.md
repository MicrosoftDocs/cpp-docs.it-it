---
title: _makepath, _wmakepath | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- _makepath function
- wmakepath function
- makepath function
- _tmakepath function
- paths
- _wmakepath function
- tmakepath function
ms.assetid: 5930b197-a7b8-46eb-8519-2841a58cd026
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c339ce6ad67186dc7a4f43d7006c5beb047c8f90
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32404952"
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

*percorso* buffer del percorso completo.

*unità* contiene una lettera (A, B e così via) corrispondente all'unità desiderata e due punti finali facoltativi. **makepath** inserisce automaticamente i due punti nel percorso composto se mancante. Se *unità* viene **NULL** o punta a una stringa vuota, nessuna lettera di unità viene visualizzata in composita *percorso* stringa.

*dir* contiene il percorso della directory, escluso il designatore di unità o il nome del file effettivo. La barra finale è facoltativa e una barra (/) o una barra rovesciata (\\) o entrambe può essere utilizzate in una singola *dir* argomento. Se non viene specificata una barra finale (/o \\), viene inserita automaticamente. Se *dir* viene **NULL** o punta a una stringa vuota, nessun percorso di directory viene inserito nella composizione *percorso* stringa.

*fname* contiene il nome del file di base senza alcuna estensione di nome file. Se *fname* viene **NULL** o punta a una stringa vuota, nessun nome file viene inserito nella composizione *percorso* stringa.

*ext* contiene l'estensione di nome file effettiva, con o senza un punto iniziale (.). **makepath** inserisce il punto automaticamente se non viene visualizzato *ext*. Se *ext* viene **NULL** o punta a una stringa vuota, nessuna estensione viene inserita nella composizione *percorso* stringa.

## <a name="remarks"></a>Note

Il **makepath** funzione crea una stringa di percorso composita da singoli componenti, archiviando il risultato in *percorso*. Il *percorso* potrebbe includere una lettera di unità, percorso della directory, filename ed estensione del nome file. **wmakepath** è una versione a caratteri wide **makepath**; gli argomenti da **wmakepath** sono stringhe a caratteri "wide". **wmakepath** e **makepath** si comportano in modo identico in caso contrario.

**Nota sulla sicurezza** Usare una stringa con terminazione Null. Per evitare sovraccarichi del buffer, la stringa con terminazione null non deve superare le dimensioni del *percorso* buffer. **makepath** non garantisce che non superi la lunghezza della stringa di percorso composita **MAX_PATH**. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tmakepath**|**_makepath**|**_makepath**|**_wmakepath**|

Il *percorso* argomento deve puntare a un buffer vuoto sufficientemente grande da contenere il percorso completo. Composita *percorso* deve essere più grande di **MAX_PATH** costante, definita in STDLIB. h.

Se è percorso **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Inoltre, **errno** è impostata su **EINVAL**. **NULL** sono consentiti valori per tutti gli altri parametri.

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
