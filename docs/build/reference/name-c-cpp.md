---
title: "NAME (C/C++) | Microsoft Docs"
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
  - "name"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NAME (istruzione del file con estensione def)"
ms.assetid: 5c9b6bd8-9275-46a5-afba-f17a5936dc26
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NAME (C/C++)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di specificare un nome per il file di output principale.  
  
```  
NAME [application][BASE=address]  
```  
  
## Note  
 In alternativa, per specificare il nome di un file di output è anche possibile utilizzare l'opzione del linker [\/OUT](../../build/reference/out-output-file-name.md), mentre per impostare l'indirizzo di base è possibile specificare l'opzione del linker [\/BASE](../../build/reference/base-base-address.md).  Se sono specificate entrambe le opzioni, \/OUT eseguirà l'override di **NAME**.  
  
 Se si compila una DLL, NAME avrà effetto solo sul nome della DLL.  
  
## Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)