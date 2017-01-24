---
title: "Errore del compilatore C3365 | Microsoft Docs"
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
  - "C3365"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3365"
ms.assetid: 875ec3a4-522c-4e3d-9b67-48808b857f6d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3365
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

operatore 'operator': operandi differenti di tipo 'type1' e 'type2'  
  
 Si è provato a creare delegati con tipi diversi.  Per altre informazioni sui delegati, vedere [Procedura: creare delegati](../../misc/how-to-compose-delegates.md).  
  
 L'esempio seguente genera l'errore C3365:  
  
```  
// C3365.cpp // compile with: /clr delegate void D1(); delegate void D2(int); ref class R { public: void f(){} void g(int){} }; int main() { D1^ d1 = gcnew D1(gcnew R, &R::f); D2^ d2 = gcnew D2(gcnew R, &R::g); D1^ d3 = gcnew D1(gcnew R, &R::f); d1 += d2;   // C3365 d1 += d3;   // OK d1(); }  
```