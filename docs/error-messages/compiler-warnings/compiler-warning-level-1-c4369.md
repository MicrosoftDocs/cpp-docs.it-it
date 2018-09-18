---
title: Compilatore avviso (livello 1) C4369 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4369
dev_langs:
- C++
helpviewer_keywords:
- C4369
ms.assetid: ade87e84-36be-4e00-be99-2930af848feb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9c8b292717168f7f6ead676528a5b7769b7c8ec4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024151"
---
# <a name="compiler-warning-level-1-c4369"></a>Avviso del compilatore (livello 1) C4369

'enumeratore': il valore di enumeratore 'value' non può essere rappresentato come 'type', valore sarà 'nuovo_valore'

Un enumeratore è stato calcolato sia maggiore del valore massimo per il tipo sottostante specificato.  Ciò ha causato un overflow e il compilatore è incluso il valore dell'enumeratore sul valore più basso possibile per il tipo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4369.

```
// C4369.cpp
// compile with: /W1
int main() {
   enum Color: char { red = 0x7e, green, blue };   // C4369
   enum Color2: char { red2 = 0x7d, green2, blue2};   // OK
}
```