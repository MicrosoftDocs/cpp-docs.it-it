---
title: "Avviso di conformit&#224; a CLS CLS01303 | Microsoft Docs"
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
  - "CLS01303"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01303"
ms.assetid: a8aa0cda-a2dd-41da-bcc2-53221207ea70
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01303
Un valore letterale conforme a CLS deve disporre di un valore specificato nei metadati di inizializzazione del campo che sia esattamente dello stesso tipo del valore letterale, o del tipo sottostante, se questo valore letterale è un'enumerazione  
  
 Il valore di un valore statico letterale viene specificato attraverso l'uso dei metadati di inizializzazione del campo. Un valore letterale conforme a CLS deve disporre di un valore specificato nei metadati di inizializzazione del campo che sia esattamente dello stesso tipo del valore letterale, o del tipo sottostante, se questo valore letterale è un'enumerazione.  
  
 Verificare che il valore letterale del campo sia dello stesso tipo del valore letterale o del tipo sottostante, se questo valore letterale è un'enumerazione.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 La dichiarazione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS01303:  
  
```  
.field public static literal char Field2 = int32(0x00000002)  
```  
  
 Rendendo il tipo dell'inizializzatore uguale al tipo letterale, è possibile risolvere il problema:  
  
```  
.field public static literal char Field2 = char(0x00000002)  
```