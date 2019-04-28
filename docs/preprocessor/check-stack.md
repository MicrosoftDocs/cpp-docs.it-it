---
title: check_stack
ms.date: 11/04/2016
f1_keywords:
- vc-pragma.check_stack
- check_stack_CPP
helpviewer_keywords:
- check_stack pragma
- pragmas, check_stack
- pragmas, check_stack usage table
ms.assetid: f18e20cc-9abb-48b7-ad62-8d384875b996
ms.openlocfilehash: 49477a3b39db17047f349e341bd05c04954c964c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62212399"
---
# <a name="checkstack"></a>check_stack
Indica al compilatore di disattivare i probe dello stack se `off` (o `-`) viene specificato, oppure di abilitare le ricerche dello stack se `on` (o `+`) specificato.

## <a name="syntax"></a>Sintassi

```
#pragma check_stack([ {on | off}] )
#pragma check_stack{+ | -}
```

## <a name="remarks"></a>Note

Se non viene fornito alcun argomento, le ricerche dello stack sono considerate in base all'impostazione predefinita. Il pragma viene applicato alla prima funzione definita dopo che è stato rilevato il pragma. Le ricerche dello stack non sono né una parte delle macro né delle funzioni generate inline.

Se non si assegna un argomento per il **check_stack** pragma, controllo dello stack viene ripristinato il comportamento specificato nella riga di comando. Per altre informazioni, vedere [riferimenti al compilatore](../build/reference/compiler-options.md). L'interazione tra il `#pragma check_stack` e il [/Gs](../build/reference/gs-control-stack-checking-calls.md) opzione è riepilogato nella tabella seguente.

### <a name="using-the-checkstack-pragma"></a>Utilizzo del pragma check_stack

|Sintassi|Compilato con<br /><br /> l'opzione /Gs?|Operazione|
|------------|------------------------------------|------------|
|`#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack`|Yes|Disabilita lo stack che controlla se sono presenti funzioni che seguono|
|`#pragma check_stack( )` oppure<br /><br /> `#pragma check_stack`|No|Abilita lo stack che controlla se sono presenti funzioni che seguono|
|`#pragma check_stack(on)`<br /><br /> o `#pragma check_stack +`|Sì o No|Abilita lo stack che controlla se sono presenti funzioni che seguono|
|`#pragma check_stack(off)`<br /><br /> o `#pragma check_stack -`|Sì o No|Disabilita lo stack che controlla se sono presenti funzioni che seguono|

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)