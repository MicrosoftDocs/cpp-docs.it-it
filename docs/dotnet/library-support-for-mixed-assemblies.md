---
title: "Supporto delle librerie per assembly misti | Microsoft Docs"
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
  - "librerie [C++], assembly misti"
  - "assembly misti [C++], supporto per librerie"
  - "msvcm90[d].dll"
  - "msvcmrt[d].lib"
ms.assetid: 1229595c-9e9d-414d-b018-b4e4c727576d
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto delle librerie per assembly misti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ supporta l'utilizzo della libreria C\+\+ standard, della libreria CRT \(Common RunTime\), di ATL e di MFC per applicazioni compilate con [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  In tal modo, le applicazioni esistenti che utilizzano queste librerie possono utilizzare le funzionalità di .NET Framework.  
  
 Questo supporto include le nuove librerie DLL e di importazione riportate di seguito:  
  
-   Msvcmrt\[d\].lib se si esegue la compilazione con \/clr.  Gli assembly misti sono collegati a questa libreria di importazione.  
  
-   Msvcm90\[d\].dll e Msvcurt\[d\].lib se si esegue la compilazione con \/clr:pure.  La DLL è un assembly misto che fornisce supporto CRT \(C Run Time\) gestito e che fa parte di un assembly gestito installato nella Global Assembly Cache \(GAC\).   Gli assembly di tipo puro sono collegati a questa libreria di importazione e vengono associati alla libreria Msvcm90.dll.  
  
 Questo supporto offre numerosi vantaggi:  
  
-   Le librerie CRT e standard C\+\+ risultano disponibili sia per il codice misto che per quello di tipo puro.  Le librerie CRT e standard C\+\+ fornite non sono verificabili. In ultima analisi, le chiamate vengono ancora indirizzate alle stesse librerie CRT e standard C\+\+ utilizzate dal codice nativo.  
  
-   Corretta gestione delle eccezioni unificata nelle immagini miste e di tipo puro.  
  
-   Inizializzazione statica delle variabili C\+\+ nelle immagini miste o di tipo puro.  
  
-   Supporto per le variabili per dominio di applicazione e per processo nel codice gestito.  
  
-   Risolve i problemi di blocco del caricatore che erano presenti nelle DLL miste in Visual C\+\+ .NET e Visual C\+\+ .NET 2003.  
  
 Questo supporto presenta inoltre le seguenti limitazioni:  
  
-   È supportato solo il modello di DLL CRT \(sia per il codice compilato con \/clr che per quello compilato con \/clr:pure\).  
  
-   Non è possibile combinare oggetti misti e di tipo puro in un'unica immagine se questi oggetti utilizzano le librerie Visual C\+\+, ovvero tutti gli oggetti devono essere di tipo puro in un'immagine di tale tipo.  Se si tenta di combinare oggetti misti e di tipo puro nella stessa immagine, si verificheranno errori in fase di collegamento.  
  
 È necessario aggiornare Common Language Runtime \(CLR\) alla versione corrente poiché il funzionamento non è garantito con le versioni precedenti.  Il codice compilato con queste modifiche non sarà eseguibile in CLR versione 1.x.  
  
## Vedere anche  
 [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)