---
title: "Risoluzione dei problemi relativi alle eccezioni: Microsoft.Office.Tools.InvalidRangeException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "Microsoft.Office.Tools.InvalidRangeException (eccezione)"
ms.assetid: 0deea25b-1152-40b6-89e2-e2e9c85f7dc0
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: Microsoft.Office.Tools.InvalidRangeException
Quando si crea a livello di codice un controllo View con un intervallo che si estende su più aree, viene generata un'eccezione <xref:Microsoft.Office.Tools.InvalidRangeException>.  
  
## Suggerimenti associati  
 Assicurarsi che l'area coperta dall'intervallo non si sovrapponga a un altro intervallo.  
 Gli intervalli non possono sovrapporsi.  
  
 Quando si crea a livello di codice un controllo View, assicurarsi di includere una sola area.  
 -   Quando si crea a livello di codice un controllo View, assicurarsi di includere una sola area, ovvero che tutte le celle siano congiunte.  
  
## Vedere anche  
 <xref:Microsoft.Office.Tools.InvalidRangeException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)