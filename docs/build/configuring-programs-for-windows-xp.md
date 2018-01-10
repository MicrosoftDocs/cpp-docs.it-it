---
title: Configurazione di programmi per Windows XP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 1e4487b3-d815-4123-878b-5718b22f0fd5
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ff80109c1f3a5e03ecb85406cdaea24804f96783
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="configuring-programs-for-windows-xp"></a>Configurazione di programmi per Windows XP
Poiché Visual Studio supporta più set di strumenti della piattaforma, è possibile assegnare i sistemi operativi e librerie di runtime che non sono supportate dal set di strumenti predefinito. Ad esempio, passando il set di strumenti della piattaforma, è possibile utilizzare C++ 11, C++ 14 e miglioramenti di C++ 17 lingue supportati dal compilatore Visual C++ in Visual Studio per creare App destinate [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. È possibile inoltre utilizzare set di strumenti della piattaforma meno recenti per gestire il codice legacy binario compatibile e comunque sfruttare le funzionalità più recenti dell'IDE di Visual Studio.  
  
> [!NOTE]
>  Se si utilizza [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)], è necessario installare [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] aggiornamento 4 per aggiungere il supporto di set di strumenti della piattaforma per [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. Per scaricare e installare una copia di [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] aggiornamento 4, vedere [Microsoft Visual Studio Express 2012 per Windows Desktop](http://go.microsoft.com/fwlink/p/?linkid=265464) nel Microsoft Download Center. Installare quindi [Visual Studio 2012 Update 4](http://go.microsoft.com/fwlink/p/?linkid=335900) per ottenere il set di strumenti della piattaforma v110_xp. Usare Windows Update per ricevere gli aggiornamenti più recenti del software dopo l'installazione.  
  
## <a name="windows-xp-targeting-experience"></a>Esperienza destinata a Windows XP  
 Il set di strumenti della piattaforma Windows XP incluso in Visual Studio è una versione di [!INCLUDE[win7](../build/includes/win7_md.md)] SDK incluso in [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)], ma usa il compilatore C++ corrente. Configura inoltre le proprietà del progetto in base ai valori predefiniti appropriati, ad esempio specificando un linker compatibile per supportare una versione precedente. Solo Windows le app desktop vengono create utilizzando il set di strumenti della piattaforma Windows XP vengono eseguite su [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], ma queste App possono essere eseguite anche nei sistemi operativi di Windows più recenti.  
  
#### <a name="to-target-windows-xp"></a>Per usare Windows XP  
  
1.  In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.  
  
2.  Nel **pagine delle proprietà** nella finestra di dialogo per il progetto, in **le proprietà di configurazione**, **generale**, impostare il **set strumenti della piattaforma** proprietà set di strumenti desiderato di Windows XP. Ad esempio, scegliere **Visual Studio 2015 - Windows XP (v140_xp)** per creare codice per [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] tramite il compilatore Microsoft Visual C++ 2015.  
  
### <a name="c-runtime-support"></a>Supporto di C++ runtime  
 Con il set di strumenti della piattaforma Windows XP, la libreria di Runtime C (CRT), della libreria Standard C++, Active Template Library (ATL), libreria di Runtime di concorrenza (ConCRT), libreria PPL (Parallel Patterns Library), (MFC (Microsoft Foundation Class Library) e C++ AMP (C++ Accelerated Massive programmazione) libreria includono il supporto runtime per [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. Per questi sistemi operativi, le versioni minime supportate sono [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 3 (SP3) per x86, [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 2 (SP2) per x64 e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] Service Pack 2 (SP2) per x86 e x64.  
  
 Queste librerie sono supportate dal set di strumenti della piattaforma installati da Visual Studio, a seconda della destinazione:  
  
|Libreria|Set di strumenti della piattaforma predefinito per il supporto delle app desktop Windows|Set di strumenti della piattaforma predefinito per il supporto delle app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)]|Set di strumenti della piattaforma di Windows XP per il supporto di [!INCLUDE[winxp](../build/includes/winxp_md.md)], [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]|  
|-------------|-------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|  
|CRT|X|X|x|  
|Libreria standard C++|x|X|X|  
|ATL|X|X|X|  
|ConCRT/PPL|X|X|X|  
|MFC|X||X|  
|C++ AMP|X|X||  
  
> [!NOTE]
>  Le app scritte in C++/CLI e che supportano .NET Framework 4 vengono eseguite in [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)].  
  
### <a name="differences-between-the-toolsets"></a>Differenze tra i set di strumenti  
 A causa delle differenze nel supporto di piattaforme e librerie, l'esperienza di sviluppo per applicazioni che utilizzano un set di strumenti della piattaforma Windows XP non è completa come per le app che usano il set di strumenti della piattaforma Visual Studio predefinito.  
  
-   **Funzionalità del linguaggio C++**  
  
     Solo funzionalità del linguaggio C++ implementato in [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] nelle App che usano il set di strumenti della piattaforma v110_xp sono supportate. Solo funzionalità del linguaggio C++ implementato in [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] nelle App che usano il set di strumenti della piattaforma v120_xp sono supportate. Visual Studio utilizza il compilatore corrispondente al momento della compilazione utilizzando i set di strumenti della piattaforma meno recenti. Utilizzare il set di strumenti della piattaforma Windows XP più recente per sfruttare i vantaggi delle funzionalità del linguaggio C++ aggiuntive implementate in tale versione del compilatore.  
  
-   **Debug remoto**  
  
     Remote Tools per Visual Studio non supporta il debug remoto nel [!INCLUDE[winxp](../build/includes/winxp_md.md)] o [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. Eseguire il debug di un'app quando è in esecuzione [!INCLUDE[winxp](../build/includes/winxp_md.md)] o [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], è possibile utilizzare un debugger da una versione precedente di Visual Studio per eseguire il debug in locale o remota. Ciò è simile all'esecuzione del debug di un'app in Windows Vista, che supporta il runtime del set di strumenti della piattaforma, ma non il debug remoto.  
  
-   **Analisi statica**  
  
     Il set di strumenti della piattaforma di Windows XP non supporta l'analisi statica, perché le annotazioni SAL per [!INCLUDE[win7](../build/includes/win7_md.md)] SDK e le librerie di runtime non sono compatibili. Quando si vuole eseguire l'analisi statica in un'app che supporta [!INCLUDE[winxp](../build/includes/winxp_md.md)] o [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], è possibile passare temporaneamente al set di strumenti della piattaforma predefinito per eseguire l'analisi e quindi tornare al set di strumenti della piattaforma di Windows XP per compilare l'app.  
  
-   **Debug della grafica DirectX**  
  
     Poiché il debugger grafica non supporta l'API Direct3D 9, non può essere usato per eseguire il debug delle app che usano Direct3D in [!INCLUDE[winxp](../build/includes/winxp_md.md)] o [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. Tuttavia, se l'app implementa un renderer alternativo che usa le API Direct3D 10 o Direct3D 11 API, il debugger grafica può essere usato per diagnosticare i problemi mediante tali API.  
  
-   **Compilazione HLSL**  
  
     Per impostazione predefinita, il set di strumenti di Windows XP non compila i file di codice sorgente HLSL. Per compilare i file HLSL, scaricare e installare DirectX SDK di giugno 2010, quindi impostare le directory VC del progetto per includerlo. Per ulteriori informazioni, vedere il "DirectX SDK non registra i percorsi di inclusione e della libreria con Visual Studio 2010" sezione di [giugno 2010 pagina di download di DirectX SDK](http://www.microsoft.com/download/details.aspx?displaylang=en&id=6812).