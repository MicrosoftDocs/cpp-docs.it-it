---
title: Uso di IDispEventSimpleImpl (ATL)
ms.date: 11/04/2016
f1_keywords:
- IDispEventSimpleImpl
helpviewer_keywords:
- IDispEventSimpleImpl class, using
ms.assetid: 8640ad1a-4bd0-40a5-b5e4-7322685d7aab
ms.openlocfilehash: 4b8b651b9f300d3de87297fc62ba54b549e99001
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50538268"
---
# <a name="using-idispeventsimpleimpl"></a>Uso di IDispEventSimpleImpl

Quando si usa `IDispEventSimpleImpl` per gestire gli eventi, è necessario:

- Derivare la classe da [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md).

- Aggiungere una mappa di sink di eventi alla classe.

- Definire [ATL_FUNC_INFO](../atl/reference/atl-func-info-structure.md) strutture che descrivono gli eventi.

- Aggiungere le voci per il mapping dei sink di evento utilizzando il [macro SINK_ENTRY_INFO](reference/composite-control-macros.md#sink_entry_info) macro.

- Implementare i metodi che desidera gestire.

- Notifica e annullare l'origine dell'evento.

## <a name="example"></a>Esempio

L'esempio seguente viene illustrato come gestire le `DocumentChange` eventi generati di Word **applicazione** oggetto. Questo evento viene definito come un metodo su di `ApplicationEvents` interfaccia dispatch.

L'esempio è tratto dal [esempio ATLEventHandling](../visual-cpp-samples.md).

```cpp
[ uuid(000209F7-0000-0000-C000-000000000046), hidden ]
dispinterface ApplicationEvents {
properties:
methods:
    [id(0x00000001), restricted, hidden]
    void Startup();

    [id(0x00000002)]
    void Quit();

    [id(0x00000003)]
    void DocumentChange();
};
```

L'esempio Usa `#import` per generare i file di intestazione obbligatori da libreria dei tipi di Word. Se si desidera usare questo esempio con altre versioni di Word, è necessario specificare il file dll corretti mso. Ad esempio, Office 2000 fornisce MSO9 e OfficeXP fornisce Mso. dll. Questo codice è semplificato dal file stdafx. h:

[!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/cpp/using-idispeventsimpleimpl_1.h)]

L'unica informazione dalla libreria dei tipi effettivamente usata in questo esempio è il CLSID della parola `Application` oggetto e l'IID del `ApplicationEvents` interfaccia. Queste informazioni viene utilizzate solo in fase di compilazione.

Il codice seguente viene visualizzato in Simple.h. Il codice rilevante è indicato dai commenti:

[!code-cpp[NVC_ATL_EventHandlingSample#3](../atl/codesnippet/cpp/using-idispeventsimpleimpl_2.h)]

Il codice seguente deriva dal Simple. cpp:

[!code-cpp[NVC_ATL_EventHandlingSample#4](../atl/codesnippet/cpp/using-idispeventsimpleimpl_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Gestione di eventi](../atl/event-handling-and-atl.md)<br/>
[Nell'esempio ATLEventHandling](../visual-cpp-samples.md)

