---
title: "Gestione strutturata delle eccezioni (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione delle eccezioni di C++, gestori eccezioni"
  - "gestione delle eccezioni di C++, gestori di terminazione"
  - "gestione eccezioni strutturata"
  - "gestori di terminazione, gestione di eccezioni in C++"
  - "try-catch (parola chiave) [C++], gestori eccezioni"
  - "try-catch (parola chiave) [C++], gestori di terminazione"
ms.assetid: dd3b647d-c269-43a8-aab9-ad1458712976
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione strutturata delle eccezioni (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Anche se Windows e Visual C\+\+ supportano la gestione delle eccezioni strutturata \(SEH, Structured Exception Handling\), è consigliabile usare la gestione delle eccezioni C\+\+ conforme allo standard ISO, poiché rende il codice più portabile e flessibile.  Tuttavia, nel codice esistente per tipi specifici di programmi, potrebbe essere necessario usare la gestione delle eccezioni strutturata.  
  
## Sezione specifica Microsoft  
  
## Grammatica  
 *try\-except\-statement*:  
  
 `__try` *compound\-statement*  
  
 `__except` \( `expression` \) *compound\-statement*  
  
## Note  
 La gestione delle eccezioni strutturata permette di assicurare che risorse quali i blocchi di memoria e i file siano corretti in caso di arresto imprevisto dell'esecuzione.  È anche possibile gestire problemi specifici, ad esempio la memoria insufficiente, usando codice strutturato conciso che non si basa su istruzioni `goto` o test complessi dei codici restituiti.  
  
 Le istruzioni try\-except e try\-finally a cui si fa riferimento in questo articolo sono estensioni Microsoft per il linguaggio C.  Supportano la gestione delle eccezioni strutturata permettendo alle applicazioni di ottenere il controllo di un programma dopo eventi che altrimenti terminerebbero l'esecuzione.  Anche se la gestione delle eccezioni strutturata può essere usata con file di origine C\+\+, non è stata progettata in modo specifico per C\+\+.  Se si usa la gestione delle eccezioni strutturata in un programma C\+\+ compilato usando l'opzione [\/EH](../build/reference/eh-exception-handling-model.md), insieme ad alcuni modificatori, verranno chiamati i distruttori per gli oggetti locali ma è possibile che altri comportamenti di esecuzione non corrispondano a quanto previsto.  Per un esempio, vedere più avanti in questo articolo. Nella maggior parte dei casi, invece della gestione delle eccezioni strutturata è consigliabile usare la [gestione delle eccezioni C\+\+](../cpp/try-throw-and-catch-statements-cpp.md) conforme allo standard ISO, supportata anche da Visual C\+\+.  L'uso della gestione delle eccezioni C\+\+ permette di assicurare una maggiore portabilità del codice e la gestione di qualsiasi tipo di eccezione.  
  
 Se sono disponibili moduli C che usano la gestione delle eccezioni strutturata, sarà possibile combinarli con moduli C\+\+ che usano la gestione delle eccezioni C\+\+.  Per informazioni, vedere [Differenze nella gestione eccezioni](../cpp/exception-handling-differences.md).  
  
 Sono disponibili due meccanismi per la gestione delle eccezioni strutturata:  
  
-   I [gestori eccezioni](../cpp/writing-an-exception-handler.md), che possono rispondere all'eccezione o ignorarla.  
  
-   I [gestori di terminazione](../cpp/writing-a-termination-handler.md), chiamati quando un'eccezione provoca la terminazione in un blocco di codice.  
  
 Questi due tipi di gestori sono distinti, ma sono strettamente correlati tramite un processo noto come "rimozione dello stack". Quando si verifica un'eccezione, Windows cerca il gestore di eccezioni installato più di recente e attualmente attivo.  Il gestore può procedere nei tre modi seguenti:  
  
-   Non riuscire a riconoscere l'eccezione e passare il controllo ad altri gestori.  
  
-   Riconoscere l'eccezione ma ignorarla.  
  
-   Riconoscere l'eccezione e gestirla.  
  
 È possibile che il gestore di eccezioni che riconosce l'eccezione non si trovi nella funzione che era in esecuzione quando si è verificata l'eccezione.  In alcuni casi, potrebbe trattarsi di una funzione che si trova in una posizione molto più alta nello stack.  La funzione attualmente in esecuzione e tutte le altre funzioni nel frame dello stack vengono terminate.  Durante questo processo, lo stack viene "rimosso", ovvero le variabili locali delle funzioni terminate, a meno che non siano `static`, vengono cancellate dallo stack.  
  
 Durante la rimozione dello stack, il sistema operativo chiama eventuali gestori di terminazione scritti per ogni funzione.  Usando un gestore di terminazione, è possibile pulire le risorse che altrimenti rimarrebbero aperte a causa di una terminazione anomala.  Se ci si trova in una sezione critica, è possibile uscire nel gestore di terminazione.  Se il programma verrà arrestato, è possibile eseguire altre attività di manutenzione, ad esempio la chiusura e la rimozione di file temporanei.  
  
 Per altre informazioni, vedere:  
  
-   [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)  
  
-   [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)  
  
-   [Utilizzo della gestione strutturata delle eccezioni con C\+\+](../cpp/using-structured-exception-handling-with-cpp.md)  
  
## Esempio  
 Come indicato in precedenza, i distruttori per gli oggetti locali vengono chiamati se si usa la gestione delle eccezioni strutturata in un programma C\+\+ e lo si compila usando l'opzione **\/EH** con determinati modificatori, ad esempio **\/EHsc** e **\/EHa**.  È tuttavia possibile che il comportamento durante l'esecuzione non corrisponda a quanto previsto se si usano anche eccezioni C\+\+.  L'esempio seguente illustra queste differenze di comportamento.  
  
```cpp  
#include <stdio.h>  
#include <Windows.h>  
#include <exception>  
  
class TestClass  
{  
public:  
    ~TestClass()  
    {  
        printf("Destroying TestClass!\r\n");  
    }  
};  
  
__declspec(noinline) void TestCPPEX()  
{  
#ifdef CPPEX  
    printf("Throwing C++ exception\r\n");  
    throw std::exception("");  
#else  
    printf("Triggering SEH exception\r\n");  
    volatile int *pInt = 0x00000000;  
    *pInt = 20;  
#endif  
}  
  
__declspec(noinline) void TestExceptions()  
{  
    TestClass d;  
    TestCPPEX();  
}  
  
int main()  
{  
    __try  
    {  
        TestExceptions();  
    }  
    __except(EXCEPTION_EXECUTE_HANDLER)  
    {  
        printf("Executing SEH __except block\r\n");  
    }  
  
    return 0;  
}  
  
```  
  
 Se si usa **\/EHsc** per compilare il codice ma il controllo di testo locale `CPPEX` non è definito, il distruttore `TestClass` non verrà eseguito e l'output sarà analogo al seguente:  
  
  **Triggering SEH exception**  
**Executing SEH \_\_except block** Se si usa **\/EHsc** per compilare il codice e `CPPEX` viene definito usando `/DCPPEX` \(in modo che venga generata un'eccezione C\+\+\), il distruttore `TestClass` verrà eseguito e l'output sarà analogo al seguente:  
  
  **Throwing C\+\+ exception**  
**Destroying TestClass\!  Executing SEH \_\_except block**  Se si usa **\/EHa** per compilare il codice, il distruttore `TestClass` verrà eseguito indipendentemente dalla generazione dell'eccezione mediante `std::throw` o mediante la gestione delle eccezioni strutturata \(`CPPEX` definito o non definito\).  L'output sarà analogo al seguente:  
  
  **Throwing C\+\+ exception**  
**Destroying TestClass\!  Executing SEH \_\_except block**  Per altre informazioni, vedere [\/EH \(Modello di gestione delle eccezioni\)](../build/reference/eh-exception-handling-model.md).  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [\<exception\>](../standard-library/exception.md)   
 [Gestione di errori ed eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)   
 [Gestione strutturata delle eccezioni \(Windows\)](http://msdn.microsoft.com/library/windows/desktop/ms680657.aspx)