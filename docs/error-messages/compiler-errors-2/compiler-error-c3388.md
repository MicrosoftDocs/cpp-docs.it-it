---
title: Errore del compilatore C3388 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3388
dev_langs:
- C++
helpviewer_keywords:
- C3388
ms.assetid: 34336545-ed13-4d81-ab5f-f869799fe4c2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4447d2d72c2a0a56df9f3a64549f201f86ddf129
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46073473"
---
# <a name="compiler-error-c3388"></a>Errore del compilatore C3388

'type': non consentito come vincolo, presupposto 'ref class' per continuare l'analisi

Un vincolo è stato specificato su un tipo generico, ma non in modo corretto. Vedere [vincoli su parametri di tipo generico (C + + CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3388.

```
// C3388.cpp
// compile with: /clr /c
interface class AA {};

generic <class T>
where T : interface class   // C3388
ref class C {};

// OK
generic <class T>
where T : AA
ref class D {};
```