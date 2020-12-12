---
description: 'Altre informazioni su: file di progetto e di soluzione'
title: File di soluzioni e di progetto
ms.date: 05/06/2019
helpviewer_keywords:
- project files [C++]
- file types [C++], makefiles
- .sdf, browsing database file
- Makefile projects
- browsing database file, .sdf
- file types [C++], project files
ms.assetid: 5823b954-36cf-42d3-8fd5-25bab3ef63d9
ms.openlocfilehash: e91876f1c405b8a145e0a2d94195a424101b469b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225778"
---
# <a name="project-and-solution-files"></a>File di soluzioni e di progetto

Al momento della creazione di un progetto di Visual Studio vengono creati i file riportati di seguito. Questi file vengono usati per gestire i file di progetto nella soluzione.

|Nome file|Directory|Esplora soluzioni|Description|
|--------------|------------------------|--------------------------------|-----------------|
|*Solname*.sln|*Projname*|Non visualizzato in Esplora soluzioni|File della *soluzione* . Organizza tutti gli elementi di un progetto o di più progetti in una soluzione.|
|*ProjName*. suo|*Projname*|Non visualizzato in Esplora soluzioni|File di *Opzioni della soluzione* . Archivia le personalizzazioni per la soluzione, in modo che ogni volta che si apre un progetto o un file nella soluzione abbia l'aspetto e il comportamento desiderati.|
|*ProjName*. vcxproj|*Projname*|Non visualizzato in Esplora soluzioni|File di *progetto* . Archivia informazioni specifiche di ogni progetto. Nelle versioni precedenti questo file è denominato *ProjName*. vcproj o *ProjName*. DSP. Per un esempio di file di progetto C++ (con estensione vcxproj), vedere [file di progetto](project-files.md).|
|*Projname*.vcxitems|*Projname*|Non visualizzato in Esplora soluzioni|File di *Progetto elementi condivisi*. Il progetto non viene compilato.  Al contrario, è possibile che un altro progetto C++ vi faccia riferimento e che i relativi file diventino parte del processo di compilazione del progetto che vi fa riferimento. In questo modo è possibile condividere codice comune tra progetti C++ multipiattaforma.|
|*Projname*.sdf|*Projname*|Non visualizzato in Esplora soluzioni|File del *database di esplorazione*. Supporta le funzionalità di esplorazione e navigazione quali **Vai alla definizione**, **Trova tutti i riferimenti** e **Visualizzazione classi**. Viene generato analizzando i file di intestazione.|
|*Projname.* vcxproj.filters|*Projname*|Non visualizzato in Esplora soluzioni|File dei *filtri*. Specifica dove inserire un file aggiunto alla soluzione. Ad esempio, un file con estensione h viene inserito nel nodo **File di intestazione**.|
|*Projname.* vcxproj.user|*Projname*|Non visualizzato in Esplora soluzioni|File *migrazione utente*. Dopo la migrazione di un progetto da Visual Studio 2008, questo file contiene informazioni convertite da qualsiasi file vsprops. |
|*Projname*.idl|*Projname*|Source (Sorgente)|(Specifico di un progetto) Contiene il codice sorgente IDL (Interface Description Language) per una libreria dei tipi controllo. Questo file viene usato da Visual C++ per generare una libreria dei tipi. La libreria generata espone l'interfaccia del controllo ad altri client di automazione. Per altre informazioni, vedere [Interface Definition (IDL) File](/windows/win32/Rpc/the-interface-definition-language-idl-file) (File di definizione dell'interfaccia (IDL)) in Windows SDK.|
|Readme.txt|*Projname*|Project|File *leggimi*. Viene generato dalla procedura guidata dell'applicazione e descrive i file in un progetto.|

## <a name="see-also"></a>Vedi anche

[Tipi di file creati per i progetti di Visual Studio C++](file-types-created-for-visual-cpp-projects.md)
