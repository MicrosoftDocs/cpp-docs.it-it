---
title: 'TN041: Migrazione da MFC-OLE1 a MFC-OLE 2 | Microsoft Docs'
ms.custom: ''
ms.date: 10/18/2018
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
ms.openlocfilehash: c2f93ffa79c5f737be032ae9edffa6c3e49c7055
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49809018"
---
# <a name="tn041-mfcole1-migration-to-mfcole-2"></a>TN041: migrazione da MFC/OLE1 a MFC/OLE 2

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

## <a name="general-issues-relating-to-migration"></a>Problemi generali relativi alla migrazione

Uno degli obiettivi di progettazione per le classi OLE 2 in MFC 2.5 (e versioni successive) era di mantenere la maggior parte della stessa architettura mettere in atto di MFC 2.0 per il supporto OLE 1.0. Di conseguenza, molte delle stesso classi OLE MFC 2.0 ancora presente in questa versione di MFC (`COleDocument`, `COleServerDoc`, `COleClientItem`, `COleServerItem`). Inoltre, molte delle API di queste classi corrispondono esattamente. OLE 2 è tuttavia notevolmente diverse da OLE 1.0 in modo che è possibile prevedere che alcuni dettagli sono stati modificati. Se si ha familiarità con il supporto di MFC 2.0 da OLE1, sarà sentirsi a proprio agio con 2.0 il supporto di MFC.

Se si richiede un'applicazione MFC/OLE1 esistente e aggiungendovi funzionalità OLE 2, è consigliabile leggere prima di tutto questa nota. In questa nota descrive alcune considerazioni generali, si possono verificarsi durante il trasferimento di funzionalità da OLE1 a MFC/OLE 2 e quindi illustra i problemi sono stati rilevati durante il porting di due applicazioni incluse in MFC 2.0: esempi OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md).

## <a name="mfc-documentview-architecture-is-important"></a>Architettura documento/visualizzazione MFC è importante

Se l'applicazione non usa l'architettura documento/visualizzazione di MFC e si desidera aggiungere il supporto OLE 2 all'applicazione, è ora il momento di spostare documenti/visualizzazioni. Molti dei vantaggi di OLE 2 classi MFC si realizza solo dopo che l'applicazione usa l'architettura predefinita e i componenti di MFC.

L'implementazione di un server o un contenitore senza utilizzare l'architettura MFC è possibile, ma non consigliata.

## <a name="use-mfc-implementation-instead-of-your-own"></a>Implementazione MFC Usa invece il proprio

Classi MFC "predefinito implementazione", ad esempio `CToolBar`, `CStatusBar`, e `CScrollView` avere codice case speciale predefinito per il supporto OLE 2. Pertanto, se è possibile utilizzare queste classi nell'applicazione è possibile sfruttare il tentativo di inserire al loro interno per mettere in OLE. Anche in questo caso, è possibile "esegue il rollup-your-own" classi qui per effettuare queste operazioni, ma non è consigliato. Se è necessario implementare una funzionalità simile, il codice sorgente MFC è un riferimento a un'eccellente per la gestione di alcuni punti più preciso di OLE (in particolare quando si tratta di attivazione sul posto).

## <a name="examine-the-mfc-sample-code"></a>Esaminare il codice di esempio MFC

Esistono una serie di esempi di MFC che includono funzionalità OLE. Ognuna di queste applicazioni implementa OLE da un angolo diversi:

- [HIERSVR](../visual-cpp-samples.md) destinato principalmente all'uso come un'applicazione server. È stato incluso in MFC 2.0 come applicazione MFC/OLE1 e ha stato trasferito in MFC/OLE 2 e quindi esteso in modo che possa implementare molte funzionalità OLE è disponibile in OLE 2.

- [OCLIENT](../visual-cpp-samples.md) è un'applicazione contenitore autonoma, lo scopo di illustrare molte delle funzionalità OLE dal punto di vista del contenitore. Troppo è stato trasferito dalla versione 2.0 di MFC e quindi estesa per supportare molte delle funzionalità più avanzate, OLE, ad esempio i formati degli Appunti personalizzati e i collegamenti agli elementi incorporati.

- [DRAWCLI](../visual-cpp-samples.md) questa applicazione implementa il supporto di contenitori OLE molto simile OCLIENT, ad eccezione del fatto che esegue l'operazione all'interno del framework di un programma di disegno esistente orientate a oggetti. Illustra come implementare il supporto di contenitori OLE e integrarlo nell'applicazione esistente.

- [SUPERPAD](../visual-cpp-samples.md) questa applicazione, nonché da un'applicazione autonoma bene, è anche un server OLE. Implementa il supporto del server è abbastanza scarna. Di particolare interesse è come servizi degli Appunti OLE viene utilizzato per copiare i dati negli Appunti, ma usa la funzionalità incorporata nel controllo di Windows "Modifica" per implementare la funzionalità Incolla degli Appunti. Mostra una combinazione interessa di utilizzo dell'API di Windows tradizionali, nonché integrazione con le nuove API OLE.

Per altre informazioni sulle applicazioni di esempio, vedere la "MFC esempio Help".

## <a name="case-study-oclient-from-mfc-20"></a>Case Study: OCLIENT da MFC 2.0

Come illustrato in precedenza, [OCLIENT](../visual-cpp-samples.md) era incluso in MFC 2.0 e implementata con MFC/OLE1 OLE. Seguito vengono descritti i passaggi da cui questa applicazione è stata inizialmente convertita per utilizzare le classi MFC/OLE 2. Dopo che la porta iniziale è stata completata per illustrare meglio le classi MFC/OLE, sono state aggiunte numerose funzionalità. Queste funzionalità non trattate in questo contesto. vedere l'esempio per altre informazioni su queste funzionalità avanzate.

