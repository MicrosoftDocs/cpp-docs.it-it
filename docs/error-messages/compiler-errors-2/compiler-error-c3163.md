---
title: Errore del compilatore C3163 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3163
dev_langs:
- C++
helpviewer_keywords:
- C3163
ms.assetid: 17dcafa3-f416-4e04-a232-f9569218ba75
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0e712a70bdd443d9a6c640853b958f29dac78dbd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46061968"
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