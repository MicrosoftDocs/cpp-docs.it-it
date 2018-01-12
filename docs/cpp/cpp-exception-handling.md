---
title: Gestione delle eccezioni C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- C++ exception handling
- Visual C++, exception handling
ms.assetid: 65f80b44-9d0f-4d17-b910-07205a5c5c40
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a6cbe3489b0d45111a527102c85e6d8c207715ac
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-exception-handling"></a>Gestione delle eccezioni C++
Il linguaggio C++ fornisce supporto predefinito per la generazione e l'intercettazione delle eccezioni. Durante la programmazione in C++, è quasi sempre necessario usare il supporto predefinito delle eccezioni di C++ come descritto in questa sezione.  
  
 Per abilitare la gestione del codice delle eccezioni C++, utilizzare [/EHsc](../build/reference/eh-exception-handling-model.md).  
  
## <a name="in-this-section"></a>In questa sezione  
 Queste indicazioni sulla gestione delle eccezioni C++ includono:  
  
-   [Try, catch e throw istruzioni](../cpp/try-throw-and-catch-statements-cpp.md)  
  
-   [Modalità di valutazione dei blocchi Catch](../cpp/how-catch-blocks-are-evaluated-cpp.md)  
  
-   [Eccezioni e rimozione dello Stack](../cpp/exceptions-and-stack-unwinding-in-cpp.md)  
  
-   [Specifiche di eccezione](../cpp/exception-specifications-throw-cpp.md)  
  
-   [noexcept](../cpp/noexcept-cpp.md)  
  
-   [Eccezioni C++ non gestite](../cpp/unhandled-cpp-exceptions.md)  
  
-   [Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)  
  
## <a name="support-for-earlier-mfc-exceptions"></a>Supporto per eccezioni MFC precedenti  
 A partire dalla versione 4.0, MFC usa il meccanismo di gestione delle eccezioni C++. Sebbene sia consigliabile usare la gestione delle eccezioni C++ nel nuovo codice, MFC versione 4.0 e successive mantiene le macro delle versioni precedenti in modo da non causare problemi al vecchio codice. Le macro e il nuovo meccanismo possono essere usati insieme. Per informazioni sull'utilizzo combinato delle macro e gestione delle eccezioni C++ e sulla conversione del vecchio codice per utilizzare il nuovo meccanismo, vedere gli articoli [eccezioni: utilizzo delle macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) e [eccezioni: conversione da MFC Macro eccezioni](../mfc/exceptions-converting-from-mfc-exception-macros.md). Le macro delle eccezioni MFC precedenti, se ancora usate, restituiscono parole chiave delle eccezioni C++. Vedere [eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)