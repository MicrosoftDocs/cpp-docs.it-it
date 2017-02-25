---
title: "File di intestazione e di origine di un controllo o programma ATL | Microsoft Docs"
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
  - "tipi di file [C++], origine e intestazioni ATL"
ms.assetid: cb65372f-4880-4007-b582-a52eaa568fd1
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# File di intestazione e di origine di un controllo o programma ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I file riportati di seguito vengono creati al momento della creazione di un progetto ATL in Visual Studio, a seconda delle opzioni selezionate per il progetto.  
  
 Tutti questi file si trovano nella directory *Projname*, nella cartella dei file di intestazione \(file H\) o in quella dei file di origine \(file CPP\) di Esplora soluzioni.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|*Projname*.h|File di inclusione principale contenente le definizioni di interfaccia C\+\+ e le dichiarazioni di GUID degli elementi definiti in ATLSample.idl.  Viene rigenerato da MIDL durante la compilazione.|  
|*Projname*.cpp|File di origine principale del programma.  Contiene l'implementazione delle esportazioni di DLL per un server in\-process e l'implementazione di `WinMain` per un server locale.  Per un servizio, implementa inoltre tutte le apposite funzioni di gestione.|  
|Resource.h|File di intestazione per il file di risorse.|  
|StdAfx.cpp|Include i file StdAfx.h e Atlimpl.cpp.|  
|StdAfx.h|Include i file di intestazione ATL.|  
  
## Vedere anche  
 [Tipi di file creati per i progetti di Visual C\+\+](../ide/file-types-created-for-visual-cpp-projects.md)   
 [File di intestazione e di origine di un controllo o di un programma MFC](../ide/mfc-program-or-control-source-and-header-files.md)   
 [Progetti CLR](../ide/files-created-for-clr-projects.md)