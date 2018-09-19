---
title: _bstr_t::Attach | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::Attach
dev_langs:
- C++
helpviewer_keywords:
- Attach method [C++]
ms.assetid: 8cad867e-40fc-435b-841f-0d412c2f58d3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1eddbc7a01be66430759bb84c3ce6d840f37d098
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46111212"
---
# <a name="bstrtattach"></a>_bstr_t::Attach

**Sezione specifica Microsoft**

Collega un wrapper `_bstr_t` a  `BSTR`.

## <a name="syntax"></a>Sintassi

```
void Attach(
   BSTR s
);
```

#### <a name="parameters"></a>Parametri

*s*<br/>
`BSTR` da associare a o assegnato alla variabile `_bstr_t`.

## <a name="remarks"></a>Note

Se `_bstr_t` in precedenza era associato a un altro `BSTR`, `_bstr_t` eseguirà la pulizia della risorsa `BSTR`, se nessun'altra variabile `_bstr_t` utilizza `BSTR`.

## <a name="example"></a>Esempio

Visualizzare [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo **Attach**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)