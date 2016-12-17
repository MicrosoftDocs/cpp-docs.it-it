---
title: "Avviso di conformit&#224; a CLS CLS02902 | Microsoft Docs"
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
  - "CLS02902"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS02902"
ms.assetid: 028c91fc-d3bb-4c97-92e6-159b5d663fc2
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS02902
I metodi che implementano un evento devono essere contrassegnati come SpecialName nei metadati  
  
 Un metodo che implementa un evento non è stato contrassegnato con **specialname** nei metadati.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 La dichiarazione di funzione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS02902:  
  
```  
.method public instance void raise_MyEvent(object __unnamed000, class [mscorlib]System.EventArgs __unnamed001) cil managed { } // end of method One::raise_MyEvent  
```  
  
 Aggiungendo la parola chiave **specialname** è possibile risolvere il problema:  
  
```  
.method public specialname instance void raise_MyEvent(object __unnamed000, class [mscorlib]System.EventArgs __unnamed001) cil managed { } // end of method One::raise_MyEvent  
```