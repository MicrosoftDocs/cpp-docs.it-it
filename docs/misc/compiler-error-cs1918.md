---
title: "Errore del compilatore CS1918 | Microsoft Docs"
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
  - "CS1918"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1918"
ms.assetid: 9ad2cbbd-3c10-4d56-b4cd-385103d005d4
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1918
Non è possibile assegnare i membri della proprietà 'name' di tipo 'type' con un inizializzatore di oggetto perché è di un tipo valore.  
  
 Questo errore si verifica quando si tenta di usare un inizializzatore di oggetto per inizializzare le proprietà di un tipo struct che è una proprietà della classe in fase di inizializzazione.  
  
### Per correggere l'errore  
  
1.  Se è necessario inizializzare completamente i campi della proprietà nell'inizializzatore di oggetto, impostare lo struct su un tipo classe. In caso contrario, inizializzare i membri dello struct in una chiamata a metodo separata dopo avere creato l'oggetto mediante l'inizializzatore di oggetto.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1918:  
  
```  
// cs1918.cs public struct MyStruct { public int i; } public class Test { private MyStruct str = new MyStruct(); public MyStruct Str { get { return str; } } public static int Main() { Test t = new Test { Str = { i = 1 } }; // CS1918 return 0; } }  
  
```  
  
## Vedere anche  
 [Inizializzatori di oggetto e di raccolta](../Topic/Object%20and%20Collection%20Initializers%20\(C%23%20Programming%20Guide\).md)