---
title: Gestione delle eccezioni in MSVC
ms.date: 05/07/2019
helpviewer_keywords:
- try-catch keyword [C++], exception handling
ms.assetid: a6aa08de-669d-4ce8-9ec3-ec20d1354fcf
ms.openlocfilehash: 47443f1b7021aac7755d77f797a4f7b7410281f8
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65222072"
---
# <a name="exception-handling-in-msvc"></a>Gestione delle eccezioni in MSVC

Un'eccezione è una condizione di errore, probabilmente non controllata dal programma, che impedisce al programma di proseguire il proprio percorso di esecuzione normale. Alcune operazioni, tra cui la creazione di oggetti, i file di input/output e le chiamate di funzione effettuate da altri moduli, possono dare origine a delle eccezioni anche quando il programma viene eseguito correttamente. Quando è affidabile, il codice prevede e gestisce le eccezioni.

Per rilevare errori logici all'interno di un unico programma o un modulo, usare le asserzioni, anziché le eccezioni (vedere [utilizzo delle asserzioni](/visualstudio/debugger/c-cpp-assertions)).

Microsoft C++ compilatore (MSVC) supporta tre tipi di gestione delle eccezioni:

- [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)

   Per la maggior parte dei programmi C++, si dovrebbe utilizzare la gestione delle eccezioni C++, che è indipendente dai tipi e assicura che i distruttori di oggetti siano richiamati durante la rimozione dello stack.

- [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)

   Windows fornisce il proprio meccanismo di eccezione, denominato SEH. Non è consigliato per la programmazione in MFC o in C++. Usare SEH solo nei programmi C non MFC.

- [Eccezioni MFC](../mfc/exception-handling-in-mfc.md)

   A partire dalla versione 3.0, MCF utilizza le eccezioni C++, ma supporta ancora le precedenti macro di gestione delle eccezioni, che sono simili, nella forma, alle eccezioni C++. Sebbene per la creazione di nuovi programmi non sia consigliato utilizzare tali macro, le stesse sono ancora supportate per garantire la compatibilità con le versioni precedenti. Nei programmi che già utilizzano le macro, è possibile usare liberamente anche le eccezioni C++. Durante la pre-elaborazione, le macro vengono valutate per parole chiave definite nell'implementazione di MSVC di gestione delle eccezioni di C++ linguaggio a partire da Visual C++ versione 2.0. È possibile lasciare le macro di gestione delle eccezioni esistenti al loro posto, quando si inizia a utilizzare le eccezioni C++.

Usare la [/EH](../build/reference/eh-exception-handling-model.md) opzione del compilatore per specificare il tipo di gestione delle eccezioni da usare in un progetto. Gestione delle eccezioni C++ è il valore predefinito. Non combinare i meccanismi di gestione degli errori; ad esempio non usare le eccezioni C++ con la gestione strutturata delle eccezioni. L'uso della gestione delle eccezioni C++ rende il codice più portabile e consente di gestire eccezioni di ogni tipo. Per altre informazioni sugli svantaggi della gestione strutturata delle eccezioni, vedere [Structured Exception Handling](../cpp/structured-exception-handling-c-cpp.md). Per consigli su come combinare le macro MFC ed eccezioni C++, vedere [alle eccezioni: Utilizzo delle macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md).

Per informazioni sulla gestione delle eccezioni nelle applicazioni CLR, vedere [gestione delle eccezioni (C + c++ /CLI e c++ /CX)](../extensions/exception-handling-cpp-component-extensions.md).

Per informazioni sulla gestione delle eccezioni nei x64 processori, vedere [x64 la gestione delle eccezioni](../build/exception-handling-x64.md).

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)