> [!NOTE]
> Errori del compilatore e descrizione dettagliata del processo è stato creato con Visual C++ 2.0. Percorsi e i messaggi di errore specifico sia stato modificato con Visual C++ 4.0, ma le informazioni di carattere generale rimangono valide.

## <a name="getting-it-up-and-running"></a>Renderla operativa e in esecuzione

L'approccio adottato per l'esempio OCLIENT a MFC/OLE di porta consiste nell'iniziare la compilazione, e correggendo gli errori del compilatore ovvio che genereranno. Se si accetta l'esempio OCLIENT dalla versione 2.0 di MFC e compilarlo in questa versione di MFC, troverai che non siano presenti che molti errori da risolvere. Gli errori nell'ordine in cui si sono verificate sono descritti di seguito.

## <a name="compile-and-fix-errors"></a>Compilazione e correggere gli errori

```Output
\oclient\mainview.cpp(104) : error C2660: 'Draw' : function does not take 4 parameters
```

La prima riguarda errore `COleClientItem::Draw`. In MFC/OLE1 ha richiesto più parametri richiede la versione MFC/OLE. I parametri aggiuntivi sono stati spesso non necessari e, in genere NULL (come in questo esempio). Questa versione di MFC può determinare automaticamente i valori per il lpWBounds quando CDC che viene disegnato a è un dispositivo metafile. Inoltre, il parametro pFormatDC è più necessario perché il framework creerà uno dal "attributo controller di dominio" del pDC passato. Per risolvere questo problema, è sufficiente rimuovere i due in modo molto NULL parametri per la chiamata di disegno.

```Output
\oclient\mainview.cpp(273) : error C2065: 'OLE_MAXNAMESIZE' : undeclared identifier
\oclient\mainview.cpp(273) : error C2057: expected constant expression
\oclient\mainview.cpp(280) : error C2664: 'CreateLinkFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '
\oclient\mainview.cpp(286) : error C2664: 'CreateFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '
\oclient\mainview.cpp(288) : error C2664: 'CreateStaticFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '
```

Gli errori sopra risultato dal fatto che tutte le `COleClientItem::CreateXXXX` funzioni in MFC/OLE1 richiesto che un nome univoco deve essere passato per rappresentare l'elemento. Si tratta di un requisito di OLE API sottostante. Ciò non è necessario in MFC/OLE 2 OLE 2 Usa DDE come meccanismo di comunicazione sottostanti (il nome è stato usato nelle conversazioni di DDE). Per risolvere questo problema, è possibile rimuovere il `CreateNewName` funzione, nonché tutti i riferimenti a esso. È facile scoprire cosa ogni MFC/OLE la funzione è previsto in questa versione è sufficiente, posizionando il cursore alla chiamata e premere F1.

Un'altra area che differisce significativamente è la gestione degli Appunti OLE 2. Con OLE1, usato gli Appunti di Windows che API interagiscono con gli Appunti. Con OLE 2 questa operazione viene eseguita con un meccanismo diverso. Le API da MFC/OLE1 presuppone che gli Appunti è stato aperto prima della copia un `COleClientItem` oggetto negli Appunti. Questo non è più necessario e causerà tutte le operazioni degli Appunti da MFC/OLE esito negativo. Mentre si modifica il codice per rimuovere le dipendenze `CreateNewName`, è necessario rimuovere anche il codice che apre e chiude gli Appunti di Windows.

```Output
\oclient\mainview.cpp(332) : error C2065: 'AfxOleInsertDialog' : undeclared identifier
\oclient\mainview.cpp(332) : error C2064: term does not evaluate to a function
\oclient\mainview.cpp(344) : error C2057: expected constant expression
\oclient\mainview.cpp(347) : error C2039: 'CreateNewObject' : is not a member of 'CRectItem'
```

Questi errori vengono generati dal `CMainView::OnInsertObject` gestore. La gestione del comando "Insert New Object" è un'altra area in cui sono stati modificati aspetti abbastanza. In questo caso, è più semplice unire semplicemente l'implementazione originale con quello fornito dalla creazione guidata applicazioni per la nuova applicazione contenitore OLE. In effetti, questa è una tecnica che è possibile applicare al porting di altre applicazioni. In MFC/OLE1, è visualizzata la finestra di dialogo "Inserisci oggetto" chiamando `AfxOleInsertDialog` (funzione). In questa versione è costruire una `COleInsertObject` chiamata e oggetto finestra di dialogo `DoModal`. Inoltre, vengono creati nuovi elementi OLE con un **CLSID** anziché una stringa classname. Il risultato finale dovrebbe essere simile al seguente

```cpp
COleInsertDialog dlg;
if (dlg.DoModal() != IDOK)
    return;

BeginWaitCursor();

CRectItem* pItem = NULL;
TRY
{
    // First create the C++ object
    pItem = GetDocument()->CreateItem();
    ASSERT_VALID(pItem);

    // Initialize the item from the dialog data.
    if (!dlg.CreateItem(pItem))
        AfxThrowMemoryException();
            // any exception will do
    ASSERT_VALID(pItem);

    // run the object if appropriate
    if (dlg.GetSelectionType() == COleInsertDialog::createNewItem)
        pItem->DoVerb(OLEIVERB_SHOW, this);

    // update right away
    pItem->UpdateLink();
    pItem->UpdateItemRectFromServer();

    // set selection to newly inserted item
    SetSelection(pItem);
    pItem->Invalidate();
}
CATCH (CException, e)
{
    // clean up item
    if (pItem != NULL)
        GetDocument()->DeleteItem(pItem);

    AfxMessageBox(IDP_FAILED_TO_CREATE);
}
END_CATCH

EndWaitCursor();
```

> [!NOTE]
> Inserisci nuovo oggetto può essere diversa per l'applicazione):

È inoltre necessario includere \<afxodlgs. h >, che contiene la dichiarazione per il `COleInsertObject` classe finestra di dialogo, nonché le altre finestre di dialogo standard fornite da MFC.

