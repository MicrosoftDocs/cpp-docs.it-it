---
title: 'Metodo chaininterfaces:: Verify | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::ChainInterfaces::Verify
dev_langs:
- C++
helpviewer_keywords:
- Verify method
ms.assetid: c591e130-8686-4130-ba69-1aaedc250038
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e6dbc595714cbecf2ad13db13051866e31e5ebcd
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42581058"
---
# <a name="chaininterfacesverify-method"></a>Metodo ChainInterfaces::Verify

Verifica che ogni interfaccia definita dai parametri modello *I0* attraverso *I9* eredita `IUnknown` e/o `IInspectable`e che *I0* eredita da *I1* attraverso *I9*.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW __forceinline static void Verify();
```

## <a name="remarks"></a>Note

Se l'operazione di verifica non riesce, un **static_assert** genera un messaggio di errore che descrive l'errore.

I parametri del modello *I0* e *I1* sono obbligatori e i parametri *I2* tramite *I9* sono facoltativi.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)