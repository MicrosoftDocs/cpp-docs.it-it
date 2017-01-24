---
title: "Il riferimento all&#39;assembly Friend &lt;riferimento&gt; non &#232; valido. Nelle dichiarazioni InternalsVisibleTo non &#232; possibile specificare la versione, le impostazioni cultura, il token di chiave pubblica o l&#39;architettura del processore. | Microsoft Docs"
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
  - "bc31534"
  - "vbc31534"
helpviewer_keywords: 
  - "BC31534"
ms.assetid: ae1e470e-3105-48f2-87b1-466e395a7d44
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il riferimento all&#39;assembly Friend &lt;riferimento&gt; non &#232; valido. Nelle dichiarazioni InternalsVisibleTo non &#232; possibile specificare la versione, le impostazioni cultura, il token di chiave pubblica o l&#39;architettura del processore.
Il nome dell'assembly passato al costruttore di attributo <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> contiene un attributo `Version`, `Culture`, `PublicKeyToken` o `processorArchitecture`.  
  
 **ID errore:** BC31534  
  
### Per correggere l'errore  
  
1.  Rimuovere l'attributo `Version`, `Culture`, `PublicKeyToken` o `processorArchitecture` dal nome dell'assembly passato al costruttore di attributo <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute>.  
  
## Vedere anche  
 <xref:System.Reflection.AssemblyName>   
 [NOT IN BUILD: Assembly Friend \(Visual Basic\)](http://msdn.microsoft.com/it-it/80e7a33a-ca91-450b-a00e-c5a7986e228c)