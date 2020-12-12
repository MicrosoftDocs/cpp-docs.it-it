---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4202'
title: Avviso del compilatore (livello 4) C4202
ms.date: 11/04/2016
f1_keywords:
- C4202
helpviewer_keywords:
- C4202
ms.assetid: 253293aa-97a3-4878-a2e8-c6cc9e20b1cb
ms.openlocfilehash: 56abe76d623605460d76bfacb69a128c05762931
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97173259"
---
# <a name="compiler-warning-level-4-c4202"></a>Avviso del compilatore (livello 4) C4202

utilizzata estensione non standard:'.. .': parametro di prototipo non valido nell'elenco dei nomi

Una definizione di funzione obsoleta contiene argomenti variabili. Queste definizioni generano un errore in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).

## <a name="example"></a>Esempio

```c
// C4202.c
// compile with: /W4
void func( a, b, ...)   // C4202
int a, b;
{}

int main()
{
}
```
