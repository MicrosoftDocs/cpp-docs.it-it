---
title: Errore del compilatore C2142
ms.date: 11/04/2016
f1_keywords:
- C2142
helpviewer_keywords:
- C2142
ms.assetid: d0dbe10e-0952-49a4-8b33-e82fb7558b19
ms.openlocfilehash: b1345fbb44558db01b19eec04b64cf7aa036931a
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301925"
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
