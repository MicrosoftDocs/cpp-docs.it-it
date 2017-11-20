---
title: Selezione di un oggetto grafico in un contesto di dispositivo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- graphic objects [MFC], selecting into device context
- SelectObject method [MFC]
- GDI objects [MFC], device contexts
- lifetime, graphic objects [MFC]
- device contexts, selecting graphic objects into
- device contexts, graphic objects [MFC]
ms.assetid: cf54a330-63ef-421f-83eb-90ec7bd82eef
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6ab8c783ac66af912d56ed44481c8c3968a70ca0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="selecting-a-graphic-object-into-a-device-context"></a>Selezione di un oggetto grafico in un contesto di dispositivo
Questo argomento si applica all'utilizzo di oggetti grafici nel contesto di dispositivo di una finestra. Dopo aver [creare un oggetto](../mfc/one-stage-and-two-stage-construction-of-objects.md), è necessario selezionarlo nel contesto di dispositivo, al posto di oggetto predefinito archiviata:  
  
 [!code-cpp[NVC_MFCDocViewSDI#7](../mfc/codesnippet/cpp/selecting-a-graphic-object-into-a-device-context_1.cpp)]  
  
## <a name="lifetime-of-graphic-objects"></a>Durata degli oggetti grafici  
 L'oggetto grafico restituito da [SelectObject](../mfc/reference/cdc-class.md#selectobject) è "temporaneo". Vale a dire, verrà eliminato dal [OnIdle](../mfc/reference/cwinapp-class.md#onidle) funzione membro di classe `CWinApp` ora la volta successiva che il programma ottiene inattivo. Come utilizzare l'oggetto restituito da `SelectObject` in una singola funzione senza restituire il controllo del ciclo di messaggi principale, non si disporrà di alcun problema.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Oggetti grafici](../mfc/graphic-objects.md)  
  
-   [Costruzione di oggetti grafici in una fase e in due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Contesti di dispositivo](../mfc/device-contexts.md)  
  
-   [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti grafici](../mfc/graphic-objects.md)

