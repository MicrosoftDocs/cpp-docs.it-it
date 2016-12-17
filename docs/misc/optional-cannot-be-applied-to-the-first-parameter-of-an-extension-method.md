---
title: "Impossibile applicare &#39;Optional&#39; al primo parametro di un metodo di estensione | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc36553"
  - "vbc36553"
helpviewer_keywords: 
  - "BC36553"
ms.assetid: 8ea0b90c-f155-47a9-988b-5b8009b510af
caps.latest.revision: 19
caps.handback.revision: 19
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare &#39;Optional&#39; al primo parametro di un metodo di estensione
Impossibile applicare 'Optional' al primo parametro di un metodo di estensione. Il primo parametro specifica il tipo da estendere.  
  
 Il primo parametro di un metodo di estensione specifica il tipo di dati che il metodo estende. Quando viene eseguito il metodo, il primo parametro è associato all'istanza del tipo di dati che richiama il metodo. Di conseguenza, il primo parametro è obbligatorio e non può essere facoltativo.  
  
 La restrizione si applica solo al primo parametro. Altri parametri possono essere facoltativi oppure no, seguendo le stesse regole di qualsiasi altro metodo. Per altre informazioni, vedere [Parameter List](../Topic/Parameter%20List%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC36553  
  
### Per correggere l'errore  
  
-   Se si vuole che il primo parametro corrente specifichi il tipo di dati che viene esteso, rimuovere la parola chiave `Optional`.  
  
-   Se il primo parametro corrente è un parametro standard al metodo e si vuole che rappresenti il tipo di dati da estendere, aggiungere un nuovo primo parametro.  
  
## Esempio  
 Il primo parametro nell'esempio seguente è l'unica indicazione che il metodo `Print` estende il tipo di dati `String`. Di conseguenza, non può essere facoltativo.  
  
```  
<Extension()> Public Sub Print (ByVal str As String) Console.WriteLine(str) End Sub  
```  
  
 Quando il metodo di estensione viene chiamato nel modo seguente, il parametro `str` nel metodo viene associato a `greeting`, l'istanza di `String` che chiama `Print`. Il compilatore usa `greeting` come argomento al metodo di estensione `Print`.  
  
```  
Dim greeting As String = "Hello" greeting.Print()  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Procedura: Definire parametri facoltativi per una routine \(Visual Basic\)](http://msdn.microsoft.com/it-it/0b32b312-0da0-489b-96ad-7dcb1f1f8f88)   
 [Optional Parameters](../Topic/Optional%20Parameters%20\(Visual%20Basic\).md)