---
title: LoadLibrary e AfxLoadLibrary
ms.date: 05/24/2018
f1_keywords:
- LoadLibrary
helpviewer_keywords:
- DLLs [C++], AfxLoadLibrary
- DLLs [C++], LoadLibrary
- AfxLoadLibrary method
- LoadLibrary method
- explicit linking [C++]
ms.assetid: b4535d19-6243-4146-a31a-a5cca4c7c9e3
ms.openlocfilehash: c7700dd865e320686a2ad8bd036f207b9ecee6ac
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493215"
---
# <a name="loadlibrary-and-afxloadlibrary"></a>LoadLibrary e AfxLoadLibrary

Elabora la chiamata a [LoadLibraryExA](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexa) o [LoadLibraryExW](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) (o [AfxLoadLibrary](../mfc/reference/application-information-and-management.md#afxloadlibrary)) per il collegamento esplicito a una dll. Se la funzione ha esito positivo, esegue il mapping della DLL specificata nello spazio degli indirizzi del processo chiamante e restituisce un handle per la dll che può essere usata con altre funzioni nel collegamento esplicito, ad `GetProcAddress` esempio `FreeLibrary`e.

`LoadLibrary`tenta di individuare la DLL utilizzando la stessa sequenza di ricerca utilizzata per il collegamento implicito. Se il sistema non riesce a trovare la dll o se la funzione del punto di ingresso `LoadLibrary` restituisce false, restituisce null. Se la chiamata a `LoadLibrary` specifica un modulo dll già mappato nello spazio degli indirizzi del processo chiamante, la funzione restituisce un handle della dll e incrementa il conteggio dei riferimenti del modulo.

Se la DLL include una funzione del punto di ingresso, il sistema operativo chiama la funzione nel contesto del thread che ha chiamato `LoadLibrary`. La funzione del punto di ingresso non viene chiamata se la dll è già associata al processo a causa di una chiamata precedente `LoadLibrary` a che non ha una chiamata corrispondente `FreeLibrary` alla funzione.

Per le applicazioni MFC che caricano DLL di estensione MFC, è consigliabile `AfxLoadLibrary` usare `LoadLibrary`anziché. `AfxLoadLibrary`gestisce la sincronizzazione del thread prima `LoadLibrary`della chiamata a. L'interfaccia (prototipo di funzione `AfxLoadLibrary` ) per è `LoadLibrary`uguale a.

Se Windows non è in grado di caricare la DLL, il processo può tentare di correggere l'errore. Ad esempio, il processo potrebbe notificare all'utente l'errore e richiedere all'utente di specificare un altro percorso per la DLL.

> [!IMPORTANT]
> Assicurarsi di specificare il percorso completo di tutte le dll. La directory corrente viene cercata per prima quando vengono caricati i file. Se non si qualifica il percorso del file, è possibile che venga caricato un file che non è quello previsto. Un altro modo per evitare questo problema consiste nell'usare l'opzione del linker [/DEPENDENTLOADFLAG](reference/dependentloadflag.md) .

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#linking-implicitly)

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Ordine di ricerca della libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-search-order)

- [FreeLibrary e AfxFreeLibrary](freelibrary-and-afxfreelibrary.md)

- [GetProcAddress](getprocaddress.md)

## <a name="see-also"></a>Vedere anche

- [Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
