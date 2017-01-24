---
title: "&lt;tipo&gt; &#39;&lt;nometipo&gt;&#39; nasconde un metodo di cui &#232; possibile eseguire l&#39;override nella classe base | Microsoft Docs"
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
  - "vbc40005"
  - "bc40005"
helpviewer_keywords: 
  - "BC40005"
ms.assetid: 1dadda7f-1d26-4ae8-a668-9f69d55ceb50
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;tipo&gt; &#39;&lt;nometipo&gt;&#39; nasconde un metodo di cui &#232; possibile eseguire l&#39;override nella classe base
\<tipo\> '\<nometipo\>' nasconde un metodo di cui è possibile eseguire l'override nella classe base. Per eseguire l'override del metodo di base, quest'ultimo deve essere dichiarato 'Overrides'.  
  
 Un elemento di programmazione è dichiarato con lo stesso nome di una proprietà o di una routine sottoponibile a override definita nella classe base. In questa situazione l'elemento in questa classe deve nascondere l'elemento della classe base.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40005  
  
### Per correggere l'errore  
  
-   Se si intende sottoporre a override la routine di base, aggiungere la parola chiave `Overrides` alla dichiarazione.  
  
-   Se si intende nascondere la routine di base, aggiungere la parola chiave `Shadows` alla dichiarazione.  
  
-   Se non si intende eseguire nessuna di queste operazioni, cambiare il nome dell'elemento che si intende dichiarare.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)   
 [Shadowing in Visual Basic](../Topic/Shadowing%20in%20Visual%20Basic.md)   
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md)