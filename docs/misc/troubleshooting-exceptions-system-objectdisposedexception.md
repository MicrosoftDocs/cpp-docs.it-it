---
title: "Risoluzione dei problemi relativi alle eccezioni: System.ObjectDisposedException | Microsoft Docs"
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
  - "classe ObjectDisposedException, risoluzione dei problemi"
ms.assetid: 702912b6-e927-4f8e-8b7c-2e1880312b0e
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.ObjectDisposedException
Un'eccezione <xref:System.ObjectDisposedException> viene generata quando viene tentato di eseguire un'operazione su un oggetto eliminato, ad esempio un flusso chiuso o una chiave del Registro di sistema chiusa.  
  
## Suggerimenti associati  
 **Assicurarsi che la risorsa che si sta tentando di usare non sia stata rilasciata.**  
 Se ad esempio si sta tentando di modificare un flusso, assicurarsi che non sia stato chiuso.  
  
## Vedere anche  
 <xref:System.ObjectDisposedException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)