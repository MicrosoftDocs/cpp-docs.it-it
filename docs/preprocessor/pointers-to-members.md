---
description: Altre informazioni sulla direttiva pointers_to_members pragma in Microsoft C/C++
title: pointers_to_members pragma
ms.date: 01/22/2021
f1_keywords:
- pointers_to_members_CPP
- vc-pragma.pointers_to_members
helpviewer_keywords:
- class members, pointers to
- pragma, pointers_to_members
- members, pointers to
- pointers_to_members pragma
no-loc:
- pragma
ms.openlocfilehash: 7f2ca20b70d477e66a38d2a57e489d64c4179191
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713376"
---
# <a name="pointers_to_members-no-locpragma"></a>`pointers_to_members` pragma

**Sezione specifica C++**

Specifica se un puntatore a un membro di classe può essere dichiarato prima della definizione di classe associata. Utilizzato per controllare le dimensioni del puntatore e il codice necessario per interpretare il puntatore.

## <a name="syntax"></a>Sintassi

> **`#pragma pointers_to_members(`***puntatore-dichiarazione* [ **`,`** *most-General-rappresentazione* ]**`)`**

## <a name="remarks"></a>Osservazioni

È possibile inserire un **`pointers_to_members`** pragma nel file di origine come alternativa all'uso delle opzioni del compilatore [ `/vmb` o `/vmg`](../build/reference/vmb-vmg-representation-method.md) o delle [parole chiave di ereditarietà](../cpp/inheritance-keywords.md).

L'argomento *pointer-Declaration* specifica se è stato dichiarato un puntatore a un membro prima o dopo la definizione della funzione associata. L'argomento *pointer-Declaration* è uno dei due simboli seguenti:

| Argomento | Commenti |
|--------------|--------------|
| **`full_generality`** | Genera codice sicuro e talvolta non ottimale. Usare **`full_generality`** se un puntatore a un membro viene dichiarato prima della definizione di classe associata. Questo argomento usa sempre la rappresentazione del puntatore specificata dall'argomento relativo alla *rappresentazione più generale* . Equivalente a **`/vmg`** . |
| **`best_case`** | Genera codice sicuro e ottimale mediante la rappresentazione basata sul caso migliore (best-case) per tutti i puntatori ai membri. Richiede di definire una classe prima di dichiarare un puntatore a un membro di tale classe. Il valore predefinito è **`best_case`** . |

L'argomento relativo alla *rappresentazione più generale* specifica la più piccola rappresentazione del puntatore che il compilatore può usare in modo sicuro per fare riferimento a qualsiasi puntatore a un membro di una classe in un'unità di conversione. L'argomento può essere uno dei valori seguenti:

| Argomento | Commenti |
|--------------|--------------|
| **`single_inheritance`** | La rappresentazione più generale è un puntatore a una funzione membro a ereditarietà singola. Genera un errore se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è multiplo o virtuale. |
| **`multiple_inheritance`** | La rappresentazione più generale è un puntatore a una funzione membro a ereditarietà multipla. Genera un errore se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è virtuale. |
| **`virtual_inheritance`** | La rappresentazione più generale è un puntatore a una funzione membro a ereditarietà virtuale. Non genera mai un errore. **`virtual_inheritance`** è l'argomento predefinito quando `#pragma pointers_to_members(full_generality)` si utilizza. |

> [!CAUTION]
> Si consiglia di inserire l'oggetto **`pointers_to_members`** pragma solo nel file di codice sorgente che si desidera modificare e solo dopo le `#include` direttive. In questo modo si riduce il rischio che il pragma influirà sugli altri file e che si specifichino accidentalmente più definizioni per la stessa variabile, funzione o nome di classe.

## <a name="example"></a>Esempio

```cpp
//   Specify single-inheritance only
#pragma pointers_to_members( full_generality, single_inheritance )
```

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
