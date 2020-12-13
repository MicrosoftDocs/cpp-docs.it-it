---
description: 'Ulteriori informazioni su: creazione guidata desktop di Windows'
title: Creazione guidata applicazione desktop di Windows
ms.date: 03/29/2019
f1_keywords:
- vc.appwiz.win32.overview
- vc.appwiz.win32.appset
helpviewer_keywords:
- Windows Desktop Wizard
- Win32 Project Wizard
ms.assetid: 5d7b3a5e-8461-479a-969a-67b7883725b9
ms.openlocfilehash: b80a5fb23bd9ce2428bee17b9c4ca6fd9401d1e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135928"
---
# <a name="windows-desktop-wizard"></a>Creazione guidata applicazione desktop di Windows

La creazione guidata desktop di Windows sostituisce la creazione guidata applicazione Win32 in Visual Studio 2017 e versioni successive. La procedura guidata consente di creare uno dei quattro tipi di progetti C++ (elencati nell'intestazione della tabella riportata di seguito). In ogni caso, è possibile specificare opzioni aggiuntive appropriate per il tipo di progetto aperto.

   ![Creazione guidata applicazione desktop di Windows](media/windows-desktop-wizard.png)

La tabella seguente indica quali opzioni sono disponibili per ogni tipo di applicazione.

|Tipo di supporto|Applicazione console|Applicazione (Windows) eseguibile|Libreria a collegamento dinamico|Libreria statica|
|---------------------|-------------------------|----------------------------------------|---------------------------|--------------------|
|**Progetto vuoto**|Sì|Sì|Sì|No|
|**Simboli di esportazione**|No|No|Sì|No|
|**Intestazione precompilata**|No|No|No|Sì|
|**Supporto ATL**|Sì|No|No|No|
|**Supporto MFC**|Sì|No|No|Sì|

## <a name="overview"></a>Panoramica

Questa pagina di procedura guidata illustra le impostazioni di progetto correnti per l'applicazione Win32 che si sta creando. Per impostazione predefinita, sono impostate le opzioni seguenti:

- Il progetto è un'applicazione Windows.

- Il progetto non è vuoto.

- Il progetto non contiene simboli di esportazione.

- Il progetto non usa un file di intestazione precompilata (questa opzione è disponibile solo per progetti di libreria statica).

- Il progetto non include supporto né per MFC né per ATL.

## <a name="application-type"></a>Tipo di applicazione

Crea il tipo di applicazione specificato.

|Opzione|Description|
|------------|-----------------|
|**Applicazione console**|Crea un'applicazione console. Le [librerie di runtime](../c-runtime-library/c-run-time-library-reference.md) Visual C++ forniscono inoltre output e input dalle finestre della console con le funzioni di I/O standard, ad esempio `printf_s()` e `scanf_s()` . Un'applicazione console non dispone di un'interfaccia utente grafica. Viene compilato in un file con estensione exe e può essere eseguito come applicazione autonoma dalla riga di comando.<br /><br /> È possibile aggiungere il supporto MFC e ATL a un'applicazione console.|
|**Applicazione Windows**|Crea un programma Win32. Un programma Win32 è un'applicazione eseguibile (EXE) scritta in C o C++, usando le chiamate all'API Win32 per creare un'interfaccia utente grafica.<br /><br /> Non è possibile aggiungere il supporto MFC o ATL a un'applicazione Windows.|
|**Libreria di collegamento dinamico**|Crea una libreria di collegamento dinamico (DLL) Win32. Una DLL Win32 è un file binario, scritto in C o C++, che utilizza le chiamate all'API Win32 anziché alle classi MFC e funge da libreria condivisa di funzioni che possono essere utilizzate contemporaneamente da più applicazioni.<br /><br /> Non è possibile aggiungere il supporto MFC o ATL a un'applicazione DLL creata tramite questa procedura guidata, ma è possibile creare una DLL MFC scegliendo **nuovo > progetto > DLL MFC**.|
|**Libreria statica**|Crea una libreria statica. Una libreria statica è un file contenente oggetti e le relative funzioni e dati che si collegano al programma quando viene compilato il file eseguibile. In questo argomento viene illustrato come creare i file di avvio e le [proprietà del progetto](../build/reference/property-pages-visual-cpp.md) per una libreria statica. Un file di libreria statica offre i vantaggi seguenti:<br /><br />-Una libreria statica Win32 è utile se l'applicazione in uso effettua chiamate all'API Win32 anziché alle classi MFC.<br />-Il processo di collegamento è lo stesso indipendentemente dal fatto che il resto dell'applicazione Windows sia scritto in C o in C++.<br />-È possibile collegare una libreria statica a un programma basato su MFC o a un programma non MFC.|

## <a name="additional-options"></a>Opzioni aggiuntive

Definisce il supporto e le opzioni per l'applicazione, a seconda del tipo.

|Opzione|Description|
|------------|-----------------|
|**Progetto vuoto**|Specifica che i file di progetto sono vuoti. Se si dispone di un set di file di codice sorgente, ad esempio file con estensione cpp, file di intestazione, icone, barre degli strumenti, finestre di dialogo e così via, e si desidera creare un progetto nell'ambiente di sviluppo Visual C++, è necessario innanzitutto creare un progetto vuoto, quindi aggiungere i file al progetto.<br /><br /> Questa selezione non è disponibile per i progetti di libreria statica.|
|**Simboli di esportazione**|Specifica che il progetto DLL Esporta simboli.|
|**Intestazione precompilata**|Specifica che il progetto di libreria statica usa un'intestazione precompilata.|
|**Controlli Security Development Lifecycle (SDL)**|Per ulteriori informazioni su SDL, vedere [Microsoft Security Development Lifecycle (SDL) linee guida](../build/reference/sdl-enable-additional-security-checks.md) per il processo|

## <a name="add-common-headers-for"></a>Aggiungi intestazioni comuni per:

Aggiungere il supporto per una delle librerie fornite in Visual C++.

|Opzione|Description|
|------------|-----------------|
|**ATL**|Si basa sul supporto del progetto per le classi nella Active Template Library (ATL). Solo per le applicazioni console Win32.<br /><br /> **Nota** Questa opzione non indica il supporto per l'aggiunta di oggetti ATL mediante le creazioni guidate codice ATL. È possibile aggiungere oggetti ATL solo a progetti ATL o a progetti MFC con supporto ATL.|
|**MFC**|Si basa sul supporto del progetto per la libreria MFC (Microsoft Foundation Class). Solo per le applicazioni console Win32 e le librerie statiche.|

## <a name="remarks"></a>Commenti

Dopo aver creato un'applicazione desktop di Windows, è possibile aggiungere classi C++ generiche usando la procedura guidata per codice [generico](../ide/adding-a-generic-cpp-class.md#generic-c-class-wizard) . È possibile aggiungere altri elementi, quali file HTML, file di intestazione, risorse o file di testo.

> [!NOTE]
> Non è possibile aggiungere classi ATL ed è possibile aggiungere classi MFC solo a quei tipi di applicazioni desktop di Windows che supportano MFC (vedere la tabella precedente).

È possibile visualizzare i file creati per il progetto con la procedura guidata in **Esplora soluzioni**. Per ulteriori informazioni sui file creati dalla procedura guidata per il progetto, vedere il file generato dal progetto `ReadMe.txt` . Per ulteriori informazioni sui tipi di file, i [tipi di file creati per i progetti Visual Studio C++](../build/reference/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedi anche

[Tipi di progetto C++ in Visual Studio](../build/reference/visual-cpp-project-types.md)
