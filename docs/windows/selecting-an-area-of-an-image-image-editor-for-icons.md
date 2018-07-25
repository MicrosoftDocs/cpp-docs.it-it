---
title: Selezione di un'Area di un'immagine (Editor di immagini per le icone) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.image.editing
dev_langs:
- C++
helpviewer_keywords:
- Image editor [C++], image selection
- Image editor [C++], selecting images
- images [C++], selecting
- cursors [C++], selecting areas of
ms.assetid: 8b6ce4ad-eba1-4ece-86ba-cea92c3edff2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 07cb7528e25604e873f6da92193a97cf79700799
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890113"
---
# <a name="selecting-an-area-of-an-image-image-editor-for-icons"></a>Selezione di un'area di immagini (Editor di immagini per le icone)
È possibile utilizzare gli strumenti di selezione per definire un'area di un'immagine che si desidera tagliare, copiare, cancellare, invertire, ridimensionare o spostare. Con il **rettangolo di selezione** strumento è possibile definire e selezionare un'area rettangolare dell'immagine. Con il **Selezione irregolare** strumento è possibile creare una struttura a mano libera dell'area di cui si desidera selezionare per le operazioni Taglia, copia o un'altra operazione.  
  
> [!NOTE]
>  Vedere il **rettangolo di selezione** e **Selezione irregolare** strumenti illustrati nella [barra degli strumenti dell'Editor di immagini](../windows/toolbar-image-editor-for-icons.md) o visualizzare le descrizioni comandi associate a ogni pulsante di **Editor di immagini** barra degli strumenti.  
  
 È anche possibile creare un pennello personalizzato da una selezione. Per ulteriori informazioni, vedere [la creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).  
  
### <a name="to-select-an-area-of-an-image"></a>Per selezionare un'area di un'immagine  
  
1.  Nel **Editor di immagini** barra degli strumenti (o dal **immagine** menu **strumenti** comando), selezionare lo strumento desiderato.  
  
2.  Spostare il punto di inserimento di un angolo dell'area dell'immagine che si desidera selezionare. Mirino visualizzato quando il punto di inserimento è posizionato sull'immagine.  
  
3.  Trascinare il punto di inserimento nell'angolo opposto dell'area di cui che si desidera selezionare. Un rettangolo mostra i pixel verranno selezionati. Tutti i pixel all'interno del rettangolo, tra cui quelle contenute nel rettangolo vengono inclusi nella selezione.  
  
4.  Rilasciare il pulsante del mouse. Il bordo di selezione racchiude l'area selezionata.  
  
### <a name="to-select-an-entire-image"></a>Per selezionare un'intera immagine  
  
1.  Fare clic sull'immagine di fuori della selezione corrente. Il bordo di selezione cambia lo stato attivo e include l'intera immagine ancora una volta.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 Nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)

