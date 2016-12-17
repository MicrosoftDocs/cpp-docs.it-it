---
title: "MSBuild Error MSB3127 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GenerateManifest.FileAssociationDefaultIconNotInstalled"
helpviewer_keywords: 
  - "MSB3127"
ms.assetid: 161eea9a-332f-463e-a49e-d4030e937d52
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3127
**MSB3127: l'icona predefinita \<nomeicona\> non è presente nei riferimenti ai file correnti o non fa parte del gruppo di download richiesto.  Il nome del file di icona predefinito rispetta la distinzione tra maiuscole e minuscole, pertanto il nome del file a cui si fa riferimento nel manifesto dell'applicazione deve corrispondere esattamente al nome del file di icona.**  
  
 Quando si pubblica un'applicazione configurata per utilizzare le associazioni di file, l'icona predefinita a cui il manifesto fa riferimento deve trovarsi nei riferimenti di file correnti o deve fare parte del gruppo di download necessario.  L'icona predefinita è l'icona visualizzata per i file che dispongono dell'associazione di file configurata \(l'estensione del nome file configurata\).  
  
### Per correggere l'errore  
  
-   Aggiungere il file di icona al progetto corrente e includerlo nel gruppo di download richiesto.  Per ulteriori informazioni, vedere [How to: Specify Which Files Are Published by ClickOnce](../Topic/How%20to:%20Specify%20Which%20Files%20Are%20Published%20by%20ClickOnce.md).  
  
## Vedere anche  
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)