```Output
\oclient\mainview.cpp(367) : error C2065: 'OLEVERB_PRIMARY' : undeclared identifier
\oclient\mainview.cpp(367) : error C2660: 'DoVerb' : function does not take 1 parameters
```

Questi errori sono causati dal fatto che sono state modificate alcune costanti di OLE1 in OLE 2, anche se concettualmente sono uguali. In questo caso `OLEVERB_PRIMARY` cambiata da `OLEIVERB_PRIMARY`. OLE1 sia OLE 2, verbo primario viene in genere eseguito da un contenitore quando l'utente fa doppio clic su un elemento.

È inoltre `DoVerb` ora accetta un parametro aggiuntivo, ovvero un puntatore a una visualizzazione (`CView`*). Questo parametro viene utilizzato solo per implementare "Modifica visiva" (o attivazione sul posto). Per ora tale parametro è impostato su NULL, perché non si implementa questa funzionalità in questo momento.

Per assicurarsi che il framework mai i tentativi di posto attivi, è necessario eseguire l'override `COleClientItem::CanActivate` come indicato di seguito:

```cpp
BOOL CRectItem::CanActivate()
{
    return FALSE;
}
```

```Output
\oclient\rectitem.cpp(53) : error C2065: 'GetBounds' : undeclared identifier
\oclient\rectitem.cpp(53) : error C2064: term does not evaluate to a function
\oclient\rectitem.cpp(84) : error C2065: 'SetBounds' : undeclared identifier
\oclient\rectitem.cpp(84) : error C2064: term does not evaluate to a function
```

In MFC/OLE1, `COleClientItem::GetBounds` e `SetBounds` usati per eseguire una query e modificare l'ambito di un elemento (il `left` e `top` membri erano sempre zero). In MFC/OLE 2 sono più direttamente supportata dal `COleClientItem::GetExtent` e `SetExtent`, che consente di affrontare un **SIZE** o `CSize` invece.

Il codice per il nuovo SetItemRectToServer, e chiamate UpdateItemRectFromServer simile al seguente:

```cpp
BOOL CRectItem::UpdateItemRectFromServer()
{
    ASSERT(m_bTrackServerSize);
    CSize size;
    if (!GetExtent(&size))
        return FALSE;    // blank

    // map from HIMETRIC to screen coordinates
    {
        CClientDC screenDC(NULL);
        screenDC.SetMapMode(MM_HIMETRIC);
        screenDC.LPtoDP(&size);
    }
    // just set the item size
    if (m_rect.Size() != size)
    {
        // invalidate the old size/position
        Invalidate();
        m_rect.right = m_rect.left + size.cx;
        m_rect.bottom = m_rect.top + size.cy;
        // as well as the new size/position
        Invalidate();
    }
    return TRUE;
}

BOOL CRectItem::SetItemRectToServer()
{
    // set the official bounds for the embedded item
    CSize size = m_rect.Size();
    {
        CClientDC screenDC(NULL);
        screenDC.SetMapMode(MM_HIMETRIC);
        screenDC.DPtoLP(&size);
    }
    TRY
    {
        SetExtent(size);    // may do a wait
    }
    CATCH(CException, e)
    {
        return FALSE;  // links will not allow SetBounds
    }
    END_CATCH
    return TRUE;
}
```

```Output
\oclient\frame.cpp(50) : error C2039: 'InWaitForRelease' : is not a member of 'COleClientItem'
\oclient\frame.cpp(50) : error C2065: 'InWaitForRelease' : undeclared identifier
\oclient\frame.cpp(50) : error C2064: term does not evaluate to a function
```

Nell'API sincrona da MFC/OLE1 sono state chiamate da un contenitore a un server *simulato*, perché OLE1 è intrinsecamente asincrona in molti casi. È stato necessario verificare la presenza di una chiamata asincrona in sospeso in corso prima di elaborare i comandi da parte dell'utente. MFC/OLE1 fornito il `COleClientItem::InWaitForRelease` funzione per eseguire questa operazione. In MFC/OLE 2 non necessario, in modo da poter per rimuovere l'override del OnCommand in CMainFrame tutti insieme.

A questo punto OCLIENT verrà compilare e collegare.

## <a name="other-necessary-changes"></a>Altre modifiche necessarie

Esistono alcuni aspetti che manterrà OCLIENT in esecuzione, tuttavia non eseguite. È preferibile risolvere questi problemi ora anziché in un secondo momento.

In primo luogo, è necessario inizializzare le librerie OLE. Questa operazione viene eseguita chiamando `AfxOleInit` da `InitInstance`:

```cpp
if (!AfxOleInit())
{
    AfxMessageBox("Failed to initialize OLE libraries");
    return FALSE;
}
```

È anche consigliabile verificare la presenza di funzioni virtuali per modifiche all'elenco di parametri. Una di queste funzioni è `COleClientItem::OnChange`, sottoposto a override in tutte le applicazioni contenitore MFC/OLE. Osservando la Guida in linea, si noterà che è stato aggiunto un 'DWORD dwParam' extra. Il nuovo CRectItem::OnChange appare come segue:

```cpp
void
CRectItem::OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam)
{
    if (m_bTrackServerSize && !UpdateItemRectFromServer())
    {
        // Blank object
        if (wNotification == OLE_CLOSED)
        {
            // no data received for the object - destroy it
            ASSERT(!IsVisible());
            GetDocument()->DeleteItem(this);
            return; // no update (item is gone now)
        }
    }
    if (wNotification != OLE_CLOSED)
        Dirty();
    Invalidate();
    // any change will cause a redraw
}
```

