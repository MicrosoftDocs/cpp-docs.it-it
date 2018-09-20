---
title: 'Operatore hstringreference:: Operator = | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator=
dev_langs:
- C++
ms.assetid: ea100ed3-e566-4c9e-b6a8-f296088dea9c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 933d332ce2653fd8ea907a5fafda524ae0220906
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408999"
---
# <a name="hstringreferenceoperator-operator"></a>Operatore HStringReference::Operator=

Sposta il valore di un'altra **HStringReference** oggetto all'oggetto corrente **HStringReference** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
HStringReference& operator=(HStringReference&& other) throw()  
```

### <a name="parameters"></a>Parametri

*other*<br/>
Un oggetto esistente **HStringReference** oggetto.

## <a name="remarks"></a>Note

Il valore dell'oggetto esistente *altri* viene copiato l'oggetto corrente **HStringReference** oggetto e quindi il *altri* oggetto viene eliminato definitivamente.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HStringReference](../windows/hstringreference-class.md)