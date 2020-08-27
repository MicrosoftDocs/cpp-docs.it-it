---
title: Structured Exception Handling (C/C++)
description: Panoramica della gestione strutturata delle eccezioni in Microsoft C/C++.
ms.date: 08/24/2020
helpviewer_keywords:
- termination handlers [C++], handling exceptions in C++
- structured exception handling [C++]
- try-catch keyword [C++], exception handlers
- C++ exception handling, termination handlers
- try-catch keyword [C++], termination handlers
- C++ exception handling, exception handlers
ms.assetid: dd3b647d-c269-43a8-aab9-ad1458712976
ms.openlocfilehash: 142e89bc82adbe7938e8825029908e814df6055c
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898630"
---
# <a name="structured-exception-handling-cc"></a>Structured Exception Handling (C/C++)

Gestione delle eccezioni strutturata (SEH) è un'estensione Microsoft a C per gestire determinate situazioni di codice eccezionali, ad esempio errori hardware, normalmente. Sebbene Windows e Microsoft C++ supportino SEH, è consigliabile utilizzare la gestione delle eccezioni C++ standard ISO. Rende il codice più portabile e flessibile. Tuttavia, per mantenere il codice esistente o per determinati tipi di programmi, potrebbe essere necessario usare SEH.

**Specifico di Microsoft:**

## <a name="grammar"></a>Grammatica

> *`try-except-statement`* :<br/>
> &emsp;**`__try`** *`compound-statement`* **`__except`** **`(`** *`expression`* **`)`** *`compound-statement`*
>
> *`try-finally-statement`* :<br/>
> &emsp;**`__try`** *`compound-statement`* **`__finally`** *`compound-statement`*

## <a name="remarks"></a>Osservazioni

Con SEH è possibile verificare che le risorse, ad esempio i blocchi di memoria e i file, vengano rilasciate correttamente se l'esecuzione viene terminata in modo imprevisto. È anche possibile gestire problemi specifici, ad esempio memoria insufficiente, usando codice strutturato conciso che non si basa su **`goto`** istruzioni o test elaborati dei codici restituiti.

Le `try-except` istruzioni e a cui si fa `try-finally` riferimento in questo articolo sono estensioni Microsoft per il linguaggio C. Supportano la gestione delle eccezioni strutturata permettendo alle applicazioni di ottenere il controllo di un programma dopo eventi che altrimenti terminerebbero l'esecuzione. Anche se la gestione delle eccezioni strutturata può essere usata con file di origine C++, non è stata progettata in modo specifico per C++. Se si usa SEH in un programma C++ compilato con l'opzione [ `/EHa` o `/EHsc` ](../build/reference/eh-exception-handling-model.md) , i distruttori per gli oggetti locali vengono chiamati, ma il comportamento di esecuzione potrebbe non essere quello previsto. Per un'illustrazione, vedere l'esempio più avanti in questo articolo. Nella maggior parte dei casi, anziché SEH è consigliabile utilizzare la [gestione delle eccezioni c++](../cpp/try-throw-and-catch-statements-cpp.md)standard ISO, supportata anche dal compilatore Microsoft c++. L'uso della gestione delle eccezioni C++ permette di assicurare una maggiore portabilità del codice e la gestione di qualsiasi tipo di eccezione.

Se si dispone di codice C che usa SEH, è possibile combinarlo con codice C++ che usa la gestione delle eccezioni C++. Per informazioni, vedere [gestire le eccezioni strutturate in C++](../cpp/exception-handling-differences.md).

Sono disponibili due meccanismi per la gestione delle eccezioni strutturata:

- [Gestori di eccezioni](../cpp/writing-an-exception-handler.md), o **`__except`** blocchi, che possono rispondere o ignorare l'eccezione.

- I [gestori di terminazione](../cpp/writing-a-termination-handler.md), o **`__finally`** blocchi, che vengono sempre chiamati, se un'eccezione causa la terminazione o meno.

