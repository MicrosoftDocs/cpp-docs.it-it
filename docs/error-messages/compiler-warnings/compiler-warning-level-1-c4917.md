---
title: Avviso del compilatore (livello 1) C4917
ms.date: 11/04/2016
f1_keywords:
- C4917
helpviewer_keywords:
- C4917
ms.assetid: c05e2610-4a5d-4f4b-a99b-c15fd7f1d5f1
ms.openlocfilehash: 97f6f0a08c8ef292d81471cb5d0d94e359466933
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393493"
---
# <a name="compiler-warning-level-1-c4917"></a>Avviso del compilatore (livello 1) C4917

'declarator': un GUID può solo essere associato a una classe, interfaccia o dello spazio dei nomi

Una struttura definita dall'utente diverso [classe](../../cpp/class-cpp.md), [interfaccia](../../cpp/interface.md), o [dello spazio dei nomi](../../cpp/namespaces-cpp.md) non può contenere un GUID.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

Esempio di codice seguente genera l'errore C4917:

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