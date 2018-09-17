---
title: LoadLibrary e AfxLoadLibrary | Microsoft Docs
ms.custom: ''
ms.date: 05/24/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- LoadLibrary
dev_langs:
- C++
helpviewer_keywords:
- DLLs [C++], AfxLoadLibrary
- DLLs [C++], LoadLibrary
- AfxLoadLibrary method
- LoadLibrary method
- explicit linking [C++]
ms.assetid: b4535d19-6243-4146-a31a-a5cca4c7c9e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e2fe0b0523fb411b8ef4700a7dea7832c1cdfc52
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45726299"
---
# <a name="loadlibrary-and-afxloadlibrary"></a>LoadLibrary e AfxLoadLibrary

Elabora chiamata [LoadLibraryExA](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibraryexa) oppure [LoadLibraryExW](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibraryexw)(o [AfxLoadLibrary](../mfc/reference/application-information-and-management.md#afxloadlibrary)) per il collegamento esplicito a una DLL. Se la funzione ha esito positivo, associa la DLL specificata nello spazio degli indirizzi del processo chiamante e restituisce un handle alla DLL che può essere utilizzata con altre funzioni impiegate nel collegamento esplicito, ad esempio, `GetProcAddress` e `FreeLibrary`.

`LoadLibrary` tenta di individuare la DLL usando la stessa sequenza di ricerca che viene usata per il collegamento implicito. Se il sistema non è possibile trovare il file DLL o se la funzione di punto di ingresso restituisce FALSE, `LoadLibrary` restituisce NULL. Se la chiamata a `LoadLibrary` specifica un modulo DLL già associato allo spazio degli indirizzi del processo chiamante, la funzione restituisce un handle della DLL e incrementa il conteggio dei riferimenti del modulo.

Se la DLL include una funzione di punto di ingresso, il sistema operativo chiama la funzione nel contesto del thread che ha chiamato `LoadLibrary`. La funzione di punto di ingresso non viene chiamata se la DLL è già collegata al processo a causa di una chiamata precedente a `LoadLibrary` che non dispone di alcuna chiamata corrispondente al `FreeLibrary` (funzione).

Per le applicazioni MFC che caricano DLL estensione MFC, è consigliabile usare `AfxLoadLibrary` invece di `LoadLibrary`. `AfxLoadLibrary` gli handle di sincronizzazione di thread prima di chiamare `LoadLibrary`. L'interfaccia (prototipo di funzione) al `AfxLoadLibrary` equivale a `LoadLibrary`.

Se Windows non è possibile caricare la DLL, il processo può tentare la correzione dell'errore. Ad esempio, il processo è stato possibile notificare all'utente dell'errore e chiedere all'utente di specificare un altro percorso della DLL.

> [!IMPORTANT]
> Assicurarsi di specificare il percorso completo di tutte le DLL. La directory corrente viene cercata innanzitutto quando i file vengono caricati. Se non si specifica il percorso del file, potrebbe essere possibile caricare un file che non è quello previsto. Un altro modo per evitare questo problema consiste nell'usare la [/DEPENDENTLOADFLAG](../build/reference/dependentloadflag.md) l'opzione del linker.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Come collegare in modo implicito in una DLL](../build/linking-an-executable-to-a-dll.md#linking-implicitly)

- [Determinare quale metodo di collegamento da utilizzare](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Ordine di ricerca di libreria a collegamento dinamico](/windows/desktop/Dlls/dynamic-link-library-search-order)

- [FreeLibrary e AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)

- [GetProcAddress](../build/getprocaddress.md)

## <a name="see-also"></a>Vedere anche

- [DLL in Visual C++](../build/dlls-in-visual-cpp.md)
