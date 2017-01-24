---
title: "EOF, WEOF | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EOF"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "EOF (funzione)"
  - "WEOF (funzione)"
  - "fine file"
ms.assetid: a7150563-cdae-4cdf-9798-ad509990e505
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# EOF, WEOF
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <stdio.h>  
```  
  
## Note  
 EOF viene restituito da una routine I\/O quando viene rilevata la fine del file \(o in alcuni casi, un errore\).  
  
 WEOF produce il valore restituito, di tipo **wint\_t**, utilizzato per segnalare la fine del flusso, o per indicare una condizione di errore.  
  
## Vedere anche  
 [putc, putwc](../c-runtime-library/reference/putc-putwc.md)   
 [ungetc, ungetwc](../c-runtime-library/reference/ungetc-ungetwc.md)   
 [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [fflush](../c-runtime-library/reference/fflush.md)   
 [fclose, \_fcloseall](../c-runtime-library/reference/fclose-fcloseall.md)   
 [\_ungetch, \_ungetwch, \_ungetch\_nolock, \_ungetwch\_nolock](../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)   
 [\_putch, \_putwch](../c-runtime-library/reference/putch-putwch.md)   
 [isascii, isascii, iswascii](../c-runtime-library/reference/isascii-isascii-iswascii.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)