---
title: "Errore del compilatore C3309 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3309"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3309"
ms.assetid: 75ee16e3-7d4e-4c41-b3cb-64e9849c3aab
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3309
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'macro\_name': il nome del modulo non può essere una macro o una parola chiave  
  
 Il valore passato alla proprietà del nome dell'attributo del modulo non può essere un simbolo che viene espanso dal preprocessore, ma deve essere un valore letterale stringa.  
  
 L'esempio seguente genera l'errore C3309:  
  
```  
// C3309.cpp #define NAME MyModule [module(name="NAME")];   // C3309 // Try the following line instead // [module(name="MyModule")]; [coclass] class MyClass { public: void MyFunc(); }; int main() { }  
```