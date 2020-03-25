---
title: Avviso del compilatore (livello 1) C4917
ms.date: 11/04/2016
f1_keywords:
- C4917
helpviewer_keywords:
- C4917
ms.assetid: c05e2610-4a5d-4f4b-a99b-c15fd7f1d5f1
ms.openlocfilehash: c7a2d72b429f762e476286093c7f273a9a546cb6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80174674"
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
