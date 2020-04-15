---
title: Gestione delle eccezioni in MSVCException handling in MSVC
description: Cenni preliminari sulla gestione delle eccezioni di riferimento al linguaggio in C.
ms.date: 04/15/2020
helpviewer_keywords:
- try-catch keyword [C++], exception handling
ms.assetid: a6aa08de-669d-4ce8-9ec3-ec20d1354fcf
ms.openlocfilehash: 0d60f49c6f1412925c19aaf497352940411b5d92
ms.sourcegitcommit: 0e4feb35b47c507947262d00349d4a893863a6d3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/15/2020
ms.locfileid: "81396277"
---
# <a name="exception-handling-in-msvc"></a>Gestione delle eccezioni in MSVCException handling in MSVC

Un'eccezione è una condizione di errore, probabilmente non controllata dal programma, che impedisce al programma di proseguire il proprio percorso di esecuzione normale. Alcune operazioni, tra cui la creazione di oggetti, l'input/output di file e le chiamate di funzione effettuate da altri moduli, sono tutte potenziali origini di eccezioni, anche quando il programma viene eseguito correttamente. Quando è affidabile, il codice prevede e gestisce le eccezioni. Per rilevare gli errori logici, utilizzare asserzioni anziché eccezioni (vedere [Utilizzo di asserzioni](/visualstudio/debugger/c-cpp-assertions)).

## <a name="kinds-of-exceptions"></a>Tipi di eccezioni

Il compilatore di Microsoft C, ovvero il compilatore (MSVC,, Microsoft C, Microsoft C, Microsoft C, Microsoft C, System,) supporta tre tipi di gestione delle eccezioni:

- [Gestione delle eccezioni in C](errors-and-exception-handling-modern-cpp.md)

   Per la maggior parte dei programmi in C, è necessario utilizzare la gestione delle eccezioni di C. È indipendente dai tipi e assicura che i distruttori di oggetto vengano richiamati durante la rimozione dello stack.

- [Gestione strutturata delle eccezioni](structured-exception-handling-c-cpp.md)

   Windows fornisce il proprio meccanismo di eccezione, denominato seH (Structured Exception Handling). Non è consigliabile per la programmazione in C o in MFC. Usare SEH solo nei programmi C non MFC.

- [Eccezioni MFC](../mfc/exception-handling-in-mfc.md)

   A partire dalla versione 3.0, MFC ha utilizzato le eccezioni di C. Supporta ancora le vecchie macro di gestione delle eccezioni, che sono simili alle eccezioni di C . Per informazioni su come si possono ottenere informazioni sulla combinazione di macro MFC e delle eccezioni in C, vedere Eccezioni: utilizzo delle macro MFC e delle [eccezioni c.](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md)

Utilizzare un'opzione del compilatore [/EH](../build/reference/eh-exception-handling-model.md) per specificare il modello di gestione delle eccezioni da utilizzare in un progetto in C. L'impostazione predefinita per i nuovi progetti in Visual Studio è la gestione standard delle eccezioni in**C.**

Non è consigliabile combinare i meccanismi di gestione delle eccezioni. Ad esempio, non usare le eccezioni c'è con la gestione delle eccezioni strutturata. L'uso della gestione delle eccezioni di C, in modo esclusivo, rende il codice più portabile e consente di gestire le eccezioni di qualsiasi tipo. Per ulteriori informazioni sugli svantaggi della gestione delle eccezioni strutturata, vedere [Gestione delle eccezioni strutturata](structured-exception-handling-c-cpp.md).

## <a name="in-this-section"></a>Contenuto della sezione

- [Procedure consigliate moderne per la gestione delle eccezioni e degli errori in C](errors-and-exception-handling-modern-cpp.md)

- [Progettare la sicurezza dell'eccezione](how-to-design-for-exception-safety.md)

- [Interfaccia tra codice eccezionale e non eccezionale](how-to-interface-between-exceptional-and-non-exceptional-code.md)

- [Istruzioni try, catch e throw](try-throw-and-catch-statements-cpp.md)

- [Modalità di valutazione dei blocchi catch](how-catch-blocks-are-evaluated-cpp.md)

- [Eccezioni e rimozione dello stackExceptions and Stack Unwinding](exceptions-and-stack-unwinding-in-cpp.md)

- [Specifiche delle eccezioni](exception-specifications-throw-cpp.md)

- [noexcept](noexcept-cpp.md)

- [Eccezioni C++ non gestite](unhandled-cpp-exceptions.md)

- [Combinazione di eccezioni C (strutturate) e C++](mixing-c-structured-and-cpp-exceptions.md)

- [Gestione strutturata delle eccezioni (SEH) (C/C++)](structured-exception-handling-c-cpp.md)

## <a name="see-also"></a>Vedere anche

[Guida di riferimento al linguaggio C](cpp-language-reference.md)</br>
[Gestione delle eccezioni x64](../build/exception-handling-x64.md)</br>
[Gestione delle eccezioni (C' /CLI e C](../extensions/exception-handling-cpp-component-extensions.md)
