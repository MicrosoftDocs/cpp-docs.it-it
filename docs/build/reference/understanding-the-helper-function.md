---
title: "Informazioni sulla funzione di supporto | Microsoft Docs"
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
  - "__delayLoadHelper (funzione)"
  - "__delayLoadHelper2 (funzione)"
  - "caricamento ritardato di DLL, funzione di supporto"
  - "delayhlp.cpp"
  - "delayimp.h"
  - "delayimp.lib"
  - "funzioni di supporto"
ms.assetid: 6279c12c-d908-4967-b0b3-cabfc3e91d3d
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Informazioni sulla funzione di supporto
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In fase di esecuzione il caricamento della DLL viene effettuato dalla funzione di supporto per il caricamento ritardato supportato dal linker.  È possibile personalizzare il comportamento della funzione di supporto scrivendo una propria funzione e collegandola al programma anziché utilizzare quella fornita in Delayimp.lib.  Una funzione di supporto è utilizzata per tutte le DLL a caricamento ritardato.  
  
 Se si desidera eseguire elaborazioni particolari basate sui nomi delle DLL o delle importazioni, è possibile fornire una versione personalizzata della funzione di supporto.  
  
 La funzione di supporto consente di effettuare quanto segue:  
  
-   Verificare che sia stato già caricato l'handle memorizzato per la libreria.  
  
-   Chiamare **LoadLibrary** per tentare il caricamento della DLL.  
  
-   Chiamare **GetProcAddress** per tentare di ottenere l'indirizzo della routine.  
  
-   Ritornare al thunk di caricamento ritardato delle importazioni per chiamare il punto di ingresso appena caricato.  
  
 Con la funzione di supporto è possibile richiamare un hook di notifica del programma nelle seguenti situazioni:  
  
-   All'avvio della funzione di supporto  
  
-   Immediatamente prima che **LoadLibrary** venga chiamato nella funzione di supporto  
  
-   Immediatamente prima che **GetProcAddress** venga chiamato nella funzione di supporto  
  
-   Se l'esito della chiamata a **LoadLibrary** nella funzione di supporto è stato negativo  
  
-   Se l'esito della chiamata a **GetProcAddress** nella funzione di supporto è stato negativo  
  
-   Al termine dell'esecuzione della funzione di supporto  
  
 È possibile che il valore restituito da ciascuno di questi punti di hook modifichi in qualche maniera la normale elaborazione della routine di supporto, ad eccezione del ritorno al thunk di caricamento ritardato delle importazioni.  
  
 Il codice di supporto predefinito è contenuto in Delayhlp.cpp e Delayimp.h \(in vc\\include\) ed è compilato in Delayimp.lib \(in vc\\lib\).  A meno che non venga scritta una funzione di supporto personalizzata, questa libreria dovrà essere inclusa nelle compilazioni.  
  
 La funzione di supporto è descritta nei seguenti argomenti:  
  
-   [Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C\+\+ 6.0](../../build/reference/changes-in-the-dll-delayed-loading-helper-function-since-visual-cpp-6-0.md)  
  
-   [Convenzioni di chiamata, parametri e tipo restituito](../../build/reference/calling-conventions-parameters-and-return-type.md)  
  
-   [Struttura e definizioni di costanti](../../build/reference/structure-and-constant-definitions.md)  
  
-   [Calcolo dei valori necessari](../../build/reference/calculating-necessary-values.md)  
  
-   [Scaricamento di una DLL a caricamento ritardato](../../build/reference/explicitly-unloading-a-delay-loaded-dll.md)  
  
## Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)