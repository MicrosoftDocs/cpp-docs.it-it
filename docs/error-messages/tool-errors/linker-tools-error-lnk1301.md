---
title: Errore degli strumenti del linker LNK1301
ms.date: 11/04/2016
f1_keywords:
- LNK1301
helpviewer_keywords:
- LNK1301
ms.assetid: 760da428-7182-4b25-b20a-de90d4b9a9cd
ms.openlocfilehash: fe64eecfbc9fed57c3748afd5804b76d6e4284a4
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74990932"
---
# <a name="linker-tools-error-lnk1301"></a>Errore degli strumenti del linker LNK1301

Sono stati trovati moduli CLR LTCG, incompatibili con/LTCG: Parameter

Un modulo compilato con/CLR e/GL è stato passato al linker insieme a uno dei parametri PGO (profile PGO Optimization) di/LTCG.

Le ottimizzazioni PGO non sono supportate per i moduli/CLR.

Per altre informazioni, vedere:

- [/GL (ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md)

- [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)

- [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Ottimizzazioni PGO](../../build/profile-guided-optimizations.md)

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non eseguire la compilazione con/CLR o non collegarsi con uno dei parametri PGO a/LTCG.

## <a name="example"></a>Esempio

L'esempio seguente genera l'LNK1301:

```cpp
// LNK1301.cpp
// compile with: /clr /GL /link /LTCG:PGI LNK1301.obj
// LNK1301 expected
class MyClass {
public:
   int i;
};
```
