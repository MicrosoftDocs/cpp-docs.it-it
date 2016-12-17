---
title: "Errore del compilatore C3299 | Microsoft Docs"
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
  - "C3299"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3299"
ms.assetid: 7cabdf01-bceb-404f-9401-cdd9c7fc1641
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3299
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'member\_function': impossibile specificare vincoli poiché vengono ereditati dal metodo base  
  
 Quando si esegue l'override di una funzione membro generica, non è possibile specificare clausole vincolo \(la ripetizione dei vincoli implica che i vincoli non vengano ereditati\).  
  
 Le clausole vincolo sulla funzione generica di cui si esegue l'override verranno ereditate.  
  
 Per altre informazioni, vedere [Constraints on Generic Type Parameters \(C\+\+\/CLI\)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3299.  
  
```  
// C3299.cpp // compile with: /clr /c public ref struct R { generic<class T> where T : R virtual void f(); }; public ref struct S : R { generic<class T> where T : R   // C3299 virtual void f() override; };  
```