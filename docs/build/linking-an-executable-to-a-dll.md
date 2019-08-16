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
ms.openlocfilehash: c4f9ea7a3606612189e85401b75a0577896fd90e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493231"
---
# <a name="link-an-executable-to-a-dll"></a>Collegare un eseguibile a una DLL

Un file eseguibile si collega a una DLL (o carica) in uno dei due modi seguenti:

- *Collegamento implicito*, in cui il sistema operativo carica la dll quando viene caricato il file eseguibile che lo utilizza. Il file eseguibile del client chiama le funzioni esportate della DLL come se le funzioni fossero collegate in modo statico e fossero contenute all'interno del file eseguibile. Il collegamento implicito viene talvolta definito *caricamento statico* o *collegamento dinamico in fase di caricamento*.

- *Collegamento esplicito*, in cui il sistema operativo carica la dll su richiesta in fase di esecuzione. Un eseguibile che usa una DLL tramite il collegamento esplicito deve effettuare chiamate di funzione per caricare e scaricare in modo esplicito la DLL e per accedere alle funzioni esportate dalla DLL. A differenza delle chiamate alle funzioni in una libreria collegata in modo statico, il file eseguibile del client deve chiamare le funzioni esportate in una DLL tramite un puntatore a funzione. Il collegamento esplicito viene talvolta definito *caricamento dinamico* o *collegamento dinamico in fase di esecuzione*.

Un eseguibile può usare uno dei due metodi di collegamento per collegarsi alla stessa DLL. Inoltre, questi metodi non si escludono a vicenda. un eseguibile può essere collegato in modo implicito a una DLL e un altro può collegarlo in modo esplicito.

<a name="determining-which-linking-method-to-use"></a>

## <a name="link-an-executable-to-a-dll"></a>Collegare un eseguibile a una DLL

Se utilizzare il collegamento implicito o il collegamento esplicito è una decisione di architettura che è necessario eseguire per l'applicazione. Ogni metodo presenta vantaggi e svantaggi.

### <a name="implicit-linking"></a>Collegamento implicito

Il collegamento implicito si verifica quando il codice di un'applicazione chiama una funzione DLL esportata. Quando il codice sorgente per il file eseguibile chiamante viene compilato o assemblato, la chiamata di funzione DLL genera un riferimento a una funzione esterna nel codice dell'oggetto. Per risolvere questo riferimento esterno, l'applicazione deve collegarsi alla libreria di importazione (file con estensione LIB) fornita dal creatore della DLL.

La libreria di importazione contiene solo codice per caricare la DLL e implementare le chiamate alle funzioni nella DLL. La ricerca di una funzione esterna in una libreria di importazione informa il linker che il codice per la funzione si trova in una DLL. Per risolvere i riferimenti esterni alle DLL, il linker aggiunge semplicemente informazioni al file eseguibile che indica al sistema dove trovare il codice DLL all'avvio del processo.

Quando il sistema avvia un programma che contiene riferimenti collegati in modo dinamico, USA le informazioni nel file eseguibile del programma per individuare le DLL necessarie. Se non è possibile individuare la DLL, il sistema termina il processo e visualizza una finestra di dialogo in cui viene segnalato l'errore. In caso contrario, il sistema esegue il mapping dei moduli DLL nello spazio degli indirizzi del processo.

Se una delle dll dispone di una funzione del punto di ingresso per l'inizializzazione e il codice `DllMain`di terminazione, ad esempio, il sistema operativo chiama la funzione. Uno dei parametri passati alla funzione del punto di ingresso specifica un codice che indica che la DLL è collegata al processo. Se la funzione del punto di ingresso non restituisce TRUE, il sistema termina il processo e segnala l'errore.

Infine, il sistema modifica il codice eseguibile del processo per fornire gli indirizzi iniziali per le funzioni DLL.

Come il resto del codice di un programma, il codice DLL viene mappato nello spazio degli indirizzi del processo all'avvio del processo e caricato in memoria solo quando necessario. Di conseguenza, gli attributi `PRELOAD` del `LOADONCALL` codice e usati dai file def per controllare il caricamento nelle versioni precedenti di Windows non hanno più significato.

### <a name="explicit-linking"></a>Collegamento esplicito

La maggior parte delle applicazioni usa il collegamento implicito perché è il metodo di collegamento più semplice da usare. Tuttavia, in alcuni casi il collegamento esplicito è necessario. Ecco alcuni motivi comuni per usare il collegamento esplicito:

- L'applicazione non conosce il nome di una DLL caricata fino alla fase di esecuzione. Ad esempio, l'applicazione potrebbe ottenere il nome della DLL e le funzioni esportate da un file di configurazione all'avvio.

- Un processo che utilizza il collegamento implicito viene terminato dal sistema operativo se la DLL non viene trovata all'avvio del processo. Un processo che utilizza il collegamento esplicito non viene terminato in questa situazione e può tentare di correggere l'errore. Ad esempio, il processo potrebbe notificare all'utente l'errore e fare in modo che l'utente specifichi un altro percorso per la DLL.

- Un processo che utilizza il collegamento implicito viene terminato anche se una qualsiasi DLL a cui è collegata dispone di `DllMain` una funzione che ha esito negativo. In questa situazione un processo che utilizza il collegamento esplicito non viene terminato.

