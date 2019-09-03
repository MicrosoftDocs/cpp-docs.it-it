---
title: Pragma check_stack
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.check_stack
- check_stack_CPP
helpviewer_keywords:
- check_stack pragma
- pragmas, check_stack
- pragmas, check_stack usage table
ms.assetid: f18e20cc-9abb-48b7-ad62-8d384875b996
ms.openlocfilehash: 4c976692ec36cedcb73825ee0cc7093736a3a3dc
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216132"
---
# <a name="check_stack-pragma"></a>Pragma check_stack

Indica al compilatore di disabilitare i probe dello stack se è impostata su **-** off (o) oppure per attivare i probe dello stack se si specifica **+** **on** (o).

## <a name="syntax"></a>Sintassi

> **#pragma check_stack (** [{ **on** | **off** }] **)** \
> **#pragma check_stack** { **+**  |  **-** }

## <a name="remarks"></a>Note

Il pragma viene applicato alla prima funzione definita dopo che è stato rilevato il pragma. Le ricerche dello stack non sono né una parte delle macro né delle funzioni generate inline.

Se non si assegna un argomento per il pragma **check_stack** , il controllo dello stack ripristina il comportamento specificato nella riga di comando. Per altre informazioni, vedere [Opzioni del compilatore](../build/reference/compiler-options.md). Nella tabella seguente viene `#pragma check_stack` riepilogata l'interazione tra e l'opzione [/GS](../build/reference/gs-control-stack-checking-calls.md) .

### <a name="using-the-check_stack-pragma"></a>Utilizzo del pragma check_stack

|Sintassi|Compilato con<br /><br /> l'opzione /Gs?|Azione|
|------------|------------------------------------|------------|
|`#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack`|Yes|Disabilita lo stack che controlla se sono presenti funzioni che seguono|
|`#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack`|No|Abilita lo stack che controlla se sono presenti funzioni che seguono|
|`#pragma check_stack(on)`<br /><br /> o`#pragma check_stack +`|Sì o No|Abilita lo stack che controlla se sono presenti funzioni che seguono|
|`#pragma check_stack(off)`<br /><br /> o`#pragma check_stack -`|Sì o No|Disabilita lo stack che controlla se sono presenti funzioni che seguono|

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
