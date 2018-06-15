---
title: Tipi di progetto Visual C++ | Microsoft Docs
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
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33339982"
---
# <a name="visual-c-project-types"></a>Tipi di progetto Visual C++

È possibile usare un modello di progetto per creare la struttura di base dei programmi, i menu, le barre degli strumenti, le icone, i riferimenti e le istruzioni `#include` appropriati per il tipo di progetto da creare. Visual Studio include diversi tipi di modelli di progetto di Visual C++ e fornisce le procedure guidate per molti di essi in modo da poter personalizzare i progetti durante la creazione. Subito dopo aver creato un progetto, è possibile compilarlo ed eseguire l'applicazione. È consigliabile compilare l'applicazione gradualmente man mano che la si sviluppa.

Non è necessario usare un modello per creare un progetto, ma in molti casi risulta più efficiente perché è più semplice modificare la struttura e i file di progetto anziché crearli da zero.  
  
> [!NOTE]
> È possibile creare un progetto in linguaggio C usando i modelli di progetto C++. Nel progetto generato trovare i file con estensione cpp e modificarla con c. Quindi, nella pagina **Proprietà progetto** per il progetto (non per la soluzione) espandere **Proprietà di configurazione**, **C/C++** e selezionare **Avanzate**. Impostare l'opzione **Compila come** su **Compila come codice C (/TC)**.

## <a name="project-templates"></a>Modelli di progetto

I modelli di progetto inclusi in Visual Studio dipendono dalla versione del prodotto e dai carichi di lavoro installati. Se è stato installato il carico di lavoro Sviluppo di applicazioni desktop con C++, Visual Studio ha i modelli di progetto Visual C++ seguenti.

### <a name="windows-desktop"></a>Desktop di Windows

|Modello di progetto|Descrizione|  
|----------------------|-----------------------------| 
|[Applicazione console di Windows](../windows/creating-a-console-application.md)|Progetto per la creazione di un'applicazione console di Windows.|
|[Applicazione desktop di Windows](../windows/walkthrough-creating-windows-desktop-applications-cpp.md)|Progetto per la creazione di un'applicazione desktop di Windows (Win32).|
|[Libreria di collegamento dinamico](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)|Progetto per la creazione di una libreria di collegamento dinamico (DLL).|
|[Libreria statica](../windows/walkthrough-creating-and-using-a-static-library-cpp.md)|Progetto per la creazione di una libreria statica (LIB).|
|Creazione guidata applicazione desktop di Windows|Una procedura guidata per la creazione di librerie e applicazioni desktop di Windows con opzioni aggiuntive.|

### <a name="general"></a>Generale

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|Progetto vuoto|Progetto vuoto per la creazione di un'applicazione, libreria o DLL. È necessario aggiungere le risorse o il codice necessari.|
|[Progetto makefile](../ide/creating-a-makefile-project.md)|Progetto per l'uso di un sistema di compilazione esterno.|
|Progetto elementi condivisi|Progetto usato per condividere file tra più progetti.|

### <a name="atl"></a>ATL

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Progetto ATL](../atl/reference/creating-an-atl-project.md)|Progetto che usa Active Template Library.|

### <a name="test"></a>Test

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Progetto per unit test nativi](/visualstudio/test/writing-unit-tests-for-c-cpp-with-the-microsoft-unit-testing-framework-for-cpp)|Progetto contenente unit test C++ nativi.|

### <a name="mfc"></a>MFC

Se si aggiunge il componente per il supporto di MFC e ATL all'installazione di Visual Studio, i modelli di progetto seguenti vengono aggiunti a Visual Studio.

|Modello di progetto|Descrizione|
|----------------------|-----------------------------|
|[Applicazione MFC](../mfc/reference/creating-an-mfc-application.md)|Progetto per la creazione di un'applicazione che usa la libreria MFC (Microsoft Foundation Class).|
|[Controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md)|Progetto per la creazione di un controllo ActiveX che usa la libreria MFC.|
|[DLL MFC](../mfc/reference/creating-an-mfc-dll-project.md)|Progetto per la creazione di una libreria di collegamento dinamico che usa la libreria MFC.|

### <a name="windows-universal-apps"></a>App universali di Windows

Se si aggiunge il componente C++ per gli strumenti della piattaforma UWP all'installazione di Visual Studio, i modelli di progetto seguenti vengono aggiunti a Visual Studio.

Per una panoramica delle app universali di Windows in C++, vedere [App universali di Windows (C++)](../windows/universal-windows-apps-cpp.md).

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

Molti dei file generati da un modello di progetto contengono commenti TODO per consentire di trovare il punto in cui fornire il proprio codice sorgente. Per altre informazioni sull'aggiunta di codice, vedere [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md) e [Utilizzo di file di risorse](../windows/working-with-resource-files.md).

## <a name="see-also"></a>Vedere anche

[Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)   
