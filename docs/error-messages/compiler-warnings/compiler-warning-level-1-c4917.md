---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4917'
title: Avviso del compilatore (livello 1) C4917
ms.date: 11/04/2016
f1_keywords:
- C4917
helpviewer_keywords:
- C4917
ms.assetid: c05e2610-4a5d-4f4b-a99b-c15fd7f1d5f1
ms.openlocfilehash: b85d9dced285eade22cf6b8ff61657cd53703b88
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97291428"
---
# <a name="compiler-warning-level-1-c4917"></a>Avviso del compilatore (livello 1) C4917

' dichiaratore ': un GUID può essere associato solo a una classe, un'interfaccia o uno spazio dei nomi

Una struttura definita dall'utente diversa dalla [classe](../../cpp/class-cpp.md), dall' [interfaccia](../../cpp/interface.md)o [dallo spazio dei nomi](../../cpp/namespaces-cpp.md) non può avere un GUID.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

L'esempio di codice seguente genera l'C4917:

```cpp
// C4917.cpp
// compile with: /W1
#pragma warning(default : 4917)
__declspec(uuid("00000000-0000-0000-0000-000000000001")) struct S
{
} s;   // C4917, don't put uuid on a struct

int main()
{
}
```
