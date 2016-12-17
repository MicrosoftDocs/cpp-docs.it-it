---
title: "Il costruttore di attributo ha un parametro di tipo &#39;&lt;tipo&gt;&#39;, che non &#232; di tipo integrale, a virgola mobile o Enum e neppure di tipo Object, Char, String, Boolean, System.Type, n&#233; una matrice unidimensionale di tali tipi | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30045"
  - "vbc30045"
helpviewer_keywords: 
  - "BC30045"
ms.assetid: 16899755-7901-4c56-ae90-54c3532e8319
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il costruttore di attributo ha un parametro di tipo &#39;&lt;tipo&gt;&#39;, che non &#232; di tipo integrale, a virgola mobile o Enum e neppure di tipo Object, Char, String, Boolean, System.Type, n&#233; una matrice unidimensionale di tali tipi
Una definizione di attributo personalizzato include un costruttore che specifica un tipo di dati non valido per un parametro. Gli attributi accettano solo determinati tipi di dati come parametri, poiché solo tali tipi possono essere serializzati nei metadati per l'assembly.  
  
 **ID errore:** BC30045  
  
### Per correggere l'errore  
  
1.  Modificare il tipo di dati del parametro in `Byte`, `Short`, `Integer`, `Long`, `Single`, `Double`, `Char`, `String`, `Boolean`, `System.Type` o un tipo di enumerazione.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi personalizzati in Visual Basic](http://msdn.microsoft.com/it-it/d72d8a5c-8f64-4614-b15b-cad66845d047)