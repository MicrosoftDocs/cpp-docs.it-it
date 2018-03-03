---
title: Apertura di una risorsa per la modifica binaria | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.editors.binary
dev_langs:
- C++
helpviewer_keywords:
- binary data, editing
- resources [Visual Studio], opening for binary editing
ms.assetid: d3cdb0e4-da66-410d-8e49-b29073ff2929
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 92a0c0459626f139b7a8d7ae2313439c66d2a11c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="opening-a-resource-for-binary-editing"></a>Apertura di una risorsa per la modifica binaria
### <a name="to-open-a-windows-desktop-resource-for-binary-editing"></a>Per aprire una risorsa desktop di Windows per la modifica binaria  
  
1.  In [Visualizzazione risorse](../windows/resource-view-window.md)selezionare il file di risorse che si vuole modificare.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Fare clic con il pulsante destro del mouse sulla risorsa e scegliere **Apri dati binari** dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Se si usa la finestra [Visualizzazione risorse](../windows/resource-view-window.md) per aprire una risorsa in un formato che Visual Studio non riconosce, ad esempio RCDATA o una risorsa personalizzata, la risorsa viene aperta automaticamente nell'editor binario.  
  
### <a name="to-open-a-managed-resource-for-binary-editing"></a>Per aprire una risorsa gestita per la modifica binaria  
  
1.  In Esplora soluzioni selezionare il file di risorse specifico che si vuole modificare.  
  
2.  Fare clic con il pulsante destro del mouse sulla risorsa e scegliere **Apri con** dal menu di scelta rapida.  
  
3.  Nella finestra di dialogo **Apri con** scegliere **Editor binario**.  
  
    > [!NOTE]
    >  È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.  
  
    > [!NOTE]
    >  Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).   
  
 ![Editor binario](../mfc/media/vcbinaryeditor2.gif "vcBinaryEditor2")  
Dati binari per una finestra di dialogo visualizzata nell'editor binario  
  
 Nell'editor binario vengono rappresentati solo alcuni valori ASCII (da 0x20 a 0x7E). I caratteri estesi vengono visualizzati come punti nella sezione Valore ASCII dell'editor binario (riquadro a destra). I caratteri "stampabili" sono valori ASCII da 32 a 126.  
  
> [!NOTE]
>  Se si vuole usare l'editor binario su una risorsa già modificata in un'altra finestra dell'editor, chiudere l'altra finestra.  
  
 **Requisiti**  
  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Binary Editor](binary-editor.md)

