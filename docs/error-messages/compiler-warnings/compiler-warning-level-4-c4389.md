---
title: Avviso del compilatore (livello 4) C4389
description: Avviso del compilatore Microsoft C/C++ C4389, le cause e la risoluzione.
ms.date: 10/16/2020
f1_keywords:
- c4389
helpviewer_keywords:
- C4389
ms.openlocfilehash: b06b013151ed12b4f66bb23a7e862992d05e6b30
ms.sourcegitcommit: f19f02f217b80804ab321d463c76ce6f681abcc6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/19/2020
ms.locfileid: "92176265"
---
# <a name="compiler-warning-level-4-c4389"></a>Avviso del compilatore (livello 4) C4389

> '*Equality-Operator*': mancata corrispondenza tra signed e unsigned

**`==`** Operazione or **`!=`** interessata **`signed`** e **`unsigned`** variabili. Questo potrebbe causare la perdita di dati.

## <a name="remarks"></a>Osservazioni

Un modo per correggere questo avviso è se si esegue il cast di uno dei due tipi quando si confrontano i **`signed`** **`unsigned`** tipi e.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4389:

```cpp
// C4389.cpp
// compile with: cl /EHsc /W4 C4389.cpp

int main()
{
   int a = 9;
   unsigned int b = 10;
   int result = 0;

   if (a == b)   // C4389
      result = 1;
   else
      result = 2;

   if (unsigned(a) == b) // OK
      result = 3;
   else
      result = 4;

   return result;
}
```

## <a name="see-also"></a>Vedere anche

[Avviso del compilatore C4018](compiler-warning-level-3-c4018.md)\
[Avviso del compilatore (livello 4) C4388](c4388.md)
