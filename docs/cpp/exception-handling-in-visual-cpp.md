---
title: Exception handling in MSVC
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
# <a name="exception-handling-in-msvc"></a>Exception handling in MSVC

Un'eccezione è una condizione di errore, probabilmente non controllata dal programma, che impedisce al programma di proseguire il proprio percorso di esecuzione normale. Alcune operazioni, tra cui la creazione di oggetti, i file di input/output e le chiamate di funzione effettuate da altri moduli, possono dare origine a delle eccezioni anche quando il programma viene eseguito correttamente. Quando è affidabile, il codice prevede e gestisce le eccezioni. To detect logic errors, use assertions rather than exceptions (see [Using Assertions](/visualstudio/debugger/c-cpp-assertions)).

## <a name="kinds-of-exceptions"></a>Kinds of exceptions

The Microsoft C++ compiler (MSVC) supports three kinds of exception handling:

- [C++ exception handling](errors-and-exception-handling-modern-cpp.md)

   Per la maggior parte dei programmi C++, si dovrebbe utilizzare la gestione delle eccezioni C++, che è indipendente dai tipi e assicura che i distruttori di oggetti siano richiamati durante la rimozione dello stack.

- [Structured exception handling](structured-exception-handling-c-cpp.md)

   Windows fornisce il proprio meccanismo di eccezione, denominato SEH. Non è consigliato per la programmazione in MFC o in C++. Use SEH only in non-MFC C programs.

- [MFC exceptions](../mfc/exception-handling-in-mfc.md)

Use the [/EH](../build/reference/eh-exception-handling-model.md) compiler option to specify the type of exception handling to use in a project; C++ exception handling is the default. Non combinare i meccanismi di gestione degli errori; ad esempio non usare le eccezioni C++ con la gestione strutturata delle eccezioni. L'uso della gestione delle eccezioni C++ rende il codice più portabile e consente di gestire eccezioni di ogni tipo. For more information about the drawbacks of structured exception handling, see [Structured Exception Handling](structured-exception-handling-c-cpp.md). For advice about mixing MFC macros and C++ exceptions, see [Exceptions: Using MFC Macros and C++ Exceptions](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md).

## <a name="in-this-section"></a>In questa sezione

- [Modern C++ best practices for exceptions and error handling](errors-and-exception-handling-modern-cpp.md)

- [How to design for exception safety](how-to-design-for-exception-safety.md)

- [How to interface between exceptional and non-exceptional code](how-to-interface-between-exceptional-and-non-exceptional-code.md)

- [The try, catch, and throw Statements](try-throw-and-catch-statements-cpp.md)

- [Modalità di valutazione dei blocchi catch](how-catch-blocks-are-evaluated-cpp.md)

- [Exceptions and Stack Unwinding](exceptions-and-stack-unwinding-in-cpp.md)

- [Exception Specifications](exception-specifications-throw-cpp.md)

- [noexcept](noexcept-cpp.md)

- [Eccezioni C++ non gestite](unhandled-cpp-exceptions.md)

- [Combinazione di eccezioni C (strutturate) e C++](mixing-c-structured-and-cpp-exceptions.md)

- [Structured Exception Handling (SEH) (C/C++)](structured-exception-handling-c-cpp.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](cpp-language-reference.md)</br>
[Gestione delle eccezioni x64](../build/exception-handling-x64.md)</br>
[Exception Handling (C++/CLI and C++/CX)](../extensions/exception-handling-cpp-component-extensions.md)
