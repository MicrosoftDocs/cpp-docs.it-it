---
title: "Caricamento di tutte le importazioni per una DLL a caricamento ritardato | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__HrLoadAllImportsForDll (opzione del linker)"
ms.assetid: 975fcd97-1a56-4a16-9698-e1a249d2d592
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Caricamento di tutte le importazioni per una DLL a caricamento ritardato
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzando la funzione **\_\_HrLoadAllImportsForDll** definita nel file delayhlp.cpp è possibile indicare al linker di eseguire il caricamento di tutte le importazioni da una DLL specificata con l'opzione del linker [\/delayload](../../build/reference/delayload-delay-load-import.md).  
  
 Tale caricamento consente di specificare la gestione degli errori in un punto del codice senza dover utilizzare la gestione delle eccezioni per le chiamate effettive alle importazioni.  Il relativo utilizzo inoltre impedisce che, in seguito a un errore del codice di supporto relativo al caricamento di un'importazione, si verifichi un errore parziale anche nell'applicazione mentre è in corso un processo.  
  
 La chiamata a **\_\_HrLoadAllImportsForDll** non modifica il comportamento degli hook e la gestione degli errori. Per ulteriori informazioni; vedere [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md).  
  
 Il nome della DLL passato a **\_\_HrLoadAllImportsForDll** viene confrontato con il nome archiviato nella DLL e viene rilevata la distinzione tra maiuscole e minuscole.  
  
 Nel seguente esempio è illustrato come effettuare una chiamata a **\_\_HrLoadAllImportsForDll**:  
  
```  
if (FAILED(__HrLoadAllImportsForDll("delay1.dll"))) {  
   printf ( "failed on snap load, exiting\n" );  
   exit(2);  
}  
```  
  
## Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)