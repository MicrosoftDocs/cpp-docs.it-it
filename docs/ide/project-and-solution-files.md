---
title: File di soluzioni e di progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.files.projectandsolution
dev_langs:
- C++
helpviewer_keywords:
- project files [C++]
- file types [C++], makefiles
- .sdf, browsing database file
- Makefile projects
- browsing database file, .sdf
- file types [C++], project files
ms.assetid: 5823b954-36cf-42d3-8fd5-25bab3ef63d9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 08cf1386ef177823c37bc285392309ec47f3c464
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33340697"
---
# <a name="project-and-solution-files"></a>File di soluzioni e di progetto
Al momento della creazione di un progetto di Visual Studio vengono creati i file riportati di seguito. Questi file vengono usati per gestire i file di progetto nella soluzione.  
  
|Nomefile|Directory|Esplora soluzioni|Descrizione|  
|--------------|------------------------|--------------------------------|-----------------|  
|*Solname*.sln|*Projname*|Non visualizzato in Esplora soluzioni|File di *soluzione*. Organizza tutti gli elementi di un progetto o di più progetti in una soluzione.|  
|*Projname*.suo|*Projname*|Non visualizzato in Esplora soluzioni|File di *opzioni di soluzione*. Archivia le personalizzazioni per la soluzione, in modo che ogni volta che si apre un progetto o un file nella soluzione abbia l'aspetto e il comportamento desiderati.|  
|*Projname*.vcxproj|*Projname*|Non visualizzato in Esplora soluzioni|File di *progetto*. Archivia informazioni specifiche di ogni progetto. Nelle versioni precedenti, questo file è denominato *Projname*.vcproj o *Projname*.dsp. Per un esempio di file di progetto Visual C++, vedere [File di progetto](../ide/project-files.md).|  
|*Projname*.vcxitems|*Projname*|Non visualizzato in Esplora soluzioni|File di *Progetto elementi condivisi*. Il progetto non viene compilato.  Al contrario, è possibile che un altro progetto C++ vi faccia riferimento e che i relativi file diventino parte del processo di compilazione del progetto che vi fa riferimento. In questo modo è possibile condividere codice comune tra progetti C++ multipiattaforma.|
|*Projname*.sdf|*Projname*|Non visualizzato in Esplora soluzioni|File del *database di esplorazione*. Supporta le funzionalità di esplorazione e navigazione quali **Vai alla definizione**, **Trova tutti i riferimenti** e **Visualizzazione classi**. Viene generato analizzando i file di intestazione.|  
|*Projname.* vcxproj.filters|*Projname*|Non visualizzato in Esplora soluzioni|File dei *filtri*. Specifica dove inserire un file aggiunto alla soluzione. Ad esempio, un file con estensione h viene inserito nel nodo **File di intestazione**.|  
|*Projname.* vcxproj.user|*Projname*|Non visualizzato in Esplora soluzioni|File *migrazione utente*. Dopo la migrazione di un progetto da Visual Studio 2008, questo file contiene informazioni convertite da qualsiasi file vsprops. |  
|*Projname*.idl|*Projname*|Origine|(Specifico di un progetto) Contiene il codice sorgente IDL (Interface Description Language) per una libreria dei tipi controllo. Questo file viene usato da Visual C++ per generare una libreria dei tipi. La libreria generata espone l'interfaccia del controllo ad altri client di automazione. Per altre informazioni, vedere [Interface Definition (IDL) File](http://msdn.microsoft.com/library/windows/desktop/aa378712) (File di definizione dell'interfaccia (IDL)) in Windows SDK.|  
|ReadMe.txt|*Projname*|Progetto|File *leggimi*. Viene generato dalla procedura guidata dell'applicazione e descrive i file in un progetto.|  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)