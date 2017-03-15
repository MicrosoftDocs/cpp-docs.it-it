---
title: "How to: Use Resource Templates | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "language-specific template files"
  - "resource templates"
  - "resources [Visual Studio], creating"
  - "rct files"
  - "templates, resource templates"
  - "resources [Visual Studio], templates"
  - ".rct files"
ms.assetid: bdfe7060-f98e-4859-8285-9c8570360e9d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# How to: Use Resource Templates
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un modello di risorsa è una risorsa personalizzata salvata come un file con estensione RCT.  È quindi possibile usare un modello di risorsa come punto iniziale per la creazione di altre risorse.  I modelli di risorsa garantiscono un risparmio di tempo nello sviluppo di risorse o gruppi di risorse aggiuntivi che condividono alcune funzionalità, quali controlli standard e altri elementi ripetuti.  Se, ad esempio, si vuole includere un pulsante ? e un'icona di un logo aziendale in più finestre di dialogo,  è possibile creare un nuovo modello di finestra di dialogo e personalizzarlo con il logo e il pulsante ?.  
  
 Dopo avere personalizzato il modello di risorsa, è necessario salvare le modifiche apportate nella cartella dei modelli o in qualsiasi posizione specificata nel percorso di inclusione, in modo da consentire la visualizzazione del nuovo modello di risorsa nel tipo di risorsa corrispondente nella [finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md).  Sarà quindi possibile usare il nuovo modello di risorsa quando necessario.  
  
> [!NOTE]
>  È possibile inserire i file di modello specifici di una lingua in sottodirectory della directory principale dei modelli.  È possibile, ad esempio, inserire i file di modello solo per la lingua inglese in \\\<directory modelli risorsa\>\\1033.  
  
### Per creare un modello per le risorse  
  
1.  Fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni**.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi nuovo elemento**.  
  
3.  Nel riquadro **Modelli** della finestra di dialogo **Aggiungi nuovo elemento**, scegliere **File modello di risorse \(.rct\)**.  
  
4.  Specificare un nome e un percorso per il nuovo file RCT, quindi scegliere **Apri**.  
  
5.  Il nuovo file RCT verrà aggiunto al progetto e visualizzato in Esplora soluzioni, nella cartella **Risorse**.  
  
     Facendo doppio clic sul file RCT è ora possibile aprire il file in una finestra di documento e aggiungervi delle risorse. A questo scopo, fare clic con il pulsante destro del mouse sul file nella finestra del documento e scegliere **Aggiungi risorsa**dal menu di scelta rapida.  Sarà quindi possibile personalizzare tali risorse e salvare il file RCT.  
  
    > [!NOTE]
    >  Quando viene creato un nuovo file RCT, Visual Studio cerca tale file in \\Programmi\\Microsoft Visual Studio 9.0\\VC\\VCResourceTemplates, in \\Programmi\\Microsoft Visual Studio 9.0\\VC\\VCResourceTemplates\\*LCID* \(ad esempio 1033 per l'inglese\) *oppure* in qualsiasi altro percorso specificato nel [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md).  Se si preferisce archiviare i file RCT in un'altra cartella di file, ad esempio in \\Documenti, è sufficiente aggiungere questa cartella al percorso di inclusione. Visual Studio sarà così in grado di trovare il file RCT creato.  
  
### Per convertire un file RC esistente in un file RCT  
  
1.  [Aprire il file RC come file autonomo](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
2.  Dal menu **File** scegliere **Salva\<*nome file*\> con nome**.  
  
3.  Specificare un percorso e fare clic su **OK**.  
  
### Per creare una nuova risorsa da un modello  
  
1.  Fare clic con il pulsante destro del mouse sul file RC nel riquadro [Visualizzazione risorse](../windows/resource-view-window.md), quindi scegliere **Aggiungi risorsa** dal menu di scelta rapida.  
  
2.  Nella finestra di dialogo **Aggiungi risorsa** fare clic sul segno \(**\+**\) accanto alla risorsa per espandere il relativo nodo e visualizzare tutti i modelli disponibili per tale risorsa.  
  
3.  Fare doppio clic sul modello che si desidera usare.  
  
4.  Modificare le risorse aggiunte in base alle specifiche esigenze nel relativo editor di risorse.  
  
     L'editor di risorse fornisce automaticamente un ID della risorsa univoco.  È possibile modificare le [proprietà di risorse](../windows/changing-the-properties-of-a-resource.md) secondo le proprie esigenze.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.*  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)