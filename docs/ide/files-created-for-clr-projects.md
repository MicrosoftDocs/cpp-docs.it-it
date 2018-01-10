---
title: File creati per progetti CLR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Visual C++ projects, CLR programming
- .NET applications, C++
ms.assetid: 59ae9020-5f26-4ad0-bbdd-97c2e2023a20
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a4abf5415e9b252a7cc92408fb273d226106fc16
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="files-created-for-clr-projects"></a>File creati per progetti CLR
Quando si utilizzano modelli di Visual C++ per creare i progetti, vengono creati più file, a seconda di quale modello utilizzare. Nella tabella seguente sono elencati tutti i file creati da modelli di progetto per i progetti .NET Framework.  
  
|Nome file|Descrizione del file|  
|---------------|----------------------|  
|AssemblyInfo.cpp|Il file che contiene informazioni (attributi, file, risorse, tipi, informazioni sulla versione, firma e così via) per modificare i metadati dell'assembly del progetto. Per ulteriori informazioni vedere [concetti Assembly](/dotnet/framework/app-domains/assembly-contents).|  
|*NomeProgetto*asmx|Un file di testo che i riferimenti gestiti le classi che incapsulano la funzionalità del servizio Web XML.|  
|*NomeProgetto*. cpp|Il file di origine principale e punto di ingresso nell'applicazione creata automaticamente da Visual Studio. Identifica il file di progetto DLL e lo spazio dei nomi di progetto. Fornire il proprio codice in questo file.|  
|*NomeProgetto*VSDISCO|Un file di distribuzione XML che contiene collegamenti ad altre risorse che descrivono il servizio Web XML.|  
|*NomeProgetto*. h|File di inclusione principale per il progetto, che contiene tutte le dichiarazioni, i simboli globali, e `#include` le istruzioni per altri file di intestazione.|  
|*NomeProgetto*sln|Il file di soluzione utilizzato all'interno dell'ambiente di sviluppo per organizzare tutti gli elementi del progetto in un'unica soluzione.|  
|*NomeProgetto*. suo|Il file di opzioni di soluzione utilizzato nell'ambiente di sviluppo.|  
|*NomeProgetto*vcxproj|Il file di progetto utilizzato all'interno dell'ambiente di sviluppo che archivia le informazioni specifiche per questo progetto.|  
|ReadMe.txt|Un file che descrive ogni file nel progetto utilizzando il nome file effettivo creato dal modello.|