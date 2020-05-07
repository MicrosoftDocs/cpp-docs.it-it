---
title: Collegare un eseguibile a una DLL
ms.date: 08/22/2019
helpviewer_keywords:
- run time [C++], linking
- dynamic load linking [C++]
- linking [C++], DLLs
- DLLs [C++], linking
- implicit linking [C++]
- explicit linking [C++]
- executable files [C++], linking to DLLs
- loading DLLs [C++]
ms.assetid: 7592e276-dd6e-4a74-90c8-e1ee35598ea3
ms.openlocfilehash: 2f907fedcaaf9897749ee0eb6a7ea5a33e1af679
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417362"
---
# <a name="link-an-executable-to-a-dll"></a>Collegare un eseguibile a una DLL

Un file eseguibile si collega a una DLL (o carica) in uno dei due modi seguenti:

- *Collegamento implicito*, in cui il sistema operativo carica la dll contemporaneamente al file eseguibile che la utilizza. Il file eseguibile del client chiama le funzioni esportate della DLL nello stesso modo in cui le funzioni sono state collegate in modo statico e sono contenute all'interno del file eseguibile. Il collegamento implicito viene talvolta definito *caricamento statico* o *collegamento dinamico in fase di caricamento*.

- *Collegamento esplicito*, in cui il sistema operativo carica la dll su richiesta in fase di esecuzione. Un eseguibile che usa una DLL tramite il collegamento esplicito deve caricare e scaricare in modo esplicito la DLL. Deve inoltre configurare un puntatore a funzione per accedere a ogni funzione utilizzata dalla DLL. Diversamente dalle chiamate alle funzioni in una libreria collegata staticamente o in una DLL collegata in modo implicito, l'eseguibile del client deve chiamare le funzioni esportate in una DLL collegata in modo esplicito tramite puntatori a funzione. Il collegamento esplicito viene talvolta definito *caricamento dinamico* o *collegamento dinamico in fase di esecuzione*.

Un eseguibile può usare uno dei due metodi di collegamento per collegarsi alla stessa DLL. Inoltre, questi metodi non si escludono a vicenda. un eseguibile può essere collegato in modo implicito a una DLL e un altro potrebbe collegarsi in modo esplicito.

<a name="determining-which-linking-method-to-use"></a>

## <a name="determine-which-linking-method-to-use"></a>Determinare il metodo di collegamento da utilizzare

Se utilizzare il collegamento implicito o il collegamento esplicito è una decisione di architettura che è necessario eseguire per l'applicazione. Ogni metodo presenta vantaggi e svantaggi.

### <a name="implicit-linking"></a>Collegamento implicito

Il collegamento implicito si verifica quando il codice di un'applicazione chiama una funzione DLL esportata. Quando il codice sorgente per il file eseguibile chiamante viene compilato o assemblato, la chiamata di funzione DLL genera un riferimento a una funzione esterna nel codice dell'oggetto. Per risolvere questo riferimento esterno, l'applicazione deve collegarsi alla libreria di importazione (file con estensione LIB) fornita dal creatore della DLL.

La libreria di importazione contiene solo codice per caricare la DLL e implementare le chiamate alle funzioni nella DLL. La ricerca di una funzione esterna in una libreria di importazione informa il linker che il codice per la funzione si trova in una DLL. Per risolvere i riferimenti esterni alle DLL, il linker aggiunge semplicemente informazioni al file eseguibile che indica al sistema dove trovare il codice DLL all'avvio del processo.

Quando il sistema avvia un programma che contiene riferimenti collegati in modo dinamico, USA le informazioni nel file eseguibile del programma per individuare le DLL necessarie. Se non è possibile individuare la DLL, il sistema termina il processo e visualizza una finestra di dialogo in cui viene segnalato l'errore. In caso contrario, il sistema esegue il mapping dei moduli DLL nello spazio degli indirizzi del processo.

Se una delle dll dispone di una funzione del punto di ingresso per l'inizializzazione e il codice `DllMain`di terminazione, ad esempio, il sistema operativo chiama la funzione. Uno dei parametri passati alla funzione del punto di ingresso specifica un codice che indica che la DLL è collegata al processo. Se la funzione del punto di ingresso non restituisce TRUE, il sistema termina il processo e segnala l'errore.

