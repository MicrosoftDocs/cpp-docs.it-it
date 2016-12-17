---
title: "/DYNAMICBASE | Microsoft Docs"
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
  - "/dynamicbase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DYNAMICBASE (opzione editbin)"
  - "DYNAMICBASE (opzione editbin)"
  - "-DYNAMICBASE (opzione editbin)"
ms.assetid: edb3df90-7b07-42fb-a94a-f5a4c1d325d6
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DYNAMICBASE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica se un'immagine eseguibile può essere riassegnata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR \(Address Space Layout Randomization\).  
  
## Sintassi  
  
```  
  
/DYNAMICBASE[:NO]  
```  
  
## Note  
 Per impostazione predefinita, il linker imposta l'opzione **\/DYNAMICBASE**.  
  
 Questa opzione modifica l'intestazione di un'immagine eseguibile per indicare se il caricatore può riassegnare in modo casuale l'immagine al momento del caricamento.  
  
 ASLR è supportato in Windows Vista, Windows Server 2008, Windows 7, Windows 8 e Windows Server 2012.  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [Metodi di difesa della sicurezza del software ISV di Windows](http://msdn.microsoft.com/library/bb430720.aspx)