---
title: LoadLibrary e AfxLoadLibrary | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: bc4e211259e6c0a483f73094c442c034cd649616
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="loadlibrary-and-afxloadlibrary"></a>LoadLibrary e AfxLoadLibrary
Elabora chiamata [LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187) (o [AfxLoadLibrary](../mfc/reference/application-information-and-management.md#afxloadlibrary)) per il collegamento esplicito a una DLL. Se la funzione ha esito positivo, associa la DLL specificata nello spazio degli indirizzi del processo chiamante e restituisce un handle alla DLL che può essere utilizzato con altre funzioni nel collegamento esplicito, ad esempio, `GetProcAddress` e `FreeLibrary`.  
  
 `LoadLibrary` tenta di individuare la DLL utilizzando la stessa sequenza di ricerca utilizzato per il collegamento implicito. Se il sistema non è possibile trovare la DLL o se la funzione di punto di ingresso restituisce FALSE, `LoadLibrary` restituisce NULL. Se la chiamata a `LoadLibrary` specifica di un modulo DLL che è già mappato nello spazio degli indirizzi del processo chiamante, la funzione restituisce un handle di file DLL e incrementa il conteggio dei riferimenti del modulo.  
  
 Se la DLL contiene una funzione di punto di ingresso, il sistema operativo chiama la funzione nel contesto del thread che ha chiamato `LoadLibrary`. La funzione di punto di ingresso non viene chiamata se la DLL è già collegata al processo a causa di una chiamata precedente a `LoadLibrary` che non dispone di alcuna chiamata corrispondente al `FreeLibrary` (funzione).  
  
 Per le applicazioni MFC che caricano DLL di estensione MFC, è consigliabile utilizzare `AfxLoadLibrary` anziché `LoadLibrary`. `AfxLoadLibrary` gli handle di sincronizzazione di thread prima di chiamare `LoadLibrary`. L'interfaccia (prototipo di funzione) per `AfxLoadLibrary` equivale `LoadLibrary`.  
  
 Se Windows non è possibile caricare la DLL, il processo può tentare di correggere l'errore. Ad esempio, il processo potrebbe informare l'utente dell'errore e chiedere all'utente di specificare un percorso diverso per la DLL.  
  
> [!IMPORTANT]
>  Assicurarsi di specificare il percorso completo di tutte le DLL. La directory corrente viene cercata innanzitutto quando vengono caricati i file. Se non si specifica il percorso del file, è possibile caricare un file non è quello previsto.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Come collegare in modo implicito a una DLL](../build/linking-an-executable-to-a-dll.md#linking-implicitly)  
  
-   [Determinare quale metodo di collegamento](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Il percorso di ricerca utilizzato da Windows per individuare una DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
-   [FreeLibrary e AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)  
  
-   [GetProcAddress](../build/getprocaddress.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)   
 [LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187)   
 [AfxLoadLibrary](../mfc/reference/application-information-and-management.md#afxloadlibrary)