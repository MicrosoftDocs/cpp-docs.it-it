---
title: "Errore del compilatore C2793 | Microsoft Docs"
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
  - "C2793"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2793"
ms.assetid: ce35f4e8-c357-40ca-95c4-15ff001ad69d
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2793
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'token': token imprevisto dopo '::'. Previsto un identificatore o la parola chiave 'operator'.  
  
 I soli token che possono seguire `__super::` sono un identificatore o la parola chiave `operator`.  
  
 Nell'esempio seguente viene generato l'errore C2793:  
  
```  
// C2793.cpp  
struct B {  
   void mf();  
};  
  
struct D : B {  
   void mf() {  
      __super::(); // C2793  
   }  
};  
```