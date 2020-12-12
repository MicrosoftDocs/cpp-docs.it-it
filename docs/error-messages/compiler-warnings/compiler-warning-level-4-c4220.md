---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4220'
title: Avviso del compilatore (livello 4) C4220
ms.date: 11/04/2016
f1_keywords:
- C4220
helpviewer_keywords:
- C4220
ms.assetid: aba18868-825f-4763-9af6-3296406a80e4
ms.openlocfilehash: fd5378fd1e685b2cc6e730c2cff87fcdb041aaa8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330621"
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
