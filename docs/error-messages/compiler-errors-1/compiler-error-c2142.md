---
description: 'Altre informazioni su: errore del compilatore C2142'
title: Errore del compilatore C2142
ms.date: 11/04/2016
f1_keywords:
- C2142
helpviewer_keywords:
- C2142
ms.assetid: d0dbe10e-0952-49a4-8b33-e82fb7558b19
ms.openlocfilehash: 65bd189fe99bb54549e458b093b72d8e47b840a3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97235528"
---
# <a name="compiler-error-c2142"></a>Errore del compilatore C2142

le dichiarazioni di funzione differiscono, i parametri della variabile specificati solo in uno di essi

Una dichiarazione della funzione contiene un elenco di parametri variabile. Un'altra dichiarazione non lo è. Solo ANSI C ([/za](../../build/reference/za-ze-disable-language-extensions.md)).

L'esempio seguente genera l'C2142:

```c
// C2142.c
// compile with: /Za /c
void func();
void func( int, ... );   // C2142
void func2( int, ... );   // OK
```
