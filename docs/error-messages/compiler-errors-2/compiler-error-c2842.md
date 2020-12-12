---
description: 'Altre informazioni su: errore del compilatore C2842'
title: Errore del compilatore C2842
ms.date: 11/04/2016
f1_keywords:
- C2842
helpviewer_keywords:
- C2842
ms.assetid: 8674f08d-9f50-46ad-9229-abc6b74fa0e5
ms.openlocfilehash: f086c6c5fcfa451f320d96470615e4f5f4d5674a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97119983"
---
# <a name="compiler-error-c2842"></a>Errore del compilatore C2842

> '*Class*': un tipo gestito o WinRT non può definire il proprio ' operator new ' o ' operator delete '

## <a name="remarks"></a>Commenti

È possibile definire il proprio **operatore New** o **operator delete** per gestire l'allocazione di memoria nell'heap nativo. Tuttavia, le classi di riferimento non possono definire questi operatori perché vengono allocati esclusivamente nell'heap gestito.

Per ulteriori informazioni, vedere [operatori definiti dall'utente (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2842.

```cpp
// C2842.cpp
// compile with: /clr /c
ref class G {
   void* operator new( size_t nSize );   // C2842
};
```
