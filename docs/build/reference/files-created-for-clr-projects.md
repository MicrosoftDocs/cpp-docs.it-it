---
description: 'Altre informazioni su: file creati per i progetti CLR'
title: File creati per progetti CLR
ms.date: 11/04/2016
helpviewer_keywords:
- Visual Studio C++ projects, CLR programming
- .NET applications, C++
ms.assetid: 59ae9020-5f26-4ad0-bbdd-97c2e2023a20
ms.openlocfilehash: 14aa07d891a75307f119f33ace5c32dbb2aa18db
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200525"
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
