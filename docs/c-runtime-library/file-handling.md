---
title: Gestione di file | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.files
dev_langs:
- C++
helpviewer_keywords:
- files [C++], handling
- files [C++], opening
- files [C++], manipulating
ms.assetid: 48119e2e-e94f-4602-b08b-b72440f731d8
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 28ee6adcd86814d5804e0d9d34dd27a3c6d22f71
ms.lasthandoff: 02/24/2017

---
# <a name="file-handling"></a>Gestione di file
Usare queste routine per creare, eliminare e modificare file e per impostate e verificare le autorizzazioni di accesso ai file.  
  
 Le librerie di runtime C presentano un limite di 512 per il numero di file che è possibile aprire in qualsiasi momento. Se si cerca di aprire un numero di descrittori di file o di flussi di file superiore al massimo consentito, viene generato un errore di programma. Usare [_setmaxstdio](../c-runtime-library/reference/setmaxstdio.md) per modificare questo numero.  
  
 Le routine seguenti operano sui file designati da un descrittore di file.  
  
### <a name="file-handling-routines-file-descriptor"></a>Routine di gestione dei file (descrittore di file)  
  
|Routine|Uso|Equivalente .NET Framework|  
|-------------|---------|-------------------------------|  
|[_chsize](../c-runtime-library/reference/chsize.md),[_chsize_s](../c-runtime-library/reference/chsize-s.md)|Modifica la dimensione del file|[System::IO::Stream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.stream.setlength.aspx), [System::IO::FileStream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.filestream.setlength.aspx)|  
|[_filelength, _filelengthi64](../c-runtime-library/reference/filelength-filelengthi64.md)|Ottiene la lunghezza del file|[System::IO::Stream::Length](https://msdn.microsoft.com/en-us/library/system.io.stream.length.aspx), [System::IO::FileStream::Length](https://msdn.microsoft.com/en-us/library/system.io.filestream.length.aspx)|  
|[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)|Ottiene informazioni sullo stato dei file sul descrittore|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_get_osfhandle](../c-runtime-library/reference/get-osfhandle.md)|Restituisce un handle di file del sistema operativo associato al descrittore di file di runtime C esistente|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_isatty](../c-runtime-library/reference/isatty.md)|Verifica il dispositivo a caratteri|[System::IO::Stream::CanWrite](https://msdn.microsoft.com/en-us/library/system.io.filestream.canwrite.aspx), [System::IO::FileStream::CanWrite](https://msdn.microsoft.com/en-us/library/system.io.stream.canwrite.aspx)|  
|[_locking](../c-runtime-library/reference/locking.md)|Blocca le aree del file|[System::IO::FileStream::Lock](https://msdn.microsoft.com/en-us/library/system.io.filestream.lock.aspx)|  
|[_open_osfhandle](../c-runtime-library/reference/open-osfhandle.md)|Associa un descrittore di file di runtime C con una handle di file del sistema operativo esistente|[System::IO::FileStream::Handle](https://msdn.microsoft.com/en-us/library/system.io.filestream.handle.aspx)|  
|[_setmode](../c-runtime-library/reference/setmode.md)|Imposta la modalità di conversione di file|[System::IO::BinaryReader Class](https://msdn.microsoft.com/en-us/library/system.io.binaryreader.aspx), [System::IO::TextReader Class](https://msdn.microsoft.com/en-us/library/system.io.textreader.aspx)|  
  
 Le routine seguenti operano sui file specificati da un percorso o un filename.  
  
### <a name="file-handling-routines-path-or-filename"></a>Routine di gestione dei file (percorso o filename)  
  
|Routine|Uso|Equivalente .NET Framework|  
|-------------|---------|-------------------------------|  
|[_access, _waccess](../c-runtime-library/reference/access-waccess.md), [_access_s, _waccess_s](../c-runtime-library/reference/access-s-waccess-s.md)|Verifica l'impostazione di autorizzazione file|[Enumerazione System::IO::FileAccess](https://msdn.microsoft.com/en-us/library/4z36sx0f.aspx)|  
|[_chmod, _wchmod](../c-runtime-library/reference/chmod-wchmod.md)|Modifica l'impostazione di autorizzazione file|[System::IO::File::SetAttributes](https://msdn.microsoft.com/en-us/library/system.io.file.setattributes.aspx), [System::Security::Permissions::FileIOPermission](https://msdn.microsoft.com/en-us/library/system.security.permissions.fileiopermission.aspx)|  
|[_fullpath, _wfullpath](../c-runtime-library/reference/fullpath-wfullpath.md)|Espande un percorso relativo al relativo nome del percorso assoluto|[System::IO::File::Create](https://msdn.microsoft.com/en-us/library/system.io.file.create.aspx)|  
|[_makepath, _wmakepath](../c-runtime-library/reference/makepath-wmakepath.md), [_makepath_s, _wmakepath_s](../c-runtime-library/reference/makepath-s-wmakepath-s.md)|Unisce i componenti del percorso in un singolo percorso completo|[System::IO::File::Create](https://msdn.microsoft.com/en-us/library/system.io.file.create.aspx)|  
|[_mktemp, _wmktemp](../c-runtime-library/reference/mktemp-wmktemp.md), [_mktemp_s, _wmktemp_s](../c-runtime-library/reference/mktemp-s-wmktemp-s.md)|Crea un filename univoco|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[remove, _wremove](../c-runtime-library/reference/remove-wremove.md)|Elimina file|[System::IO::File::Delete](https://msdn.microsoft.com/en-us/library/system.io.file.delete.aspx)|  
|[rename, _wrename](../c-runtime-library/reference/rename-wrename.md)|Rinomina un file|[System::IO::File::Move](https://msdn.microsoft.com/en-us/library/system.io.file.move.aspx)|  
|[_splitpath, _wsplitpath](../c-runtime-library/reference/splitpath-wsplitpath.md), [_splitpath_s, _wsplitpath_s](../c-runtime-library/reference/splitpath-s-wsplitpath-s.md)|Analizza il percorso in componenti|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_stat, _stat64, _stati64, _wstat, _wstat64, _wstati64](../c-runtime-library/reference/stat-functions.md)|Ottiene informazioni sullo stato dei file sul file denominato|[System::IO::File::GetAttributes](https://msdn.microsoft.com/en-us/library/system.io.file.getattributes.aspx), [System::IO::File::GetCreationTime](https://msdn.microsoft.com/en-us/library/system.io.file.getcreationtime.aspx), [System::IO::File::GetLastAccessTime](https://msdn.microsoft.com/en-us/library/system.io.file.getlastaccesstime.aspx), [System::IO::File::GetLastWriteTime](https://msdn.microsoft.com/en-us/library/system.io.file.getlastwritetime.aspx)|  
|[_umask](../c-runtime-library/reference/umask.md), [_umask_s](../c-runtime-library/reference/umask-s.md)|Imposta la maschera di autorizzazioni predefinite per i nuovi file creati dal programma|[System::IO::File::SetAttributes](https://msdn.microsoft.com/en-us/library/system.io.file.setattributes.aspx)|  
|[_unlink, _wunlink](../c-runtime-library/reference/unlink-wunlink.md)|Elimina file|[System::IO::File::Delete](https://msdn.microsoft.com/en-us/library/system.io.file.delete.aspx)|  
  
 Le routine seguenti aprono i file.  
  
### <a name="file-handling-routines-open-file"></a>Routine di gestione dei file (aprire file)  
  
|Routine|Uso|Equivalente .NET Framework|  
|-------------|---------|-------------------------------|  
|[fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md), [fopen_s, _wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md)|Apre un file e restituisce un puntatore al file aperto.|[System::IO::File::Open](https://msdn.microsoft.com/en-us/library/system.io.file.open.aspx), <xref:System.IO.FileStream.%23ctor%2A>|  
|[_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)|Aprire un flusso con condivisione di file e restituisce un puntatore al file aperto.|[System::IO::File::Open](https://msdn.microsoft.com/en-us/library/system.io.file.open.aspx), <xref:System.IO.FileStream.%23ctor%2A>|  
|[_open, _wopen](../c-runtime-library/reference/open-wopen.md)|Apre un file e restituisce un descrittore del file al file aperto.|[System::IO::File::Open](https://msdn.microsoft.com/en-us/library/system.io.file.open.aspx), <xref:System.IO.FileStream.%23ctor%2A>|  
|[_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md), [_sopen_s, _wsopen_s](../c-runtime-library/reference/sopen-s-wsopen-s.md)|Apri un file con la condivisione di file e restituisce un descrittore del file al file aperto.||  
|[_pipe](../c-runtime-library/reference/pipe.md)|Crea un pipe per la lettura e la scrittura.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[freopen, _wfreopen](../c-runtime-library/reference/freopen-wfreopen.md), [freopen_s, _wfreopen_s](../c-runtime-library/reference/freopen-s-wfreopen-s.md)|Riassegna un puntatore del file.|[System::IO::File::Open](https://msdn.microsoft.com/en-us/library/system.io.file.open.aspx), <xref:System.IO.FileStream.%23ctor%2A>|  
  
 Le funzioni seguenti consentono di modificare la rappresentazione del file tra una struttura `FILE` , un descrittore di file e un handle di file Win32.  
  
||||  
|-|-|-|  
|[_fdopen, _wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)|Associa un flusso a un file che è stato precedentemente aperto per I/O di basso livello e restituisce un puntatore al flusso aperto.|[System::IO::File::Open](https://msdn.microsoft.com/en-us/library/system.io.filestream.aspx)|  
|[_fileno](../c-runtime-library/reference/fileno.md)|Ottenere il descrittore di file associato al flusso.|[System::IO::FileStream::Handle](https://msdn.microsoft.com/en-us/library/system.io.filestream.handle.aspx)|  
|[_get_osfhandle](../c-runtime-library/reference/get-osfhandle.md)|Restituisce un handle di file del sistema operativo associato al descrittore di file di runtime C esistente|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_open_osfhandle](../c-runtime-library/reference/open-osfhandle.md)|Associa un descrittore di file di runtime C con un handle di file del sistema operativo esistente.|[System::IO::FileStream::Handle](https://msdn.microsoft.com/en-us/library/system.io.filestream.handle.aspx)|  
  
 Le funzioni Win32 seguenti aprono anche file e pipe:  
  
-   [CreateFile](http://msdn.microsoft.com/library/windows/desktop/aa363858.aspx)  
  
-   [CreatePipe](http://msdn.microsoft.com/library/windows/desktop/aa365152.aspx)  
  
-   [CreateNamedPipe](http://msdn.microsoft.com/library/windows/desktop/aa365150.aspx)  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [Controllo delle directory](../c-runtime-library/directory-control.md)   
 [Chiamate di sistema](../c-runtime-library/system-calls.md)
