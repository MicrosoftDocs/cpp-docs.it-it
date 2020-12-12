---
description: 'Altre informazioni su: _bstr_t:: GetAddress'
title: _bstr_t::GetAddress
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::GetAddress
helpviewer_keywords:
- GetAddress method [C++]
ms.assetid: 09bc9180-867e-4ee5-b22a-8339dc663142
ms.openlocfilehash: afb877a6f1b4cfcfb6fe08b36168af745d733b85
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229314"
---
# <a name="_bstr_tgetaddress"></a>_bstr_t::GetAddress

**Specifico di Microsoft**

Libera la memoria per qualsiasi stringa esistente e restituisce l'indirizzo di una nuova stringa allocata.

## <a name="syntax"></a>Sintassi

```
BSTR* GetAddress( );
```

## <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="remarks"></a>Commenti

**GetAddress** ha effetto su tutti `_bstr_t` gli oggetti che condividono un oggetto `BSTR` . Più di uno `_bstr_t` può condividere un oggetto `BSTR` tramite l'utilizzo del costruttore di copia e **operator =**.

## <a name="example"></a>Esempio

Per un esempio di utilizzo di **GetAddress**, vedere [_Bstr_t:: Assign](../cpp/bstr-t-assign.md) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _bstr_t](../cpp/bstr-t-class.md)
