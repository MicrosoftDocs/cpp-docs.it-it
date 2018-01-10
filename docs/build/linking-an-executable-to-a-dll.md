---
title: Collegamento di un eseguibile a una DLL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6bdc8d4b372a589beb51d2f8a9bc05b1aa241c48
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="link-an-executable-to-a-dll"></a>Collegamento di un eseguibile a una DLL  
  
Un file eseguibile collegato a (o carica) una DLL in uno dei due modi:  
  
-   *Collegamento implicito*, in cui il sistema operativo carica la DLL quando viene caricato il file eseguibile di utilizzarlo. Il file eseguibile del client chiama le funzioni esportate della DLL come se le funzioni in modo statico sono state collegate e contenute all'interno dell'eseguibile. Collegamento implicito è talvolta detta *carico statico* o *collegamento dinamico in fase di caricamento*.  
  
-   *Collegamento esplicito*, in cui il sistema operativo carica la DLL su richiesta in fase di esecuzione. Un file eseguibile che viene utilizzata una DLL mediante il collegamento esplicito deve effettuare chiamate di funzione per caricare e scaricare la DLL in modo esplicito e per accedere alle funzioni esportate dalla DLL. A differenza delle chiamate alle funzioni in una libreria collegata staticamente, l'eseguibile del client deve chiamare le funzioni esportate in una DLL tramite un puntatore a funzione. Collegamento esplicito è talvolta detta *carico dinamico* o *collegamento dinamico in fase di esecuzione*.  
  
Un file eseguibile è possibile utilizzare dei metodi di collegamento per il collegamento alla stessa DLL. Inoltre, questi metodi non sono si escludono a vicenda. un eseguibile in modo implicito è possibile collegare a una DLL e un altro può connettersi ad esso in modo esplicito.  
  
<a name="determining-which-linking-method-to-use"></a>  
  
## <a name="determine-which-linking-method-to-use"></a>Determinare quale metodo di collegamento  
  
Se si desidera utilizzare il collegamento implicito o il collegamento esplicito è una decisione dell'architettura, che è necessario eseguire per l'applicazione. Esistono vantaggi e svantaggi di ogni metodo.  
  
### <a name="implicit-linking"></a>Collegamento implicito  
  
Collegamento implicito, si verifica quando il codice dell'applicazione chiama una funzione DLL esportata. Quando il codice sorgente per l'eseguibile chiamante viene compilato o assemblato, la chiamata di funzione DLL genera un riferimento a funzione esterna nel codice dell'oggetto. Per risolvere il riferimento esterno, l'applicazione deve collegarsi alla libreria di importazione (file con estensione LIB) fornita dal creatore della DLL.  
  
La libreria di importazione contiene solo codice per caricare la DLL e implementare le chiamate alle funzioni nella DLL. Ricerca di una funzione esterna in una libreria di importazione che indica al linker che il codice per tale funzione è in una DLL. Per risolvere i riferimenti esterni alle DLL, il linker aggiunge semplicemente informazioni del file eseguibile che indica dove trovare il codice DLL durante l'avvio del processo.  
  
Quando il sistema viene avviato un programma che contiene riferimenti collegati in modo dinamico, Usa le informazioni nel file eseguibile del programma per individuare le DLL necessarie. Se non è possibile trovare la DLL, il sistema termina il processo e visualizza una finestra di dialogo che segnala l'errore. In caso contrario, il sistema associa i moduli DLL nello spazio degli indirizzi del processo.  
  
Se una delle DLL ha una funzione di punto di ingresso per il codice di inizializzazione e terminazione, ad esempio `DllMain`, il sistema operativo chiama la funzione. Uno dei parametri passati alla funzione di punto di ingresso specifica un codice che indica la DLL si connette al processo. Se la funzione di punto di ingresso non restituisce TRUE, il sistema interrompe il processo e segnala l'errore.  
  
Infine, il sistema modifica il codice eseguibile del processo per fornire indirizzi iniziali per le funzioni DLL.  
  
