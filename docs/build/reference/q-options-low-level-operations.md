---
title: Opzioni /Q (Operazioni di basso livello)
ms.date: 1/23/2018
f1_keywords:
- /q
helpviewer_keywords:
- Q compiler option [C++]
- -Q compiler option [C++]
- /Q compiler option [C++]
ms.openlocfilehash: a6dcbd256fa3510955884d3adba4855b23cdbfab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50514253"
---
# <a name="q-options-low-level-operations"></a>Opzioni /Q (Operazioni di basso livello)

È possibile usare la **/Q** le opzioni del compilatore per eseguire le operazioni di basso livello del compilatore seguenti:

- [/Qfast_transcendentals (forza funzioni trascendenti veloci)](../../build/reference/qfast-transcendentals-force-fast-transcendentals.md): genera funzioni trascendenti veloci.

- [/QIfist (Elimina ftol)](../../build/reference/qifist-suppress-ftol.md): Elimina `_ftol` quando una conversione da un tipo a virgola mobile a un tipo integer è obbligatorio (solo x86).

- [/Qimprecise_fwaits (Rimuove comandi fwait all'interno dei blocchi Try)](../../build/reference/qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): rimuove `fwait` comandi all'interno di `try` blocchi.

- [/Qpar (parallelizzazione automatica)](../../build/reference/qpar-auto-parallelizer.md): abilita la parallelizzazione automatica dei cicli contrassegnati con il [loop () #pragma](../../preprocessor/loop.md) direttiva.

- [/Qvec/report (livello di segnalazione parallelizzazione automatica)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md): Abilita creazione rapporti di livelli per la parallelizzazione automatica.

- [/Qsafe_fp_loads](../../build/reference/qsafe-fp-loads.md): Elimina le ottimizzazioni per i registri a virgola mobile viene caricata e per gli spostamenti tra memoria e MMX Registra.

- [/Qspectre](../../build/reference/qspectre.md): genera le istruzioni per ridurre le vulnerabilità di sicurezza determinati Spectre.

- [/Qvec/report (livello di segnalazione vettorizzazione automatica)](../../build/reference/qvec-report-auto-vectorizer-reporting-level.md): Abilita creazione rapporti di livelli per la vettorializzazione automatica.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
