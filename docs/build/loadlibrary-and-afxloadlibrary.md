---
title: LoadLibrary e AfxLoadLibrary
description: Utilizzo di LoadLibrary e AfxLoadLibrary per il caricamento esplicito di dll in MSVC.
ms.date: 01/28/2020
f1_keywords:
- LoadLibrary
helpviewer_keywords:
- DLLs [C++], AfxLoadLibrary
- DLLs [C++], LoadLibrary
- AfxLoadLibrary method
- LoadLibrary method
- explicit linking [C++]
ms.assetid: b4535d19-6243-4146-a31a-a5cca4c7c9e3
ms.openlocfilehash: f803212c4485f7517dc42802f1ff581ffa4e609d
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821538"
---
# <a name="loadlibrary-and-afxloadlibrary"></a>LoadLibrary e AfxLoadLibrary

I processi chiamano [LoadLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw) o [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) per collegarsi in modo esplicito a una dll. (Le app MFC usano [AfxLoadLibrary](../mfc/reference/application-information-and-management.md#afxloadlibrary) o [AfxLoadLibraryEx](../mfc/reference/application-information-and-management.md#afxloadlibraryex)). Se la funzione ha esito positivo, viene eseguito il mapping della DLL specificata nello spazio degli indirizzi del processo chiamante e viene restituito un handle per la DLL. L'handle è necessario in altre funzioni usate per il collegamento esplicito, ad esempio `GetProcAddress` e `FreeLibrary`. Per ulteriori informazioni, vedere [collegamento esplicito](linking-an-executable-to-a-dll.md#linking-explicitly).

`LoadLibrary` tenta di individuare la DLL utilizzando la stessa sequenza di ricerca utilizzata per il collegamento implicito. `LoadLibraryEx` offre un maggiore controllo sull'ordine del percorso di ricerca. Per ulteriori informazioni, vedere l' [ordine di ricerca della libreria a collegamento dinamico](/windows/win32/dlls/dynamic-link-library-search-order). Se il sistema non riesce a trovare la DLL o se la funzione del punto di ingresso restituisce FALSE, `LoadLibrary` restituisce NULL. Se la chiamata a `LoadLibrary` specifica un modulo DLL già mappato nello spazio degli indirizzi del processo chiamante, la funzione restituisce un handle della DLL e incrementa il conteggio dei riferimenti del modulo.

Se la DLL include una funzione del punto di ingresso, il sistema operativo chiama la funzione nel contesto del thread che ha chiamato `LoadLibrary` o `LoadLibraryEx`. La funzione del punto di ingresso non viene chiamata se la DLL è già associata al processo. Ciò si verifica quando una precedente chiamata a `LoadLibrary` o `LoadLibraryEx` per la DLL non ha avuto una chiamata corrispondente alla funzione `FreeLibrary`.

Per le applicazioni MFC che caricano DLL di estensione MFC, è consigliabile usare `AfxLoadLibrary` o `AfxLoadLibraryEx` invece di `LoadLibrary` o `LoadLibraryEx`. Le funzioni MFC gestiscono la sincronizzazione dei thread prima di caricare la DLL in modo esplicito. Le interfacce (prototipi di funzione) da `AfxLoadLibrary` e `AfxLoadLibraryEx` sono le stesse `LoadLibrary` e `LoadLibraryEx`.

Se Windows non riesce a caricare la DLL, il processo può tentare di risolvere l'errore. Ad esempio, potrebbe notificare all'utente l'errore, quindi richiedere un altro percorso alla DLL.

> [!IMPORTANT]
> Assicurarsi di specificare il percorso completo di tutte le dll. È possibile che la directory corrente venga cercata per prima quando i file vengono caricati da `LoadLibrary`. Se non si qualifica completamente il percorso del file, è possibile che venga caricato un file diverso da quello previsto. Quando si crea una DLL, usare l'opzione del linker [/DEPENDENTLOADFLAG](reference/dependentloadflag.md) per specificare un ordine di ricerca per le dipendenze DLL collegate in modo statico. All'interno delle dll, usare sia percorsi completi per le dipendenze caricate in modo esplicito che `LoadLibraryEx` o `AfxLoadLibraryEx` parametri di chiamata per specificare l'ordine di ricerca dei moduli. Per altre informazioni, vedere [sicurezza della libreria di collegamento dinamico](/windows/win32/dlls/dynamic-link-library-security) e [ordine di ricerca nella libreria a collegamento dinamico](/windows/win32/dlls/dynamic-link-library-search-order).

## <a name="what-do-you-want-to-do"></a>Come procedere

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#linking-implicitly)

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Ordine di ricerca della libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-search-order)

- [FreeLibrary e AfxFreeLibrary](freelibrary-and-afxfreelibrary.md)

- [GetProcAddress](getprocaddress.md)

## <a name="see-also"></a>Vedere anche

- [Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