In MFC/OLE1, le applicazioni contenitore derivata della classe documento da `COleClientDoc`. In MFC/OLE 2 questa classe è stata rimossa e sostituita con `COleDocument` (questa nuova organizzazione rende più semplice compilare le applicazioni contenitore/server). È presente una **#define** che esegue il mapping `COleClientDoc` a `COleDocument` per semplificare la portabilità delle applicazioni da MFC/OLE1 a MFC/OLE 2, ad esempio OCLIENT. Una delle funzionalità non vengono fornite dalle `COleDocument` che è stato fornito da `COleClientDoc` è il messaggio di comando standard per le voci della mappa. Questa operazione viene eseguita questa operazione che le applicazioni server, che usano `COleDocument` (indirettamente), non portare con sé il sovraccarico di questi gestori comando a meno che non si tratta di un'applicazione contenitore/server. È necessario aggiungere le voci seguenti alla mappa messaggi CMainDoc:

```cpp
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE, OnUpdatePasteMenu)
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE_LINK, OnUpdatePasteLinkMenu)
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_LINKS, OnUpdateEditLinksMenu)
ON_COMMAND(ID_OLE_EDIT_LINKS, COleDocument::OnEditLinks)
ON_UPDATE_COMMAND_UI(ID_OLE_VERB_FIRST, OnUpdateObjectVerbMenu)
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_CONVERT, OnUpdateObjectVerbMenu)
ON_COMMAND(ID_OLE_EDIT_CONVERT, OnEditConvert)
```

L'implementazione di tutti questi comandi è `COleDocument`, ovvero la classe base per il documento.

A questo punto, OCLIENT è un'applicazione contenitore OLE funzionale. È possibile inserire elementi di qualsiasi tipo (OLE1 o OLE 2). Poiché non viene implementato il codice necessario per abilitare l'attivazione sul posto, gli elementi vengono modificati in una finestra separata analoghe a con OLE1. Nella sezione successiva vengono illustrate le modifiche necessarie per consentire la modifica sul posto (operazione talvolta denominata "Modifica visiva").

## <a name="adding-visual-editing"></a>Aggiunta di "Modifica visiva"

Una delle funzionalità più interessanti di OLE è attivazione sul posto (o "Modifica visiva"). Questa funzionalità consente all'applicazione server di intervenire le parti dell'interfaccia utente del contenitore fornito un'interfaccia per la modifica più trasparente per l'utente. Per implementare l'attivazione sul posto a OCLIENT, alcune risorse speciali devono essere aggiunti, oltre a codice aggiuntivo. Queste risorse e il codice in genere vengono forniti dalla creazione guidata applicazioni, infatti, gran parte del codice in questo caso è stato preso in prestito direttamente da un'applicazione nuova creazione guidata applicazioni con supporto per i "Contenitori".

