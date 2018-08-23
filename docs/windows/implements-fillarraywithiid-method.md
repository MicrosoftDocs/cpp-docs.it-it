---
title: 'Metodo Implements:: fillarraywithiid | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Implements::FillArrayWithIid
dev_langs:
- C++
helpviewer_keywords:
- FillArrayWithIid method
ms.assetid: b2e62e3f-0ab9-4c70-aad7-856268544f44
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c65e2d47d466b223acf19589e5966a05762605e3
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611564"
---
# <a name="implementsfillarraywithiid-method"></a>Metodo Implements::FillArrayWithIid

Inserisce l'ID di interfaccia specificato dal parametro di modello iniziale corrente nell'elemento di matrice specificato.

## <a name="syntax"></a>Sintassi

```cpp
__forceinline static void FillArrayWithIid(
   unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*index*  
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine, questa operazione *indice* viene incrementato di 1.

*IID*  
Matrice di tipo IID.

## <a name="remarks"></a>Note

Funzione di supporto interno.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Struttura Implements](../windows/implements-structure.md)