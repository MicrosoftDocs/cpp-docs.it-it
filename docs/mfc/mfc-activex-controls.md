---
title: Controlli ActiveX MFC
ms.date: 11/19/2018
f1_keywords:
- MFC ActiveX Controls (MFC)
helpviewer_keywords:
- COleControl class [MFC], MFC ActiveX controls
- ActiveX controls [MFC], MFC
- containers [MFC], MFC ActiveX controls
- MFC ActiveX controls [MFC], serializing
- MFC ActiveX controls [MFC], containers
- serialization [MFC], MFC ActiveX controls
- dispatch maps [MFC], for MFC ActiveX controls
- MFC ActiveX controls [MFC], active/inactive state
- events [MFC], ActiveX controls
- MFC ActiveX controls [MFC]
ms.assetid: c911fb74-3afc-4bf3-a0f5-7922b14d9a1b
ms.openlocfilehash: a1c7bb070a75f4406556817163931f0707706c40
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508119"
---
# <a name="mfc-activex-controls"></a>Controlli ActiveX MFC

Un controllo ActiveX è un componente software riutilizzabile basato sul modello COM (Component Object Model) che supporta un'ampia gamma di funzionalità OLE e può essere personalizzato per soddisfare numerosi requisiti software.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni, vedere [controlli ActiveX](activex-controls.md).

I controlli ActiveX sono progettati per essere utilizzati sia nei normali contenitori di controlli ActiveX sia sulle pagine Web di Internet. È possibile creare controlli ActiveX tramite MFC, descritti qui o con il [Active Template Library (ATL)](../atl/active-template-library-atl-concepts.md).

Un controllo ActiveX può disegnarsi all'interno della propria finestra, rispondere ad eventi (quali i clic del mouse) ed essere gestito mediante un'interfaccia che include proprietà e metodi simili a quelli degli oggetti ActiveX.

Tali controlli possono essere sviluppati per diversi scopi, ad esempio l'accesso al database, il monitoraggio di dati o la creazione di grafici. Oltre alla portabilità, i controlli ActiveX supportano funzionalità che precedentemente non erano disponibili per questi tipi di controlli, come la compatibilità con i contenitori OLE esistenti e la possibilità di integrare i menu con i menu del contenitore OLE. Inoltre, un controllo ActiveX supporta completamente l'automazione, che consente al controllo di esporre proprietà di lettura e scrittura e un set di metodi che possono essere chiamati dall'utente del controllo.

È possibile creare controlli ActiveX senza finestra e controlli che creano solo una finestra quando diventano attivi. I controlli privi di finestra accelerano la visualizzazione dell'applicazione e consentono di ottenere controlli trasparenti e non rettangolari. È possibile inoltre caricare le proprietà del controllo ActiveX in modo asincrono.

Un controllo ActiveX viene implementato come server in-process (in genere un piccolo oggetto) che può essere utilizzato in qualsiasi contenitore OLE. Notare che la funzionalità completa di un controllo ActiveX è disponibile solo quando viene utilizzato all'interno di un contenitore OLE progettato per controlli ActiveX. Per un elenco di contenitori che supportano i controlli ActiveX, vedere [porta controlli ActiveX ad altre applicazioni](../mfc/containers-for-activex-controls.md) . Questo tipo di contenitore, d'ora in poi chiamato "contenitore di controlli", può eseguire un controllo ActiveX utilizzando le proprietà e i metodi del controllo e riceve le notifiche dal controllo ActiveX sotto forma di eventi. Nella seguente figura viene illustrata questa interazione.

![Interazione tra il controllo e il contenitore di controlli ActiveX](../mfc/media/vc37221.gif "Interazione tra il controllo e il contenitore di controlli ActiveX") <br/>
Interazione tra un contenitore di controlli ActiveX e un controllo ActiveX con finestra

Per alcune informazioni recenti sull'ottimizzazione dei controlli ActiveX, vedere [controlli ActiveX MFC: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md).

