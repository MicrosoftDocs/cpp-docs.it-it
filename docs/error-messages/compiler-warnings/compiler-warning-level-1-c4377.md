---
title: "Avviso del compilatore (livello 1) C4377 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4377"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4377"
ms.assetid: a1c797b8-cd5e-4a56-b430-d07932e811cf
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Avviso del compilatore (livello 1) C4377
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

i tipi nativi sono privati in base all'impostazione predefinita; \-d1PrivateNativeTypes è deprecato  
  
 Nelle versioni precedenti i tipi nativi negli assembly erano pubblici per impostazione predefinita e per renderli privati era necessario utilizzare un'opzione del compilatore non documentata \(**\/d1PrivateNativeTypes**\).  
  
 Nella versione corrente tutti i tipi, nativi e CLR, sono privati per impostazione predefinita e l'opzione **\/d1PrivateNativeTypes** non è più necessaria.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4377:  
  
```  
// C4377.cpp  
// compile with: /clr /d1PrivateNativeTypes /W1  
// C4377 warning expected  
int main() {}  
```