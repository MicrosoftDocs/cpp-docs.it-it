---
title: Opzioni /Q (Operazioni di basso livello)
ms.date: 1/23/2018
f1_keywords:
- /q
helpviewer_keywords:
- Q compiler option [C++]
- -Q compiler option [C++]
- /Q compiler option [C++]
ms.openlocfilehash: 5bbb63b4f437f8aefd5c84c1c1c4bd20bdb965cb
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57819909"
---
# <a name="q-options-low-level-operations"></a>Opzioni /Q (Operazioni di basso livello)

È possibile usare la **/Q** le opzioni del compilatore per eseguire le operazioni di basso livello del compilatore seguenti:

- [/Qfast_transcendentals (forza funzioni trascendenti veloci)](qfast-transcendentals-force-fast-transcendentals.md): Genera funzioni trascendenti veloci.

- [/QIfist (Elimina ftol)](qifist-suppress-ftol.md): Elimina `_ftol` quando una conversione da un tipo a virgola mobile a un tipo integer è obbligatorio (solo x86).

- [/Qimprecise_fwaits (Rimuove comandi fwait all'interno dei blocchi Try)](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): Rimuove i comandi `fwait` all'interno dei blocchi `try` .

- [/Qpar (Auto-Parallelizer)](qpar-auto-parallelizer.md): Abilita la parallelizzazione automatica dei cicli contrassegnati con la direttiva [#pragma loop()](../../preprocessor/loop.md) .

- [/Qvec/report (livello segnalazione parallelizzazione automatica)](qpar-report-auto-parallelizer-reporting-level.md): Abilita livelli di creazione rapporti per la parallelizzazione automatica.

- [/Qsafe_fp_loads](qsafe-fp-loads.md): Elimina le ottimizzazioni per i caricamenti dei registri a virgola mobile e per gli spostamenti tra memoria e i registri MMX.

- [/Qspectre](qspectre.md): Genera le istruzioni per ridurre le vulnerabilità di sicurezza determinati Spectre.

- [/Qvec-report (vettorizzazione automatica livello di segnalazione)](qvec-report-auto-vectorizer-reporting-level.md): Abilita livelli di creazione rapporti per la vettorializzazione automatica.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
