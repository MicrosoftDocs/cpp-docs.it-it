---
title: Visualizzazione e modifica di risorse in un Editor di risorse | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vs.resourceview
dev_langs: C++
helpviewer_keywords:
- resources [Visual Studio], viewing
- rc files, viewing resources
- Resource View pane
- layouts, previewing resource
- code, viewing resources
- resource editors, viewing resources
- .rc files, viewing resources
- resources [Visual Studio], editing
ms.assetid: ba8bdc07-3f60-43c7-aa5c-d5dd11f0966e
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 980264ab1857af214dcd24703980b8efa9a4d2dd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="viewing-and-editing-resources-in-a-resource-editor"></a>Visualizzazione e modifica di risorse in un editor di risorse
Ogni tipo di risorsa è un editor di risorse specifico per il tipo di risorsa. È possibile ridisporre, ridimensionare, aggiungere controlli e funzionalità o in caso contrario modificare alcuni aspetti di una risorsa tramite l'editor associato. È anche possibile modificare una risorsa in [formato testo](../windows/how-to-open-a-resource-script-file-in-text-format.md) e [formato binario](../windows/opening-a-resource-for-binary-editing.md).  
  
 Alcuni tipi di risorsa sono singoli file che possono essere importati e usati in diversi modi. tra le bitmap, icone, cursori, le barre degli strumenti e file html. Tali risorse dispongono di nomi di file, nonché [identificatori di risorsa](../windows/symbols-resource-identifiers.md). Altri, ad esempio le finestre di dialogo, menu e le tabelle di stringhe in progetti Win32, esiste solo come parte di un file di script (RC) delle risorse o file di risorse modello (con estensione rct).  
  
> [!NOTE]
>  Proprietà di una risorsa [può essere modificato utilizzando la finestra proprietà](../windows/changing-the-properties-of-a-resource.md).  
  
## <a name="win32-resources"></a>Risorse Win32  
 È possibile accedere alle risorse Win32 nel [visualizzazione risorse](../windows/resource-view-window.md) riquadro.  
  
#### <a name="to-view-a-win32-resource-in-a-resource-editor"></a>Per visualizzare una risorsa Win32 in un editor di risorse  
  
1.  Selezionare **visualizzazione risorse** dal **vista** menu.  
  
2.  Se la finestra Visualizzazione risorse non è la finestra di primo piano, fare clic su di **visualizzazione risorse** scheda in modo che sia verso l'alto.  
  
3.  Dalla visualizzazione di risorse, espandere la cartella per il progetto che contiene le risorse che si desidera visualizzare. Ad esempio, se si desidera visualizzare una risorsa finestra di dialogo, espandere la cartella di finestra di dialogo.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
4.  Fare doppio clic sulla risorsa, ad esempio IDD_ABOUTBOX.  
  
     La risorsa viene visualizzata nell'editor appropriato. Ad esempio, per le risorse finestra di dialogo, la risorsa viene aperta all'interno dell'editor della finestra di dialogo.  
  
     È anche possibile [visualizzare le risorse in un file RC (script di risorsa) senza aprire un progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).  
  
#### <a name="to-delete-an-existing-win-32-resource"></a>Per eliminare una risorsa Win 32 esistente  
  
1.  In visualizzazione di risorse, espandere il nodo per un tipo di risorsa.  
  
2.  Pulsante destro del mouse sulla risorsa che si desidera eliminare e scegliere **eliminare** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  È possibile eliminare una risorsa con lo stesso comando di menu di scelta rapida quando è aperto il file RC in una finestra del documento all'esterno di un progetto.  
  
## <a name="resources-in-managed-projects"></a>Risorse nei progetti gestiti  
 Poiché i progetti gestiti non utilizzano file script di risorsa, è necessario aprire le risorse da **Esplora**. È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
#### <a name="to-view-a-managed-resource-in-a-resource-editor"></a>Per visualizzare una risorsa gestita in un editor di risorse  
  
1.  In Esplora soluzioni fare doppio clic sulla risorsa, ad esempio, BITMAP1.  
  
     La risorsa viene visualizzata nell'editor appropriato.  
  
#### <a name="to-delete-an-existing-managed-resource"></a>Per eliminare una risorsa gestita esistente  
  
1.  In Esplora soluzioni fare doppio clic sulla risorsa che si desidera eliminare e scegliere **eliminare** dal menu di scelta rapida.  
  
### <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Editor di risorse](../windows/resource-editors.md)

