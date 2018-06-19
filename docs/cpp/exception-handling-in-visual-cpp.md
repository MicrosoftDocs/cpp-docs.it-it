---
title: Gestione delle eccezioni in Visual C++ | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- try-catch keyword [C++], exception handling
ms.assetid: a6aa08de-669d-4ce8-9ec3-ec20d1354fcf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0acd5df644f097d19e5f9708f0a059a31f3e9ee9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32413323"
---
# <a name="exception-handling-in-visual-c"></a>Gestione di eccezioni in Visual C++
Un'eccezione è una condizione di errore, probabilmente non controllata dal programma, che impedisce al programma di proseguire il proprio percorso di esecuzione normale. Alcune operazioni, tra cui la creazione di oggetti, i file di input/output e le chiamate di funzione effettuate da altri moduli, possono dare origine a delle eccezioni anche quando il programma viene eseguito correttamente. Quando è affidabile, il codice prevede e gestisce le eccezioni.  
  
 Per rilevare errori logici all'interno di un unico programma o un modulo, utilizzare le asserzioni, anziché le eccezioni (vedere [utilizzando asserzioni](/visualstudio/debugger/c-cpp-assertions)).  
  
 Visual C++ supporta tre tipi di gestione delle eccezioni:  
  
-   [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)  
  
     Per la maggior parte dei programmi C++, si dovrebbe utilizzare la gestione delle eccezioni C++, che è indipendente dai tipi e assicura che i distruttori di oggetti siano richiamati durante la rimozione dello stack.  
  
-   [Gestione eccezioni strutturata](../cpp/structured-exception-handling-c-cpp.md)  
  
     Windows fornisce il proprio meccanismo di eccezione, denominato SEH. Non è consigliato per la programmazione in MFC o in C++. Usare SEH solo nei programmi C non MFC.  
  
-   [Eccezioni MFC](../mfc/exception-handling-in-mfc.md)  
  
     A partire dalla versione 3.0, MCF utilizza le eccezioni C++, ma supporta ancora le precedenti macro di gestione delle eccezioni, che sono simili, nella forma, alle eccezioni C++. Sebbene per la creazione di nuovi programmi non sia consigliato utilizzare tali macro, le stesse sono ancora supportate per garantire la compatibilità con le versioni precedenti. Nei programmi che già utilizzano le macro, è possibile usare liberamente anche le eccezioni C++. A partire dalla versione 2.0 di Visual C++, durante la pre-elaborazione, le macro vengono valutate nelle parole chiave di gestione delle eccezioni definite nell'implementazione di Visual C++ del linguaggio C++. È possibile lasciare le macro di gestione delle eccezioni esistenti al loro posto, quando si inizia a utilizzare le eccezioni C++.  
  
 Utilizzare il [/EH](../build/reference/eh-exception-handling-model.md) l'opzione del compilatore per specificare il tipo di gestione delle eccezioni per l'utilizzo in un progetto. Gestione delle eccezioni C++ è il valore predefinito. Non combinare i meccanismi di gestione degli errori; ad esempio non usare le eccezioni C++ con la gestione strutturata delle eccezioni. L'uso della gestione delle eccezioni C++ rende il codice più portabile e consente di gestire eccezioni di ogni tipo. Per ulteriori informazioni sugli svantaggi della gestione strutturata delle eccezioni, vedere [Structured Exception Handling](../cpp/structured-exception-handling-c-cpp.md). Per consigli su come combinare le macro MFC ed eccezioni C++, vedere [eccezioni: utilizzo delle macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md).  
  
 Per informazioni sulla gestione delle eccezioni nelle applicazioni di CLR, vedere [eccezioni](../windows/exception-handling-cpp-component-extensions.md).  
  
 Per informazioni sulle eccezioni su x64 processori, vedere [eccezioni (x64)](../build/exception-handling-x64.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)