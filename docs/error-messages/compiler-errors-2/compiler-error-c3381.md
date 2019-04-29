---
title: Errore del compilatore C3381
ms.date: 11/04/2016
f1_keywords:
- C3381
helpviewer_keywords:
- C3381
ms.assetid: d276c89f-8377-4cb6-a8d4-7770885f06c4
ms.openlocfilehash: ae416d68831d1964c89d938dfcddd364e521195c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62328864"
---
# <a name="compiler-error-c3381"></a>Errore del compilatore C3381

'assembly': gli identificatori di accesso assembly disponibili solo nel codice compilato con un'opzione /clr

I tipi nativi possono essere visibili all'esterno dell'assembly, ma è possibile specificare solo l'accesso di assembly per i tipi nativi in una **/clr** compilazione.

Per altre informazioni, vedere [digitare la visibilità](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3381.

```
// C3381.cpp
// compile with: /c
public class A {};   // C3381
```