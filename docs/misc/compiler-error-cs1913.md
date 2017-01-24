---
title: "Errore del compilatore CS1913 | Microsoft Docs"
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
  - "CS1913"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1913"
ms.assetid: 652494b3-9576-4a4c-a9ee-695f86c4a023
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1913
Impossibile inizializzare il membro 'name'. Non è un campo o una proprietà.  
  
 Gli inizializzatori di oggetto possono essere usati solo per inizializzare campi o proprietà accessibili.  
  
### Per correggere l'errore  
  
1.  Inizializzare il membro della classe in un costruttore regolare o in un altro metodo di inizializzazione.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1913:  
  
```  
// cs1912.cs class A { public delegate void D(); public event D myEvent; } public class Test { static void Main() { A a = new A() {myEvent = M}; // CS1913 } public void M(){} }  
```  
  
## Vedere anche  
 [Classi e struct](../Topic/Classes%20and%20Structs%20\(C%23%20Programming%20Guide\).md)