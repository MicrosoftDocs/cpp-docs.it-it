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
ms.openlocfilehash: ca2d21a7706248cd84ca3591eb717e4081972f9c
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452116"
---
# <a name="vectorltboolgtreferenceoperator-bool"></a>Bool vector&lt;bool&gt;::reference::operator

Fornisce una conversione implicita `vector<bool>::reference` da a **bool**.

## <a name="syntax"></a>Sintassi

```cpp
operator bool() const;
```

## <a name="return-value"></a>Valore restituito

Valore booleano dell'elemento dell'oggetto [vector\<bool>](../standard-library/vector-bool-class.md).

## <a name="remarks"></a>Note

L'oggetto `vector<bool>` non può essere modificato da questo operatore.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<vector>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe vector\<bool>::reference](../standard-library/vector-bool-reference-class.md)\
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
