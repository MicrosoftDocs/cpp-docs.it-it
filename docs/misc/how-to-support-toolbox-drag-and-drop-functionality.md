---
title: "Procedura: Supportare la funzionalit&#224; di trascinamento della selezione della casella degli strumenti | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "trascinamento della selezione, supporto nella casella degli strumenti"
  - "Casella degli strumenti [Visual Studio SDK], client"
  - "Casella degli strumenti [Visual Studio SDK], trascinamento della selezione"
ms.assetid: 2f73a03c-1eb1-4b88-9c1b-d63ba0e2ac90
caps.latest.revision: 18
caps.handback.revision: 18
manager: "douge"
---
# Procedura: Supportare la funzionalit&#224; di trascinamento della selezione della casella degli strumenti
> [!NOTE]
>  Il modo consigliato per aggiungere controlli personalizzati alla casella degli strumenti consiste nell'usare i modelli di controllo della casella degli strumenti forniti con Visual Studio 10 SDK, che include il supporto per il trascinamento della selezione. Questo argomento viene mantenuto solo per scopi di compatibilità con le versioni precedenti e per l'uso di controlli esistenti.  
>   
>  Per altre informazioni sulla creazione di controlli della casella degli strumenti usando i modelli, vedere [Procedura: Creare un controllo della casella degli strumenti che usa Windows Form](../misc/how-to-create-a-toolbox-control-that-uses-windows-forms.md) e [Creazione di un controllo casella degli strumenti WPF](../Topic/Creating%20a%20WPF%20Toolbox%20Control.md).  
  
 I pacchetti VSPackage devono implementare il supporto per il trascinamento della selezione se useranno controlli della **casella degli strumenti** in visualizzazioni documento, come editor o finestre di progettazione.  
  
 Per impostazione predefinita, tutti gli oggetti [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] derivati da <xref:System.Windows.Forms.Control?displayProperty=fullName> forniscono in modo automatico e trasparente il supporto per l'utilizzo di controlli della **casella degli strumenti** e le routine descritte nelle sezioni seguenti non sono necessarie. È possibile estendere la funzionalità di base creando una finestra di progettazione.  
  
 Per altre informazioni, vedere [Panoramica sui Windows Form](../Topic/Windows%20Forms%20Overview.md) e [Extending Design\-Time Support](../Topic/Extending%20Design-Time%20Support.md).  
  
### Per implementare la funzionalità di trascinamento della selezione di base  
  
1.  Per fornire il supporto per il trascinamento della selezione, implementare <xref:Microsoft.VisualStudio.OLE.Interop.IDropTarget> in un oggetto visualizzazione. In questo modo, si fornirà alla visualizzazione la funzionalità di trascinamento della selezione OLE e la serializzazione del controllo.  
  
     Per altre informazioni sull'implementazione della funzionalità di trascinamento della selezione, vedere [Trascinamento \(OLE\)](../mfc/drag-and-drop-ole.md).  
  
     Gli elementi rilasciati possono essere elementi negli Appunti o controlli rilasciati in una finestra di progettazione. Per informazioni sui formati degli Appunti standard supportati dalla **casella degli strumenti** di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], vedere [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md).  
  
