---
title: "Errore del compilatore C3666 | Microsoft Docs"
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
  - "C3666"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3666"
ms.assetid: 459e51dd-cefb-4346-99b3-644f2d8b65b2
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3666
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'costruttore': indicatore di override 'parola chiave' non consentito con un costruttore  
  
 È stato utilizzato un identificatore di override con un costruttore, ma questa operazione non è consentita.  Per ulteriori informazioni, vedere [Identificatori di override](../../windows/override-specifiers-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3666:  
  
```  
// C3666.cpp  
// compile with: /clr /c  
ref struct R {  
   R() new {}   // C3666  
   R(int i) {}   // OK  
};  
```