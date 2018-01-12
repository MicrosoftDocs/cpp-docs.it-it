---
title: Il trasferimento delle eccezioni tra thread | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- std::current_exception
- transporting exceptions between threads
- std::copy_exception
- exception_ptr
- std::exception_ptr
- std::rethrow_exception
- current_exception
- transport exceptions between threads
- copy_exception
- rethrow_exception
- move exceptions between threads
ms.assetid: 5c95d57b-acf5-491f-8122-57c5df0edd98
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 11cfed55ce872fde3a2f20a1b8f01a371857b374
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="transporting-exceptions-between-threads"></a>Trasporto delle eccezioni tra thread
Visual C++ supporta *trasferimento di un'eccezione* da un thread a altro. Il trasferimento delle eccezioni consente di rilevare un'eccezione in un thread e di fare in modo che sembri generata da un altro thread. È ad esempio possibile utilizzare questa funzionalità per scrivere un'applicazione multithreading in cui il thread principale gestisce tutte le eccezioni generate dai thread secondari. Il trasferimento delle eccezioni è utile soprattutto agli sviluppatori che intendono creare sistemi o librerie di programmazione parallela. Per implementare il trasferimento delle eccezioni, Visual C++ fornisce il [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) tipo e il [current_exception](../standard-library/exception-functions.md#current_exception), [rethrow_exception](../standard-library/exception-functions.md#rethrow_exception), e [make_ exception_ptr](../standard-library/exception-functions.md#make_exception_ptr) funzioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace std   
{  
   typedef unspecified exception_ptr;   
   exception_ptr current_exception();  
   void rethrow_exception(exception_ptr p);  
   template<class E>   
       exception_ptr make_exception_ptr(E e) noexcept;  
}  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`unspecified`|Classe interna non specificata utilizzata per implementare il tipo `exception_ptr`.|  
|`p`|Oggetto `exception_ptr` che fa riferimento a un'eccezione.|  
|`E`|Classe che rappresenta un'eccezione.|  
|`e`|Istanza della classe del parametro `E`.|  
  
## <a name="return-value"></a>Valore restituito  
 La funzione `current_exception` restituisce un oggetto `exception_ptr` che fa riferimento all'eccezione in corso. Se non è in corso alcuna eccezione, la funzione restituisce un oggetto `exception_ptr` non associato ad alcuna eccezione.  
  
 La funzione `make_exception_ptr` restituisce un oggetto `exception_ptr` che fa riferimento all'eccezione specificata dal parametro `e`.  
  
## <a name="remarks"></a>Note  
  
## <a name="scenario"></a>Scenario  
 Si supponga di voler creare un'applicazione scalabile per gestire una quantità di lavoro variabile. Per raggiungere questo obbiettivo, progettare un'applicazione multithreading in cui un thread principale iniziale crea il numero di thread secondari necessari a svolgere il lavoro. I thread secondari aiutano il thread principale a gestire le risorse, a bilanciare i carichi e a migliorare la velocità effettiva. Distribuendo il lavoro, l'applicazione multithreading può offrire prestazioni migliori di un'applicazione a thread singolo.  
  
 Tuttavia, se un thread secondario genera un'eccezione, quest'ultima dovrà essere gestita dal thread principale. Questo perché si desidera che l'applicazione gestisca le eccezioni in modo coerente e unificato, indipendentemente dal numero di thread secondari.  
  
