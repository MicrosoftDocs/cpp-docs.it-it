---
title: "Errore del compilatore CS0453 | Microsoft Docs"
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
  - "CS0453"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0453"
ms.assetid: a1bbd09e-6313-4bfd-84bf-bc15a8d214a6
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0453
Il tipo 'type name' deve essere un tipo valore non nullable per poter essere usato come parametro 'Parameter Name' nel metodo o nel tipo generico 'Generic Identifier'  
  
 Questo errore si verifica quando si usa un argomento di tipo non valore quando si crea un'istanza di un metodo o tipo generico a cui è applicato il vincolo **value**. Può verificarsi anche quando si usa un argomento di tipo valore nullable. Vedere le ultime due righe di codice nell'esempio seguente.  
  
## Esempio  
 Il codice seguente genera questo errore.  
  
```  
// CS0453.cs using System; public class HV<S> where S : struct { } public class H1 : HV<string> { }                   // CS0453 public class H2 : HV<H1> { }                       // CS0453 public class H3<S> : HV<S> where S : class { }     // CS0453 public class H4 : HV<int?> { }                     // CS0453 public class H5 : HV<Nullable<Nullable<int>>> { }  // CS0453  
```