---
description: 'Altre informazioni su: runtime_checks pragma'
title: Pragma runtime_checks
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.runtime_checks
- runtime_checks_CPP
helpviewer_keywords:
- runtime_checks pragma
- pragmas, runtime_checks
ms.assetid: ae50b43f-f88d-47ad-a2db-3389e9e7df5b
ms.openlocfilehash: 2ee04751e9cc978487670314675d3fa4ae52bd3d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342296"
---
# <a name="runtime_checks-pragma"></a>Pragma runtime_checks

Vengono disabilitate o ripristinate le impostazioni di [/RTC](../build/reference/rtc-run-time-error-checks.md) .

## <a name="syntax"></a>Sintassi

> **#pragma runtime_checks ("** [ *runtime_checks* ] **",** { **Restore**  |  **off** } **)**

## <a name="remarks"></a>Commenti

Non è possibile abilitare un controllo della fase di esecuzione che non è stato abilitato da un'opzione del compilatore. Se, ad esempio, non si specifica `/RTCs` nella riga di comando, se si specifica `#pragma runtime_checks( "s", restore)` non verrà abilitata la verifica stack frame.

Il pragma **runtime_checks** deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che viene visualizzato il pragma. Gli argomenti **restore** e **off** attivano e disattivano le opzioni specificate in **runtime_checks** .

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

L'utilizzo del pragma **runtime_checks** con una stringa vuota (**""**) è un formato speciale della direttiva:

- Quando si utilizza il parametro **off** , i controlli degli errori di run-time elencati nella tabella precedente vengono disattivati.

- Quando si utilizza il parametro **Restore** , vengono reimpostati i controlli degli errori di run-time su quelli specificati utilizzando l' `/RTC` opzione del compilatore.

```cpp
#pragma runtime_checks( "", off )
/* runtime checks are off in this region */
#pragma runtime_checks( "", restore )
```

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
