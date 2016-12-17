---
title: "Impossibile inizializzare la propriet&#224; &#39;&lt;nomepropriet&#224;&gt;&#39; in un&#39;espressione dell&#39;inizializzatore di oggetto. Richiede argomenti | Microsoft Docs"
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
  - "bc30992"
  - "vbc30992"
helpviewer_keywords: 
  - "BC30992"
ms.assetid: a4d050b2-7366-457a-a852-8eb490c97573
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile inizializzare la propriet&#224; &#39;&lt;nomepropriet&#224;&gt;&#39; in un&#39;espressione dell&#39;inizializzatore di oggetto. Richiede argomenti
I membri inizializzati in un elenco di inizializzatori di oggetto devono essere campi o proprietà e i membri della proprietà non possono avere parametri. Ad esempio, le proprietà predefinite richiedono argomenti, quindi non possono essere inizializzate in un elenco di inizializzatori di oggetto. Per altre informazioni, vedere [NOT IN BUILD: Proprietà predefinite](http://msdn.microsoft.com/it-it/a70f2a27-8176-4858-935e-f25afdd43ab5).  
  
 **ID errore:** BC30992  
  
### Per correggere l'errore  
  
-   Rimuovere dall'elenco di inizializzazione tutte le proprietà che hanno argomenti.  
  
## Esempio  
 La classe seguente contiene una proprietà predefinita, `defaultProp`, che richiede un argomento integer.  
  
```  
Public Class SomeStrings Private myStrings() As String Sub New(ByVal size As Integer) ReDim myStrings(size) End Sub Default Property defaultProp(ByVal index As Integer) As String Get Return myStrings(index) End Get Set(ByVal Value As String) myStrings(index) = Value End Set End Property End Class  
```  
  
 Dal momento che la proprietà predefinita richiede un argomento, la seguente dichiarazione genera un errore.  
  
```  
' Dim strs As New SomeStrings(2) With { .defaultProp = "One" }  
```  
  
## Vedere anche  
 [NOT IN BUILD: Proprietà predefinite](http://msdn.microsoft.com/it-it/a70f2a27-8176-4858-935e-f25afdd43ab5)   
 [NOT IN BUILD: Proprietà e routine delle proprietà](http://msdn.microsoft.com/it-it/23e2a1ec-7e9d-4109-8940-c703d981077b)   
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)