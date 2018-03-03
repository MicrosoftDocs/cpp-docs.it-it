---
title: Ridimensionamento di singoli controlli | Documenti Microsoft
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
- Size to Content command
- size, controls
- text, autosizing controls to fit text
- controls [C++], sizing
ms.assetid: 14ccba02-7171-463a-a121-7018cf1e2e5a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b019cd2bbf68a4321bafd6dd960ffbcdba2dddf7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="sizing-individual-controls"></a>Ridimensionamento di singoli controlli
Utilizzare i quadratini di ridimensionamento per ridimensionare un controllo. Quando il puntatore è posizionato su un quadratino di ridimensionamento, assume la forma per indicare le direzioni in cui il controllo può essere ridimensionato. Quadratini di ridimensionamento attivi sono pieni. Se un quadratino di ridimensionamento è vuoto, il controllo non può essere ridimensionato lungo l'asse.  
  
 È inoltre possibile modificare le dimensioni di un controllo bloccando il controllo per i margini o le guide alla, o spostando un controllo bloccato e la Guida da un altro.  
  
### <a name="to-size-a-control"></a>Per ridimensionare un controllo  
  
1.  Selezionare il controllo.  
  
2.  Trascinare i quadratini di ridimensionamento per modificare le dimensioni del controllo:  
  
    -   Quadratini di ridimensionamento all'inizio e i lati modificare la dimensione orizzontale o verticale.  
  
    -   Quadratini di ridimensionamento negli angoli modificare dimensioni orizzontali e verticali.  
  
    > [!TIP]
    >  È possibile ridimensionare l'unità di una finestra di dialogo (DLU) controllo contemporaneamente tenendo premuto il tasto MAIUSC e utilizzando i tasti freccia giù e freccia destra.  
  
### <a name="to-automatically-size-a-control-to-fit-the-text-within-it"></a>Per ridimensionare automaticamente un controllo per adattarsi al testo all'interno di essa  
  
1.  Scegliere **adatta al contenuto** dal **formato** menu.  
  
 \- oppure -  
  
-   Il pulsante destro del controllo e scegliere **adatta al contenuto** dal menu di scelta rapida.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)

