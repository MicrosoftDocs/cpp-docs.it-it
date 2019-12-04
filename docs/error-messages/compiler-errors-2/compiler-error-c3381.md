---
title: Errore del compilatore C3381
ms.date: 11/04/2016
f1_keywords:
- C3381
helpviewer_keywords:
- C3381
ms.assetid: d276c89f-8377-4cb6-a8d4-7770885f06c4
ms.openlocfilehash: eadc9b45b4cd4f2d9b533f387dadd66be8acc963
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74749568"
---
# <a name="compiler-error-c3381"></a>Errore del compilatore C3381

' assembly ': gli identificatori di accesso agli assembly sono disponibili solo nel codice compilato con un'opzione/CLR

I tipi nativi possono essere visibili all'esterno dell'assembly, ma è possibile specificare solo l'accesso agli assembly per i tipi nativi in una compilazione **/CLR** .

Per ulteriori informazioni, vedere [visibilità dei tipi](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3381.

```cpp
// C3381.cpp
// compile with: /c
public class A {};   // C3381
```
