---
title: 'Procedura: usare i modelli di risorse | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- language-specific template files
- resource templates
- resources [Visual Studio], creating
- rct files
- templates, resource templates
- resources [Visual Studio], templates
- .rct files
ms.assetid: bdfe7060-f98e-4859-8285-9c8570360e9d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b0a123c336df3f47550f8bb825a621eff53a8cb5
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40015548"
---
# <a name="how-to-use-resource-templates"></a>Procedura: utilizzare modelli di risorse
Un modello di risorsa è una risorsa personalizzata salvata come un file con estensione RCT. È quindi possibile usare un modello di risorsa come punto iniziale per la creazione di altre risorse. I modelli di risorsa garantiscono un risparmio di tempo nello sviluppo di risorse o gruppi di risorse aggiuntivi che condividono alcune funzionalità, quali controlli standard e altri elementi ripetuti. Se, ad esempio, si vuole includere un pulsante ? e un'icona di un logo aziendale in più finestre di dialogo, è possibile creare un nuovo modello di finestra di dialogo e personalizzarlo con il logo e il pulsante ?.  
  
 Dopo avere personalizzato il modello di risorsa, è necessario salvare le modifiche nella cartella del modello (o in qualsiasi posizione specificata nel percorso di inclusione) in modo che il nuovo modello di risorsa verrà visualizzato nel relativo tipo di risorsa nel [finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md). Sarà quindi possibile usare il nuovo modello di risorsa quando necessario.  
  
> [!NOTE]
>  È possibile inserire i file di modello specifici di una lingua in sottodirectory della directory principale dei modelli. Ad esempio, è possibile inserire i file di modello solo in inglese nel \\< directory dei modelli di resource\>\1033.  
  
### <a name="to-create-a-template-for-resources"></a>Per creare un modello per le risorse  
  
1.  Nelle **Esplora soluzioni**, fare doppio clic su progetto.  
  
2.  Dal menu di scelta rapida, scegliere **Add**, quindi fare clic su **Aggiungi nuovo elemento**.  
  
3.  Nel **Aggiungi nuovo elemento** nella finestra di dialogo il **modelli:** riquadro, scegliere **File di modello di risorse (RCT)**.  
  
4.  Specificare un nome e percorso per il nuovo file RCT, quindi scegliere **aperto**.  
  
5.  Il nuovo file RCT verrà aggiunto al progetto e viene visualizzato nella **Esplora soluzioni** sotto il **risorse** cartella.  
  
     È ora possibile fare doppio clic sul file RCT per aprirlo in una finestra del documento e quindi aggiungervi le risorse (il pulsante destro nella finestra del documento e scegliere **Aggiungi risorsa** dal menu di scelta rapida). Sarà quindi possibile personalizzare tali risorse e salvare il file RCT.  
  
    > [!NOTE]
    >  Quando si crea un nuovo file RCT, Visual Studio cerca tale file in \Programmi\Microsoft Visual Studio 9.0\VC\VCResourceTemplates, in \Programmi\Microsoft Visual Studio 9.0\VC\VCResourceTemplates\\*LCID* ( ad esempio 1033 per inglese), *oppure* ovunque si trovino con la [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md). Se si preferisce archiviare i file RCT in un'altra cartella di file, ad esempio in \Documenti, è sufficiente aggiungere questa cartella al percorso di inclusione. Visual Studio sarà così in grado di trovare il file RCT creato.  
  
### <a name="to-convert-an-existing-rc-file-to-an-rct-file"></a>Per convertire un file RC esistente in un file RCT  
  
1.  [Aprire il file RC come file autonomo](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
2.  Nel **File** menu, fare clic su **salvare \< *il nome del file*> come**.  
  
3.  Specificare un percorso e fare clic su **OK**.  
  
### <a name="to-create-a-new-resource-from-a-template"></a>Per creare una nuova risorsa da un modello  
  
1.  Nel [visualizzazione di risorse](../windows/resource-view-window.md) riquadro, fare clic con il pulsante destro del file RC e scegliere **Aggiungi risorsa** dal menu di scelta rapida.  
  
2.  Nel **Aggiungi risorsa** finestra di dialogo fare clic sul segno più (**+**) accanto a una risorsa per espandere il nodo di risorsa e visualizzano tutti i modelli disponibili per tale risorsa.  
  
3.  Fare doppio clic sul modello che si desidera usare.  
  
4.  Modificare le risorse aggiunte in base alle specifiche esigenze nel relativo editor di risorse.  
  
     L'editor di risorse fornisce automaticamente un ID della risorsa univoco. È possibile rivedere le [le proprietà delle risorse](../windows/changing-the-properties-of-a-resource.md) in base alle esigenze.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)