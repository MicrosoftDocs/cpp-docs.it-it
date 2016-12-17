---
title: "Resources &#39;file1&#39; and &#39;file2&#39; have the same manifest resource name &#39;name&#39; | Microsoft Docs"
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
  - "vs.tasklisterror.resource_naming_conflict"
ms.assetid: 50d656ad-8557-4240-95b0-3f44b9c21da6
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Resources &#39;file1&#39; and &#39;file2&#39; have the same manifest resource name &#39;name&#39;
Sono stati calcolati nomi di risorse di assembly identici per due file la cui proprietà `BuildAction` è impostata su `EmbeddedResource` e che sono caratterizzati da impostazioni cultura non associate ad alcun paese.  Se si verifica questo errore, il processo di compilazione non verrà completato.  Per ulteriori informazioni sulla proprietà `BuildAction`, vedere [File Properties](http://msdn.microsoft.com/it-it/013c4aed-08d6-4dce-a124-ca807ca08959).  
  
 Poiché in [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non esiste il concetto di spazi dei nomi basati su cartelle, i nomi file delle risorse di:  
  
-   Proj1\\FolderA\\MyProj.bmp  
  
-   Proj1\\FolderB\\MyProj.bmp  
  
 produrranno un nome di manifesti assembly Proj1.MyProj.bmp per entrambi i file.  
  
 **Per correggere l'errore**  
  
-   Per correggere questo errore, rinominare i file di risorse interessati \(*file1* e *file2*\).  
  
## Vedere anche  
 [NIB: Resource File Naming Conventions](http://msdn.microsoft.com/it-it/7b1a2cdf-6196-4034-8fc7-51a271842cc2)