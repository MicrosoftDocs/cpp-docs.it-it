---
title: "&lt;tipo1&gt; &#39;&lt;nometipo&gt;&#39; non pu&#242; essere dichiarato come &#39;Overrides&#39; perch&#233; non esegue l&#39;override di un &lt;tipo1&gt; in una &lt;tipo2&gt; base | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30284"
  - "bc30284"
helpviewer_keywords: 
  - "BC30284"
ms.assetid: 8166bd09-dad3-495d-8cf7-66f90824a288
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;tipo1&gt; &#39;&lt;nometipo&gt;&#39; non pu&#242; essere dichiarato come &#39;Overrides&#39; perch&#233; non esegue l&#39;override di un &lt;tipo1&gt; in una &lt;tipo2&gt; base
Un'istruzione `Sub`, `Function` o `Property` specifica `Overrides` quando non è presente alcun tipo con lo stesso nome in una classe base.  
  
 **ID errore:** BC30284  
  
### Per correggere l'errore  
  
1.  Verificare che il nome del tipo sia stato digitato correttamente.  
  
2.  Rimuovere la parola chiave `Overrides` superflua.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)