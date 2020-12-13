---
description: 'Altre informazioni su: implementazione di CComObjectRootEx'
title: Implementazione di CComObjectRootEx
ms.date: 11/04/2016
helpviewer_keywords:
- CComObjectRoot class, implementing
- CComObjectRootEx class
ms.assetid: 79630c44-f2df-4e9e-b730-400a0ebfbd2b
ms.openlocfilehash: 235d10a8c390311230057da5dda11e5a8f093445
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152841"
---
# <a name="implementing-ccomobjectrootex"></a>Implementazione di CComObjectRootEx

[CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) è essenziale; tutti gli oggetti ATL devono disporre di un'istanza di `CComObjectRootEx` o [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) nell'ereditarietà. `CComObjectRootEx` fornisce il meccanismo `QueryInterface` predefinito basato sulle voci della mappa COM.

Tramite la mappa COM, le interfacce di un oggetto vengono esposte a un client quando quest'ultimo esegue una query per un'interfaccia. La query viene eseguita mediante `CComObjectRootEx::InternalQueryInterface`. `InternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM.

È possibile immettere interfacce nella tabella della mappa COM con la macro [COM_INTERFACE_ENTRY](reference/com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti. Ad esempio, il codice seguente inserisce le interfacce `IDispatch`, `IBeeper` e `ISupportErrorInfo` nella tabella di mappe COM:

[!code-cpp[NVC_ATL_COM#1](../atl/codesnippet/cpp/implementing-ccomobjectrootex_1.h)]

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)<br/>
[Macro mappa COM](../atl/reference/com-map-macros.md)
