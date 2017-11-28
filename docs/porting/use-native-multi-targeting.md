---
title: Usare multitargeting nativo in Visual Studio per compilare progetti precedenti | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- C++ native multi-targeting
- upgrading Visual C++ applications, retargeting
ms.assetid: b115aabe-a9dc-4525-90d3-367d97ea20c9
caps.latest.revision: "2"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 5475a211e3b0c116a7ab51cb7b7b128f5742e0cc
ms.sourcegitcommit: c9108f0c45b7a634d4e6e5c2d2ec192d50ffdbab
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/18/2017
---
# <a name="use-native-multi-targeting-in-visual-studio-to-build-old-projects"></a>Usare multitargeting nativo in Visual Studio per compilare progetti precedenti

Normalmente si consiglia di aggiornare i progetti quando si installa la versione più recente di Visual Studio. Il costo dell'aggiornamento di progetti e codice in genere è di gran lunga inferiore ai vantaggi offerti in termini di nuovo IDE, compilatore, librerie e strumenti. Tuttavia, è possibile che gli utenti non siano in grado di aggiornare alcuni progetti. I file binari possono essere associati a librerie o piattaforme più datate che per motivi di manutenzione non possono essere aggiornate. Il codice può usare costrutti di linguaggio non standard che si interrompono se si passa a un compilatore più recente. Il codice può basarsi su librerie di terze parti compilate per una versione specifica di Visual C++. Oppure si possono generare librerie per altri utenti che hanno come destinazione una specifica versione precedente di Visual C++.

Fortunatamente, è possibile usare Visual Studio 2017 e Visual Studio 2015 per compilare progetti destinati ai set di strumenti e alle librerie del compilatore meno recente. Non è necessario aggiornare un progetto Visual Studio 2010, Visual Studio 2012, Visual Studio 2013 o Visual Studio 2015 per sfruttare i vantaggi offerti dalle nuove funzionalità nell'IDE:

 - Nuove funzionalità di refactoring di C++ e funzionalità sperimentali dell'editor
 - Nuova finestra Strumenti di diagnostica del debugger e finestra Elenco errori
 - Punti di interruzione rinnovati, finestra Eccezioni e nuova funzionalità PerfTips
 - Nuovi strumenti di ricerca ed esplorazione del codice
 - Nuove correzioni rapide di C++ ed estensioni di Productivity Power Tools.

È anche possibile sviluppare progetti di Visual Studio 2008, ma non possono essere usati se non vengono modificati. Per informazioni dettagliate, vedere la sezione relativa a Visual Studio 2008.

Le versioni più recenti di Visual Studio supportano il multitargeting nativo e il round trip dei progetti. Il multitargeting nativo è la capacità dell'IDE più recente di eseguire la compilazione usando set di strumenti installati dalle versioni precedenti di Visual Studio. Il round trip è la capacità dell'IDE più recente di caricare i progetti creati da una versione precedente dell'IDE senza apportare modifiche al progetto. Se si installa la versione più recente di Visual Studio affiancata alla versione esistente, è possibile usare la nuova versione dell'IDE con il compilatore e gli strumenti dalla versione esistente per compilare i progetti. Gli altri membri del team possono continuare a usare i progetti nella versione precedente di Visual Studio.

Quando si usa un set di strumenti più datato, è possibile usufruire di molte delle funzionalità IDE più recenti, ma non delle ultime innovazioni nel compilatore, nelle librerie e negli strumenti di compilazione di C++. Ad esempio, non sarà possibile applicare i nuovi miglioramenti della conformità del linguaggio, le nuove funzionalità di debug e di analisi del codice né ottenere la maggiore velocità di compilazione offerta dal set di strumenti più recente. Esistono inoltre alcune funzionalità IDE che non sono compatibili con i set di strumenti precedenti. Ad esempio, le informazioni sul tipo possono risultare mancanti nel profiler della memoria e l'operazione di refactoring **Converti in valore letterale stringa non elaborata** genera un codice conforme a C++11 che non verrà compilato quando si usa Visual Studio 2012 o un set di strumenti più datato.

