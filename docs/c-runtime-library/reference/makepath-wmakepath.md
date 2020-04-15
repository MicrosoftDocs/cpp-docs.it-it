---
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: b92e056816183b4bbb07edb3efec4415655d655e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81341587"
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

*Percorso*<br/>
Buffer del percorso completo.

*Guida*<br/>
Contiene una lettera (A, B e così via) corrispondente all'unità desiderata e i due punti finali opzionali. **_makepath** inserisce automaticamente i due punti nel percorso composito, se non è presente. Se *unità* è **NULL** o punta a una stringa vuota, nella stringa del *percorso* composito non viene visualizzata alcuna lettera di unità.

*dir*<br/>
Contiene il percorso delle directory, escluso il designatore di unità o il nome del file effettivo. La barra finale è facoltativa e è possibile utilizzare una\\barra (/) o una barra rovesciata ( ) o entrambe in un singolo argomento *dir.* Se non viene specificata una barra finale (/o \\), viene inserita automaticamente. Se *dir* è **NULL** o punta a una stringa vuota, nella stringa del *percorso* composito non viene inserito alcun percorso di directory.

*Fname*<br/>
Contiene il nome del file di base senza alcuna estensione di nome file. Se *fname* è **NULL** o punta a una stringa vuota, nella stringa del *percorso* composito non viene inserito alcun nome file.

*Ext*<br/>
Contiene l'estensione di nome file effettiva, con o senza un punto iniziale (.). **_makepath** inserisce automaticamente il periodo se non viene visualizzato in *ext*. Se *ext* è **NULL** o punta a una stringa vuota, non viene inserita alcuna estensione nella stringa del *percorso* composito.

## <a name="remarks"></a>Osservazioni

La funzione **_makepath** crea una stringa di percorso composita dai singoli componenti, memorizzando il risultato in *path*. Il *percorso* può includere una lettera di unità, un percorso di directory, un nome file e un'estensione del nome file. **_wmakepath** è una versione a caratteri wide di **_makepath**; gli argomenti per **_wmakepath** sono stringhe di caratteri wide. **_wmakepath** e **_makepath** si comportano in modo identico in caso contrario.

**Nota sulla sicurezza** Usare una stringa con terminazione Null. Per evitare il sovraccarico del buffer, la stringa con terminazione null non deve superare la dimensione del buffer del *percorso.* **_makepath** non garantisce che la lunghezza della stringa del percorso composito non superi **_MAX_PATH**. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tmakepath**|**_makepath**|**_makepath**|**_wmakepath**|

L'argomento *path* deve puntare a un buffer vuoto sufficientemente grande per contenere il percorso completo. Il *percorso* composito non deve essere maggiore della costante **_MAX_PATH,** definita in Stdlib.h.

Se path è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Inoltre, **errno** è impostato su **EINVAL**. **I** valori NULL sono consentiti per tutti gli altri parametri.

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

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_splitpath, _wsplitpath](splitpath-wsplitpath.md)<br/>
[_makepath_s, _wmakepath_s](makepath-s-wmakepath-s.md)<br/>
