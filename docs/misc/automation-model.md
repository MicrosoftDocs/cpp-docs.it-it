---
title: "Modello di automazione | Microsoft Docs"
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
  - "automazione [Visual Studio SDK], modello di automazione"
ms.assetid: 48ddc192-96ff-46dc-a1fe-df4eb5c62c84
caps.latest.revision: 16
caps.handback.revision: 16
manager: "douge"
---
# Modello di automazione
Il modello di automazione offre un'alternativa ai pacchetti VSPackage per l'estensione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Noto nelle versioni precedenti di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] come modello di estendibilità, il modello di automazione è un'interfaccia di programmazione che permette di accedere alle routine sottostanti che sono alla base dell'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) e di personalizzarlo, modificarlo e automatizzarlo.  
  
## Pacchetti VSPackage e automazione  
 La documentazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK è incentrata sui pacchetti VSPackage, che offrono maggiori potenzialità di sviluppo rispetto al modello di automazione. Ad esempio, è possibile scrivere codice per gli oggetti nel modello di automazione per personalizzare un linguaggio, come [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]. Tuttavia, non è possibile aggiungere un nuovo linguaggio all'IDE usando il modello di automazione. Per aggiungere un nuovo linguaggio all'ambiente, è necessario sviluppare un pacchetto VSPackage.  
  
 Insieme, il modello di automazione e il modello VSPackage compongono un approccio diversificato all'estendibilità in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. L'estendibilità è la capacità di migliorare ed estendere le funzionalità dell'IDE. L'automazione fa riferimento a codice e strumenti creati dall'utente che automatizzano le attività nell'ambiente esistente e che sono alla base del codice dell'IDE. I pacchetti VSPackage, d'altro canto, permettono di aggiungere nuove funzionalità all'IDE. Un pacchetto VSPackage è un oggetto che può essere creato in modo condiviso, ovvero ha una class factory e rende se stesso disponibile all'IDE tramite l'implementazione dell'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage>.  
  
 Componenti aggiuntivi e procedure guidate usano il modello di automazione per controllare o estendere le funzionalità dell'IDE tramite le interfacce di automazione. In genere, Microsoft include molti componenti aggiuntivi con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. È possibile usare i componenti aggiuntivi per integrare nuovi comandi nelle barre degli strumenti e nei menu, aggiungere finestre degli strumenti o automatizzare determinate attività eseguite regolarmente in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 Gli sviluppatori di pacchetti VSPackage sono incoraggiati a contribuire al modello di automazione. Ad esempio, se si aggiunge un nuovo linguaggio a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] usando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK, il linguaggio deve fornire un solido modello di codice che estenda quello preesistente. Per altre informazioni, vedere [Che contribuiscono al modello di automazione](../Topic/Contributing%20to%20the%20Automation%20Model.md).  
  
## Vedere anche  
 [Package VS](../Topic/VSPackages.md)   
 [Che contribuiscono al modello di automazione](../Topic/Contributing%20to%20the%20Automation%20Model.md)