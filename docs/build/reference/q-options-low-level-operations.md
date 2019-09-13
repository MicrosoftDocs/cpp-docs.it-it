---
title: Opzioni /Q (Operazioni di basso livello)
ms.date: 01/23/2018
f1_keywords:
- /q
helpviewer_keywords:
- Q compiler option [C++]
- -Q compiler option [C++]
- /Q compiler option [C++]
ms.openlocfilehash: 6348226aa38d1f2eefdf9e19e27c4c87bd2f0812
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70927663"
---
# <a name="q-options-low-level-operations"></a>Opzioni /Q (Operazioni di basso livello)

È possibile usare le opzioni del compilatore **/q** per eseguire le operazioni seguenti del compilatore di basso livello:

- [/Qfast_transcendentals (forza i trascendenti veloci)](qfast-transcendentals-force-fast-transcendentals.md): Genera funzioni trascendenti veloci.

- [/QIfist (Disattiva _ftol)](qifist-suppress-ftol.md): Viene eliminato `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo Integer (solo x86).

- [/Qimprecise_fwaits (rimuove comandi fwait all'interno di blocchi try)](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): Rimuove i comandi `fwait` all'interno dei blocchi `try` .

- [/QPAR (parallelizzazione automatica automatico)](qpar-auto-parallelizer.md): Abilita la parallelizzazione automatica dei cicli contrassegnati con la direttiva [#pragma loop()](../../preprocessor/loop.md) .

- [/Qpar-report (livello di segnalazione parallelizzazione automatica automatica)](qpar-report-auto-parallelizer-reporting-level.md): Abilita livelli di creazione rapporti per la parallelizzazione automatica.

- [/Qsafe_fp_loads](qsafe-fp-loads.md): Disattiva le ottimizzazioni per i caricamenti del registro a virgola mobile e per gli spostamenti tra la memoria e i registri MMX.

- [/Qspectre](qspectre.md): Genera istruzioni per attenuare alcune vulnerabilità di sicurezza di Spectre.

- [/Qvec-report (livello di segnalazione Vectorizer automatica)](qvec-report-auto-vectorizer-reporting-level.md): Abilita livelli di creazione rapporti per la vettorializzazione automatica.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
