---
title: "Collegamento implicito | Microsoft Docs"
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
  - "collegamento implicito [C++]"
  - "collegamento dinamico in fase di carico [C++]"
  - "collegamento di carico statico [C++]"
ms.assetid: 3ea4c316-4e70-4111-9944-c1b4ad00c605
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Collegamento implicito
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per effettuare il collegamento implicito a una DLL, gli eseguibili devono ottenere dal fornitore della DLL gli elementi indicati di seguito.  
  
-   Un file di intestazione \(file h\) contenente le dichiarazioni delle funzioni esportate e\/o delle classi C\+\+.  Tutte le classi, le funzioni e i dati dovrebbero avere `__declspec(dllimport)`. Per ulteriori informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).  
  
-   Una libreria di importazione, [file LIB](../build/reference/dot-lib-files-as-linker-input.md), alla quale collegarsi. Il linker crea la libreria di importazione quando viene compilata la DLL.  
  
-   La DLL vera e propria \(file dll\).  
  
 Gli eseguibili che utilizzano la DLL devono includere il file di intestazione contenente le funzioni esportate, o le classi C\+\+, in ciascun file sorgente che contiene chiamate alle funzioni esportate.  Dal punto di vista del codice, le chiamate alle funzioni esportate sono simili a qualsiasi chiamata di funzione.  
  
 Per compilare il file eseguibile chiamante, è necessario collegarsi alla libreria di importazione.  Se si utilizza un progetto makefile esterno, specificare il nome di file della libreria di importazione in cui sono elencati altri file oggetto \(obj\) o librerie a cui si desidera collegarsi.  
  
 Il sistema operativo deve essere in grado di individuare il file DLL quando viene caricato l'eseguibile chiamante.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Collegamento esplicito](../build/linking-explicitly.md)  
  
-   [Scelta del metodo di collegamento da utilizzare](../build/determining-which-linking-method-to-use.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di librerie di importazione e file di esportazione](../build/reference/working-with-import-libraries-and-export-files.md)  
  
-   [Percorso di ricerca utilizzato da Windows per l'individuazione di una DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
## Vedere anche  
 [Collegamento di un eseguibile a una DLL](../build/linking-an-executable-to-a-dll.md)