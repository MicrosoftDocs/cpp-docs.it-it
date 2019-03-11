---
title: Errore del compilatore C3859
ms.date: 03/08/2019
f1_keywords:
- C3859
helpviewer_keywords:
- C3859
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
ms.openlocfilehash: 9b20224207ba797c6ee93c06404e4d90c3d02525
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57738646"
---
# <a name="compiler-error-c3859"></a>Errore del compilatore C3859

> intervallo di memoria virtuale per PCH superato. . ricompilare utilizzando l'opzione della riga di comando '-Zm*valore*' o versioni successive

Memoria virtuale allocata per l'intestazione precompilata è troppo piccola per la quantità di dati, che il compilatore sta cercando di inserire in esso. A partire da Visual Studio 2015, il **/Zm** raccomandazione è significativa solo quando si usa il `#pragma hdrstop` direttiva. In altri casi, è un errore non corretti che indica i problemi di un utilizzo elevato della memoria virtuale di Windows.

Se l'intestazione precompilata Usa un' `#pragma hdrstop` direttiva, usare il **/Zm** flag del compilatore per specificare un valore maggiore per il file di intestazione precompilata. In caso contrario, provare a ridurre il numero di processi di compilazione in parallelo nella compilazione. Per altre informazioni, vedere [/Zm (specifica precompilato intestazione memoria limite di allocazione)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).
