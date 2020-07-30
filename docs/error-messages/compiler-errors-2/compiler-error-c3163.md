---
title: Errore del compilatore C3163
ms.date: 11/04/2016
f1_keywords:
- C3163
helpviewer_keywords:
- C3163
ms.assetid: 17dcafa3-f416-4e04-a232-f9569218ba75
ms.openlocfilehash: 29f810ab1ab1608ab9c0492c9f88b8edfe042168
ms.sourcegitcommit: 6e55aeb538b1c39af754f82d6f7738a18f5aa031
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/29/2020
ms.locfileid: "87390026"
---
# <a name="compiler-error-c3163"></a>Errore del compilatore C3163

> '*construct*': attributi non coerenti con la dichiarazione precedente

Gli attributi applicati a una definizione sono in conflitto con l'attributo o gli attributi applicati a una dichiarazione.

Un modo per risolvere C3163 consiste nell'eliminare gli attributi nella dichiarazione in avanti. Tutti gli attributi in una dichiarazione in avanti devono essere minori degli attributi nella definizione o, al massimo, uguali.

Una possibile causa dell'errore C3163 riguarda il linguaggio di annotazione del codice sorgente Microsoft (SAL). Le macro SAL non si espandono, a meno che il progetto non venga compilato con il **`/analyze`** flag. Un programma che compila senza problemi **`/analyze`** può generare C3163 se si tenta di ricompilarlo con l' **`/analyze`** opzione. Per altre informazioni su SAL, vedere [annotazioni SAL](../../c-runtime-library/sal-annotations.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3163.

```cpp
// C3163.cpp
// compile with: /clr /c
using namespace System;

[CLSCompliant(true)] void f();
[CLSCompliant(false)] void f() {}   // C3163
// try the following line instead
// [CLSCompliant(true)] void f() {}
```

## <a name="see-also"></a>Vedere anche

[Annotazioni SAL](../../c-runtime-library/sal-annotations.md)
