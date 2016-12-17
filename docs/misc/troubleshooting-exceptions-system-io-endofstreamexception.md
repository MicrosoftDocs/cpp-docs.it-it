---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IO.EndOfStreamException | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "EndOfStreamException (classe)"
ms.assetid: 1271e6f6-3a0d-49f0-9ff4-178d480687be
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IO.EndOfStreamException
Un'eccezione <xref:System.IO.EndOfStreamException> viene generata quando viene eseguito un tentativo di leggere oltre la fine di un flusso.  
  
## Suggerimenti associati  
 **Controllare se è stata raggiunta la fine del file prima di leggerlo.**  
 Utilizzare il metodo <xref:System.IO.StreamReader.Peek%2A> per controllare la fine del file prima di leggere il flusso.  
  
## Vedere anche  
 <xref:System.IO.EndOfStreamException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Procedura: leggere e scrivere su un file di dati appena creato](../Topic/How%20to:%20Read%20and%20Write%20to%20a%20Newly%20Created%20Data%20File.md)   
 [Procedura: Aprire e accodare un file di log](../Topic/How%20to:%20Open%20and%20Append%20to%20a%20Log%20File.md)