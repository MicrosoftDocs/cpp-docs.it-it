---
title: "Risoluzione dei problemi relativi alle eccezioni: System.ArgumentException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "ArgumentException (eccezione)"
  - "System.ArgumentException (eccezione)"
ms.assetid: d8052e62-bc73-4828-87e9-a84ef2a39a5b
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.ArgumentException
Viene generata un'eccezione <xref:System.ArgumentException> quando almeno uno degli argomenti forniti a un metodo non soddisfa le specifiche dei parametri del metodo.  
  
 Nell'esempio seguente l'eccezione viene generata quando l'argomento inviato al metodo `DivideByTwo` non è un numero pari.  
  
```vb#  
Module Module1 Sub Main() ' ArgumentException is not thrown in DivideByTwo because 10 is ' an even number. Console.WriteLine("10 divided by 2 is {0}", DivideByTwo(10)) Try ' ArgumentException is thrown in DivideByTwo because 7 is ' not an even number. Console.WriteLine("7 divided by 2 is {0}", DivideByTwo(7)) Catch argEx As ArgumentException ' Tell the user which problem is encountered. Console.WriteLine("7 cannot be evenly divided by 2.") Console.WriteLine("Exception message: " & argEx.Message) End Try ' Uncomment the next statement to see what happens if you call ' DivideByTwo directly. 'Console.WriteLine(DivideByTwo(7)) End Sub Function DivideByTwo(ByVal num As Integer) As Integer ' If num is an odd number, throw an ArgumentException. The ' ArgumentException class provides a number of constructors ' that you can choose from. If num Mod 2 = 1 Then Throw New ArgumentException("Argument for num must be" & _ " an even number.") End If ' Value of num is even, so return half of its value. Return num / 2 End Function End Module  
```  
  
 Tutte le istanze della classe `ArgumentException` devono includere informazioni che specificano l'argomento non valido e l'intervallo di valori accettabili. Se un'eccezione più precisa, ad esempio <xref:System.ArgumentNullException> o <xref:System.ArgumentOutOfRangeException>, descrive la situazione in mopo accurato, deve essere utilizzata tale eccezione anziché `ArgumentException`.  
  
 Per ulteriori informazioni su questa eccezione, compresi esempi in altri linguaggi, vedere <xref:System.ArgumentException>. Per un elenco di costruttori aggiuntivi, vedere <xref:System.ArgumentException.%23ctor%2A>.  
  
## Vedere anche  
 <xref:System.ArgumentException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)