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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d3a240771c0b2e104ef7c51b187d4040500edaae
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3859"></a>Errore del compilatore C3859
intervallo di memoria virtuale per PCH superato. Ricompilare utilizzando l'opzione della riga di comando '-Zmvalue' o un valore superiore.  
  
 L'intestazione precompilata è troppo piccola per la quantità di dati che il compilatore sta cercando di inserire. Utilizzare il **/Zm** flag del compilatore per specificare un valore maggiore per il file di intestazione precompilata. Per ulteriori informazioni, vedere [/Zm (specifica memoria allocazione limite di intestazioni precompilate)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).