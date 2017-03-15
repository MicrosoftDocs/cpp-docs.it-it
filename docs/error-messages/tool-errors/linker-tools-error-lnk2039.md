---
title: "Errore degli strumenti del linker LNK2039 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2039"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2039"
ms.assetid: eaa296bd-4901-41f6-8410-6d03ee827144
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Errore degli strumenti del linker LNK2039
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

importazione del '\<tipo\>' di classe di riferimento definito in another.obj; deve essere incluso o definito, ma non entrambe le cose  
  
 La classe di riferimento '\<`type`\>' è inclusa nel file specificato .obj ma viene anche definita in un altro file .obj.  Questa condizione può provocare un errore di runtime o altri comportamenti imprevisti.  
  
### Per correggere l'errore  
  
1.  Controllare se '`type`' deve essere definito in un altro file .obj e controllare se deve essere incluso dal file .winmd.  
  
2.  Rimuovere la definizione o l'importazione.  
  
## Vedere anche  
 [Errori e avvisi degli strumenti del linker](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)   
 [Errore degli strumenti del linker LNK1332](../../error-messages/tool-errors/linker-tools-error-lnk1332.md)