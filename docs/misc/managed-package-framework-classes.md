---
title: "Classi del framework di pacchetto gestito | Microsoft Docs"
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
  - "framework di pacchetto gestito, classi helper"
  - "classi helper del pacchetto gestito"
  - "Visual Studio SDK, classi helper del pacchetto gestito"
  - "classi [Visual Studio SDK], framework di pacchetto gestito"
ms.assetid: 15aedcc3-c79a-460b-b620-43223f1ae81e
caps.latest.revision: 24
caps.handback.revision: 24
manager: "douge"
---
# Classi del framework di pacchetto gestito
Le classi del framework di pacchetto gestito \(MPF\) possono essere usate per creare pacchetti VSPackage con il codice gestito e forniscono le implementazioni predefinite per molte delle interfacce di VSPackage. Nascondendo i dettagli e le complessità di implementazione, MPF consente di creare prodotti per l'integrazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] con una quantità minima di codice.  
  
> [!WARNING]
>  La maggior parte degli assembly che contengono le classi del framework di pacchetto gestito viene fornita con Visual Studio SDK. È possibile scaricare il codice sorgente per il framework di pacchetto gestito per i progetti in [framework di pacchetto gestito per progetti](http://mpfproj11.codeplex.com/).  
  
## Spazi dei nomi MPF  
 La tabella seguente contiene l'elenco degli spazi dei nomi MPF forniti da [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)].  
  
|Spazio dei nomi|Contenuto|  
|---------------------|---------------|  
|<xref:Microsoft.VisualStudio>|Contiene le classi utili per la gestione degli errori COM, le costanti di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e le finestre Win32.|  
|<xref:Microsoft.VisualStudio.Package>|Include i wrapper di codice gestito per i progetti, gli editor e MSBuild di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].|  
|<xref:Microsoft.VisualStudio.Shell>|Include le classi base di MPF da cui è possibile derivare un'implementazione di molti oggetti comuni di Visual Studio.|  
|<xref:Microsoft.VisualStudio.Shell.Design>|Contiene le estensioni della finestra di progettazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].|  
|<xref:Microsoft.VisualStudio.Shell.Design.Serialization>|Contiene le estensioni della finestra di serializzazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].|  
|<xref:Microsoft.VisualStudio.Shell.Design.Serialization.CodeDom>|Contiene le estensioni della finestra di progettazione CodeDom di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].|  
|<xref:Microsoft.VisualStudio.Shell.Flavor>|Supporta sottotipi di progetto \(noti anche come "versioni"\).|  
  
## Vedere anche  
 [Pacchetti VSPackage e framework del pacchetto gestito](../misc/vspackages-and-the-managed-package-framework.md)   
 [Utilizzo di assembly di interoperabilità di Visual Studio](../Topic/Using%20Visual%20Studio%20Interop%20Assemblies.md)   
 [Pacchetti VSPackage e framework del pacchetto gestito](../misc/vspackages-and-the-managed-package-framework.md)