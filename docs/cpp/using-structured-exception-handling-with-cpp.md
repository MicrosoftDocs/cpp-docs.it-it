---
title: Uso con C++ gestione strutturata delle eccezioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- C++ exception handling, mixed with SEH
- structured exception handling [C++], with C++ exception handling
ms.assetid: ec34b528-8c26-4429-b24a-6a68553aaa91
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 363dd00cd5f4e177ea32a109cf5f56a1f3c6cb29
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39461725"
---
# <a name="using-structured-exception-handling-with-c"></a>Utilizzo della gestione strutturata delle eccezioni con C++
La gestione delle eccezioni strutturata descritta in questi articoli funziona con file di origine in C++ e in C. Tuttavia, non è progettata specificatamente per C++ e non è consigliabile l'utilizzo. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, il meccanismo di gestione delle eccezioni C++ è più flessibile, in quanto può gestire eccezioni di qualsiasi tipo.  
  
 Microsoft C++ adesso supporta il modello di gestione delle eccezioni C++, basato sullo standard ANSI C++. Questo meccanismo gestisce automaticamente l'eliminazione di oggetti locali durante lo svuotamento dello stack. Se si scrive un codice C++ a tolleranza d'errore e si desidera implementare la gestione delle eccezioni, si consiglia vivamente di utilizzare la gestione delle eccezioni C++, anziché la gestione delle eccezioni strutturata. Si noti che mentre il compilatore C++ supporta i costrutti di gestione delle eccezioni strutturata come descritto in questi articoli, il compilatore C standard non supporta la sintassi di gestione delle eccezioni C++. Per informazioni dettagliate sulla gestione delle eccezioni C++, vedere [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md) e il *Annotated C++ Reference Manual* di Margaret Ellis e Bjarne Stroustrup.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)