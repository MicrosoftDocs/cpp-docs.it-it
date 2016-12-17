---
title: "Errore del compilatore CS0454 | Microsoft Docs"
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
  - "CS0454"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0454"
ms.assetid: 2c83bc5e-53bb-473e-92aa-5122dadd79d1
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0454
Dipendenza di vincolo circolare che interessa 'Type Parameter 1' e 'Type Parameter 2'  
  
 Questo errore si verifica perché a un certo punto un parametro di tipo fa riferimento a un altro e quest'ultimo a sua volta fa riferimento al primo. Per correggere questo errore, interrompere la dipendenza circolare rimuovendo uno dei vincoli. Tenere presente che la dipendenza di vincolo circolare può essere indiretta.  
  
## Esempio  
 Il codice seguente genera l'errore CS0454.  
  
```  
// CS0554 using System; public class GenericsErrors { public class G4<T> where T : T { } // CS0454 }  
```  
  
## Esempio  
 L'esempio seguente mostra una dipendenza circolare tra due vincoli di tipo.  
  
```  
public class Gen<T,U> where T : U where U : T  // CS0454 { }  
```