---
title: Ridimensionamento di singoli controlli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Size to Content command
- size, controls
- text, autosizing controls to fit text
- controls [C++], sizing
ms.assetid: 14ccba02-7171-463a-a121-7018cf1e2e5a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 20dc5eb7af4195c9861d09761da245cdd5d3217d
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652214"
---
# <a name="sizing-individual-controls"></a>Ridimensionamento di singoli controlli
Usare i quadratini di ridimensionamento per ridimensionare un controllo. Quando il puntatore è posizionato su un quadratino di ridimensionamento, assume la forma per indicare le direzioni in cui è possibile ridimensionare il controllo. Quadratini di ridimensionamento attivi sono pieni. Se un quadratino di ridimensionamento è vuoto, non è possibile ridimensionare il controllo lungo l'asse.  
  
 È anche possibile modificare le dimensioni di un controllo per il controllo per i margini o le guide di allineamento o spostando un controllo bloccato e la Guida da un altro.  
  
### <a name="to-size-a-control"></a>Per ridimensionare un controllo  
  
1.  Selezionare il controllo.  
  
2.  Trascinare i quadratini di ridimensionamento per modificare le dimensioni del controllo:  
  
    -   Quadratini di ridimensionamento all'inizio e i lati modificano la dimensione orizzontale o verticale.  
  
    -   Quadratini di ridimensionamento negli angoli modificano le dimensioni orizzontali e verticali.  
  
    > [!TIP]
    >  È possibile ridimensionare l'unità di una finestra di dialogo (DLU) controllo contemporaneamente tenendo premuto il **Shift** chiave e l'uso di **freccia destra** e **freccia giù** chiavi.  
  
### <a name="to-automatically-size-a-control-to-fit-the-text-within-it"></a>Per ridimensionare automaticamente un controllo per adattarsi al testo in esso contenuti  
  
1.  Scegli **adatta al contenuto** dalle **formato** menu.  
  
 \- oppure -  
  
-   Il pulsante destro del controllo e scegliere **adatta al contenuto** dal menu di scelta rapida.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli nelle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)