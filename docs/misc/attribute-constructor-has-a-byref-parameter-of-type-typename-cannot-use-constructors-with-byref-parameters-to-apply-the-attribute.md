---
title: "Il costruttore di attributo ha un parametro &#39;ByRef&#39; di tipo &#39;&lt;nometipo&gt;&#39;. Impossibile utilizzare i costruttori con parametri byref per applicare l&#39;attributo | Microsoft Docs"
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
  - "bc36006"
  - "vbc36006"
helpviewer_keywords: 
  - "BC36006"
ms.assetid: 4c4e991f-3839-4196-bcfb-eb8464aa55e5
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il costruttore di attributo ha un parametro &#39;ByRef&#39; di tipo &#39;&lt;nometipo&gt;&#39;. Impossibile utilizzare i costruttori con parametri byref per applicare l&#39;attributo
È possibile applicare l'attributo a un elemento di programmazione usando un costruttore di attributo che accetta un parametro `ByRef`.  
  
 Gli attributi vengono applicati in fase di compilazione ed è necessario che il compilatore passi valori concreti al costruttore di attributo. Un parametro `ByRef` accetta un puntatore a un valore che non può essere valutato in fase di compilazione.  
  
 È possibile definire un costruttore di attributo che accetta il parametro `ByRef` e usarlo per vari scopi quali l'eredità, ma quando l'attributo viene applicato è necessario usare un costruttore che non accetta parametri `ByRef`.  
  
 **ID errore:** BC36006  
  
### Per correggere l'errore  
  
-   Applicare l'attributo usando un costruttore che non accetta parametri `ByRef` oppure non applicare l'attributo.  
  
## Vedere anche  
 [NOT IN BUILD: Cenni preliminari sugli attributi in Visual Basic](http://msdn.microsoft.com/it-it/0d0cff64-892d-4f57-83bd-bef388553d4f)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Passing Arguments by Value and by Reference](../Topic/Passing%20Arguments%20by%20Value%20and%20by%20Reference%20\(Visual%20Basic\).md)   
 [ByRef](../Topic/ByRef%20\(Visual%20Basic\).md)