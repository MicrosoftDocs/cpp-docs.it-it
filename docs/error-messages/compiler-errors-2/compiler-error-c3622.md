---
title: Errore del compilatore C3622 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3622
dev_langs:
- C++
helpviewer_keywords:
- C3622
ms.assetid: 02836f78-0cf2-4947-b87e-710187d81014
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 13ba39a2baf9da2039bbc97fe459f8840effacea
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062410"
---
# <a name="compiler-error-c3622"></a>Errore del compilatore C3622

'class': una classe dichiarata come 'keyword' non è possibile creare un'istanza

Si è verificato un tentativo di creare un'istanza di una classe contrassegnata come [astratta](../../windows/abstract-cpp-component-extensions.md). Una classe contrassegnata come `abstract` può essere una classe di base, ma non è possibile crearne istanze.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3622.

```
// C3622.cpp
// compile with: /clr
ref class a abstract {};

int main() {
   a aa;   // C3622
}
```
