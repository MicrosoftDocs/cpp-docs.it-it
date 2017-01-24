---
title: "Test di caratteri | Microsoft Docs"
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
ms.assetid: 376ba061-bae3-427e-9569-33fa5949a199
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Test di caratteri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 4.3.1** Set di caratteri per cui è stato eseguito il testa dalle funzioni `isalnum`, `isalpha`, `iscntrl`, `islower`, `isprint` e `isupper`  
  
 Nell'elenco seguente vengono descritte queste funzioni implementate dal compilatore Microsoft C.  
  
|Funzione|Test per|  
|--------------|--------------|  
|`isalnum`|Caratteri da 0 a 9, A\-Z, a\-z ASCII 48\-57, 65\-90, 97\-122|  
|`isalpha`|Caratteri A\-Z, a\-z ASCII 65\-90, 97\-122|  
|`iscntrl`|ASCII 0 –31, 127|  
|`islower`|Caratteri a–z ASCII 97–122|  
|`isprint`|Caratteri A–Z, a–z, 0 – 9, punteggiatura, spazio ASCII 32–126|  
|`isupper`|Caratteri A–Z ASCII 65–90|  
  
## Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)