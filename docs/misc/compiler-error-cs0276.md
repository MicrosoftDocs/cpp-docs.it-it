---
title: "Errore del compilatore CS0276 | Microsoft Docs"
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
  - "CS0276"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0276"
ms.assetid: 0c49017f-c7a9-42a5-9d0a-6f1d82142bd7
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0276
'property\/indexer': i modificatori di accessibilità per le funzioni di accesso possono essere usati solo se la proprietà o l'indicizzatore ha entrambe le funzioni di accesso get e set  
  
 Questo errore si verifica quando si dichiara una proprietà o un indicizzatore solo con una funzione di accesso e si usa un modificatore di accesso per la funzione di accesso. Per risolvere l'errore, rimuovere il modificatore di accesso o aggiungere un'altra funzione di accesso.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0276:  
  
```  
// CS0276.cs public class MyClass { public int Property { protected set { }   // CS0276 } public int Property2 { internal get { }   // CS0276 } }  
```