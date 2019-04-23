---
title: Del compilatore (livello 4) Avviso C4061
ms.date: 04/05/2019
f1_keywords:
- C4061
helpviewer_keywords:
- C4061
ms.assetid: a99cf88e-7941-4519-8b1b-f6889d914b2f
ms.openlocfilehash: 073e3e9cb1cb5bb6b0f66157c986072227960212
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59237120"
---
# <a name="compiler-warning-level-4-c4061"></a>Del compilatore (livello 4) Avviso C4061

> enumeratore '*identifier*'nell'istruzione switch dell'enum'*enumerazione*' non è gestito in modo esplicito da un'etichetta case

L'enumeratore specificato *identifier* non dispone di alcun gestore associato un `switch` istruzione che ha un `default` case. Il case mancano potrebbe essere considerata una distrazione o potrebbe non essere un problema. Dipende se l'enumeratore viene gestito tramite il case predefinito o No. Per un avviso correlato sugli enumeratori inutilizzati nella `switch` istruzioni che non hanno `default` case, vedere [C4062](compiler-warning-level-4-c4062.md).

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni su come abilitare avvisi disattivati per impostazione predefinita, vedere [del compilatore avvisi che vengono disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4061; aggiungere un case per l'enumeratore manca risolvere:

```cpp
// C4061.cpp
// compile with: /W4
#pragma warning(default : 4061)

enum E { a, b, c };
void func ( E e )
{
   switch(e)
   {
      case a:
      case b:
      default:
         break;
   }   // C4061 c' not handled
}

int main()
{
}
```

## <a name="see-also"></a>Vedere anche

[Avviso del compilatore (livello 4) C4062](compiler-warning-level-4-c4062.md)
