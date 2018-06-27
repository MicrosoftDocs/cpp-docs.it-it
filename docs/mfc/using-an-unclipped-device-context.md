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
ms.openlocfilehash: 6d4fcfbe8e8e7eb174f85ced03bec822b4968bde
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954335"
---
# <a name="using-an-unclipped-device-context"></a>Utilizzo di un contesto di dispositivo integro
Se si è assolutamente certi che il controllo del codice non venga disegnato di fuori del rettangolo del client, è possibile realizzare un aumento della velocità piccolo ma rilevabili disabilitando la chiamata a `IntersectClipRect` che viene effettuata da `COleControl`. A tale scopo, rimuovere il *clipPaintDC* flag dal set di flag restituito da [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). Ad esempio:  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/using-an-unclipped-device-context_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#14](../mfc/codesnippet/cpp/using-an-unclipped-device-context_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/using-an-unclipped-device-context_3.cpp)]  
  
 Il codice per rimuovere questo flag viene generato automaticamente se si seleziona il **contesto di periferica integro** opzione il [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina, quando si crea il controllo del codice con la creazione guidata controllo ActiveX MFC.  
  
 Se si usa l'attivazione senza finestra, questa ottimizzazione non ha effetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

