---
title: Errore degli strumenti del linker LNK1301
ms.date: 11/04/2016
f1_keywords:
- LNK1301
helpviewer_keywords:
- LNK1301
ms.assetid: 760da428-7182-4b25-b20a-de90d4b9a9cd
ms.openlocfilehash: b112c4498913c18d82ce8fbc4f6c6d211b906263
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431239"
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