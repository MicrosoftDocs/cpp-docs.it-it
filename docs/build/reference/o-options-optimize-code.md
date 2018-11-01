---
title: Opzioni /O (Ottimizza codice)
ms.date: 09/25/2017
f1_keywords:
- VC.Project.VCCLCompilerTool.Optimization
- /o
- VC.Project.VCCLWCECompilerTool.Optimization
helpviewer_keywords:
- performance, cle.exe compiler
- cl.exe compiler, performance
ms.assetid: 77997af9-5555-4b3d-aa57-6615b27d4d5d
ms.openlocfilehash: f4e2bf8b848654f7b87c59e7a54994448ee62d51
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481328"
---
# <a name="o-options-optimize-code"></a>Opzioni /O (Ottimizza codice)

Il **/O** opzioni controllano diverse ottimizzazioni che consentono di creare codice per la velocità massima o dimensioni minime.

- [/ O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md) imposta una combinazione di ottimizzazioni che generano codice di dimensioni minime.

- [/ O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md) imposta una combinazione di ottimizzazioni che ottimizza il codice per la velocità massima.

- [/OB](../../build/reference/ob-inline-function-expansion.md) controlla l'espansione funzioni inline.

- [/Od](../../build/reference/od-disable-debug.md) disabilita l'ottimizzazione, per maggiore velocità di compilazione e semplificare il debug.

- [/Og](../../build/reference/og-global-optimizations.md) Abilita le ottimizzazioni globali.

- [/Oi](../../build/reference/oi-generate-intrinsic-functions.md) genera funzioni intrinseche per le chiamate di funzione appropriata.

- [/OS](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) indica al compilatore di preferire le ottimizzazioni per le dimensioni quelle per la velocità.

- [/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) (impostazione predefinita) indica al compilatore di preferire le ottimizzazioni per la velocità di quelle per le dimensioni.

- [/Ox](../../build/reference/ox-full-optimization.md) è un'opzione di combinazione che seleziona numerose ottimizzazioni con un'enfasi sulla velocità. È un subset limitato delle **/O2** ottimizzazioni.

- [/Oy](../../build/reference/oy-frame-pointer-omission.md) evita la creazione di puntatori ai frame nello stack di chiamate per le chiamate di funzione più veloce.

## <a name="remarks"></a>Note

È possibile combinare più **/O** opzioni in un'istruzione singola opzione. Ad esempio, **/Odi** equivale a **/Oi /Od**. Alcune opzioni si escludono a vicenda e causano un errore del compilatore se utilizzati insieme. Vedere i singoli **/O** opzioni per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)