---
description: 'Altre informazioni su: Vector &lt; bool &gt; :: Reference:: operator bool'
title: Bool vector&lt;bool&gt;::reference::operator
ms.date: 11/04/2016
f1_keywords:
- operatorbool
- vector<bool>::reference::operatorbool
- bool
- std::vector<bool>::reference::operatorbool
helpviewer_keywords:
- BOOL operator
- reference::operator bool
ms.assetid: b0e57869-18cc-4296-9061-da502f30120d
ms.openlocfilehash: 9b12df8711664aae80d8ed85340b0852b91969ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259318"
---
# <a name="vectorltboolgtreferenceoperator-bool"></a>Bool vector&lt;bool&gt;::reference::operator

Fornisce una conversione implicita da `vector<bool>::reference` a **`bool`** .

## <a name="syntax"></a>Sintassi

```cpp
operator bool() const;
```

## <a name="return-value"></a>Valore restituito

Valore booleano dell'elemento dell'oggetto [vector \<bool> ](../standard-library/vector-bool-class.md) .

## <a name="remarks"></a>Commenti

L'oggetto `vector<bool>` non può essere modificato da questo operatore.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<vector>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[\<bool>classe Vector:: Reference](../standard-library/vector-bool-reference-class.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
