---
title: App UWP, Windows Runtime e run-time di C | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 356d6d8d-76ee-4181-9ad0-6f24b2fede38
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 78f76b6f61eb5d8e7370e61e9cc1f466bdfb4c43
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592719"
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
