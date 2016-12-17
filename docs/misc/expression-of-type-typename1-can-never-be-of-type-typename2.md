---
title: "L&#39;espressione di tipo &#39;&lt;nometipo1&gt;&#39; non pu&#242; mai essere di tipo &#39;&lt;nometipo2&gt;&#39; | Microsoft Docs"
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
  - "vbc31430"
  - "bc31430"
helpviewer_keywords: 
  - "BC31430"
ms.assetid: 1d527033-3f6f-4945-b1d3-5ef59a1e1b53
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;espressione di tipo &#39;&lt;nometipo1&gt;&#39; non pu&#242; mai essere di tipo &#39;&lt;nometipo2&gt;&#39;
Un'espressione `TypeOf`...`Is` consente di eseguire il test di una variabile di riferimento a un oggetto in un tipo di dati che non può contenere.  
  
 In alcuni casi il compilatore può determinare che un test dell'espressione `TypeOf`...`Is` possa avere solo esito negativo, ad esempio se non esiste alcuna relazione di ereditarietà tra le due classi.  
  
 Il codice seguente può generare questo errore.  
  
 `Dim refVar as System.Windows.Forms.Form`  
  
 `If TypeOf refVar Is System.Array`  
  
 `End If`  
  
 Poiché <xref:System.Windows.Forms.Form> e <xref:System.Array> sono tipi completamente non correlati, il compilatore può determinare che l'espressione `TypeOf`...`Is` restituisca `False` per qualsiasi valore di `refVar`.  
  
 **ID errore:** BC31430  
  
### Per correggere l'errore  
  
-   Eseguire il test della variabile di un tipo di dati realistico oppure rimuovere il test `TypeOf`...`Is` completamente.  
  
## Vedere anche  
 [TypeOf Operator](../Topic/TypeOf%20Operator%20\(Visual%20Basic\).md)   
 [How to: Determine What Type an Object Variable Refers To](../Topic/How%20to:%20Determine%20What%20Type%20an%20Object%20Variable%20Refers%20To%20\(Visual%20Basic\).md)