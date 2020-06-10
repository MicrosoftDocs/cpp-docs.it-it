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
ms.openlocfilehash: 132dd7394119081dcaeb098c2088782ff5d40ae4
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619332"
---
# <a name="com-interface-entry-points"></a>Punti di ingresso all'interfaccia COM

Per le funzioni membro di un'interfaccia COM, usare la `METHOD_PROLOGUE` macro per mantenere lo stato globale corretto quando si chiamano i metodi di un'interfaccia esportata.

In genere, le funzioni membro delle interfacce implementate da `CCmdTarget` oggetti derivati da già utilizzano questa macro per fornire l'inizializzazione automatica del `pThis` puntatore. Ad esempio:

[!code-cpp[NVC_MFCConnectionPoints#5](codesnippet/cpp/com-interface-entry-points_1.cpp)]

Per ulteriori informazioni, vedere la [Nota tecnica 38](tn038-mfc-ole-iunknown-implementation.md) sull'implementazione MFC/OLE `IUnknown` .

La `METHOD_PROLOGUE` macro viene definita come segue:

```cpp
#define METHOD_PROLOGUE(theClass, localClass) \
    theClass* pThis = \
    ((theClass*)((BYTE*)this - offsetof(theClass, m_x##localClass))); \
    AFX_MANAGE_STATE(pThis->m_pModuleState) \
```

La parte della macro interessata alla gestione dello stato globale è la seguente:

`AFX_MANAGE_STATE( pThis->m_pModuleState )`

In questa espressione, si presuppone che *m_pModuleState* sia una variabile membro dell'oggetto contenitore. Viene implementato dalla `CCmdTarget` classe base e viene inizializzato sul valore appropriato da `COleObjectFactory` , quando viene creata un'istanza dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Gestione dei dati dello stato dei moduli MFC](managing-the-state-data-of-mfc-modules.md)
