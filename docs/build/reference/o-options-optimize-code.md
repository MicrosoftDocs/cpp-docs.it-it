---
title: Opzioni /O (Ottimizza codice)
description: Le opzioni del compilatore MSVC/O specificano le ottimizzazioni del compilatore da usare.
ms.date: 07/08/2020
f1_keywords:
- VC.Project.VCCLCompilerTool.Optimization
- /o
- VC.Project.VCCLWCECompilerTool.Optimization
helpviewer_keywords:
- performance, cle.exe compiler
- cl.exe compiler, performance
ms.assetid: 77997af9-5555-4b3d-aa57-6615b27d4d5d
ms.openlocfilehash: 36ef582787a3ec2d7aee1e589c70b48712d9d552
ms.sourcegitcommit: 80c8a512b361bd84e38958beb1a1bf6db7434021
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2020
ms.locfileid: "86180877"
---
# <a name="o-options-optimize-code"></a>`/O`Opzioni (Ottimizza codice)

Le **`/O`** opzioni controllano diverse ottimizzazioni che consentono di creare codice per la velocità massima o la dimensione minima.

- [`/O1`](o1-o2-minimize-size-maximize-speed.md)imposta una combinazione di ottimizzazioni che generano codice di dimensioni minime.

- [`/O2`](o1-o2-minimize-size-maximize-speed.md)imposta una combinazione di ottimizzazioni che ottimizza il codice per la massima velocità.

- [`/Ob`](ob-inline-function-expansion.md)Controlla l'espansione della funzione inline.

- [`/Od`](od-disable-debug.md)Disabilita l'ottimizzazione, per velocizzare la compilazione e semplificare il debug.

- [`/Og`](og-global-optimizations.md)(deprecato) Abilita le ottimizzazioni globali.

- [`/Oi`](oi-generate-intrinsic-functions.md)genera funzioni intrinseche per le chiamate di funzione appropriate.

- [`/Os`](os-ot-favor-small-code-favor-fast-code.md)indica al compilatore di preferire le ottimizzazioni per le dimensioni rispetto alle ottimizzazioni per la velocità.

- [`/Ot`](os-ot-favor-small-code-favor-fast-code.md)(impostazione predefinita) indica al compilatore di preferire le ottimizzazioni per velocizzare le ottimizzazioni per le dimensioni.

- [`/Ox`](ox-full-optimization.md)è un'opzione di combinazione che seleziona diverse ottimizzazioni con un'enfasi sulla velocità. **`/Ox`** è un subset rigoroso delle **`/O2`** ottimizzazioni.

- [`/Oy`](oy-frame-pointer-omission.md)evita la creazione di puntatori ai frame nello stack di chiamate per le chiamate di funzione più veloci.

## <a name="remarks"></a>Osservazioni

È possibile combinare più **`/O`** Opzioni in un'unica istruzione Option. Ad esempio, **`/Odi`** è uguale a **`/Od /Oi`** . Alcune opzioni si escludono a vicenda e generano un errore del compilatore se utilizzate insieme. Per ulteriori informazioni, vedere le singole **`/O`** Opzioni.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
