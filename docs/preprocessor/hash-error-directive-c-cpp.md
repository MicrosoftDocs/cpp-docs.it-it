---
title: "Direttiva #error (C/C++) | Microsoft Docs"
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
  - "#error"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#error (direttiva)"
  - "error (direttiva) (direttiva #error)"
  - "preprocessore, direttive"
ms.assetid: d550a802-ff19-4347-9597-688935d23b2b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttiva #error (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La direttiva `#error` genera un messaggio di errore definito in fase di compilazione e quindi termina la compilazione.  
  
## Sintassi  
  
```  
#error token-string  
```  
  
## Note  
 Il messaggio di errore che la direttiva genera include il parametro *token\-string*.  Il parametro `token-string` non è soggetto all'espansione di macro.  Questa direttiva è molto utile durante la la fase di preprocessing per la comunicazione allo sviluppatore di un'incoerenza di programma o la violazione di un vincolo.  Nell'esempio seguente viene illustrata l'elaborazione di errore durante la fase di preprocessing:  
  
```  
#if !defined(__cplusplus)  
#error C++ compiler required.  
#endif  
```  
  
## Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)