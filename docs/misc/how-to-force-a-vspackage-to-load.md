---
title: "Procedura: Forzare il caricamento di un pacchetto VSPackage | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "VSPackage, forzare il caricamento"
  - "VSPackage, caricamento"
ms.assetid: 05f4dc3f-3c9a-45ea-96da-986553b5c5f2
caps.latest.revision: 20
caps.handback.revision: 20
manager: "douge"
---
# Procedura: Forzare il caricamento di un pacchetto VSPackage
Vspackage in genere viene caricato solo quando la relativa funzionalità associata è richiesta l'esecuzione di un processo.  In alcune circostanze, tuttavia, un VSPackage essere necessario forzare un altro package VS da caricare.  Ad esempio, un leggera VSPackage caricare un maggiore VSPackage in un contesto di programmazione che non è disponibile come CMDUIContext.  
  
 È possibile utilizzare il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsShell.LoadPackage%2A> per forzare un VSPackage per caricare.  
  
### Per forzare un VSPackage per caricare  
  
-   Inserire il codice nel metodo di <xref:Microsoft.VisualStudio.Shell.Package.Initialize%2A> del package VS che impone un altro package VS per caricare:  
  
     [!code-cs[ForceVSPackageLoad#01](../misc/codesnippet/CSharp/how-to-force-a-vspackage-to-load_1.cs)]  
  
     Quando il package VS viene inizializzato, impone `PackageToBeLoaded` per caricare.  
  
## Programmazione efficiente  
 Il caricamento di potrebbe non deve essere utilizzato per la comunicazione di un VSPackage.  In alternativa, utilizzare [Utilizzo e servizi](../Topic/Using%20and%20Providing%20Services.md).  
  
## Vedere anche  
 [La gestione di VSPackage](../Topic/Managing%20VSPackages.md)   
 [Package VS](../Topic/VSPackages.md)