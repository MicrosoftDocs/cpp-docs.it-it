---
title: Compilatore avviso (livello 4) C4985 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: C4985
ms.assetid: 832f001c-afe7-403d-a8b4-02334724c79e
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: af8717f8b821311814a8aa4ee2f5b3e6ead89eef
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4985"></a>Avviso del compilatore (livello 4) C4985
'symbol name': attributi non presenti nella dichiarazione precedente.  
  
 Le annotazioni del linguaggio di annotazione del codice sorgente Microsoft (SAL), presenti nella dichiarazione o nella definizione del metodo corrente differiscono dalle annotazioni presenti in una dichiarazione precedente. Le stesse annotazioni SAL devono essere usate nella definizione e nelle dichiarazioni di un metodo.  
  
 Il linguaggio di annotazione del codice sorgente Microsoft (SAL) fornisce un set di annotazioni per descrivere come una funzione usa i parametri, le ipotesi che fa su di essi e le garanzie che produce in fase di completamento. Il file di intestazione sal.h definisce le annotazioni.  
  
 Si noti che le macro SAL non si espanderanno, a meno che il progetto contenga il flag [/analyze](../../build/reference/analyze-code-analysis.md) specificato. Quando si specifica **/analyze**, il compilatore può generare l'errore C4985, anche se non è stato visualizzato alcun avviso o errore senza **/analyze**.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Usare le stesse annotazioni SAL nella definizione e nelle dichiarazioni di un metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [Annotazioni SAL](../../c-runtime-library/sal-annotations.md)