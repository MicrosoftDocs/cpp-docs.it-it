---
title: 'Metodo implementshelper:: Fillarraywithiid | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ImplementsHelper::FillArrayWithIid
dev_langs:
- C++
helpviewer_keywords:
- FillArrayWithIid method
ms.assetid: f60035ee-b7d6-4a08-966d-f88c646944c3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 876f2bde68c53a27c1c40e9206b6285b8562bd91
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42591139"
---
# <a name="implementshelperfillarraywithiid-method"></a>Metodo ImplementsHelper::FillArrayWithIid

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
void FillArrayWithIid(
   _Inout_ unsigned long *index,
   _Inout_ IID* iids) throw();
```

### <a name="parameters"></a>Parametri

*index*  
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine, questa operazione *indice* viene incrementato di 1.

*IID*  
Matrice di tipo IID.

## <a name="remarks"></a>Note

Inserisce l'ID di interfaccia specificato dal parametro di modello iniziale corrente nell'elemento di matrice specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura ImplementsHelper](../windows/implementshelper-structure.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)