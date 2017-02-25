---
title: "fclose, _fcloseall | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fclose"
  - "_fcloseall"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "fclose"
  - "_fcloseall"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fclose (funzione)"
  - "flussi, chiusura"
  - "_fcloseall (funzione)"
ms.assetid: c3c6ea72-92c6-450a-a33e-3e568d2784a4
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# fclose, _fcloseall
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiude un flusso \(`fclose`\) o chiude tutti i flussi aperti \(`_fcloseall`\).  
  
## Sintassi  
  
```  
int fclose(   
   FILE *stream   
);  
int _fcloseall( void );  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 `fclose` restituisce 0 se il flusso viene chiuso correttamente.  `_fcloseall` restituisce il numero totale di flussi chiusi.  Entrambe le funzioni restituiscono `EOF` per indicare un errore.  
  
## Note  
 La funzione `fclose` chiude `stream`.  Se `stream` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è consentito continuare, `fclose` imposta `errno` al valore `EINVAL` e restituisce `EOF`.  Si raccomanda che il puntatore di `stream` viene controllato sempre prima di chiamare la funzione.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici di errore.  
  
 La funzione `_fcloseall` chiude tutti i flussi aperti tranne `stdin`, `stdout`, `stderr` \(e, in MS\-DOS, `_stdaux` e `_stdprn`\).  Inoltre termina ed elimina tutti i file temporanei creati da `tmpfile`.  In entrambe le funzioni, tutti i buffer associati al flusso vengono scaricati prima della chiusura.  I buffer allocati di sistema vengono rilasciati quando il flusso viene chiuso.  I buffer assegnati dall'utente con `setbuf` e `setvbuf` non vengono automaticamente eliminati.  
  
 **Nota:** Quando queste funzioni vengono utilizzate per chiudere un flusso, il descrittore del file sottostante e un handle di file del sistema operativo \(o socket\) vengono chiusi, come il flusso.  Pertanto, se il file è stato originariamente aperto come handle di file o descrittore di file e chiuso con `fclose`, non si deve chiamare anche `_close` per chiudere il descrittore del file; non si deve chiamare la funzione Win32 `CloseHandle` per chiudere gli handle di file.  
  
 `fclose` e `_fcloseall` includono codice per proteggersi da interferenze da parte di altri thread.  Per una versione non bloccante di `fclose`, vedere `_fclose_nolock`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fclose`|\<stdio.h\>|  
|`_fcloseall`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
## Equivalente .NET Framework  
  
-   [System::IO::BinaryReader::Close](https://msdn.microsoft.com/en-us/library/system.io.binaryreader.close.aspx)  
  
-   [System::IO::BinaryWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.binarywriter.close.aspx)  
  
-   [System::IO::StringReader::Close](https://msdn.microsoft.com/en-us/library/system.io.stringreader.close.aspx)  
  
-   [System::IO::StringWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.stringwriter.close.aspx)  
  
-   [System::IO::Stream::Close](https://msdn.microsoft.com/en-us/library/system.io.stream.close.aspx)  
  
-   [System::IO::StreamReader::Close](https://msdn.microsoft.com/en-us/library/system.io.streamreader.close.aspx)  
  
-   [System::IO::StreamWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.close.aspx)  
  
-   [System::IO::TextReader::Close](https://msdn.microsoft.com/en-us/library/system.io.textreader.close.aspx)  
  
-   [System::IO::TextWriter::Close](https://msdn.microsoft.com/en-us/library/system.io.textwriter.close.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [\_close](../../c-runtime-library/reference/close.md)   
 [\_fdopen, \_wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [fflush](../../c-runtime-library/reference/fflush.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, \_wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)