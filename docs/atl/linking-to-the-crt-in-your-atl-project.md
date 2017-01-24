---
title: "Linking to the CRT in Your ATL Project | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DllMainCRTStartup"
  - "wWinMainCRTStartup"
  - "WinMainCRTStartup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, C Run-Time library (CRT)"
  - "CRT, linking with ATL"
  - "DllMainCRTStartup method"
  - "WinMainCRTStartup method"
  - "wWinMainCRTStartup method"
ms.assetid: 650957ae-362c-4ecf-8b03-5d49138e8b5b
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Linking to the CRT in Your ATL Project
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[Librerie di runtime C](../c-runtime-library/crt-library-features.md) \(CRT\) fornisce molte utili funzioni che consentono di eseguire la programmazione di molto più semplice durante lo sviluppo ATL.  Qualsiasi collegamento di progetti ATL alla libreria CRT.  È possibile temere i vantaggi e gli svantaggi di collegare il metodo in [Vantaggi e compromessi del metodo utilizzato per accedere a CRT](../atl/benefits-and-tradeoffs-of-the-method-used-to-link-to-the-crt.md).  
  
## Effetti acceda a CRT all'immagine di programma  
 Se si utilizza il collegamento statico a CRT, il codice di CRT è posizionato nell'immagine eseguibile e non è necessario che la DLL CRT presente in un sistema per eseguire l'immagine.  Se si accede dinamicamente a CRT, i riferimenti al codice nella DLL CRT sono posizionati nell'immagine, ma non nel codice stesso.  In modo che l'immagine da eseguire in un sistema specificato, la DLL CRT deve essere presente in tale sistema.  Anche quando si esegue il collegamento dinamico a CRT, è possibile che il codice può essere collegato staticamente \(ad esempio, **DllMainCRTStartup**\).  
  
 Quando si collegano l'immagine, in modo esplicito o implicito si specifica un punto di ingresso dal sistema operativo chiamerà dopo il caricamento dell'immagine.  Per una DLL, il punto di ingresso predefinito è **DllMainCRTStartup**.  Per un EXE, è **WinMainCRTStartup**.  È possibile ignorare l'impostazione predefinita con l'opzione del linker \/ENTRY.  CRT fornisce un'implementazione per **DllMainCRTStartup**, **WinMainCRTStartup**e **wWinMainCRTStartup** \(il punto di ingresso Unicode per un EXE\).  Questi CRT dispone dei costruttori di chiamata punti di ingresso sugli oggetti globali e consentono di inizializzare altre strutture di dati utilizzate dalle funzioni CRT.  Questo codice di avvio aggiunge su 25K dell'immagine se è collegato staticamente.  Se è collegata, la maggior parte del codice è nella DLL, pertanto la dimensione dell'immagine rimane piccola.  
  
 Per ulteriori informazioni, vedere l'argomento [\/ENTRY \(Punto di ingresso\)](../build/reference/entry-entry-point-symbol.md)del linker.  
  
## Opzioni di ottimizzazione  
 Utilizzando l'opzione del linker \/OPT: NOWIN98 può inoltre ridurre un controllo per impostazione predefinita ATL a 10K, a scapito del tempo di caricamento aumentato nei sistemi Windows 98.  Per ulteriori informazioni sul collegamento opzioni, vedere [\/OPT \(Ottimizzazioni\)](../build/reference/opt-optimizations.md).  
  
## Vedere anche  
 [Programmazione con il codice runtime C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)   
 [Funzionamento della libreria di runtime](../build/run-time-library-behavior.md)