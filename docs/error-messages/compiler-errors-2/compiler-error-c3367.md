---
title: "Errore del compilatore C3367 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3367"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3367"
ms.assetid: e675d42b-f5b0-4d43-aab1-1f5024233102
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3367
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'static\_member\_function': impossibile utilizzare una funzione statica per creare un delegato non associato  
  
 Quando si chiama un delegato non associato, è necessario passare un'istanza di un oggetto. Una funzione membro statico viene chiamata tramite il nome della classe, quindi è possibile creare solo un'istanza di un delegato non associato con una funzione di membro di istanza.  
  
 Per altre informazioni, vedere [Delegati non associati](../../misc/unbound-delegates.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3367.  
  
```  
// C3367.cpp // compile with: /clr ref struct R { void b() {} static void f() {} }; delegate void Del(R^); int main() { Del ^ a = gcnew Del(&R::b);   // OK Del ^ b = gcnew Del(&R::f);   // C3367 }  
```