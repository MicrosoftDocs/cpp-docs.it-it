---
title: File di progetto e soluzione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.files.projectandsolution
dev_langs: C++
helpviewer_keywords:
- project files [C++]
- file types [C++], makefiles
- .sdf, browsing database file
- Makefile projects
- browsing database file, .sdf
- file types [C++], project files
ms.assetid: 5823b954-36cf-42d3-8fd5-25bab3ef63d9
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 03797d266dc0f3104d6153b9d946d06ac963fafc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-and-solution-files"></a>File di soluzioni e di progetto
Al momento della creazione di un progetto di Visual Studio vengono creati i file riportati di seguito. Questi file vengono usati per gestire i file di progetto nella soluzione.  
  
|Nomefile|Directory|Esplora soluzioni|Descrizione|  
|--------------|------------------------|--------------------------------|-----------------|  
|*NomeSoluzione*sln|*NomeProgetto*|Non visualizzato in Esplora soluzioni|Il *soluzione* file. Organizza tutti gli elementi di un progetto o di più progetti in una soluzione.|  
|*NomeProgetto*. suo|*NomeProgetto*|Non visualizzato in Esplora soluzioni|Il *opzioni di soluzione* file. Archivia le personalizzazioni per la soluzione, in modo che ogni volta che si apre un progetto o un file nella soluzione abbia l'aspetto e il comportamento desiderati.|  
|*NomeProgetto*vcxproj|*NomeProgetto*|Non visualizzato in Esplora soluzioni|Il *progetto* file. Archivia informazioni specifiche di ogni progetto. (Nelle versioni precedenti, questo file è denominato *Projname*vcproj o *Projname*. DSP.) Per un esempio di un file di progetto Visual C++, vedere [i file di progetto](../ide/project-files.md).|  
|*NomeProgetto*.vcxitems|*NomeProgetto*|Non visualizzato in Esplora soluzioni|Il *progetto elementi condivisi* file. Non viene compilato il progetto.  Al contrario, il progetto può fare riferimento un altro progetto di C++ e relativi file diventerà parte del processo di compilazione del progetto di riferimento. Ciò consente di condividere il codice con i progetti C++ multipiattaforma.|
|*NomeProgetto*sdf|*NomeProgetto*|Non visualizzato in Esplora soluzioni|Il *database di esplorazione* file. Supporta le funzionalità di esplorazione e navigazione quali **Vai a definizione**, **Trova tutti i riferimenti**, e **Visualizzazione classi**. Viene generato analizzando i file di intestazione.|  
|*NomeProgetto.* vcxproj. Filters|*NomeProgetto*|Non visualizzato in Esplora soluzioni|Il *filtri* file. Specifica dove inserire un file aggiunto alla soluzione. Ad esempio, un file con estensione h viene inserito **file di intestazione** nodo.|  
|*NomeProgetto.* vcxproj. User|*NomeProgetto*|Non visualizzato in Esplora soluzioni|Il *migrazione utente* file. Dopo la migrazione di un progetto da Visual Studio 2008, questo file contiene informazioni convertite da qualsiasi file vsprops. |  
|*NomeProgetto*IDL|*NomeProgetto*|Origine|(Specifico di un progetto) Contiene il codice sorgente IDL (Interface Description Language) per una libreria dei tipi controllo. Questo file viene usato da Visual C++ per generare una libreria dei tipi. La libreria generata espone l'interfaccia del controllo ad altri client di automazione. Per ulteriori informazioni, vedere [File IDL (Interface Definition)](http://msdn.microsoft.com/library/windows/desktop/aa378712) in Windows SDK.|  
|ReadMe.txt|*NomeProgetto*|Progetto|Il *Leggimi* file. Viene generato dalla procedura guidata dell'applicazione e descrive i file in un progetto.|  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)