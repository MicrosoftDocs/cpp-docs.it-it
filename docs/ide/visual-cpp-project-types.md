---
title: Tipi di progetto Visual C++ | Documenti Microsoft
ms.custom: ''
ms.date: 10/30/2017
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- programs [C++], projects
- project templates [Visual Studio], C++
- TODO comments [C++]
- projects [C++], types
- templates [C++], projects
- applications [C++], projects
- Visual C++ projects, types
ms.assetid: 7337987e-1e7b-4120-9a4b-94f0401f15e7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 80ac3479338dcb7f6be9e7e5f3f150cc8e15a9a9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="visual-c-project-types"></a>Tipi di progetto Visual C++

È possibile usare un modello di progetto per creare la struttura di base dei programmi, i menu, le barre degli strumenti, le icone, i riferimenti e le istruzioni `#include` appropriati per il tipo di progetto da creare. Visual Studio include diversi tipi di modelli di progetto di Visual C++ e fornisce le procedure guidate per molti di essi in modo da poter personalizzare i progetti durante la creazione. Immediatamente dopo aver creato un progetto, è possibile compilare ed eseguire l'applicazione; è consigliabile compilare in modo intermittente quando si sviluppa l'applicazione.

Non è necessario usare un modello per creare un progetto, ma in molti casi risulta più efficiente perché è più semplice modificare la struttura e i file di progetto anziché crearli da zero.  
  
> [!NOTE]
> È possibile creare un progetto in linguaggio C usando i modelli di progetto C++. Nel progetto generato trovare i file con estensione cpp e modificarla con c. Quindi, nella pagina **Proprietà progetto** per il progetto (non per la soluzione) espandere **Proprietà di configurazione**, **C/C++** e selezionare **Avanzate**. Impostare l'opzione **Compila come** su **Compila come codice C (/TC)**.

## <a name="project-templates"></a>Modelli di progetto

I modelli di progetto inclusi in Visual Studio dipendono dalla versione del prodotto e i carichi di lavoro che è stato installato. Se è stato installato lo sviluppo Desktop con carico di lavoro di C++, Visual Studio non dispone di questi modelli di progetto Visual C++.

### <a name="windows-desktop"></a>Desktop di Windows

|Modello di progetto|Descrizione|  
|----------------------|-----------------------------| 
|[Applicazione Console di Windows](../windows/creating-a-console-application.md)|Progetto per la creazione di un'applicazione console di Windows.|
|[Applicazione Desktop di Windows](../windows/walkthrough-creating-windows-desktop-applications-cpp.md)|Progetto per la creazione di un'applicazione desktop (Win32).|
|[Libreria a collegamento dinamico](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)|Progetto per la creazione di una libreria di collegamento dinamico (DLL).|
|[Libreria statica](../windows/walkthrough-creating-and-using-a-static-library-cpp.md)|Progetto per la creazione di una libreria statica (LIB).|
|Procedura guidata Desktop di Windows|Una procedura guidata per la creazione di librerie e applicazioni desktop di Windows con opzioni aggiuntive.|

### <a name="general"></a>Generale

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|Progetto vuoto|Progetto vuoto per la creazione di un'applicazione, una libreria o una DLL. È necessario aggiungere qualsiasi codice o le risorse necessarie.|
|[Progetto makefile](../ide/creating-a-makefile-project.md)|Sistema di compilazione progetto per l'utilizzo esterno.|
|Elementi progetto condiviso|Un progetto utilizzato per la condivisione di file tra più progetti.|

### <a name="atl"></a>ATL

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Progetto ATL](../atl/reference/creating-an-atl-project.md)|Un progetto che utilizza Active Template Library.|

### <a name="test"></a>Test

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Progetto Unit Test nativo](/visualstudio/test/writing-unit-tests-for-c-cpp-with-the-microsoft-unit-testing-framework-for-cpp)|Un progetto contenente unit test del C++ nativo.|

### <a name="mfc"></a>MFC

Se si aggiunge che il MFC e ATL supporto componente per l'installazione di Visual Studio, questi modelli di progetto vengono aggiunti a Visual Studio.

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Applicazione MFC](../mfc/reference/creating-an-mfc-application.md)|Progetto per la creazione di un'applicazione che utilizza la libreria di classe MFC (Microsoft Foundation).|
|[Controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md)|Progetto per la creazione di un controllo ActiveX che utilizza la libreria MFC.|
|[DLL MFC](../mfc/reference/creating-an-mfc-dll-project.md)|Progetto per la creazione di una libreria di collegamento dinamico che utilizza la libreria MFC.|

### <a name="windows-universal-apps"></a>App universali di Windows

Se si aggiunge il componente di strumenti della piattaforma universale di Windows C++ per l'installazione di Visual Studio, questi modelli di progetto vengono aggiunti a Visual Studio.

Per una panoramica di App universali di Windows in C++, vedere [app di Windows universale (C++)](../windows/universal-windows-apps-cpp.md).

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|Applicazione vuota|Progetto per un'app di piattaforma UWP (Universal Windows) a pagina singola che non dispone di controlli predefiniti o layout.|
|App DirectX 11|Progetto per un'app Universal Windows Platform che usa DirectX 11.|
|App DirectX 12|Progetto per un'app Universal Windows Platform che usa DirectX 12.|
|App DirectX 11 e XAML|Progetto per un'app Universal Windows Platform che usa DirectX 11 e XAML.|
|Applicazione Unit Test|Progetto per creare un'applicazione unit test per le app Universal Windows Platform (UWP).|
|DLL|Progetto per una libreria di collegamento dinamico (DLL) nativa utilizzabile da un componente di runtime o app Universal Windows Platform.|
|Libreria statica|Progetto per una libreria statica nativa (LIB) che può essere utilizzato da un componente di runtime o app Universal Windows Platform.|
|Componente Windows Runtime|Progetto per un componente Windows Runtime che può essere utilizzato da un'app UWP, indipendentemente dal linguaggio di programmazione in cui scrivere l'app.|
|Progetto di creazione del pacchetto di applicazione Windows|Un progetto che crea un pacchetto UWP che consente a un'applicazione desktop essere caricato lato o distribuite tramite Microsoft Store.|

## <a name="todo-comments"></a>Commenti TODO

Molti dei file generati da un modello di progetto contengono commenti TODO per consentire di trovare il punto in cui fornire il proprio codice sorgente. Per ulteriori informazioni sull'aggiunta di codice, vedere [aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md) e [lavorare con file di risorse](../windows/working-with-resource-files.md).

## <a name="see-also"></a>Vedere anche

[Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)   
