---
title: Gestione di file | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.files
dev_langs:
- C++
helpviewer_keywords:
- files [C++], handling
- files [C++], opening
- files [C++], manipulating
ms.assetid: 48119e2e-e94f-4602-b08b-b72440f731d8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a54e0ba354e76996d03503e116008aa200b0905b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43199357"
---
# <a name="file-handling"></a>Gestione di file

Usare queste routine per creare, eliminare e modificare file e per impostate e verificare le autorizzazioni di accesso ai file.

Le librerie di runtime C presentano un limite di 512 per il numero di file che è possibile aprire in qualsiasi momento. Se si cerca di aprire un numero di descrittori di file o di flussi di file superiore al massimo consentito, viene generato un errore di programma. Usare [_setmaxstdio](../c-runtime-library/reference/setmaxstdio.md) per modificare questo numero.

## <a name="file-handling-routines-file-descriptor"></a>Routine di gestione dei file (descrittore di file)

Queste routine operano sui file designati da un descrittore di file.

|Routine|Usare|
|-------------|---------|
|[_chsize](../c-runtime-library/reference/chsize.md),[_chsize_s](../c-runtime-library/reference/chsize-s.md)|Modifica la dimensione del file|
|[_filelength, _filelengthi64](../c-runtime-library/reference/filelength-filelengthi64.md)|Ottiene la lunghezza del file|
|[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)|Ottiene informazioni sullo stato dei file sul descrittore|
|[_get_osfhandle](../c-runtime-library/reference/get-osfhandle.md)|Restituisce un handle di file del sistema operativo associato al descrittore di file di runtime C esistente|
|[_isatty](../c-runtime-library/reference/isatty.md)|Verifica il dispositivo a caratteri|
|[_locking](../c-runtime-library/reference/locking.md)|Blocca le aree del file|
|[_open_osfhandle](../c-runtime-library/reference/open-osfhandle.md)|Associa un descrittore di file di runtime C con una handle di file del sistema operativo esistente|
|[_setmode](../c-runtime-library/reference/setmode.md)|Imposta la modalità di conversione di file|

## <a name="file-handling-routines-path-or-filename"></a>Routine di gestione dei file (percorso o filename)

Queste routine operano sui file specificati da un percorso o nome file.

|Routine|Usa|
|-------------|---------|
|[_access, _waccess](../c-runtime-library/reference/access-waccess.md), [_access_s, _waccess_s](../c-runtime-library/reference/access-s-waccess-s.md)|Verifica l'impostazione di autorizzazione file|
|[_chmod, _wchmod](../c-runtime-library/reference/chmod-wchmod.md)|Modifica l'impostazione di autorizzazione file|
|[_fullpath, _wfullpath](../c-runtime-library/reference/fullpath-wfullpath.md)|Espande un percorso relativo al relativo nome del percorso assoluto|
|[_makepath, _wmakepath](../c-runtime-library/reference/makepath-wmakepath.md), [_makepath_s, _wmakepath_s](../c-runtime-library/reference/makepath-s-wmakepath-s.md)|Unisce i componenti del percorso in un singolo percorso completo|
|[_mktemp, _wmktemp](../c-runtime-library/reference/mktemp-wmktemp.md), [_mktemp_s, _wmktemp_s](../c-runtime-library/reference/mktemp-s-wmktemp-s.md)|Crea un filename univoco|
|[remove, _wremove](../c-runtime-library/reference/remove-wremove.md)|Elimina file|
|[rename, _wrename](../c-runtime-library/reference/rename-wrename.md)|Rinomina un file|
|[_splitpath, _wsplitpath](../c-runtime-library/reference/splitpath-wsplitpath.md), [_splitpath_s, _wsplitpath_s](../c-runtime-library/reference/splitpath-s-wsplitpath-s.md)|Analizza il percorso in componenti|
|[_stat, _stat64, _stati64, _wstat, _wstat64, _wstati64](../c-runtime-library/reference/stat-functions.md)|Ottiene informazioni sullo stato dei file sul file denominato|
|[_umask](../c-runtime-library/reference/umask.md), [_umask_s](../c-runtime-library/reference/umask-s.md)|Imposta la maschera di autorizzazioni predefinite per i nuovi file creati dal programma|
|[_unlink, _wunlink](../c-runtime-library/reference/unlink-wunlink.md)|Elimina file|

## <a name="file-handling-routines-open-file"></a>Routine di gestione dei file (aprire file)

Queste routine aprono i file.

|Routine|Usa|
|-------------|---------|
|[fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md), [fopen_s, _wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md)|Apre un file e restituisce un puntatore al file aperto.|
|[_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)|Aprire un flusso con condivisione di file e restituisce un puntatore al file aperto.|
|[_open, _wopen](../c-runtime-library/reference/open-wopen.md)|Apre un file e restituisce un descrittore del file al file aperto.|
|[_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md), [_sopen_s, _wsopen_s](../c-runtime-library/reference/sopen-s-wsopen-s.md)|Apri un file con la condivisione di file e restituisce un descrittore del file al file aperto.|
|[_pipe](../c-runtime-library/reference/pipe.md)|Crea un pipe per la lettura e la scrittura.|
|[freopen, _wfreopen](../c-runtime-library/reference/freopen-wfreopen.md), [freopen_s, _wfreopen_s](../c-runtime-library/reference/freopen-s-wfreopen-s.md)|Riassegna un puntatore del file.|

Queste routine consentono di modificare la rappresentazione del file tra una struttura `FILE`, un descrittore di file e un handle di file Win32.

|Routine|Usa|
|-------------|---------|
|[_fdopen, _wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)|Associa un flusso a un file che è stato precedentemente aperto per I/O di basso livello e restituisce un puntatore al flusso aperto.|
|[_fileno](../c-runtime-library/reference/fileno.md)|Ottenere il descrittore di file associato al flusso.|
|[_get_osfhandle](../c-runtime-library/reference/get-osfhandle.md)|Restituisce un handle di file del sistema operativo associato al descrittore di file di runtime C esistente|
|[_open_osfhandle](../c-runtime-library/reference/open-osfhandle.md)|Associa un descrittore di file di runtime C con un handle di file del sistema operativo esistente.|

 Le funzioni Win32 seguenti aprono anche file e pipe:

- [CreateFile](/windows/desktop/api/fileapi/nf-fileapi-createfilea)

- [CreatePipe](https://msdn.microsoft.com/library/windows/desktop/aa365152.aspx)

- [CreateNamedPipe](/windows/desktop/api/winbase/nf-winbase-createnamedpipea)

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
[Controllo delle directory](../c-runtime-library/directory-control.md)<br/>
[Chiamate di sistema](../c-runtime-library/system-calls.md)<br/>