## <a name="solution"></a>Soluzione  
 Per gestire lo scenario precedente, il linguaggio C++ standard supporta il trasferimento di un'eccezione tra thread. Se un thread secondario genera un'eccezione, tale eccezione diventa il *eccezione corrente*. Per analogia con il mondo reale, l'eccezione corrente viene detto *in fase di trasferimento*. L'eccezione corrente è in corso dal momento in cui viene generata fino a quando il gestore non la rileva e non la restituisce.  
  
 Il thread secondario può rilevare l'eccezione corrente in un blocco `catch`, quindi chiama la funzione `current_exception` per archiviare l'eccezione in un oggetto `exception_ptr`. L'oggetto `exception_ptr` deve essere disponibile al thread secondario e al thread principale. Ad esempio, l'oggetto `exception_ptr` può essere una variabile globale il cui accesso è controllato da un elemento mutex. Il termine *trasferire un'eccezione* significa che un'eccezione in un thread può essere convertita in un form che è possibile accedere da un altro thread.  
  
 Successivamente, il thread principale chiama la funzione `rethrow_exception`, la quale estrae e quindi genera un'eccezione dall'oggetto `exception_ptr`. Quando viene generata un'eccezione, quest'ultima diventa l'eccezione corrente nel thread principale. Ciò significa che l'eccezione sembra avere origine dal thread principale.  
  
 Infine, il thread principale può intercettare l'eccezione corrente in un blocco `catch` e quindi elaborarla o generarla in un gestore di eccezioni di livello superiore. In alternativa, il thread principale può ignorare l'eccezione e consentire il completamento del processo.  
  
 La maggior parte delle applicazioni non consentono il trasferimento delle eccezioni tra i thread. Questa funzionalità è utile in un sistema di calcolo parallelo perché consente la ripartizione del lavoro tra thread secondari, processori o core. In un ambiente di calcolo parallelo, un thread singolo dedicato può gestire tutte le eccezioni dai thread secondari e presentare un modello di gestione delle eccezioni coerente per qualsiasi applicazione.  
  
 Per ulteriori informazioni sulla proposta del comitato di standardizzazione del linguaggio C++, cercare in Internet il documento numero N2179, relativo al supporto per il trasferimento delle eccezioni tra thread.  
  
## <a name="exception-handling-models-and-compiler-options"></a>Modelli di gestione delle eccezioni e opzioni del compilatore  
 Il modello di gestione delle eccezioni dell'applicazione determina se può intercettare e trasferire un'eccezione. Visual C++ supporta tre modelli per la gestione delle eccezioni C++, delle eccezioni strutturate (SEH) e delle eccezioni CLR (Common Language Runtime). Utilizzare il [/EH](../build/reference/eh-exception-handling-model.md) e [/clr](../build/reference/clr-common-language-runtime-compilation.md) opzioni del compilatore per specificare il modello di gestione delle eccezioni dell'applicazione.  
  
 Solo la seguente combinazione di opzioni del compilatore e di istruzioni di programmazione possono trasferire un'eccezione. Altre combinazioni non consentono l'intercettazione delle eccezioni oppure ne consentono l'intercettazione ma non il trasferimento.  
  
-   Il **/EHa** l'opzione del compilatore e `catch` istruzione consentono il trasferimento delle eccezioni SEH e C++.  
  
-   Il **/EHa**, **/EHs**, e **/EHsc** opzioni del compilatore e `catch` istruzione consentono il trasferimento delle eccezioni C++.  
  
-   Il **/CLR** o **/CLR: pure** l'opzione del compilatore e `catch` istruzione consentono il trasferimento delle eccezioni C++. Il **/CLR** opzioni del compilatore implicano la specifica del **/EHa** opzione. Si noti che il compilatore non supporta il trasferimento delle eccezioni gestite. Infatti, le eccezioni gestite, che derivano dal [classe System. Exception](../standard-library/exception-class.md), sono già oggetti che è possibile spostare tra thread mediante le funzionalità di common language runtime.  
  
    > [!IMPORTANT]
    >  È consigliabile specificare il **/EHsc** opzione del compilatore e catch solo le eccezioni C++. Si espone a una minaccia alla sicurezza, se si utilizza il **/EHa** o **/CLR** l'opzione del compilatore e un **catch** istruzione con i puntini di sospensione  *dichiarazione di eccezione* (`catch(...)`). Probabilmente intende utilizzare l'istruzione `catch` per acquisire poche eccezioni specifiche. L'istruzione `catch(...)`, tuttavia, acquisisce tutte le eccezioni C++ e SEH, incluse quelle impreviste che potrebbero essere irreversibili. Se si ignora o si gestisce in modo non corretto un'eccezione imprevista, del codice dannoso potrebbe sfruttare questa opportunità per compromettere la sicurezza del programma.  
  
