---
title: Errore del compilatore C3859 | Documenti Microsoft
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
ms.openlocfilehash: d2f8c51f25c09881e10e980276fc2035a6a70aed
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33272305"
---
# <a name="compiler-error-c3859"></a>Errore del compilatore C3859
intervallo di memoria virtuale per PCH superato. Ricompilare utilizzando l'opzione della riga di comando '-Zmvalue' o un valore superiore.  
  
 L'intestazione precompilata è troppo piccola per la quantità di dati che il compilatore sta cercando di inserire. Utilizzare il **/Zm** flag del compilatore per specificare un valore maggiore per il file di intestazione precompilata. Per ulteriori informazioni, vedere [/Zm (specifica memoria allocazione limite di intestazioni precompilate)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).