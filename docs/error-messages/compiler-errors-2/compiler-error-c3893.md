---
description: 'Altre informazioni su: errore del compilatore C3893'
title: Errore del compilatore C3893
ms.date: 11/04/2016
f1_keywords:
- C3893
helpviewer_keywords:
- C3893
ms.assetid: 90d52eae-6ef2-4db1-b7ad-92f9e8b140fb
ms.openlocfilehash: 975e2e356bc4b98a25a80e8ae4cc152c3b9b3207
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97119918"
---
# <a name="compiler-error-c3893"></a>Errore del compilatore C3893

' var ': utilizzo l-value del membro dati initonly consentito solo in un costruttore di istanza della classe ' type_name '

I membri dati statici [initonly](../../dotnet/initonly-cpp-cli.md) possono avere solo l'indirizzo assunto in un costruttore statico.

L'istanza (non statica) i membri dati initonly possono avere solo l'indirizzo assunto nei costruttori di istanza (non statici).

L'esempio seguente genera l'C3893:

```cpp
// C3893.cpp
// compile with: /clr
ref struct Y1 {
   Y1() : data_var(0) {
      int% i = data_var;   // OK
   }
   initonly int data_var;
};

int main(){
   Y1^ y= gcnew Y1;
   int% i = y->data_var;   // C3893
}
```
