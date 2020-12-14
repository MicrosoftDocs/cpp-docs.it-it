---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4019'
title: Avviso del compilatore (livello 4) C4019
ms.date: 11/04/2016
f1_keywords:
- C4019
helpviewer_keywords:
- C4019
ms.assetid: 4ecfe85d-673f-4334-8154-36fe7f0b3444
ms.openlocfilehash: 0a8d8524cda43f4e30b566e0c9133580b1f0b6c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262178"
---
# <a name="compiler-warning-level-4-c4019"></a>Avviso del compilatore (livello 4) C4019

istruzione vuota in ambito globale

Un punto e virgola nell'ambito globale non è preceduto da un'istruzione.

Questo avviso può essere risolto se si rimuove il punto e virgola aggiuntivo.

## <a name="example"></a>Esempio

```c
// C4019.c
// compile with: /Za /W4
#define declint( varname ) int varname;
declint( a );   // C4019, int a;;
declint( b )   // OK, int b;

int main()
{
}
```
