---
title: "Errore del compilatore CS2033 | Microsoft Docs"
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
  - "CS2033"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2033"
ms.assetid: edb5784a-5195-4f72-b73d-d1ec9ed3766e
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS2033
Non è possibile creare il nome file breve 'filename' se esiste già un nome file lungo con lo stesso nome file breve  
  
 Compilare un file C\# con un nome composto da più di otto caratteri. Compilare quindi un altro file con la versione breve del nome file precedente, ad esempio i primi sei caratteri del nome con l'aggiunta di "~1". La seconda compilazione genererà l'errore.  
  
 Per risolvere questo errore, modificare il nome file breve in modo che non sia in conflitto con il nome file lungo.