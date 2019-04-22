---
title: Errore del compilatore C3163
ms.date: 11/04/2016
f1_keywords:
- C3163
helpviewer_keywords:
- C3163
ms.assetid: 17dcafa3-f416-4e04-a232-f9569218ba75
ms.openlocfilehash: eda3910c99f4c8ea96568f2d475c5d6a1e4cdc7c
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59041046"
---
# <a name="compiler-error-c3163"></a>Errore del compilatore C3163

'construct': attributi non coerenti con la dichiarazione precedente

Gli attributi che vengono applicati a una definizione in conflitto con gli attributi che vengono applicati a una dichiarazione.

Un modo per risolvere C3163 è eliminare attributi nella dichiarazione con prototipo. Tutti gli attributi in una dichiarazione con prototipo devono essere minore di attributi sulla definizione o, al massimo, uguale ad essi.

Una possibile causa dell'errore C3163 implica il linguaggio annotazione del codice sorgente Microsoft (SAL). Le macro SAL non si espanderanno a meno che non si compila il progetto utilizzando il **/ANALYZE** flag. Un programma che viene compilato senza errori senza / analizza potrebbe generare C3163 se si prova a ricompilarla con l'opzione /Analyze. Per altre informazioni su SAL, vedere [annotazioni SAL](../../c-runtime-library/sal-annotations.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3163.

```
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