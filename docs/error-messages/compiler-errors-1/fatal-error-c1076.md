---
title: Errore irreversibile C1076
ms.date: 03/08/2019
f1_keywords:
- C1076
helpviewer_keywords:
- C1076
ms.assetid: 84ac1180-3e8a-48e8-9f77-7f18a778b964
ms.openlocfilehash: 91753a49498548b4e523cd8564ee7a7ca7a3b373
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62406951"
---
# <a name="fatal-error-c1076"></a>Errore irreversibile C1076

> limite del compilatore: raggiunto limite interno dell'heap. Utilizzare /Zm per specificare un limite maggiore

Questo errore può essere causato da un numero eccessivo di simboli o di creazioni di istanza di modello. A partire da Visual Studio 2015, questo messaggio potrebbe dalla pressione della memoria virtuale di Windows causati da troppi processi di compilazione in parallelo. In questo caso, è consigliabile usare la **/Zm** opzione deve essere ignorato a meno che non si usa un `#pragma hdrstop` direttiva.

Per correggere l'errore, effettuare le seguenti operazioni:

1. Se l'intestazione precompilata Usa una `#pragma hdrstop` direttiva, usare il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) possibilità di impostare il limite di memoria del compilatore sul valore specificato nel [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) messaggio di errore. Per altre informazioni che include la procedura impostare questo valore in Visual Studio, vedere la sezione Osservazioni in [/Zm (specifica precompilato intestazione memoria limite di allocazione)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).

1. Provare a ridurre il numero di processi paralleli specificato utilizzando il **/maxcpucount** opzione a MSBUILD. File EXE in combinazione con il **/MP** opzione a CL. FILE EXE. Per altre informazioni, vedere [problemi di intestazione precompilata (PCH) e consigli](https://devblogs.microsoft.com/cppblog/precompiled-header-pch-issues-and-recommendations/).

1. Se si utilizzano i compilatori ospitati a 32 bit in un sistema operativo a 64 bit, utilizzare i compilatori ospitati a 64 bit. Per altre informazioni, vedere [Procedura: Abilitare una a 64 bit Visual C++ set di strumenti della riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).

1. Eliminare i file di inclusione non necessari.

1. Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.

1. Eliminare le dichiarazioni inutilizzate.

Se l'errore C1076 si verifica subito dopo l'avvio della compilazione, il valore specificato per **/Zm** è probabilmente troppo elevato per il programma. Ridurre il **/Zm** valore.