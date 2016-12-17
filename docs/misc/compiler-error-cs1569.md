---
title: "Errore del compilatore CS1569 | Microsoft Docs"
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
  - "CS1569"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1569"
ms.assetid: 1d5e89d6-0a05-4e4f-b472-9089146696bb
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1569
Errore nella generazione del file di documentazione XML 'Filename' \('reason'\)  
  
 Il tentativo di scrittura della documentazione XML nel file non è riuscito per il motivo indicato, ad esempio perché non è stato possibile trovare l'unità di rete o perché è stato negato l'accesso. Nel motivo vengono generalmente fornite indicazioni per risolvere il problema. Ad esempio, se l'errore si è verificato perché è stato negato l'accesso, sarà necessario accertarsi di avere le autorizzazioni di scrittura sul file.  
  
## Esempio  
  
```  
// 1569a.cs // compile with: /doc:CS1569.xml // post-build command: attrib +r CS1569.xml class Test { /// <summary>Test.</summary> public static void Main() {} }  
```  
  
## Esempio  
 L'esempio precedente ha generato un file con estensione xml impostato quindi su sola lettura. In questo esempio si prova a scrivere nello stesso file. L'esempio seguente genera l'errore CS1569.  
  
```  
// CS1569.cs // compile with: /doc:CS1569.xml // CS1569 expected class Test { /// <summary>Test.</summary> public static void Main() {} }  
  
```