---
title: "Errore irreversibile del compilatore di risorse RC1014 | Microsoft Docs"
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
  - "RC1014"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1014"
ms.assetid: 30119ac9-4e2c-4e9b-8635-22fa63003da1
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Errore irreversibile del compilatore di risorse RC1014
troppi file di inclusione: profondità \= 'level'  
  
 Il livello di annidamento delle direttive `#include` è troppo elevato.  
  
 Usare direttive annidate per includere i file aperti. Il file di origine che contiene la direttiva viene conteggiato come un qualsiasi altro file.