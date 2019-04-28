---
title: Collegare un eseguibile a una DLL
ms.date: 11/04/2016
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
ms.openlocfilehash: fc7a676059af17e7a42189c7c15ca157a081e08a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62188761"
---
# <a name="link-an-executable-to-a-dll"></a>Collegare un eseguibile a una DLL

Un file eseguibile collegato a (o carica) una DLL in uno dei due modi:

- *Collegamento implicito*, in cui il sistema operativo carica la DLL quando viene caricato l'eseguibile che la utilizza. L'eseguibile client chiama le funzioni esportate della DLL esattamente come se le funzioni sono state collegate in modo statico e contenute all'interno del file eseguibile. Il collegamento implicito viene talvolta definito come *caricamento statico* oppure *collegamento dinamico in fase di caricamento*.

- *Collegamento esplicito*, in cui il sistema operativo carica la DLL su richiesta in fase di esecuzione. Un file eseguibile che viene utilizzata una DLL mediante il collegamento esplicito deve effettuare chiamate di funzione per caricare e scaricare la DLL in modo esplicito e per accedere alle funzioni esportate dalla DLL. A differenza delle chiamate alle funzioni in una libreria collegata staticamente, l'eseguibile del client deve chiamare le funzioni esportate in una DLL tramite un puntatore a funzione. Il collegamento esplicito viene talvolta definito come *carico dinamico* oppure *collegamento dinamico in fase di esecuzione*.

Un file eseguibile può utilizzare uno dei due metodi di collegamento per collegare alla DLL stessa. Inoltre, questi metodi non sono si escludono a vicenda. un eseguibile può collegarsi in modo implicito in una DLL e un altro può connettersi ad esso in modo esplicito.

<a name="determining-which-linking-method-to-use"></a>

## <a name="link-an-executable-to-a-dll"></a>Collegare un eseguibile a una DLL

Se si desidera utilizzare il collegamento implicito o esplicito di collegamento è una decisione dell'architettura che è necessario apportare per l'applicazione. Esistono vantaggi e svantaggi di ogni metodo.

### <a name="implicit-linking"></a>Collegamento implicito

Collegamento implicito si verifica quando il codice dell'applicazione chiama una funzione DLL esportata. Quando il codice sorgente per il file eseguibile chiamante è compilato o assemblato, la chiamata di funzione DLL genera un riferimento di funzione esterna nel codice dell'oggetto. Per risolvere il riferimento esterno, l'applicazione deve collegarsi con la libreria di importazione (file con estensione LIB) fornita dal creatore della DLL.

La libreria di importazione contiene solo codice per caricare la DLL e implementare le chiamate a funzioni nella DLL. Ricerca di una funzione esterna in una libreria di importazione che indica al linker che il codice per tale funzione è in una DLL. Per risolvere i riferimenti esterni alle DLL, il linker aggiunge semplicemente le informazioni del file eseguibile che indica dove trovare il codice DLL quando viene avviato il processo di.

Quando il sistema viene avviato un programma che contiene riferimenti collegati in modo dinamico, Usa le informazioni nel file eseguibile del programma per individuare le DLL necessarie. Se non è possibile trovare la DLL, il sistema termina il processo e visualizza una finestra di dialogo che segnala l'errore. In caso contrario, il sistema esegue il mapping moduli DLL nello spazio degli indirizzi del processo.

Se una delle due DLL contiene, ad esempio una funzione di punto di ingresso per il codice di inizializzazione e terminazione `DllMain`, il sistema operativo chiama la funzione. Uno dei parametri passati alla funzione di punto di ingresso specifica un codice che indica la DLL è connesso al processo. Se la funzione di punto di ingresso non restituisce TRUE, il sistema termina il processo e segnala l'errore.

Infine, il sistema viene modificato il codice eseguibile del processo per fornire indirizzi iniziali per le funzioni DLL.

Come il resto del codice del programma, codice DLL viene eseguito il mapping nello spazio degli indirizzi del processo quando viene avviato il processo e che viene caricato in memoria solo quando necessario. Di conseguenza, il `PRELOAD` e `LOADONCALL` usati dai file con estensione def per controllare il caricamento nelle versioni precedenti di Windows non è più attributi di codice hanno un significato.

### <a name="explicit-linking"></a>Collegamento esplicito

La maggior parte delle applicazioni utilizzano il collegamento implicito perché è il metodo di collegamento più semplice da utilizzare. Tuttavia, esistono casi in cui è necessario il collegamento esplicito. Ecco alcuni motivi comuni per usare il collegamento esplicito:

- L'applicazione non conosce il nome di una DLL che vengono caricati alla fase di esecuzione. Ad esempio, l'applicazione può ottenere il nome della DLL e le funzioni esportate da un file di configurazione all'avvio.

- Se la DLL non viene trovata all'avvio del processo, un processo che usa il collegamento implicito viene terminato dal sistema operativo. Un processo che usa il collegamento esplicito non è terminato in questa situazione e può provare a correggere l'errore. Ad esempio, il processo è stato possibile notificare all'utente dell'errore e richiedere all'utente di specificare un altro percorso della DLL.

- Un processo che usa il collegamento implicito viene interrotta anche se una delle DLL viene collegato per avere una `DllMain` funzione che ha esito negativo. In questo caso, un processo che usa il collegamento esplicito non è terminato.

- Un'applicazione che si collega in modo implicito a molte DLL può essere lenta ad avviarsi perché Windows carica tutte le DLL durante il caricamento dell'applicazione. Per migliorare le prestazioni di avvio, un'applicazione può collegare in modo implicito solo per le DLL necessarie immediatamente dopo il caricamento e attendere fino a quando non sono necessarie altre DLL per collegarsi a essi in modo esplicito.

