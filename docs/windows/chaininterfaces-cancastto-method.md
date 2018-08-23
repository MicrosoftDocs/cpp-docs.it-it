---
title: 'Metodo chaininterfaces:: Cancastto | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::ChainInterfaces::CanCastTo
dev_langs:
- C++
helpviewer_keywords:
- CanCastTo method
ms.assetid: 8be44875-53ed-494b-91a0-0f8e399685bb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8398f0bd4d9fdc786926782b13ebcac913a6a351
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42612870"
---
# <a name="chaininterfacescancastto-method"></a>Metodo ChainInterfaces::CanCastTo

Indica se l'ID di interfaccia specificato può essere convertito in ognuna delle specializzazioni definite dai parametri di modello diverso.

## <a name="syntax"></a>Sintassi

```cpp
__forceinline bool CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*riid*  
ID di interfaccia.

*ppv*  
Un puntatore all'ID di interfaccia ultimo che è stato eseguito il cast correttamente.

## <a name="return-value"></a>Valore restituito

**true** se tutte le operazioni di cast ha esito positivo; in caso contrario, **false**.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)