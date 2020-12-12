---
description: 'Altre informazioni su: errore del compilatore C2431'
title: Errore del compilatore C2431
ms.date: 11/04/2016
f1_keywords:
- C2431
helpviewer_keywords:
- C2431
ms.assetid: 88a5b648-c89f-47d1-a20e-63231ab4f0f7
ms.openlocfilehash: af575403408454916b65bfaf6549f4b3e9fad624
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190042"
---
# <a name="compiler-error-c2431"></a>Errore del compilatore C2431

Registro di indice non valido in ' Identifier '

Il registro ESP viene ridimensionato o usato sia come indice che come registro di base. La codifica SIB per il processore x86 non consente neanche.

L'esempio seguente genera l'C2431:

```cpp
// C2431.cpp
// processor: x86
int main() {
   _asm mov ax, [ESI + 2*ESP]   // C2431
   _asm mov ax, [esp + esp]   // C2431
}
```
