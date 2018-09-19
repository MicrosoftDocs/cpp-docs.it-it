---
title: Errore del compilatore C3533 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3533
dev_langs:
- C++
helpviewer_keywords:
- C3533
ms.assetid: a68b1ba5-466e-4190-a1a4-505ccfe548b7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6201f59e3ccefaa920f79f9b9889bd187fb2e0b0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46042559"
---
# <a name="compiler-error-c3533"></a>Errore del compilatore C3533

'type': un parametro non può avere un tipo che contiene 'auto'

Un parametro di metodo o il modello non può essere dichiarato con la `auto` parola chiave se il valore predefinito [/Zc: Auto](../../build/reference/zc-auto-deduce-variable-type.md) opzione del compilatore è in vigore.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Rimuovere il `auto` parola chiave dalla dichiarazione di parametro.

## <a name="example"></a>Esempio

Nell'esempio seguente genera C3533 perché viene dichiarato un parametro di funzione con il `auto` parola chiave che viene compilato con **/Zc: Auto**.

```
// C3533a.cpp
// Compile with /Zc:auto
void f(auto j) {} // C3533
```

## <a name="example"></a>Esempio

Nell'esempio seguente produce C3533 in modalità c++14 perché viene dichiarato un parametro di modello con il `auto` parola chiave che viene compilato con **/Zc: Auto**. (In c++17, questa è una definizione valida di un modello di classe con un parametro di modello non di tipo singolo il cui tipo viene dedotto).

```
// C3533b.cpp
// Compile with /Zc:auto
template<auto T> class C {}; // C3533
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)<br/>
[/Zc:auto (deduzione del tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)
