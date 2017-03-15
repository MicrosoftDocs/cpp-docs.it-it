---
title: "Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__delayLoadHelper2 (funzione)"
  - "caricamento ritardato di DLL, novità"
  - "funzioni di supporto, novità"
  - "PFromRva (metodo)"
ms.assetid: 99f0be69-105d-49ba-8dd5-3be7939c0c72
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Se sul computer sono presenti più versioni di Visual C\+\+ oppure è stata definita una funzione di supporto personalizzata, le modifiche apportate alla funzione di supporto del caricamento ritardato delle DLL possono generare diversi effetti.  Di seguito è riportato un esempio.  
  
-   **\_\_delayLoadHelper** diventa **\_\_delayLoadHelper2**  
  
-   **\_\_pfnDliNotifyHook** diventa **\_\_pfnDliNotifyHook2**  
  
-   **\_\_pfnDliFailureHook** diventa **\_\_pfnDliFailureHook2**  
  
-   **\_\_FUnloadDelayLoadedDLL** diventa **\_\_FUnloadDelayLoadedDLL2**  
  
> [!NOTE]
>  Se si utilizza la funzione di supporto predefinita, questi cambiamenti non avranno effetto.  La modalità di richiamo del linker non viene modificata.  
  
## Più versioni di C\+\+  
 Se sul computer sono disponibili più versioni di Visual C\+\+, assicurarsi che il linker corrisponda a delayimp.lib.  Se non c'è corrispondenza, verrà visualizzato un errore del linker che segnalerà `___delayLoadHelper2@8` o `___delayLoadHelper@8` come simbolo esterno non risolto.  Il primo errore indica la presenza di un nuovo linker con una versione di delayimp.lib obsoleta, mentre il secondo indica la presenza di un linker precedente con una nuova versione di delayimp.lib.  
  
 In caso di errore di linker non risolto, eseguire [dumpbin \/linkermember](../../build/reference/linkermember.md):1 sulla delayimp.lib che si ritiene debba contenere la funzione di supporto per individuare la funzione di supporto definita.  La funzione di supporto può essere definita anche in un file oggetto. Eseguire [dumpbin \/symbols](../../build/reference/symbols.md) e cercare `delayLoadHelper(2)`.  
  
 Se si dispone del linker di Visual C\+\+ 6.0, procedere nel modo seguente:  
  
-   Eseguire dumpbin sul file LIB oppure OBJ del supporto per il caricamento ritardato per determinare se definisce **\_\_delayLoadHelper2**.  In caso contrario, il collegamento avrà esito negativo.  
  
-   Definire **\_\_delayLoadHelper** nel file LIB oppure OBJ del supporto per il caricamento ritardato.  
  
## Funzione di supporto definita dall'utente  
 Se è stata definita una funzione di supporto personalizzata e si utilizza la versione corrente di Visual C\+\+, procedere nel modo seguente:  
  
-   Rinominare la funzione di supporto come **\_\_delayLoadHelper2**.  
  
-   Poiché i puntatori nel descrittore del ritardo \(ImgDelayDescr in delayimp.h\) sono stati modificati da indirizzi assoluti \(VA\) a indirizzi relativi \(RVA\) per garantirne il funzionamento corretto sia in programmi a 32 bit che in programmi a 64 bit, è necessario convertirli nuovamente in puntatori.  È stata introdotta una nuova funzione: PFromRva, in delayhlp.cpp.  Tale funzione può essere utilizzata in tutti i campi del descrittore per convertirli nuovamente in puntatori a 32 o 64 bit.  La funzione di supporto del caricamento ritardato predefinita continua a rappresentare un valido modello da utilizzare come esempio.  
  
## Caricamento di tutte le importazioni per una DLL a caricamento ritardato  
 Il linker consente di caricare tutte le importazioni da una DLL specificata come DLL a caricamento ritardato.  Per ulteriori informazioni, vedere [Caricamento di tutte le importazioni per una DLL a caricamento ritardato](../../build/reference/loading-all-imports-for-a-delay-loaded-dll.md).  
  
## Vedere anche  
 [Understanding the Helper Function](http://msdn.microsoft.com/it-it/6279c12c-d908-4967-b0b3-cabfc3e91d3d)