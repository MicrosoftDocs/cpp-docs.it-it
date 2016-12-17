---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Drawing.Printing.InvalidPrinterException | Microsoft Docs"
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
  - "InvalidPrinterException (classe)"
ms.assetid: e19b9b9c-2b0f-4839-85c0-ae75e1c356d2
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Drawing.Printing.InvalidPrinterException
Un'eccezione <xref:System.Drawing.Printing.InvalidPrinterException> viene generata quando viene eseguito un tentativo di accedere a una stampante tramite l'utilizzo di impostazioni della stampante non valide.  
  
## Suggerimenti associati  
 **Assicurarsi che la stampante esista.**  
 La causa più comune di un problema di impostazioni della stampante non valide è il riferimento a una stampante inesistente. Per altre informazioni, vedere <xref:System.Drawing.Printing>.  
  
 **Assicurarsi che sia stata installata una stampante predefinita.**  
 Se non è stata specificata una stampante, assicurarsi che sia stata installata una stampante predefinita. Per altre informazioni, vedere <xref:System.Drawing.Printing.PrintDocument.PrinterSettings%2A>.  
  
## Vedere anche  
 <xref:System.Drawing.Printing.InvalidPrinterException>   
 <xref:System.Drawing.Printing.PrinterSettings>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)