Prima di tutto, è necessario aggiungere una risorsa di menu da utilizzare quando è presente un elemento che è attivo sul posto. Copia risorsa IDR_OCLITYPE e rimuovendo tutto tranne i File e finestra popup, è possibile creare questa risorsa di menu extra in Visual C++. Tra i File e finestra popup per indicare la separazione dei gruppi sono inserite due barre di separazione (sarà simile: File di &#124; &#124; finestra). Per altre informazioni sul significato di tali separatori e come vengono uniti i menu di server e un contenitore, vedere [menu e risorse: unione di Menu](../mfc/menus-and-resources-menu-merging.md).

Dopo aver creato questi menu creati, è necessario che il framework di informazioni disponibili sugli utenti. Questa operazione viene eseguita chiamando `CDocTemplate::SetContainerInfo` per il modello di documento prima di aggiungerlo all'elenco di modelli di documento in InitInstance. Il nuovo codice per registrare il modello di documento è simile alla seguente:

```cpp
CDocTemplate* pTemplate = new CMultiDocTemplate(
    IDR_OLECLITYPE,
    RUNTIME_CLASS(CMainDoc),
    RUNTIME_CLASS(CMDIChildWnd), // standard MDI child frame
    RUNTIME_CLASS(CMainView));

pTemplate->SetContainerInfo(IDR_OLECLITYPE_INPLACE);

AddDocTemplate(pTemplate);
```

La risorsa IDR_OLECLITYPE_INPLACE è la risorsa posto speciale creata in Visual C++.

Per abilitare l'attivazione sul posto, esistono alcuni aspetti che è necessario modificare in entrambi i `CView` classe derivata (CMainView), nonché il `COleClientItem` classe (CRectItem) derivata. Tutte queste sostituzioni vengono fornite dalla creazione guidata applicazioni e la maggior parte dell'implementazione saranno proviene direttamente da un'applicazione di creazione guidata applicazione predefinita.

Nel primo passaggio di questa porta, l'attivazione sul posto è stata disabilitata interamente eseguendo l'override `COleClientItem::CanActivate`. Questa sostituzione deve essere rimossi per consentire l'attivazione sul posto. Inoltre, è stato passato NULL per tutte le chiamate a `DoVerb` (sono presenti due di esse) in quanto fornisce la visualizzazione è necessaria solo per l'attivazione sul posto. Per implementare completamente l'attivazione sul posto, è necessario passare la visualizzazione corretta nel `DoVerb` chiamare. È in una di queste chiamate `CMainView::OnInsertObject`:

```cpp
pItem->DoVerb(OLEIVERB_SHOW, this);
```

Un altro metodo è `CMainView::OnLButtonDblClk`:

```cpp
m_pSelection->DoVerb(OLEIVERB_PRIMARY, this);
```

È necessario eseguire l'override `COleClientItem::OnGetItemPosition`. Ciò indica al server in cui inserire la finestra relativa alla finestra del contenitore quando l'elemento è attivato sul posto. Per OCLIENT, l'implementazione è semplice:

```cpp
void CRectItem::OnGetItemPosition(CRect& rPosition)
{
    rPosition = m_rect;
}
```

La maggior parte dei server inoltre implementare il cosiddetto "in-place di ridimensionamento." In questo modo la finestra di server essere ridimensionato e spostato mentre l'utente sta modificando l'elemento. Il contenitore deve far parte di questa azione, poiché di sposta o si ridimensiona la finestra in genere influisce sulla posizione e dimensioni all'interno del documento contenitore stesso. L'implementazione per OCLIENT Sincronizza il rettangolo interno gestito dal m_rect con la nuova posizione e dimensione.

```cpp
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

A questo punto, è sufficiente codice per consentire a un elemento per essere attivato sul posto e gestire il ridimensionamento e lo spostamento dell'elemento quando è attiva, ma nessun codice consentirà all'utente di uscire dalla sessione di modifica. Anche se alcuni server fornirà questa funzionalità autonomamente se si gestisce il tasto ESC, è consigliabile che i contenitori offrono due modalità per disattivare un elemento: (1) facendo clic all'esterno dell'elemento e (2), premendo il tasto ESC.

Per il tasto ESC, aggiungere un tasto di scelta rapida in Visual C++ che esegue il mapping di VK_ESCAPE (tasto) a un comando, ID_CANCEL_EDIT viene aggiunto alle risorse. Il gestore per il comando seguente:

```cpp
// The following command handler provides the standard
// keyboard user interface to cancel an in-place
// editing session.void CMainView::OnCancelEdit()
{
    // Close any in-place active item on this view.
    COleClientItem* pActiveItem =
        GetDocument()->GetInPlaceActiveItem(this);
    if (pActiveItem != NULL)
        pActiveItem->Close();
    ASSERT(GetDocument()->GetInPlaceActiveItem(this) == NULL);
}
```

Per gestire il caso in cui l'utente fa clic all'esterno dell'elemento, aggiungere il codice seguente all'inizio della `CMainView::SetSelection`:

```cpp
if (pNewSel != m_pSelection || pNewSel == NULL)
{
    COleClientItem* pActiveItem =
        GetDocument()->GetInPlaceActiveItem(this);
    if (pActiveItem != NULL&& pActiveItem != pNewSel)
        pActiveItem->Close();
}
```

Quando un elemento è attivo sul posto, deve avere lo stato attivo. Per assicurarsi che questo è il caso la gestione di OnSetFocus in modo che lo stato attivo viene sempre trasferito per l'elemento attivo quando la visualizzazione riceve lo stato attivo:

```cpp
// Special handling of OnSetFocus and OnSize are required
// when an object is being edited in-place.
void CMainView::OnSetFocus(CWnd* pOldWnd)
{
    COleClientItem* pActiveItem =
        GetDocument()->GetInPlaceActiveItem(this);

    if (pActiveItem != NULL &&
        pActiveItem->GetItemState() == COleClientItem::activeUIState)
    {
        // need to set focus to this item if it is same view
        CWnd* pWnd = pActiveItem->GetInPlaceWindow();
        if (pWnd != NULL)
        {
            pWnd->SetFocus();   // don't call the base class
            return;
        }
    }

    CView::OnSetFocus(pOldWnd);
}
```

Quando si ridimensiona la visualizzazione, è necessario notificare l'elemento attivo che il rettangolo di ridimensionamento è stato modificato. A tale scopo è fornire un gestore per `OnSize`:

```cpp
void CMainView::OnSize(UINT nType, int cx, int cy)
{
    CView::OnSize(nType, cx, cy);
    COleClientItem* pActiveItem =
        GetDocument()->GetInPlaceActiveItem(this);
    if (pActiveItem != NULL)
        pActiveItem->SetItemRects();
}
```

## <a name="case-study-hiersvr-from-mfc-20"></a>Case Study: HIERSVR da MFC 2.0

[HIERSVR](../visual-cpp-samples.md) è stato anche incluso in MFC 2.0 e implementata con MFC/OLE1 OLE. In questa nota descrive brevemente i passaggi da cui questa applicazione è stata inizialmente convertita per utilizzare le classi MFC/OLE 2. Dopo che la porta iniziale è stata completata per illustrare meglio le classi MFC/OLE 2, sono state aggiunte numerose funzionalità. Queste funzionalità non trattate in questo contesto. vedere l'esempio per altre informazioni su queste funzionalità avanzate.

> [!NOTE]
> Errori del compilatore e descrizione dettagliata del processo è stato creato con Visual C++ 2.0. Percorsi e i messaggi di errore specifico sia stato modificato con Visual C++ 4.0, ma le informazioni di carattere generale rimangono valide.

## <a name="getting-it-up-and-running"></a>Renderla operativa e in esecuzione

L'approccio adottato per l'esempio HIERSVR a MFC/OLE di porta consiste nell'iniziare la compilazione, e correggendo gli errori del compilatore ovvio che genereranno. Se si accetta l'esempio HIERSVR dalla versione 2.0 di MFC e compilarlo in questa versione di MFC, troverai che non siano presenti molti errori da risolvere (anche se sono presenti più di con l'esempio OCLIENT). Di seguito vengono descritti gli errori nell'ordine in cui si verificano in genere.

## <a name="compile-and-fix-errors"></a>Compilazione e correggere gli errori

```Output
\hiersvr\hiersvr.cpp(83) : error C2039: 'RunEmbedded' : is not a member of 'COleTemplateServer'
```

Questo errore primo indica un problema molto più grande con la `InitInstance` funzione per i server. L'inizializzazione richiesta per un server OLE è probabilmente una delle principali modifiche sarà necessario apportare all'applicazione da MFC/OLE1 a eseguirlo. La cosa migliore da fare è controllare ciò che crea la creazione guidata applicazione per un server OLE e modificare il codice come appropriato. Ecco alcuni aspetti da tenere presenti:

È necessario inizializzare le librerie OLE, chiamare `AfxOleInit`

Chiamare SetServerInfo nell'oggetto del modello di documento per impostare gli handle delle risorse server e informazioni sulle classi di runtime che non è possibile impostare con il `CDocTemplate` costruttore.

Non visualizzare la finestra principale dell'applicazione se l'opzione /Embedding è presente nella riga di comando.

È necessario un **GUID** relative al documento. Si tratta di un identificatore univoco per il tipo del documento (128 bit). La creazione guidata applicazione creerà uno automaticamente, se si utilizza la tecnica descritta in questo caso di copia il nuovo codice da una nuova applicazione server generata dalla creazione guidata applicazioni, è possibile semplicemente "ruba" il GUID ottenuto dall'applicazione. In caso contrario, è possibile usare il GUIDGEN. Utilità file EXE nella directory BIN.

È necessario "connettersi" i `COleTemplateServer` oggetti al modello di documento chiamando `COleTemplateServer::ConnectTemplate`.

Aggiornare il Registro di sistema quando l'applicazione viene eseguito in modalità autonoma. In questo modo, se l'utente sposta il. EXE per l'applicazione, eseguirla nel nuovo percorso verrà aggiornato il database di registrazione del sistema Windows in modo che punti alla nuova posizione.

Dopo aver applicato tutte queste modifiche di base di ciò che crea per la creazione guidata applicazione `InitInstance`, il `InitInstance` (e relativi GUID) per HIERSVR sarà simile alla seguente:

```cpp
// this is the GUID for HIERSVR documents
static const GUID BASED_CODE clsid =
{ 0xA0A16360L, 0xC19B, 0x101A, { 0x8C, 0xE5, 0x00, 0xDD, 0x01, 0x11, 0x3F, 0x12 } };

/////////////////////////////////////////////////////////////////////////////
// COLEServerApp initialization

BOOL COLEServerApp::InitInstance()
{
    // OLE 2 initialization
    if (!AfxOleInit())
    {
        AfxMessageBox("Initialization of the OLE failed!");
        return FALSE;
    }

    // Standard initialization
    LoadStdProfileSettings();   // Load standard INI file options

    // Register document templates
    CDocTemplate* pDocTemplate;
    pDocTemplate = new CMultiDocTemplate(IDR_HIERSVRTYPE,
        RUNTIME_CLASS(CServerDoc),
        RUNTIME_CLASS(CMDIChildWnd),
        RUNTIME_CLASS(CServerView));
    pDocTemplate->SetServerInfo(IDR_HIERSVRTYPE_SRVR_EMB);
    AddDocTemplate(pDocTemplate);

    // create main MDI Frame window
    CMainFrame* pMainFrame = new CMainFrame;
    if (!pMainFrame->LoadFrame(IDR_MAINFRAME))
        return FALSE;
    m_pMainWnd = pMainFrame;

    SetDialogBkColor(); // gray look

    // enable file manager drag/drop and DDE Execute open
    m_pMainWnd->DragAcceptFiles();
    EnableShellOpen();

    m_server.ConnectTemplate(clsid, pDocTemplate, FALSE);
    COleTemplateServer::RegisterAll();

    // try to launch as an OLE server
    if (RunEmbedded())
    {
        // "short-circuit" initialization -- run as server!
        return TRUE;
    }
    m_server.UpdateRegistry();
    RegisterShellFileTypes();

    // not run as OLE server, so show the main window
    if (m_lpCmdLine[0] == '\0')
    {
        // create a new (empty) document
        OnFileNew();
    }
    else
    {
        // open an existing document
        OpenDocumentFile(m_lpCmdLine);
    }

    pMainFrame->ShowWindow(m_nCmdShow);
    pMainFrame->UpdateWindow();

    return TRUE;
}
```

Si noterà che il codice precedente fa riferimento a un nuovo ID di risorsa, IDR_HIERSVRTYPE_SRVR_EMB. Si tratta della risorsa di menu da utilizzare quando viene modificato un documento incorporato in un altro contenitore. In MFC/OLE1 le voci di menu specifiche per la modifica di un elemento incorporato sono state modificate in tempo reale. Utilizzando una struttura di menu completamente diverso quando si modifica un elemento incorporato invece di modificare un documento basato su file rende molto più semplice fornire interfacce utente diverse per queste due modalità distinte. Come si vedrà in seguito, una risorsa di menu completamente separata viene utilizzata durante la modifica di un oggetto incorporato sul posto.

Per creare questa risorsa, caricare lo script di risorsa in Visual C++ e copiare la risorsa di menu IDR_HIERSVRTYPE esistente. Rinominare la nuova risorsa IDR_HIERSVRTYPE_SRVR_EMB (questa è la stessa convenzione di denominazione che utilizza la creazione guidata applicazione). Successivamente modificare "Salvataggio di File" in "Aggiornamento del File"; assegnare al comando ID_FILE_UPDATE ID. Inoltre modificare "File Salva con nome" in "File Salva copia con nome"; assegnare al comando ID_FILE_SAVE_COPY_AS ID. Il framework fornisce l'implementazione di entrambi questi comandi.

```Output
\hiersvr\svritem.h(60) : error C2433: 'OLESTATUS' : 'virtual' not permitted on data declarations
\hiersvr\svritem.h(60) : error C2501: 'OLESTATUS' : missing decl-specifiers
\hiersvr\svritem.h(60) : error C2146: syntax error : missing ';' before identifier 'OnSetData'
\hiersvr\svritem.h(60) : error C2061: syntax error : identifier 'OLECLIPFORMAT'
\hiersvr\svritem.h(60) : error C2501: 'OnSetData' : missing decl-specifiers
```

Esistono una serie di errori risultanti dall'override del `OnSetData`, dal momento che si riferisce al **OLESTATUS** tipo. **OLESTATUS** era il metodo OLE1 restituiti errori. Questo è stato modificato da **HRESULT** OLE 2, sebbene MFC in genere converte un' **HRESULT** in un `COleException` che contiene l'errore. In questo caso particolare, l'override del `OnSetData` è più necessario, in modo che la cosa più semplice da fare è di rimuoverlo.

```Output
\hiersvr\svritem.cpp(30) : error C2660: 'COleServerItem::COleServerItem' : function does not take 1 parameters
```

Il `COleServerItem` costruttore accetta un parametro aggiuntivo 'BOOL'. Questo flag determina come viene eseguita la gestione della memoria nel `COleServerItem` oggetti. Impostandola su TRUE, il framework gestisce la gestione della memoria di questi oggetti, ovvero vengono eliminati quando non sono più necessari. Usa HIERSVR `CServerItem` (derivata da `COleServerItem`) gli oggetti nell'ambito dei propri dati nativi, pertanto è possibile impostare questo flag su FALSE. In questo modo HIERSVR determinare quando viene eliminato ogni elemento del server.

```Output
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class
```

Come indicato da questi errori, esistono alcune funzioni 'virtuali pure' che non sono stato eseguito l'override in CServerItem. Probabilmente ciò è dovuto al fatto che l'elenco di parametri OnDraw è stato modificato. Per correggere questo errore, modificare `CServerItem::OnDraw` come indicato di seguito (e alla dichiarazione in svritem.h):

```cpp
BOOL CServerItem::OnDraw(CDC* pDC, CSize& rSize)
{
    // request from OLE to draw node
    pDC->SetMapMode(MM_TEXT); // always in pixels
    return DoDraw(pDC, CPoint(0, 0), FALSE);
}
```

Il nuovo parametro è 'rsize.'. Ciò consente di inserire le dimensioni del disegno, se pratico. Questa dimensione deve essere **HIMETRIC**. In questo caso, non è pratico riempire questo valore, in modo che il framework chiama `OnGetExtent` per recuperare l'extent. Per funzionare, è possibile implementare `OnGetExtent`:

```cpp
BOOL CServerItem::OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize)
{
    if (dwDrawAspect != DVASPECT_CONTENT)
        return COleServerItem::OnGetExtent(dwDrawAspect, rSize);

    rSize = CalcNodeSize();
    return TRUE;
}
```

```Output
\hiersvr\svritem.cpp(104) : error C2065: 'm_rectBounds' : undeclared identifier
\hiersvr\svritem.cpp(104) : error C2228: left of '.SetRect' must have class/struct/union type
\hiersvr\svritem.cpp(106) : error C2664: 'void __pascal __far DPtoLP(struct ::tagPOINT __far *,
    int)__far const ' : cannot convert parameter 1 from 'int __far *' to 'struct ::tagPOINT __far *'
