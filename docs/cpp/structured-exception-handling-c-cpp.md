---
title: Structured Exception Handling (C/C++)
ms.date: 08/14/2018
helpviewer_keywords:
- termination handlers [C++], handling exceptions in C++
- structured exception handling [C++]
- try-catch keyword [C++], exception handlers
- C++ exception handling, termination handlers
- try-catch keyword [C++], termination handlers
- C++ exception handling, exception handlers
ms.assetid: dd3b647d-c269-43a8-aab9-ad1458712976
ms.openlocfilehash: 4555690476bc149687c680fc2baae53b96658a4e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498490"
---
# <a name="structured-exception-handling-cc"></a>Structured Exception Handling (C/C++)

Gestione delle eccezioni strutturata (SEH) è un'estensione Microsoft a C per gestire determinate situazioni di codice eccezionali, ad esempio errori hardware, normalmente. Sebbene Windows e Microsoft C++ supportino SEH, è consigliabile utilizzare la gestione delle eccezioni C++ standard ISO perché rende il codice più portabile e flessibile. Tuttavia, per mantenere il codice esistente o per determinati tipi di programmi, potrebbe essere necessario usare SEH.

**Specifico di Microsoft:**

## <a name="grammar"></a>Grammatica

*try-except-Statement* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__try** *compound-statement* **__except** **(** *expression* **)** *compound-statement*

*try-finally-Statement* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__try** *compound-statement* **__finally** *compound-statement*

## <a name="remarks"></a>Note

Con SEH è possibile verificare che le risorse quali blocchi di memoria e file vengano rilasciate correttamente se l'esecuzione viene terminata in modo imprevisto. È anche possibile gestire problemi specifici, ad esempio memoria insufficiente, usando codice strutturato conciso che non si basa su istruzioni **goto** o test elaborati dei codici restituiti.

Le istruzioni try-except e try-finally a cui si fa riferimento in questo articolo sono estensioni Microsoft per il linguaggio C. Supportano la gestione delle eccezioni strutturata permettendo alle applicazioni di ottenere il controllo di un programma dopo eventi che altrimenti terminerebbero l'esecuzione. Anche se la gestione delle eccezioni strutturata può essere usata con file di origine C++, non è stata progettata in modo specifico per C++. Se si usa SEH in un C++ programma compilato con l'opzione [/EHa o/EHsc](../build/reference/eh-exception-handling-model.md) , vengono chiamati i distruttori per gli oggetti locali, ma il comportamento di esecuzione potrebbe non essere quello previsto. Per un'illustrazione, vedere l'esempio più avanti in questo articolo. Nella maggior parte dei casi, anziché SEH è consigliabile usare la [ C++ gestione delle eccezioni](../cpp/try-throw-and-catch-statements-cpp.md)standard ISO, supportata anche dal C++ compilatore Microsoft. L'uso della gestione delle eccezioni C++ permette di assicurare una maggiore portabilità del codice e la gestione di qualsiasi tipo di eccezione.

Se si dispone di codice C che usa SEH, è possibile combinarlo C++ con codice che C++ usa la gestione delle eccezioni. Per informazioni, vedere [gestire le eccezioni strutturate C++in ](../cpp/exception-handling-differences.md).

Sono disponibili due meccanismi per la gestione delle eccezioni strutturata:

- [Gestori di eccezioni](../cpp/writing-an-exception-handler.md), o blocchi **__except** , che possono rispondere o ignorare l'eccezione.

- I [gestori](../cpp/writing-a-termination-handler.md)di terminazione, o blocchi **__finally** , che vengono sempre chiamati, se un'eccezione causa la terminazione o meno.

Questi due tipi di gestori sono distinti, ma sono strettamente correlati tramite un processo noto come "rimozione dello stack". Quando si verifica un'eccezione strutturata, Windows cerca il gestore di eccezioni installato più di recente attualmente attivo. Il gestore può procedere nei tre modi seguenti:

- Non riuscire a riconoscere l'eccezione e passare il controllo ad altri gestori.

- Riconoscere l'eccezione ma ignorarla.

- Riconoscere l'eccezione e gestirla.

È possibile che il gestore di eccezioni che riconosce l'eccezione non si trovi nella funzione che era in esecuzione quando si è verificata l'eccezione. In alcuni casi, potrebbe trattarsi di una funzione che si trova in una posizione molto più alta nello stack. La funzione attualmente in esecuzione e tutte le altre funzioni nel frame dello stack vengono terminate. Durante questo processo, lo stack è "Unwound;", ovvero le variabili locali non statiche delle funzioni terminate vengono cancellate dallo stack.

Durante la rimozione dello stack, il sistema operativo chiama eventuali gestori di terminazione scritti per ogni funzione. Usando un gestore di terminazione, è possibile pulire le risorse che altrimenti rimarrebbero aperte a causa di una terminazione anomala. Se è stata immessa una sezione critica, è possibile chiuderla nel gestore di terminazione. Se il programma verrà arrestato, è possibile eseguire altre attività di manutenzione, ad esempio la chiusura e la rimozione di file temporanei.

## <a name="next-steps"></a>Passaggi successivi

- [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)

- [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)

- [Gestire le eccezioni strutturate in C++](../cpp/exception-handling-differences.md)

## <a name="example"></a>Esempio

Come indicato in precedenza, i distruttori per gli oggetti locali vengono chiamati se si usa SEH C++ in un programma e lo si compila con l'opzione **/EHA** o **/EHsc** . È tuttavia possibile che il comportamento durante l'esecuzione non corrisponda a quanto previsto se si usano anche eccezioni C++. In questo esempio vengono illustrate queste differenze di comportamento.

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

Se si usa **/EHsc** per compilare il codice, ma la macro `CPPEX` del controllo test locale non è definita, non viene eseguita `TestClass` alcuna esecuzione del distruttore e l'output è simile al seguente:

```Output
Triggering SEH exception
Executing SEH __except block
```

Se si usa **/EHsc** per compilare il codice e `CPPEX` viene definito usando `/DCPPEX` (in modo che venga C++ generata un'eccezione), il `TestClass` distruttore viene eseguito e l'output è simile al seguente:

```Output
Throwing C++ exception
Destroying TestClass!
Executing SEH __except block
```

Se si usa **/EHA** per compilare il codice, il `TestClass` distruttore viene eseguito indipendentemente dal fatto che l'eccezione sia `std::throw` stata generata tramite o usando SEH per attivare l'eccezione, ovvero se `CPPEX` definito o meno. L'output sarà analogo al seguente:

```Output
Throwing C++ exception
Destroying TestClass!
Executing SEH __except block
```

Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[\<exception>](../standard-library/exception.md)<br/>
[Errori e gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Gestione strutturata delle eccezioni (Windows)](/windows/win32/debug/structured-exception-handling)
