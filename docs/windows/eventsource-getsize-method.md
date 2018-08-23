---
title: 'Metodo EventSource:: GetSize | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::GetSize
dev_langs:
- C++
helpviewer_keywords:
- GetSize method
ms.assetid: 7825aab5-1a6b-465f-9159-3a6684142d1f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9e852f2664e03ee0ac788fb426951c244f895bb6
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42581103"
---
# <a name="eventsourcegetsize-method"></a>Metodo EventSource::GetSize

Recupera il numero di gestori di eventi associato all'oggetto corrente **EventSource** oggetto

## <a name="syntax"></a>Sintassi

```cpp
size_t GetSize() const;
```

## <a name="return-value"></a>Valore restituito

Il numero di gestori eventi in [targets](../windows/eventsource-targets-data-member.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe EventSource](../windows/eventsource-class.md)