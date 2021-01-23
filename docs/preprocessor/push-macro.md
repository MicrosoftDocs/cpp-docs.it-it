---
description: Altre informazioni sulla direttiva push_macro pragma in Microsoft C/C++
title: push_macro pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.push_macro
- push_macro_CPP
helpviewer_keywords:
- pragma, push_macro
- push_macro pragma
no-loc:
- pragma
ms.openlocfilehash: cb97adcb5ce9c0e46a31a9f4926770d4edd658a1
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713298"
---
# <a name="push_macro-no-locpragma"></a>`push_macro` pragma

Salva il valore della macro con *Nome macro* nella parte superiore dello stack per questa macro.

## <a name="syntax"></a>Sintassi

> **`#pragma push_macro("`**_Nome macro_**`")`**

## <a name="remarks"></a>Osservazioni

È possibile recuperare il valore per *Nome macro* con `pop_macro` .

[ `pop_macro` Vedere pragma ](../preprocessor/pop-macro.md) per un esempio.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
