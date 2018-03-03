---
title: Conversione di bitmap in barre degli strumenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- bitmaps [C++], converting to toolbars
- Toolbar editor, converting bitmaps
- toolbars [C++], converting bitmaps
ms.assetid: 971c181b-40f5-44be-843d-677a7c235667
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d189395bbedff4d73cc690d454ddd07af4d109e6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="converting-bitmaps-to-toolbars"></a>Conversione di bitmap in barre degli strumenti
È possibile creare una nuova barra degli strumenti mediante la conversione di una bitmap. L'immagine di bitmap converte le immagini dei pulsanti per una barra degli strumenti. La bitmap contiene in genere diverse immagini pulsante su una sola bitmap, con un'icona per ogni pulsante. Le immagini possono essere di qualsiasi dimensione. il valore predefinito è 16 pixel di larghezza e l'altezza dell'immagine. È possibile specificare le dimensioni delle immagini nel pulsante di [la finestra di dialogo Nuova risorsa barra degli strumenti](../windows/new-toolbar-resource-dialog-box.md) quando si sceglie di Editor barra degli strumenti dal **immagine** menu nell'editor di immagini.  
  
### <a name="to-convert-bitmaps-to-a-toolbar"></a>Per convertire le bitmap in una barra degli strumenti  
  
1.  Aprire una risorsa bitmap esistente nel [editor di immagini](../windows/image-editor-for-icons.md). (Se la bitmap non è inclusa nel file RC, fare doppio clic sul file RC, scegliere **importazione** dal menu di scelta rapida, selezionare la bitmap a cui si desidera aggiungere al file RC, quindi fare clic su **aprire**.)  
  
2.  Dal **immagine** menu, scegliere **Editor barra degli strumenti**.  
  
     Il [la finestra di dialogo Nuova risorsa barra degli strumenti](../windows/new-toolbar-resource-dialog-box.md) viene visualizzato. È possibile modificare la larghezza e l'altezza delle immagini icona per la corrispondenza della bitmap. L'immagine della barra degli strumenti viene quindi visualizzato nell'editor barra degli strumenti.  
  
3.  Per completare la conversione, modificare il comando **ID** del pulsante utilizzando la [finestra proprietà](/visualstudio/ide/reference/properties-window). Digitare il nuovo **ID** o seleziona un **ID** dall'elenco a discesa.  
  
    > [!TIP]
    >  Finestra delle proprietà contiene un pulsante puntina da disegno nella barra del titolo. Fare clic su questo pulsante Abilita o disabilita Nascondi automaticamente per la finestra. Per scorrere rapidamente tutte le proprietà del pulsante della barra degli strumenti senza dover riaprire le finestre delle proprietà singole, disattivare Nascondi automaticamente in modo che la finestra proprietà rimane ferma.  
  
 È inoltre possibile modificare l'ID di comando del pulsante sulla barra degli strumenti di nuovo usando il [finestra proprietà](/visualstudio/ide/reference/properties-window). Per informazioni sulla modifica la nuova barra degli strumenti, vedere [creazione, spostamento e modifica dei pulsanti della barra degli strumenti](../windows/creating-moving-and-editing-toolbar-buttons.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 MFC o ATL  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di nuove barre degli strumenti](../windows/creating-new-toolbars.md)   
 [Editor barra degli strumenti](../windows/toolbar-editor.md)

