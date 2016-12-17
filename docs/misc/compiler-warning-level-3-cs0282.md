---
title: "Avviso del compilatore (livello 3) CS0282 | Microsoft Docs"
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
  - "CS0282"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0282"
ms.assetid: fd4cda5d-81c7-40e3-8424-c938b3447356
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0282
Non è stato definito nessun ordine tra i campi in più dichiarazioni di classe o struct parziale 'type'. Per specificare un ordine, tutti i campi dell'istanza devono essere inclusi nella stessa dichiarazione.  
  
 Per correggere l'errore, inserire tutte le variabili membro in una singola definizione parziale della classe.  
  
 In genere questo errore si verifica quando si definisce uno `struct` parziale in più posizioni e le variabili membro sono contenute in definizioni diverse.  
  
 Il codice seguente genera l'errore CS0282.  
  
## Esempio  
 Il codice che segue contiene una descrizione di uno `struct`. Compilare i due moduli in un unico passaggio usando il comando:  
  
 `csc /targt:library cs0282_1.cs cs0282_2.cs`  
  
```  
partial struct A { int i; }  
```  
  
## Esempio  
 Questo codice contiene una descrizione in conflitto dello stesso `struct`.  
  
```  
partial struct A { int j; }  
```