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
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 8f9805479d7ee9589cfd0da8491b0344d0bd7de1
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="using-structured-exception-handling-with-c"></a>Utilizzo della gestione strutturata delle eccezioni con C++
La gestione delle eccezioni strutturata descritta in questi articoli funziona con file di origine in C++ e in C. Tuttavia, non è progettata specificatamente per C++ e non è consigliabile l'utilizzo. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, il meccanismo di gestione delle eccezioni C++ è più flessibile, in quanto può gestire eccezioni di qualsiasi tipo.  
  
 Microsoft C++ adesso supporta il modello di gestione delle eccezioni C++, basato sullo standard ANSI C++. Questo meccanismo gestisce automaticamente l'eliminazione di oggetti locali durante lo svuotamento dello stack. Se si scrive un codice C++ a tolleranza d'errore e si desidera implementare la gestione delle eccezioni, si consiglia vivamente di utilizzare la gestione delle eccezioni C++, anziché la gestione delle eccezioni strutturata. Si noti che mentre il compilatore C++ supporta i costrutti di gestione delle eccezioni strutturata come descritto in questi articoli, il compilatore C standard non supporta la sintassi di gestione delle eccezioni C++. Per informazioni dettagliate sulla gestione delle eccezioni C++, vedere [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md) e *Annotated C++ Reference Manual* di Margaret Ellis e Bjarne Stroustrup.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
