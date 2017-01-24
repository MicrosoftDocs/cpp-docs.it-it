---
title: "Avviso del compilatore (livello 1) C4674 | Microsoft Docs"
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
  - "C4674"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4674"
ms.assetid: 638dae0b-b82c-4865-9599-72630827ca09
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4674
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'method' deve essere dichiarato 'static' e avere esattamente un parametro  
  
 La firma di un operatore di conversione non era corretta. Il metodo non è considerato una conversione definita dall'utente.  
  
 Quando si usa la nuova sintassi \(**\/clr**\), vedere [Operatori definiti dall'utente](../../dotnet/user-defined-operators-cpp-cli.md) e [Conversioni definite dall'utente](../../dotnet/user-defined-conversions-cpp-cli.md) per informazioni sulla definizione degli operatori.  
  
## Esempio  
 L'esempio seguente genera l'errore C4674.  
  
```  
// C4674.cpp // compile with: /clr /WX /W1 /LD ref class G { int op_Implicit(int i) {   // C4674 return 0; } };  
```  
  
## Esempio  
 L'esempio seguente genera l'errore C4674.  
  
```  
// C4674_b.cpp // compile with: /clr:oldSyntax /W1 /LD __gc class G { int op_Implicit(int i) {   // C4674 // try the following line instead // static int op_Implicit(int i) { return 0; } };  
```