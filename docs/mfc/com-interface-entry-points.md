---
title: Punti di ingresso all'interfaccia COM
ms.date: 03/27/2019
helpviewer_keywords:
- entry points, COM interfaces
- state management, OLE/COM interfaces
- MFC COM, COM interface entry points
- OLE, interface entry points
- MFC, managing state data
- COM interfaces, entry points
ms.assetid: 9e7421dc-0731-4748-9e1b-90acbaf26d77
ms.openlocfilehash: eb8fc425d6b9849f6367d9b207e5181652386be3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62207852"
---
# <a name="com-interface-entry-points"></a>Punti di ingresso all'interfaccia COM

Per le funzioni membro di un'interfaccia COM, usare il `METHOD_PROLOGUE` macro per mantenere lo stato complessivo appropriato quando si chiamano metodi di un'interfaccia esportato.

In genere, le funzioni membro delle interfacce implementate dal `CCmdTarget`-oggetti derivati usano già questa macro per fornire l'inizializzazione automatica del `pThis` puntatore. Ad esempio:

[!code-cpp[NVC_MFCConnectionPoints#5](../mfc/codesnippet/cpp/com-interface-entry-points_1.cpp)]

Per altre informazioni, vedere [38 Nota tecnica](../mfc/tn038-mfc-ole-iunknown-implementation.md) in MFC/OLE `IUnknown` implementazione.

Il `METHOD_PROLOGUE` macro viene definita come:

```cpp
#define METHOD_PROLOGUE(theClass, localClass) \
    theClass* pThis = \
    ((theClass*)((BYTE*)this - offsetof(theClass, m_x##localClass))); \
    AFX_MANAGE_STATE(pThis->m_pModuleState) \
```

La parte di macro che gestisce lo stato globale è:

`AFX_MANAGE_STATE( pThis->m_pModuleState )`

In questa espressione *m_pModuleState* si presuppone che sia una variabile membro dell'oggetto contenitore. Viene implementato dal `CCmdTarget` classe di base e viene inizializzata sul valore appropriato da `COleObjectFactory`, quando viene creata un'istanza dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)
