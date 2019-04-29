---
title: Avviso del compilatore (livello 4) C4431
ms.date: 11/04/2016
f1_keywords:
- C4431
helpviewer_keywords:
- C4431
ms.assetid: 58434ab6-dd8d-427b-953a-602fb7453ae6
ms.openlocfilehash: 1cef70ab02148924bf6a0f29e298b34c54b28bc4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391517"
---
# <a name="compiler-warning-level-4-c4431"></a>Avviso del compilatore (livello 4) C4431

identificatore di tipo mancante, verrà utilizzato int. Nota: Default-int non è più supportato in C

Questo errore può essere generato in seguito a operazioni di conformità del compilatore eseguite per oggetto visivo C++ 2005: Visual C++ non crea più identificatori non tipizzati come int per impostazione predefinita. Il tipo di un identificatore deve essere specificato in modo esplicito.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4431.

```
// C4431.c
// compile with: /c /W4
#pragma warning(default:4431)
i;   // C4431
int i;   // OK
```