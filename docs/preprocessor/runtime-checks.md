---
description: Altre informazioni sulla direttiva runtime_checks pragma in Microsoft C/C++
title: runtime_checks pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.runtime_checks
- runtime_checks_CPP
helpviewer_keywords:
- runtime_checks pragma
- pragma, runtime_checks
no-loc:
- pragma
ms.openlocfilehash: 4932126ffe33d2f8a99f6d94e3c58d2c0322df92
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712817"
---
# <a name="runtime_checks-no-locpragma"></a>`runtime_checks` pragma

Disabilita o Ripristina le [`/RTC`](../build/reference/rtc-run-time-error-checks.md) impostazioni delle opzioni del compilatore.

## <a name="syntax"></a>Sintassi

> **`#pragma runtime_checks( "`** [ *Runtime-check-Options* ] **`",`** { **`restore`** | **`off`** } **`)`**

## <a name="remarks"></a>Osservazioni

Non è possibile abilitare un controllo della fase di esecuzione che non è stato abilitato da un'opzione del compilatore. Se, ad esempio, non si specifica **`/RTCs`** nella riga di comando, se si specifica `#pragma runtime_checks( "s", restore)` non verrà abilitata la verifica stack frame.

**`runtime_checks`** pragma Deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che pragma viene visualizzato. Gli **`restore`** **`off`** argomenti e attivano **`runtime_checks`** pragma o disattivano le opzioni specificate.

Le *Opzioni di controllo di runtime* possono essere pari a zero o più parametri indicati nella tabella seguente.

### <a name="parameters-of-the-runtime_checks-pragma"></a>Parametri del pragma runtime_checks

| Parametro/i | Tipo del controllo runtime |
|--------------------|-----------------------------|
| **`s`** | Abilita la verifica dello stack (frame). |
| **`c`** | Vengono segnalati i casi in cui un valore viene assegnato a un tipo di dati più piccolo, il che causa una perdita di dati. |
| **`u`** | Segnala quando una variabile viene utilizzata prima di essere definita. |

Questi parametri sono gli stessi usati con l' **`/RTC`** opzione del compilatore. Ad esempio:

```cpp
#pragma runtime_checks( "sc", restore )
```

L'utilizzo **`runtime_checks`** pragma di con la stringa vuota ( **`""`** ) è un formato speciale della direttiva:

- Quando si utilizza il parametro, vengono riattivati **`off`** i controlli degli errori di run-time elencati nella tabella precedente, disattivato.

- Quando si utilizza il **`restore`** parametro, vengono reimpostati i controlli degli errori di run-time su quelli specificati utilizzando l' **`/RTC`** opzione del compilatore.

```cpp
#pragma runtime_checks( "", off )
/* runtime checks are off in this region */
#pragma runtime_checks( "", restore )
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
