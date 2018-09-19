---
title: Strumenti del linker LNK1301 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1301
dev_langs:
- C++
helpviewer_keywords:
- LNK1301
ms.assetid: 760da428-7182-4b25-b20a-de90d4b9a9cd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8646de5bb81120f6445e16b819b27da62ed9d5ec
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039946"
---
# <a name="linker-tools-error-lnk1301"></a>Errore degli strumenti del linker LNK1301

Moduli clr LTCG incompatibile con /LTCG: parametro

Un modulo compilato con /GL e /clr è stato passato al linker insieme a uno delle ottimizzazioni PGO parametri (PGO) di /LTCG.

Ottimizzazione PGO non sono supportati per i moduli /clr.

Per altre informazioni, vedere:

- [/GL (ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md)

- [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)

- [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md)

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non compilare con /clr o non si collega con uno dei parametri di ottimizzazione PGO di /LTCG.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK1301:

```
// LNK1301.cpp
// compile with: /clr /GL /link /LTCG:PGI LNK1301.obj
// LNK1301 expected
class MyClass {
public:
   int i;
};
```