---
description: Altre informazioni sulla direttiva check_stack pragma in Microsoft C/C++
title: check_stack pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.check_stack
- check_stack_CPP
helpviewer_keywords:
- check_stack pragma
- pragma, check_stack
- pragma, check_stack usage table
no-loc:
- pragma
ms.openlocfilehash: a395471625fed60fcf750ebac8f3159a89ba1487
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713714"
---
# <a name="check_stack-no-locpragma"></a>`check_stack` pragma

Indica al compilatore di disabilitare i probe dello stack se **`off`** **`-`** è specificato (o) o di attivare i probe dello stack se **`on`** **`+`** è specificato (o).

## <a name="syntax"></a>Sintassi

> **`#pragma check_stack(`** [{ **`on`** | **`off`** }] **`)`**\
> **`#pragma check_stack`** { **`+`** | **`-`** }

## <a name="remarks"></a>Osservazioni

Questa operazione pragma viene applicata alla prima funzione definita dopo che pragma è stato rilevato. Le ricerche dello stack non sono né una parte delle macro né delle funzioni generate inline.

Se non si fornisce un argomento per **`check_stack`** pragma , il controllo dello stack ripristina il comportamento specificato nella riga di comando. Per ulteriori informazioni, vedere [Opzioni del compilatore](../build/reference/compiler-options.md). `#pragma check_stack` [`/Gs`](../build/reference/gs-control-stack-checking-calls.md) Nella tabella seguente viene riepilogata l'interazione tra e l'opzione.

### <a name="using-the-check_stack-pragma"></a>Utilizzo del pragma check_stack

| Sintassi | Compilato con<br /><br /> `/Gs` opzione? | Azione |
|--|--|--|
| `#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack` | Sì | Disabilita lo stack che controlla se sono presenti funzioni che seguono |
| `#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack` | No | Abilita lo stack che controlla se sono presenti funzioni che seguono |
| `#pragma check_stack(on)`<br /><br /> o `#pragma check_stack +` | Sì o No | Abilita lo stack che controlla se sono presenti funzioni che seguono |
| `#pragma check_stack(off)`<br /><br /> o `#pragma check_stack -` | Sì o No | Disabilita lo stack che controlla se sono presenti funzioni che seguono |

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
