---
title: "Avviso di conformit&#224; a CLS CLS02409 | Microsoft Docs"
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
  - "CLS02409"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS02409"
ms.assetid: 71d566ce-59c2-4d3d-97ff-72f4e9bd21ee
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS02409
I metodi tramite cui vengono implementati i metodi Get e Set di una proprietà devono essere contrassegnati come SpecialName nei metadati  
  
 I metodi che implementano vengono implementati i metodi Get e Set di una proprietà devono essere contrassegnati come **specialname** nei metadati.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 La dichiarazione di funzione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS02409:  
  
```  
.method public instance int32 get_MyProperty() cil managed  
```  
  
 Aggiungendo la parola chiave **specialname** è possibile risolvere il problema:  
  
```  
.method public specialname instance int32 get_MyProperty() cil managed  
```