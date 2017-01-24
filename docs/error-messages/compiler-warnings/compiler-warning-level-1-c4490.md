---
title: "Avviso del compilatore (livello 1) C4490 | Microsoft Docs"
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
  - "C4490"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4490"
ms.assetid: f9b03ecf-41a1-4f4d-a74c-2c1e88234ccc
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4490
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'override': utilizzo non corretto dell'identificatore di override; 'funzione' non corrisponde a un metodo di classe base di riferimento  
  
 Un identificatore di override è stato utilizzato in modo non corretto.  Le funzioni di interfaccia, ad esempio, non devono essere sottoposte a override ma implementate.  
  
 Per ulteriori informazioni, vedere [Identificatori di override](../../windows/override-specifiers-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4490:  
  
```  
// C4490.cpp  
// compile with: /clr /c /W1  
  
interface struct IFace {  
   void Test();  
};  
  
ref struct Class1 : public IFace {  
   virtual void Test() override {}   // C4490  
   // try the following line instead  
   // virtual void Test() {}  
};  
```