```

Nella funzione CServerItem::CalcNodeSize delle dimensioni dell'elemento viene convertita in **HIMETRIC** e archiviato in *m_rectBounds*. Il non documentati '*m_rectBounds*' appartenente `COleServerItem` non esiste (è stato sostituito parzialmente da *m_sizeExtent*, ma OLE 2 questo membro ha un utilizzo leggermente diverso rispetto a *m_rectBounds* nel OLE1). Anziché impostare il **HIMETRIC** size in questa variabile membro, si sarà restituirlo. Questo valore restituito viene utilizzato `OnGetExtent`, implementate in precedenza.

```cpp
CSize CServerItem::CalcNodeSize()
{
    CClientDC dcScreen(NULL);

    m_sizeNode = dcScreen.GetTextExtent(m_strDescription,
        m_strDescription.GetLength());
    m_sizeNode += CSize(CX_INSET * 2, CY_INSET * 2);

    // set suggested HIMETRIC size
    CSize size(m_sizeNode.cx, m_sizeNode.cy);
    dcScreen.SetMapMode(MM_HIMETRIC);
    dcScreen.DPtoLP(&size);
    return size;
}
```

Esegue l'override anche di CServerItem `COleServerItem::OnGetTextData`. Questa funzione è obsoleta in MFC/OLE e viene sostituita da un meccanismo diverso. La versione 3.0 di MFC dell'esempio OLE MFC [HIERSVR](../visual-cpp-samples.md) implementa questa funzionalità eseguendo l'override `COleServerItem::OnRenderFileData`. Questa funzionalità non è importante per la porta di base, in modo che è possibile rimuovere la sostituzione OnGetTextData.

Esistono più errori in svritem.cpp che non sono stati risolti. Non sono errori "reali", ovvero solo agli errori causati da errori precedenti.

```Output
\hiersvr\svrview.cpp(325) : error C2660: 'CopyToClipboard' : function does not take 2 parameters
```

`COleServerItem::CopyToClipboard` non supporta più il `bIncludeNative` flag. I dati nativi (i dati scritti dalla funzione di serializzazione dell'elemento server) viene sempre copiati, quindi si rimuove il primo parametro. Inoltre, `CopyToClipboard` genererà un'eccezione quando si verifica un errore anziché restituire FALSE. Modificare il codice per CServerView::OnEditCopy come indicato di seguito:

```cpp
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

