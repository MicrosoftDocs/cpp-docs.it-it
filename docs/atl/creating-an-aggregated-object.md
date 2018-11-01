---
title: Creazione di un oggetto aggregato
ms.date: 11/04/2016
helpviewer_keywords:
- aggregation [C++], creating aggregated objects
- aggregate objects [C++], creating
ms.assetid: fc29d7aa-fd53-4276-9c2f-37379f71b179
ms.openlocfilehash: 5c655b8ced7738b30bf13d088cfadf11b5c65ef0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50449855"
---
# <a name="creating-an-aggregated-object"></a>Creazione di un oggetto aggregato

I delegati di aggregazione `IUnknown` chiamate, che fornisce un puntatore all'oggetto esterno `IUnknown` all'oggetto interno.

## <a name="to-create-an-aggregated-object"></a>Per creare un oggetto aggregato

1. Aggiungere un `IUnknown` puntatore alla classe dell'oggetto e inizializzarla su NULL nel costruttore.

1. Eseguire l'override [FinalConstruct](../atl/reference/ccomobjectrootex-class.md#finalconstruct) per creare la funzione di aggregazione.

1. Usare la `IUnknown` puntatore, definito nel passaggio 1, come secondo parametro per il [COM_INTERFACE_ENTRY_AGGREGATE](reference/com-interface-entry-macros.md#com_interface_entry_aggregate) macro.

1. Eseguire l'override [FinalRelease](../atl/reference/ccomobjectrootex-class.md#finalrelease) per rilasciare il `IUnknown` puntatore.

> [!NOTE]
> Se si utilizza e rilasciare un'interfaccia dall'oggetto aggregato durante `FinalConstruct`, è consigliabile aggiungere i [macro DECLARE_PROTECT_FINAL_CONSTRUCT](reference/aggregation-and-class-factory-macros.md#declare_protect_final_construct) macro per la definizione dell'oggetto di classe.

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)

