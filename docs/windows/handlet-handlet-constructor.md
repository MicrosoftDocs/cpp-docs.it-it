---
title: 'Costruttore handlet:: Handlet | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleT::HandleT
dev_langs:
- C++
helpviewer_keywords:
- HandleT, constructor
ms.assetid: 4def6891-7e53-46f1-a197-a80e10744dd5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4a932428b274f8ef8fcda88cd48a4d24464e818c
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42597216"
---
# <a name="handlethandlet-constructor"></a>Costruttore HandleT::HandleT

Inizializza una nuova istanza di **HandleT** classe.

## <a name="syntax"></a>Sintassi

```cpp
explicit HandleT(
   typename HandleTraits::Type h =
      HandleTraits::GetInvalidValue()  
);

HandleT(
   _Inout_ HandleT&& h
);
```

### <a name="parameters"></a>Parametri

*h*  
Un handle.

## <a name="remarks"></a>Note

Il primo costruttore inizializza un **HandleT** oggetto che non è un handle valido a un oggetto. Il secondo costruttore crea un nuovo **HandleT** oggetto dal parametro *h*.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HandleT](../windows/handlet-class.md)