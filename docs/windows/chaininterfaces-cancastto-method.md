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
ms.openlocfilehash: 752c3598a38117506154b0a2b7d7d3e578bf3c3e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46417644"
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

*riid*<br/>
ID di interfaccia.

*ppv*<br/>
Un puntatore all'ID di interfaccia ultimo che è stato eseguito il cast correttamente.

## <a name="return-value"></a>Valore restituito

**true** se tutte le operazioni di cast ha esito positivo; in caso contrario, **false**.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)