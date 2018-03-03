---
title: Modifica delle parti di un'immagine (Editor di immagini per le icone) | Documenti Microsoft
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
- Image editor [C++], editing images
- Clipboard [C++], pasting
- images [C++], editing
- images [C++], deleting selected parts
- images [C++], copying selected parts
- images [C++], moving selected parts
- images [C++], dragging and replicating selected parts
- images [C++], pasting into
- graphics [C++], editing
ms.assetid: ff4f5fef-71a4-4fd8-825e-049399fed391
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: acd4859bf7c80cf2bbe6cd2d86c39d0fc596351d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="editing-parts-of-an-image-image-editor-for-icons"></a>Modifica delle parti di un'immagine (Editor di immagini per le icone)
È possibile eseguire operazioni di modifica standard, ovvero le operazioni Taglia, copia, annullamento e lo spostamento, in un [selezione](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md), se la selezione è l'intera immagine o solo una parte di esso. Poiché l'editor di immagini utilizza negli Appunti di Windows, è possibile trasferire immagini tra l'editor di immagini e altre applicazioni per Windows.  
  
 Inoltre, è possibile ridimensionare la selezione, se include l'intera immagine o solo una parte.  
  
### <a name="to-cut-the-current-selection-and-move-it-to-the-clipboard"></a>Taglia la selezione corrente e spostarlo negli Appunti  
  
1.  Fare clic su **Taglia** sul **modifica** menu.  
  
### <a name="to-copy-the-selection"></a>Per copiare la selezione  
  
1.  Posizionare il puntatore all'interno del bordo di selezione oppure in qualsiasi punto su di esso, ad eccezione di quadratini di ridimensionamento.  
  
2.  Tenere premuto il **CTRL** mentre si trascina la selezione in un nuovo percorso della chiave. L'area della selezione originale rimane invariato.  
  
3.  Per copiare la selezione nell'immagine nella posizione corrente, fare clic all'esterno del cursore di selezione.  
  
### <a name="to-paste-the-clipboard-contents-into-an-image"></a>Per incollare il contenuto degli Appunti in un'immagine  
  
1.  Dal **modifica** menu, scegliere **Incolla**.  
  
     Il contenuto degli Appunti, racchiuso tra il bordo di selezione vengono visualizzati nell'angolo superiore sinistro del riquadro.  
  
2.  Posizionare il puntatore all'interno del bordo di selezione e trascinare l'immagine nella posizione desiderata nell'immagine.  
  
3.  Per ancorare l'immagine nella nuova posizione, fare clic all'esterno del bordo di selezione.  
  
### <a name="to-delete-the-current-selection-without-moving-it-to-the-clipboard"></a>Per eliminare la selezione corrente senza spostarlo negli Appunti  
  
1.  Dal **modifica** menu, scegliere **eliminare**.  
  
     L'area della selezione originale viene riempita con il colore di sfondo corrente.  
  
    > [!NOTE]
    >  È possibile accedere Taglia, copia, Incolla ed eliminare comandi facendo clic nella finestra Visualizzazione risorse.  
  
### <a name="to-move-the-selection"></a>Per spostare la selezione  
  
1.  Posizionare il puntatore all'interno del bordo di selezione oppure in qualsiasi punto su di esso, ad eccezione di quadratini di ridimensionamento.  
  
2.  Trascinare la selezione nella nuova posizione.  
  
3.  Per ancorare la selezione dell'immagine in una nuova posizione, fare clic all'esterno del bordo di selezione.  
  
 Per ulteriori informazioni sul disegno con una selezione, vedere [la creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)   
 [Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)   
 [Editor di immagini per le icone](../windows/image-editor-for-icons.md)

