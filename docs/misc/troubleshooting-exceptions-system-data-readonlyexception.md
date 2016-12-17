---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Data.ReadOnlyException | Microsoft Docs"
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
  - "ReadOnlyException (classe)"
ms.assetid: 1ac5da38-c5af-4fec-8fe1-1b9dd5069e59
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Data.ReadOnlyException
Un'eccezione <xref:System.Data.ReadOnlyException> viene generata quando viene eseguito un tentativo di modificare un valore di una colonna di dati di sola lettura.  
  
## Suggerimenti associati  
 **Cambiare la colonna su lettura\/scrittura.**  
 Questa eccezione viene generata se si tenta di modificare un valore in una colonna di dati di sola lettura. Per altre informazioni, vedere <xref:System.Data.DataColumn>.  
  
 **Assicurarsi di modificare i dati nella colonna corretta.**  
 Questa eccezione viene generata se si tenta di modificare un valore in una colonna di dati di sola lettura. Per altre informazioni, vedere <xref:System.Data.DataColumn>.  
  
## Vedere anche  
 <xref:System.Data.ReadOnlyException>   
 <xref:System.Data.DataRow.EndEdit%2A>   
 <xref:System.Data.DataRow.ItemArray%2A>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)