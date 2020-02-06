---
title: Opzioni /Q (Operazioni di basso livello)
ms.date: 01/08/2020
f1_keywords:
- /q
helpviewer_keywords:
- Q compiler option [C++]
- -Q compiler option [C++]
- /Q compiler option [C++]
ms.openlocfilehash: 722a63a43e5e08fe80b26f908c7ae92df2fdb29c
ms.sourcegitcommit: 0f4ee9056d65043fa5a715f0ad1031c0ed30e2b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/05/2020
ms.locfileid: "77034519"
---
# <a name="q-options-low-level-operations"></a>Opzioni /Q (Operazioni di basso livello)

È possibile usare le opzioni del compilatore **/q** per eseguire le operazioni seguenti del compilatore di basso livello:

- [/Qfast_transcendentals (forza i trascendenti veloci)](qfast-transcendentals-force-fast-transcendentals.md): genera trascendenti veloci.

- [/QIfist (non viene eliminato _ftol)](qifist-suppress-ftol.md): Disattiva `_ftol` quando è necessaria una conversione da un tipo a virgola mobile a un tipo Integer (solo x86).

- [/Qimprecise_fwaits (Rimuovi comandi fwait all'interno di blocchi try)](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): rimuove i comandi di `fwait` all'interno di `try` blocchi.

- [/QIntel-JCC-erratum](qintel-jcc-erratum.md): mitiga l'effetto sulle prestazioni causato dall'aggiornamento del microcodice cui all'errata di Intel Jump Conditional code (CCM).

- [/QPAR (auto-parallelizzazione automatica)](qpar-auto-parallelizer.md): Abilita la parallelizzazione automatica dei cicli contrassegnati con la direttiva [#pragma loop ()](../../preprocessor/loop.md) .

- [/Qpar-report (livello di segnalazione parallelizzazione automatica automatica)](qpar-report-auto-parallelizer-reporting-level.md): Abilita i livelli di report per la parallelizzazione automatica.

- [/Qsafe_fp_loads](qsafe-fp-loads.md): disattiva le ottimizzazioni per i caricamenti del registro a virgola mobile e per lo spostamento tra i registri di memoria e MMX.

- [/Qspectre](qspectre.md): genera istruzioni per attenuare alcune vulnerabilità di sicurezza di Spectre.

- [/Qspectre-Load](qspectre-load.md): genera istruzioni per attenuare le vulnerabilità della sicurezza Spectre in base ai carichi.

- [/Qspectre-Load-CF](qspectre-load-cf.md): genera istruzioni per attenuare le vulnerabilità della sicurezza Spectre basate sulle istruzioni del flusso di controllo che vengono caricate.

- [/Qvec-report (livello di segnalazione Vectorizer automatica)](qvec-report-auto-vectorizer-reporting-level.md): Abilita i livelli di report per la vettorizzazione automatica.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
