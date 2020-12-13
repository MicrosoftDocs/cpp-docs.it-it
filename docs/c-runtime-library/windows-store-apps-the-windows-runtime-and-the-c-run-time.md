---
description: 'Altre informazioni su: app UWP, Windows Runtime e C Run-Time'
title: App UWP, Windows Runtime e run-time di C
ms.date: 02/02/2019
ms.assetid: 356d6d8d-76ee-4181-9ad0-6f24b2fede38
ms.openlocfilehash: cfbbdbde19b882fb51b8fd8782b20e4205bdb00b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136747"
---
# <a name="uwp-apps-the-windows-runtime-and-the-c-run-time"></a>App UWP, Windows Runtime e run-time di C

Le app della piattaforma UWP, ovvero Universal Windows Platform, sono programmi eseguiti con Windows Runtime in Windows 8. Windows Runtime è un ambiente attendibile che controlla le funzioni, le variabili e le risorse disponibili per un'app UWP. Tuttavia, per motivi legati alla progettazione, le restrizioni di Windows Runtime impediscono l'uso della maggior parte delle funzionalità della libreria run-time del linguaggio C (CRT, C Run-Time) nelle app UWP.

Windows Runtime non supporta le funzionalità CRT seguenti:

- La maggior parte delle funzioni CRT sono correlate a funzionalità non supportate.

   Ad esempio, un'app UWP non può creare un processo usando le famiglie di routine **exec** e **spawn**.

   Quando una funzione CRT non è supportata in un'applicazione UWP, questo fatto è indicato nel relativo articolo di riferimento.

- La maggior parte delle funzioni di caratteri multibyte e di stringa.

   Tuttavia, sia il testo ANSI che Unicode sono supportati.

- Variabili di ambiente.

- Il concetto di una cartella di lavoro corrente.

- Le app e le librerie di collegamento dinamico UWP collegate staticamente a CRT e compilate usando le opzioni del compilatore [/MT](../build/reference/md-mt-ld-use-run-time-library.md) o `/MTd`.

   Ovvero un'applicazione che usa una versione statica con multithreading di CRT.

- App compilate usando l'opzione del compilatore [/MDd](../build/reference/md-mt-ld-use-run-time-library.md).

   Ovvero, una versione di debug con multithreading specifica per DLL di CRT. Tale applicazione non è supportata in Windows Runtime.

Per un elenco completo delle funzioni CRT non disponibili in un'app UWP e per suggerimenti su funzioni alternative, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="see-also"></a>Vedi anche

[Compatibilità](../c-runtime-library/compatibility.md)<br/>
[Windows Runtime funzioni CRT non supportate](../c-runtime-library/windows-runtime-unsupported-crt-functions.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
[Creare un'app console UWP (Universal Windows Platform)](/windows/uwp/launch-resume/console-uwp)
