---
title: Opzioni -Q (operazioni di basso livello) | Microsoft Docs
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
ms.openlocfilehash: 15854333a9f26f87d20f7819327e68050ab37bf6
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45717782"
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