Anche se si sono verificati ulteriori errori risultanti dalla compilazione della versione 2.0 di MFC di HIERSVR rispetto a per la stessa versione di OCLIENT, si sono verificati meno effettivamente le modifiche.

A questo punto HIERSVR verrà compilato e collegare e funziona come un server OLE, ma senza la funzionalità di modifica sul posto, che verrà implementata accanto.

## <a name="adding-visual-editing"></a>Aggiunta di "Modifica visiva"

Per aggiungere "Modifica visiva" (o attivazione sul posto) all'applicazione server, esistono solo alcuni aspetti, di che è necessario prestare attenzione:

- È necessario una risorsa di menu speciali da utilizzare quando l'elemento è attivo sul posto.

- Questa applicazione dispone di una barra degli strumenti, pertanto è necessario una barra degli strumenti con solo un subset della barra degli strumenti normale in modo che corrisponda i comandi di menu disponibili dal server (corrisponde alla risorsa di menu indicato in precedenza).

- È necessaria una nuova classe derivata da `COleIPFrameWnd` che fornisce l'interfaccia utente sul posto (in modo analogo alle CMainFrame, derivato da `CMDIFrameWnd`, fornisce l'interfaccia utente MDI).

- È necessario indicare al framework su queste risorse speciali e classi.

