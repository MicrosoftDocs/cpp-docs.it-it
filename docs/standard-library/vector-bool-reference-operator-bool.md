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
ms.openlocfilehash: 7fa95b3037538ccbbf27fa5b9749dc21f72670cd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410915"
---
# <a name="vectorltboolgtreferenceoperator-bool"></a>Bool vector&lt;bool&gt;::reference::operator

Fornisce una conversione implicita da `vector<bool>::reference` al **bool**.

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

[vettore\<bool >:: classe di riferimento](../standard-library/vector-bool-reference-class.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
