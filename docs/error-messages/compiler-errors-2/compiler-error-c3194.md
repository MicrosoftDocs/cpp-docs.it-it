---
title: "Errore del compilatore C3194 | Microsoft Docs"
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
  - "C3194"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3194"
ms.assetid: 49d3ffc6-eff6-4b46-865b-18811692a8bb
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3194
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': un tipo di valore non può avere un operatore di assegnazione  
  
 Le funzioni membro speciali che richiedono la chiamata automatica da parte del compilatore, ad esempio un costruttore di copia o un operatore di assegnazione di copia, non sono supportate in classi di valore.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3194:  
  
```  
// C3194.cpp  
// compile with: /clr /c  
value struct MyStruct {  
   MyStruct& operator= (const MyStruct& i) { return *this; }   // C3194  
};  
  
ref struct MyStruct2 {  
   MyStruct2% operator= (const MyStruct2% i) { return *this; }   // OK  
};  
```