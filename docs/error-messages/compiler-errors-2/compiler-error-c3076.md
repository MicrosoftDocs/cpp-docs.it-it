---
title: "Errore del compilatore C3076 | Microsoft Docs"
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
  - "C3076"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3076"
ms.assetid: 8a87b3e4-2c17-4b87-9622-ef0962d6a34e
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3076
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'istanza': impossibile incorporare un'istanza di un tipo di riferimento, 'tipo', in un tipo nativo  
  
 Un tipo nativo non può contenere un'istanza di un tipo CLR.  
  
 Per ulteriori informazioni, vedere [Semantica dello stack C\+\+ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3076:  
  
```  
// C3076.cpp  
// compile with: /clr /c  
ref struct U {};  
  
struct V {  
   U y;   // C3076  
};  
  
ref struct W {  
   U y;   // OK  
};  
```