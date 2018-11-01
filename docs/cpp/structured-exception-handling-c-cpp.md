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
ms.openlocfilehash: b77a218340399578e3c9428100476787e2e60b25
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50534563"
---
# <a name="structured-exception-handling-cc"></a>Structured Exception Handling (C/C++)

Gestione delle eccezioni strutturata (SEH) è un'estensione Microsoft C per gestire situazioni di codice eccezionale, ad esempio errori hardware, correttamente. Sebbene Windows e Visual C++ supportino SEH, è consigliabile usare Gestione delle eccezioni C++ conforme allo standard ISO perché rende il codice più portabile e flessibile. Tuttavia, per mantenere il codice esistente o per alcuni tipi di programmi, è comunque necessario usare SEH.

**Specifiche di Microsoft:**

## <a name="grammar"></a>Grammatica

*try-except-statement* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**try** *compound-statement* **except** **(** *espressione* **)** *compound-statement*

*try-finally-statement* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**try** *compound-statement* **finally** *compound-statement*

## <a name="remarks"></a>Note

Con SEH, è possibile garantire che le risorse, ad esempio i blocchi di memoria e i file vengano rilasciate correttamente se l'esecuzione viene interrotta in modo imprevisto. È anche possibile gestire problemi specifici, ad esempio memoria insufficiente, usando codice strutturato conciso che non si basa sul **goto** istruzioni o test complessi dei codici restituiti.

Le istruzioni try-except e try-finally a cui si fa riferimento in questo articolo sono estensioni Microsoft per il linguaggio C. Supportano la gestione delle eccezioni strutturata permettendo alle applicazioni di ottenere il controllo di un programma dopo eventi che altrimenti terminerebbero l'esecuzione. Anche se la gestione delle eccezioni strutturata può essere usata con file di origine C++, non è stata progettata in modo specifico per C++. Se si utilizza Gestione delle eccezioni Strutturata in un programma C++ che esegue la compilazione usando il [/EHa o /EHsc](../build/reference/eh-exception-handling-model.md) opzione, i distruttori per gli oggetti locali vengono chiamati, ma altri comportamenti di esecuzione potrebbero non essere quello previsto. Per informazioni generali, vedere l'esempio più avanti in questo articolo. Nella maggior parte dei casi, invece di gestione delle eccezioni Strutturata è consigliabile usare conforme allo standard ISO [gestione delle eccezioni C++](../cpp/try-throw-and-catch-statements-cpp.md), che supporta anche Visual C++. L'uso della gestione delle eccezioni C++ permette di assicurare una maggiore portabilità del codice e la gestione di qualsiasi tipo di eccezione.

Se si dispone di codice C che utilizza SEH, è possibile combinare, con codice C++ che usa la gestione delle eccezioni C++. Per informazioni, vedere [gestire le eccezioni strutturate in C++](../cpp/exception-handling-differences.md).

Sono disponibili due meccanismi per la gestione delle eccezioni strutturata:

- [Gestori di eccezioni](../cpp/writing-an-exception-handler.md), oppure **except** blocchi, di cui possono rispondere a eccezione o ignorarla.

- [Gestori di terminazione](../cpp/writing-a-termination-handler.md), oppure **finally** blocchi, che vengono sempre chiamati, se un'eccezione provoca la terminazione o No.

Questi due tipi di gestori sono distinti, ma sono strettamente correlati tramite un processo noto come "rimozione dello stack". Quando si verifica un'eccezione strutturata, Windows cerca il gestore di eccezioni installato più di recente che è attualmente attivo. Il gestore può procedere nei tre modi seguenti:

- Non riuscire a riconoscere l'eccezione e passare il controllo ad altri gestori.

- Riconoscere l'eccezione ma ignorarla.

- Riconoscere l'eccezione e gestirla.

È possibile che il gestore di eccezioni che riconosce l'eccezione non si trovi nella funzione che era in esecuzione quando si è verificata l'eccezione. In alcuni casi, potrebbe trattarsi di una funzione che si trova in una posizione molto più alta nello stack. La funzione attualmente in esecuzione e tutte le altre funzioni nel frame dello stack vengono terminate. Durante questo processo, lo stack viene "rimosso", ovvero le variabili locali statiche delle funzioni terminate vengono cancellate dallo stack.

Durante la rimozione dello stack, il sistema operativo chiama eventuali gestori di terminazione scritti per ogni funzione. Usando un gestore di terminazione, è possibile pulire le risorse che altrimenti rimarrebbero aperte a causa di una terminazione anomala. Se ci si trova una sezione critica, è possibile annullarla nel gestore di terminazione. Se il programma verrà arrestato, è possibile eseguire altre attività di manutenzione, ad esempio la chiusura e la rimozione di file temporanei.

## <a name="next-steps"></a>Passaggi successivi

- [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)

- [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)

- [Gestire le eccezioni strutturate in C++](../cpp/exception-handling-differences.md)

## <a name="example"></a>Esempio

Come indicato in precedenza, i distruttori per gli oggetti locali vengono chiamati se si Usa gestione delle eccezioni Strutturata in un programma C++ e compilarlo con i **/EHa** oppure **/EHsc** opzione. È tuttavia possibile che il comportamento durante l'esecuzione non corrisponda a quanto previsto se si usano anche eccezioni C++. Questo esempio illustra queste differenze di comportamento.

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

Se si usa **/EHsc** per compilare questo codice, ma la macro di controllo di test locale `CPPEX` è non definito, vi è alcuna esecuzione del `TestClass` distruttore e l'output sarà simile al seguente:

```Output
Triggering SEH exception
Executing SEH __except block
```

Se si usa **/EHsc** per compilare il codice e `CPPEX` viene definito utilizzando `/DCPPEX` (in modo che viene generata un'eccezione C++), il `TestClass` distruttore viene eseguito e l'output è simile al seguente:

```Output
Throwing C++ exception
Destroying TestClass!
Executing SEH __except block
```

Se si usa **/EHa** per compilare il codice, il `TestClass` distruttore viene eseguito indipendentemente dal fatto che è stata generata l'eccezione utilizzando `std::throw` o mediante gestione delle eccezioni Strutturata per attivare l'eccezione, vale a dire se `CPPEX` definito o No. L'output sarà analogo al seguente:

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
[Gli errori e la gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Structured Exception Handling (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms680657.aspx)