- Collegamento esplicito Elimina la necessità di collegare l'applicazione usando una libreria di importazione. Se le modifiche apportate nella DLL invalidano gli ordinali di esportazione modificare, le applicazioni che utilizzano il collegamento esplicito non sono necessario ricollegare se esse chiamano `GetProcAddress` usando il nome di una funzione e non un valore ordinale, mentre le applicazioni che utilizzano il collegamento implicito devono Ricollega per il nuova libreria di importazione.

Ecco due rischi relativi al collegamento esplicito da tenere presenti:

- Se la DLL include un' `DllMain` funzione di punto di ingresso, il sistema operativo chiama la funzione nel contesto del thread che ha chiamato `LoadLibrary`. La funzione di punto di ingresso non viene chiamata se la DLL è già collegata al processo a causa di una chiamata precedente a `LoadLibrary` cui non è stato chiamata corrispondente per il `FreeLibrary` (funzione). Collegamento esplicito può causare problemi se la DLL Usa un' `DllMain` funzione per eseguire l'inizializzazione per ogni thread di un processo, perché i thread che già esistono quando `LoadLibrary` (o `AfxLoadLibrary`) viene chiamato non inizializzate.

- Se una DLL dichiara dati statici come `__declspec(thread)`, può provocare un errore di protezione se collegata in modo esplicito. Dopo che la DLL viene caricata da una chiamata a `LoadLibrary`, causa un errore di protezione ogni volta che il codice fa riferimento a questi dati. (I dati statici includono gli elementi statici locali e globali). Pertanto, quando si crea una DLL, si dovrebbe evitare di usare l'archiviazione thread-local o informare gli utenti DLL di potenziali problemi di in modo dinamico il caricamento della DLL. Per altre informazioni, vedere [usando l'archiviazione thread-local in una libreria a collegamento dinamico (Windows SDK)](/windows/desktop/Dlls/using-thread-local-storage-in-a-dynamic-link-library).

<a name="linking-implicitly"></a>

## <a name="link-an-executable-to-a-dll"></a>Collegare un eseguibile a una DLL

Per utilizzare una DLL mediante il collegamento implicito, gli eseguibili del client devono ottenere questi file dal provider della DLL:

- Uno o più file di intestazione (file con estensione h) contenenti le dichiarazioni di dati esportati, funzioni e/o le classi C++ nella DLL. Le classi, funzioni e i dati esportati da DLL devono essere contrassegnati `__declspec(dllimport)` nel file di intestazione. Per altre informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).

- Una libreria di importazione per collegare nell'eseguibile. Il linker crea la libreria di importazione quando la DLL è compilata. Per altre informazioni, vedere [. File LIB](reference/dot-lib-files-as-linker-input.md).

- Il file DLL effettivo.

Per utilizzare una DLL mediante il collegamento implicito, un file eseguibile deve includere i file di intestazione che dichiarano i dati, funzioni o classi C++ esportate dalla DLL in ogni file di origine che contiene le chiamate per i dati esportati, funzioni e classi. Dalla prospettiva del codice, le chiamate a funzioni esportate sono esattamente come qualsiasi altra chiamata di funzione.

Per compilare il file eseguibile chiamante, è necessario collegarlo con la libreria di importazione. Se si usa un makefile esterno o sistema di compilazione, specificare il nome del file di libreria di importazione in cui vengono elencati gli altri file oggetto (obj) o le librerie da collegare.

Il sistema operativo deve essere in grado di individuare il file DLL quando viene caricato il file eseguibile chiamante. Ciò significa che l'applicazione è necessario distribuire o verificare l'esistenza della DLL quando viene installata l'applicazione.

<a name="linking-explicitly"></a>

## <a name="how-to-link-explicitly-to-a-dll"></a>Come collegare in modo esplicito a una DLL

Per utilizzare una DLL mediante il collegamento esplicito, le applicazioni devono eseguire una chiamata di funzione caricare in modo esplicito la DLL in fase di esecuzione. Per collegare in modo esplicito a una DLL, un'applicazione deve:

- Chiamare [LoadLibrary](loadlibrary-and-afxloadlibrary.md), `LoadLibraryEx`, o una funzione simile per caricare la DLL e ottenere un handle del modulo.

- Chiamare [GetProcAddress](getprocaddress.md) per ottenere un puntatore a funzione a ogni funzione che l'applicazione chiama esportata. Poiché le applicazioni chiamano le funzioni DLL tramite un puntatore, il compilatore non genera i riferimenti esterni, in modo che non è necessario eseguire il collegamento con una libreria di importazione. Tuttavia, è necessario avere una `typedef` o `using` istruzione che definisce la firma di chiamata delle funzioni esportate che si chiamano.

- Chiamare [FreeLibrary](freelibrary-and-afxfreelibrary.md) al termine della DLL.

Ad esempio, questa funzione di esempio chiama `LoadLibrary` per caricare una DLL denominata "MyDLL", viene chiamato `GetProcAddress` per ottenere un puntatore a una funzione denominata "DLLFunc1", chiama la funzione e Salva il risultato e quindi chiama `FreeLibrary` per scaricare la DLL.

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

A differenza in questo esempio, nella maggior parte dei casi è necessario chiamare `LoadLibrary` e `FreeLibrary` una sola volta nell'applicazione per una determinata DLL, soprattutto se si intende chiamare più funzioni nella DLL o DLL funzioni più volte.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Uso di librerie di importazione e file di esportazione](reference/working-with-import-libraries-and-export-files.md)

- [Ordine di ricerca di libreria a collegamento dinamico](/windows/desktop/Dlls/dynamic-link-library-search-order)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](dlls-in-visual-cpp.md)
