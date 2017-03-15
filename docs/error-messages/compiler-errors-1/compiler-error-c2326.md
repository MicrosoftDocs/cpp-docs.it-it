---
title: "Errore del compilatore C2326 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2326"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2326"
ms.assetid: 01a5ea40-de83-4e6f-a4e8-469f441258e0
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2326
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'declarator': la funzione non può accedere a 'name'  
  
 Il codice tenta di modificare una variabile membro, ma questa operazione non è consentita.  
  
## Esempio  
 L'esempio seguente genera l'errore C2326:  
  
```  
// C2326.cpp void MyFunc() { int i; class MyClass  { public: void mf() { i = 4;   // C2326 i is inaccessible } }; }  
```