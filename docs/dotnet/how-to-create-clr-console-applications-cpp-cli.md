---
title: 'Procedura: Creare applicazioni console CLR (C++/CLI)'
description: Informazioni su come creare progetti di app console CLR per usare C++/CLI in Visual Studio.
ms.date: 12/08/2020
helpviewer_keywords:
- console applications, templates
- CLR console applications, project template
ms.openlocfilehash: ef74ca4cc31884543ff18d63d981504f36d1838e
ms.sourcegitcommit: 754df5278f795f661d4eeb0d4cacc908aa630159
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/09/2020
ms.locfileid: "96933222"
---
# <a name="how-to-create-clr-console-applications-ccli"></a>Procedura: Creare applicazioni console CLR (C++/CLI)

::: moniker range="msvc-140"

È possibile utilizzare il modello  **applicazione console CLR** nella finestra di dialogo **nuovo progetto** per creare un progetto di applicazione console che dispone già di file e riferimenti di progetto essenziali.

::: moniker-end
::: moniker range="msvc-150"

È possibile usare il modello di **app console CLR** nella finestra di dialogo **nuovo progetto** per creare un progetto di applicazione console che dispone già di file e riferimenti di progetto essenziali.

Il supporto c++/CLI non viene installato per impostazione predefinita quando si installa un carico di lavoro di Visual Studio C++. Se non viene visualizzata un'intestazione CLR in Visual C++ nella finestra di dialogo **nuovo progetto** , potrebbe essere necessario installare il supporto di C++/CLI. Per altre informazioni, vedere [programmazione .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

::: moniker-end
::: moniker range="msvc-160"

È possibile usare il modello di **app console CLR (.NET Framework)** nella finestra di dialogo **Crea un nuovo progetto** per creare un progetto di applicazione console che dispone già di file e riferimenti di progetto essenziali.

Il supporto c++/CLI non viene installato per impostazione predefinita quando si installa un carico di lavoro di Visual Studio C++. Se i modelli di progetto CLR non vengono visualizzati nella finestra di dialogo  **Crea nuovo progetto** , potrebbe essere necessario installare il supporto di C++/CLI. Per altre informazioni, vedere [programmazione .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

::: moniker-end

In genere, un'applicazione console viene compilata in un file eseguibile autonomo ma non dispone di un'interfaccia grafica. Gli utenti eseguono l'app console da un prompt dei comandi. Possono usare la riga di comando per inviare istruzioni all'app in esecuzione. L'app fornisce le informazioni di output come testo nella finestra di comando. Il feedback immediato di un'app console lo rende un ottimo modo per apprendere la programmazione. Non è necessario preoccuparsi di come implementare un'interfaccia utente grafica.

::: moniker range="msvc-140"

Quando si usa il modello di applicazione console CLR per creare un progetto, vengono aggiunti automaticamente i riferimenti e i file seguenti:

- Riferimenti a questi spazi dei nomi di .NET Framework:

  - <xref:System>, <xref:System.Data> , <xref:System.Xml> : Questi riferimenti contengono le classi fondamentali che definiscono i tipi, gli eventi, le interfacce, gli attributi e le eccezioni usati comunemente.

  - *`mscorlib.dll`*: DLL di assembly che supporta lo sviluppo di .NET Framework.

- File di origine:

  - *`ConsoleApplicationName.cpp`*: Il file di origine principale e il punto di ingresso nell'app. Questo file contiene il nome di base specificato per il progetto. Identifica il file DLL del progetto e lo spazio dei nomi del progetto. Fornire il proprio codice in questo file.

  - *`AssemblyInfo.cpp`*: Contiene gli attributi e le impostazioni che è possibile usare per modificare i metadati dell'assembly del progetto. Per ulteriori informazioni, vedere [contenuto dell'assembly](/dotnet/framework/app-domains/assembly-contents).

  - *`stdafx.cpp`*: Usato per compilare un file di intestazione precompilato denominato *`ConsoleApplicationName.pch`* e un file di tipi precompilati denominato *`stdafx.obj`* .

