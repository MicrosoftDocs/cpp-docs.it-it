---
title: Errore del compilatore C2567 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2567
dev_langs:
- C++
helpviewer_keywords:
- C2567
ms.assetid: 9c140ac9-7059-47e6-9ba1-e7939c8c0dc3
caps.latest.revision: 4
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 1bbdc535f75230da05a92eb0498176da40e918ea
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2567"></a>Errore del compilatore C2567
Impossibile aprire metadati in 'file', file può avere stato eliminato o spostato  
  
 Un file di metadati a cui è stato fatto riferimento nell'origine (con `#using`) non è stato trovato nella stessa directory il processo di back-end del compilatore in cui si trovava il processo di front-end del compilatore. Vedere [# direttiva using](../../preprocessor/hash-using-directive-cpp.md) per ulteriori informazioni.  
  
 C2567 può essere generato se si compila con **/c** su un computer e quindi si tenta una generazione di codice in fase di collegamento in un altro computer. Per ulteriori informazioni, vedere [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)).  
  
 Può inoltre indicare che il computer non ha più memoria.  
  
 Per correggere l'errore, assicurarsi che il file di metadati è nello stesso percorso di directory per tutte le fasi del processo di compilazione.
