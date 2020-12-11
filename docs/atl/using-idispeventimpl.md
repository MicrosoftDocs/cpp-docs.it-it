---
description: 'Altre informazioni su: uso di IDispEventImpl'
title: Utilizzo di IDispEventImpl (ATL)
ms.date: 08/19/2019
helpviewer_keywords:
- IDispEventImpl class, using
ms.assetid: 82d53b61-9d0d-45c5-aff9-2fafa468a9ca
ms.openlocfilehash: 4ddab52eeac3c409b32393e8b8b07a85019143c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157178"
---
# <a name="using-idispeventimpl"></a>Uso di IDispEventImpl

Quando `IDispEventImpl` si usa per gestire gli eventi, è necessario:

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

Nell'esempio viene utilizzato `#import` per generare i file di intestazione necessari dalla libreria dei tipi di Word. Se si vuole usare questo esempio con altre versioni di Word, è necessario specificare il file dll Mso corretto. Ad esempio, Office 2000 fornisce mso9.dll e OfficeXP fornisce mso.dll. Questo codice è stato semplificato da *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti):

[!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/cpp/using-idispeventimpl_1.h)]

Il codice seguente viene visualizzato in NotSoSimple. h. Il codice pertinente è indicato dai commenti:

[!code-cpp[NVC_ATL_EventHandlingSample#2](../atl/codesnippet/cpp/using-idispeventimpl_2.h)]

## <a name="see-also"></a>Vedi anche

[Gestione degli eventi](../atl/event-handling-and-atl.md)<br/>
[Esempio ATLEventHandling](../overview/visual-cpp-samples.md)
