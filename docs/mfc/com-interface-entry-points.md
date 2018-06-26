---
title: Punti di ingresso all'interfaccia COM | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- entry points, COM interfaces
- state management, OLE/COM interfaces
- MFC COM, COM interface entry points
- OLE, interface entry points
- MFC, managing state data
- COM interfaces, entry points
ms.assetid: 9e7421dc-0731-4748-9e1b-90acbaf26d77
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d7f52aee6a276410ba6a90fd662a2fad8d258e92
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929887"
---
# <a name="com-interface-entry-points"></a>Punti di ingresso all'interfaccia COM
Per le funzioni membro di un'interfaccia COM, usare il [METHOD_PROLOGUE](com-interface-entry-points.md#method_prologue) macro per mantenere lo stato complessivo appropriato quando si chiamano metodi dell'interfaccia esportata.  
  
 In genere, le funzioni membro delle interfacce implementate da `CCmdTarget`-oggetti derivati già usano questa macro per fornire l'inizializzazione automatica del `pThis` puntatore. Ad esempio:  
  
 [!code-cpp[NVC_MFCConnectionPoints#5](../mfc/codesnippet/cpp/com-interface-entry-points_1.cpp)]  
  
 Per ulteriori informazioni, vedere [Nota tecnica 38](../mfc/tn038-mfc-ole-iunknown-implementation.md) in MFC/OLE `IUnknown` implementazione.  
  
 Il `METHOD_PROLOGUE` macro viene definita come:  
  
 `#define METHOD_PROLOGUE(theClass, localClass) \`  
  
 `theClass* pThis = \`  
  
 `((theClass*)((BYTE*)this - offsetof(theClass, m_x##localClass))); \`  
  
 `AFX_MANAGE_STATE(pThis->m_pModuleState) \`  
  
 La parte di macro che gestisce lo stato globale è:  
  
 `AFX_MANAGE_STATE( pThis->m_pModuleState )`  
  
 In questa espressione *m_pModuleState* si presuppone che sia una variabile membro dell'oggetto contenitore. Viene implementato dal `CCmdTarget` classe di base e viene inizializzato sul valore appropriato da `COleObjectFactory`, quando viene creata un'istanza dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

