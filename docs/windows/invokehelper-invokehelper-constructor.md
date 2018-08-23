---
title: 'Costruttore InvokeHelper:: InvokeHelper | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::InvokeHelper::InvokeHelper
dev_langs:
- C++
helpviewer_keywords:
- InvokeHelper, constructor
ms.assetid: 0223c574-abc3-4fc0-99e6-38626ba79243
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1ad09a5a4794a9db8882a088f90da5046b6f7b9d
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42609240"
---
# <a name="invokehelperinvokehelper-constructor"></a>Costruttore InvokeHelper::InvokeHelper

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
explicit InvokeHelper(
   TCallback callback
);
```

### <a name="parameters"></a>Parametri

*callback*  
Un gestore eventi.

## <a name="remarks"></a>Note

Inizializza una nuova istanza di **InvokeHelper** classe.

Il `TCallback` modello parametro specifica il tipo del gestore dell'evento.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura InvokeHelper](../windows/invokehelper-structure.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)