---
title: "Avviso di conformit&#224; a CLS CLS02809 | Microsoft Docs"
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
  - "CLS02809"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS02809"
ms.assetid: a6e7b8e5-1587-437e-9d07-8a32fc5c4842
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS02809
Le proprietà devono essere conformi a un pattern di nome specifico  
  
 Le proprietà devono essere conformi a un pattern di nome specifico; il nome delle funzioni di accesso della proprietà sarà identico al nome della proprietà, preceduto da **get\_** o **set\_**.  
  
 L'attributo **specialname** deve essere ignorato nei confronti tra nomi appropriati e deve essere conforme alle regole dell'identificatore.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 La dichiarazione di funzione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS02809:  
  
```  
.method public specialname instance void set_MyPropertya(int32 __unnamed000) cil managed { } // end of method One::set_MyProperty .method public specialname instance int32 get_MyPropertya() cil managed { } // end of method One::get_MyProperty .property instance int32 MyProperty() { .get instance int32 One::get_MyPropertya() .set instance void One::set_MyPropertya(int32) } // end of property One::MyProperty  
```  
  
 Notare che i nomi di tutte le funzioni di accesso eventi sono diversi dal nome della proprietà.  L'errore CLS02809 si risolve assicurandosi che i nomi delle proprietà siano conformi al pattern di nome.