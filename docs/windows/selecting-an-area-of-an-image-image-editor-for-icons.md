---
title: Selezione di un'Area di un'immagine (Editor di immagini per le icone) | Microsoft Docs
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
ms.openlocfilehash: 5ed8669a22be7e1a2b696ca9373c30e71f17c191
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40012683"
---
# <a name="selecting-an-area-of-an-image-image-editor-for-icons"></a>Selezione di un'area di immagini (Editor di immagini per le icone)
È possibile usare gli strumenti di selezione per definire un'area di un'immagine che si desidera tagliare, copiare, cancellare, Inverti, ridimensionare o spostare. Con il **rettangolo di selezione** strumento è possibile definire e selezionare un'area rettangolare dell'immagine. Con il **Selezione irregolare** strumento è possibile creare una struttura a mano libera dell'area di cui si desidera selezionare per le operazioni Taglia, copia o un'altra operazione.  
  
> [!NOTE]
>  Vedere la **rettangolo di selezione** e **Selezione irregolare** strumenti illustrati nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md) o visualizzare le descrizioni comandi associate a ogni pulsante il **Editor di immagini** sulla barra degli strumenti.  
  
 È anche possibile creare un pennello personalizzato da una selezione. Per altre informazioni, vedere [creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).  
  
### <a name="to-select-an-area-of-an-image"></a>Per selezionare un'area di un'immagine  
  
1.  Nel **Editor di immagini** sulla barra degli strumenti (o dalle **immagine** dal menu **strumenti** comando), selezionare lo strumento desiderato.  
  
2.  Sposta il punto di inserimento di un angolo dell'area dell'immagine che si desidera selezionare. Visualizzato quando il punto di inserimento è posizionato sopra l'immagine di un mirino.  
  
3.  Trascinare l'angolo opposto dell'area per selezionare il punto di inserimento. Un rettangolo mostra i pixel che verranno selezionati. Sono inclusi tutti i pixel all'interno del rettangolo, tra cui quelle contenute nel rettangolo della selezione.  
  
4.  Rilasciare il pulsante del mouse. Il bordo di selezione racchiude l'area selezionata.  
  
### <a name="to-select-an-entire-image"></a>Per selezionare un'intera immagine  
  
1.  Fare clic sull'immagine di fuori della selezione corrente. Il bordo di selezione cambia lo stato attivo e comprende l'intera immagine ancora una volta.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)