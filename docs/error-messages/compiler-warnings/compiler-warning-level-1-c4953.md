---
title: Compilatore avviso (livello 1) C4953 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4953
dev_langs:
- C++
helpviewer_keywords:
- C4953
ms.assetid: 3c4f6ac6-3976-41ab-8a27-3c41d7472ea7
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: d0b8ba97d493cb6e840be1023f7c6bd29a5cbd1a
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4953"></a>Avviso del compilatore (livello 1) C4953
'function' inline modificata dopo la raccolta dei dati di profilo. Dati di profilo non utilizzati  
  
 Quando si utilizza [PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), il compilatore ha rilevato un modulo di input che è stato ricompilato dopo `/LTCG:PGINSTRUMENT` e ha una funzione (***funzione***) che è stato modificato e in cui viene eseguito il test esistente hanno identificato la funzione come candidato per l'incorporamento. A seguito della ricompilazione del modulo, però, la funzione non sarà più un candidato per l'incorporamento.  
  
 Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.  
  
 Se fosse stata usata `/LTCG:PGOPTIMIZE` , al posto di questo avviso sarebbe comparso un errore.
