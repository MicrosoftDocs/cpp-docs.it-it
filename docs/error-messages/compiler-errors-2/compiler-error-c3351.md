---
title: "Errore del compilatore C3351 | Microsoft Docs"
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
  - "C3351"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3351"
ms.assetid: c021bbbe-1067-4f51-af4f-940d2b792eb5
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3351
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'object': costruttore di delegato: il secondo argomento deve essere l'indirizzo di una funzione membro statica o di una funzione globale  
  
 Il compilatore prevedeva l'indirizzo di una funzione dichiarata [static](../../misc/static-cpp.md).  
  
 L'esempio seguente genera l'errore C3351:  
  
```  
// C3351a.cpp // compile with: /clr delegate int D(int, int); ref class C { public: int mf(int, int) { return 1; } static int mf2(int, int) { return 1; } }; int main() { System::Delegate ^pD = gcnew D(nullptr, &C::mf);   // C3351 System::Delegate ^pD2 = gcnew D(&C::mf2); }  
```  
  
 L'esempio seguente genera l'errore C3351:  
  
```  
// C3351b.cpp // compile with: /clr:oldSyntax #using <mscorlib.dll> __delegate int D(int, int); __gc class C { public: int mf(int, int) { // declare the function as static // static int mf(int, int) { return 1; } }; int main() { C *pC = new C; System::Delegate *pD = new D(0, &C::mf);   // C3351 }  
```