Infine, il sistema modifica il codice eseguibile del processo per fornire gli indirizzi iniziali per le funzioni DLL.

Come il resto del codice di un programma, il caricatore esegue il mapping del codice DLL nello spazio degli indirizzi del processo all'avvio del processo. Il sistema operativo lo carica in memoria solo quando necessario. Di conseguenza, gli attributi `PRELOAD` del `LOADONCALL` codice e usati dai file def per controllare il caricamento nelle versioni precedenti di Windows non hanno più significato.

### <a name="explicit-linking"></a>Collegamento esplicito

La maggior parte delle applicazioni usa il collegamento implicito perché è il metodo di collegamento più semplice da usare. Tuttavia, in alcuni casi il collegamento esplicito è necessario. Ecco alcuni motivi comuni per usare il collegamento esplicito:

- L'applicazione non conosce il nome di una DLL caricata fino alla fase di esecuzione. Ad esempio, l'applicazione potrebbe ottenere il nome della DLL e le funzioni esportate da un file di configurazione all'avvio.

- Un processo che utilizza il collegamento implicito viene terminato dal sistema operativo se la DLL non viene trovata all'avvio del processo. Un processo che utilizza il collegamento esplicito non viene terminato in questa situazione e può tentare di recuperare l'errore. Ad esempio, il processo potrebbe notificare all'utente l'errore e fare in modo che l'utente specifichi un altro percorso per la DLL.

- Un processo che utilizza il collegamento implicito viene terminato anche se una qualsiasi DLL collegata presenta una `DllMain` funzione che ha esito negativo. In questa situazione un processo che utilizza il collegamento esplicito non viene terminato.

- Un'applicazione che si collega in modo implicito a molte dll può essere lenta per l'avvio perché Windows carica tutte le dll quando viene caricata l'applicazione. Per migliorare le prestazioni di avvio, un'applicazione può utilizzare solo il collegamento implicito per le dll richieste immediatamente dopo il caricamento. Potrebbe usare il collegamento esplicito per caricare altre dll solo se sono necessarie.

- Il collegamento esplicito elimina la necessità di collegare l'applicazione tramite una libreria di importazione. Se le modifiche nella DLL provocano la modifica degli ordinali di esportazione, le applicazioni non devono essere ricollegate se chiamano `GetProcAddress` usando il nome di una funzione e non un valore ordinale. Le applicazioni che usano il collegamento implicito devono ancora ricollegarsi alla libreria di importazione modificata.

Ecco due rischi per il collegamento esplicito da tenere presente:

- Se la DLL include una `DllMain` funzione del punto di ingresso, il sistema operativo chiama la funzione nel contesto del thread che ha `LoadLibrary`chiamato. La funzione del punto di ingresso non viene chiamata se la DLL è già associata al processo a causa di una chiamata `LoadLibrary` precedente a che non ha avuto una chiamata `FreeLibrary` corrispondente alla funzione. Il collegamento esplicito può causare problemi se la DLL USA `DllMain` una funzione per inizializzare ogni thread di un processo, perché tutti i thread già `LoadLibrary` esistenti quando `AfxLoadLibrary`viene chiamato (o) non vengono inizializzati.

- Se una DLL dichiara dati di extent statici come, `__declspec(thread)`può causare un errore di protezione se collegato in modo esplicito. Dopo che la DLL è stata caricata da `LoadLibrary`una chiamata a, causa un errore di protezione ogni volta che il codice fa riferimento a questi dati. (I dati di extent statici includono elementi statici globali e locali). Per questo motivo, quando si crea una DLL, è consigliabile evitare di usare l'archiviazione locale di thread. Se non è possibile, informare gli utenti della DLL sulle potenziali trappole per il caricamento dinamico della DLL. Per ulteriori informazioni, vedere [utilizzo dell'archiviazione locale di thread in una libreria a collegamento dinamico (Windows SDK)](/windows/win32/Dlls/using-thread-local-storage-in-a-dynamic-link-library).

<a name="linking-implicitly"></a>

## <a name="how-to-use-implicit-linking"></a>Come usare il collegamento implicito

Per usare una DLL tramite il collegamento implicito, gli eseguibili client devono ottenere questi file dal provider della DLL:

