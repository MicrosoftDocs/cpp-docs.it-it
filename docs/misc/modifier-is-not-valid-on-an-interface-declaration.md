---
title: "&#39;&lt;modificatore&gt;&#39; non &#232; valido in una dichiarazione Interface | Microsoft Docs"
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
  - "bc30397"
  - "vbc30397"
helpviewer_keywords: 
  - "BC30397"
ms.assetid: 9143dc87-c396-4ff9-9987-0b460ee32b38
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;modificatore&gt;&#39; non &#232; valido in una dichiarazione Interface
È stato usato un modificatore che non è valido in una dichiarazione `Interface`. Gli unici modificatori validi per le istruzioni `Sub`, `Function` o `Property` dichiarate in una dichiarazione `Interface` sono le parole chiave `Overloads` e `Default`. Altri modificatori, ad esempio `Public`, `Private`, `Friend`, `Protected`, `Shared`, `Static`, `Overrides`, `MustOverride` e `Overridable`, non sono validi.  
  
 **ID errore:** BC30397  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore.  
  
## Vedere anche  
 [NOT IN BUILD: Definizione di interfaccia](http://msdn.microsoft.com/it-it/7840a52c-9c38-42c4-adbc-e2c02e9dc204)