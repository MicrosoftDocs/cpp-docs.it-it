---
title: "Avviso del compilatore (livello 3) C4278 | Microsoft Docs"
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
  - "C4278"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4278"
ms.assetid: 4b6053fb-df62-4c04-b6c8-c011759557b8
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4278
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': l'identificatore 'tlb' nella libreria dei tipi è già una macro. Utilizzare il qualificatore 'rename'  
  
 Quando si utilizza [\#import](../../preprocessor/hash-import-directive-cpp.md), un identificatore nella libreria dei tipi che viene importata tenta di dichiarare un identificatore ***identificatore***.  Si tratta tuttavia di un simbolo già valido.  
  
 Utilizzare l'attributo `#import` **rename** per assegnare un alias al simbolo nella libreria dei tipi.