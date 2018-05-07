---
title: File creati per progetti CLR | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Visual C++ projects, CLR programming
- .NET applications, C++
ms.assetid: 59ae9020-5f26-4ad0-bbdd-97c2e2023a20
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b9d66c3f55164a743bc395dc5e9b48f8bcd57654
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="files-created-for-clr-projects"></a>File creati per progetti CLR
Quando si utilizzano modelli di Visual C++ per creare i progetti, vengono creati più file, a seconda di quale modello utilizzare. Nella tabella seguente sono elencati tutti i file creati da modelli di progetto per i progetti .NET Framework.  
  
|Nome file|Descrizione del file|  
|---------------|----------------------|  
|AssemblyInfo.cpp|Il file che contiene informazioni (attributi, file, risorse, tipi, informazioni sulla versione, firma e così via) per modificare i metadati dell'assembly del progetto. Per ulteriori informazioni vedere [concetti Assembly](/dotnet/framework/app-domains/assembly-contents).|  
|*ProjName*asmx|Un file di testo che i riferimenti gestiti le classi che incapsulano la funzionalità del servizio Web XML.|  
|*ProjName*. cpp|Il file di origine principale e punto di ingresso nell'applicazione creata automaticamente da Visual Studio. Identifica il file di progetto DLL e lo spazio dei nomi di progetto. Fornire il proprio codice in questo file.|  
|*ProjName*VSDISCO|Un file di distribuzione XML che contiene collegamenti ad altre risorse che descrivono il servizio Web XML.|  
|*ProjName*. h|File di inclusione principale per il progetto, che contiene tutte le dichiarazioni, i simboli globali, e `#include` le istruzioni per altri file di intestazione.|  
|*ProjName*. sln|Il file di soluzione utilizzato all'interno dell'ambiente di sviluppo per organizzare tutti gli elementi del progetto in un'unica soluzione.|  
|*ProjName*suo|Il file di opzioni di soluzione utilizzato nell'ambiente di sviluppo.|  
|*ProjName*vcxproj|Il file di progetto utilizzato all'interno dell'ambiente di sviluppo che archivia le informazioni specifiche per questo progetto.|  
|ReadMe.txt|Un file che descrive ogni file nel progetto utilizzando il nome file effettivo creato dal modello.|