---
title: Errore del compilatore C3859 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3859
dev_langs:
- C++
helpviewer_keywords:
- C3859
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 8a132eb7dbf09421ad5c99249b0208e5f901156b
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3859"></a>Errore del compilatore C3859
intervallo di memoria virtuale per PCH superato. Ricompilare utilizzando l'opzione della riga di comando '-Zmvalue' o un valore superiore.  
  
 L'intestazione precompilata è troppo piccola per la quantità di dati che il compilatore sta cercando di inserire. Utilizzare il **/Zm** flag del compilatore per specificare un valore maggiore per il file di intestazione precompilata. Per ulteriori informazioni, vedere [/Zm (specifica memoria allocazione limite di intestazioni precompilate)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).
