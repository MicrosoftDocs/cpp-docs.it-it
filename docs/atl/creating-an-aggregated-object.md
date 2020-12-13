---
description: 'Altre informazioni su: creazione di un oggetto aggregato'
title: Creazione di un oggetto aggregato
ms.date: 11/04/2016
helpviewer_keywords:
- aggregation [C++], creating aggregated objects
- aggregate objects [C++], creating
ms.assetid: fc29d7aa-fd53-4276-9c2f-37379f71b179
ms.openlocfilehash: e6efbf63e28d0477730a2d7c31ec91e9b75520e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97153226"
---
# <a name="creating-an-aggregated-object"></a>Creazione di un oggetto aggregato

L'aggregazione delega `IUnknown` chiamate, fornendo un puntatore all'oggetto esterno `IUnknown` all'oggetto interno.

## <a name="to-create-an-aggregated-object"></a>Per creare un oggetto aggregato

1. Aggiungere un `IUnknown` puntatore all'oggetto della classe e inizializzarlo su null nel costruttore.

1. Eseguire l'override di [FinalConstruct](../atl/reference/ccomobjectrootex-class.md#finalconstruct) per creare l'aggregazione.

1. Usare il `IUnknown` puntatore, definito nel passaggio 1, come secondo parametro per le macro [COM_INTERFACE_ENTRY_AGGREGATE](reference/com-interface-entry-macros.md#com_interface_entry_aggregate) .

1. Eseguire l'override di [FinalRelease](../atl/reference/ccomobjectrootex-class.md#finalrelease) per rilasciare il `IUnknown` puntatore.

> [!NOTE]
> Se si usa e rilascia un'interfaccia dall'oggetto aggregato durante `FinalConstruct` , è necessario aggiungere la macro [DECLARE_PROTECT_FINAL_CONSTRUCT](reference/aggregation-and-class-factory-macros.md#declare_protect_final_construct) alla definizione dell'oggetto classe.

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)
