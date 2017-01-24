---
title: "&lt;fstream&gt; | Microsoft Docs"
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
  - "std::<fstream>"
  - "<fstream>"
  - "std.<fstream>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fstream (intestazione)"
ms.assetid: 660de351-0489-41df-b239-40e0cdcab46b
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;fstream&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce diverse classi che supportano operazioni iostream su sequenze archiviate in file esterni.  
  
## Sintassi  
  
```  
  
#include <fstream>  
  
```  
  
### Typedef  
  
|||  
|-|-|  
|[filebuf](../Topic/filebuf.md)|Tipo `basic_filebuf` specializzato nei parametri di modello `char`.|  
|[fstream](../Topic/fstream.md)|Tipo `basic_fstream` specializzato nei parametri di modello `char`.|  
|[ifstream](../Topic/ifstream.md)|Tipo `basic_ifstream` specializzato nei parametri di modello `char`.|  
|[ofstream](../Topic/ofstream.md)|Tipo `basic_ofstream` specializzato nei parametri di modello `char`.|  
|[wfstream](../Topic/wfstream.md)|Tipo `basic_fstream` specializzato nei parametri di modello `wchar_t`.|  
|[wifstream](../Topic/wifstream.md)|Tipo `basic_ifstream` specializzato nei parametri di modello `wchar_t`.|  
|[wofstream](../Topic/wofstream.md)|Tipo `basic_ofstream` specializzato nei parametri di modello `wchar_t`.|  
|[wfilebuf](../Topic/wfilebuf.md)|Tipo `basic_filebuf` specializzato nei parametri di modello `wchar_t`.|  
  
### Classi  
  
|||  
|-|-|  
|[basic\_filebuf](../standard-library/basic-filebuf-class.md)|La classe modello descrive un buffer del flusso che controlla la trasmissione di elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr**, verso e da una sequenza di elementi archiviati in un file esterno.|  
|[basic\_fstream](../standard-library/basic-fstream-class.md)|La classe modello descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati tramite un buffer del flusso della classe [basic\_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**\>, con elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr**.|  
|[basic\_ifstream](../standard-library/basic-ifstream-class.md)|La classe modello descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [basic\_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**\>, con elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr**.|  
|[basic\_ofstream](../standard-library/basic-ofstream-class.md)|La classe modello descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [basic\_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**\>, con elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr**.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)