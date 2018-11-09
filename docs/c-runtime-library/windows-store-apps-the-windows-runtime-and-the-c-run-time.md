---
title: App UWP, Windows Runtime e run-time di C
ms.date: 11/04/2016
ms.assetid: 356d6d8d-76ee-4181-9ad0-6f24b2fede38
ms.openlocfilehash: ea6e3e5017fcbef997a1e844e9f84e9c385bd31d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50441132"
---
# <a name="uwp-apps-the-windows-runtime-and-the-c-run-time"></a>App UWP, Windows Runtime e run-time di C

Le app della piattaforma UWP, ovvero Universal Windows Platform, sono programmi eseguiti con Windows Runtime in Windows 8. Windows Runtime è un ambiente attendibile che controlla le funzioni, le variabili e le risorse disponibili per un'app UWP. Tuttavia, per motivi legati alla progettazione, le restrizioni di Windows Runtime impediscono l'uso della maggior parte delle funzionalità della libreria run-time del linguaggio C (CRT, C Run-Time) nelle app UWP.

Windows Runtime non supporta le funzionalità CRT seguenti:

- La maggior parte delle funzioni CRT sono correlate a funzionalità non supportate.

   Ad esempio, un'app UWP non può creare un processo usando le famiglie di routine **exec** e **spawn**.

   Quando una funzione CRT non è supportata in un'applicazione UWP, questo fatto è indicato nel relativo articolo di riferimento.

- La maggior parte delle funzioni di caratteri multibyte e di stringa.

   Tuttavia, sia il testo ANSI che Unicode sono supportati.

- Applicazioni console e argomenti della riga di comando.

   Tuttavia, le applicazioni desktop tradizionali supportano ancora la console e gli argomenti della riga di comando.

- Variabili di ambiente.

- Il concetto di una cartella di lavoro corrente.

- Le app e le librerie di collegamento dinamico UWP collegate staticamente a CRT e compilate usando le opzioni del compilatore [/MT](../build/reference/md-mt-ld-use-run-time-library.md) o `/MTd`.

   Ovvero un'applicazione che usa una versione statica con multithreading di CRT.

- App compilate usando l'opzione del compilatore [/MDd](../build/reference/md-mt-ld-use-run-time-library.md).

   Ovvero, una versione di debug con multithreading specifica per DLL di CRT. Tale applicazione non è supportata in Windows Runtime.

Per un elenco completo delle funzioni CRT non disponibili in un'app UWP e per suggerimenti su funzioni alternative, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="see-also"></a>Vedere anche

[Compatibilità](../c-runtime-library/compatibility.md)<br/>
[Funzioni CRT non supportate da Windows Runtime](../c-runtime-library/windows-runtime-unsupported-crt-functions.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
