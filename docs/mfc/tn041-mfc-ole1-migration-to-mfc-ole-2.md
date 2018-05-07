---
title: 'TN041: Migrazione di MFC OLE1 a MFC-OLE 2 | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.ole
dev_langs:
- C++
helpviewer_keywords:
- OLE1 [MFC]
- migrating OLE1 to OLE2
- migration [MFC], OLE1 to OLE2
- OLE2 [MFC]
- porting OLE1 to OLE2
- converting OLE1 to OLE2
- upgrading Visual C++ applications [MFC], OLE1 to OLE2
- TN041
ms.assetid: 67f55552-4b04-4ddf-af0b-4d9eaf5da957
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 78faa19263ff0ea03aac891c9be3a6114f7f9a48
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tn041-mfcole1-migration-to-mfcole-2"></a>TN041: migrazione da MFC/OLE1 a MFC/OLE 2
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
## <a name="general-issues-relating-to-migration"></a>Problemi generali relativi alla migrazione  
 Uno degli obiettivi di progettazione per le classi OLE 2 in MFC 2.5 (e versioni successive) era di mantenere la maggior parte della stessa architettura di mettere in atto in MFC 2.0 per il supporto OLE 1.0. Di conseguenza, molte delle stesse classi OLE MFC 2.0 ancora presenti in questa versione di MFC (`COleDocument`, `COleServerDoc`, `COleClientItem`, `COleServerItem`). Inoltre, molte delle API di queste classi sono esattamente uguali. Tuttavia, OLE 2 è notevolmente diverso da 1.0 OLE è probabile che alcune informazioni sono stati modificati. Se si ha familiarità con il supporto di MFC 2.0 OLE1, sembrerà a casa con 2.0 il supporto di MFC.  
  
 Se si richiede un'applicazione MFC/OLE1 esistente e aggiungere le funzionalità di OLE 2, è consigliabile leggere innanzitutto questa nota. Questa nota vengono illustrate alcune considerazioni generali si possono verificarsi durante il porting di funzionalità di OLE1 a MFC/OLE 2 e quindi vengono illustrati i problemi sono stati rilevati durante il porting di due applicazioni incluse in MFC 2.0: esempi OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md).  
  
## <a name="mfc-documentview-architecture-is-important"></a>È importante architettura documento/visualizzazione MFC  
 Se l'applicazione non utilizza l'architettura documento/visualizzazione MFC e si desidera aggiungere il supporto OLE 2 per l'applicazione, è il momento in cui spostarsi documento/visualizzazione. Molti dei vantaggi di OLE 2 classi MFC vengono rappresentati solo una volta che l'applicazione utilizza l'architettura predefinito e i componenti di MFC.  
  
 Implementazione di un server o un contenitore senza utilizzare l'architettura MFC è possibile, ma non consigliata.  
  
## <a name="use-mfc-implementation-instead-of-your-own"></a>Utilizzare l'implementazione MFC anziché personalizzati  
 Classi MFC "implementazione predefinito", ad esempio `CToolBar`, `CStatusBar`, e `CScrollView` incorporato codice case speciale per il supporto OLE 2. In tal caso, se è possibile utilizzare queste classi nell'applicazione è possibile sfruttare il lavoro in tali per renderli OLE conoscenza. Nuovamente, è possibile "esegue il rollup personali" classi qui per effettuare queste operazioni, ma non è consigliabile. Se è necessario implementare una funzionalità simile, il codice sorgente MFC è un riferimento eccellente per la gestione di alcuni punti più preciso di OLE (in particolare per quanto riguarda l'attivazione sul posto).  
  
## <a name="examine-the-mfc-sample-code"></a>Esaminare il codice di esempio MFC  
 Esistono diversi esempi MFC che includono funzionalità OLE. Ognuna di queste applicazioni implementa OLE da un angolo diverso:  
  
- [HIERSVR](../visual-cpp-samples.md) principalmente progettata per essere utilizzata come un'applicazione server. È stato incluso in MFC 2.0 come applicazione MFC/OLE1 ed è stata trasferita a MFC/OLE 2 e quindi esteso in modo che implementi molte funzionalità OLE è disponibile in OLE 2.  
  
- [OCLIENT](../visual-cpp-samples.md) si tratta di un'applicazione contenitore autonomo, destinata a illustrare molte delle funzionalità di OLE da un punto di vista di contenitore. Troppo è stato trasferito da MFC 2.0 e quindi esteso per supportare molte delle funzionalità più avanzate OLE, ad esempio i formati degli Appunti personalizzati e i collegamenti agli elementi incorporati.  
  
- [DRAWCLI](../visual-cpp-samples.md) questa applicazione implementa il supporto di contenitore OLE molto simile OCLIENT, ad eccezione del fatto che vengono eseguite nell'ambito di un programma di disegno esistente orientata agli oggetti. Illustra come implementare il supporto di contenitore OLE e integrarlo nell'applicazione esistente.  
  
- [SUPERPAD](../visual-cpp-samples.md) questa applicazione, nonché da un'applicazione autonoma fine, è anche un server OLE. Implementa il supporto di server è ancora pronti scarna. Di particolare interesse è come Usa servizi Appunti OLE per copiare i dati negli Appunti, ma usa le funzionalità incorporate nel controllo di Windows "Modifica" per implementare la funzionalità incolla negli Appunti. Visualizza una combinazione di utilizzo delle API di Windows tradizionali, nonché l'integrazione con le nuove API OLE interessano.  
  
 Per ulteriori informazioni sulle applicazioni di esempio, vedere la "MFC esempio Guida".  
  
## <a name="case-study-oclient-from-mfc-20"></a>Case Study: OCLIENT da MFC 2.0  
 Come illustrato in precedenza, [OCLIENT](../visual-cpp-samples.md) è stato incluso in MFC 2.0 e implementato OLE con MFC/OLE1. I passaggi da cui l'applicazione è stato inizialmente convertita per utilizzare le classi MFC/OLE 2 sono descritti di seguito. Dopo che la porta iniziale è stata completata per illustrare meglio le classi MFC/OLE, sono state aggiunte numerose funzionalità. Queste funzionalità non trattate in questo contesto. vedere l'esempio per ulteriori informazioni su queste funzionalità avanzate.  
  
