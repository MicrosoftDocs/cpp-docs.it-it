---
description: 'Altre informazioni su: errore del compilatore C3480'
title: Errore del compilatore C3480
ms.date: 11/04/2016
f1_keywords:
- C3480
helpviewer_keywords:
- C3480
ms.assetid: 7b2e055a-9604-4d13-861b-b38bda1a6940
ms.openlocfilehash: dbeed462410d36b466e807d576549c1b73ee4917
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113415"
---
# <a name="compiler-error-c3480"></a>Errore del compilatore C3480

'var': una variabile di acquisizione delle espressioni lambda deve essere inclusa in un ambito della funzione contenitore

La variabile di acquisizione delle espressioni lambda non è inclusa in un ambito della funzione contenitore.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere la variabile dall'elenco di acquisizione dell'espressione lambda.

## <a name="examples"></a>Esempio

L'esempio seguente genera l'errore C3480 perché la variabile `global` non è inclusa in un ambito della funzione contenitore:

```cpp
// C3480a.cpp

int global = 0;
int main()
{
   [&global] { global = 5; }(); // C3480
}
```

L'esempio seguente risolve l'errore C3480 rimuovendo la variabile `global` dall'elenco di acquisizione dell'espressione lambda:

```cpp
// C3480b.cpp

int global = 0;
int main()
{
   [] { global = 5; }();
}
```

## <a name="see-also"></a>Vedi anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
