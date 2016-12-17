---
title: "Errore del compilatore CS0623 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0623"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0623"
ms.assetid: c9fd6888-b9c5-48bf-b25b-2fae1446ad24
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0623
Gli inizializzatori di matrice possono essere usati solo in un inizializzatore di campo o di variabile. Provare a usare un'espressione new.  
  
 Si è provato a inizializzare una matrice usando un inizializzatore di matrice in un contesto nel quale non è consentito.  
  
## Esempio  
 L'esempio seguente produce l'errore CS0623 perché il compilatore interpreta {4\\} come inizializzatore di matrice incorporato all'interno dell'inizializzatore di matrice esterno:  
  
```  
//cs0632.cs using System; class X { public int[] x = { 2, 3, {4}}; //CS0623 }  
```  
  
## Vedere anche  
 [Matrici](../Topic/Arrays%20\(C%23%20Programming%20Guide\).md)