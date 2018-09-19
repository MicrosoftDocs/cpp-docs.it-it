---
title: Errore del compilatore C3859 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3859
dev_langs:
- C++
helpviewer_keywords:
- C3859
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1ac06a09a6ad66384fd2b5423e3df046771f7653
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053389"
---
# <a name="compiler-error-c3859"></a>Errore del compilatore C3859

intervallo di memoria virtuale per PCH superato. Ricompilare utilizzando l'opzione della riga di comando '-Zmvalue' o un valore superiore.

L'intestazione precompilata è troppo piccola per la quantità di dati che il compilatore sta cercando di inserire. Usare la **/Zm** flag del compilatore per specificare un valore maggiore per il file di intestazione precompilata. Per altre informazioni, vedere [/Zm (specifica precompilato intestazione memoria limite di allocazione)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).