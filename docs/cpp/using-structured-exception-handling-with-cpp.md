---
title: Utilizzando strutturata delle eccezioni con C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- C++ exception handling, mixed with SEH
- structured exception handling [C++], with C++ exception handling
ms.assetid: ec34b528-8c26-4429-b24a-6a68553aaa91
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: db5d067a391512d56a2d01ce3052ac3fab061f28
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-structured-exception-handling-with-c"></a>Utilizzo della gestione strutturata delle eccezioni con C++
La gestione delle eccezioni strutturata descritta in questi articoli funziona con file di origine in C++ e in C. Tuttavia, non è progettata specificatamente per C++ e non è consigliabile l'utilizzo. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, il meccanismo di gestione delle eccezioni C++ è più flessibile, in quanto può gestire eccezioni di qualsiasi tipo.  
  
 Microsoft C++ adesso supporta il modello di gestione delle eccezioni C++, basato sullo standard ANSI C++. Questo meccanismo gestisce automaticamente l'eliminazione di oggetti locali durante lo svuotamento dello stack. Se si scrive un codice C++ a tolleranza d'errore e si desidera implementare la gestione delle eccezioni, si consiglia vivamente di utilizzare la gestione delle eccezioni C++, anziché la gestione delle eccezioni strutturata. Si noti che mentre il compilatore C++ supporta i costrutti di gestione delle eccezioni strutturata come descritto in questi articoli, il compilatore C standard non supporta la sintassi di gestione delle eccezioni C++. Per informazioni dettagliate sulla gestione delle eccezioni C++, vedere [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md) e *Annotated C++ Reference Manual* di Margaret Ellis e Bjarne Stroustrup.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)