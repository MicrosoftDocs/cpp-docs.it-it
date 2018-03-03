---
title: Anteprima delle risorse | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.resvw.resource.previewing
- vs.resvw.resource.previewing
dev_langs:
- C++
helpviewer_keywords:
- resources [Visual Studio], viewing
- resource previews
- code, viewing
ms.assetid: d6abda66-0e2b-4ac3-a59a-a57b8c6fb70b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0eca56e607c916e28afc7bf513d853bcf6d94b81
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="previewing-resources"></a>Anteprima delle risorse
L'anteprima delle risorse consente di visualizzare le risorse grafiche senza aprirle. Visualizzazione in anteprima è utile per i file eseguibili anche dopo che è stato compilato perché gli identificatori di risorsa modificati in numeri. Poiché tali identificatori numerici spesso non forniscono informazioni sufficienti, la visualizzazione in anteprima le risorse consente di identificare rapidamente le.  
  
 È possibile visualizzare in anteprima il layout visivo dei tipi di risorse seguenti:  
  
-   Bitmap  
  
-   Finestra di dialogo  
  
-   Icona  
  
-   Menu  
  
-   Cursore  
  
-   ToolBar  
  
 La funzione di anteprima non è applicabile alle risorse di tasti di scelta rapida, manifesto, tabella di stringhe e informazioni sulla versione.  
  
### <a name="to-preview-resources"></a>Per visualizzare in anteprima le risorse  
  
1.  In [visualizzazione risorse](../windows/resource-view-window.md) o una finestra del documento, selezionare la risorsa, ad esempio IDD_ABOUTBOX.  
  
     **Note** Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), fare clic su di **pagine delle proprietà** pulsante.  
  
     \- oppure -  
  
3.  Nel **vista** menu, fare clic su **pagine delle proprietà**.  
  
     La pagina delle proprietà per la risorsa viene visualizzata un'anteprima della risorsa. È quindi possibile utilizzare le frecce su e tasti freccia per passare il controllo struttura ad albero in visualizzazione risorse o la finestra del documento. La pagina delle proprietà rimarrà aperta ed visualizzata qualsiasi risorsa che ha lo stato attivo ed è in grado di visualizzare in anteprima.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: aprire un File di Script di risorsa all'esterno di un progetto (autonomo)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)   
 [Editor di risorse](../windows/resource-editors.md)

