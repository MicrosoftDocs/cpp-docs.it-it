---
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
ms.openlocfilehash: bb757fee9d6ec824a99557c409b1c4f02f48db5d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215387"
---
# <a name="vectorltboolgtreferenceoperator-bool"></a>Bool vector&lt;bool&gt;::reference::operator

Fornisce una conversione implicita da `vector<bool>::reference` a **`bool`** .

## <a name="syntax"></a>Sintassi

```cpp
operator bool() const;
```

## <a name="return-value"></a>Valore restituito

Valore booleano dell'elemento dell'oggetto [vector \<bool> ](../standard-library/vector-bool-class.md) .

## <a name="remarks"></a>Osservazioni

L'oggetto `vector<bool>` non può essere modificato da questo operatore.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<vector>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<bool>classe Vector:: Reference](../standard-library/vector-bool-reference-class.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
