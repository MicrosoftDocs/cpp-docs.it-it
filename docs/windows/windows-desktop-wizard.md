---
title: Creazione guidata applicazione desktop di Windows
ms.date: 03/29/2019
f1_keywords:
- vc.appwiz.win32.overview
- vc.appwiz.win32.appset
helpviewer_keywords:
- Windows Desktop Wizard
- Win32 Project Wizard
ms.assetid: 5d7b3a5e-8461-479a-969a-67b7883725b9
ms.openlocfilehash: 43a47366475b227ccfc5918b07760cc582326e82
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62387725"
---
# <a name="windows-desktop-wizard"></a>Creazione guidata applicazione desktop di Windows

Creazione guidata applicazione Desktop di Windows sostituisce la creazione guidata applicazione Win32 in Visual Studio 2017 e versioni successive. La procedura guidata consente di creare uno qualsiasi dei quattro tipi di progetto C++ (elencati nell'intestazione nella tabella seguente). In ogni caso, è possibile specificare opzioni aggiuntive appropriate per il tipo di progetto aperto. 

   ![Creazione guidata applicazione desktop di Windows](media/windows-desktop-wizard.png)

La tabella seguente indica quali opzioni sono disponibili per ogni tipo di applicazione.

|Tipo di supporto|Applicazione console|Applicazione (Windows) eseguibile|Libreria a collegamento dinamico|Libreria statica|
|---------------------|-------------------------|----------------------------------------|---------------------------|--------------------|
|**Progetto vuoto**|Yes|Yes|Yes|No|
|**Simboli di esportazione**|No|No|Sì|No|
|**Intestazione precompilata**|No|No|No|Yes|
|**Supporto ATL**|Yes|No|No|No|
|**Supporto MFC**|Yes|No|No|Yes|

## <a name="overview"></a>Panoramica

Questa pagina di procedura guidata illustra le impostazioni di progetto correnti per l'applicazione Win32 che si sta creando. Per impostazione predefinita, sono impostate le opzioni seguenti:

- Il progetto è un'applicazione Windows.

- Il progetto non è vuoto.

- Il progetto non contiene simboli di esportazione.

- Il progetto non usa un file di intestazione precompilata (questa opzione è disponibile solo per progetti di libreria statica).

- Il progetto non include supporto né per MFC né per ATL.

## <a name="application-type"></a>Tipo di applicazione

Crea il tipo di applicazione specificata.

|Opzione|Descrizione|
|------------|-----------------|
|**Applicazione console**|Crea un'applicazione console. Programmi console sviluppati con [funzioni Console](https://msdn.microsoft.com/library/ms813137.aspx), che forniscono il supporto di modalità carattere nelle finestre della console. Visual C++ [librerie run-time](../c-runtime-library/c-run-time-library-reference.md) anche fornire l'output e input da finestre della console con funzioni dei / o standard, ad esempio `printf_s()` e `scanf_s()`. Un'applicazione console non dispone di alcuna interfaccia utente grafica. Compila in un file .exe e può essere eseguito come applicazione autonoma dalla riga di comando.<br /><br /> È possibile aggiungere il supporto MFC e ATL a un'applicazione console.|
|**Applicazione di Windows**|Crea un programma Win32. Un programma Win32 è un'applicazione eseguibile (EXE) scritta in C o C++, tramite chiamate all'API Win32 per creare un'interfaccia utente grafica.<br /><br /> Non è possibile aggiungere MFC o ATL supportano a un'applicazione Windows.|
|**Libreria a collegamento dinamico**|Crea una libreria di collegamento dinamico Win32 (DLL). Una DLL Win32 è un file binario, scritto in C o C++, che usa le chiamate all'API Win32 anziché le classi MFC e che funge da una libreria condivisa di funzioni che possono essere utilizzate contemporaneamente da più applicazioni.<br /><br /> Non è possibile aggiungere supporto MFC o ATL a un'applicazione DLL creata usando questa procedura guidata, ma è possibile creare una DLL MFC da scegliere **nuovo > progetto > DLL MFC**.|
|**Libreria statica**|Crea una libreria statica. Una libreria statica è un file contenente gli oggetti e le funzioni e i dati che si collega il programma quando viene compilato il file eseguibile. In questo argomento illustra come creare i file di avvio e [proprietà del progetto](../build/reference/property-pages-visual-cpp.md) per una libreria statica. Un file di libreria statica offre i vantaggi seguenti:<br /><br />-Una libreria statica Win32 è utile se l'applicazione che si sta lavorando effettua le chiamate all'API Win32 anziché le classi MFC.<br />-Il processo di collegamento non cambiano se il resto dell'applicazione Windows viene scritto nel linguaggio C o C++.<br />-È possibile collegare una libreria statica a un programma basato su MFC o a un programma non MFC.|

## <a name="additional-options"></a>Opzioni aggiuntive

Definisce il supporto e le opzioni per l'applicazione, a seconda del tipo.

|Opzione|Descrizione|
|------------|-----------------|
|**Progetto vuoto**|Specifica che i file di progetto sono vuoti. Se si dispone di un set di file del codice sorgente (ad esempio file con estensione cpp, i file di intestazione, icone, barre degli strumenti, finestre di dialogo e così via) e si desidera creare un progetto nell'ambiente di sviluppo di Visual C++, è innanzitutto necessario creare un progetto vuoto, quindi aggiungere i file al progetto.<br /><br /> Questa selezione non è disponibile per i progetti di libreria statica.|
|**Simboli di esportazione**|Specifica che il progetto della DLL Esporta simboli.|
|**Intestazione precompilata**|Specifica che il progetto di libreria statica Usa un'intestazione precompilata.|
|**Controlli Security Development Lifecycle (SDL)**|Per altre informazioni su SDL, vedere [materiale sussidiario del processo Microsoft Security Development Lifecycle (SDL)](../build/reference/sdl-enable-additional-security-checks.md)|

## <a name="add-common-headers-for"></a>Aggiungi intestazioni comuni per:

Aggiungere il supporto per una delle librerie fornite con Visual C++.

|Opzione|Descrizione|
|------------|-----------------|
|**ATL**|Compila nel progetto il supporto per le classi nella libreria ATL (Active Template). Per le applicazioni console Win32 solo.<br /><br /> **Nota** questa opzione non indica il supporto per l'aggiunta di procedure guidate di codice gli oggetti ATL usando la libreria ATL. È possibile aggiungere oggetti ATL solo per i progetti ATL o MFC nei progetti con ATL è supportato.|
|**MFC**|Compila nel progetto il supporto per la libreria di classi MFC (Microsoft Foundation). Per le applicazioni console Win32 e solo le librerie statiche.|

## <a name="remarks"></a>Note

Dopo aver creato un'applicazione desktop di Windows, è possibile aggiungere classi C++ generiche usando la procedura guidata per codice [generico](../ide/generic-cpp-class-wizard.md) . È possibile aggiungere altri elementi, quali file HTML, file di intestazione, risorse o file di testo.

> [!NOTE]
> Non è possibile aggiungere classi ATL ed è possibile aggiungere classi MFC solo a quei tipi di applicazioni desktop di Windows che supportano MFC (vedere la tabella precedente).

È possibile visualizzare i file creati per il progetto con la procedura guidata in **Esplora soluzioni**. Per altre informazioni sui file che verrà creato il progetto, vedere il file di progetto creato, `ReadMe.txt`. Per altre informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual C++](../build/reference/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedere anche

[Tipi di progetto Visual C++](../build/reference/visual-cpp-project-types.md)