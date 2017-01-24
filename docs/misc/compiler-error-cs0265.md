---
title: "Errore del compilatore CS0265 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0265"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0265"
ms.assetid: d43d19c2-8a66-4bb1-95a0-557b0a29bce1
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0265
Le dichiarazioni parziali di 'type' contengono vincoli incoerenti per il parametro di tipo 'type parameter'  
  
 Questo errore si verifica quando le dichiarazioni parziali di una classe generica definita come classe parziale sono presenti in più posizioni e i vincoli relativi al tipo generico sono incoerenti oppure differiscono in almeno due posizioni. I vincoli specificati in più posizioni devono essere identici. Questo problema può essere facilmente evitato dichiarando i vincoli in un'unica posizione e omettendoli da tutti le altre. Per altre informazioni, vedere [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md) e [Vincoli sui parametri di tipo](../Topic/Constraints%20on%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md).  
  
 Il codice seguente genera l'errore CS0265.  
  
## Esempio  
 In questo esempio di codice le definizioni parziali della classe sono incluse in un singolo file, ma potrebbero essere contenute in più moduli.  
  
```  
// CS0265.cs public class GenericsErrors { interface IFace1 { } interface IFace2 { } partial class PartialBadBounds<T> where T : IFace1 { } // CS0265 partial class PartialBadBounds<T> where T : IFace2 { } }  
```