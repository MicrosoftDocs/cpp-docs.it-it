---
title: Utilizzo di IDispEventImpl (ATL)
ms.date: 08/19/2019
helpviewer_keywords:
- IDispEventImpl class, using
ms.assetid: 82d53b61-9d0d-45c5-aff9-2fafa468a9ca
ms.openlocfilehash: 9684781ba99d96e2c58d450ee0ff892374e33aef
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69630591"
---
# <a name="using-idispeventimpl"></a>Uso di IDispEventImpl

Quando si `IDispEventImpl` USA per gestire gli eventi, è necessario:

- Derivare la classe da [IDispEventImpl](../atl/reference/idispeventimpl-class.md).

- Aggiungere una mappa di sink di evento alla classe.

- Aggiungere voci alla mappa di sink di evento usando la macro [SINK_ENTRY](reference/composite-control-macros.md#sink_entry) o [SINK_ENTRY_EX](reference/composite-control-macros.md#sink_entry_ex) .

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

[!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/cpp/using-idispeventimpl_1.h)]

Il codice seguente viene visualizzato in NotSoSimple. h. Il codice pertinente è indicato dai commenti:

[!code-cpp[NVC_ATL_EventHandlingSample#2](../atl/codesnippet/cpp/using-idispeventimpl_2.h)]

## <a name="see-also"></a>Vedere anche

[Gestione di eventi](../atl/event-handling-and-atl.md)<br/>
[Esempio ATLEventHandling](../overview/visual-cpp-samples.md)
