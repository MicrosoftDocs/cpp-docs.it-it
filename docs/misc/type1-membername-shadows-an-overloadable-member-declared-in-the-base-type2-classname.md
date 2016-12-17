---
title: "&lt;tipo1&gt; &#39;&lt;nomemembro&gt;&#39; nasconde un membro che supporta l&#39;overload dichiarato nel &lt;tipo2&gt; di base &#39;&lt;nomeclasse&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc40003"
  - "vbc40003"
helpviewer_keywords: 
  - "BC40003"
ms.assetid: 1e0d2061-0ad9-4915-b946-d55cb5d5ee80
caps.latest.revision: 14
caps.handback.revision: 14
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;tipo1&gt; &#39;&lt;nomemembro&gt;&#39; nasconde un membro che supporta l&#39;overload dichiarato nel &lt;tipo2&gt; di base &#39;&lt;nomeclasse&gt;&#39;
\<tipo1\> '\<nomemembro\>' nasconde un membro che supporta l'overload dichiarato nel \<tipo2\> di base '\<nomeclasse\>'. Per eseguire l'overload del metodo di base, quest'ultimo deve essere dichiarato 'Overloads'.  
  
 Una classe derivata definisce una routine `Function` o `Sub` oppure una `Property` con lo stesso nome di una routine o proprietà definita nella classe base. Dal momento che le routine e le proprietà sono membri che supportano l'overload, la classe derivata può eseguire l'overload o nascondere il membro della classe base. Tuttavia, il codice della classe derivata non specifica [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md) o [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md) nella dichiarazione. In assenza di una parola chiave, il compilatore presuppone `Shadows`.  
  
 È buona norma specificare `Overloads` o `Shadows` nella programmazione. Questo rende il codice più semplice da leggere e comprendere.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40003  
  
### Per correggere l'errore  
  
-   Se si vuole eseguire l'overload del metodo della classe base o di una proprietà, includere la parola chiave `Overloads` nella dichiarazione.  
  
-   Se si vuole nascondere il metodo della classe base o una proprietà, includere la parola chiave `Shadows` invece di `Overloads`.  
  
-   Se non si vuole né eseguire l'overload né nascondere il membro della classe base, modificare il nome del membro della classe derivata.  
  
## Vedere anche  
 [Procedure Overloading](../Topic/Procedure%20Overloading%20\(Visual%20Basic\).md)   
 [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md)   
 [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md)   
 [Shadowing in Visual Basic](../Topic/Shadowing%20in%20Visual%20Basic.md)   
 [Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md)   
 [Sub Statement](../Topic/Sub%20Statement%20\(Visual%20Basic\).md)   
 [Property Statement](../Topic/Property%20Statement.md)