---
description: 'Altre informazioni su: _bstr_t:: GetBSTR'
title: _bstr_t::GetBSTR
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::GetBSTR
helpviewer_keywords:
- GetBSTR method [C++]
ms.assetid: 0c62ff16-4433-4183-a03c-d5a0a9b731ef
ms.openlocfilehash: ced985bb5123d86ff119279fc49a2b4d181ba8b3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229301"
---
# <a name="_bstr_tgetbstr"></a>_bstr_t::GetBSTR

**Specifico di Microsoft**

Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="syntax"></a>Sintassi

```
BSTR& GetBSTR( );
```

## <a name="return-value"></a>Valore restituito

Inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="remarks"></a>Commenti

**GETbstr** influiscono su tutti `_bstr_t` gli oggetti che condividono un oggetto `BSTR` . Più di uno `_bstr_t` può condividere un oggetto `BSTR` tramite l'utilizzo del costruttore di copia e **operator =**.

## <a name="example"></a>Esempio

Vedere [_bstr_t:: Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo di **GetBSTR**.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _bstr_t](../cpp/bstr-t-class.md)
