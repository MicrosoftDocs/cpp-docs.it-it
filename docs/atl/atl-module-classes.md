---
title: "Classi di modulo ATL | Microsoft Docs"
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
  - "ATL, classi module"
  - "CComModule (classi), novità"
  - "module (classi)"
ms.assetid: fd75382d-c955-46ba-a38e-37728b7fa00f
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi di modulo ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono illustrate le classi del modulo che sono nuovi in ATL 7,0.  
  
## Classi di sostituzione CComModule  
 Versioni precedenti `CComModule`utilizzato ATL.  In ATL 7,0, la funzionalità `CComModule` viene sostituita da più classi:  
  
-   [CAtlBaseModule](../atl/reference/catlbasemodule-class.md) contiene le informazioni richieste dalla maggior parte delle applicazioni che utilizzano ATL.  Contiene il HINSTANCE del modulo e l'istanza di risorse.  
  
-   [CAtlComModule](../atl/reference/catlcommodule-class.md) contiene le informazioni richieste da classi COM in ATL.  
  
-   [CAtlWinModule](../atl/reference/catlwinmodule-class.md) contiene le informazioni richieste dalle classi frequentemente di windows in ATL.  
  
-   [CAtlDebugInterfacesModule](../atl/reference/catldebuginterfacesmodule-class.md) contiene il supporto per il debug dell'interfaccia.  
  
-   [CAtlModule](../atl/reference/catlmodule-class.md) seguente `CAtlModule`alle classi derivate sono personalizzate per contenere le informazioni richieste in un tipo di applicazione particolare.  La maggior parte dei membri in queste classi possono essere sottoposti a override:  
  
    -   [CAtlDllModuleT](../atl/reference/catldllmodulet-class.md) utilizzato nelle applicazioni di DLL.  Fornisce il codice per le esportazioni standard.  
  
    -   [CAtlExeModuleT](../atl/reference/catlexemodulet-class.md) utilizzato nelle applicazioni EXE.  Fornisce il codice richiesto in un file EXE.  
  
    -   [CAtlServiceModuleT](../atl/reference/catlservicemodulet-class.md) fornisce il supporto per creare Windows NT e i servizi Windows 2000.  
  
 `CComModule` è ancora disponibile per compatibilità con le versioni precedenti.  
  
## Motivi per distribuire funzionalità di CComModule  
 La funzionalità `CComModule` viene distribuita in diverse nuove classi per i seguenti motivi:  
  
-   Rendi funzionalità in `CComModule` granulare.  
  
     Supporto a COM, da windows, sul debug dell'interfaccia e \(DLL o EXE\) alle funzionalità specifiche dell'applicazione è ora in classi separate.  
  
-   Automaticamente dichiarare un'istanza globale di questi moduli.  
  
     Un'istanza globale " classi obbligatorie del modulo viene collegata nel progetto.  
  
-   Rimuovere la necessità di chiamare L'implementazione e definire i metodi.  
  
     I metodi di ricerca e di Init vengono immessi nei costruttori e distruttori per le classi di modulo, non è più presente una occorre chiamare L'implementazione e il termine.  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [Class Overview](../atl/atl-class-overview.md)