---
title: Creazione di un nuovo pulsante della barra degli strumenti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.toolbar
dev_langs:
- C++
helpviewer_keywords:
- Toolbar editor, creating buttons
- toolbar buttons (in Toolbar editor), button image
- toolbar buttons (in Toolbar editor), creating
- toolbar buttons (in Toolbar editor)
ms.assetid: 46c120fe-4f2a-4887-a08f-bd1fea04b3f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d883fbb34fe45be2ad84860ea7564350346749f2
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="creating-a-new-toolbar-button"></a>Creazione di un nuovo pulsante di una barra degli strumenti
### <a name="to-create-a-new-toolbar-button"></a>Per creare un nuovo pulsante della barra degli strumenti  
  
1.  In [visualizzazione risorse](../windows/resource-view-window.md) espandere la cartella di risorse (ad esempio Progetto1).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Espandere il **barra degli strumenti** cartella e selezionare una barra degli strumenti di modifica.  
  
3.  Assegnare un ID per il pulsante vuoto all'estremità destra della barra degli strumenti. Per eseguire questa operazione modificando il **ID** proprietà il [finestra proprietà](/visualstudio/ide/reference/properties-window). Potrebbe ad esempio, si desidera assegnare lo stesso ID di un'opzione dal menu di un pulsante della barra degli strumenti. In questo caso, utilizzare la casella di riepilogo a discesa per selezionare il **ID** dell'opzione di menu.  
  
     oppure  
  
     Selezionare il pulsante vuoto all'estremità destra della barra degli strumenti (nel riquadro di visualizzazione della barra degli strumenti) e iniziare a disegnare. Viene assegnato un ID di comando del pulsante predefinito (ID_BUTTON\<n >).  
  
 È inoltre possibile copiare e incollare un'immagine in una barra degli strumenti come un nuovo pulsante.  
  
#### <a name="to-add-an-image-to-a-toolbar-as-a-button"></a>Aggiungere un'immagine di una barra degli strumenti come un pulsante  
  
1.  In [visualizzazione risorse](../windows/resource-view-window.md), aprire la barra degli strumenti facendo doppio clic.  
  
2.  Successivamente, aprire l'immagine da aggiungere alla barra degli strumenti.  
  
    > [!NOTE]
    >  Se si apre l'immagine in Visual Studio, si aprirà l'editor di immagini. È anche possibile aprire l'immagine in altri programmi di grafica.  
  
3.  Dal **modifica** menu, scegliere **copia**.  
  
4.  Passare alla barra degli strumenti facendo clic sulla scheda nella parte superiore della finestra di origine.  
  
5.  Dal **modifica** menu, scegliere **Incolla**.  
  
     L'immagine verrà visualizzato sulla barra degli strumenti come un nuovo pulsante.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
### <a name="requirements"></a>Requisiti  
 MFC o ATL  
  
## <a name="see-also"></a>Vedere anche  
 [Proprietà dei pulsanti della barra degli strumenti](../windows/toolbar-button-properties.md)   
 [Creazione, spostamento e modifica i pulsanti della barra degli strumenti](../windows/creating-moving-and-editing-toolbar-buttons.md)   
 [Editor barra degli strumenti](../windows/toolbar-editor.md)