Questi due tipi di gestori sono distinti, ma sono strettamente correlati tramite un processo noto come *rimozione dello stack*. Quando si verifica un'eccezione strutturata, Windows cerca il gestore di eccezioni installato più di recente attualmente attivo. Il gestore può procedere nei tre modi seguenti:

- Non riuscire a riconoscere l'eccezione e passare il controllo ad altri gestori.

- Riconoscere l'eccezione ma ignorarla.

- Riconoscere l'eccezione e gestirla.

È possibile che il gestore di eccezioni che riconosce l'eccezione non si trovi nella funzione che era in esecuzione quando si è verificata l'eccezione. Potrebbe trovarsi in una funzione molto più in alto nello stack. La funzione attualmente in esecuzione e tutte le altre funzioni nel frame dello stack vengono terminate. Durante questo processo, lo stack viene *rimosso*. Ovvero le variabili locali non statiche delle funzioni terminate vengono cancellate dallo stack.

Durante la rimozione dello stack, il sistema operativo chiama eventuali gestori di terminazione scritti per ogni funzione. Utilizzando un gestore di terminazione, si puliscono le risorse che altrimenti rimarranno aperte a causa di una chiusura anomala. Se è stata immessa una sezione critica, è possibile chiuderla nel gestore di terminazione. Quando il programma verrà chiuso, è possibile eseguire altre attività di manutenzione, ad esempio la chiusura e la rimozione di file temporanei.

## <a name="next-steps"></a>Passaggi successivi

- [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)

- [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)

- [Gestire le eccezioni strutturate in C++](../cpp/exception-handling-differences.md)

## <a name="example"></a>Esempio

Come affermato in precedenza, i distruttori per gli oggetti locali vengono chiamati se si usa SEH in un programma C++ e lo si compila con l' **`/EHa`** **`/EHsc`** opzione o. Tuttavia, il comportamento durante l'esecuzione potrebbe non essere quello previsto se si usano anche eccezioni C++. In questo esempio vengono illustrate queste differenze di comportamento.

```cpp
#include <stdio.h>
#include <Windows.h>
#include <exception>

class TestClass
{
public:
    ~TestClass()
    {
        printf("Destroying TestClass!\r\n");
    }
};

__declspec(noinline) void TestCPPEX()
{
#ifdef CPPEX
    printf("Throwing C++ exception\r\n");
    throw std::exception("");
#else
    printf("Triggering SEH exception\r\n");
    volatile int *pInt = 0x00000000;
    *pInt = 20;
#endif
}

__declspec(noinline) void TestExceptions()
{
    TestClass d;
    TestCPPEX();
}

int main()
{
    __try
    {
        TestExceptions();
    }
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        printf("Executing SEH __except block\r\n");
    }

    return 0;
}
```

Se si usa **`/EHsc`** per compilare il codice, ma la macro del controllo test locale `CPPEX` non è definita, il `TestClass` distruttore non viene eseguito. L'output sarà simile al seguente:

```Output
Triggering SEH exception
Executing SEH __except block
```

Se si usa **`/EHsc`** per compilare il codice e `CPPEX` viene definito usando `/DCPPEX` (in modo che venga generata un'eccezione C++), il `TestClass` distruttore viene eseguito e l'output è simile al seguente:

```Output
Throwing C++ exception
Destroying TestClass!
Executing SEH __except block
```

Se si usa **`/EHa`** per compilare il codice, il `TestClass` distruttore esegue se l'eccezione è stata generata usando `std::throw` o usando SEH per attivare l'eccezione. Ovvero, se `CPPEX` è definito o meno. L'output sarà simile al seguente:

```Output
Throwing C++ exception
Destroying TestClass!
Executing SEH __except block
```

Per ulteriori informazioni, vedere [ `/EH` (modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md).

**FINE specifica di Microsoft**

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[`<exception>`](../standard-library/exception.md)<br/>
[Errori e gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Gestione strutturata delle eccezioni (Windows)](/windows/win32/debug/structured-exception-handling)
