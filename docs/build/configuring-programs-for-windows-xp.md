---
title: "Configurazione di programmi C++ 11 per Windows XP | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 1e4487b3-d815-4123-878b-5718b22f0fd5
caps.latest.revision: 14
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Configurazione di programmi C++ 11 per Windows XP
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Poiché [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] supporta più set di strumenti della piattaforma, è possibile usare sistemi operativi e librerie di runtime non supportati dal set di strumenti predefinito.  Ad esempio, è possibile usare i miglioramenti al linguaggio C\+\+11, i compilatori, le librerie e le altre funzionalità implementate in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per creare app destinate a [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)].  È possibile usare i set di strumenti della piattaforma meno recenti per gestire la compatibilità del codice legacy con il codice binario sfruttando le funzionalità più recenti dell'IDE di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
> [!NOTE]
>  È necessario installare [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] Update 4 per aggiungere il supporto dei set di strumenti della piattaforma per [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] a [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)].  Per scaricare e installare una copia di [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] Update 4, vedere [Microsoft Visual Studio Express 2012 per Windows Desktop](http://go.microsoft.com/fwlink/?LinkID=265464) nel Download Center di Microsoft.  Installare quindi [Visual Studio 2012 Update 4](http://go.microsoft.com/fwlink/?LinkID=335900) per ottenere il set di strumenti della piattaforma v110\_xp.  Usare Windows Update per ricevere gli aggiornamenti più recenti del software dopo l'installazione.  
  
## Esperienza destinata a Windows XP  
 Il set di strumenti della piattaforma di Windows XP incluso in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è una versione di [!INCLUDE[win7](../build/includes/win7_md.md)] SDK incluso in [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)], ma usa il compilatore C\+\+ corrente.  Configura inoltre le proprietà del progetto in base ai valori predefiniti appropriati, ad esempio specificando un linker compatibile per supportare una versione precedente.  Solo le app desktop Windows create usando il set di strumenti della piattaforma di Windows XP vengono eseguite in [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], ma queste app possono essere eseguite anche in sistemi operativi più recenti, ad esempio Windows Vista, [!INCLUDE[win7](../build/includes/win7_md.md)], [!INCLUDE[winsvr08](../build/includes/winsvr08_md.md)], [!INCLUDE[win8](../build/includes/win8_md.md)] o [!INCLUDE[winserver8](../build/includes/winserver8_md.md)].  
  
#### Per usare Windows XP  
  
1.  In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto, quindi scegliere **Proprietà**.  
  
2.  Nella finestra di dialogo **Pagine delle proprietà** per il progetto impostare in **Proprietà di configurazione**, **Generale** la proprietà **Set strumenti della piattaforma** sul set di strumenti desiderato di Windows XP.  Ad esempio, scegliere **Visual Studio 2012 – Windows XP \(v110\_xp\)** per creare il codice per la compatibilità binaria con le librerie di Microsoft Visual C\+\+ 2012 Redistributable.  
  
### Supporto di C\+\+ runtime  
 Oltre al set di strumenti della piattaforma di Windows XP, la libreria runtime C \(CRT\), la libreria STL \(Standard Template Library\), la libreria ATL \(Active Template Library\), la libreria runtime di concorrenza \(ConCRT\), la libreria PPL \(Parallel Patterns Library\), la libreria Microsoft Foundation Class \(MFC\) e la libreria C\+\+ AMP \(C\+\+ Accelerated Massive Programming\) includono il supporto runtime per [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)].  Per questi sistemi operativi, le versioni supportate sono [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 3 \(SP3\) per x86, [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 2 \(SP2\) per x64 e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] Service Pack 2 \(SP2\) per x86 e x64.  
  
 Queste librerie sono supportate dai set di strumenti della piattaforma installati da [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], a seconda della destinazione:  
  
|Libreria|Set di strumenti della piattaforma predefinito per il supporto delle app desktop Windows|Set di strumenti della piattaforma predefinito per il supporto delle app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)]|Set di strumenti della piattaforma di Windows XP per il supporto di [!INCLUDE[winxp](../build/includes/winxp_md.md)], [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]|  
|--------------|----------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|  
|CRT|X|X|X|  
|STL|X|X|X|  
|ATL|X|X|X|  
|ConCRT\/PPL|X|X|X|  
|MFC|X||X|  
|C\+\+ AMP|X|X||  
  
> [!NOTE]
>  Le app scritte in C\+\+\/CLI e che supportano .NET Framework 4 vengono eseguite in [!INCLUDE[winxp](../build/includes/winxp_md.md)] e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)].  
  
### Differenze tra i set di strumenti  
 A causa delle differenze nel supporto di piattaforme e librerie, l'esperienza di sviluppo per le app che usano il set di strumenti della piattaforma per Windows XP non è completa come per le app che usano il set di strumenti della piattaforma predefinito per [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
-   **Funzionalità del linguaggio C\+\+**  
  
     Nelle app che usano il set di strumenti della piattaforma v110\_xp sono supportate solo le funzionalità del linguaggio C\+\+11 implementate in [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)].  Nelle app che usano il set di strumenti della piattaforma v120\_xp sono supportate solo le funzionalità del linguaggio C\+\+ 11 implementate in [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)].  [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] usa il compilatore corrispondente quando esegue le compilazioni con set di strumenti della piattaforma precedenti.  Usare un set di strumenti della piattaforma di Windows XP più recente per sfruttare le funzionalità aggiuntive di C\+\+11 implementate in tale versione.  
  
-   **Debug remoto**  
  
     Gli strumenti remoti per [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] non supportano il debug remoto in [!INCLUDE[winxp](../build/includes/winxp_md.md)] o [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)].  Per eseguire il debug di un'app in esecuzione in [!INCLUDE[winxp](../build/includes/winxp_md.md)] o [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], è possibile usare un debugger di una versione precedente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per eseguirne il debug in locale o remoto.  Ciò è simile all'esecuzione del debug di un'app in Windows Vista, che supporta il runtime del set di strumenti della piattaforma, ma non il debug remoto.  
  
-   **Analisi statica**  
  
     Il set di strumenti della piattaforma di Windows XP non supporta l'analisi statica, perché le annotazioni SAL per [!INCLUDE[win7](../build/includes/win7_md.md)] SDK e le librerie di runtime non sono compatibili.  Quando si vuole eseguire l'analisi statica in un'app che supporta [!INCLUDE[winxp](../build/includes/winxp_md.md)] o [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)], è possibile passare temporaneamente al set di strumenti della piattaforma predefinito per eseguire l'analisi e quindi tornare al set di strumenti della piattaforma di Windows XP per compilare l'app.  
  
-   **Debug della grafica DirectX**  
  
     Poiché il debugger grafica non supporta l'API Direct3D 9, non può essere usato per eseguire il debug delle app che usano Direct3D in [!INCLUDE[winxp](../build/includes/winxp_md.md)] o [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)].  Tuttavia, se l'app implementa un renderer alternativo che usa le API Direct3D 10 o Direct3D 11 API, il debugger grafica può essere usato per diagnosticare i problemi mediante tali API.  
  
-   **Compilazione HLSL**  
  
     Per impostazione predefinita, il set di strumenti di Windows XP non compila i file di codice sorgente HLSL.  Per compilare i file HLSL, scaricare e installare DirectX SDK di giugno 2010, quindi impostare le directory VC del progetto per includerlo.  Per altre informazioni, vedere la sezione "DirectX SDK non registra i percorsi di inclusione e della libreria con Visual Studio 2010" della [pagina di download di DirectX SDK giugno 2010](http://www.microsoft.com/download/details.aspx?displaylang=en&id=6812).