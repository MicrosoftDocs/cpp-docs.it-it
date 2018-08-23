---
title: 'Operatore hstringreference:: Operator = = | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator==
dev_langs:
- C++
ms.assetid: cad3d52d-cd67-4194-a270-5239b1121a09
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b07df3dc50704a87883e1a387fe9c842c1732b54
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42610533"
---
# <a name="hstringreferenceoperator-operator"></a>Operatore HStringReference::Operator==

Indica se i due parametri sono uguali.

## <a name="syntax"></a>Sintassi

```cpp
inline bool operator==(
               const HStringReference& lhs,
               const HStringReference& rhs) throw()

inline bool operator==(
               const HSTRING& lhs,
               const HStringReference& rhs) throw()

inline bool operator==(
               const HStringReference& lhs,
               const HSTRING& rhs) throw()  
```

### <a name="parameters"></a>Parametri

*sul lato sinistro*  
Il primo parametro da confrontare. *LHS* può essere un **HStringReference** oggetto o un handle HSTRING.

*rhs*  
Il secondo parametro da confrontare.  *rhs* può essere un **HStringReference** oggetto o un handle HSTRING.

## <a name="return-value"></a>Valore restituito

**true** se il *lhs* e *rhs* parametri sono uguali; in caso contrario, **false**.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HStringReference](../windows/hstringreference-class.md)