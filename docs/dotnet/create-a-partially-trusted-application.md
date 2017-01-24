---
title: "Procedura: creare un&#39;applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/clr (opzione del compilatore) [C++], applicazioni con attendibilità parziale"
  - "interoperabilità [C++], applicazioni con attendibilità parziale"
  - "interoperabilità [C++], applicazioni con attendibilità parziale"
  - "assembly misti [C++], applicazioni con attendibilità parziale"
  - "msvcm90[d].dll"
  - "applicazioni con attendibilità parziale [C++]"
ms.assetid: 4760cd0c-4227-4f23-a7fb-d25b51bf246e
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: creare un&#39;applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come creare un'applicazione Common Language Runtime parzialmente attendibile con [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] rimuovendo la dipendenza da msvcm90.dll.  
  
 Un'applicazione Visual C\+\+ compilata con **\/clr** presenterà una dipendenza da msvcm90.dll, che fa parte della libreria di runtime C.  Quando si desidera che l'applicazione venga utilizzata in un ambiente parzialmente attendibile, CLR applicherà alcune regole di sicurezza contro l'accesso di codice alla DLL.  Sarà pertanto necessario rimuovere tale dipendenza poiché msvcm90.dll contiene codice nativo a cui non possono essere applicati criteri di sicurezza contro l'accesso di codice.  
  
 Se l'applicazione non utilizza alcuna funzionalità della libreria di runtime C e si desidera rimuovere la dipendenza da questa libreria dal codice, sarà necessario utilizzare l'opzione del linker **\/NODEFAULTLIB:msvcmrt.lib** ed eseguire il collegamento a ptrustm.lib o ptrustmd.lib.  Queste librerie contengono file oggetto per l'inizializzazione e l'annullamento dell'inizializzazione di un'applicazione, delle classi di eccezioni utilizzate dal codice di inizializzazione e del codice per la gestione delle eccezioni gestite.  Con il collegamento a una di queste librerie viene rimossa qualsiasi dipendenza da msvcm90.dll.  
  
> [!NOTE]
>  Per le applicazioni che utilizzano le librerie ptrust, l'ordine di annullamento dell'inizializzazione degli assembly può variare.  Per le applicazioni normali, gli assembly vengono in genere scaricati nell'ordine inverso rispetto a quello di caricamento. Questo comportamento non è tuttavia garantito.  Per le applicazioni parzialmente attendibili, gli assembly vengono in genere scaricati nello stesso ordine in cui vengono caricati.  Anche in questo caso, tale comportamento non è garantito.  
  
### Per creare un'applicazione mista \(\/clr\) parzialmente attendibile  
  
1.  Per rimuovere la dipendenza da msvcm90.dll, è necessario specificare che questa libreria non dovrà essere inclusa dal linker utilizzando l'opzione **\/NODEFAULTLIB:msvcmrt.lib** del linker.  Per informazioni su come eseguire questa operazione mediante l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [\/NODEFAULTLIB \(Ignora librerie\)](../build/reference/nodefaultlib-ignore-libraries.md).  
  
2.  Aggiungere una delle librerie ptrustm alle dipendenze di input del linker.  Se si compila l'applicazione in modalità di rilascio, utilizzare ptrustm.lib.  Per la modalità debug, utilizzare ptrustmd.lib.  Per informazioni su come eseguire questa operazione mediante l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [File lib come input del linker](../build/reference/dot-lib-files-as-linker-input.md).  
  
## Vedere anche  
 [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)   
 [Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md)   
 [Supporto delle librerie per assembly misti](../dotnet/library-support-for-mixed-assemblies.md)   
 [\/link \(passaggio delle opzioni al linker\)](../build/reference/link-pass-options-to-linker.md)   
 [PAVE Security in Native and .NET Framework Code](http://msdn.microsoft.com/it-it/bd61be84-c143-409a-a75a-44253724f784)