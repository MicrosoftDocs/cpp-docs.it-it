---
title: Controlli ActiveX MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- MFC ActiveX Controls (MFC)
dev_langs:
- C++
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c06b66be2dd9b982fc925aa69483a58fcc4799dc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-activex-controls"></a>Controlli ActiveX MFC
Un controllo ActiveX è un componente software riutilizzabile basato sul modello COM (Component Object) che supporta un'ampia gamma di funzionalità OLE e possono essere personalizzati per soddisfare numerosi requisiti software. I controlli ActiveX sono progettati per essere utilizzati sia nei normali contenitori di controlli ActiveX sia sulle pagine Web di Internet. È possibile creare controlli ActiveX con MFC, come descritto di seguito, o con il [Active Template Library (ATL)](../atl/active-template-library-atl-concepts.md).  
  
 Un controllo ActiveX può disegnarsi all'interno della propria finestra, rispondere ad eventi (quali i clic del mouse) ed essere gestito mediante un'interfaccia che include proprietà e metodi simili a quelli degli oggetti ActiveX.  
  
 Tali controlli possono essere sviluppati per diversi scopi, ad esempio l'accesso al database, il monitoraggio di dati o la creazione di grafici. Oltre alla portabilità, i controlli ActiveX supportano funzionalità che precedentemente non erano disponibili per questi tipi di controlli, come la compatibilità con i contenitori OLE esistenti e la possibilità di integrare i menu con i menu del contenitore OLE. Inoltre, un controllo ActiveX supporta completamente l'automazione, che consente al controllo di esporre proprietà di lettura e scrittura e un set di metodi che possono essere chiamati dall'utente del controllo.  
  
 È possibile creare controlli ActiveX senza finestra e controlli che creano solo una finestra quando diventano attivi. I controlli privi di finestra accelerano la visualizzazione dell'applicazione e consentono di ottenere controlli trasparenti e non rettangolari. È possibile inoltre caricare le proprietà del controllo ActiveX in modo asincrono.  
  
 Un controllo ActiveX viene implementato come server in-process (in genere un piccolo oggetto) che può essere utilizzato in qualsiasi contenitore OLE. Notare che la funzionalità completa di un controllo ActiveX è disponibile solo quando viene utilizzato all'interno di un contenitore OLE progettato per controlli ActiveX. Vedere [trasferire i controlli ActiveX in altre applicazioni](../mfc/containers-for-activex-controls.md) per un elenco di contenitori che supportano i controlli ActiveX. Questo tipo di contenitore, d'ora in poi chiamato "contenitore di controlli", può eseguire un controllo ActiveX utilizzando le proprietà e i metodi del controllo e riceve le notifiche dal controllo ActiveX sotto forma di eventi. Nella seguente figura viene illustrata questa interazione.  
  
 ![Interazione tra il contenitore di controlli ActiveX e controllo](../mfc/media/vc37221.gif "vc37221")  
Interazione tra un contenitore di controlli ActiveX e un controllo ActiveX con finestra  
  
 Per alcune informazioni recenti sull'ottimizzazione dei controlli ActiveX, vedere [controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md).  
  
 Per creare un controllo ActiveX MFC, vedere [creare un progetto controllo ActiveX](../mfc/reference/mfc-activex-control-wizard.md).  
  
 Per altre informazioni, vedere:  
  
-   [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)  
  
-   [Documenti attivi](../mfc/active-documents.md)  
  