## <a name="how-to-use-native-multi-targeting-in-visual-studio"></a>Come usare multitargeting nativo in Visual Studio

Dopo aver installato Visual Studio affiancato alla versione meno recente, aprire il progetto esistente nella nuova versione di Visual Studio. Quando viene caricato il progetto Visual Studio chiede se si vuole aggiornarlo in modo che usi il compilatore e librerie C++ più recenti. Poiché si vuole mantenere il compilatore e le librerie precedenti per il progetto, scegliere il pulsante **Annulla**.

Visual Studio è persistente riguardo all'aggiornamento del progetto. Per evitare di visualizzare la finestra di dialogo dell'aggiornamento ogni volta che si carica il progetto, è possibile definire la seguente proprietà nei progetti o nel file PROPS o TARGET importati:

`<VCProjectUpgraderObjectName>NoUpgrade</VCProjectUpgraderObjectName>`

È necessario rimuovere questa proprietà quando si decide di aggiornare i progetti.

Se si sceglie di non eseguire l'aggiornamento, Visual Studio non apporta modifiche ai file della soluzione o del progetto. Quando si compila il progetto, i file binari generati sono completamente compatibili con quelli compilati con la versione precedente di Visual Studio. Ciò avviene perché Visual Studio usa lo stesso compilatore C++ e collega le stesse librerie accluse alla versione precedente dell'IDE. Un altro motivo è che la finestra di dialogo dell'aggiornamento suggerisce di mantenere la versione precedente di Visual Studio installata se si sceglie **Annulla**.

## <a name="instructions-for-visual-studio-2008"></a>Istruzioni per Visual Studio 2008  
  
Visual Studio 2008 usava un proprio sistema di compilazione dedicato per C++ denominato VCBuild. A partire da Visual Studio 2010, progetti di Visual C++ sono stati modificati in modo da usare MSBuild. Ciò significa che è necessario eseguire un'operazione di aggiornamento per compilare i progetti di Visual Studio 2008 nella versione più recente di Visual Studio. Il progetto aggiornato genera ancora i file binari completamente compatibili con i file binari creati usando l'IDE di Visual Studio 2008.

Per prima cosa, oltre alla versione corrente di Visual Studio, è necessario installare Visual Studio 2010 nello stesso computer di Visual Studio 2008. Solo Visual Studio 2010 installa gli script MSBuild richiesti per i progetti di Visual Studio 2008. 

Successivamente, è necessario aggiornare la soluzione e i progetti di Visual Studio 2008 alla versione corrente di Visual Studio. È consigliabile creare un backup dei progetti e dei file della soluzione prima dell'aggiornamento. Per avviare il processo di aggiornamento, aprire la soluzione nella versione corrente di Visual Studio. Quando si riceve una richiesta di aggiornamento, esaminare le informazioni presentate e quindi scegliere **OK** per avviare l'aggiornamento. Se la soluzione include più progetti, è necessario aggiornare ogni progetto. La procedura guidata crea i nuovi file di progetto VCXPROJ affiancati ai file VCPROJ esistenti. Purché sia disponibile anche una copia del file SLN originale, l'aggiornamento non ha altro impatto sui progetti di Visual Studio 2008 già esistenti.

