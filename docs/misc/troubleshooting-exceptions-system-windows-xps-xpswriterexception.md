---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Windows.Xps.XpsWriterException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHWXXpsWriter"
helpviewer_keywords: 
  - "System.Windows.Xps.XpsWriterException (eccezione)"
  - "XpsWriterException (eccezione)"
ms.assetid: 3b9fbb94-ed67-44f2-82bb-af5cb5ada1ef
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Windows.Xps.XpsWriterException
Quando viene chiamato un metodo di un oggetto <xref:System.Windows.Xps.XpsWriterException> o <xref:System.Windows.Xps.XpsDocumentWriter> incompatibile con lo stato corrente dell'oggetto, viene generata un'eccezione <xref:System.Windows.Xps.VisualsToXpsDocument>.  
  
## Note  
 Questa eccezione viene ad esempio generata se il metodo `CancelAsync` di uno dei due tipi di oggetto viene chiamato quando l'oggetto non sta eseguendo un'operazione di scrittura asincrona.  
  
## Vedere anche  
 <xref:System.Windows.Xps.XpsWriterException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)