---
title: 'Metodo verifyinheritancehelper:: Verify | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::VerifyInheritanceHelper::Verify
dev_langs:
- C++
helpviewer_keywords:
- Verify method
ms.assetid: 3360082b-81ad-4191-9ec3-b4372f7207d7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cfcbb57694fc18944d199c1d4c74d8c74a335783
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599115"
---
# <a name="verifyinheritancehelperverify-method"></a>Metodo VerifyInheritanceHelper::Verify

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
static void Verify();
```

## <a name="remarks"></a>Note

Testa le due interfacce specificate dai parametri di modello corrente e determina se un'interfaccia è derivata da altra.

Se un'interfaccia non è derivata da un altro, viene generato un errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura VerifyInheritanceHelper](../windows/verifyinheritancehelper-structure.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)