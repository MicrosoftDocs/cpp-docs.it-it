---
title: File di intestazione e di origine di un controllo o programma ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: file types [C++], ATL source and headers
ms.assetid: cb65372f-4880-4007-b582-a52eaa568fd1
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3a13a4c6ddb74a6f63b5da1171a3d4360199b508
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atl-program-or-control-source-and-header-files"></a>File di intestazione e di origine di un controllo o programma ATL
I seguenti file vengono creati quando si crea un progetto ATL in Visual Studio, a seconda delle opzioni selezionate per il progetto creato.  
  
 Tutti questi file si trovano nel *Projname* directory e nella cartella file di intestazione (file con estensione h) o di cartella di origine (file con estensione cpp) in Esplora soluzioni.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|*NomeProgetto*. h|File di inclusione principale che contiene le definizioni di interfaccia di C++ e le dichiarazioni di GUID di elementi definiti in ATLSample. Durante la compilazione, che viene rigenerato da MIDL.|  
|*NomeProgetto*. cpp|Il file di origine del programma principale. Contiene l'implementazione delle esportazioni di DLL per un server in-process e l'implementazione di `WinMain` per un server locale. Per un servizio, implementa inoltre tutte le funzioni di gestione del servizio.|  
|Resource.h|Il file di intestazione per il file di risorse.|  
|StdAfx.cpp|Include i file stdafx. H e Atlimpl.|  
|Stdafx. H|Include i file di intestazione ATL.|  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)   
 [File di intestazione e di origine di un controllo o programma MFC](../ide/mfc-program-or-control-source-and-header-files.md)   
 [Progetti CLR](../ide/files-created-for-clr-projects.md)