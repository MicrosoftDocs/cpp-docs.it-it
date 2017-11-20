---
title: 'Procedura: creare una risorsa | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- toolbars [C++], resources
- resource toolbars
- resources [Visual Studio], creating
ms.assetid: aad44914-9145-45a3-a7d8-9de89b366716
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 46e03602e53c79ff6c384ad9cc613849cb329423
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-create-a-resource"></a>Procedura: creare una risorsa
> [!NOTE]
>  La visualizzazione delle risorse non è supportata nelle edizioni Express.  
  
### <a name="to-create-a-new-resource-in-resource-view"></a>Per creare una nuova risorsa in Visualizzazione risorse  
  
1.  Con lo stato attivo sul file RC in [Visualizzazione risorse](../windows/resource-view-window.md), scegliere **Aggiungi risorsa** dal menu **Modifica** . In alternativa fare clic con il pulsante destro del mouse sul file RC in Visualizzazione risorse e scegliere **Aggiungi risorsa** dal menu di scelta rapida.  
  
     **Note** Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nella [finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md)scegliere il tipo di risorsa che si vuole aggiungere al progetto.  
  
### <a name="to-create-a-new-resource-in-solution-explorer"></a>Per creare una nuova risorsa in Esplora soluzioni  
  
1.  In **Esplora soluzioni**fare clic con il pulsante destro del mouse sulla cartella del progetto e scegliere **Aggiungi**, quindi **Aggiungi risorsa** dal menu di scelta rapida.  
  
     Se nel progetto non è già presente un file RC, ne verrà creato uno con questo passaggio. È possibile ripetere questo passaggio per aggiungere tipi di risorse specifici al nuovo file RC.  
  
2.  Nella [finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md)scegliere il tipo di risorsa che si vuole aggiungere al progetto.  
  
### <a name="to-create-a-new-resource-in-class-view"></a>Per creare una nuova risorsa in Visualizzazione classi  
  
1.  In [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925)fare clic con il pulsante destro del mouse sulla classe e scegliere **Aggiungi**, quindi **Aggiungi risorsa** dal menu di scelta rapida.  
  
2.  Nella [finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md)scegliere il tipo di risorsa che si vuole aggiungere al progetto.  
  
### <a name="to-create-a-new-resource-from-the-project-menu"></a>Per creare una nuova risorsa dal menu Progetto  
  
1.  Scegliere **Aggiungi risorsa** dal menu **Progetto**.  
  
 Quando si crea una nuova risorsa, Visual C++ assegna a tale risorsa un nome univoco, ad esempio IDD_Dialog1. È possibile personalizzare questo ID risorsa modificando le proprietà della risorsa nell'editor di risorse associato oppure nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).  
  
 È possibile creare una risorsa come nuova risorsa predefinita, indipendente da un modello, oppure come risorsa basata su un [modello](../windows/how-to-use-resource-templates.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.*  
  
 **Requirements**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor risorse](../windows/resource-editors.md)   
 [Finestra di dialogo Aggiungi risorsa](../windows/add-resource-dialog-box.md)