---
title: "implementazione dell&#39;interfaccia IVsPackage | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Interfaccia IVsPackage"
  - "interfacce, implementazione di pacchetti IVsPackage"
ms.assetid: 0c76b2e1-ce63-47fc-93ee-847cad281fc1
caps.latest.revision: 12
caps.handback.revision: 12
manager: "douge"
---
# implementazione dell&#39;interfaccia IVsPackage
Qualsiasi Vspackage deve implementare l'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage> .  [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] chiama i metodi di <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage> per inizializzare e chiudere VSPackages, per ottenere pagine delle proprietà associate e per altri motivi.  L'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage> è l'interfaccia del gateway tra [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e un VSPackage.  
  
 È possibile scrivere un VSPackage gestito come sottoclasse della classe di <xref:Microsoft.VisualStudio.Shell.Package> , che implementa <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage> al nome.  Per ulteriori informazioni, vedere [VSPackage gestiti](../misc/managed-vspackages.md).  
  
> [!NOTE]
>  Gran parte del codice di esempio non gestito nella sezione di integrazione di Visual Studio di [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] utilizza Active Template \(ATL\) Library.  Non è necessario utilizzare ATL per creare package VS, ma è necessario comprendere ATL per comprendere il codice di esempio.  
  
## Vedere anche  
 [Package VS](../Topic/VSPackages.md)