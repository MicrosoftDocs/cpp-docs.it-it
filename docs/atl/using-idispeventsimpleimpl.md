---
title: Utilizzo di IDispEventSimpleImpl (ATL)
ms.date: 08/19/2019
helpviewer_keywords:
- IDispEventSimpleImpl class, using
ms.assetid: 8640ad1a-4bd0-40a5-b5e4-7322685d7aab
ms.openlocfilehash: 8a5e64093d2687efc6c6c5e9b0ce89402d2b99a4
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69630576"
---
# <a name="using-idispeventsimpleimpl"></a>Uso di IDispEventSimpleImpl

Quando si `IDispEventSimpleImpl` USA per gestire gli eventi, è necessario:

- Derivare la classe da [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md).

- Aggiungere una mappa di sink di evento alla classe.

- Definire le strutture [_ATL_FUNC_INFO](../atl/reference/atl-func-info-structure.md) che descrivono gli eventi.

- Aggiungere voci alla mappa di sink di evento usando la macro [SINK_ENTRY_INFO](reference/composite-control-macros.md#sink_entry_info) .

- Implementare i metodi che si desidera gestire.

- Consigliare e annullare la notifica dell'origine evento.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come gestire l' `DocumentChange` evento generato dall'oggetto **applicazione** di Word. Questo evento viene definito come metodo sull' `ApplicationEvents` interfaccia dispatch.

L'esempio è riportato nell'esempio [ATLEventHandling](../overview/visual-cpp-samples.md).

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

Nell'esempio viene `#import` utilizzato per generare i file di intestazione necessari dalla libreria dei tipi di Word. Se si vuole usare questo esempio con altre versioni di Word, è necessario specificare il file dll Mso corretto. Ad esempio, Office 2000 fornisce Mso9. dll e OfficeXP fornisce MSO. dll. Questo codice è stato semplificato da *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti):

[!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/cpp/using-idispeventsimpleimpl_1.h)]

Le uniche informazioni dalla libreria dei tipi effettivamente usate in questo esempio sono il CLSID dell'oggetto Word `Application` e l'IID `ApplicationEvents` dell'interfaccia. Queste informazioni vengono utilizzate solo in fase di compilazione.

Il codice seguente viene visualizzato in Simple. h. Il codice pertinente è indicato dai commenti:

[!code-cpp[NVC_ATL_EventHandlingSample#3](../atl/codesnippet/cpp/using-idispeventsimpleimpl_2.h)]

Il codice seguente è da Simple. cpp:

[!code-cpp[NVC_ATL_EventHandlingSample#4](../atl/codesnippet/cpp/using-idispeventsimpleimpl_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Gestione di eventi](../atl/event-handling-and-atl.md)<br/>
[Esempio ATLEventHandling](../overview/visual-cpp-samples.md)
