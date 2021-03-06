---
description: "Altre informazioni su: punti di ingresso dell'interfaccia COM"
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
ms.openlocfilehash: 805ac906c3ccca246d1af71c689aaf768f789999
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160012"
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

## <a name="see-also"></a>Vedi anche

[Gestione dei dati sullo stato dei moduli MFC](managing-the-state-data-of-mfc-modules.md)
