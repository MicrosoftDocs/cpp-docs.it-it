---
title: "Errore del compilatore CS1731 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1731"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1731"
ms.assetid: 267b32aa-a692-4a54-8654-0540ee36c0a0
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1731
Impossibile convertire 'expression' in delegato perché alcuni dei tipi restituiti nel blocco non sono convertibili in modo implicito nel tipo restituito del delegato.  
  
 Questo errore viene generato quando un'espressione lambda o un metodo anonimo ha un tipo restituito non è compatibile con il tipo restituito del delegato.  
  
### Per correggere l'errore  
  
1.  Modificare il tipo restituito del delegato o dell'espressione.  
  
## Esempio  
 Il codice seguente genera l'errore CS1731:  
  
```  
class CS1731 { delegate double D(); D d = () => { return "Who knows the real sword of Gryffindor?"; }; }  
```