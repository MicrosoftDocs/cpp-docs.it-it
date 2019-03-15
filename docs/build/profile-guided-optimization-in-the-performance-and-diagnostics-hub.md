---
title: Ottimizzazione GPO nell'hub Prestazioni e diagnostica
ms.date: 11/19/2018
ms.assetid: dc3a1914-dbb6-4401-bc63-10665a8c8943
ms.openlocfilehash: e1aaf64c18ebde29e6ea0d6b4b6bdad66f21a435
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826589"
---
# <a name="profile-guided-optimization-in-the-visual-studio-2013-performance-and-diagnostics-hub"></a>L'ottimizzazione PGO nell'Hub di diagnostica e prestazioni di Visual Studio 2013

Se si usa Visual Studio 2013, l'ottimizzazione PGO per Visual C++ plug-nell'Hub prestazioni e diagnostica semplifica l'esperienza di ottimizzazione PGO per gli sviluppatori. È possibile [scaricare il plug-in](https://marketplace.visualstudio.com/items?itemName=ProfileGuidedOptimizationTeam.ProfileGuidedOptimizationforVisualC) dal sito Web di Visual Studio. Il plug-in non è supportato nelle versioni più recenti di Visual Studio.

L'ottimizzazione PGO consente di creare compilazioni per applicazioni native x86 e x64 ottimizzate per il modo in cui gli utenti interagiscono con esse. PGO è un processo in più passaggi: Si crea una build dell'app per la profilatura instrumentata e quindi si esegue il "training". Vale a dire si esegue l'applicazione instrumentata attraverso scenari comuni di interazione dell'utente. Salvare i dati di profilatura acquisiti e quindi ricompilare l'applicazione utilizzando i risultati per guidare l'ottimizzazione dell'intero programma. Sebbene sia possibile eseguire singolarmente queste operazioni in Visual Studio o dalla riga di comando, il plug-in PGO centralizza e semplifica il processo. Il plug-in PGO imposta tutte le opzioni richieste, guida l'utente per ogni passaggio, mostra l'analisi e quindi utilizza i risultati per configurare la compilazione e ottimizzare ogni funzione per dimensione o velocità. Il plug-in PGO consente inoltre di eseguire nuovamente il training dell'applicazione ed aggiornare i dati dell'ottimizzazione della compilazione non appena si modifica il codice.

## <a name="prerequisites"></a>Prerequisiti