Ad esempio il resto del codice di un programma, codice DLL viene eseguito il mapping nello spazio degli indirizzi del processo quando il processo di avvio e viene caricata in memoria solo quando necessario. Di conseguenza, il `PRELOAD` e `LOADONCALL` attributi utilizzati dai file def per controllare il caricamento nelle versioni precedenti di Windows non hanno significato.  
  
### <a name="explicit-linking"></a>Collegamento esplicito  
  
La maggior parte delle applicazioni utilizzano il collegamento implicito perché il metodo di collegamento più semplice da utilizzare. Tuttavia, esistono casi in cui è necessario il collegamento esplicito. Ecco alcuni motivi comuni per usare il collegamento esplicito:  
  
-   L'applicazione non conosce il nome di una DLL che viene caricato in fase di esecuzione. Ad esempio, l'applicazione può ottenere il nome della DLL e le funzioni esportate da un file di configurazione all'avvio.  
  
-   Un processo che utilizza il collegamento implicito termina con il sistema operativo se la DLL non viene trovata all'avvio del processo. Un processo che utilizza il collegamento esplicito non viene chiusa in questa situazione e può tentare di risolvere l'errore. Ad esempio, il processo potrebbe informare l'utente dell'errore e richiedere all'utente di specificare un percorso diverso per la DLL.  
  
-   Un processo che utilizza il collegamento implicito viene interrotta anche se qualunque delle DLL è collegata ad un `DllMain` funzione che ha esito negativo. In questa situazione non termina un processo che utilizza il collegamento esplicito.  
  
-   Un'applicazione collegata in modo implicito a molte DLL può essere lenta per avviare Windows carica tutte le DLL quando l'applicazione carica. Per migliorare le prestazioni di avvio, un'applicazione può collegare in modo implicito solo a quelle DLL necessari immediatamente dopo il caricamento e attendere fino a quando non sono necessarie altre DLL per collegarle in modo esplicito.  
  
-   Collegamento esplicito Elimina la necessità di collegare l'applicazione utilizzando una libreria di importazione. Se le modifiche nella DLL determinano gli ordinali di esportazione modificare, le applicazioni che utilizzano il collegamento esplicito non è necessario collegare nuovamente se esse chiamano `GetProcAddress` utilizzando il nome di una funzione e non è un valore ordinale, mentre le applicazioni che utilizzano il collegamento implicito devono ricollegarsi al nuova libreria di importazione.  
  
Di seguito sono due rischi relativi al collegamento esplicito da prendere in considerazione:  
  
-   Se la DLL ha un `DllMain` funzione di punto di ingresso, il sistema operativo chiama la funzione nel contesto del thread che ha chiamato `LoadLibrary`. La funzione di punto di ingresso non viene chiamata se la DLL è già collegata al processo a causa di una chiamata precedente a `LoadLibrary` che non è stato chiamata corrispondente per il `FreeLibrary` (funzione). Collegamento esplicito può comportare problemi se la DLL utilizza un `DllMain` funzione per eseguire l'inizializzazione per ogni thread di un processo perché i thread che già esistono quando `LoadLibrary` (o `AfxLoadLibrary`) viene chiamato non inizializzate.  
  
-   Se una DLL dichiara dati statici come `__declspec(thread)`, può provocare un errore di protezione se collegata in modo esplicito. Dopo il caricamento della DLL da una chiamata a `LoadLibrary`, causa un errore di protezione ogni volta che il codice fa riferimento a questi dati. (Dati statici sono inclusi elementi statici locali e globali). Pertanto, quando si crea una DLL, si deve evitare di utilizzare l'archiviazione locale di thread o segnalare agli utenti DLL di potenziali problemi di caricamento dinamico delle DLL. Per ulteriori informazioni, vedere [uso dell'archiviazione locale di thread in una libreria a collegamento dinamico (SDK di Windows)](http://msdn.microsoft.com/library/windows/desktop/ms686997).  
  
<a name="linking-implicitly"></a>  
  
## <a name="how-to-link-implicitly-to-a-dll"></a>Come collegare in modo implicito a una DLL  
  
Per utilizzare una DLL mediante il collegamento implicito, gli eseguibili del client devono ottenere questi file dal provider della DLL:  
  
-   Uno o più file di intestazione (file con estensione h) che contengono le dichiarazioni di dati esportati, funzioni e/o le classi C++ nella DLL. Le classi, funzioni e i dati esportati dalla DLL devono essere contrassegnati `__declspec(dllimport)` nel file di intestazione. Per ulteriori informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).  
  
