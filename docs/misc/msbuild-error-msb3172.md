---
title: "MSBuild Error MSB3172 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.ReadInputManifestFailed"
helpviewer_keywords: 
  - "MSB3172"
ms.assetid: aa7291db-1f36-41e7-a510-90cd4daaa89d
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3172
**MSB3172: impossibile leggere il manifesto '\<file\>'. '  \<errore\>'**  
  
 Questo errore si verifica quando il processo di compilazione rileva un problema durante la lettura di un file manifesto.  Il messaggio di errore contiene il nome file seguito da informazioni più dettagliate sulle cause dell'errore.  
  
 È possibile che sia stato aggiunto un assembly o un file manifesto come file di dati.  È necessario utilizzare il comando **Aggiungi riferimento** anziché **Aggiungi file** per fare in modo che il riferimento all'assembly dipendente nel sistema di progetto sia corretto.  I progetti più sofisticati contrassegnano generalmente il file exe.manifest nella cartella bin come file di progetto, ma è preferibile che l'utente non esegua questa operazione.  Il file app.manifest nascosto diventa il file exe.manifest e può essere modificato manualmente per scenari più avanzati.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)