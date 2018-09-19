---
title: Implementazione di CComObjectRootEx | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- CComObjectRootEx
dev_langs:
- C++
helpviewer_keywords:
- CComObjectRoot class, implementing
- CComObjectRootEx class
ms.assetid: 79630c44-f2df-4e9e-b730-400a0ebfbd2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f91346febbb84ab7c1978740e0cbc6f0c43cbb4b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46052634"
---
# <a name="implementing-ccomobjectrootex"></a>Implementazione di CComObjectRootEx

[CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) è essenziale; tutti gli oggetti ATL devono avere un'istanza di `CComObjectRootEx` oppure [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) nell'ereditarietà. `CComObjectRootEx` fornisce il meccanismo `QueryInterface` predefinito basato sulle voci della mappa COM.

Tramite la mappa COM, le interfacce di un oggetto vengono esposte a un client quando quest'ultimo esegue una query per un'interfaccia. La query viene eseguita mediante `CComObjectRootEx::InternalQueryInterface`. `InternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM.

È possibile inserire le interfacce nella tabella di mappe COM con la [COM_INTERFACE_ENTRY](reference/com-interface-entry-macros.md#com_interface_entry) macro o una delle relative varianti. Ad esempio, il codice seguente inserisce le interfacce `IDispatch`, `IBeeper` e `ISupportErrorInfo` nella tabella di mappe COM:

[!code-cpp[NVC_ATL_COM#1](../atl/codesnippet/cpp/implementing-ccomobjectrootex_1.h)]

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)<br/>
[Macro di mappa COM](../atl/reference/com-map-macros.md)