Al termine dell'aggiornamento, se il report del log contiene errori o avvisi per uno dei progetti, esaminarli attentamente. La conversione da VCBuild a MSBuild può causare problemi. Assicurarsi di comprendere e implementare le azioni indicate nel report. Per altre informazioni sul report di log dell'aggiornamento e i problemi che possono verificarsi durante la conversione da VCBuild a MSBuild, vedere il post di blog relativo al [multitargeting nativo di C++](https://blogs.msdn.microsoft.com/vcblog/2009/12/08/c-native-multi-targeting/).

Al termine dell'aggiornamento del progetto, dopo avere risolto eventuali problemi nel file di log, la soluzione fa riferimento al set di strumenti più recente. Come passaggio finale, modificare le proprietà per ogni progetto della soluzione in modo che venga usato il set di strumenti di Visual Studio 2008. Con la soluzione caricata nella versione corrente di Visual Studio, per ogni progetto nella soluzione, aprire la finestra di dialogo **Pagine delle proprietà** del progetto, fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e quindi selezionare **Proprietà**. Nella finestra di dialogo **Pagine delle proprietà** modificare il valore dell'elenco a discesa **Configurazione** impostandolo su **Tutte le configurazioni**. In **Proprietà di configurazione** selezionare **Generale** e quindi impostare **Set strumenti della piattaforma** su **Visual Studio 2008 (v90)**.

Dopo questa modifica il compilatore e le librerie di Visual Studio 2008 vengono usati per generare file binari del progetto quando si compila la soluzione nella versione corrente di Visual Studio.

## <a name="install-an-older-visual-studio-toolset"></a>Installare un set di strumenti di Visual Studio precedente

È possibile che l'utente abbia un progetto di Visual C++ datato che non può o non vuole aggiornare, ma non sia disponibile la versione del set di strumenti della piattaforma corrispondente al progetto. In questo caso, per ottenere il set di strumenti, è possibile installare l'edizione Community o Express gratuita di Visual Studio per la versione necessaria. Ogni versione di Visual Studio a partire da Visual Studio 2008 è in grado di installare il compilatore, gli strumenti e le librerie necessari per usare quella versione come destinazione dalla versione corrente di Visual Studio. Accedere all'Area download Microsoft per trovare e scaricare una particolare versione di Visual Studio. Verificare che vengano scelte le opzioni di installazione di C++ durante l'installazione. Al termine dell'installazione, eseguire quella versione di Visual Studio per installare eventuali aggiornamenti. Verificare anche se in Windows Update sono presenti modifiche potenzialmente necessarie. Può essere necessario ripetere più volte questa procedura di verifica degli aggiornamenti per ottenere tutti gli aggiornamenti.

Di seguito sono riportati alcuni dei download di Visual Studio che potrebbero essere necessari:

  - [Microsoft Visual Studio Community 2015](https://www.microsoft.com/en-us/download/details.aspx?id=48146)  
  - [Microsoft Visual Studio Express 2013 per Windows Desktop con Update 5](https://www.microsoft.com/en-us/download/details.aspx?id=48131)  
  - [Microsoft Visual Studio Express 2012 per Windows Desktop](https://www.microsoft.com/en-us/download/details.aspx?id=34673)  
  - [Visual Studio 2012 Update 5](https://www.microsoft.com/en-us/download/details.aspx?id=34673)  
  - [Microsoft Visual C++ 2010 Express (Programma di installazione Web)](https://download.microsoft.com/download/1/D/9/1D9A6C0E-FC89-43EE-9658-B9F0E3A76983/vc_web.exe)  
  - [Microsoft Visual Studio 2010 Service Pack 1](https://www.microsoft.com/en-us/download/details.aspx?id=23691)  
  - [Microsoft Visual C++ 2008 Express con SP1 (Programma di installazione Web)](https://go.microsoft.com/?linkid=7729279)  

Quando questi prodotti sono installati, il menu a discesa della proprietà **Set strumenti della piattaforma** nella finestra di dialogo **Pagine delle proprietà** viene automaticamente aggiornato per visualizzare i set di strumenti disponibili. È ora possibile usare la versione più recente di Visual Studio per compilare progetti per tali versioni meno recenti del set di strumenti senza convertirle o aggiornarle.

## <a name="see-also"></a>Vedere anche

[Aggiornamento di progetti da versioni precedenti di Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)  
[Miglioramenti della conformità di C++ in Visual Studio 2017](../cpp-conformance-improvements-2017.md)  