- Un'applicazione che si collega in modo implicito a molte dll può essere lenta per l'avvio perché Windows carica tutte le dll quando viene caricata l'applicazione. Per migliorare le prestazioni di avvio, un'applicazione può collegarsi in modo implicito solo alle DLL richieste immediatamente dopo il caricamento e attendere che siano richieste altre DLL per il collegamento esplicito.

- Il collegamento esplicito elimina la necessità di collegare l'applicazione tramite una libreria di importazione. Se le modifiche nella dll provocano la modifica degli ordinali di esportazione, le applicazioni che utilizzano il collegamento esplicito non devono essere ricollegate se chiamano `GetProcAddress` utilizzando il nome di una funzione e non un valore ordinale, mentre le applicazioni che utilizzano il collegamento implicito devono ricollegarsi al nuova libreria di importazione.

Ecco due rischi per il collegamento esplicito da tenere presente:

- Se la dll include una `DllMain` funzione del punto di ingresso, il sistema operativo chiama la funzione nel contesto del thread che ha `LoadLibrary`chiamato. La funzione del punto di ingresso non viene chiamata se la dll è già associata al processo a causa di una chiamata precedente `LoadLibrary` a che non ha avuto una chiamata corrispondente `FreeLibrary` alla funzione. Il collegamento esplicito può causare problemi se la dll USA `DllMain` una funzione per eseguire l'inizializzazione per ogni thread di un processo, perché i `LoadLibrary` thread già `AfxLoadLibrary`esistenti quando viene chiamato (o) non vengono inizializzati.

- Se una dll dichiara dati di extent statici come, `__declspec(thread)`può causare un errore di protezione se collegato in modo esplicito. Dopo che la dll è stata caricata da `LoadLibrary`una chiamata a, causa un errore di protezione ogni volta che il codice fa riferimento a questi dati. (I dati di extent statici includono elementi statici globali e locali). Pertanto, quando si crea una DLL, è consigliabile evitare di utilizzare l'archiviazione locale di thread o informare gli utenti DLL sui potenziali problemi di caricamento dinamico della DLL. Per ulteriori informazioni, vedere [utilizzo dell'archiviazione locale di thread in una libreria a collegamento dinamico (Windows SDK)](/windows/win32/Dlls/using-thread-local-storage-in-a-dynamic-link-library).

<a name="linking-implicitly"></a>

## <a name="link-an-executable-to-a-dll"></a>Collegare un eseguibile a una DLL

Per usare una DLL tramite il collegamento implicito, gli eseguibili client devono ottenere questi file dal provider della DLL:

- Uno o più file di intestazione (con estensione h) che contengono le dichiarazioni dei dati esportati, le funzioni e C++ /o le classi della dll. Le classi, le funzioni e i dati esportati dalla dll devono essere `__declspec(dllimport)` tutti contrassegnati nel file di intestazione. Per altre informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).

- Libreria di importazione da collegare all'eseguibile. Il linker crea la libreria di importazione quando viene compilata la DLL. Per ulteriori informazioni, vedere [. File LIB](reference/dot-lib-files-as-linker-input.md).

- File DLL effettivo.

Per usare una DLL tramite il collegamento implicito, un eseguibile deve includere i file di intestazione che dichiarano C++ i dati, le funzioni o le classi esportate dalla dll in ogni file di origine che contiene le chiamate ai dati, alle funzioni e alle classi esportati. Dal punto di vista del codice, le chiamate alle funzioni esportate sono simili a qualsiasi altra chiamata di funzione.

Per compilare il file eseguibile chiamante, è necessario collegarsi alla libreria di importazione. Se si usa un makefile esterno o un sistema di compilazione, specificare il nome del file della libreria di importazione in cui elencare gli altri file (con estensione obj) o le librerie da collegare.

Il sistema operativo deve essere in grado di individuare il file DLL quando carica il file eseguibile chiamante. Ciò significa che l'applicazione deve distribuire o verificare l'esistenza della DLL durante l'installazione dell'applicazione.

<a name="linking-explicitly"></a>

## <a name="how-to-link-explicitly-to-a-dll"></a>Come collegare in modo esplicito a una DLL

Per usare una DLL tramite il collegamento esplicito, le applicazioni devono eseguire una chiamata di funzione per caricare in modo esplicito la DLL in fase di esecuzione. Per un collegamento esplicito a una DLL, un'applicazione deve:

- Chiamare [LoadLibrary](loadlibrary-and-afxloadlibrary.md), `LoadLibraryEx`o una funzione simile per caricare la dll e ottenere un handle del modulo.

- Chiamare [GetProcAddress](getprocaddress.md) per ottenere un puntatore a funzione per ogni funzione esportata chiamata dall'applicazione. Poiché le applicazioni chiamano le funzioni DLL tramite un puntatore, il compilatore non genera riferimenti esterni, pertanto non è necessario collegarsi a una libreria di importazione. Tuttavia, è necessario disporre di `typedef` un' `using` istruzione o che definisce la firma di chiamata delle funzioni esportate chiamate.

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

Diversamente da questo esempio, nella maggior parte dei casi è consigliabile `LoadLibrary` chiamare `FreeLibrary` e solo una volta nell'applicazione per una determinata DLL, soprattutto se si intende chiamare più funzioni nella dll o chiamare ripetutamente le funzioni DLL.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Uso di librerie di importazione e file di esportazione](reference/working-with-import-libraries-and-export-files.md)

- [Ordine di ricerca della libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-search-order)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
