---
title: Utilizzo di un contesto di dispositivo integro | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], unclipped device context
ms.assetid: 9c020063-73da-4803-bf7b-2e1fd950c9ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8c76dc44993615e17ea3d99f9ac018a748e24d0a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33381010"
---
# <a name="using-an-unclipped-device-context"></a>Utilizzo di un contesto di dispositivo integro
Se si è assolutamente certi che il controllo disegnato di fuori del rettangolo del client, è possibile ottenere un miglioramento velocizzare disabilitando la chiamata a `IntersectClipRect` che viene effettuata da `COleControl`. A tale scopo, rimuovere il **clipPaintDC** flag dal set di flag restituiti da [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). Ad esempio:  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/using-an-unclipped-device-context_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#14](../mfc/codesnippet/cpp/using-an-unclipped-device-context_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/using-an-unclipped-device-context_3.cpp)]  
  
 Il codice per rimuovere questo flag viene generato automaticamente se si seleziona il **contesto di periferica integro** opzione il [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina, quando si crea il controllo con la creazione guidata controllo ActiveX MFC.  
  
 Se si usa l'attivazione senza finestra, questa ottimizzazione non ha alcun effetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