2.  Fornire un'implementazione di base dell'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxUser> in una visualizzazione documento.  
  
     Quando un utente prova a trascinare un controllo della casella degli strumenti in una visualizzazione, la shell di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] esegue una query sul pacchetto VSPackage della visualizzazione per verificare se implementa l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxUser>.  
  
    1.  Implementare <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxUser.IsSupported%2A> per restituire <xref:Microsoft.VisualStudio.VSConstants.S_OK> per i formati della **casella degli strumenti** supportati dalla destinazione di rilascio. L'esempio seguente verifica se l'oggetto dati è in un formato degli Appunti personalizzato \(`CF_CUSTOM_FORMAT`\) e se è un controllo ActiveX.  
  
        ```cpp#  
        STDMETHODIMP CustTbxUser::IsSupported(IDataObject* pDO) { HRESULT hr; STGMEDIUM stm; if (!pDO) return E_POINTER; // Determine if the data object is in the Custom clip board format // fetc is the dialog editor toolbox item template. FORMATETC fetc = { m_CF_CUSTOM_FORMAT, //Value set with RegisterClipboardFormat NULL, DVASPECT_CONTENT, // DVASCPECT_ICON might be better -1, TYMED_HGLOBAL }; if (FAILED(hr = pDO->GetData(&fetc, &stm))) { // Determine if the object is in the class-id clipboard format ... this // would be the case if the control is an activeX toolbox item. FORMATETC xfetc = { m_CF_CLSID, NULL, DVASPECT_CONTENT, // DVASCPECT_ICON might be better -1, TYMED_HGLOBAL }; if (SUCCEEDED(hr = pDO->GetData(&xfetc,&stm))) { USES_CONVERSION; GUID guid; LPSTR pData = (LPSTR)GlobalLock(stm.hGlobal); if (pData) { // Convert from the string format to a binary GUID. if (CLSIDFromString(A2W(pData), &guid) != S_OK) return E_FAIL; // HTML data objects could have CLSID format ... so any data object could // be returned as a NULL guid ... fail on null guid, obviously they are // not active X controls. if (guid == GUID_NULL) return E_FAIL; } } } return hr; }  
        ```  
  
         L'IDE verifica queste informazioni quando una finestra della visualizzazione viene caricata per la prima volta e per ogni attivazione di una finestra della visualizzazione in seguito alla reimpostazione della **casella degli strumenti** da parte di un utente tramite la finestra di dialogo **Personalizza casella degli strumenti** dell'IDE. In genere, la **casella degli strumenti** non visualizza elementinon supportati.  
  
         Gli utenti possono impostare un'opzione per visualizzare tutte le pagine della casella degli strumenti in qualsiasi momento. In questo caso, l'ambiente non esegue una query sull'editor per <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxUser.IsSupported%2A>.  
  
    2.  Dopo che un'implementazione di <xref:Microsoft.VisualStudio.OLE.Interop.IDropTarget>, come quella descritta sopra, gestisce correttamente un componente rilasciato, l'oggetto visualizzazione deve notificare questa operazione all'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] chiamando <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2.DataUsed%2A>  
  
     Se necessario, un pacchetto VSPackage può estendere il proprio supporto per il trascinamento della selezione estendendo l'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxUser>.  
  
3.  Un'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxUser> può supportare il trascinamento di elementi della **casella degli strumenti** in una finestra tramite selezione anziché un'azione del mouse, ovvero il trascinamento quando un utente fa doppio clic su un elemento della **casella degli strumenti** o fa un solo clic e quindi preme INVIO. Per eseguire questa operazione:  
  
    1.  Implementare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxUser.ItemPicked%2A>.  
  
         Questo metodo, chiamato dall'IDE, viene selezionato tramite un clic o la pressione di INVIO.  
  
         Il metodo deve inserire l'elemento della **casella degli strumenti** nella finestra di destinazione.  
  
    2.  Se non si vuole supportare l'implementazione tramite selezione, il metodo deve restituire <xref:Microsoft.VisualStudio.VSConstants.S_FALSE>.  
  
         Nell'esempio seguente l'implementazione del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxUser.ItemPicked%2A> verifica se l'oggetto selezionato è supportato e in questo caso lo deserializza nel codice:  
  
        ```cpp#  
        STDMETHODIMP CustTbxUser::ItemPicked(IDataObject* pDataObject) { if (!pDataObject) return E_POINTER; UINT nIDTool; if (IsSupported(pDataObject) == S_OK) { SetToolCursor(); m_pDataObject = pDataObject; nIDTool = DeserializeObject(); // Get the focus back m_pResObject->m_spWndFrame->Show(); return S_OK; } }  
        ```  
  