-   Una libreria di importazione per collegare il file eseguibile. Quando la DLL viene compilata, il linker crea la libreria di importazione. Per ulteriori informazioni, vedere [. File LIB](../build/reference/dot-lib-files-as-linker-input.md).  
  
-   Il file DLL effettivo.  
  
Per utilizzare una DLL mediante il collegamento implicito, un file eseguibile deve includere i file di intestazione che dichiarano i dati, funzioni o classi C++ esportate dalla DLL in ogni file di origine che contiene chiamate per i dati esportati, funzioni e classi. Da una prospettiva di codifica, le chiamate alle funzioni esportate sono esattamente come qualsiasi altra chiamata di funzione.  
  
Per compilare il file eseguibile chiamante, è necessario collegarsi alla libreria di importazione. Se si utilizza un makefile esterno o sistema di compilazione, specificare il nome del file di libreria di importazione in cui vengono elencati gli altri file oggetto (obj) o librerie da collegare.  
  
Il sistema operativo deve essere in grado di individuare il file DLL durante il caricamento dell'eseguibile chiamante. Ciò significa che l'applicazione deve distribuire o verificare l'esistenza della DLL durante l'installazione dell'applicazione.   
  
<a name="linking-explicitly"></a>  
  
## <a name="how-to-link-explicitly-to-a-dll"></a>Come collegare in modo esplicito a una DLL  
  
Per utilizzare una DLL mediante il collegamento esplicito, le applicazioni devono effettuare una chiamata di funzione per caricare in modo esplicito la DLL in fase di esecuzione. Per collegare in modo esplicito a una DLL, un'applicazione deve:  
  
-   Chiamare [LoadLibrary](loadlibrary-and-afxloadlibrary.md), `LoadLibraryEx`, o una funzione simile per caricare la DLL e ottenere un handle del modulo.  
  
-   Chiamare [GetProcAddress](getprocaddress.md) per ottenere un puntatore a funzione a ogni funzione esportata che l'applicazione chiama. Poiché le applicazioni chiamano le funzioni DLL tramite un puntatore, il compilatore non genera i riferimenti esterni, pertanto non è necessario eseguire il collegamento con una libreria di importazione. Tuttavia, è necessario avere un `typedef` o `using` istruzione che definisce la firma di chiamata delle funzioni esportate che vengono chiamati.   
  
-   Chiamare [FreeLibrary](freelibrary-and-afxfreelibrary.md) termine con la DLL.  
  
Ad esempio, questa funzione di esempio chiama `LoadLibrary` per caricare una DLL denominata "MyDLL", chiama `GetProcAddress` per ottenere un puntatore a una funzione denominata "DLLFunc1", chiama la funzione e Salva il risultato e quindi chiama `FreeLibrary` per scaricare la DLL. 
  
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
  
A differenza in questo esempio, nella maggior parte dei casi è necessario chiamare `LoadLibrary` e `FreeLibrary` ripetutamente le funzioni di una sola volta nell'applicazione per una DLL, soprattutto se si intende chiamare più funzioni nella DLL o DLL.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Uso di librerie di importazione e file di esportazione](../build/reference/working-with-import-libraries-and-export-files.md)  
  
-   [Il percorso di ricerca utilizzato da Windows per individuare una DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)