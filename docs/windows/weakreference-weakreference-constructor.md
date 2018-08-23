---
title: 'Costruttore WeakReference:: WeakReference | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::WeakReference::WeakReference
dev_langs:
- C++
helpviewer_keywords:
- WeakReference, constructor
ms.assetid: 4959a9d7-78ea-423d-a46b-50d010d29fff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d506bc99d584222de55de56c9efbe40f9c71434a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42593493"
---
# <a name="weakreferenceweakreference-constructor"></a>Costruttore WeakReference::WeakReference

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
WeakReference();
```

## <a name="remarks"></a>Note

Inizializza una nuova istanza di [classe WeakReference](../windows/weakreference-class1.md).

Il puntatore di riferimento sicuro per il **WeakReference** viene inizializzato in **nullptr**, il conteggio dei riferimenti forti viene inizializzato su 1.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)