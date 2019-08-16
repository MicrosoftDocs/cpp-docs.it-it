---
title: Tipi di progetto Visual C++
ms.date: 08/13/2019
helpviewer_keywords:
- programs [C++], projects
- project templates [Visual Studio], C++
- TODO comments [C++]
- projects [C++], types
- templates [C++], projects
- applications [C++], projects
- C++ projects, types
ms.assetid: 7337987e-1e7b-4120-9a4b-94f0401f15e7
ms.openlocfilehash: f234f9a05a871fe474b783a68f644cb4f2b1c2e7
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498434"
---
# <a name="c-project-templates"></a>Modelli di progetto C++

I modelli di progetto di Visual Studio generano i file di codice sorgente, le opzioni del compilatore, i menu `#include` , le barre degli strumenti, le icone, i riferimenti e le istruzioni appropriati per il tipo di progetto che si vuole creare. Visual Studio include diversi tipi di C++ modelli di progetto e fornisce procedure guidate per molti di essi, in modo da poter personalizzare i progetti durante la creazione. Subito dopo aver creato un progetto, è possibile compilarlo ed eseguire l'applicazione. È consigliabile compilare l'applicazione gradualmente man mano che la si sviluppa.

> [!NOTE]
> È possibile creare un progetto in linguaggio C usando i modelli di progetto C++. Nel progetto generato trovare i file con estensione cpp e modificarla con c. Quindi, nella pagina **Proprietà progetto** per il progetto (non per la soluzione) espandere **Proprietà di configurazione**, **C/C++** e selezionare **Avanzate**. Impostare l'opzione **Compila come** su **Compila come codice C (/TC)** .

## <a name="project-templates"></a>Modelli di progetto

I modelli di progetto inclusi in Visual Studio dipendono dalla versione del prodotto e dai carichi di lavoro installati. Se è stato installato lo sviluppo di applicazioni C++ desktop con carico di lavoro, C++ Visual Studio dispone di questi modelli di progetto.

### <a name="windows-desktop"></a>Desktop di Windows

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Applicazione console di Windows](../../windows/creating-a-console-application.md)|Progetto per la creazione di un'applicazione console di Windows.|
|[Applicazione desktop di Windows](../../windows/walkthrough-creating-windows-desktop-applications-cpp.md)|Progetto per la creazione di un'applicazione desktop di Windows (Win32).|
|[Libreria di collegamento dinamico](../walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)|Progetto per la creazione di una libreria di collegamento dinamico (DLL).|
|[Libreria statica](../../windows/walkthrough-creating-and-using-a-static-library-cpp.md)|Progetto per la creazione di una libreria statica (LIB).|
|[Creazione guidata applicazione desktop di Windows](../../windows/windows-desktop-wizard.md)|Una procedura guidata per la creazione di librerie e applicazioni desktop di Windows con opzioni aggiuntive.|

### <a name="general"></a>Generale

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|Progetto vuoto|Progetto vuoto per la creazione di un'applicazione, libreria o DLL. È necessario aggiungere le risorse o il codice necessari.|
|[Progetto makefile](creating-a-makefile-project.md)|Progetto che esegue il wrapping di un makefile di Windows in un progetto di Visual Studio. Per aprire un makefile così com'è in Visual Studio, usare [Apri cartella](../open-folder-projects-cpp.md).|
|Progetto elementi condivisi|Progetto utilizzato per la condivisione di file di codice o file di risorse tra più progetti. Questo tipo di progetto non produce un file eseguibile.|

### <a name="atl"></a>ATL

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Progetto ATL](../../atl/reference/creating-an-atl-project.md)|Progetto che usa Active Template Library.|

### <a name="test"></a>Test

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Progetto per unit test nativi](/visualstudio/test/writing-unit-tests-for-c-cpp-with-the-microsoft-unit-testing-framework-for-cpp)|Progetto contenente unit test C++ nativi.|

### <a name="mfc"></a>MFC

Se si aggiunge il componente per il supporto di MFC e ATL all'installazione di Visual Studio, i modelli di progetto seguenti vengono aggiunti a Visual Studio.

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Applicazione MFC](../../mfc/reference/creating-an-mfc-application.md)|Progetto per la creazione di un'applicazione che usa la libreria MFC (Microsoft Foundation Class).|
|[Controllo ActiveX MFC](../../mfc/reference/creating-an-mfc-activex-control.md)|Progetto per la creazione di un controllo ActiveX che usa la libreria MFC.|
|[DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md)|Progetto per la creazione di una libreria di collegamento dinamico che usa la libreria MFC.|

### <a name="windows-universal-apps"></a>App universali di Windows

Se si aggiunge il componente C++ per gli strumenti della piattaforma UWP all'installazione di Visual Studio, i modelli di progetto seguenti vengono aggiunti a Visual Studio.

Per una panoramica delle app universali di Windows in C++, vedere [App universali di Windows (C++)](../../cppcx/universal-windows-apps-cpp.md).

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|Applicazione vuota|Progetto per un'app della piattaforma UWP (Universal Windows Platform) a una pagina che non include layout o controlli predefiniti.|
|App DirectX 11|Progetto per un'app della piattaforma UWP (Universal Windows Platform) che usa DirectX 11.|
|App DirectX 12|Progetto per un'app della piattaforma UWP (Universal Windows Platform) che usa DirectX 12.|
|App DirectX 11 e XAML|Progetto per un'app della piattaforma UWP (Universal Windows Platform) che usa DirectX 11 e XAML.|
|App unit test|Progetto per creare un'app unit test per app della piattaforma UWP (Universal Windows Platform).|
|DLL|Progetto per una libreria di collegamento dinamico (DLL) nativa che può essere usata in un'app della piattaforma UWP (Universal Windows Platform) o in un componente di runtime.|
|Libreria statica|Progetto per una libreria di collegamento statico (LIB) nativa che può essere usata in un'app della piattaforma UWP (Universal Windows Platform) o in un componente di runtime.|
|Componente Windows Runtime|Progetto per un componente Windows Runtime che può essere usato in un'app della piattaforma UWP (Universal Windows Platform), indipendentemente dal linguaggio di programmazione usato per scrivere l'app.|
|Progetto di creazione pacchetti di applicazione Windows|Un progetto che crea un pacchetto UWP (Universal Windows Platform) che consente a un'applicazione desktop di essere caricata tramite sideload o distribuita tramite Microsoft Store.|

## <a name="todo-comments"></a>Commenti TODO

Molti dei file generati da un modello di progetto contengono commenti TODO per consentire di trovare il punto in cui fornire il proprio codice sorgente. Per altre informazioni sull'aggiunta di codice, vedere [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md) e [Utilizzo di file di risorse](../../windows/working-with-resource-files.md).


