---
title: Creazione di un oggetto aggregato | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- aggregation [C++], creating aggregated objects
- aggregate objects [C++], creating
ms.assetid: fc29d7aa-fd53-4276-9c2f-37379f71b179
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8f6ff5a0fdcff62d62469f17388f633b83739a09
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37850826"
---
# <a name="creating-an-aggregated-object"></a>Creazione di un oggetto aggregato
I delegati di aggregazione `IUnknown` chiamate, che fornisce un puntatore all'oggetto esterno `IUnknown` all'oggetto interno.  
  
### <a name="to-create-an-aggregated-object"></a>Per creare un oggetto aggregato  
  
1.  Aggiungere un `IUnknown` puntatore alla classe dell'oggetto e inizializzarla su NULL nel costruttore.  
  
2.  Eseguire l'override [FinalConstruct](../atl/reference/ccomobjectrootex-class.md#finalconstruct) per creare la funzione di aggregazione.  
  
3.  Usare la `IUnknown` puntatore, definito nel passaggio 1, come secondo parametro per il [COM_INTERFACE_ENTRY_AGGREGATE](reference/com-interface-entry-macros.md#com_interface_entry_aggregate) macro.  
  
4.  Eseguire l'override [FinalRelease](../atl/reference/ccomobjectrootex-class.md#finalrelease) per rilasciare il `IUnknown` puntatore.  
  
> [!NOTE]
>  Se si utilizza e rilasciare un'interfaccia dall'oggetto aggregato durante `FinalConstruct`, è consigliabile aggiungere i [macro DECLARE_PROTECT_FINAL_CONSTRUCT](reference/aggregation-and-class-factory-macros.md#declare_protect_final_construct) macro per la definizione dell'oggetto di classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)