> [!NOTE]
>  Gli errori del compilatore e procedura dettagliata è stato creato con Visual C++ 2.0. Percorsi e i messaggi di errore sia stato modificato con Visual C++ 4.0, ma le informazioni concettuali rimangono valide.  
  
## <a name="getting-it-up-and-running"></a>Renderla operativa e in esecuzione  
 L'approccio adottato per trasferire l'esempio OCLIENT a MFC/OLE consiste nell'iniziare la creazione e correzione degli errori del compilatore evidente che verranno generato. Se si accetta l'esempio OCLIENT da MFC 2.0 e compilarlo in questa versione di MFC, sono disponibili che non vi siano che numero di errori da risolvere. Nell'ordine in cui si sono verificati gli errori sono descritti di seguito.  
  
## <a name="compile-and-fix-errors"></a>Compilazione e correzione di errori  
  
```  
\oclient\mainview.cpp(104) : error C2660: 'Draw' : function does not take 4 parameters  
```  
  
 La prima delle problematiche relative all'errore `COleClientItem::Draw`. In MFC/OLE1 impiegato più parametri richiede la versione MFC/OLE. I parametri aggiuntivi sono stati spesso non necessari e in genere NULL (come in questo esempio). Questa versione di MFC è possibile determinare automaticamente i valori per il lpWBounds quando CDC che durante il disegno a un contesto di dispositivo metafile. Inoltre, il parametro pFormatDC è più necessario perché il framework creerà uno dal "attributo controller di dominio" del pDC passato. Per risolvere questo problema, è sufficiente rimuovere i due in modo molto NULL parametri per la chiamata di disegno.  
  
```  
\oclient\mainview.cpp(273) : error C2065: 'OLE_MAXNAMESIZE' : undeclared identifier  
\oclient\mainview.cpp(273) : error C2057: expected constant expression  
\oclient\mainview.cpp(280) : error C2664: 'CreateLinkFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '  
\oclient\mainview.cpp(286) : error C2664: 'CreateFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '  
\oclient\mainview.cpp(288) : error C2664: 'CreateStaticFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '  
```  
  
 Gli errori di sopra del risultato dal fatto che tutte le **COleClientItem::CreateXXXX** funzioni MFC/OLE1 necessari per rappresentare l'elemento di essere passato un nome univoco. Questo è un requisito di OLE API sottostante. Questa operazione è necessaria in MFC/OLE 2 OLE 2 Usa DDE come meccanismo di comunicazione sottostante (il nome è stato utilizzato nelle conversazioni DDE). Per risolvere questo problema, è possibile rimuovere il **CreateNewName** funzione nonché tutti i riferimenti. È facile scoprire cosa è previsto in questa versione ogni funzione MFC/OLE semplicemente, posizionando il cursore alla chiamata e premere F1.  
  
 Un'altra area che è una differenza significativa è la gestione degli Appunti OLE 2. È usato da OLE1, negli Appunti di Windows che API interagiscono con gli Appunti. Con OLE 2 questa operazione viene eseguita con un meccanismo diverso. Le API da MFC/OLE1 presuppone che gli Appunti era aperto prima di copiare un `COleClientItem` oggetto negli Appunti. Questo non è più necessario e causerà tutte le operazioni relative agli Appunti MFC/OLE esito negativo. Durante la modifica del codice per rimuovere le dipendenze in **CreateNewName**, è necessario rimuovere anche il codice che apre e chiude negli Appunti di Windows.  
  
```  
\oclient\mainview.cpp(332) : error C2065: 'AfxOleInsertDialog' : undeclared identifier  
\oclient\mainview.cpp(332) : error C2064: term does not evaluate to a function  
\oclient\mainview.cpp(344) : error C2057: expected constant expression  
\oclient\mainview.cpp(347) : error C2039: 'CreateNewObject' : is not a member of 'CRectItem'  
```  
  
 Questi errori risultanti dal **CMainView::OnInsertObject** gestore. La gestione del comando "Insert New Object" è un'altra area in cui cose siano cambiate abbastanza. In questo caso, è più semplice unire semplicemente l'implementazione originale con quello fornito dalla creazione guidata applicazioni per una nuova applicazione contenitore OLE. In effetti, questa è una tecnica che è possibile applicare al porting di altre applicazioni. In MFC/OLE1, è stata visualizzata la finestra di dialogo "Inserisci oggetto" chiamando **AfxOleInsertDialog** (funzione). In questa versione si costruisce un **COleInsertObject** oggetto finestra di dialogo e chiamare `DoModal`. Inoltre, in cui vengono creati nuovi elementi OLE con un **CLSID** anziché una stringa classname. Il risultato finale dovrebbe essere simile al seguente  
  
```  
COleInsertDialog dlg;  
if (dlg.DoModal() != IDOK)  
    return; 
 
BeginWaitCursor();

 
CRectItem* pItem = NULL;  
TRY  
{ *// First create the C++ object  
    pItem = GetDocument()->CreateItem();
ASSERT_VALID(pItem);

 *// Initialize the item from the dialog data.  
    if (!dlg.CreateItem(pItem))  
    AfxThrowMemoryException();
*// any exception will do  
    ASSERT_VALID(pItem);

 *// run the object if appropriate  
    if (dlg.GetSelectionType() == 
    COleInsertDialog::createNewItem) 
    pItem->DoVerb(OLEIVERB_SHOW,
    this);

 *// update right away  
    pItem->UpdateLink();
pItem->UpdateItemRectFromServer();

 *// set selection to newly inserted item  
    SetSelection(pItem);

 pItem->Invalidate();

}  
CATCH (CException,
    e)  
{ *// clean up item  
    if (pItem != NULL)  
    GetDocument()->DeleteItem(pItem);

 
    AfxMessageBox(IDP_FAILED_TO_CREATE);

} 
END_CATCH  
 
EndWaitCursor();
```  
  
> [!NOTE]
>  Inserisci nuovo oggetto potrebbe essere diverso per l'applicazione):  
  
 È inoltre necessario includere \<afxodlgs. h >, che contiene la dichiarazione per il **COleInsertObject** classe finestra di dialogo, nonché le altre finestre di dialogo standard fornite da MFC.  
  
