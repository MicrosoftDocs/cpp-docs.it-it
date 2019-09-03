---
title: Pragma runtime_checks
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.runtime_checks
- runtime_checks_CPP
helpviewer_keywords:
- runtime_checks pragma
- pragmas, runtime_checks
ms.assetid: ae50b43f-f88d-47ad-a2db-3389e9e7df5b
ms.openlocfilehash: a1c8e6cca27e157818e6ec80182f8fefa112daf1
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216612"
---
# <a name="runtime_checks-pragma"></a>Pragma runtime_checks

Vengono disabilitate o ripristinate le impostazioni di [/RTC](../build/reference/rtc-run-time-error-checks.md) .

## <a name="syntax"></a>Sintassi

> **#pragma runtime_checks ("** [ *runtime_checks* ] **",** { **Restore** | **off** } **)**

## <a name="remarks"></a>Note

Non è possibile abilitare un controllo della fase di esecuzione che non è stato abilitato da un'opzione del compilatore. Se, ad esempio, non si `/RTCs` specifica nella riga di comando, `#pragma runtime_checks( "s", restore)` se si specifica non verrà abilitata la verifica stack frame.

Il pragma **runtime_checks** deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che il pragma è stato visualizzato. Gli argomenti **restore** e **off** attivano e disattivano le opzioni specificate in **runtime_checks** .

**runtime_checks** può essere nessuno o più parametri riportati nella tabella seguente.

### <a name="parameters-of-the-runtime_checks-pragma"></a>Parametri del pragma runtime_checks

| Parametro/i | Tipo del controllo runtime |
|--------------------|-----------------------------|
| **s** | Abilita la verifica dello stack (frame). |
| **c** | Vengono segnalati i casi in cui un valore viene assegnato a un tipo di dati più piccolo, il che causa una perdita di dati. |
| **u** | Segnala quando una variabile viene utilizzata prima di essere definita. |

Questi parametri sono gli stessi usati con l' `/RTC` opzione del compilatore. Ad esempio:

```cpp
#pragma runtime_checks( "sc", restore )
```

L'utilizzo del pragma **runtime_checks** con una stringa vuota ( **""** ) è un formato speciale della direttiva:

- Quando si utilizza il parametro **off** , i controlli degli errori di run-time elencati nella tabella precedente vengono disattivati.

- Quando si utilizza il parametro restore, vengono reimpostati i controlli degli errori di run-time su quelli specificati utilizzando `/RTC` l'opzione del compilatore.

```cpp
#pragma runtime_checks( "", off )
/* runtime checks are off in this region */
#pragma runtime_checks( "", restore )
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
