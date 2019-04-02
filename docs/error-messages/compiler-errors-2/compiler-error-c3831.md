---
title: Errore del compilatore C3831
ms.date: 11/04/2016
f1_keywords:
- C3831
helpviewer_keywords:
- C3831
ms.assetid: a125d8dc-b75a-4ea0-b6c7-fe7b119dba25
ms.openlocfilehash: d9aa703f12fd175d9f7fc00eb76e76097a32e860
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781666"
---
# <a name="compiler-error-c3831"></a>Errore del compilatore C3831

'member': 'class' non può avere un membro dati bloccato o una funzione membro che restituisce un puntatore di blocco

[pin_ptr (C + + CLI)](../../extensions/pin-ptr-cpp-cli.md) è stato usato in modo errato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3831:

```
// C3831a.cpp
// compile with: /clr
ref class Y
{
public:
   int i;
};

ref class X
{
   pin_ptr<int> mbr_Y;   // C3831
   int^ mbr_Y2;   // OK
};

int main() {
   Y y;
   pin_ptr<int> p = &y.i;
}
```
