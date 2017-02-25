---
title: "Avviso del compilatore (livello 1) C4489 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4489"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4489"
ms.assetid: 43b51c8c-27b5-44c9-b974-fe4b48f4896f
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Avviso del compilatore (livello 1) C4489
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': non consentito con il metodo di interfaccia 'metodo'; gli identificatori di override sono consentiti solo con i metodi delle classi di riferimento e delle classi di valore  
  
 Una parola chiave per identificatori è stata erroneamente utilizzata in un metodo di interfaccia.  
  
 Per ulteriori informazioni, vedere [Identificatori di override](../../windows/override-specifiers-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4489:  
  
```  
// C4489.cpp  
// compile with: /clr /c /W1  
public interface class I {   
   void f() new;   // C4489  
   virtual void b() override;   // C4489  
  
   void g();   // OK  
};  
```