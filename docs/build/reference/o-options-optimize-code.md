---
title: -O opzioni (Ottimizza codice) | Documenti Microsoft
ms.custom: 
ms.date: 09/25/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.Optimization
- /o
- VC.Project.VCCLWCECompilerTool.Optimization
dev_langs: C++
helpviewer_keywords:
- performance, cle.exe compiler
- cl.exe compiler, performance
ms.assetid: 77997af9-5555-4b3d-aa57-6615b27d4d5d
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b7da04384d0c4ea00c2eaaedbcf0ec770e216289
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="o-options-optimize-code"></a>Opzioni /O (Ottimizza codice)

Il **/O** opzioni controllano diverse ottimizzazioni che consentono di creare codice per la velocità massima o dimensioni minime.

- [/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md) imposta una combinazione di ottimizzazioni che generano il codice di dimensioni minime.

- [/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md) imposta una combinazione di ottimizzazioni che ottimizza il codice per la velocità massima.

- [/OB](../../build/reference/ob-inline-function-expansion.md) controlla l'espansione funzioni inline.

- [/Od](../../build/reference/od-disable-debug.md) disabilita l'ottimizzazione, maggiore velocità di compilazione per semplificare il debug.

- [/Og](../../build/reference/og-global-optimizations.md) Abilita le ottimizzazioni globali.

- [/Oi](../../build/reference/oi-generate-intrinsic-functions.md) genera funzioni intrinseche per chiamate di funzione appropriate.

- [/OS](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) indica al compilatore di preferire le ottimizzazioni per le dimensioni quelle per la velocità.

- [/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) (impostazione predefinita) indica al compilatore di preferire le ottimizzazioni per la velocità di quelle per le dimensioni.

- [/Ox](../../build/reference/ox-full-optimization.md) è un'opzione di combinazione che seleziona numerose ottimizzazioni con un'enfasi sulla velocità. È un sottoinsieme del **/O2** ottimizzazioni.

- [/Oy](../../build/reference/oy-frame-pointer-omission.md) Elimina la creazione di puntatori ai frame nello stack di chiamate per le chiamate di funzione più veloci.

## <a name="remarks"></a>Note

È possibile combinare più **/O** opzioni in un'istruzione singola opzione. Ad esempio, **/Odi** equivale **/Od /Oi**. Alcune opzioni si escludono a vengono e causano un errore del compilatore se utilizzati insieme. Vedere le singole **/O** opzioni per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)