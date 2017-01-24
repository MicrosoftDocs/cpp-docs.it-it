---
title: "Concetti di applicazioni isolate e assembly side-by-side | Microsoft Docs"
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
  - "assembly side-by-side [C++]"
  - "assembly isolati [C++]"
ms.assetid: 945a885f-cb3e-4c8a-a0b9-2c2e3e02cc50
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Concetti di applicazioni isolate e assembly side-by-side
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'applicazione è considerata un'[applicazione isolata](http://msdn.microsoft.com/library/aa375190) se tutti i suoi componenti sono [assembly side\-by\-side](_win32_side_by_side_assemblies). Un assembly affiancato è una raccolta di risorse, ovvero un gruppo di DLL, classi Windows, server COM, librerie di tipi o interfacce, distribuite insieme e rese disponibili a un'applicazione affinché vengano utilizzate in fase di esecuzione. In genere, un assembly side\-by\-side è costituito da una o più DLL.  
  
## Assembly condiviso o privato  
 Un assembly side\-by\-side può essere condiviso o privato. Gli [assembly affiancati condivisi](https://msdn.microsoft.com/en-us/library/aa375996.aspx) possono essere usati da più applicazioni nei cui manifesti è specificata una dipendenza dall'assembly. Più versioni di un assembly affiancato sono condivisibili da applicazioni diverse eseguite contemporaneamente. Un [assembly privato](_win32_private_assemblies) è un assembly distribuito insieme a un'applicazione per l'utilizzo esclusivo da parte di tale applicazione. Gli assembly privati vengono installati nella cartella che contiene il file eseguibile dell'applicazione o in una delle relative sottocartelle.  
  
## Manifesti e ordine di ricerca  
 Le applicazioni isolate e gli assembly affiancati sono descritti dai [manifesti](http://msdn.microsoft.com/library/aa375365). Un manifesto è un file XML che può essere esterno o incorporato in un'applicazione o in un assembly come risorsa. Il file manifesto di un'applicazione isolata viene utilizzato per gestire i nomi e le versioni di assembly side\-by\-side condivisi a cui l'applicazione deve essere associata in fase di esecuzione. Nel manifesto di un assembly side\-by\-side vengono specificati i nomi, le versioni, le risorse e gli assembly dipendenti degli assembly side\-by\-side. Nel caso di un assembly affiancato condiviso, il manifesto viene installato nella cartella %WINDIR%\\WinSxS\\Manifests\\. Nel caso di un assembly privato, è consigliabile includere il manifesto nella DLL come risorsa con ID uguale a 1. È inoltre possibile assegnare all'assembly privato lo stesso nome della DLL. Per ulteriori informazioni, vedere [assembly privati](_win32_private_assemblies).  
  
 In fase di esecuzione, Windows utilizza le informazioni sull'assembly contenute nel manifesto dell'applicazione per cercare e caricare l'assembly affiancato corrispondente. Se un'applicazione isolata specifica una dipendenza da un assembly, il sistema operativo cerca l'assembly prima tra quelli condivisi nella cache di assembly nativi nella cartella %WINDIR%\\WinSxS\\. Se non trova l'assembly richiesto, il sistema operativo cerca un assembly privato in una cartella della struttura di directory dell'applicazione. Per altre informazioni, vedere [Assembly Searching Sequence](http://msdn.microsoft.com/library/aa374224) \(Sequenza di ricerca dell'assembly\).  
  
## Modifica delle dipendenze  
 È possibile modificare le dipendenze dell'assembly affiancato dopo la distribuzione dell'applicazione modificando i [file di configurazione dell'editore](http://msdn.microsoft.com/library/aa375682) e i [file di configurazione dell'applicazione](http://msdn.microsoft.com/library/aa374182). Un file di configurazione dell'editore, noto anche come file dei criteri dell'editore, è un file XML che reindirizza a livello globale le applicazioni e gli assembly da una versione di un assembly affiancato a un'altra versione dello stesso assembly. È ad esempio possibile modificare una dipendenza quando viene distribuita una correzione rapida per la sicurezza per un assembly affiancato e si desidera reindirizzare tutte le applicazioni alla versione corretta. Un file di configurazione dell'applicazione è un file XML che reindirizza un'applicazione specifica da una versione di un assembly affiancato a un'altra versione dello stesso assembly. È possibile utilizzare un file di configurazione dell'applicazione per reindirizzare un'applicazione specifica a una versione di un assembly affiancato diversa da quella definita nel file di configurazione dell'editore. Per altre informazioni, vedere [Configurazione](http://msdn.microsoft.com/library/aa375123).  
  
## Librerie di Visual C\+\+  
 In Visual Studio 2005 e Visual Studio 2008 le librerie ridistribuibili come ATL, MFC, CRT, C\+\+ standard, OpenMP e MSDIA vengono distribuite come assembly affiancati condivisi nella cache degli assembly nativi. Nella versione corrente le librerie ridistribuibili utilizzano la distribuzione centrale. Per impostazione predefinita, tutte le applicazioni compilate utilizzando Visual C\+\+ vengono compilate con il manifesto incorporato nel file binario finale e il manifesto descrive le dipendenze del file binario nelle librerie di Visual C\+\+. Per informazioni dettagliate sulla generazione del manifesto per le applicazioni Visual C\+\+, vedere [Informazioni sulla generazione di manifesti per programmi C\/C\+\+](../build/understanding-manifest-generation-for-c-cpp-programs.md) Un manifesto non è necessario per le applicazioni collegate staticamente alle librerie che utilizzano o che utilizzano la distribuzione locale. Per altre informazioni sulla distribuzione, vedere [Distribuzione in Visual C\+\+](../ide/deployment-in-visual-cpp.md).  
  
## Vedere anche  
 [Compilazione di applicazioni isolate C\/C\+\+ e di assembly side\-by\-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)