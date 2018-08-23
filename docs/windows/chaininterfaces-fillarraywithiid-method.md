---
title: 'Metodo chaininterfaces:: Fillarraywithiid | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::ChainInterfaces::FillArrayWithIid
dev_langs:
- C++
helpviewer_keywords:
- FillArrayWithIid method
ms.assetid: f1ce699c-dfb6-40a9-9ea0-e6703d3cf971
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 09e0dc3b9caf059bb8ecdce0468dfc118ce9ebfa
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594944"
---
# <a name="chaininterfacesfillarraywithiid-method"></a>Metodo ChainInterfaces::FillArrayWithIid

Archivia l'ID di interfaccia definito per il *I0* parametro di modello in una posizione specificata in una matrice specificata di ID di interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
__forceinline static void FillArrayWithIid(
   _Inout_ unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*index*  
Puntatore a un valore di indice nel *IID* matrice.

*IID*  
Matrice ID di interfaccia.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)