La risorsa di menu è possibile creare con facilità. Eseguire Visual C++, copiare la risorsa di menu IDR_HIERSVRTYPE a una risorsa di menu denominata IDR_HIERSVRTYPE_SRVR_IP. Modificare il menu di scelta in modo che solo il popup di menu Modifica e della Guida vengono lasciati. Aggiungere due separatori di menu tra i menu Modifica e la Guida (sarà simile: modificare &#124; &#124; Guida in linea). Per altre informazioni sul significato di tali separatori e come vengono uniti i menu di server e un contenitore, vedere [menu e risorse: unione di Menu](../mfc/menus-and-resources-menu-merging.md).

È possibile creare con facilità la bitmap della barra degli strumenti subset copiando quello di un'applicazione generata dalla creazione guidata applicazioni aggiornata con un'opzione "Server" selezionata. Questa bitmap può quindi essere importata in Visual C++. Assicurarsi di assegnare un ID di IDR_HIERSVRTYPE_SRVR_IP bitmap.

La classe derivata da `COleIPFrameWnd` può essere copiato da un'applicazione generata dalla creazione guidata applicazioni con supporto dei server. Copiare entrambi i file, IPFRAME. CPP e IPFRAME. H e aggiungerli al progetto. Assicurarsi che il `LoadBitmap` chiamata si intende IDR_HIERSVRTYPE_SRVR_IP, la bitmap creata nel passaggio precedente.

Ora che tutte le classi e nuove risorse vengono create, aggiungere il codice necessario in modo che il framework conosce questi (e riconosce che l'applicazione ora supporta la modifica sul posto). Questa operazione viene eseguita mediante l'aggiunta di alcuni altri parametri per il `SetServerInfo` chiamare il `InitInstance` (funzione):

```cpp
pDocTemplate->SetServerInfo(IDR_HIERSVRTYPE_SRVR_EMB,
    IDR_HIERSVRTYPE_SRVR_IP,
    RUNTIME_CLASS(CInPlaceFrame));
```

È ora pronto per l'esecuzione in locale in qualsiasi contenitore che supporta anche l'attivazione sul posto. Tuttavia, è un bug di minore entità ancora che si nascondono dentro nel codice. HIERSVR supporta un menu di scelta rapida, visualizzato quando l'utente preme il pulsante destro del mouse. Questo menu funziona quando HIERSVR è completamente aperto, ma non funziona durante la modifica di un incorporamento sul posto. Il motivo può essere bloccato a questa unica riga di codice in CServerView::OnRButtonDown:

```cpp
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,
    point.x,
    point.y,
    AfxGetApp()->m_pMainWnd);
```

Si noti che il riferimento a `AfxGetApp()->m_pMainWnd`. Quando il server è attivato sul posto, dispone di una finestra principale e m_pMainWnd è impostata, ma è in genere invisibile. Inoltre, fa riferimento questa finestra per la *principale* finestra dell'applicazione, aprire la finestra cornice MDI che viene visualizzato quando il server è completamente o eseguito in modalità autonoma. Non fa riferimento alla finestra frame attivo, ovvero quale quando posto attivato è una cornice di finestra derivato da `COleIPFrameWnd`. Per ottenere la finestra attiva corretta anche quando in modifica sul posto, questa versione di MFC aggiunge una nuova funzione, `AfxGetMainWnd`. In generale, è consigliabile usare questa funzione anziché `AfxGetApp()->m_pMainWnd`. Questo codice deve modificare come indicato di seguito:

```cpp
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,
    point.x,
    point.y,
    AfxGetMainWnd());
```

È ora disponibile un server OLE minima abilitato per l'attivazione sul posto funzionale. Tuttavia, esistono ancora numerose funzionalità disponibili con MFC/OLE 2 che non erano disponibili in MFC/OLE1. Vedere l'esempio HIERSVR per altre idee sulle funzionalità, che si potrebbe voler implementare. Alcune delle funzionalità che implementa HIERSVR sono elencati di seguito:

- Lo zoom avanti, per il comportamento di tipo WYSIWYG true riguarda il contenitore.

- Trascinamento e un formato degli Appunti personalizzati.

- Lo scorrimento della finestra del contenitore come la selezione viene modificato.

L'esempio HIERSVR nella versione 3.0 di MFC Usa anche una progettazione leggermente diversa per i relativi elementi di server. Ciò consente di risparmiare memoria e i collegamenti più flessibile. Con la versione 2.0 di HIERSVR ogni nodo nell'albero *è un* `COleServerItem`. `COleServerItem` esegue un po' più complicato rispetto a cui è strettamente necessaria per ciascuno di questi nodi, ma un `COleServerItem` è necessaria per ogni collegamento attivo. Ma nella maggior parte, esistono pochissimi collegamenti attivi in un determinato momento. Per rendere più efficiente, HIERSVR in questa versione di MFC separa il nodo dal `COleServerItem`. Include sia un CServerNode e un `CServerItem` classe. Il `CServerItem` (derivata da `COleServerItem`) viene creato solo se necessario. Una volta il contenitore (o contenitori) interrompere l'uso di tale collegamento specifico per quel determinato nodo, viene eliminato l'oggetto CServerItem associato il CServerNode. Questa progettazione è più efficiente e più flessibile. La flessibilità è disponibile in quando si lavora con più collegamenti di selezione. Nessuna di queste due versioni di HIERSVR supporta la selezione di più, ma sarebbe molto più semplice per aggiungere (e per supportare i collegamenti a tali selezioni) con la versione 3.0 di MFC di HIERSVR, poiché il `COleServerItem` è separato dai dati nativi.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
