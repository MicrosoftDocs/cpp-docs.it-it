---
title: "&#200; previsto il tipo o &#39;New&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc32092"
  - "bc32092"
helpviewer_keywords: 
  - "BC32092"
ms.assetid: b3041c1d-837c-4d58-bbb4-5c46f227b66d
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto il tipo o &#39;New&#39;
Un parametro di tipo nella dichiarazione di un tipo generico consente di introdurre un elenco di vincoli con la parola chiave `As` ma non specifica un vincolo valido.  
  
 Un vincolo su un parametro di tipo deve essere una classe o un'interfaccia valida o una delle parole chiave `Class`, `Structure` o `New`. Se si specifica un vincolo non valido o nessun vincolo, il compilatore genera questo errore.  
  
 **ID errore:** BC32092  
  
### Per correggere l'errore  
  
1.  Determinare in che modo vincolare il parametro di tipo e specificare il vincolo appropriato nell'elenco di vincoli.  
  
2.  Se si vuole vincolare il parametro di tipo con una classe o interfaccia, accertarsi che venga digitato in modo corretto.  
  
3.  Ricordarsi di separare i vincoli multipli di un parametro di tipo singolo con le virgole e di racchiudere l'elenco di vincoli tra parentesi graffe \(`{ }`\).  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)   
 [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)