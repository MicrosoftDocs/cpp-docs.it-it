---
title: Tipi di elenchi immagini | Documenti Microsoft
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
- lists [MFC], image
- image lists [MFC], types of
- CImageList class [MFC], types
ms.assetid: bee5e7c3-78f5-4037-a136-9c50d67cdee5
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 84a2118978d5ebd722d4fe56cdeec2aa0f74a94e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="types-of-image-lists"></a>Tipi di elenchi immagini
Esistono due tipi di elenchi immagini ([CImageList](../mfc/reference/cimagelist-class.md)): non mascherata e mascherati. Un "elenco di immagine non mascherata" è costituito da una bitmap a colori che contiene una o più immagini. Un "elenco di immagini mascherate" è costituito da due bitmap della stessa dimensione. La prima è una bitmap a colori che contiene le immagini e la seconda è una bitmap monocromatica che contiene una serie di maschere: uno per ogni immagine della prima bitmap.  
  
 Uno degli overload di **crea** funzione membro accetta un flag che indica se l'elenco di immagini è mascherato. (Altri overload creare elenchi di immagini con maschera.)  
  
 Quando viene disegnata un'immagine non mascherata, viene semplicemente copiato nel contesto di dispositivo di destinazione; vale a dire, viene disegnato sul colore di sfondo esistente del contesto del dispositivo. Quando viene disegnata un'immagine mascherata, i bit dell'immagine vengono combinati con i bit della maschera, che in genere produce aree trasparenti nell'immagine bitmap in cui viene illustrato il colore di sfondo del contesto di dispositivo di destinazione tramite. È possibile specificare diversi stili di disegnati quando si disegna un'immagine mascherata. Ad esempio, è possibile specificare che l'immagine sia retinato per indicare un oggetto selezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)

