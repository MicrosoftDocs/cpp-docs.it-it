---
title: "Il metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nomemodulo&gt;&#39; non &#232; generico o non ha parametri di tipo disponibili e quindi non pu&#242; avere argomenti di tipo | Microsoft Docs"
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
  - "bc36907"
  - "vbc36907"
helpviewer_keywords: 
  - "BC36907"
ms.assetid: 45191e93-89d1-48ec-99a5-ff9661a2a6ee
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nomemodulo&gt;&#39; non &#232; generico o non ha parametri di tipo disponibili e quindi non pu&#242; avere argomenti di tipo
È stato specificato un argomento di tipo in una chiamata a un metodo di estensione che è privo di parametri generici o non ha parametri generici per cui è non è già specificato un tipo. Il codice seguente, ad esempio, causa questo errore.  
  
```vb#  
' The extension method is not generic. <Extension()> _ Sub Example(ByVal str As String) ' Body of the Sub. End Sub  
```  
  
```vb#  
Dim str = "hi" '' The call to Example specifies a type argument. '' Not valid. 'str.Example(Of String)()  
```  
  
 **ID errore:** BC36907  
  
### Per correggere l'errore  
  
-   Aggiungere un parametro di tipo per la definizione di metodo di estensione.  
  
-   Rimuovere l'argomento di tipo in eccesso dalla chiamata di routine.  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)