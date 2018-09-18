---
title: _bstr_t::GetAddress | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::GetAddress
dev_langs:
- C++
helpviewer_keywords:
- GetAddress method [C++]
ms.assetid: 09bc9180-867e-4ee5-b22a-8339dc663142
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9b3aa001270a3dc608fabf73fce28ce51eb9295e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031301"
---
# <a name="bstrtgetaddress"></a>_bstr_t::GetAddress

**Sezione specifica Microsoft**

Libera la memoria per qualsiasi stringa esistente e restituisce l'indirizzo di una nuova stringa allocata.

## <a name="syntax"></a>Sintassi

```
BSTR* GetAddress( );
```

## <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="remarks"></a>Note

**GetAddress** influisce su tutte `_bstr_t` gli oggetti che condividono un `BSTR`. Più di un `_bstr_t` possono condividere una `BSTR` tramite il costruttore di copia e **operatore =**.

## <a name="example"></a>Esempio

Visualizzare [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo **GetAddress**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)