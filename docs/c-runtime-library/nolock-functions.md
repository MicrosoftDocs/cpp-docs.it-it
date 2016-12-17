---
title: "Funzioni _nolock | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_nolock (funzioni)"
  - "nolock (funzioni)"
ms.assetid: 7d651d87-38d2-4303-9897-fdb5f7a3e899
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni _nolock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste sono funzioni che non eseguono alcun blocco.  Vengono fornite per gli utenti che richiedono le massime prestazioni.  Per ulteriori informazioni, vedere [Prestazioni librerie multithread](../c-runtime-library/multithreaded-libraries-performance.md).  
  
 Utilizzare le funzioni \_nolock solo se il programma è effettivamente a thread singolo o se ciascun thread possiede il proprio blocco.  
  
 [\_fclose\_nolock](../c-runtime-library/reference/fclose-nolock.md)  
  
 [\_fflush\_nolock](../c-runtime-library/reference/fflush-nolock.md)  
  
 [\_fgetc\_nolock, \_fgetwc\_nolock](../c-runtime-library/reference/fgetc-nolock-fgetwc-nolock.md)  
  
 [\_fread\_nolock](../c-runtime-library/reference/fread-nolock.md)  
  
 [\_fseek\_nolock, \_fseeki64\_nolock](../c-runtime-library/reference/fseek-nolock-fseeki64-nolock.md)  
  
 [\_ftell\_nolock, \_ftelli64\_nolock](../c-runtime-library/reference/ftell-nolock-ftelli64-nolock.md)  
  
 [\_fwrite\_nolock](../c-runtime-library/reference/fwrite-nolock.md)  
  
 [\_getc\_nolock, \_getwc\_nolock](../c-runtime-library/reference/getc-nolock-getwc-nolock.md)  
  
 [\_getch\_nolock, \_getwch\_nolock](../c-runtime-library/reference/getch-nolock-getwch-nolock.md)  
  
 [\_getchar\_nolock, \_getwchar\_nolock](../c-runtime-library/reference/getchar-nolock-getwchar-nolock.md)  
  
 [\_getche\_nolock, \_getwche\_nolock](../c-runtime-library/reference/getche-nolock-getwche-nolock.md)  
  
 [\_getdcwd\_nolock, \_wgetdcwd\_nolock](../c-runtime-library/reference/getdcwd-nolock-wgetdcwd-nolock.md)  
  
 [\_putc\_nolock, \_putwc\_nolock](../c-runtime-library/reference/putc-nolock-putwc-nolock.md)  
  
 [\_putch\_nolock, \_putwch\_nolock](../c-runtime-library/reference/putch-nolock-putwch-nolock.md)  
  
 [\_putchar\_nolock, \_putwchar\_nolock](../c-runtime-library/reference/putchar-nolock-putwchar-nolock.md)  
  
 [\_ungetc\_nolock, \_ungetwc\_nolock](../c-runtime-library/reference/ungetc-nolock-ungetwc-nolock.md)  
  
 [\_ungetch\_nolock, \_ungetwch\_nolock](../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)  
  
## Vedere anche  
 [Input e output](../c-runtime-library/input-and-output.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)