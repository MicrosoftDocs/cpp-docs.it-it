---
title: "File creati per progetti CLR | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - ".NET (applicazioni), C++"
  - "progetti Visual C++, programmazione CLR"
ms.assetid: 59ae9020-5f26-4ad0-bbdd-97c2e2023a20
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# File creati per progetti CLR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si utilizzano i modelli di Visual C\+\+ vengono creati diversi file a seconda del modello utilizzato.  La tabella riportata di seguito contiene l'elenco di tutti i file creati da template di progetto per i progetti di .NET Framework.  
  
|Nome file|Descrizione file|  
|---------------|----------------------|  
|AssemblyInfo.cpp|File contenente informazioni quali attributi, file, risorse, tipi, informazioni sulla versione e firma e così via, per la modifica dei metadati di assembly del progetto.  Per ulteriori informazioni, vedere [Nozioni di base sugli assembly](../Topic/Assembly%20Contents.md).|  
|*nomeprogetto*.asmx|Un file di testo che fa riferimento alle classi gestite nelle quali sono presenti le funzionalità del servizio Web XML.|  
|*nomeprogetto*.cpp|Il file di origine principale e punto di ingresso all'applicazione creata da Visual Studio.  Consente di identificare il file DLL e lo spazio dei nomi del progetto.  Il codice deve essere inserito in questo file.|  
|*nomeprogetto*.vsdisco|File di distribuzione XML nel quale sono inseriti collegamenti ad altre risorse descrittive del servizio Web XML.|  
|*nomeprogetto*.h|File di inclusione principale del progetto nel quale sono inserite tutte le dichiarazioni, i simboli globali e le istruzioni `#include` per altri file di intestazione.|  
|*nomeprogetto*.sln|Il file di soluzione utilizzato nell'ambiente di sviluppo per organizzare tutti gli elementi del progetto in un'unica soluzione.|  
|*nomeprogetto*.suo|File delle opzioni di soluzione utilizzato nell'ambiente di sviluppo.|  
|*projname.vcxproj*|File di progetto utilizzato nell'ambiente di sviluppo che consente di memorizzare le informazioni specifiche del progetto.|  
|ReadMe.txt|File in cui viene descritto ciascun file nel progetto mediante il nome file effettivo creato dal template.|