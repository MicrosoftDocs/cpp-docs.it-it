---
title: Gestione delle eccezioni C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- C++ exception handling
- Visual C++, exception handling
ms.assetid: 65f80b44-9d0f-4d17-b910-07205a5c5c40
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 51c41fb9d6261da31c8a1028abac69d82b93e898
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39402016"
---
# <a name="c-exception-handling"></a>Gestione delle eccezioni C++
Il linguaggio C++ fornisce supporto predefinito per la generazione e l'intercettazione delle eccezioni. Durante la programmazione in C++, è quasi sempre necessario usare il supporto predefinito delle eccezioni di C++ come descritto in questa sezione.  
  
 Per abilitare la gestione del codice delle eccezioni C++, usare [/EHsc](../build/reference/eh-exception-handling-model.md).  
  
## <a name="in-this-section"></a>In questa sezione  
 Queste indicazioni sulla gestione delle eccezioni C++ includono:  
  
-   [Try, catch e throw istruzioni](../cpp/try-throw-and-catch-statements-cpp.md)  
  
-   [Modalità di valutazione dei blocchi catch](../cpp/how-catch-blocks-are-evaluated-cpp.md)  
  
-   [Le eccezioni e rimozione dello Stack](../cpp/exceptions-and-stack-unwinding-in-cpp.md)  
  
-   [Specifiche di eccezione](../cpp/exception-specifications-throw-cpp.md)  
  
-   [noexcept](../cpp/noexcept-cpp.md)  
  
-   [Eccezioni C++ non gestite](../cpp/unhandled-cpp-exceptions.md)  
  
-   [Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)  
  
## <a name="support-for-earlier-mfc-exceptions"></a>Supporto per eccezioni MFC precedenti  
 A partire dalla versione 4.0, MFC usa il meccanismo di gestione delle eccezioni C++. Sebbene sia consigliabile usare la gestione delle eccezioni C++ nel nuovo codice, MFC versione 4.0 e successive mantiene le macro delle versioni precedenti in modo da non causare problemi al vecchio codice. Le macro e il nuovo meccanismo possono essere usati insieme. Per informazioni sull'utilizzo combinato delle macro e gestione delle eccezioni C++ e sulla conversione del vecchio codice per usare il nuovo meccanismo, vedere gli articoli [eccezioni: utilizzo delle macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) e [alle eccezioni: conversione da MFC Macro di eccezioni](../mfc/exceptions-converting-from-mfc-exception-macros.md). Le macro delle eccezioni MFC precedenti, se ancora usate, restituiscono parole chiave delle eccezioni C++. Visualizzare [eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)