- File di intestazione:

  - *`stdafx.h`*: Usato per compilare un file di intestazione precompilato denominato *`ConsoleApplicationName.pch`* e un file di tipi precompilati denominato *`stdafx.obj`* .

  - *`resource.h`*: File di inclusione generato per *`app.rc`* .

- File di risorse:

  - *`app.rc`*: File di script di risorsa di un programma.

  - *`app.ico`*: Il file di icona di un programma.

- *`ReadMe.txt`*: Descrive i file nel progetto.

::: moniker-end
::: moniker range=">=msvc-150"

Quando si usa il modello di applicazione console CLR per creare un progetto, vengono aggiunti automaticamente i riferimenti e i file seguenti:

- Riferimenti a questi spazi dei nomi di .NET Framework:

  - <xref:System>, <xref:System.Data> , <xref:System.Xml> : Questi riferimenti contengono le classi fondamentali che definiscono i tipi, gli eventi, le interfacce, gli attributi e le eccezioni usati comunemente.

  - *`mscorlib.dll`*: DLL di assembly che supporta lo sviluppo di .NET Framework.

- File di origine:

  - *`ConsoleApplicationName.cpp`*: Il file di origine principale e il punto di ingresso nell'app. Questo file contiene il nome di base specificato per il progetto. Identifica il file DLL del progetto e lo spazio dei nomi del progetto. Fornire il proprio codice in questo file.

  - *`AssemblyInfo.cpp`*: Contiene gli attributi e le impostazioni che è possibile usare per modificare i metadati dell'assembly del progetto. Per ulteriori informazioni, vedere [contenuto dell'assembly](/dotnet/framework/app-domains/assembly-contents).

  - *`pch.cpp`*: Usato per compilare un file di intestazione precompilato denominato *`ConsoleApplicationName.pch`* e un file di tipi precompilati denominato *`pch.obj`* .

- File di intestazione:

  - *`pch.h`*: Usato per compilare un file di intestazione precompilato denominato *`ConsoleApplicationName.pch`* e un file di tipi precompilati denominato *`pch.obj`* .

  - *`Resource.h`*: File di inclusione generato per *`app.rc`* .

- File di risorse:

  - *`app.rc`*: File di script di risorsa di un programma.

  - *`app.ico`*: Il file di icona di un programma.

::: moniker-end

## <a name="to-create-a-clr-console-app-project"></a>Per creare un progetto di app console CLR

::: moniker range="msvc-140"

1. Sulla barra dei menu scegliere **file** > **nuovo** > **progetto**.

1. Nella finestra di dialogo **nuovo progetto** selezionare i modelli **installati** >  > **Visual C++** > nodo **CLR** , quindi selezionare il modello **applicazione console CLR** .

1. Nella casella **Nome** immettere un nome univoco per l'applicazione.

   È possibile specificare altre impostazioni di progetto e soluzione, ma non sono necessarie.

1. Scegliere il pulsante **OK** per generare il progetto e i file di origine.

::: moniker-end
::: moniker range="msvc-150"

1. Sulla barra dei menu scegliere **file** > **nuovo** > **progetto**.

1. Nella finestra di dialogo **nuovo progetto** selezionare il nodo **installato** > **Visual C++** > **CLR** , quindi selezionare il modello **applicazione console CLR** .

1. Nella casella **Nome** immettere un nome univoco per l'applicazione.

   È possibile specificare altre impostazioni di progetto e soluzione, ma non sono necessarie.

1. Scegliere il pulsante **OK** per generare il progetto e i file di origine.

::: moniker-end
::: moniker range="msvc-160"

1. Sulla barra dei menu scegliere **file** > **nuovo** > **progetto**.

1. Nella finestra di dialogo **Crea un nuovo progetto** immettere "console CLR" nella casella di ricerca. Selezionare il modello **applicazione console CLR (.NET Framework)** , quindi scegliere **Avanti**.

1. Nella casella **Nome** immettere un nome univoco per l'applicazione.

   È possibile specificare altre impostazioni di progetto e soluzione, ma non sono necessarie.

1. Scegliere il pulsante **Crea** per generare il progetto e i file di origine.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Progetti CLR](../build/reference/files-created-for-clr-projects.md)