## <a name="usage"></a>Utilizzo  
 Nelle sezioni seguenti viene descritto come trasferire le eccezioni utilizzando la `exception_ptr` , tipo e il `current_exception`, `rethrow_exception`, e `make_exception_ptr` funzioni.  
  
### <a name="exceptionptr-type"></a>Tipo exception_ptr  
 Utilizzare un oggetto `exception_ptr` per fare riferimento all'eccezione corrente o a un'istanza di un'eccezione definita dall'utente. Nell'implementazione Microsoft, un'eccezione è rappresentata da una struttura [EXCEPTION_RECORD](http://msdn.microsoft.com/library/windows/desktop/aa363082). Ogni oggetto `exception_ptr` include un campo di riferimento all'eccezione che punta a una copia della struttura `EXCEPTION_RECORD` che rappresenta l'eccezione.  
  
 Quando si dichiara una variabile `exception_ptr`, la variabile non è associata ad alcuna eccezione. Ciò significa che il campo di riferimento all'eccezione è NULL. Questo oggetto `exception_ptr` è denominato *null exception_ptr*.  
  
 Utilizzare la funzione `current_exception` o `make_exception_ptr` per assegnare un'eccezione a un oggetto `exception_ptr`. Quando si assegna un'eccezione a una variabile `exception_ptr`, il campo di riferimento all'eccezione punta a una copia dell'eccezione. Se la memoria disponibile non è sufficiente per consentire la copia dell'eccezione, il campo di riferimento all'eccezione punta a una copia di un'eccezione [std::bad_alloc](../standard-library/bad-alloc-class.md). Se il `current_exception` o `make_exception_ptr` funzione non è possibile copiare l'eccezione per qualsiasi motivo, le chiamate di funzione di [terminare](../c-runtime-library/reference/terminate-crt.md) funzione di terminazione del processo corrente.  
  
 Malgrado il nome, un oggetto `exception_ptr` non è un puntatore. Non obbedisce alla semantica dei puntatori e non può essere utilizzato con gli operatori di accesso ai membri del puntatore (`->`) o agli operatori di riferimento indiretto (*). L'oggetto `exception_ptr` non dispone di membri dati pubblici o di funzioni membro.  
  
 **Confronti:**  
  
 È possibile utilizzare gli operatori uguale (`==`) e non uguale (`!=`) per confrontare due oggetti `exception_ptr`. Gli operatori non confrontano il valore binario (schema di bit) delle strutture `EXCEPTION_RECORD` che rappresentano le eccezioni. Viceversa, gli operatori confrontano gli indirizzi del campo di riferimento all'eccezione degli oggetti `exception_ptr`. Di conseguenza, l'elemento `exception_ptr` Null e il valore NULL vengono considerati uguali.  
  
### <a name="currentexception-function"></a>Funzione current_exception  
 Chiamare la funzione `current_exception` in un blocco `catch`. Se è in corso un'eccezione e il blocco `catch` è in grado di intercettare l'eccezione, la funzione `current_exception` restituisce un oggetto `exception_ptr` che fa riferimento all'eccezione. In caso contrario, la funzione restituisce un oggetto `exception_ptr` Null.  
  
 **Dettagli:**  
  
 La funzione `current_exception` acquisisce l'eccezione in corso, indipendentemente dal fatto che l'istruzione `catch` specifichi o meno un'istruzione [exception-declaration](../cpp/try-throw-and-catch-statements-cpp.md).  
  
 Il distruttore dell'eccezione corrente viene chiamato alla fine del blocco `catch` se non si rigenera l'eccezione. Tuttavia, anche se si chiama la funzione `current_exception` nel distruttore, la funzione restituisce un oggetto `exception_ptr` che fa riferimento all'eccezione corrente.  
  
 Le chiamate successive alla funzione `current_exception` restituiscono oggetti `exception_ptr` che fanno riferimento a copie diverse dell'eccezione corrente. Di conseguenza, gli oggetti vengono considerati diversi perché fanno riferimento a copie diverse, anche se le copie presentano lo stesso valore binario.  
  
 **Eccezioni SEH:**  
  
 Se si utilizza il **/EHa** l'opzione del compilatore, è possibile intercettare un'eccezione SEH in C++ `catch` blocco. La funzione `current_exception` restituisce un oggetto `exception_ptr` che fa riferimento all'eccezione SEH. E `rethrow_exception` funzione genera l'eccezione SEH, se si chiama con thetransported `exception_ptr` oggetto come relativo argomento.  
  
 La funzione `current_exception` restituisce un elemento `exception_ptr` Null se viene chiamata in un gestore di terminazione `__finally` SEH, in un gestore di eccezioni `__except` o nell'espressione filtro `__except`.  
  
 Un'eccezione trasferita non supporta le eccezioni annidate. Si verifica un'eccezione annidata quando viene generata un'altra eccezione mentre è in corso la gestione di un'eccezione. Se si intercetta un'eccezione annidata, il membro dati `EXCEPTION_RECORD.ExceptionRecord` punta a una catena di strutture `EXCEPTION_RECORD` che descrivono le eccezioni associate. La funzione `current_exception` non supporta le eccezioni annidate poiché restituisce un oggetto `exception_ptr` il cui membro dati `ExceptionRecord` è azzerato.  
  
 Se si intercetta un'eccezione SEH, è necessario gestire la memoria a cui fa riferimento un puntatore qualsiasi nella matrice del membro dati `EXCEPTION_RECORD.ExceptionInformation`. È necessario garantire che la memoria sia valida per tutta la durata dell'oggetto `exception_ptr` corrispondente e che la memoria venga liberata quando l'oggetto `exception_ptr` viene eliminato.  
  
 È possibile utilizzare funzioni di conversione di eccezioni strutturate (SE) con la funzionalità di trasferimento delle eccezioni. Se un'eccezione SEH viene convertita in eccezione C++, la funzione `current_exception` restituisce `exception_ptr` che fa riferimento all'eccezione convertita e non all'eccezione SEH originale. La funzione `rethrow_exception` genererà l'eccezione convertita, non l'eccezione originale. Per ulteriori informazioni sulle funzioni di conversione SE vedere [set_se_translator](../c-runtime-library/reference/set-se-translator.md).  
  
### <a name="rethrowexception-function"></a>Funzione rethrow_exception  
 Dopo aver archiviato un'eccezione intercettata in un oggetto `exception_ptr`, il thread principale può elaborare l'oggetto. Nel thread principale, chiamare la funzione `rethrow_exception` insieme all'oggetto `exception_ptr` come suo argomento. La funzione `rethrow_exception` estrae l'eccezione dall'oggetto `exception_ptr`, quindi genera l'eccezione nel contesto del thread principale. Se il `p` parametro il `rethrow_exception` funzione è un valore null `exception_ptr`, la funzione genera [std:: bad_exception](../standard-library/bad-exception-class.md).  
  
 L'eccezione estratta è ora l'eccezione corrente nel thread principale e può essere gestita come qualsiasi altra eccezione. Se si intercetta l'eccezione, è possibile gestirla immediatamente oppure utilizzare un'istruzione `throw` per inviarla a un gestore di eccezioni di livello superiore. In caso contrario, non eseguire alcuna operazione e lasciare che sia il gestore di eccezioni di sistema predefinito a terminare il processo.  
  
### <a name="makeexceptionptr-function"></a>Funzione make_exception_ptr  
 La funzione `make_exception_ptr` accetta un'istanza di una classe con argomento, quindi restituisce un oggetto `exception_ptr` che fa riferimento a tale istanza. In genere, è possibile specificare un oggetto della [classe exception`make_exception_ptr` come argomento della funzione ](../standard-library/exception-class.md), anche l'argomento può essere costituito da qualsiasi oggetto classe.  
  
 Chiamare la funzione `make_exception_ptr` equivale a generare l'eccezione C++, a intercettarla in un blocco `catch` e a chiamare la funzione `current_exception` per restituire un oggetto `exception_ptr` che fa riferimento all'eccezione. L'implementazione Microsoft della funzione `make_exception_ptr` è più efficiente della generazione e del rilevamento di un'eccezione.  
  
 In genere un'applicazione non richiede la funzione `make_exception_ptr` e se ne sconsiglia l'utilizzo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente vengono trasferite un'eccezione C++ e un'eccezione C++ personalizzata da un thread a un altro.  
  
```  
// transport_exception.cpp  
// compile with: /EHsc /MD  
#include <windows.h>  
#include <stdio.h>   
#include <exception>  
#include <stdexcept>  
  
using namespace std;  
  
// Define thread-specific information.  
#define THREADCOUNT 2  
exception_ptr aException[THREADCOUNT];   
int           aArg[THREADCOUNT];  
  
DWORD WINAPI ThrowExceptions( LPVOID );   
  
// Specify a user-defined, custom exception.   
// As a best practice, derive your exception   
// directly or indirectly from std::exception.   
class myException : public std::exception {   
};  
int main()  
{  
    HANDLE aThread[THREADCOUNT];  
    DWORD ThreadID;  
  
    // Create secondary threads.  
    for( int i=0; i < THREADCOUNT; i++ )  
    {  
        aArg[i] = i;  
        aThread[i] = CreateThread(   
            NULL,       // Default security attributes.  
            0,          // Default stack size.  
            (LPTHREAD_START_ROUTINE) ThrowExceptions,   
            (LPVOID) &aArg[i], // Thread function argument.  
            0,          // Default creation flags.  
            &ThreadID); // Receives thread identifier.  
        if( aThread[i] == NULL )  
        {  
            printf("CreateThread error: %d\n", GetLastError());  
            return -1;  
        }  
    }   
  
    // Wait for all threads to terminate.  
    WaitForMultipleObjects(THREADCOUNT, aThread, TRUE, INFINITE);   
    // Close thread handles.  
    for( int i=0; i < THREADCOUNT; i++ ) {  
        CloseHandle(aThread[i]);   
    }  
  
    // Rethrow and catch the transported exceptions.  
    for ( int i = 0; i < THREADCOUNT; i++ ) {  
        try {  
            if (aException[i] == NULL) {  
                printf("exception_ptr %d: No exception was transported.\n", i);  
            }  
            else {  
                rethrow_exception( aException[i] );  
            }    
        }  
        catch( const invalid_argument & ) {  
            printf("exception_ptr %d: Caught an invalid_argument exception.\n", i);  
        }  
        catch( const myException & ) {  
            printf("exception_ptr %d: Caught a  myException exception.\n", i);  
        }  
    }  
}   
// Each thread throws an exception depending on its thread   
// function argument, and then ends.   
DWORD WINAPI ThrowExceptions( LPVOID lpParam )   
{   
    int x = *((int*)lpParam);  
    if (x == 0) {  
        try {  
            // Standard C++ exception.  
            // This example explicitly throws invalid_argument exception.   
            // In practice, your application performs an operation that   
            // implicitly throws an exception.  
            throw invalid_argument("A C++ exception.");  
        }    
        catch ( const invalid_argument & ) {   
            aException[x] = current_exception();  
        }   
    }  
    else {  
        // User-defined exception.  
        aException[x] = make_exception_ptr( myException() );   
    }  
    return TRUE;   
}  
```  
  
```Output  
exception_ptr 0: Caught an invalid_argument exception.  
exception_ptr 1: Caught a  myException exception.  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<exception>  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)     
 [/EH (modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md)   
 [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md)