---
title: "Impossibile inizializzare la propriet&#224; &#39;&lt;nomepropriet&#224;&gt;&#39; in un&#39;espressione dell&#39;inizializzatore di oggetto. Tutti gli overload accessibili richiedono argomenti | Microsoft Docs"
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
  - "bc30993"
  - "vbc30993"
helpviewer_keywords: 
  - "BC30993"
ms.assetid: d4476065-2ca2-4c9e-a571-c08917a6387f
caps.latest.revision: 13
caps.handback.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile inizializzare la propriet&#224; &#39;&lt;nomepropriet&#224;&gt;&#39; in un&#39;espressione dell&#39;inizializzatore di oggetto. Tutti gli overload accessibili richiedono argomenti
I membri inizializzati in un elenco di inizializzatori di oggetto devono essere campi o proprietà. Inoltre, le proprietà in un elenco di inizializzatori non possono avere parametri. La proprietà che causa l'errore è in overload e ognuna delle versioni richiede argomenti. Di conseguenza, non è possibile inizializzare la proprietà in un elenco di inizializzatori di oggetto.  
  
 **ID errore:** BC30993  
  
### Per correggere l'errore  
  
-   Rimuovere la proprietà che richiede argomenti dall'elenco di inizializzatori.  
  
## Esempio  
 La classe seguente contiene le definizioni di tre proprietà: una per `TotalItems` e due per `Item`, che viene sottoposta a overload.  
  
```  
Class CollectionOfItems Property TotalItems() As Integer Get End Get Set(ByVal value As Integer) End Set End Property Property Item(ByVal Key As String) As Object Get End Get Set(ByVal value As Object) End Set End Property Property Item(ByVal Index As Integer) As Object Get End Get Set(ByVal value As Object) End Set End Property End Class  
```  
  
 La proprietà `TotalItems` non richiede argomenti e può essere inizializzata in un elenco di inizializzazione di oggetti, come illustrato nella seguente dichiarazione.  
  
```  
Dim coinCollection As New CollectionOfItems With { .TotalItems = 0 }  
```  
  
 La proprietà `Item` è in overload e ogni overload richiede un argomento. Di conseguenza, `Item` non può trovarsi in un elenco di inizializzatori di oggetto.  
  
```  
' The following declaration is not valid. ' Dim coinCollection As New CollectionOfItems With { .TotalItems = 0, _ '    .Item = aCoinObject }  
```  
  
 Per evitare questo errore, inizializzare la proprietà `Item` all'esterno dell'inizializzatore di oggetto.  
  
```  
Dim coinCollection As New CollectionOfItems With { .TotalItems = 0 } coinCollection.Item(1) = aCoinObject  
```  
  
## Vedere anche  
 [NOT IN BUILD: Proprietà e routine delle proprietà](http://msdn.microsoft.com/it-it/23e2a1ec-7e9d-4109-8940-c703d981077b)   
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [How to: Call a Property Procedure](../Topic/How%20to:%20Call%20a%20Property%20Procedure%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Proprietà predefinite](http://msdn.microsoft.com/it-it/a70f2a27-8176-4858-935e-f25afdd43ab5)   
 [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md)   
 [Procedure Overloading](../Topic/Procedure%20Overloading%20\(Visual%20Basic\).md)