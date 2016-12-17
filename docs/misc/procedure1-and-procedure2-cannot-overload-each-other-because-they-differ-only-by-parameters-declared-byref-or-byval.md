---
title: "&#39;&lt;routine1&gt;&#39; e &#39;&lt;routine2&gt;&#39; non possono essere in rapporto di overload perch&#233; si differenziano solo per i parametri dichiarati come &#39;ByRef&#39; o &#39;ByVal&#39; | Microsoft Docs"
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
  - "vbc42003"
  - "bc42003"
helpviewer_keywords: 
  - "BC42003"
ms.assetid: f058f1e0-64d2-4497-85fc-a58e16b0d805
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;routine1&gt;&#39; e &#39;&lt;routine2&gt;&#39; non possono essere in rapporto di overload perch&#233; si differenziano solo per i parametri dichiarati come &#39;ByRef&#39; o &#39;ByVal&#39;
'\<routine1\>' e '\<routine2\>' non possono essere in rapporto di overload perché si differenziano solo per i parametri dichiarati come ByRef o ByVal. Verrà usato Shadows.  
  
 Due dichiarazioni di routine specificano lo stesso nome o lo stesso elenco di argomenti e l'unica differenza si trova nella dichiarazione di `ByRef` o `ByVal` per uno o più argomenti. Le versioni di overload di una routine devono differenziarsi nel numero, nella disposizione o nel tipo di dati degli argomenti.  
  
 Si tratta di un messaggio di avviso. Per impostazione predefinita viene usato `Shadows`. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42003  
  
### Per correggere l'errore  
  
-   Se si intende creare una serie di versioni di overload di una routine, usare numeri, disposizioni o tipi di dati diversi per ogni versione. Aggiungere anche la parola chiave `Overloads` a ogni dichiarazione.  
  
-   Se non si intende eseguire l'overload di una routine, cambiare il nome della routine in una delle dichiarazioni.  
  
## Vedere anche  
 [Procedure Overloading](../Topic/Procedure%20Overloading%20\(Visual%20Basic\).md)