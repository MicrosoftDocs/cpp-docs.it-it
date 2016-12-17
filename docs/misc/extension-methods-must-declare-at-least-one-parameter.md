---
title: "I metodi di estensione devono dichiarare almeno un parametro | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc36552"
  - "bc36552"
helpviewer_keywords: 
  - "BC36552"
ms.assetid: a8cc8cdd-cdb5-42ca-b5a1-c9a71abd46eb
caps.latest.revision: 15
caps.handback.revision: 15
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi di estensione devono dichiarare almeno un parametro
I metodi di estensione devono dichiarare almeno un parametro. Il primo parametro specifica il tipo da estendere.  
  
 Un metodo di estensione senza parametri non è valido perché il primo parametro specifica quale tipo di dati viene esteso dal metodo. Il primo parametro viene associato all'istanza del tipo di dati che richiama il metodo.  
  
 **ID errore:** BC36552  
  
### Per correggere l'errore  
  
-   Aggiungere un parametro del tipo che il metodo estende.  
  
## Esempio  
 Il primo parametro nell'esempio seguente indica che il metodo `Print` estende il tipo di dati `String`.  
  
```  
<Extension()> _ Public Sub Print (ByVal str As String) Console.WriteLine(str) End Sub  
```  
  
 Quando il metodo di estensione viene chiamato nel modo seguente, il parametro `str` nel metodo viene associato a `greeting`, l'istanza di `String` che chiama `Print`. Il compilatore userà `greeting` come argomento al metodo di estensione `Print`.  
  
```  
Dim greeting As String = "Hello" greeting.Print()  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Procedure Parameters and Arguments](../Topic/Procedure%20Parameters%20and%20Arguments%20\(Visual%20Basic\).md)   
 [Procedures](../Topic/Procedures%20in%20Visual%20Basic.md)