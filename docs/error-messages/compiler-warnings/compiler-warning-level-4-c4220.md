---
title: Avviso del compilatore (livello 4) C4220
ms.date: 11/04/2016
f1_keywords:
- C4220
helpviewer_keywords:
- C4220
ms.assetid: aba18868-825f-4763-9af6-3296406a80e4
ms.openlocfilehash: 781626e20f787bf582605ebd2d4943a7d5f2aa0c
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541910"
---
# <a name="compiler-warning-level-4-c4220"></a>Avviso del compilatore (livello 4) C4220

varargs corrisponde ai parametri rimanenti

In Microsoft Extensions (/Ze) predefinito, un puntatore a una funzione corrisponde a un puntatore a una funzione con argomenti simili, ma variabili.

## <a name="example"></a>Esempio

```c
// C4220.c
// compile with: /W4

int ( *pFunc1) ( int a, ... );
int ( *pFunc2) ( int a, int b);

int main()
{
   if ( pFunc1 != pFunc2 ) {};  // C4220
}
```

Tali puntatori non corrispondono in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).