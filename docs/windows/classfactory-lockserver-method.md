---
title: 'Metodo ClassFactory:: Lockserver | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ClassFactory::LockServer
dev_langs:
- C++
helpviewer_keywords:
- LockServer method
ms.assetid: 8d859815-956d-4f81-a5af-7cdee7e945de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5ea76974359da2002178a342ab7d9b5523c52889
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42584138"
---
# <a name="classfactorylockserver-method"></a>Metodo ClassFactory::LockServer

Incrementa o decrementa il numero di base di oggetti che vengono rilevati tramite il **ClassFactory** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(
   LockServer
)(BOOL fLock);
```

### <a name="parameters"></a>Parametri

*branco*  
**true** per incrementare il numero di oggetti registrati. **false** per ridurre il numero di oggetti registrati.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_FAIL.

## <a name="remarks"></a>Note

**ClassFactory** tiene traccia degli oggetti in un'istanza di sottostante la [modulo](../windows/module-class.md) classe.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ClassFactory](../windows/classfactory-class.md)