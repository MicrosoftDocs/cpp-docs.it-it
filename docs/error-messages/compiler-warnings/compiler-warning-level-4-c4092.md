---
title: "Avviso del compilatore (livello 4) C4092 | Microsoft Docs"
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
  - "C4092"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4092"
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4092
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

sizeof restituisce 'unsigned long'  
  
 L'operando dell'operatore `sizeof` era molto grande e `sizeof` ha restituito un valore unsigned **long**.  L'avviso viene generato con le estensioni Microsoft \([\/Ze](../../build/reference/za-ze-disable-language-extensions.md)\).  In compatibilità ANSI \(\/Za\), il risultato viene invece troncato.