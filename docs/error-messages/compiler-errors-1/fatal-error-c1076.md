---
description: 'Altre informazioni su: errore irreversibile C1076'
title: Errore irreversibile C1076
ms.date: 03/08/2019
f1_keywords:
- C1076
helpviewer_keywords:
- C1076
ms.assetid: 84ac1180-3e8a-48e8-9f77-7f18a778b964
ms.openlocfilehash: 2d2ca5ffc8970affa6ddd01011e1a37c7b5b778d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341802"
---
# <a name="fatal-error-c1076"></a>Errore irreversibile C1076

> limite del compilatore: raggiunto limite interno dell'heap. Utilizzare /Zm per specificare un limite maggiore

Questo errore può essere causato da un numero eccessivo di simboli o di creazioni di istanza di modello. A partire da Visual Studio 2015, questo messaggio può derivare dalla pressione della memoria virtuale Windows causata da un numero eccessivo di processi di compilazione paralleli. In questo caso, la raccomandazione di usare l'opzione **/ZM** deve essere ignorata a meno che non si usi una `#pragma hdrstop` direttiva.

Per correggere l'errore, effettuare le seguenti operazioni:

1. Se l'intestazione precompilata utilizza una `#pragma hdrstop` direttiva, utilizzare l'opzione [/ZM](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) per impostare il limite di memoria del compilatore sul valore specificato nel messaggio di errore [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) . Per altre informazioni su come impostare questo valore in Visual Studio, vedere la sezione Osservazioni in [/ZM (specificare il limite di allocazione della memoria per l'intestazione precompilata)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).

1. Provare a ridurre il numero di processi paralleli specificati usando l'opzione **/maxcpucount** per MSBUILD.EXE in combinazione con l'opzione **/MP** per CL.EXE. Per ulteriori informazioni, vedere [problemi e consigli relativi all'intestazione precompilata (PCH)](https://devblogs.microsoft.com/cppblog/precompiled-header-pch-issues-and-recommendations/).

1. Se si utilizzano i compilatori ospitati a 32 bit in un sistema operativo a 64 bit, utilizzare i compilatori ospitati a 64 bit. Per altre informazioni, vedere [procedura: abilitare un set di strumenti per Visual C++ a 64 bit nella riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).

1. Eliminare i file di inclusione non necessari.

1. Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.

1. Eliminare le dichiarazioni inutilizzate.

Se C1076 si verifica immediatamente dopo l'avvio della compilazione, il valore specificato per **/ZM** è probabilmente troppo elevato per il programma. Ridurre il valore di **/ZM** .
