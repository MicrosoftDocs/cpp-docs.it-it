---
title: Bool vector&lt;bool&gt;::reference::operator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- operatorbool
- vector<bool>::reference::operatorbool
- bool
- std::vector<bool>::reference::operatorbool
dev_langs:
- C++
helpviewer_keywords:
- BOOL operator
- reference::operator bool
ms.assetid: b0e57869-18cc-4296-9061-da502f30120d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e0fd249dd7591caaaf62a0b8a698085efedb1f25
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33854535"
---
# <a name="vectorltboolgtreferenceoperator-bool"></a>Bool vector&lt;bool&gt;::reference::operator

Fornisce una conversione implicita da `vector<bool>::reference` a `bool`.

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
