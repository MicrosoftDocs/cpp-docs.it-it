---
title: "Scelta del formato dei file di input con estensione netmodule | Microsoft Docs"
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
ms.assetid: 4653d1bd-300f-4083-86f5-d1a06f44e61c
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Scelta del formato dei file di input con estensione netmodule
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un file MSIL .obj \(compilato con l'opzione [\/clr](../../build/reference/clr-common-language-runtime-compilation.md)\) può essere utilizzato anche come file .netmodule.  Nei file obj sono presenti metadati e simboli nativi,  I file .netmodule contengono solo metadati.  
  
 È possibile passare un file obj MISL a un qualsiasi altro compilatore Visual Studio tramite l'opzione del compilatore \/addmodule, tenendo comunque presente che il file obj diventerà parte dell'assembly risultante e dovrà quindi essere distribuito con l'assembly.  L'opzione del compilatore \/addmodule è ad esempio disponibile in Visual C\# e Visual Basic.  
  
> [!NOTE]
>  Nella maggior parte dei casi, sarà necessario passare al linker il file con .obj dalla compilazione che ha creato il .netmodule.  Un'eccezione è rappresentata dal .netmodule se è stato creato con [\/clr:pure](../../build/reference/clr-common-language-runtime-compilation.md).  Passando un file di modulo MSIL .netmodule o .dll al linker può generare l'errore LNK1107.  
  
 I file .obj, con i file .h associati, a cui si fa riferimento mediante \#include nell'origine, consentono alle applicazioni C\+\+ di utilizzare i tipi nativi nel modulo, mentre in un file .netmodule, solo i tipi gestiti possono essere utilizzati da un'applicazione C\+\+.  Se si tenta di passare un file obj a \#using, le informazioni sui tipi nativi non risulteranno disponibili. Passare a \#include il file con estensione h del file obj.  
  
 Gli altri compilatori Visual Studio possono utilizzare solo i tipi gestiti di un modulo.  
  
 Utilizzare il seguente per determinare se è necessario utilizzare un file .netmodule o .obj come modulo di input per il linker di Visual C\+\+:  
  
-   Se si sta compilando con un compilatore di Visual Studio diverso da Visual C\+\+, si genera un .netmodule e si utilizza il .netmodule come input del linker.  
  
-   Se si utilizza il compilatore Visual C\+\+ per creare moduli e questi ultimi verranno utilizzati per compilare un oggetto diverso da una libreria, utilizzare come input di modulo del linker i file .obj creati dal compilatore; non usare il file .netmodule come input.  
  
-   Se i moduli verranno utilizzati per compilare una libreria nativa \(non gestita\), utilizzare come input di modulo del linker i file obj e creare un file di libreria lib.  
  
-   Se i moduli verranno utilizzati per compilare una libreria gestita e ciascun input di modulo del linker sarà verificabile \(ovvero creato con \/clr:safe\), utilizzare come input di modulo del linker i file .obj e generare un file di libreria con .dll \(assembly\) o .netmodule \(modulo\).  
  
-   Se i moduli verranno utilizzati per compilare una libreria gestita e se tutto l'input del modulo al linker verrà prodotto con \/clr:pure o \/clr:safe, utilizzare i file .obj come input del modulo al linker e generare un .dll \(assembly\) o .netmodule \(modulo\) se si desidera soltanto esporre tipi gestiti dalla libreria.  Se si desidera che i tipi gestiti della libreria, oltre a essere esposti, vengano anche utilizzati dalle applicazioni C\+\+, la libreria dovrà essere composta dai file obj relativi ai moduli componenti delle librerie. Poiché verranno distribuiti, è possibile fare riferimento ai file con estensione h per ciascun modulo dal codice sorgente con \#include.  
  
-   Se i moduli verranno utilizzati per compilare una libreria gestita e se uno o più input di modulo del linker verranno creati con \/clr, utilizzare come input di modulo del linker i file obj e generare un file di libreria dll \(assembly\).  Se si desidera che i tipi gestiti della libreria, oltre a essere esposti, vengano anche utilizzati dalle applicazioni C\+\+, la libreria dovrà essere composta dai file obj relativi ai moduli componenti delle librerie. Poiché verranno distribuiti, è possibile fare riferimento ai file con estensione h per ciascun modulo dal codice sorgente con \#include.  
  
## Vedere anche  
 [.File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)