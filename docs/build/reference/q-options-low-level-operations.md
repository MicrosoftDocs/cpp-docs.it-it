---
title: Opzioni -Q (operazioni di basso livello) | Documenti Microsoft
ms.custom: ''
ms.date: 1/23/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /q
dev_langs:
- C++
helpviewer_keywords:
- Q compiler option [C++]
- -Q compiler option [C++]
- /Q compiler option [C++]
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c8a18c5d790cf21e8eb130a2b2baa152e20d79a1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32375035"
---
# <a name="q-options-low-level-operations"></a>Opzioni /Q (Operazioni di basso livello)

È possibile utilizzare il **/Q** opzioni del compilatore per eseguire le operazioni di basso livello del compilatore seguenti:

- [/Qfast_transcendentals (forzare funzioni trascendenti veloci)](../../build/reference/qfast-transcendentals-force-fast-transcendentals.md): genera funzioni trascendenti veloci.

- [/QIfist (Elimina ftol)](../../build/reference/qifist-suppress-ftol.md): Elimina `_ftol` quando una conversione da un tipo a virgola mobile a un tipo integer è obbligatorio (solo x86).

- [/Qimprecise_fwaits (rimozione di fwait nei blocchi Try)](../../build/reference/qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): rimuove `fwait` comandi all'interno di `try` blocchi.

- [/Qpar (parallelizzazione)](../../build/reference/qpar-auto-parallelizer.md): abilita la parallelizzazione automatica dei cicli contrassegnati con il [loop () #pragma](../../preprocessor/loop.md) direttiva.

- [/Qvec-report (livello di segnalazione parallelizzazione automatica)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md): Abilita creazione rapporti di livelli per la parallelizzazione automatica.

- [/Qsafe_fp_loads](../../build/reference/qsafe-fp-loads.md): eliminano le ottimizzazioni per registro a virgola mobile carica e per gli spostamenti tra memoria e MMX Registra.

- [/ Qspectre](../../build/reference/qspectre.md): genera le istruzioni per ridurre le vulnerabilità di sicurezza determinati Spectre.

- [/Qvec-report (livello di segnalazione vettorizzazione automatica)](../../build/reference/qvec-report-auto-vectorizer-reporting-level.md): Abilita creazione rapporti di livelli per la vettorializzazione automatica.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
