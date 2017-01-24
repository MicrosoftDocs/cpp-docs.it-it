---
title: "Avviso degli strumenti del linker LNK4098 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4098"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4098"
ms.assetid: 1f1b1408-1316-4e34-80f5-6a02f2db0ac1
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4098
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la libreria predefinita 'libreria' è in conflitto con l'utilizzo di altre librerie; utilizzare \/NODEFAULTLIB:libreria  
  
 Si è tentato di effettuare il collegamento con librerie non compatibili.  
  
> [!NOTE]
>  Le librerie di runtime contengono ora direttive per impedire l'unione di tipi diversi  Questo avviso viene generato se si tenta di utilizzare nello stesso programma tipi diversi o versioni di debug e non di debug della libreria di runtime.  Se si tenta di collegare un file compilato in modo da utilizzare un tipo di libreria di runtime con un altro file che ne utilizza un altro tipo, ad esempio a thread singolo e multithreading, viene generato questo avviso.  Tutti i file di origine devono utilizzare la stessa libreria di runtime.  Per ulteriori informazioni, vedere le opzioni del compilatore \(**\/MD**, **\/MT**, **\/LD**\) in [Utilizzo della libreria di runtime](../../build/reference/md-mt-ld-use-run-time-library.md).  
  
 È possibile utilizzare l'opzione del linker [\/VERBOSE:LIB](../../build/reference/verbose-print-progress-messages.md) per determinare le librerie cercate dal linker.  Se viene visualizzato l'avviso LNK4098 e si desidera creare un file eseguibile che utilizza, ad esempio, le librerie di runtime non di debug a thread singolo, utilizzare l'opzione **\/VERBOSE:LIB** per individuare le librerie utilizzate dal linker.  Tra le librerie utilizzate, verrà stampata LIBC.lib, non LIBCMT.lib, MSVCRT.lib, LIBCD.lib, LIBCMTD.lib o MSVCRTD.lib.  Per far sì che il linker ignori le librerie di runtime errate, utilizzare [\/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) per ciascuna libreria da ignorare.  
  
 La tabella che segue indica quali librerie ignorare a seconda della libreria di runtime che si desidera utilizzare.  
  
|Per utilizzare questa libreria di runtime|Ignorare queste librerie|  
|-----------------------------------------------|------------------------------|  
|A thread singolo \(libc.lib\)|libcmt.lib, msvcrt.lib, libcd.lib, libcmtd.lib, msvcrtd.lib|  
|Multithreading \(libcmt.lib\)|libc.lib, msvcrt.lib, libcd.lib, libcmtd.lib, msvcrtd.lib|  
|Multithreading con DLL \(msvcrt.lib\)|libc.lib, libcmt.lib, libcd.lib, libcmtd.lib, msvcrtd.lib|  
|A thread singolo di debug \(libcd.lib\)|libc.lib, libcmt.lib, msvcrt.lib, libcmtd.lib, msvcrtd.lib|  
|Multithreading di debug \(libcmtd.lib\)|libc.lib, libcmt.lib, msvcrt.lib, libcd.lib, msvcrtd.lib|  
|Multithreading con DLL di debug \(msvcrtd.lib\)|libc.lib, libcmt.lib, msvcrt.lib, libcd.lib, libcmtd.lib|  
  
 Se, ad esempio, viene generato questo avviso e si desidera creare un file eseguibile che utilizzi la versione a thread singolo non di debug delle librerie di runtime, utilizzare le seguenti opzioni con il linker:  
  
```  
/NODEFAULTLIB:libcmt.lib /NODEFAULTLIB:msvcrt.lib /NODEFAULTLIB:libcd.lib /NODEFAULTLIB:libcmtd.lib /NODEFAULTLIB:msvcrtd.lib  
```