---
title: Gestione delle eccezioni in MSVC
ms.date: 11/19/2019
helpviewer_keywords:
- try-catch keyword [C++], exception handling
ms.assetid: a6aa08de-669d-4ce8-9ec3-ec20d1354fcf
ms.openlocfilehash: 6cf71d6e6d0519951a084ebead65003bd363395f
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246583"
---
# <a name="exception-handling-in-msvc"></a>Gestione delle eccezioni in MSVC

Un'eccezione è una condizione di errore, probabilmente non controllata dal programma, che impedisce al programma di proseguire il proprio percorso di esecuzione normale. Alcune operazioni, tra cui la creazione di oggetti, i file di input/output e le chiamate di funzione effettuate da altri moduli, possono dare origine a delle eccezioni anche quando il programma viene eseguito correttamente. Quando è affidabile, il codice prevede e gestisce le eccezioni. Per rilevare gli errori logici, usare le asserzioni anziché le eccezioni (vedere [uso delle asserzioni](/visualstudio/debugger/c-cpp-assertions)).

## <a name="kinds-of-exceptions"></a>Tipi di eccezioni

Il compilatore C++ Microsoft (MSVC) supporta tre tipi di gestione delle eccezioni:

- [C++gestione delle eccezioni](errors-and-exception-handling-modern-cpp.md)

   Per la maggior parte dei programmi C++, si dovrebbe utilizzare la gestione delle eccezioni C++, che è indipendente dai tipi e assicura che i distruttori di oggetti siano richiamati durante la rimozione dello stack.

- [Gestione strutturata delle eccezioni](structured-exception-handling-c-cpp.md)

   Windows fornisce il proprio meccanismo di eccezione, denominato SEH. Non è consigliato per la programmazione in MFC o in C++. Utilizzare SEH solo nei programmi C non MFC.

- [Eccezioni MFC](../mfc/exception-handling-in-mfc.md)

Usare l'opzione del compilatore [/eh](../build/reference/eh-exception-handling-model.md) per specificare il tipo di gestione delle eccezioni da usare in un progetto. C++ il valore predefinito è la gestione delle eccezioni. Non combinare i meccanismi di gestione degli errori; ad esempio non usare le eccezioni C++ con la gestione strutturata delle eccezioni. L'uso della gestione delle eccezioni C++ rende il codice più portabile e consente di gestire eccezioni di ogni tipo. Per ulteriori informazioni sugli svantaggi della gestione strutturata delle eccezioni, vedere [gestione delle eccezioni strutturata](structured-exception-handling-c-cpp.md). Per consigli su come combinare le macro C++ e le eccezioni MFC, vedere [eccezioni: utilizzo C++ di macro ed eccezioni MFC](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md).

## <a name="in-this-section"></a>In questa sezione

- [Procedure C++ consigliate moderne per le eccezioni e la gestione degli errori](errors-and-exception-handling-modern-cpp.md)

- [Come progettare per la sicurezza delle eccezioni](how-to-design-for-exception-safety.md)

- [Come interfacciarsi tra codice eccezionale e non eccezionale](how-to-interface-between-exceptional-and-non-exceptional-code.md)

- [Istruzioni try, catch e throw](try-throw-and-catch-statements-cpp.md)

- [Modalità di valutazione dei blocchi catch](how-catch-blocks-are-evaluated-cpp.md)

- [Eccezioni e rimozione dello stack](exceptions-and-stack-unwinding-in-cpp.md)

- [Specifiche di eccezione](exception-specifications-throw-cpp.md)

- [noexcept](noexcept-cpp.md)

- [Eccezioni C++ non gestite](unhandled-cpp-exceptions.md)

- [Combinazione di eccezioni C (strutturate) e C++](mixing-c-structured-and-cpp-exceptions.md)

- [Gestione delle eccezioni strutturata (SEH) (C++C/)](structured-exception-handling-c-cpp.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](cpp-language-reference.md)</br>
[Gestione delle eccezioni x64](../build/exception-handling-x64.md)</br>
[Gestione delle eccezioniC++(/CLI C++e/CX)](../extensions/exception-handling-cpp-component-extensions.md)
