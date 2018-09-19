---
title: Errore del compilatore C3893 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3893
dev_langs:
- C++
helpviewer_keywords:
- C3893
ms.assetid: 90d52eae-6ef2-4db1-b7ad-92f9e8b140fb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 857d13de61f03bf0784d8cd10ad092d16f7acdaa
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46087046"
---
# <a name="compiler-error-c3893"></a>Errore del compilatore C3893

'var': utilizzo l-value del membro dati initonly è consentito solo in un costruttore di istanza della classe 'type_name'

Statica [initonly](../../dotnet/initonly-cpp-cli.md) membri dati possono avere solo gli indirizzi in un costruttore statico.

Membro dati initonly (non statici) di istanza può avere solo gli indirizzi nei costruttori di istanza (non statico).

L'esempio seguente genera l'errore C3893:

```
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