```  
\oclient\mainview.cpp(367) : error C2065: 'OLEVERB_PRIMARY' : undeclared identifier  
\oclient\mainview.cpp(367) : error C2660: 'DoVerb' : function does not take 1 parameters  
```  
  
 Questi errori sono causati dal fatto che alcune costanti OLE1 sono stati modificati in OLE 2, anche se concettualmente sono uguali. In questo caso **OLEVERB_PRIMARY** è stato modificato in `OLEIVERB_PRIMARY`. In OLE1 e OLE 2, verbo primario viene in genere eseguito da un contenitore quando l'utente fa doppio clic su un elemento.  
  
 Inoltre, `DoVerb` ora accetta un parametro aggiuntivo, ovvero un puntatore a una vista (`CView`*). Questo parametro viene utilizzato solo per implementare "Modifica visiva" (o l'attivazione sul posto). Per tale parametro ora impostato su NULL, perché non si sta implementando questa funzionalità in questo momento.  
  
 Per assicurarsi che il framework mai tentativi sul posto attivata, è necessario eseguire l'override `COleClientItem::CanActivate` come indicato di seguito:  
  
```  
BOOL CRectItem::CanActivate()  
{  
    return FALSE;  
}  
 
\oclient\rectitem.cpp(53) : error C2065: 'GetBounds' : undeclared identifier  
\oclient\rectitem.cpp(53) : error C2064: term does not evaluate to a function  
\oclient\rectitem.cpp(84) : error C2065: 'SetBounds' : undeclared identifier  
\oclient\rectitem.cpp(84) : error C2064: term does not evaluate to a function  
```  
  
 In MFC/OLE1, **COleClientItem::GetBounds** e **SetBounds** utilizzati per eseguire una query e modificare l'estensione di un elemento (il **sinistro** e **top**membri sono sempre zero). In MFC/OLE 2 si è supportata in modo più diretto in `COleClientItem::GetExtent` e `SetExtent`, che gestiscono un **dimensioni** o `CSize` invece.  
  
 Il codice per il nuovo SetItemRectToServer, e chiamate UpdateItemRectFromServer simile al seguente:  
  
```  
BOOL CRectItem::UpdateItemRectFromServer()  
{  
    ASSERT(m_bTrackServerSize);

 CSize size;  
    if (!GetExtent(&size))  
    return FALSE;    // blank  
 *// map from HIMETRIC to screen coordinates  
 {  
    CClientDC screenDC(NULL);

    screenDC.SetMapMode(MM_HIMETRIC);

 screenDC.LPtoDP(&size);

 } *// just set the item size  
    if (m_rect.Size() != size)  
 { *// invalidate the old size/position  
    Invalidate();
m_rect.right = m_rect.left + size.cx;  
    m_rect.bottom = m_rect.top + size.cy; *// as well as the new size/position  
    Invalidate();

 }  
    return TRUE;  
}  
 
BOOL CRectItem::SetItemRectToServer()  
{ *// set the official bounds for the embedded item  
    CSize size = m_rect.Size();

 {  
    CClientDC screenDC(NULL);

    screenDC.SetMapMode(MM_HIMETRIC);

 screenDC.DPtoLP(&size);

 }  
    TRY 
 {  
    SetExtent(size);
*// may do a wait  
 }  
    CATCH(CException, e)  
 {  
    return FALSE;  // links will not allow SetBounds  
 }  
    END_CATCH 
    return TRUE;  
}  
 
\oclient\frame.cpp(50) : error C2039: 'InWaitForRelease' : is not a member of 'COleClientItem'  
\oclient\frame.cpp(50) : error C2065: 'InWaitForRelease' : undeclared identifier  
\oclient\frame.cpp(50) : error C2064: term does not evaluate to a function  
```  
  
 Nell'API sincrono da MFC/OLE1 sono state chiamate da un contenitore a un server *simulato*, perché non è intrinsecamente asincrona in molti casi OLE1. È necessario effettuare una chiamata asincrona in sospeso in corso prima di elaborare i comandi da parte dell'utente. MFC/OLE1 fornito il **COleClientItem::InWaitForRelease** funzione per questa operazione. In MFC/OLE 2 ciò non è necessario, in modo da poter per rimuovere l'override di OnCommand CMainFrame tutti insieme.  
  
 OCLIENT verrà a questo punto compilare e collegare.  
  
## <a name="other-necessary-changes"></a>Altre modifiche necessarie  
 Ci sono alcuni aspetti che manterrà OCLIENT esecuzione, tuttavia che non vengono eseguiti. Si consiglia di risolvere questi problemi ora anziché in un secondo momento.  
  
 In primo luogo, è necessario inizializzare le librerie OLE. Questa operazione viene eseguita chiamando **AfxOleInit** da `InitInstance`:  
  
```  
if (!AfxOleInit())  
{  
    AfxMessageBox("Failed to initialize OLE libraries");

    return FALSE;  
}  
```  
  
 È anche consigliabile verificare la presenza di funzioni virtuali per le modifiche di elenco di parametri. Una funzione di questo tipo è `COleClientItem::OnChange`, sottoposto a override in ogni applicazione contenitore MFC/OLE. Osservando la Guida in linea, si noterà che è stato aggiunto un 'DWORD dwParam' aggiuntivi. Il nuovo CRectItem::OnChange appare come segue:  
  
```  
void   
CRectItem::OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam)  
{  
    if (m_bTrackServerSize&& 
 !UpdateItemRectFromServer())  
 { *// Blank object  
    if (wNotification == OLE_CLOSED)  
 { *// no data received for the object - destroy it  
    ASSERT(!IsVisible());

 GetDocument()->DeleteItem(this);

    return; // no update (item is gone now)  
 }  
 }  
    if (wNotification != OLE_CLOSED)  
    Dirty();
Invalidate();
*// any change will cause a redraw  
}  
```  
  
 In MFC/OLE1, applicazioni contenitore derivata della classe di documento **COleClientDoc**. MFC/OLE 2 questa classe è stato rimossa e sostituita da `COleDocument` (questa nuova organizzazione rende più semplice compilare applicazioni contenitore/server). È presente un `#define` che esegue il mapping **COleClientDoc** a `COleDocument` per semplificare il porting di applicazioni MFC/OLE1 a MFC/OLE 2, ad esempio OCLIENT. Una delle funzionalità non fornite da `COleDocument` che è stato fornito da **COleClientDoc** è il messaggio di comando standard per le voci della mappa. Questa operazione viene eseguita questa operazione da applicazioni server, che utilizzano `COleDocument` (indirettamente), non portare con sé il sovraccarico di questi gestori di comando a meno che non si tratta di un'applicazione contenitore/server. È necessario aggiungere le seguenti voci alla mappa messaggi CMainDoc:  
  
```  
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE,
    OnUpdatePasteMenu)  
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE_LINK,
    OnUpdatePasteLinkMenu)  
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_LINKS,
    OnUpdateEditLinksMenu)  
ON_COMMAND(ID_OLE_EDIT_LINKS,
    COleDocument::OnEditLinks)  
ON_UPDATE_COMMAND_UI(ID_OLE_VERB_FIRST,
    OnUpdateObjectVerbMenu)  
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_CONVERT,
    OnUpdateObjectVerbMenu)  
ON_COMMAND(ID_OLE_EDIT_CONVERT,
    OnEditConvert)  
```  
  
 L'implementazione di tutti questi comandi è `COleDocument`, che è la classe base per il documento.  
  
 A questo punto, OCLIENT è un'applicazione contenitore OLE. È possibile inserire gli elementi di qualsiasi tipo (OLE1 o OLE 2). Poiché il codice necessario per abilitare l'attivazione sul posto non è stato implementato, gli elementi vengono modificati in una finestra separata, come con OLE1. La sezione successiva illustra le modifiche necessarie per abilitare la modifica sul posto di (talvolta denominato "Modifica visiva").  
  
## <a name="adding-visual-editing"></a>Aggiunta di "Modifica visiva"  
 Una delle funzionalità più interessanti di OLE è attivazione sul posto (o "Modifica visiva"). Questa funzionalità consente all'applicazione server di assumere le parti dell'interfaccia utente del contenitore di fornire un'interfaccia di modifica più trasparente per l'utente. Per implementare l'attivazione sul posto a OCLIENT, è necessario aggiungere, nonché del codice aggiuntivo alcune risorse speciali. Queste risorse e il codice in genere vengono forniti per la creazione guidata applicazione, in realtà, gran parte del codice di stato presa in prestito direttamente da un'applicazione di creazione guidata applicazione aggiornata con il supporto "Container".  
  
 Prima di tutto, è necessario aggiungere una risorsa di menu da utilizzare quando è presente un elemento che è attivo sul posto. Copiare la risorsa IDR_OCLITYPE e rimuovendo tutto tranne il File e finestra popup, è possibile creare la risorsa di menu aggiuntive in Visual C++. Tra i File e finestra popup per indicare la separazione dei gruppi sono inserite due barre di separazione (dovrebbe risultare simile: File &#124; &#124; finestra). Per ulteriori informazioni sul significato di questi separatori e modo in cui vengono uniti i menu di server e il contenitore vedere "Menu e risorse: unione di Menu" in *classi OLE 2*.  
  
 Dopo aver creato questi menu creati, è necessario informare il framework su di essi. Questa operazione viene eseguita chiamando `CDocTemplate::SetContainerInfo` per il modello di documento prima di aggiungerlo all'elenco di modelli di documento in InitInstance. Il nuovo codice per registrare il modello di documento è simile al seguente:  
  
```  
CDocTemplate* pTemplate = new CMultiDocTemplate(
    IDR_OLECLITYPE, 
    RUNTIME_CLASS(CMainDoc), 
    RUNTIME_CLASS(CMDIChildWnd), // standard MDI child frame  
    RUNTIME_CLASS(CMainView));

pTemplate->SetContainerInfo(IDR_OLECLITYPE_INPLACE);

AddDocTemplate(pTemplate);
```   
  
 La risorsa IDR_OLECLITYPE_INPLACE è la risorsa sul posto speciale creata in Visual C++.  
  
 Per abilitare l'attivazione sul posto, esistono alcuni elementi che è necessario modificare in entrambe le `CView` classe derivata (CMainView), nonché `COleClientItem` derivata (CRectItem). Tutti questi override vengono forniti dalla creazione guidata applicazioni e la maggior parte dell'implementazione verrà proviene direttamente da un'applicazione di creazione guidata applicazione predefinita.  
  
 Nel primo passaggio di questa porta, l'attivazione sul posto è stata disabilitata completamente eseguendo l'override `COleClientItem::CanActivate`. Questo override deve essere rimosso per consentire l'attivazione sul posto. Inoltre, in cui è stato passato NULL per tutte le chiamate a `DoVerb` (sono presenti due di essi) in quanto fornisce la visualizzazione è necessaria solo per l'attivazione sul posto. Per implementare completamente l'attivazione sul posto, è necessario passare la corretta visualizzazione di `DoVerb` chiamare. È in una di queste chiamate **CMainView::OnInsertObject**:  
  
```  
pItem->DoVerb(OLEIVERB_SHOW, this);
```  
  
 Un altro è in **CMainView::OnLButtonDblClk**:  
  
```  
m_pSelection->DoVerb(OLEIVERB_PRIMARY, this);
```  
  
 È necessario eseguire l'override `COleClientItem::OnGetItemPosition`. In questo modo il server in cui inserire la relativa finestra rispetto alla finestra del contenitore, quando l'elemento è attivato sul posto. Per OCLIENT, l'implementazione è piuttosto semplice:  
  
```  
void CRectItem::OnGetItemPosition(CRect& rPosition)  
{  
    rPosition = m_rect;  
}  
```  
  
 La maggior parte dei server implementa anche quello che viene definito "sul posto il ridimensionamento." In questo modo la finestra di server essere ridimensionato e spostato mentre l'utente sta modificando l'elemento. Il contenitore deve far parte questa azione, poiché lo spostamento o ridimensionando la finestra, in genere influisce sulla posizione e dimensioni all'interno del documento contenitore stesso. L'implementazione per OCLIENT Sincronizza il rettangolo interno gestito dal m_rect con la nuova posizione e dimensione.  
  
```  
BOOL CRectItem::OnChangeItemPosition(const CRect& rectPos)  
{  
    ASSERT_VALID(this);

 
    if (!COleClientItem::OnChangeItemPosition(rectPos))  
    return FALSE;  
 
    Invalidate();
m_rect = rectPos;  
    Invalidate();
GetDocument()->SetModifiedFlag();

 
    return TRUE;  
}  
```  
  
 A questo punto, è sufficiente codice per consentire a un elemento attivato sul posto e per gestire il ridimensionamento e spostamento dell'elemento quando è attiva, ma nessun codice consente all'utente di uscire dalla sessione di modifica. Anche se alcuni server fornirà questa funzionalità stessi gestendo il tasto ESC, è consigliabile che i contenitori forniscono due modi per disattivare un elemento: (1) facendo clic all'esterno dell'elemento e (2), premere il tasto ESC.  
  
 Per il tasto ESC, aggiungere un tasto di scelta rapida con Visual C++ che esegue il mapping a un comando VK_ESCAPE (tasto), ID_CANCEL_EDIT viene aggiunto alle risorse. Il gestore per il comando seguente:  
  
```  
// The following command handler provides the standard  
// keyboard user interface to cancel an in-place  
// editing session.void CMainView::OnCancelEdit()  
{ *// Close any in-place active item on this view.  
    COleClientItem* pActiveItem = 
    GetDocument()->GetInPlaceActiveItem(this);

 if (pActiveItem != NULL)  
    pActiveItem->Close();
ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);

}  
```  
  
 Per gestire il caso in cui l'utente fa clic all'esterno dell'elemento, aggiungere il codice seguente all'inizio della **CMainView::SetSelection**:  
  
```  
if (pNewSel != m_pSelection || pNewSel == NULL)  
{  
    COleClientItem* pActiveItem = 
    GetDocument()->GetInPlaceActiveItem(this);

 if (pActiveItem != NULL&& pActiveItem != pNewSel)  
    pActiveItem->Close();

} 
 
```  
  
 Quando un elemento è attivo sul posto, deve essere lo stato attivo. Per assicurarsi che questo è il caso OnSetFocus si gestisce in modo che lo stato attivo viene sempre trasferito all'elemento attivo quando la vista riceve lo stato attivo:  
  
```  
// Special handling of OnSetFocus and OnSize are required   
// when an object is being edited in-place.  
void CMainView::OnSetFocus(CWnd* pOldWnd)  
{  
    COleClientItem* pActiveItem = 
    GetDocument()->GetInPlaceActiveItem(this);

 if (pActiveItem != NULL&& 
    pActiveItem->GetItemState() == COleClientItem::activeUIState)  
 { *// need to set focus to this item if it is same view  
    CWnd* pWnd = pActiveItem->GetInPlaceWindow();
if (pWnd != NULL)  
 {  
    pWnd->SetFocus();
*// don't call the base class  
    return; 
 }  
 }  
 
    CView::OnSetFocus(pOldWnd);

} 
```  
  
 Quando si ridimensiona la visualizzazione, è necessario notificare l'elemento attivo è stato modificato il rettangolo di ridimensionamento. A tale scopo è fornire un gestore per `OnSize`:  
  
```  
void CMainView::OnSize(UINT nType,
    int cx,
    int cy)  
{  
    CView::OnSize(nType,
    cx,
    cy);

    COleClientItem* pActiveItem = 
    GetDocument()->GetInPlaceActiveItem(this);

 if (pActiveItem != NULL)  
    pActiveItem->SetItemRects();

} 
```  
  
## <a name="case-study-hiersvr-from-mfc-20"></a>Case Study: HIERSVR da MFC 2.0  
 [HIERSVR](../visual-cpp-samples.md) anche in dotazione con MFC 2.0 e implementato OLE con MFC/OLE1. Questa nota descrive brevemente i passaggi da cui l'applicazione è stato inizialmente convertita per utilizzare le classi MFC/OLE 2. Dopo che la porta iniziale è stata completata per illustrare meglio le classi MFC/OLE 2, sono state aggiunte numerose funzionalità. Queste funzionalità non trattate in questo contesto. vedere l'esempio per ulteriori informazioni su queste funzionalità avanzate.  
  
> [!NOTE]
>  Gli errori del compilatore e procedura dettagliata è stato creato con Visual C++ 2.0. Percorsi e i messaggi di errore sia stato modificato con Visual C++ 4.0, ma le informazioni concettuali rimangono valide.  
  
## <a name="getting-it-up-and-running"></a>Renderla operativa e in esecuzione  
 L'approccio adottato per trasferire l'esempio HIERSVR a MFC/OLE consiste nell'iniziare la creazione e correzione degli errori del compilatore evidente che verranno generato. Se si accetta l'esempio HIERSVR da MFC 2.0 e compilarlo in questa versione di MFC, sono disponibili che non vi siano troppi errori per risolvere (anche se sono presenti più di con l'esempio OCLIENT). Gli errori nell'ordine in cui si verificano in genere sono descritti di seguito.  
  
## <a name="compile-and-fix-errors"></a>Compilazione e correzione di errori  
  
```  
\hiersvr\hiersvr.cpp(83) : error C2039: 'RunEmbedded' : is not a member of 'COleTemplateServer'  
```  
  
 Questo primo errore indica un problema di dimensioni molto maggiore con il `InitInstance` funzione per i server. L'inizializzazione richiesta per un server OLE è probabilmente una delle principali modifiche sarà necessario apportare all'applicazione da MFC/OLE1 eseguire questa operazione è in esecuzione. Il modo migliore per eseguire è ciò che crea la creazione guidata applicazione per un server OLE esaminare e modificare il codice come appropriato. Ecco alcuni punti da tenere presenti:  
  
 È necessario inizializzare le librerie OLE chiamando **AfxOleInit**  
  
 Chiamare SetServerInfo sull'oggetto del modello di documento per impostare l'handle di risorse di server e informazioni sulle classi di runtime che non è possibile impostare con il `CDocTemplate` costruttore.  
  
 Non visualizzare la finestra principale dell'applicazione se l'opzione /Embedding è presente nella riga di comando.  
  
 È necessario un **GUID** per il documento. Questo è un identificatore univoco per il tipo del documento (128 bit). La creazione guidata applicazione verrà creato uno automaticamente, se si utilizza la tecnica descritta di seguito per copiare il nuovo codice da una nuova applicazione server generata con la creazione guidata applicazione, è possibile semplicemente "rubare" GUID da quell'applicazione. In caso contrario, è possibile utilizzare il GUIDGEN. Utilità EXE nella directory BIN.  
  
 È necessario connettersi "" il `COleTemplateServer` oggetto per il modello di documento chiamando `COleTemplateServer::ConnectTemplate`.  
  
 Aggiornare il Registro di sistema quando l'applicazione viene eseguito in modalità autonoma. In questo modo, se l'utente sposta il. EXE per l'applicazione, eseguirlo dalla nuova posizione aggiornerà il database di registrazione di sistema di Windows in modo da puntare alla nuova posizione.  
  
 Dopo aver applicato tutte le modifiche in base a ciò che crea la creazione guidata applicazione per `InitInstance`, `InitInstance` (e relativi GUID) per HIERSVR dovrebbe essere il seguente:  
  
```  
// this is the GUID for HIERSVR documents  
static const GUID BASED_CODE clsid = 
 { 0xA0A16360L,
    0xC19B,
    0x101A, { 0x8C,
    0xE5,
    0x00,
    0xDD,
    0x01,
    0x11,
    0x3F,
    0x12 } };  
 
/////////////////////////////////////////////////////////////////////////////  
// COLEServerApp initialization  
 
BOOL COLEServerApp::InitInstance()  
{ *// OLE 2 initialization  
    if (!AfxOleInit())  
 {  
    AfxMessageBox("Initialization of the OLE failed!");

    return FALSE;  
 }  
 *// Standard initialization  
    LoadStdProfileSettings();

// Load standard INI file options   
 *// Register document templates  
    CDocTemplate* pDocTemplate;  
    pDocTemplate = new CMultiDocTemplate(IDR_HIERSVRTYPE,  
    RUNTIME_CLASS(CServerDoc), 
    RUNTIME_CLASS(CMDIChildWnd), 
    RUNTIME_CLASS(CServerView));

 pDocTemplate->SetServerInfo(IDR_HIERSVRTYPE_SRVR_EMB);

    AddDocTemplate(pDocTemplate);

 *// create main MDI Frame window  
    CMainFrame* pMainFrame = new CMainFrame;  
    if (!pMainFrame->LoadFrame(IDR_MAINFRAME))  
    return FALSE;  
    m_pMainWnd = pMainFrame;  
 
    SetDialogBkColor();
*// gray look  
 *// enable file manager drag/drop and DDE Execute open  
    m_pMainWnd->DragAcceptFiles();
EnableShellOpen();

 
    m_server.ConnectTemplate(clsid,
    pDocTemplate,
    FALSE);

    COleTemplateServer::RegisterAll();

 *// try to launch as an OLE server  
    if (RunEmbedded())  
 { *// "short-circuit" initialization -- run as server!  
    return TRUE;  
 }  
    m_server.UpdateRegistry();
RegisterShellFileTypes();

 *// not run as OLE server,
    so show the main window  
    if (m_lpCmdLine[0] == '\0')  
 { *// create a new (empty) document  
    OnFileNew();

 }  
    else 
 { *// open an existing document  
    OpenDocumentFile(m_lpCmdLine);

 }  
 
    pMainFrame->ShowWindow(m_nCmdShow);

 pMainFrame->UpdateWindow();

 
    return TRUE;  
}  
```  
  
 Si noterà che il codice precedente fa riferimento a un nuovo ID di risorsa, IDR_HIERSVRTYPE_SRVR_EMB. Si tratta della risorsa di menu da utilizzare quando viene modificato un documento incorporato in un altro contenitore. In MFC/OLE1 le voci di menu specifiche per la modifica di un elemento incorporato sono state modificate in tempo reale. Utilizzando una struttura di menu completamente diverso quando si modifica un elemento incorporato invece di modificare un documento basato su file rende molto più semplice fornire diverse interfacce utente per questi due diverse modalità. Come si vedrà in seguito, viene utilizzata una risorsa di menu completamente separate quando si modifica un oggetto incorporato sul posto.  
  
 Per creare la risorsa, caricare lo script di risorsa in Visual C++ e copiare la risorsa di menu IDR_HIERSVRTYPE esistente. Rinominare la nuova risorsa IDR_HIERSVRTYPE_SRVR_EMB (questa è la stessa convenzione di denominazione che utilizza la creazione guidata applicazione). Successivamente modificare "Salva" in "File di aggiornamento". assegnare l'ID di comando **ID_FILE_UPDATE**. È inoltre modificare "Salva con nome" in "Salva copia con nome"; assegnare l'ID di comando **ID_FILE_SAVE_COPY_AS**. Il framework fornisce l'implementazione di entrambi questi comandi.  
  
```  
\hiersvr\svritem.h(60) : error C2433: 'OLESTATUS' : 'virtual' not permitted on data declarations  
\hiersvr\svritem.h(60) : error C2501: 'OLESTATUS' : missing decl-specifiers  
\hiersvr\svritem.h(60) : error C2146: syntax error : missing ';' before identifier 'OnSetData'  
\hiersvr\svritem.h(60) : error C2061: syntax error : identifier 'OLECLIPFORMAT'  
\hiersvr\svritem.h(60) : error C2501: 'OnSetData' : missing decl-specifiers  
```  
  
 Esistono un numero di errori risultanti dall'override di `OnSetData`, dal momento che si riferisce al **OLESTATUS** tipo. **OLESTATUS** è il modo in cui OLE1 restituiti errori. È stato modificato per `HRESULT` OLE 2, sebbene MFC in genere converte un `HRESULT` in un `COleException` che contiene l'errore. In questo caso specifico, la sostituzione di `OnSetData` non è più necessario, pertanto è la cosa più semplice da fare per rimuoverlo.  
  
```  
\hiersvr\svritem.cpp(30) : error C2660: 'COleServerItem::COleServerItem' : function does not take 1 parameters  
```  
  
 Il `COleServerItem` costruttore accetta un parametro di 'BOOL' supplementare. Questo flag determina come gestione della memoria viene effettuata la `COleServerItem` oggetti. Mediante l'impostazione su TRUE, il framework gestisce la gestione della memoria di questi oggetti, vengono eliminati quando non sono più necessarie. Usa HIERSVR **CServerItem** (derivato da `COleServerItem`) gli oggetti nell'ambito dei propri dati nativi, pertanto è possibile impostare questo flag su FALSE. In questo modo HIERSVR determinare quando viene eliminato ogni elemento del server.  
  
```  
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class  
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class  
```  
  
 Come implicano questi errori, esistono alcune funzioni 'virtuali pure' non è stato eseguito l'override in CServerItem. Ciò è probabilmente causato dal fatto che l'elenco di parametri OnDraw è stato modificato. Per correggere l'errore, modificare **CServerItem:: OnDraw** come indicato di seguito (e alla dichiarazione in svritem.h):  
  
```  
BOOL CServerItem::OnDraw(CDC* pDC,
    CSize& rSize)  
{ *// request from OLE to draw node  
    pDC->SetMapMode(MM_TEXT);

// always in pixels  
    return DoDraw(pDC,
    CPoint(0,
    0),
    FALSE);

}  
```  
  
 Il nuovo parametro è 'rSize'. Questo consente di specificare le dimensioni del disegno, se pratico. Questa dimensione deve essere **HIMETRIC**. In questo caso, non è consigliabile inserire questo valore, pertanto il framework chiama `OnGetExtent` per recuperare l'entità. Per funzionare, è necessario implementare `OnGetExtent`:  
  
```  
BOOL CServerItem::OnGetExtent(DVASPECT dwDrawAspect,
    CSize& rSize)  
{  
    if (dwDrawAspect != DVASPECT_CONTENT)  
    return COleServerItem::OnGetExtent(dwDrawAspect,
    rSize);

 
    rSize = CalcNodeSize();
return TRUE;  
}  
 
\hiersvr\svritem.cpp(104) : error C2065: 'm_rectBounds' : undeclared identifier  
\hiersvr\svritem.cpp(104) : error C2228: left of '.SetRect' must have class/struct/union type  
\hiersvr\svritem.cpp(106) : error C2664: 'void __pascal __far DPtoLP(struct ::tagPOINT __far *,
    int)__far const ' : cannot convert parameter 1 from 'int __far *' to 'struct ::tagPOINT __far *'  
```  
  
 Nella funzione CServerItem::CalcNodeSize delle dimensioni dell'elemento viene convertita in **HIMETRIC** e archiviati in **m_rectBounds**. Il non documentato '**m_rectBounds**' membro di `COleServerItem` non esiste (è stata sostituita parzialmente da `m_sizeExtent`, ma in OLE 2 questo membro ha un utilizzo leggermente diverso rispetto a **m_rectBounds**nelle OLE1). Anziché impostare la **HIMETRIC** dimensioni in questa variabile membro, verrà restituito. Il valore restituito viene utilizzato `OnGetExtent`, implementato in precedenza.  
  
```  
CSize CServerItem::CalcNodeSize()  
{  
    CClientDC dcScreen(NULL);

 
    m_sizeNode = dcScreen.GetTextExtent(m_strDescription,  
    m_strDescription.GetLength());

 m_sizeNode += CSize(CX_INSET* 2,
    CY_INSET* 2);

 *// set suggested HIMETRIC size  
    CSize size(m_sizeNode.cx,
    m_sizeNode.cy);

    dcScreen.SetMapMode(MM_HIMETRIC);

 dcScreen.DPtoLP(&size);

    return size;  
}  
```  
  
 Esegue l'override anche di CServerItem **COleServerItem::OnGetTextData**. Questa funzione è obsoleta in MFC/OLE e viene sostituita da un meccanismo diverso. La versione 3.0 di MFC di esempio OLE MFC [HIERSVR](../visual-cpp-samples.md) implementa questa funzionalità eseguendo l'override `COleServerItem::OnRenderFileData`. Questa funzionalità non è importante per la porta di base, pertanto è possibile rimuovere la sostituzione OnGetTextData.  
  
 Esistono molte più errori in svritem.cpp che non sono stati risolti. Non sono errori "reali", solo gli errori causati da errori precedenti.  
  
```  
\hiersvr\svrview.cpp(325) : error C2660: 'CopyToClipboard' : function does not take 2 parameters  
```  
  
 `COleServerItem::CopyToClipboard` non supporta più il flag 'bIncludeNative'. Viene sempre copiati i dati nativi (i dati scritti dalla funzione Serialize dell'elemento server), quindi si rimuove il primo parametro. Inoltre, `CopyToClipboard` genererà un'eccezione quando si verifica un errore anziché restituire FALSE. Modificare il codice per CServerView::OnEditCopy come segue:  
  
```  
void CServerView::OnEditCopy()  
{  
    if (m_pSelectedNode == NULL)  
    AfxThrowNotSupportedException();

 
    TRY 
 {  
    m_pSelectedNode->CopyToClipboard(TRUE);

 }  
    CATCH_ALL(e) 
 {  
    AfxMessageBox("Copy to clipboard failed");

 }  
    END_CATCH_ALL 
}  
```  
  
 Anche se si sono verificati ulteriori errori risultanti dalla compilazione della versione 2.0 di MFC di HIERSVR che si sono verificati per la stessa versione di OCLIENT, sono stati effettivamente meno le modifiche.  
  
 A questo punto HIERSVR verrà compilare e collegare e funziona come un server OLE, senza la funzionalità di modifica sul posto, verrà implementata successivamente.  
  
## <a name="adding-visual-editing"></a>Aggiunta di "Modifica visiva"  
 Per aggiungere "Modifica visiva" (o l'attivazione sul posto) all'applicazione server, esistono solo alcuni aspetti, di che è necessario prestare attenzione:  
  
-   È necessario una risorsa di menu speciali da utilizzare quando l'elemento è attivo sul posto.  
  
-   Questa applicazione contiene una barra degli strumenti, quindi è necessario che una barra degli strumenti con solo un subset della barra degli strumenti normale in modo che corrisponda i comandi di menu disponibili dal server (corrisponde la risorsa di menu indicata in precedenza).  
  
-   È necessario una nuova classe derivata da `COleIPFrameWnd` che fornisce l'interfaccia utente sul posto (analogamente CMainFrame, derivata da `CMDIFrameWnd`, fornisce l'interfaccia utente MDI).  
  
-   È necessario indicare al framework su queste risorse speciali e classi.  
  
 La risorsa di menu è possibile creare con facilità. Esecuzione di Visual C++, copiare la risorsa di menu IDR_HIERSVRTYPE chiamata IDR_HIERSVRTYPE_SRVR_IP una risorsa di menu. Modificare il menu in modo che vengono mantenuti solo i popup di menu Modifica e la Guida. Aggiungere due separatori di menu tra i menu Modifica e la Guida (dovrebbe risultare simile: modificare &#124; &#124; della Guida). Per ulteriori informazioni sul significato di questi separatori e modo in cui vengono uniti i menu di server e il contenitore, vedere "Menu e risorse: unione di Menu" in *classi OLE 2*.  
  
 È possibile creare facilmente la bitmap della barra degli strumenti subset copiando quello da un'applicazione la creazione guidata applicazione generata aggiornata con l'opzione "Server". Questa bitmap può quindi essere importata in Visual C++. Assicurarsi di assegnare un ID di IDR_HIERSVRTYPE_SRVR_IP di bitmap.  
  
 La classe derivata da `COleIPFrameWnd` può essere copiato da un'applicazione la creazione guidata applicazione generata con supporto dei server. Copiare entrambi i file, IPFRAME. CPP e IPFRAME. H e li aggiunge al progetto. Assicurarsi che il `LoadBitmap` chiamata fa riferimento a IDR_HIERSVRTYPE_SRVR_IP, bitmap creato nel passaggio precedente.  
  
 Ora che tutte le classi e le nuove risorse vengono create, aggiungere il codice necessario in modo che il framework conosce questi (e riconosce che l'applicazione ora supporta la modifica sul posto). Questa operazione viene eseguita aggiungendo alcuni ulteriori parametri per il `SetServerInfo` chiamare il `InitInstance` funzione:  
  
```  
pDocTemplate->SetServerInfo(IDR_HIERSVRTYPE_SRVR_EMB,  
    IDR_HIERSVRTYPE_SRVR_IP,
    RUNTIME_CLASS(CInPlaceFrame));
```  
  
 È ora pronto per essere eseguito sul posto in qualsiasi contenitore che supporta anche l'attivazione sul posto. È tuttavia un bug secondario che ancora si nascondono nel codice. HIERSVR supporta un menu di scelta rapida, visualizzato quando l'utente preme il pulsante destro del mouse. Questo menu funziona quando HIERSVR è completamente aperto, ma non funziona quando si modifica un incorporamento sul posto. Il motivo può essere bloccato a quest'unica riga di codice in CServerView::OnRButtonDown:  
  
```  
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,  
    point.x,
    point.y,
    AfxGetApp()->m_pMainWnd);
```  
  
 Si noti il riferimento a **AfxGetApp() -> m_pMainWnd**. Quando il server è attivato sul posto, ha una finestra principale e m_pMainWnd è impostata, ma non è in genere visibile. Inoltre, si intende la finestra di *principale* finestra dell'applicazione, aprire la finestra cornice MDI che viene visualizzato quando il server è completamente o eseguito in modalità autonoma. Non fa riferimento alla finestra frame attivo, ovvero che quando sul posto attivato è una cornice di finestra derivato da `COleIPFrameWnd`. Per ottenere la finestra attiva corretta anche quando si modifica in loco, questa versione di MFC aggiunge una nuova funzione `AfxGetMainWnd`. In genere, è necessario utilizzare questa funzione anziché **AfxGetApp() -> m_pMainWnd**. Questo codice deve modificare come segue:  
  
```  
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,  
    point.x,
    point.y,
    AfxGetMainWnd());
```  
  
 Ora si dispone di un server OLE minima abilitato per l'attivazione sul posto funzionale. Ma sono ancora presenti numerose funzionalità disponibili con MFC/OLE 2 che non erano disponibili in MFC/OLE1. Vedere l'esempio HIERSVR per ulteriori informazioni sulle funzionalità che si desidera implementare. Alcune delle funzionalità che implementa HIERSVR sono elencati di seguito:  
  
-   Lo zoom avanti, per il comportamento WYSISYG true rispetto al contenitore.  
  
-   Trascinare / rilascio e un formato degli Appunti personalizzato.  
  
-   Lo scorrimento della finestra del contenitore come la selezione viene modificato.  
  
 L'esempio HIERSVR in MFC 3.0 utilizza inoltre una progettazione leggermente diversa per gli elementi del server. Questo consente di conservare la memoria e i collegamenti più flessibile. Con la versione 2.0 di HIERSVR ogni nodo della struttura *è* `COleServerItem`. `COleServerItem` provocando overhead maggiore rispetto a quanto sia strettamente necessarie per ognuno di tali nodi, ma un `COleServerItem` è necessaria per ogni collegamento attivo. Ma la maggior parte, sono presenti pochi collegamenti attivi in qualsiasi momento. Per rendere più efficiente, HIERSVR in questa versione di MFC separa il nodo di `COleServerItem`. Include sia un CServerNode e **CServerItem** classe. Il **CServerItem** (derivato da `COleServerItem`) viene creato solo in base alle esigenze. Una volta il contenitore (o i contenitori) smettere di usare tale collegamento per quel determinato nodo specifico, viene eliminato l'oggetto CServerItem associato con il CServerNode. Questa progettazione è più efficiente e flessibile. La flessibilità è disponibile in, quando si gestiscono più collegamenti di selezione. Nessuna di queste due versioni di HIERSVR supporta selezioni multiple, ma sarebbe molto più semplice per aggiungere (e per supportare i collegamenti a tali selezioni) con la versione 3.0 di MFC di HIERSVR, poiché il `COleServerItem` è separato dai dati nativi.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

