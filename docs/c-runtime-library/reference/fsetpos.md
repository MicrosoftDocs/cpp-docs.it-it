---
title: "fsetpos | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "fsetpos"
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
  - "fsetpos"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fsetpos (funzione)"
  - "flussi, impostazione di indicatori di posizione"
ms.assetid: 6d19ff48-1a2b-47b3-9f23-ed0a47b5a46e
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# fsetpos
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta l'indicatore di flusso posizione.  
  
## Sintassi  
  
```  
int fsetpos(   
   FILE *stream,  
   const fpos_t *pos   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
 `pos`  
 Archiviazione dell'indicatore di posizione.  
  
## Valore restituito  
 In caso di successo, `fsetpos` restituisce 0.  In caso di errore, la funzione restituisce un valore diverso da zero ed imposta `errno` a una delle seguenti costanti manifesto \(definite in ERRNO.H\): `EBADF`, che indica che il file non è accessibile o che l'oggetto a cui punta `stream` non è una struttura di file valida; o `EINVAL`, che indica che è stato passato un valore non valido per `stream` o `pos`.  Se viene passato un parametro non valido, queste funzioni invocano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici restituiti.  
  
## Note  
 La funzione `fsetpos` imposta l'indicatore di posizione del file per `stream` al valore di `pos`*,* ottenuto in chiamata precedente a `fgetpos` su `stream`*.* La funzione rimuove l'indicatore di fine file e annulla tutti gli effetti di [ungetc](../../c-runtime-library/reference/ungetc-ungetwc.md) su `stream`*.* Dopo aver chiamato `fsetpos`, l'operazione successiva su `stream` può essere di input o di output.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fsetpos`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [fgetpos](../../c-runtime-library/reference/fgetpos.md).  
  
## Equivalente .NET Framework  
 [System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fgetpos](../../c-runtime-library/reference/fgetpos.md)