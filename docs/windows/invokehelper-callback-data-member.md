---
title: Membro dati InvokeHelper::callback_ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::InvokeHelper::callback_
dev_langs:
- C++
helpviewer_keywords:
- callback_ data member
ms.assetid: 6f0cbf6d-0448-46f8-ba71-bd6fd8702e3a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e602a8d2eef8e495ad732dcd61d0e8aa0b242130
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42601000"
---
# <a name="invokehelpercallback-data-member"></a>Membro dati InvokeHelper::callback_

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
TCallback callback_;
```

## <a name="remarks"></a>Note

Rappresenta il gestore eventi da chiamare quando si verifica un evento.

Il `TCallback` modello parametro specifica il tipo del gestore dell'evento.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura InvokeHelper](../windows/invokehelper-structure.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)