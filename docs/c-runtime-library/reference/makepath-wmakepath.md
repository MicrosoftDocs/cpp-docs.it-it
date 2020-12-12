---
description: 'Altre informazioni su: _makepath, _wmakepath'
title: _makepath, _wmakepath
ms.date: 4/2/2020
api_name:
- _makepath
- _wmakepath
- _o__makepath
- _o__wmakepath
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
ms.openlocfilehash: 2193c9fafdfea5fbacfef69256e5fd1fbfaf9828
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299839"
---
# <a name="_makepath-_wmakepath"></a>_makepath, _wmakepath

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

*unità*<br/>
Contiene una lettera (A, B e così via) corrispondente all'unità desiderata e i due punti finali opzionali. **_makepath** inserisce i due punti automaticamente nel percorso composito, se mancante. Se l' *unità* è **null** o punta a una stringa vuota, nessuna lettera di unità viene visualizzata nella stringa del *percorso* composito.

*dir*<br/>
Contiene il percorso delle directory, escluso il designatore di unità o il nome del file effettivo. La barra finale è facoltativa e una barra (/) o una barra rovesciata ( \\ ) o entrambe possono essere usate in un unico argomento *dir* . Se non viene specificata una barra finale (/o \\), viene inserita automaticamente. Se *dir* è **null** o punta a una stringa vuota, nessun percorso di directory viene inserito nella stringa del *percorso* composito.

*fname*<br/>
Contiene il nome del file di base senza alcuna estensione di nome file. Se *fname* è **null** o punta a una stringa vuota, nessun nome file viene inserito nella stringa del *percorso* composito.

*EXT*<br/>
Contiene l'estensione di nome file effettiva, con o senza un punto iniziale (.). **_makepath** inserisce il punto automaticamente se non viene visualizzato in *ext*. Se *ext* è **null** o punta a una stringa vuota, nessuna estensione viene inserita nella stringa del *percorso* composito.

## <a name="remarks"></a>Commenti

La funzione **_makepath** crea una stringa di percorso composita da singoli componenti, archiviando il risultato in *path*. Il *percorso* potrebbe includere una lettera di unità, un percorso di directory, un nome file e un'estensione del nome file. **_wmakepath** è una versione a caratteri wide di **_makepath**; gli argomenti da **_wmakepath** sono stringhe a caratteri wide. **_wmakepath** e **_makepath** si comportano in modo identico.

**Nota sulla sicurezza** Usare una stringa con terminazione Null. Per evitare il sovraccarico del buffer, la stringa con terminazione null non deve superare la dimensione del buffer del *percorso* . **_makepath** non garantisce che la lunghezza della stringa del percorso composito non superi **_MAX_PATH**. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tmakepath**|**_makepath**|**_makepath**|**_wmakepath**|

L'argomento *path* deve puntare a un buffer vuoto sufficientemente grande da mantenere il percorso completo. Il *percorso* composito non deve essere maggiore della costante **_MAX_PATH** , definito in STDLIB. h.

Se path è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). **Errno** è inoltre impostato su **EINVAL**. Sono consentiti valori **null** per tutti gli altri parametri.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_makepath**|\<stdlib.h>|
|**_wmakepath**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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
