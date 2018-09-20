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
ms.openlocfilehash: d570eaf3872f5d281d769e77298f9186d35e5a26
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46410429"
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

*index*<br/>
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine, questa operazione *indice* viene incrementato di 1.

*IID*<br/>
Matrice di tipo IID.

## <a name="remarks"></a>Note

Inserisce l'ID di interfaccia specificato dal parametro di modello iniziale corrente nell'elemento di matrice specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura ImplementsHelper](../windows/implementshelper-structure.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)