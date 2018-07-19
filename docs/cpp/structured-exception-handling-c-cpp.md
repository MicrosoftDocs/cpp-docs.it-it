---
title: Structured Exception Handling (C/C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- termination handlers [C++], handling exceptions in C++
- structured exception handling [C++]
- try-catch keyword [C++], exception handlers
- C++ exception handling, termination handlers
- try-catch keyword [C++], termination handlers
- C++ exception handling, exception handlers
ms.assetid: dd3b647d-c269-43a8-aab9-ad1458712976
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 64ff69a4ab75189dd069e774eb05266e6140ff77
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940495"
---
# <a name="structured-exception-handling-cc"></a>Structured Exception Handling (C/C++)
Anche se Windows e Visual C++ supportano la gestione delle eccezioni strutturata (SEH, Structured Exception Handling), è consigliabile usare la gestione delle eccezioni C++ conforme allo standard ISO, poiché rende il codice più portabile e flessibile. Tuttavia, nel codice esistente per tipi specifici di programmi, potrebbe essere necessario usare la gestione delle eccezioni strutturata.  
  
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
  
## <a name="grammar"></a>Grammatica  
 *try-except-statement* :  
  
 `__try` *Compound-statement*  
  
 `__except` ( `expression` ) *compound-statement*  
  
## <a name="remarks"></a>Note  
 La gestione delle eccezioni strutturata permette di assicurare che risorse quali i blocchi di memoria e i file siano corretti in caso di arresto imprevisto dell'esecuzione. È anche possibile gestire problemi specifici, ad esempio memoria insufficiente, usando codice strutturato conciso che non si basa sul **goto** istruzioni o test complessi dei codici restituiti.  
  
 Le istruzioni try-except e try-finally a cui si fa riferimento in questo articolo sono estensioni Microsoft per il linguaggio C. Supportano la gestione delle eccezioni strutturata permettendo alle applicazioni di ottenere il controllo di un programma dopo eventi che altrimenti terminerebbero l'esecuzione. Anche se la gestione delle eccezioni strutturata può essere usata con file di origine C++, non è stata progettata in modo specifico per C++. Se si utilizza Gestione delle eccezioni Strutturata in un programma C++ che esegue la compilazione usando il [/EH](../build/reference/eh-exception-handling-model.md) opzione, insieme ad alcuni modificatori, ovvero vengono chiamati i distruttori per gli oggetti locali ma altri comportamenti di esecuzione potrebbero non essere quello previsto. Per un esempio, vedere più avanti in questo articolo. Nella maggior parte dei casi, invece di gestione delle eccezioni Strutturata è consigliabile usare conforme allo standard ISO [gestione delle eccezioni C++](../cpp/try-throw-and-catch-statements-cpp.md), che supporta anche Visual C++. L'uso della gestione delle eccezioni C++ permette di assicurare una maggiore portabilità del codice e la gestione di qualsiasi tipo di eccezione.  
  
 Se sono disponibili moduli C che usano la gestione delle eccezioni strutturata, sarà possibile combinarli con moduli C++ che usano la gestione delle eccezioni C++. Per informazioni, vedere [differenze nella gestione eccezioni](../cpp/exception-handling-differences.md).  
  
 Sono disponibili due meccanismi per la gestione delle eccezioni strutturata:  
  
-   [Gestori di eccezioni](../cpp/writing-an-exception-handler.md), che possono rispondere a eccezione o ignorarla.  
  
-   [Gestori di terminazione](../cpp/writing-a-termination-handler.md), che vengono chiamati quando un'eccezione provoca la terminazione in un blocco di codice.  
  
 Questi due tipi di gestori sono distinti, ma sono strettamente correlati tramite un processo noto come "rimozione dello stack". Quando si verifica un'eccezione, Windows cerca il gestore di eccezioni installato più di recente e attualmente attivo. Il gestore può procedere nei tre modi seguenti:  
  
-   Non riuscire a riconoscere l'eccezione e passare il controllo ad altri gestori.  
  
-   Riconoscere l'eccezione ma ignorarla.  
  
-   Riconoscere l'eccezione e gestirla.  
  
 È possibile che il gestore di eccezioni che riconosce l'eccezione non si trovi nella funzione che era in esecuzione quando si è verificata l'eccezione. In alcuni casi, potrebbe trattarsi di una funzione che si trova in una posizione molto più alta nello stack. La funzione attualmente in esecuzione e tutte le altre funzioni nel frame dello stack vengono terminate. Durante questo processo, lo stack viene "rimosso", ovvero le variabili locali delle funzioni terminate, a meno che non sono **statici**, vengono cancellate dallo stack.  
  
 Durante la rimozione dello stack, il sistema operativo chiama eventuali gestori di terminazione scritti per ogni funzione. Usando un gestore di terminazione, è possibile pulire le risorse che altrimenti rimarrebbero aperte a causa di una terminazione anomala. Se ci si trova in una sezione critica, è possibile uscire nel gestore di terminazione. Se il programma verrà arrestato, è possibile eseguire altre attività di manutenzione, ad esempio la chiusura e la rimozione di file temporanei.  
  
 Per altre informazioni, vedere:  
  
-   [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)  
  
-   [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)  
  
-   [Uso della gestione strutturata delle eccezioni con C++](../cpp/using-structured-exception-handling-with-cpp.md)  
  
## <a name="example"></a>Esempio  
 Come indicato in precedenza, i distruttori per gli oggetti locali vengono chiamati se si Usa gestione delle eccezioni Strutturata in un programma C++ e compilarlo con i **/EH** opzione con determinati modificatori, ad esempio, **/EHsc** e **/EHa**. È tuttavia possibile che il comportamento durante l'esecuzione non corrisponda a quanto previsto se si usano anche eccezioni C++. L'esempio seguente illustra queste differenze di comportamento.  
  
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
  
 Se si usa **/EHsc** per compilare questo codice, ma il controllo di test locale `CPPEX` è non definito, vi è alcuna esecuzione del `TestClass` distruttore e l'output sarà simile al seguente:  
  
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
  
 Se si usa **/EHa** per compilare il codice, il `TestClass` distruttore viene eseguito indipendentemente dal fatto che è stata generata l'eccezione utilizzando `std::throw` o mediante gestione delle eccezioni Strutturata per attivare l'eccezione (`CPPEX` definito o meno). L'output sarà analogo al seguente:  
  
```Output  
Throwing C++ exception  
Destroying TestClass!  
Executing SEH __except block  
```  
  
 Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [\<exception>](../standard-library/exception.md)   
 [Gli errori e la gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)   
 [Structured Exception Handling (Windows)](http://msdn.microsoft.com/library/windows/desktop/ms680657.aspx)