- Uno o più file di intestazione (file con estensione h) che contengono le dichiarazioni dei dati esportati, delle funzioni e delle classi C++ nella DLL. Le classi, le funzioni e i dati esportati dalla DLL devono essere `__declspec(dllimport)` tutti contrassegnati nel file di intestazione. Per altre informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).

- Libreria di importazione da collegare all'eseguibile. Il linker crea la libreria di importazione quando viene compilata la DLL. Per altre informazioni, vedere [file lib come input del linker](reference/dot-lib-files-as-linker-input.md).

- File DLL effettivo.

Per usare i dati, le funzioni e le classi in una DLL tramite il collegamento implicito, qualsiasi file di origine client deve includere i file di intestazione che li dichiarano. Dal punto di vista del codice, le chiamate alle funzioni esportate sono simili a qualsiasi altra chiamata di funzione.

Per compilare il file eseguibile del client, è necessario collegarsi alla libreria di importazione della DLL. Se si usa un makefile esterno o un sistema di compilazione, specificare la libreria di importazione insieme agli altri file oggetto o librerie da collegare.

Il sistema operativo deve essere in grado di individuare il file DLL quando carica il file eseguibile chiamante. Ciò significa che è necessario distribuire o verificare l'esistenza della DLL quando si installa l'applicazione.

<a name="linking-explicitly"></a>

## <a name="how-to-link-explicitly-to-a-dll"></a>Come collegare in modo esplicito a una DLL

Per usare una DLL tramite il collegamento esplicito, le applicazioni devono eseguire una chiamata di funzione per caricare in modo esplicito la DLL in fase di esecuzione. Per un collegamento esplicito a una DLL, un'applicazione deve:

- Chiamare [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) o una funzione simile per caricare la dll e ottenere un handle del modulo.

- Chiamare [GetProcAddress](getprocaddress.md) per ottenere un puntatore a funzione per ogni funzione esportata chiamata dall'applicazione. Poiché le applicazioni chiamano le funzioni DLL tramite un puntatore, il compilatore non genera riferimenti esterni, quindi non è necessario collegarsi a una libreria di importazione. Tuttavia, è necessario disporre di `typedef` un' `using` istruzione o che definisce la firma di chiamata delle funzioni esportate chiamate.

- Chiamare [FreeLibrary](freelibrary-and-afxfreelibrary.md) al termine della dll.

Questa funzione di esempio chiama `LoadLibrary` ad esempio per caricare una DLL denominata "MyDLL", chiama `GetProcAddress` per ottenere un puntatore a una funzione denominata "DLLFunc1", chiama la funzione e salva il risultato, quindi chiama `FreeLibrary` per scaricare la dll.

```C
#include "windows.h"

typedef HRESULT (CALLBACK* LPFNDLLFUNC1)(DWORD,UINT*);

HRESULT LoadAndCallSomeFunction(DWORD dwParam1, UINT * puParam2)
{
    HINSTANCE hDLL;               // Handle to DLL
    LPFNDLLFUNC1 lpfnDllFunc1;    // Function pointer
    HRESULT hrReturnVal;

    hDLL = LoadLibrary("MyDLL");
    if (NULL != hDLL)
    {
        lpfnDllFunc1 = (LPFNDLLFUNC1)GetProcAddress(hDLL, "DLLFunc1");
        if (NULL != lpfnDllFunc1)
        {
            // call the function
            hrReturnVal = lpfnDllFunc1(dwParam1, puParam2);
        }
        else
        {
            // report the error
            hrReturnVal = ERROR_DELAY_LOAD_FAILED;
        }
        FreeLibrary(hDLL);
    }
    else
    {
        hrReturnVal = ERROR_DELAY_LOAD_FAILED;
    }
    return hrReturnVal;
}
```

A differenza di questo esempio, nella maggior parte dei casi `LoadLibrary` è `FreeLibrary` consigliabile chiamare e solo una volta nell'applicazione per una determinata DLL. È soprattutto vero se si intende chiamare più funzioni nella DLL o chiamare più volte le funzioni DLL.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Uso di librerie di importazione e file di esportazione](reference/working-with-import-libraries-and-export-files.md)

- [Ordine di ricerca della libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-search-order)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
