---
title: Errore del compilatore C2099
ms.date: 11/04/2016
f1_keywords:
- C2099
helpviewer_keywords:
- C2099
ms.assetid: 30e151ee-d458-4901-b0c0-d45054a913f5
ms.openlocfilehash: 84070b36506a657dde5d2e7bd5594c2b7434d81d
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90743412"
---
# <a name="compiler-error-c2099"></a>Errore del compilatore C2099

l'inizializzatore non è una costante

Questo errore viene generato unicamente dal compilatore C e si verifica solo per variabili non automatiche.  Il compilatore inizializza le variabili non automatiche all'avvio del programma e i valori di inizializzazione devono essere costanti.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'errore C2099.

```c
// C2099.c
int j;
int *p;
j = *p;   // C2099 *p is not a constant
```

L'errore C2099 può verificarsi anche perché il compilatore non riesce a eseguire la riduzione delle costanti su un'espressione in **/fp:strict** . Le impostazioni di ambiente relative alla precisione della virgola mobile, infatti, possono variare dalla fase di compilazione a quella di compilazione. Per altre informazioni, vedere [_controlfp_s](../../c-runtime-library/reference/controlfp-s.md) .

Se la riduzione di costanti non riesce, il compilatore richiama l'inizializzazione dinamica, non consentita in C.

Per correggere questo errore, compilare il modulo come file cpp o semplificare l'espressione.

Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](../../build/reference/fp-specify-floating-point-behavior.md).

L'esempio seguente genera l'errore C2099.

```c
// C2099_2.c
// compile with: /fp:strict /c
float X = 2.0 - 1.0;   // C2099
float X2 = 1.0;   // OK
```
