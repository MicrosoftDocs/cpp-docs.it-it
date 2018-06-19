---
title: Fornitura di attivazione senza sfarfallio | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], flicker-free
- flicker, MFC ActiveX controls
- activation [MFC], flicker-free
ms.assetid: bcb24b77-31d8-44a0-8c58-2ea6213b4c43
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d9d9c0108ce4afd2e65678280248488181ad34f2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33356554"
---
# <a name="providing-flicker-free-activation"></a>Fornitura di attivazione senza sfarfallio
Se il controllo disegna se stesso in modo identico negli stati attivi e inattivi e non utilizzare l'attivazione senza finestra, è possibile eliminare le operazioni di disegno e lo sfarfallio visivo che in genere si verificano quando si effettua la transizione tra inattive e di stato attivo. A tale scopo, includere il **noFlickerActivate** flag nel set di flag restituiti da [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). Ad esempio:  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/providing-flicker-free-activation_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#13](../mfc/codesnippet/cpp/providing-flicker-free-activation_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/providing-flicker-free-activation_3.cpp)]  
  
 Il codice per includere questo flag viene generato automaticamente se si seleziona il **attivazione senza sfarfallio** opzione il [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina quando si crea il controllo con la creazione guidata controllo ActiveX MFC.  
  
 Se si usa l'attivazione senza finestra, questa ottimizzazione non ha alcun effetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

