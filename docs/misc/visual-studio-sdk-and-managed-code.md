---
title: "Visual Studio SDK e codice gestito | Microsoft Docs"
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
  - "VSIP, informazioni sul codice gestito"
ms.assetid: 16b3d88e-b5d8-49a5-a5d7-07cbb0b7e4fc
caps.latest.revision: 20
caps.handback.revision: 20
manager: "douge"
---
# Visual Studio SDK e codice gestito
*Il codice gestito* a codice scritto in qualsiasi linguaggio che si avvale di Common Language \(CLR\) Runtime, ad esempio [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)], [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)], o in [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  Indipendentemente dal linguaggio in cui viene scritto in, tutto il codice gestito viene compilato in Microsoft Intermediate Language \(MSIL\) anziché il codice nativo.  
  
## Supporto dell'ambiente in Vspackage gestito  
 Per supportare creare un package VS o un progetto con un linguaggio gestito come [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)], [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] fornisce le operazioni seguenti:  
  
-   Gli assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], che consentono di utilizzare Vspackage scritto in codice gestito per l'interoperabilità con \(COM\) l'ambiente di sviluppo integrato non gestito di \(IDE\) [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Per ulteriori informazioni, vedere [Utilizzo di assembly di interoperabilità di Visual Studio](../Topic/Using%20Visual%20Studio%20Interop%20Assemblies.md).  
  
-   Un set di classi gestite del Framework \(MPF\) del pacchetto che fornisce un'astrazione di livello superiore con l'ide di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Tali classi includono alcune il più delle volte interfacce utilizzate e i tipi negli assembly di interoperabilità [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Notevolmente riducono la quantità di lavoro che è necessario eseguire per fornire la funzionalità di base di un package VS o progetto.  Per ulteriori informazioni, vedere [Classi del framework di pacchetto gestito](../misc/managed-package-framework-classes.md).  
  
-   Un insieme di esempi di base di un VSPackage scritti in codice gestito.  La compilazione gestito esempi su un esempio di un semplice, dotata di package VS funzionale dimostrare un editor di base, una finestra degli strumenti, un'estensione dell'oggetto e altri componenti.  Per ulteriori informazioni, vedere [Esempi di VSSDK](../misc/vssdk-samples.md).  
  
## Vedere anche  
 [VSPackage gestiti](../misc/managed-vspackages.md)   
 [Utilizzo di assembly di interoperabilità di Visual Studio](../Topic/Using%20Visual%20Studio%20Interop%20Assemblies.md)   
 [Classi del framework di pacchetto gestito](../misc/managed-package-framework-classes.md)