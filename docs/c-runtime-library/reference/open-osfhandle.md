---
title: "_open_osfhandle | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_open_osfhandle"
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
  - "_open_osfhandle"
  - "open_osfhandle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "open_osfhandle (funzione)"
  - "handle di file [C++], associazione"
  - "_open_osfhandle (funzione)"
ms.assetid: 30d94df4-7868-4667-a401-9eb67ecb7855
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _open_osfhandle
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Associa un descrittore di file di runtime del linguaggio C con una gestione di file del sistema operativo esistente.  
  
## Sintassi  
  
```  
  
      int _open_osfhandle (  
   intptr_t osfhandle,  
   int flags   
);  
```  
  
#### Parametri  
 `osfhandle`  
 Gestore dei file del sistema operativo.  
  
 `flags`  
 Tipi di operazioni consentite.  
  
## Valore restituito  
 Se l'operazione riesce, `_open_osfhandle` restituisce un descrittore di file di runtime C.  In caso contrario restituirà –1.  
  
## Note  
 La funzione di `_open_osfhandle` alloca un descrittore di file di runtime C e lo associa a un handle di file del sistema operativo specificato da `osfhandle`.  L'argomento di `flags` è un'espressione integer formata da una o più delle costanti del manifesto definite in Fcntl.h.  Quando due o più costanti manifesto vengono utilizzate per formare l'argomento `flags`, le costanti vengono combinate con l'operatore OR bit per bit \(  **&#124;** \).  
  
 Fcntl.h definisce le seguenti costanti del manifesto.  
  
 **\_O\_APPEND**  
 Posiziona un puntatore a file alla fine del file prima di ogni operazione di scrittura.  
  
 **\_O\_RDONLY**  
 Apre il file in sola lettura.  
  
 **\_O\_TEXT**  
 Apre il file in modalità testo \(convertito\).  
  
 **\_O\_WTEXT**  
 Apre il file in modalità Unicode \(convertito in UTF\-16\).  
  
 Per chiudere un file aperto con `_open_osfhandle`, chiamare `_close`.  Anche l'handle sottostante viene chiuso da una chiamata a `_close`, pertanto non è necessario chiamare la funzione Win32 `CloseHandle` sugli handle originali.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_open_osfhandle`|\<io.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 [System::IO::FileStream::Handle](https://msdn.microsoft.com/en-us/library/system.io.filestream.handle.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)