---
title: "File di soluzioni e di progetto | Microsoft Docs"
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
  - "vc.files.projectandsolution"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".sdf, esplorazione file di database"
  - "esplorazione file di database, .sdf"
  - "tipi di file [C++], makefile"
  - "tipi di file [C++], file di progetto"
  - "progetti Makefile"
  - "file di progetto [C++]"
ms.assetid: 5823b954-36cf-42d3-8fd5-25bab3ef63d9
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# File di soluzioni e di progetto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Al momento della creazione di un progetto di Visual Studio vengono creati i file riportati di seguito.  Questi file vengono usati per gestire i file di progetto nella soluzione.  
  
|Nomefile|Directory|Esplora soluzioni|Descrizione|  
|--------------|---------------|-----------------------|-----------------|  
|*Nomesoluzione*.sln|*Nomeprogetto*|Non visualizzato in Esplora soluzioni|File di *soluzione*.  Organizza tutti gli elementi di un progetto o di più progetti in una soluzione.|  
|*Nomeprogetto*.suo|*Nomeprogetto*|Non visualizzato in Esplora soluzioni|File di *opzioni di soluzione*.  Archivia le personalizzazioni per la soluzione, in modo che ogni volta che si apre un progetto o un file nella soluzione abbia l'aspetto e il comportamento desiderati.|  
|*Nomeprogetto*.vcxproj|*Nomeprogetto*|Non visualizzato in Esplora soluzioni|File di *progetto*.  Archivia informazioni specifiche di ogni progetto.  Nelle versioni precedenti, questo file è denominato *Nomeprogetto*.vcproj o *Nomeprogetto*.dsp. Per un esempio di file di progetto Visual C \+\+, vedere [File di progetto](../ide/project-files.md).|  
|*Nomeprogetto*.sdf|*Nomeprogetto*|Non visualizzato in Esplora soluzioni|File del *database di esplorazione*.  Supporta le funzionalità di esplorazione e navigazione quali **Vai a definizione**, **Trova tutti i riferimenti** e **Visualizzazione classi**.  Viene generato analizzando i file di intestazione.|  
|*Nomeprogetto.*vcxproj.filters|*Nomeprogetto*|Non visualizzato in Esplora soluzioni|File dei *filtri*.  Specifica dove inserire un file aggiunto alla soluzione.  Ad esempio, un file con estensione h viene inserito nel nodo **File di intestazione**.|  
|*Nomeprogetto.*vcxproj.user|*Nomeprogetto*|Non visualizzato in Esplora soluzioni|File *migrazione utente*.  Dopo la migrazione di un progetto da Visual Studio 2008, questo file contiene informazioni convertite da qualsiasi file vsprops.|  
|*Nomeprogetto*.idl|*Nomeprogetto*|Origine|\(Specifico di un progetto\) Contiene il codice sorgente IDL \(Interface Description Language\) per una libreria dei tipi controllo.  Questo file viene usato da Visual C\+\+ per generare una libreria dei tipi.  La libreria generata espone l'interfaccia del controllo ad altri client di automazione.  Per altre informazioni, vedere [File di definizione dell'interfaccia \(IDL\)](http://msdn.microsoft.com/library/windows/desktop/aa378712) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].|  
|ReadMe.txt|*Nomeprogetto*|Progetto|File *Readme*.  Viene generato dalla procedura guidata dell'applicazione e descrive i file in un progetto.|  
  
## Vedere anche  
 [Tipi di file creati per i progetti di Visual C\+\+](../ide/file-types-created-for-visual-cpp-projects.md)