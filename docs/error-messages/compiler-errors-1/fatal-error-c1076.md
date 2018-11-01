---
title: Errore irreversibile C1076
ms.date: 11/04/2016
f1_keywords:
- C1076
helpviewer_keywords:
- C1076
ms.assetid: 84ac1180-3e8a-48e8-9f77-7f18a778b964
ms.openlocfilehash: 70525426182a923de85eecbd5a3335693d6e8949
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644691"
---
# <a name="fatal-error-c1076"></a>Errore irreversibile C1076

limite del compilatore: raggiunto limite interno dell'heap. Utilizzare /Zm per specificare un limite maggiore

Questo errore può essere causato da un numero eccessivo di simboli o di creazioni di istanza di modello.

Per correggere l'errore, effettuare le seguenti operazioni:

1. Usare la [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione per impostare il limite di memoria del compilatore sul valore specificato nelle [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) messaggio di errore. Per altre informazioni che include la procedura impostare questo valore in Visual Studio, vedere la sezione Osservazioni in [/Zm (specifica precompilato intestazione memoria limite di allocazione)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).

1. Se si utilizzano i compilatori ospitati a 32 bit in un sistema operativo a 64 bit, utilizzare i compilatori ospitati a 64 bit. Per altre informazioni, vedere [procedura: abilitare una a 64 bit Visual C++ set di strumenti della riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).

1. Eliminare i file di inclusione non necessari.

1. Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.

1. Eliminare le dichiarazioni inutilizzate.

1. Suddividere le funzioni di grandi dimensioni in funzioni più piccole.

1. Suddividere le classi di grandi dimensioni in classi più piccole.

1. Suddividere il file corrente in file più piccoli.

Se l'errore C1076 si verifica subito dopo l'avvio della compilazione, il valore specificato per **/Zm** è probabilmente troppo elevato per il programma. Ridurre il **/Zm** valore.