---
title: 'Operatore hstring:: Operator = = | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::operator==
dev_langs:
- C++
ms.assetid: 77ff4c1a-e62a-4256-bf9d-0f017137c630
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dee6fd7b50d116264ea6b8b9a6b7bac3936e95cf
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46413718"
---
# <a name="hstringoperator-operator"></a>Operatore HString::Operator==

Indica se i due parametri sono uguali.

## <a name="syntax"></a>Sintassi

```cpp
inline bool operator==(
               const HString& lhs,
               const HString& rhs) throw()

inline bool operator==(
                const HString& lhs,
                const HStringReference& rhs) throw()

inline bool operator==(
                const HStringReference& lhs,
                const HString& rhs) throw()

inline bool operator==(
                 const HSTRING& lhs,
                 const HString& rhs) throw()

inline bool operator==(
                 const HString& lhs,
                 const HSTRING& rhs) throw()  
```

### <a name="parameters"></a>Parametri

*sul lato sinistro*<br/>
Il primo parametro da confrontare. *LHS* può essere un **HString** o `HStringReference` oggetto o un handle HSTRING.

*rhs*<br/>
Il secondo parametro da confrontare. *rhs* può essere un' **HString** o `HStringReference` oggetto o un handle HSTRING.

## <a name="return-value"></a>Valore restituito

**true** se il *lhs* e *rhs* parametri sono uguali; in caso contrario, **false**.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HString](../windows/hstring-class.md)