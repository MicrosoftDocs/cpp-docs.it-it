---
title: Tipi di elenchi immagini | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- lists [MFC], image
- image lists [MFC], types of
- CImageList class [MFC], types
ms.assetid: bee5e7c3-78f5-4037-a136-9c50d67cdee5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 580969195de9241d935e1c27e1659f6e0c4c40ab
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953209"
---
# <a name="types-of-image-lists"></a>Tipi di elenchi immagini
Esistono due tipi di elenchi immagini ([CImageList](../mfc/reference/cimagelist-class.md)): non mascherata e mascherati. Un "elenco di immagine non mascherata" è costituito da una bitmap a colori che contiene una o più immagini. Un "elenco di immagini mascherate" è costituito da due bitmap della stessa dimensione. La prima è una bitmap a colori che contiene le immagini e la seconda è una bitmap monocromatica contenente una serie di maschera, ovvero uno per ogni immagine della prima bitmap.  
  
 Uno degli overload del `Create` membro funzione accetta un flag che indica se l'elenco di immagini è mascherato. (Altri overload creare elenchi di immagini con maschera.)  
  
 Quando viene disegnata un'immagine non mascherata, viene semplicemente copiato nel contesto di dispositivo di destinazione; vale a dire, viene disegnato sul colore di sfondo esistente del contesto del dispositivo. Quando viene disegnata un'immagine mascherata, i bit dell'immagine vengono combinati con i bit della maschera, che in genere produce aree trasparenti nella mappa di bit in cui viene illustrato il colore di sfondo del contesto di dispositivo di destinazione tramite. È possibile specificare diversi stili di disegno quando si disegna un'immagine mascherata. Ad esempio, è possibile specificare che l'immagine sia retinato per indicare un oggetto selezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)

