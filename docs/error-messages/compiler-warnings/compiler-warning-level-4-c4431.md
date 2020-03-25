---
title: Avviso del compilatore (livello 4) C4431
ms.date: 11/04/2016
f1_keywords:
- C4431
helpviewer_keywords:
- C4431
ms.assetid: 58434ab6-dd8d-427b-953a-602fb7453ae6
ms.openlocfilehash: d4d803ef003f2c8367c750cf6d6aef07e4032140
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185360"
---
# <a name="compiler-warning-level-4-c4431"></a>Avviso del compilatore (livello 4) C4431

identificatore di tipo mancante, verrà utilizzato int. Nota: default-int non è più supportato in C++

Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: Visual C++ non crea più identificatori non tipizzati come int per impostazione predefinita. Il tipo di un identificatore deve essere specificato in modo esplicito.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4431.

```c
// C4431.c
// compile with: /c /W4
#pragma warning(default:4431)
i;   // C4431
int i;   // OK
```