4.  Eseguire i passaggi seguenti per garantire che venga mantenuto lo stato attivo appropriato per l'applicazione:  
  
    1.  Se la finestra dell'editor implementa due riquadri diversi e non due visualizzazioni diverse, chiamare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2.UpdateToolboxUI%2A> quando si passa dall'attivazione di un riquadro a quella dell'altro nella finestra dell'editor. Ricordare che si è gli unici a poter individuare le eventuali modifiche di attivazione all'interno della finestra.  
  
    2.  Per attivare correttamente la finestra e fare in modo che il routing dei comandi venga aggiornato nel modo appropriato, è necessario chiamare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsWindowFrame.Show%2A> nel componente. Questa azione deve essere eseguita quando si imposta lo stato attivo sulla finestra di un componente, ad esempio un editor, creata o modificata da un'operazione di trascinamento della selezione che riguarda la casella degli strumenti.  
  
 Un pacchetto VSPackage potrebbe dover intervenire in un'operazione di trascinamento e modificare l'elemento rilasciato tramite l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxActiveUserHook>.  
  
 Ad esempio, invece di aggiungere in modo esplicito un nuovo controllo della **casella degli strumenti** alla **casella degli strumenti**, un pacchetto VSPackage potrebbe intercettare una **casella degli strumenti** standard durante il rilascio e sostituirla con un'implementazione personalizzata.  
  
### Per modificare dinamicamente i controlli della casella degli strumenti  
  
1.  Implementare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxActiveUserHook>.  
  
     Ogni volta che viene selezionato o rilasciato un elemento della **casella degli strumenti**, la **casella degli strumenti** esegue una query sulla destinazione di rilascio per verificare se supporta l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxActiveUserHook> e in questo caso chiama il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxActiveUserHook.InterceptDataObject%2A>.  
  
2.  Il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxActiveUserHook.InterceptDataObject%2A> deve restituire un nuovo oggetto <xref:Microsoft.VisualStudio.OLE.Interop.IDataObject> da usare invece dell'oggetto <xref:Microsoft.VisualStudio.OLE.Interop.IDataObject> originale.  
  
     Se la destinazione di rilascio non deve eseguire l'override dell'oggetto dati, deve restituirne l'input.  
  
 Un pacchetto VSPackage può permettere agli utenti di spostarsi all'interno del contenuto degli Appunti premendo CTRL\+MAIUSC\+V.  
  
### Per supportare una sequenza Appunti  
  
1.  Implementare un gestore per il comando `CMDIDPasteNextTBXCBItem` usando:  
  
    -   <xref:Microsoft.VisualStudio.OLE.Interop.IOleCommandTarget> per pacchetti VSPackage basati su assembly di interoperabilità.  
  
    -   <xref:Microsoft.VisualStudio.Shell.OleMenuCommandService> per pacchetti VSPackage basati sul framework di pacchetto gestito. Interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxClipboardCycler>.  
  
2.  Nel gestore del comando implementare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxClipboardCycler.AreDataObjectsAvailable%2A> per determinare se ci sono oggetti degli Appunti da scorrere.  
  
    1.  Se gli Appunti della casella degli strumenti non contengono elementi, l'ambiente controlla l'eventuale presenza di elementi negli Appunti di sistema.  
  
    2.  Se gli Appunti di sistema contengono elementi e gli Appunti della casella degli strumenti non ne contengono, nella sequenza Appunti vengono immessi gli elementi di sistema.  
  
    3.  Per selezionare l'elemento successivo nell'elenco, l'implementazione chiama il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxClipboardCycler.GetAndSelectNextDataObject%2A>.  
  
    4.  Per tornare all'inizio del ciclo degli Appunti, chiamare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxClipboardCycler.BeginCycle%2A>.  
  
## Vedere anche  
 [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md)   
 [Procedura: Fornire elementi della casella degli strumenti personalizzata usando gli assembly di interoperabilità](../misc/how-to-provide-custom-toolbox-items-by-using-interop-assemblies.md)   
 [Sviluppo avanzato di controlli della casella degli strumenti](../misc/advanced-toolbox-control-development.md)   
 [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md)   
 [Gestione della casella degli strumenti](../misc/managing-the-toolbox.md)