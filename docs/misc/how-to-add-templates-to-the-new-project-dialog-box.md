---
title: "Aggiunta di modelli alla finestra di dialogo Nuovo progetto | Microsoft Docs"
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
  - "finestre di dialogo, aggiunta di modelli al progetto"
  - "progetti [Visual Studio SDK], aggiunta di modelli alla finestra di dialogo"
  - "modelli [Visual Studio SDK], aggiunta alla finestra di dialogo del progetto"
ms.assetid: fd044681-e666-410d-815c-33db923ed888
caps.latest.revision: 26
caps.handback.revision: 26
manager: "douge"
---
# Aggiunta di modelli alla finestra di dialogo Nuovo progetto
Durante l'installazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] vengono installati vari modelli di progetto predefiniti. Per un elenco completo di modelli di progetto predefiniti, vedere [NIB Creazione di progetti da modelli](http://msdn.microsoft.com/it-it/7c36d86a-6b79-4480-8228-0f925f1204b2). Oltre ai modelli di progetto predefiniti è possibile creare modelli di progetto personalizzati o specifici del sottotipo. Ad esempio, il sottotipo **Smart Device** fornisce i propri modelli per i progetti [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]. Per istruzioni su come creare un modello personalizzato, vedere [Procedura: creare modelli di progetto](../Topic/How%20to:%20Create%20Project%20Templates.md).  
  
## Aggiunta di un modello alla finestra di dialogo Nuovo progetto  
  
#### Per aggiungere un modello alla finestra di dialogo Nuovo progetto  
  
1.  Creare un modello, incluso il file MyTemplate.vstemplate.  
  
2.  Selezionare i file inclusi nel modello \(incluso il file con estensione vstemplate\), fare clic con il pulsante destro del mouse, scegliere **Invia a**, quindi **Cartella compressa**. I file precedentemente estratti verranno compressi in un file ZIP.  
  
 Inserire il file di modello ZIP in **%USERPROFILE%\\Documents\\Visual Studio 2015\\Templates\\ProjectTemplates**.  
  
## Vedere anche  
 [Project Subtypes](d235b47b-cf11-4d47-a63f-e33d9d16105d2044a030-0795-4940-bd65-a6e44de98a0f)   
 [NIB: Modelli di Visual Studio](http://msdn.microsoft.com/it-it/141fccaa-d68f-4155-822b-27f35dd94041)   
 [Che contribuiscono a di dialogo Aggiungi nuovo elemento](../Topic/Contributing%20to%20the%20Add%20New%20Item%20Dialog%20Box.md)