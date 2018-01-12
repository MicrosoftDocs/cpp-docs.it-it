---
title: Punti di ingresso all'interfaccia COM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- entry points, COM interfaces
- state management, OLE/COM interfaces
- MFC COM, COM interface entry points
- OLE, interface entry points
- MFC, managing state data
- COM interfaces, entry points
ms.assetid: 9e7421dc-0731-4748-9e1b-90acbaf26d77
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 010df3546a6ac2b6276281c39efdd76abd5ec222
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="com-interface-entry-points"></a>Punti di ingresso all'interfaccia COM
Per le funzioni membro di un'interfaccia COM, utilizzare il [METHOD_PROLOGUE](com-interface-entry-points.md#method_prologue) macro per mantenere lo stato complessivo appropriato quando si chiamano metodi dell'interfaccia esportata.  
  
 In genere, le funzioni membro delle interfacce implementate da `CCmdTarget`-oggetti derivati utilizzano già questa macro per fornire l'inizializzazione automatica del `pThis` puntatore. Ad esempio:  
  
 [!code-cpp[NVC_MFCConnectionPoints#5](../mfc/codesnippet/cpp/com-interface-entry-points_1.cpp)]  
  
 Per ulteriori informazioni, vedere [Nota tecnica 38](../mfc/tn038-mfc-ole-iunknown-implementation.md) su MFC/OLE **IUnknown** implementazione.  
  
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

