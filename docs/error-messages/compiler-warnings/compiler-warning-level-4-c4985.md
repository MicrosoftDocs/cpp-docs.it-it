---
title: Compilatore avviso (livello 4) C4985 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- C4985
ms.assetid: 832f001c-afe7-403d-a8b4-02334724c79e
caps.latest.revision: 6
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
ms.openlocfilehash: 4a36692420ea9d5547f236c1e5dfeaa269afbb67
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-4-c4985"></a>Avviso del compilatore (livello 4) C4985
'symbol name': attributi non presenti nella dichiarazione precedente.  
  
 Le annotazioni del linguaggio di annotazione del codice sorgente Microsoft (SAL), presenti nella dichiarazione o nella definizione del metodo corrente differiscono dalle annotazioni presenti in una dichiarazione precedente. Le stesse annotazioni SAL devono essere usate nella definizione e nelle dichiarazioni di un metodo.  
  
 Il linguaggio di annotazione del codice sorgente Microsoft (SAL) fornisce un set di annotazioni per descrivere come una funzione usa i parametri, le ipotesi che fa su di essi e le garanzie che produce in fase di completamento. Il file di intestazione sal.h definisce le annotazioni.  
  
 Si noti che le macro SAL non si espanderanno, a meno che il progetto contenga il [/ANALYZE](../../build/reference/analyze-code-analysis.md) flag specificato. Quando si specifica **/analyze**, il compilatore può generare l'errore C4985, anche se non è stato visualizzato alcun avviso o errore senza **/analyze**.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Usare le stesse annotazioni SAL nella definizione e nelle dichiarazioni di un metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [Annotazioni SAL](../../c-runtime-library/sal-annotations.md)
