---
title: "LoadLibrary e AfxLoadLibrary | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "LoadLibrary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AfxLoadLibrary (metodo)"
  - "DLL [C++], AfxLoadLibrary"
  - "DLL [C++], LoadLibrary"
  - "collegamento esplicito [C++]"
  - "LoadLibrary (metodo)"
ms.assetid: b4535d19-6243-4146-a31a-a5cca4c7c9e3
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# LoadLibrary e AfxLoadLibrary
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I processi chiamano [LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187) \(o [AfxLoadLibrary](../Topic/AfxLoadLibrary.md)\) per collegarsi in modo esplicito a una DLL.  Se eseguita correttamente, la funzione mappa la DLL specificata sullo spazio degli indirizzi del processo chiamante e restituisce alla DLL un handle che può essere utilizzato con altre funzioni impiegate nel collegamento esplicito, ad esempio `GetProcAddress` e `FreeLibrary`.  
  
 `LoadLibrary` tenta di individuare la DLL utilizzando la stessa sequenza di ricerca impiegata per il collegamento implicito.  Se il sistema non è in grado di trovare la DLL o se la funzione del punto di ingresso restituisce FALSE, `LoadLibrary` restituisce NULL.  Se la chiamata a `LoadLibrary` specifica un modulo DLL già associato allo spazio degli indirizzi del processo chiamante, la funzione restituisce un handle della DLL e incrementa il conteggio dei riferimenti del modulo.  
  
 Se la DLL dispone di una funzione del punto di ingresso, il sistema operativo chiama la funzione nel contesto del thread che ha chiamato `LoadLibrary`.  La funzione del punto di ingresso non viene chiamata se la DLL è già associata al processo per via di una chiamata precedente a `LoadLibrary` senza chiamata corrispondente alla funzione `FreeLibrary`.  
  
 Per le applicazioni MFC che caricano DLL di estensione, si consiglia di utilizzare `AfxLoadLibrary` anziché `LoadLibrary`.  `AfxLoadLibrary` gestisce la sincronizzazione tra thread prima della chiamata a `LoadLibrary`.  L'interfaccia \(prototipo di funzione\) per `AfxLoadLibrary` è la stessa di `LoadLibrary`.  
  
 Se risulta impossibile caricare la DLL, il processo può tentare la correzione dell'errore.  Ad esempio, può notificare l'errore all'utente e richiedere che venga specificato un percorso diverso per la DLL.  
  
> [!IMPORTANT]
>  Se il codice deve essere eseguito in Windows NT 4, Windows 2000 o Windows XP \(versione precedente alla SP1\), accertarsi di specificare il percorso completo delle DLL.  In questi sistemi operativi, al momento del caricamento dei file viene prima effettuata una ricerca nella directory corrente.  Se non si specifica il percorso del file, è possibile che venga caricato un file diverso da quello desiderato.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Collegamento implicito](../build/linking-implicitly.md)  
  
-   [Scelta del metodo di collegamento da utilizzare](../build/determining-which-linking-method-to-use.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Percorso di ricerca utilizzato da Windows per l'individuazione di una DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
-   [FreeLibrary e AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)  
  
-   [GetProcAddress](../build/getprocaddress.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)   
 [LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187)   
 [AfxLoadLibrary](../Topic/AfxLoadLibrary.md)