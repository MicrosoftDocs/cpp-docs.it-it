---
title: 'Metodo asyncbase:: Getonprogress | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::GetOnProgress
dev_langs:
- C++
helpviewer_keywords:
- GetOnProgress method
ms.assetid: 286ddc9c-3e30-41a2-8e8b-e53d3fb0649d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5439e1c17b7ad654d44fad575ba51b9ebc4095bb
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592256"
---
# <a name="asyncbasegetonprogress-method"></a>Metodo AsyncBase::GetOnProgress

Copia l'indirizzo del gestore dell'evento di stato di avanzamento corrente per la variabile specificata.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(
   GetOnProgress
)(TProgress** progressHandler);
```

### <a name="parameters"></a>Parametri

*progressHandler*  
Il percorso in cui è archiviato l'indirizzo del gestore dell'evento di stato di avanzamento corrente.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe AsyncBase](../windows/asyncbase-class.md)