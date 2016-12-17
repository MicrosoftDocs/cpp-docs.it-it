---
title: "Estensione del modello di automazione | Microsoft Docs"
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
  - "modello a oggetti di automazione, estensione"
ms.assetid: f09e1365-6291-41a7-b52b-9398270d9da2
caps.latest.revision: 12
caps.handback.revision: 12
manager: "douge"
---
# Estensione del modello di automazione
In questa sezione viene descritto come modello di automazione e il modello di package VS rappresentano un approccio di due\-forcone all'estensibilità nell'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Estensibilità consiste nella possibilità di aggiornare ed estendere la funzionalità dell'IDE.  L'automazione, da un lato, si riferisce al codice creato dall'utente e agli strumenti per automatizzare le attività nell'ambiente esistente e a livello di codice consente l'ide.  VSPackages, di altra parte, consentono di aggiungere una nuova funzionalità all'ambiente.  
  
 È possibile combinare automazione e Vspackage in un'applicazione estensibilità.  Per un esempio, vedere [Procedura dettagliata: Estensione dei pacchetti VSPackage gestiti tramite l'automazione](../misc/walkthrough-extending-managed-vspackages-by-using-automation.md).  
  
 Per un esempio end\-to\-end di un sistema di progetto di linguaggio che supporta il modello di automazione, vedere [Esempi di VSSDK](../misc/vssdk-samples.md).  
  
## In questa sezione  
 [Modello di automazione](../misc/automation-model.md)  
 Vengono forniti cenni preliminari sul modello di automazione e viene descritto il modo in cui il modello di automazione consente di personalizzare, regolare e automatizzare l'ambiente.  
  
 [Che contribuiscono al modello di automazione](../Topic/Contributing%20to%20the%20Automation%20Model.md)  
 Fornisce una visualizzazione più dettagliata del modello di automazione e viene illustrato come fornire l'automazione per il package VS.  In questa sezione vengono inoltre forniti esempi di codice che mostrano come un utente di automazione ottiene gli oggetti di automazione iniziali del progetto.  
  
## Sezioni correlate  
 [Visual Studio SDK e automazione](../Topic/Visual%20Studio%20SDK%20and%20Automation.md)  
 Viene illustrato l'utilizzo di automazione, di VSPackages, o una combinazione creare applicazioni estensibilità di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .