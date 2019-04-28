---
title: File creati per progetti CLR
ms.date: 11/04/2016
helpviewer_keywords:
- Visual C++ projects, CLR programming
- .NET applications, C++
ms.assetid: 59ae9020-5f26-4ad0-bbdd-97c2e2023a20
ms.openlocfilehash: 8c3e4b4187e507f7e52f8764b546f85258902879
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62271043"
---
# <a name="files-created-for-clr-projects"></a>File creati per progetti CLR

Quando si utilizzano modelli di Visual C++ per creare i progetti, vengono creati più file, a seconda del modello utilizzato. Nella tabella seguente sono elencati tutti i file creati da modelli di progetto per i progetti .NET Framework.

|Nome file|Descrizione file|
|---------------|----------------------|
|AssemblyInfo.cpp|Contiene informazioni, ad esempio attributi, file, risorse, tipi, informazioni sulla versione e sulla firma e così via da usare per modificare i metadati dell'assembly del progetto. Per altre informazioni, vedere [Contenuto degli assembly](/dotnet/framework/app-domains/assembly-contents).|
|*projname*.asmx|File di testo che fa riferimento a classi gestite che incapsulano la funzionalità del servizio Web XML.|
|*projname*.cpp|File di origine principale e punto di ingresso nell'applicazione creata automaticamente da Visual Studio. Identifica il file con estensione dll e lo spazio dei nomi del progetto. Fornire il proprio codice in questo file.|
|*projname*.vsdisco|File di distribuzione XML che contiene collegamenti ad altre risorse che descrivono il servizio Web XML.|
|*projname*.h|File di inclusione principale per il progetto, che contiene tutte le dichiarazioni, i simboli globali, le istruzioni `#include` per altri file di intestazione.|
|*projname*.sln|File di soluzione utilizzato all'interno dell'ambiente di sviluppo per organizzare tutti gli elementi del progetto in un'unica soluzione.|
|*projname*.suo|File di opzioni della soluzione utilizzato nell'ambiente di sviluppo.|
|*projname*.vcxproj|File di progetto utilizzato all'interno dell'ambiente di sviluppo che archivia le informazioni specifiche di questo progetto.|
|ReadMe.txt|File che descrive ogni file del progetto utilizzando i nomi file effettivi creati dal modello.|