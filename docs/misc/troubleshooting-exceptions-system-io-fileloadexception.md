---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IO.FileLoadException | Microsoft Docs"
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
  - "FileLoadException (classe)"
ms.assetid: 6b4519e3-4d29-4031-8aec-c2735b4ee16d
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IO.FileLoadException
Un'eccezione <xref:System.IO.FileLoadException> viene generata quando un assembly gestito viene rilevato ma non può essere caricato.  
  
## Suggerimenti associati  
 **Assicurarsi che il file sia un assembly .NET Framework valido.**  
 Questa eccezione viene generata se il file non è un assembly .NET Framework valido. Per altre informazioni, vedere <xref:System.Reflection.Assembly>.  
  
 **Assicurarsi che un assembly o un modulo non sia stato caricato due volte con due evidenze diverse.**  
 Un'evidenza è l'insieme di informazioni su cui vengono basate le decisioni inerenti i criteri di sicurezza, ad esempio le autorizzazioni che è possibile assegnare al codice. Per altre informazioni, vedere <xref:System.EnterpriseServices.Internal.Publish.GacRemove%2A> e <xref:System.Reflection.Assembly.Evidence%2A>.  
  
 **Se si utilizza il metodo RegisterAssembly o UnregisterAssembly, assicurarsi che il nome dell'assembly non contenga un numero di caratteri superiore a MAX\_PATH.**  
 La lunghezza del nome dell'assembly non può essere superiore a MAX\_PATH. Per altre informazioni, vedere <xref:System.EnterpriseServices.Internal.IComSoapPublisher.RegisterAssembly%2A> e <xref:System.EnterpriseServices.Internal.IComSoapPublisher.UnRegisterAssembly%2A>.  
  
 **Se si sta caricando un assembly satellite, assicurarsi che il valore CultureInfo specificato corrisponda al valore CultureInfo del file.**  
 Gli assembly satellite contengono risorse localizzate con codice eseguibile non localizzabile nonché risorse per singole impostazioni cultura utilizzate come impostazioni cultura predefinite o non associate ad alcun paese. Per altre informazioni, vedere <xref:System.Reflection.Assembly.GetSatelliteAssembly%2A>.  
  
## Vedere anche  
 <xref:System.IO.FileLoadException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)