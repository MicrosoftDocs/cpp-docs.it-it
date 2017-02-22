---
title: "Errore del compilatore C3214 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3214"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3214"
ms.assetid: 49ee4a9a-2549-4adb-9d3a-38e154303c2e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3214
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': argomento di tipo non valido per il parametro generico 'param' del 'generic\_type' generico. Vincolo 'constraint' non soddisfatto  
  
 Il tipo è stato specificato per la creazione di un'istanza di una classe generica che non soddisfa il vincolo della classe generica.  
  
 L'esempio seguente genera l'errore C3214:  
  
```  
// C3214.cpp // compile with: /clr interface struct A {}; generic <class T> where T : A ref class C {}; ref class X : public A {}; int main() { C<int>^ c = new C<int>;   // C3214 C<X ^> ^ c2 = new C<X^>;   // OK }  
```