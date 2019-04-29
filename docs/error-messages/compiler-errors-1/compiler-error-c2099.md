---
title: Errore del compilatore C2099
ms.date: 11/04/2016
f1_keywords:
- C2099
helpviewer_keywords:
- C2099
ms.assetid: 30e151ee-d458-4901-b0c0-d45054a913f5
ms.openlocfilehash: 9c83b4a50cb9cf5c5b1992f0f64e2eeb013b48e4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62376942"
---
# <a name="compiler-error-c2099"></a>Errore del compilatore C2099

l'inizializzatore non è una costante

Questo errore viene generato unicamente dal compilatore C e si verifica solo per variabili non automatiche.  Il compilatore inizializza le variabili non automatiche all'avvio del programma e i valori di inizializzazione devono essere costanti.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2099.

```
// C2099.c
int j;
int *p;
j = *p;   // C2099 *p is not a constant
```

## <a name="example"></a>Esempio

L'errore C2099 può verificarsi anche perché il compilatore non riesce a eseguire la riduzione delle costanti su un'espressione in **/fp:strict** . Le impostazioni di ambiente relative alla precisione della virgola mobile, infatti, possono variare dalla fase di compilazione a quella di compilazione. Per altre informazioni, vedere [_controlfp_s](../../c-runtime-library/reference/controlfp-s.md) .

Se la riduzione di costanti non riesce, il compilatore richiama l'inizializzazione dinamica, non consentita in C.

Per correggere questo errore, compilare il modulo come file cpp o semplificare l'espressione.

Per altre informazioni, vedere [/fp (Specify Floating-Point Behavior)](../../build/reference/fp-specify-floating-point-behavior.md).

L'esempio seguente genera l'errore C2099.

```
// C2099_2.c
// compile with: /fp:strict /c
float X = 2.0 - 1.0;   // C2099
float X2 = 1.0;   // OK
```