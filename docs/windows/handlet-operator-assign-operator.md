---
title: 'Handlet:: operator = (operatore) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleT::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator= operator
ms.assetid: 9e42dcca-30fa-4e8b-8954-802fd64a5595
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cf539082ef88abb5fb27f09d92b73403dc2d03a5
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611342"
---
# <a name="handletoperator-operator"></a>Operatore HandleT::operator=

Sposta il valore dell'oggetto specificato **HandleT** oggetto all'oggetto corrente **HandleT** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
HandleT& operator=(
   _Inout_ HandleT&& h
);
```

### <a name="parameters"></a>Parametri

*h*  
Un riferimento rvalue a un handle.

## <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto corrente **HandleT** oggetto.

## <a name="remarks"></a>Note

Questa operazione consente di invalidare la **HandleT** oggetto specificato dal parametro *h*.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HandleT](../windows/handlet-class.md)