È necessario [scaricare il plug-in PGO](https://marketplace.visualstudio.com/items?itemName=ProfileGuidedOptimizationTeam.ProfileGuidedOptimizationforVisualC) e installarlo in Visual Studio prima di usarlo nell'Hub prestazioni e diagnostica.

## <a name="walkthrough-using-the-pgo-plug-in-to-optimize-an-app"></a>Procedura dettagliata: Usando il plug-in PGO per ottimizzare un'applicazione

Innanzitutto, verrà creata un'applicazione desktop Win32 di base in Visual Studio. Se si dispone già di un'applicazione che si desidera ottimizzare, è possibile utilizzarla e saltare questo passaggio.

### <a name="to-create-an-app"></a>Per creare un'applicazione

1. Nella barra dei menu scegliere **File**, **Nuovo**, **Progetto**.

1. Nel riquadro sinistro della finestra di **nuovo progetto** finestra di dialogo espandere **installato**, **modelli**, **Visual C++** e quindi selezionare  **MFC**.

1. Nel riquadro centrale, selezionare **applicazione MFC**.

1. Specificare un nome per il progetto, ad esempio, **SamplePGOProject**, ovvero nel **nome** casella. Fare clic sul pulsante **OK** .

1. Nel **Panoramica** pagina della **Creazione guidata applicazione MFC** finestra di dialogo scegliere la **fine** pulsante.

Quindi, impostare la configurazione della compilazione dell'applicazione su Rilascio per prepararla ai passaggi di compilazione e di formazione PGO.

### <a name="to-set-the-build-configuration"></a>Per impostare la configurazione di compilazione

1. Nella barra dei menu scegliere **Compilazione**, **Gestione configurazione**.

1. Nel **Configuration Manager** finestra di dialogo scegliere la **configurazione soluzione attiva** pulsante a discesa e selezionare **versione**. Fare clic su **Chiudi** .

Aprire l'Hub prestazioni e diagnostica, sulla barra dei menu, scegliere **Analyze**, **prestazioni e diagnostica**. Viene aperta una pagina della sessione di diagnostica con gli strumenti di analisi disponibili per il tipo di progetto.

![PGO nell'Hub prestazioni e diagnostica](media/pgofig0hub.png "PGO nell'Hub prestazioni e diagnostica")

Nelle **strumenti disponibili**, selezionare la **ottimizzazione PGO** casella di controllo. Scegliere il **avviare** per avviare il plug-in PGO.

![Pagina Introduzione PGO](media/pgofig1start.png "pagina Introduzione PGO")

Il **ottimizzazione PGO** pagina vengono descritti i passaggi gli utilizzi plug-in per migliorare le prestazioni dell'app. Scegliere il **avviare** pulsante.

![Pagina Strumentazione PGO](media/pgofig2instrument.png "pagina Strumentazione PGO")

Nel **strumentazione** sezione, si utilizza il **Training inizialmente abilitato** possibilità di scegliere se includere la fase di avvio dell'app come parte del training. Se questa opzione non è selezionata, i dati della formazione non vengono registrati in un'applicazione instrumentata in esecuzione finché non si abilita la formazione in modo esplicito.

Scegliere il **instrumentare** per compilare l'app con un set speciale di opzioni del compilatore. Il compilatore inserisce istruzioni probe nel codice generato. Queste istruzioni registrano i dati di profiling durante la fase di formazione.

![Pagina build instrumentata PGO](media/pgofig3build.PNG "pagina build instrumentata PGO")

Quando la compilazione instrumentata dell'applicazione è completa, l'applicazione viene avviata automaticamente.

In caso di eventuali errori o avvisi durante la compilazione, correggerli e quindi scegliere **riavvia compilazione** per riavviare la compilazione instrumentata.

Quando viene avviata l'app, è possibile usare la **avvia Training** e **Sospendi Training** collega nel **Training** sezione per controllare quando vengono registrate le informazioni di profilatura. È possibile usare la **Arresta applicazione** e **Avvia applicazione** collegamenti per arrestare e riavviare l'app.

![Pagina training PGO](media/pgofig4training.PNG "pagina training PGO")

Durante il training, eseguire gli scenari utente per acquisire le informazioni di profilatura di cui il plug-in PGO necessita per ottimizzare il codice. Dopo aver completato il training, chiudere l'app o scegliere il **Arresta applicazione** collegamento. Scegliere il **Analyze** per avviare la fase di analisi.

Quando l'analisi è stata completata, il **analisi** sezione per visualizzare un report delle informazioni di profilatura acquisito durante la fase di training dello scenario utente. È possibile utilizzare questo report per esaminare le funzioni che sono state più chiamate e che hanno richiesto la maggior quantità di tempo da parte dell'applicazione. Il plug-in PGO utilizza le informazioni per determinare quale funzione dell'applicazione ottimizzare per velocità e quali ottimizzare per dimensione. Il plug-in PGO configura le ottimizzazioni di compilazione per creare la più piccola e veloce applicazione per gli scenari utente registrati durante il training.

![Pagina analisi PGO](media/pgofig5analyze.png "pagina analisi PGO")

Se il training ha acquisito le informazioni di profilatura previste, è possibile scegliere **Save Changes** per salvare i dati di profilatura analizzati nel progetto per ottimizzare le compilazioni future. Per eliminare i dati del profilo e avviare il training dall'inizio, scegliere **Ripeti Training**.

Il file di dati di profilo viene salvato nel progetto in un **dati di Training PGO** cartella. Questi dati vengono utilizzati per controllare le impostazioni dell'ottimizzazione della compilazione del compilatore nell'applicazione.

![File di dati PGO in Esplora soluzioni](media/pgofig6data.png "file di dati PGO in Esplora soluzioni")

Dopo le analisi, il plug-in PGO imposta le opzioni di compilazione nel progetto per utilizzare i dati di profilatura per ottimizzare in modo selettivo l'applicazione durante la compilazione. È possibile continuare a modificare e compilare l'applicazione con gli stessi dati di profiling. Quando l'applicazione viene compilata, l'output della compilazione mostra quante funzioni e istruzioni sono state ottimizzate utilizzando i dati di profilatura.

![Diagnostica di output di ottimizzazione PGO](media/pgofig7diagnostics.png "PGO output di diagnostica")

Se si apportano modifiche significative al codice durante lo sviluppo, potrebbe essere necessario riqualificare l'applicazione per ottenere le migliori ottimizzazioni. È consigliabile riqualificare l'applicazione quando l'output di compilazione mostra che meno dell'80% delle funzioni o delle istruzioni sono state ottimizzate utilizzando i dati di profiling.