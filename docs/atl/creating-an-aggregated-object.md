---
title: Creazione di un oggetto aggregato | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- aggregation [C++], creating aggregated objects
- aggregate objects [C++], creating
ms.assetid: fc29d7aa-fd53-4276-9c2f-37379f71b179
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7b6b66a80c5459157b644ec6b264b707232c83e0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-an-aggregated-object"></a>Creazione di un oggetto aggregato
I delegati di aggregazione **IUnknown** chiamate, fornendo un puntatore all'oggetto esterno **IUnknown** per l'oggetto interno.  
  
### <a name="to-create-an-aggregated-object"></a>Per creare un oggetto aggregato  
  
1.  Aggiungere un **IUnknown** puntatore alla classe dell'oggetto e inizializzarlo per **NULL** nel costruttore.  
  
2.  Eseguire l'override [FinalConstruct](../atl/reference/ccomobjectrootex-class.md#finalconstruct) per creare la funzione di aggregazione.  
  
3.  Utilizzare il **IUnknown** puntatore, definito nel passaggio 1, come il secondo parametro per il [COM_INTERFACE_ENTRY_AGGREGATE](reference/com-interface-entry-macros.md#com_interface_entry_aggregate) macro.  
  
4.  Eseguire l'override [FinalRelease](../atl/reference/ccomobjectrootex-class.md#finalrelease) per rilasciare il **IUnknown** puntatore.  
  
> [!NOTE]
>  Se si utilizza e rilasciare un'interfaccia dall'oggetto aggregato durante `FinalConstruct`, è necessario aggiungere il [macro DECLARE_PROTECT_FINAL_CONSTRUCT](reference/aggregation-and-class-factory-macros.md#declare_protect_final_construct) macro per la definizione dell'oggetto di classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)