Per creare un controllo ActiveX MFC, vedere [creare un progetto di controllo ActiveX](../mfc/reference/mfc-activex-control-wizard.md).

Per altre informazioni, vedere:

- [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

- [Documenti attivi](../mfc/active-documents.md)

- [Informazioni sui controlli ActiveX](/windows/win32/com/activex-controls)

- [Aggiornamento di un controllo ActiveX esistente da usare su Internet](../mfc/upgrading-an-existing-activex-control.md)

##  <a name="_core_basic_components_of_an_activex_control"></a>Componenti di base di un controllo ActiveX

Un controllo ActiveX utilizza vari elementi a livello di codice per interagire in modo efficiente con un contenitore di controlli e con l'utente. Si tratta di una classe [COleControl](../mfc/reference/colecontrol-class.md), un set di funzioni di generazione di eventi e una mappa di invio.

Ogni oggetto controllo ActiveX sviluppato eredita un potete set di funzionalità dalla classe base MFC denominata `COleControl`. Queste funzionalità includono l'attivazione sul posto e la logica di automazione. `COleControl` può fornire all'oggetto controllo la stessa funzionalità dell'oggetto finestra di MFC, con in più la possibilità di generare eventi. `COleControl`può anche fornire [controlli privi di finestra](../mfc/providing-windowless-activation.md), che si basano sul contenitore per assistenza con alcune delle funzionalità fornite da una finestra (mouse capture, lo stato attivo della tastiera, lo scorrimento), ma offrono una visualizzazione molto più rapida.

Poiché la classe del controllo deriva da `COleControl`, eredita la funzionalità di invio o "generazione" di messaggi, eventi chiamati, al contenitore di controlli quando sono soddisfatte determinate condizioni. Questi eventi sono utilizzati per notificare al contenitore di controlli quando si verifica qualcosa di importante nel controllo. È possibile inviare informazioni aggiuntive su un evento al contenitore di controlli associando dei parametri all'evento. Per ulteriori informazioni sugli eventi del controllo ActiveX, vedere l' [articolo controlli ActiveX MFC: Eventi](../mfc/mfc-activex-controls-events.md).

L'elemento finale è una dispatch map, utilizzata per esporre un set di funzioni (metodi chiamati) e attributi (proprietà chiamate) all'utente del controllo. Le proprietà consentono al contenitore di controlli o all'utente di modificare il controllo in diversi modi. L'utente può modificare l'aspetto del controllo, modificarne alcuni valori oppure effettuare richieste di controllo, come accedere a un dato specifico di dati presente nel controllo. Questa interfaccia è determinata dallo sviluppatore del controllo e viene definita utilizzando **Visualizzazione classi**. Per ulteriori informazioni sui metodi e sulle proprietà del controllo ActiveX, vedere [gli articoli controlli ActiveX MFC: Metodi](../mfc/mfc-activex-controls-methods.md) e [proprietà](../mfc/mfc-activex-controls-properties.md).

##  <a name="_core_interaction_between_controls_with_windows_and_activex_control_containers"></a>Interazione tra i controlli con i contenitori di controlli Windows e ActiveX

Quando un controllo viene utilizzato in un contenitore di controlli, utilizza due meccanismi per comunicare: espone proprietà e metodi e genera eventi. Nella figura seguente viene illustrato come vengono implementati questi due meccanismi.

![Il controllo ActiveX comunica con il relativo contenitore](../mfc/media/vc37222.gif "Il controllo ActiveX comunica con il relativo contenitore") <br/>
Comunicazione tra un contenitore di controlli ActiveX e un controllo ActiveX

Nella figura precedente viene inoltre illustrato in che modo altre interfacce OLE (oltre all'automazione e agli eventi) vengono gestite dai controlli.

Tutte le comunicazioni di un controllo con il contenitore vengono eseguite da `COleControl`. Per gestire alcune delle richieste del contenitore, `COleControl` chiamerà le funzioni membro implementate nella classe del controllo. Tutti i metodi e alcune proprietà sono gestiti in questo modo. La classe del controllo può anche avviare la comunicazione con il contenitore chiamando le funzioni membro di `COleControl`. Gli eventi vengono generati in questo modo.

##  <a name="_core_active_and_inactive_states_of_an_activex_control"></a>Stati attivi e inattivi di un controllo ActiveX

Un controllo presenta due stati di base: attivo e inattivo. Tradizionalmente, questi stati si distinguevano a seconda che il controllo avesse o meno una finestra. Un controllo attivo aveva una finestra; un controllo inattivo invece no. Con l'introduzione dell'attivazione senza finestra, questa differenza non è più universale, ma è ancora valida per molti controlli.

Quando un [controllo senza finestra](../mfc/providing-windowless-activation.md) diventa attivo, richiama l'acquisizione del mouse, lo stato attivo della tastiera, lo scorrimento e altri servizi della finestra dal relativo contenitore. È anche possibile [fornire l'interazione del mouse ai controlli inattivi](../mfc/providing-mouse-interaction-while-inactive.md), nonché creare controlli che [attendono fino a quando non vengono attivati per creare una finestra](../mfc/turning-off-the-activate-when-visible-option.md).

Quando un controllo con finestra diventa attivo, diventa in grado di interagire pienamente con il contenitore, l'utente e Windows. Nella figura seguente vengono illustrati i canali di comunicazione tra il controllo ActiveX, il contenitore e il sistema operativo.

![Elaborazione di messaggi nel controllo ActiveX con finestra attiva](../mfc/media/vc37223.gif "Elaborazione di messaggi nel controllo ActiveX con finestra attiva") <br/>
Elaborazione dei messaggi Windows in un controllo ActiveX con finestra (se attivo)

##  <a name="_core_serializing_activex_elements"></a>Serializzazione

La possibilità di serializzare i dati, talvolta definita come persistenza, consente al controllo di scrivere il valore delle proprietà in un'archiviazione permanente. I controlli possono quindi essere ricreati leggendo lo stato dell'oggetto dall'archiviazione.

Notare che non spetta al controllo ottenere l'accesso al supporto di archiviazione. È il contenitore che deve fornire al controllo un supporto di archiviazione da utilizzare al momento giusto. Per ulteriori informazioni sulla serializzazione, vedere l' [articolo controlli ActiveX MFC: Serializzazione](../mfc/mfc-activex-controls-serializing.md). Per informazioni sull'ottimizzazione della serializzazione, vedere [ottimizzazione della persistenza e](../mfc/optimizing-persistence-and-initialization.md) dell'inizializzazione nei controlli ActiveX: Ottimizzazione.

##  <a name="_core_installing_activex_control_classes_and_tools"></a>Installazione di strumenti e classi di controlli ActiveX

Quando si installa Visual C++, le classi di controlli ActiveX MFC e le DLL runtime del controllo ActiveX di debug vengono installate automaticamente se i controlli ActiveX sono selezionati nel programma di installazione (sono selezionati per impostazione predefinita).

Per impostazione predefinita, le classi e gli strumenti del controllo ActiveX vengono installati nelle sottodirectory seguenti in \Programmi\microsoft Visual Studio .NET:

- **\Common7\Tools**

   Contiene i file di Test Container (TstCon32.exe nonché i file della Guida).

- **\Vc7\atlmfc\include**

   Contiene i file di inclusione necessari per sviluppare i controlli ActiveX con MFC

- **\Vc7\atlmfc\src\mfc**

   Contiene il codice sorgente per le classi specifiche del controllo ActiveX in MFC

- **\Vc7\atlmfc\lib**

   Contiene le librerie necessarie per sviluppare controlli ActiveX con MFC

Sono inoltre disponibili degli esempi di controlli ActiveX MFC. Per ulteriori informazioni su questi esempi, vedere [esempi di controlli: Controlli ActiveX basati su MFC](../overview/visual-cpp-samples.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
