---
title: "Avviso di conformit&#224; a CLS CLS01512 | Microsoft Docs"
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
  - "CLS01512"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01512"
ms.assetid: 15822eb3-43b1-4d58-a22d-9532e5820008
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01512
Il vincolo varargs non fa parte delle specifiche CLS  
  
 Il vincolo varargs non fa parte delle specifiche CLS \(Common Language Subset\).  L'unica convenzione di chiamata supportata da CLS è la convenzione di chiamata gestita standard.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 La dichiarazione di funzione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS01512:  
  
```  
.method public specialname rtspecialname static vararg void  .cctor() cil managed  
```  
  
 Rimuovendo la parola chiave **vararg** è possibile risolvere il problema:  
  
```  
.method public specialname rtspecialname static void  .cctor() cil managed  
```