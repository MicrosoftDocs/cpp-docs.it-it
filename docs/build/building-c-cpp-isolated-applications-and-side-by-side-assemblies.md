---
title: "Compilazione di applicazioni isolate C/C++ e di assembly side-by-side | Microsoft Docs"
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
  - "applicazioni isolate [C++]"
  - "WinSxS [C++]"
  - "assembly cache nativa [C++]"
  - "compilazioni [C++], applicazioni isolate"
  - "applicazioni side-by-side [C++]"
  - "compilazioni [C++], assembly side-by-side"
ms.assetid: 9465904e-76f7-48bd-bb3f-c55d8f1699b6
caps.latest.revision: 20
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compilazione di applicazioni isolate C/C++ e di assembly side-by-side
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ supporta un modello di distribuzione per applicazioni client Windows basato sui concetti di [applicazioni isolate](http://msdn.microsoft.com/library/aa375190) e [assembly side\-by\-side](_win32_side_by_side_assemblies). Per impostazione predefinita, Visual C\+\+ crea tutte le applicazioni C\/C\+\+ native come applicazioni isolate che usano [manifesti](http://msdn.microsoft.com/library/aa375365) per descrivere le relative dipendenze da librerie di Visual C\+\+.  
  
 La creazione di programmi C\/C\+\+ come applicazioni isolate presenta numerosi vantaggi. Ad esempio, un'applicazione isolata non è influenzata dall'installazione o disinstallazione di librerie di Visual C\+\+ da parte di altre applicazioni C\/C\+\+. Le librerie di Visual C\+\+ usate da applicazioni isolate possono essere comunque ridistribuite nella cartella locale dell'applicazione o tramite installazione nella cache assembly nativa \(WinSxS\). La manutenzione delle librerie di Visual C\+\+ per le applicazioni già distribuite può essere tuttavia semplificata tramite un [file di configurazione dell'editore](http://msdn.microsoft.com/library/aa375680). Il modello di distribuzione basato su applicazioni isolate aiuta ad assicurare che le applicazioni C\/C\+\+ in esecuzione in un computer specifico usino la versione più recente delle librerie di Visual C\+\+, permettendo comunque al tempo stesso agli amministratori di sistema e agli autori di applicazioni di controllare l'associazione esplicita delle versioni delle applicazioni ai rispettivi file DLL dipendenti.  
  
 Questa sezione illustra come creare un'applicazione C\/C\+\+ come applicazione isolata e come assicurarne l'associazione alle librerie di Visual C\+\+ tramite un manifesto. Le informazioni disponibili in questa sezione sono applicabili principalmente ad applicazioni Visual C\+\+ native o non gestite. Per informazioni sulla distribuzione di applicazioni native create con Visual C\+\+, vedere [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md).  
  
## In questa sezione  
 [Concetti di applicazioni isolate e assembly side\-by\-side](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)  
  
 [Compilazione di applicazioni isolate C\/C\+\+](../build/building-c-cpp-isolated-applications.md)  
  
 [Compilazione di assembly side\-by\-side C\/C\+\+](../build/building-c-cpp-side-by-side-assemblies.md)  
  
 [Procedura: compilare componenti COM senza registrazione](../build/how-to-build-registration-free-com-components.md)  
  
 [Procedura: compilare applicazioni isolate per l'utilizzo di componenti COM](../build/how-to-build-isolated-applications-to-consume-com-components.md)  
  
 [Informazioni sulla generazione di manifesti per programmi C\/C\+\+](../build/understanding-manifest-generation-for-c-cpp-programs.md)  
  
 [Risoluzione dei problemi](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md)  
  
## Sezioni correlate  
 [Applicazioni isolate e assembly affiancati](http://msdn.microsoft.com/library/dd408052)  
  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)