-   [Controlli ActiveX](http://msdn.microsoft.com/library/windows/desktop/ms693753)  
  
-   [Aggiornamento di un controllo ActiveX esistente da utilizzare in Internet](../mfc/upgrading-an-existing-activex-control.md)  
  
##  <a name="_core_basic_components_of_an_activex_control"></a>Componenti di base di un controllo ActiveX  
 Un controllo ActiveX utilizza vari elementi a livello di codice per interagire in modo efficiente con un contenitore di controlli e con l'utente. Si tratta di classe [COleControl](../mfc/reference/colecontrol-class.md), un set di funzioni che generano eventi e un recapito mappa.  
  
 Ogni oggetto controllo ActiveX sviluppato eredita un potete set di funzionalità dalla classe base MFC denominata `COleControl`. Queste funzionalità includono l'attivazione sul posto e la logica di automazione. `COleControl` può fornire all'oggetto controllo la stessa funzionalità dell'oggetto finestra di MFC, con in più la possibilità di generare eventi. `COleControl`può anche fornire [controlli privi di finestra](../mfc/providing-windowless-activation.md), che utilizzano il relativo contenitore per informazioni su alcune delle funzionalità di una finestra fornisce (il mouse capture, stato attivo della tastiera, scorrimento), ma offrono una visualizzazione molto più veloce.  
  
 Poiché la classe del controllo deriva da `COleControl`, eredita la funzionalità di invio o "generazione" di messaggi, eventi chiamati, al contenitore di controlli quando sono soddisfatte determinate condizioni. Questi eventi sono utilizzati per notificare al contenitore di controlli quando si verifica qualcosa di importante nel controllo. È possibile inviare informazioni aggiuntive su un evento al contenitore di controlli associando dei parametri all'evento. Per ulteriori informazioni sugli eventi di controllo ActiveX, vedere l'articolo [controlli ActiveX MFC: eventi](../mfc/mfc-activex-controls-events.md).  
  
 L'elemento finale è una dispatch map, utilizzata per esporre un set di funzioni (metodi chiamati) e attributi (proprietà chiamate) all'utente del controllo. Le proprietà consentono al contenitore di controlli o all'utente di modificare il controllo in diversi modi. L'utente può modificare l'aspetto del controllo, modificarne alcuni valori oppure effettuare richieste di controllo, come accedere a un dato specifico di dati presente nel controllo. Questa interfaccia è determinata dallo sviluppatore del controllo e viene definita mediante **Visualizzazione classi**. Per ulteriori informazioni sulle proprietà e metodi del controllo ActiveX, vedere gli articoli [controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md) e [proprietà](../mfc/mfc-activex-controls-properties.md).  
  
##  <a name="_core_interaction_between_controls_with_windows_and_activex_control_containers"></a>Interazione tra i controlli con Windows e i contenitori di controlli ActiveX  
 Quando un controllo viene utilizzato in un contenitore di controlli, utilizza due meccanismi per comunicare: espone proprietà e metodi e genera eventi. Nella figura seguente viene illustrato come vengono implementati questi due meccanismi.  
  
 ![Controllo ActiveX comunica con il relativo contenitore](../mfc/media/vc37222.gif "vc37222")  
Comunicazione tra un contenitore di controlli ActiveX e un controllo ActiveX  
  
 Nella figura precedente viene inoltre illustrato in che modo altre interfacce OLE (oltre all'automazione e agli eventi) vengono gestite dai controlli.  
  
 Tutte le comunicazioni di un controllo con il contenitore vengono eseguite da `COleControl`. Per gestire alcune delle richieste del contenitore, **COleControl** chiamerà membro funzioni implementate nella classe del controllo. Tutti i metodi e alcune proprietà sono gestiti in questo modo. La classe del controllo può anche avviare la comunicazione con il contenitore chiamando le funzioni membro di `COleControl`. Gli eventi vengono generati in questo modo.  
  
##  <a name="_core_active_and_inactive_states_of_an_activex_control"></a>Stati attivi e inattivi di un controllo ActiveX  
 Un controllo presenta due stati di base: attivo e inattivo. Tradizionalmente, questi stati si distinguevano a seconda che il controllo avesse o meno una finestra. Un controllo attivo aveva una finestra; un controllo inattivo invece no. Con l'introduzione dell'attivazione senza finestra, questa differenza non è più universale, ma è ancora valida per molti controlli.  
  
 Quando un [controllo senza finestra](../mfc/providing-windowless-activation.md) si attiva, viene richiamato il mouse capture, stato attivo della tastiera, scorrimento e altri servizi della finestra dal contenitore. È anche possibile [garantiscono l'interazione del mouse per i controlli inattivi](../mfc/providing-mouse-interaction-while-inactive.md), nonché creare controlli che [attendere fino a quando non è attivata per creare una finestra](../mfc/turning-off-the-activate-when-visible-option.md).  
  
 Quando un controllo con finestra diventa attivo, diventa in grado di interagire pienamente con il contenitore, l'utente e Windows. Nella figura seguente vengono illustrati i canali di comunicazione tra il controllo ActiveX, il contenitore e il sistema operativo.  
  
 ![Elaborazione in un controllo ActiveX con finestra attivo messaggio](../mfc/media/vc37223.gif "vc37223")  
Elaborazione dei messaggi Windows in un controllo ActiveX con finestra (se attivo)  
  
##  <a name="_core_serializing_activex_elements"></a>Serializzazione  
 La possibilità di serializzare i dati, talvolta definita come persistenza, consente al controllo di scrivere il valore delle proprietà in un'archiviazione permanente. I controlli possono quindi essere ricreati leggendo lo stato dell'oggetto dall'archiviazione.  
  
 Notare che non spetta al controllo ottenere l'accesso al supporto di archiviazione. È il contenitore che deve fornire al controllo un supporto di archiviazione da utilizzare al momento giusto. Per ulteriori informazioni sulla serializzazione, vedere l'articolo [controlli ActiveX MFC: serializzazione](../mfc/mfc-activex-controls-serializing.md). Per informazioni sull'ottimizzazione della serializzazione, vedere [ottimizzazione della persistenza e inizializzazione](../mfc/optimizing-persistence-and-initialization.md) in controlli ActiveX: ottimizzazione.  
  
##  <a name="_core_installing_activex_control_classes_and_tools"></a>Installare gli strumenti e le classi di controlli ActiveX  
 Quando si installa Visual C++, le classi di controlli ActiveX MFC e le DLL runtime del controllo ActiveX di debug vengono installate automaticamente se i controlli ActiveX sono selezionati nel programma di installazione (sono selezionati per impostazione predefinita).  
  
 Per impostazione predefinita, le classi di controlli ActiveX e gli strumenti vengono installati nelle sottodirectory seguenti in \Programmi\Microsoft Visual Studio .NET:  
  
-   **\Common7\Tools.**  
  
     Contiene i file di Test Container (TstCon32.exe nonché i file della Guida).  
  
-   **\Vc7\atlmfc\include**  
  
     Contiene i file di inclusione necessari per sviluppare i controlli ActiveX con MFC  
  
-   **\Vc7\atlmfc\src\mfc**  
  
     Contiene il codice sorgente per le classi specifiche del controllo ActiveX in MFC  
  
-   **\Vc7\atlmfc\lib**  
  
     Contiene le librerie necessarie per sviluppare controlli ActiveX con MFC  
  
 Sono inoltre disponibili degli esempi di controlli ActiveX MFC. Per ulteriori informazioni su questi esempi, vedere [esempi di controlli: controlli ActiveX](../visual-cpp-samples.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
