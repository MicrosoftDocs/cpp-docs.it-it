---
description: 'Altre informazioni su: TN041: migrazione da MFC/OLE1 a MFC/OLE 2'
title: 'TN041: MFC-OLE1 migrazione a MFC-OLE 2'
ms.date: 10/18/2018
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
ms.openlocfilehash: 83bb9869d61ca9d2c92780fc6bed55ce3c3ff798
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215378"
---
# <a name="tn041-mfcole1-migration-to-mfcole-2"></a>TN041: migrazione da MFC/OLE1 a MFC/OLE 2

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

## <a name="general-issues-relating-to-migration"></a>Problemi generali relativi alla migrazione

Uno degli obiettivi di progettazione per le classi OLE 2 in MFC 2,5 (e versioni successive) era quello di conservare gran parte della stessa architettura applicata in MFC 2,0 per il supporto di OLE 1,0. Di conseguenza, molte delle stesse classi OLE in MFC 2,0 sono ancora presenti in questa versione di MFC ( `COleDocument` ,, `COleServerDoc` `COleClientItem` , `COleServerItem` ). Inoltre, molte delle API di queste classi sono esattamente uguali. Tuttavia, OLE 2 è notevolmente diverso da OLE 1,0, pertanto è possibile prevedere che alcuni dettagli siano stati modificati. Se si ha familiarità con il supporto OLE1 di MFC 2.0, è possibile usare il supporto 2,0 di MFC.

Se si sta prendendo un'applicazione MFC/OLE1 esistente e si aggiungono le funzionalità OLE 2, è necessario leggere prima questa nota. Questa nota descrive alcuni problemi generali che possono verificarsi durante il trasferimento della funzionalità OLE1 a MFC/OLE 2 e illustra i problemi che sono stati individuati durante il porting di due applicazioni incluse in MFC 2,0: gli esempi OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) e [HIERSVR](../overview/visual-cpp-samples.md).

## <a name="mfc-documentview-architecture-is-important"></a>L'architettura documento/visualizzazione MFC è importante

Se l'applicazione non utilizza l'architettura documento/visualizzazione di MFC e si desidera aggiungere il supporto di OLE 2 all'applicazione, è ora possibile passare a documento/visualizzazione. Molti dei vantaggi delle classi OLE 2 di MFC sono realizzati solo quando l'applicazione usa l'architettura e i componenti predefiniti di MFC.

L'implementazione di un server o di un contenitore senza utilizzare l'architettura MFC è possibile, ma non consigliata.

## <a name="use-mfc-implementation-instead-of-your-own"></a>Usare l'implementazione MFC anziché la propria

Classi "di implementazione incorporate" di MFC, ad esempio `CToolBar` , `CStatusBar` e `CScrollView` hanno codice del case speciale incorporato per il supporto di OLE 2. Pertanto, se è possibile utilizzare queste classi nell'applicazione, si trarrà vantaggio dal lavoro richiesto per renderle compatibili con OLE. Anche in questo caso, è possibile eseguire qui le classi "roll your own" per questi scopi, ma non è consigliabile. Se è necessario implementare una funzionalità simile, il codice sorgente MFC rappresenta un ottimo riferimento per la gestione di alcuni punti più sottili di OLE (soprattutto quando si tratta di attivazione sul posto).

## <a name="examine-the-mfc-sample-code"></a>Esaminare il codice di esempio MFC

Sono disponibili numerosi esempi di MFC che includono funzionalità OLE. Ognuna di queste applicazioni implementa OLE da un angolo diverso:

- [HIERSVR](../overview/visual-cpp-samples.md) È destinato principalmente all'uso come applicazione server. È stata inclusa in MFC 2,0 come applicazione MFC/OLE1 ed è stata trasferita a MFC/OLE 2 e quindi estesa in modo da implementare numerose funzionalità OLE disponibili in OLE 2.

- [OCLIENT](../overview/visual-cpp-samples.md) Si tratta di un'applicazione contenitore autonoma, destinata a illustrare molte delle funzionalità OLE dal punto di vista del contenitore. È stato anche trasferito da MFC 2,0 e quindi esteso per supportare molte delle funzionalità OLE più avanzate, ad esempio formati degli Appunti personalizzati e collegamenti ad elementi incorporati.

- [DRAWCLI](../overview/visual-cpp-samples.md) Questa applicazione implementa il supporto del contenitore OLE in modo analogo a OCLIENT, ad eccezione del fatto che viene eseguita all'interno del Framework di un programma di disegno orientato a oggetti esistente. Viene illustrato come implementare il supporto del contenitore OLE e integrarlo nell'applicazione esistente.

- [SUPERPAD](../overview/visual-cpp-samples.md) Questa applicazione, oltre a essere un'applicazione autonoma, è anche un server OLE. Il supporto del server implementato è piuttosto minimalista. Di particolare interesse è il modo in cui utilizza i servizi degli Appunti OLE per copiare i dati negli Appunti, ma utilizza la funzionalità incorporata nel controllo "modifica" di Windows per implementare la funzionalità incolla degli Appunti. Viene visualizzata una combinazione interessante di utilizzo tradizionale delle API Windows, oltre all'integrazione con le nuove API OLE.

Per ulteriori informazioni sulle applicazioni di esempio, vedere la Guida di esempio MFC.

## <a name="case-study-oclient-from-mfc-20"></a>Case Study: OCLIENT di MFC 2,0

Come illustrato in precedenza, [OCLIENT](../overview/visual-cpp-samples.md) è stato incluso in MFC 2,0 ed è stato implementato OLE con MFC/OLE1. Di seguito sono descritti i passaggi in base ai quali questa applicazione è stata convertita inizialmente per l'utilizzo delle classi MFC/OLE 2. Dopo aver completato la porta iniziale è stata aggiunta una serie di funzionalità per illustrare meglio le classi MFC/OLE. Queste funzionalità non verranno analizzate qui. Per ulteriori informazioni su queste funzionalità avanzate, vedere l'esempio stesso.

> [!NOTE]
> Gli errori del compilatore e il processo step-by-Step sono stati creati con Visual C++ 2,0. È possibile che i messaggi di errore e i percorsi specifici siano stati modificati con Visual C++ 4,0, ma le informazioni concettuali restano valide.

### <a name="getting-it-up-and-running"></a>Preparazione e esecuzione

L'approccio adottato per eseguire il porting dell'esempio OCLIENT a MFC/OLE consiste nell'iniziare compilando e correggendo gli errori del compilatore evidenti che comporteranno. Se si prende l'esempio OCLIENT da MFC 2,0 e lo si compila in questa versione di MFC, si noterà che non esistono molti errori da risolvere. Gli errori nell'ordine in cui si sono verificati sono descritti di seguito.

### <a name="compile-and-fix-errors"></a>Compilazione e correzione degli errori

```Output
\oclient\mainview.cpp(104) : error C2660: 'Draw' : function does not take 4 parameters
```

Il primo errore riguarda `COleClientItem::Draw` . In MFC/OLE1 sono stati accettati più parametri rispetto alla versione MFC/OLE. I parametri aggiuntivi erano spesso non necessari e in genere NULL (come in questo esempio). Con questa versione di MFC è possibile determinare automaticamente i valori per lpWBounds quando CDC in fase di disegno è un controller di dominio metafile. Inoltre, il parametro pFormatDC non è più necessario perché il Framework ne compilerà uno dal "attributo DC" del pDC passato. Per risolvere il problema, è sufficiente rimuovere i due parametri NULL aggiuntivi per la chiamata di progetto.

```Output
\oclient\mainview.cpp(273) : error C2065: 'OLE_MAXNAMESIZE' : undeclared identifier
\oclient\mainview.cpp(273) : error C2057: expected constant expression
\oclient\mainview.cpp(280) : error C2664: 'CreateLinkFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '
\oclient\mainview.cpp(286) : error C2664: 'CreateFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '
\oclient\mainview.cpp(288) : error C2664: 'CreateStaticFromClipboard' : cannot convert parameter 1 from 'char [1]' to 'enum ::tagOLERENDER '
```

Gli errori precedenti derivano dal fatto che tutte le `COleClientItem::CreateXXXX` funzioni in MFC/OLE1 richiedono che venga passato un nome univoco per rappresentare l'elemento. Questo è un requisito dell'API OLE sottostante. Questa operazione non è necessaria in MFC/OLE 2 poiché OLE 2 non utilizza DDE come meccanismo di comunicazione sottostante (il nome è stato utilizzato nelle conversazioni DDE). Per risolvere il problema, è possibile rimuovere la `CreateNewName` funzione e tutti i relativi riferimenti. È facile scoprire in che modo ogni funzione MFC/OLE è prevista in questa versione semplicemente posizionando il cursore sulla chiamata e premendo F1.

Un'altra area significativamente diversa è la gestione degli Appunti OLE 2. Con OLE1, sono state usate le API degli Appunti di Windows per interagire con gli Appunti. Con OLE 2 questa operazione viene eseguita con un meccanismo diverso. Le API MFC/OLE1 presumevano che gli appunti fossero aperti prima di copiare un `COleClientItem` oggetto negli Appunti. Questa operazione non è più necessaria e causerà l'esito negativo di tutte le operazioni degli Appunti MFC/OLE. Quando si modifica il codice per rimuovere le dipendenze `CreateNewName` , è necessario rimuovere anche il codice che apre e chiude gli Appunti di Windows.

```Output
\oclient\mainview.cpp(332) : error C2065: 'AfxOleInsertDialog' : undeclared identifier
\oclient\mainview.cpp(332) : error C2064: term does not evaluate to a function
\oclient\mainview.cpp(344) : error C2057: expected constant expression
\oclient\mainview.cpp(347) : error C2039: 'CreateNewObject' : is not a member of 'CRectItem'
```

Questi errori derivano dal `CMainView::OnInsertObject` gestore. La gestione del comando "Inserisci nuovo oggetto" è un'altra area in cui sono state apportate modifiche piuttosto diverse. In questo caso, è più semplice unire semplicemente l'implementazione originale con quella fornita da Creazione guidata applicazioni per una nuova applicazione contenitore OLE. In realtà, si tratta di una tecnica che è possibile applicare al porting di altre applicazioni. In MFC/OLE1 è stata visualizzata la finestra di dialogo "Inserisci oggetto" chiamando la `AfxOleInsertDialog` funzione. In questa versione è possibile costruire un `COleInsertObject` oggetto finestra di dialogo e chiamare `DoModal` . Inoltre, vengono creati nuovi elementi OLE con un **CLSID** anziché una stringa ClassName. Il risultato finale dovrebbe essere simile al seguente

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
> L'inserimento di un nuovo oggetto può essere diverso per l'applicazione:

È inoltre necessario includere \<afxodlgs.h> , che contiene la dichiarazione per la classe della `COleInsertObject` finestra di dialogo e le altre finestre di dialogo standard fornite da MFC.

```Output
\oclient\mainview.cpp(367) : error C2065: 'OLEVERB_PRIMARY' : undeclared identifier
\oclient\mainview.cpp(367) : error C2660: 'DoVerb' : function does not take 1 parameters
```

Questi errori sono causati dal fatto che alcune costanti OLE1 sono state modificate in OLE 2, anche se nel concetto sono uguali. In questo caso `OLEVERB_PRIMARY` è stato modificato in `OLEIVERB_PRIMARY` . In OLE1 e OLE 2 il verbo primario viene in genere eseguito da un contenitore quando l'utente fa doppio clic su un elemento.

Inoltre, `DoVerb` ora accetta un parametro aggiuntivo, ovvero un puntatore a una visualizzazione ( `CView` *). Questo parametro viene usato solo per implementare la modifica visiva o l'attivazione sul posto. Per il momento si imposta il parametro su NULL, perché in questo momento non si sta implementando questa funzionalità.

Per assicurarsi che il Framework non tenti mai l'attivazione sul posto, è necessario eseguire l'override `COleClientItem::CanActivate` come indicato di seguito:

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

In MFC/OLE1, `COleClientItem::GetBounds` e `SetBounds` sono stati usati per eseguire query e manipolare l'extent di un elemento (i `left` `top` membri e erano sempre zero). In MFC/OLE 2 questo è più direttamente supportato da `COleClientItem::GetExtent` e `SetExtent` , che occupano invece  una dimensione `CSize` .

Il codice per le nuove chiamate SetItemRectToServer e UpdateItemRectFromServer ha un aspetto simile al seguente:

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

Nelle chiamate API sincrone MFC/OLE1 da un contenitore a un server sono state *simulate*, perché in molti casi OLE1 era intrinsecamente asincrono. Era necessario verificare la presenza di una chiamata asincrona in attesa prima di elaborare i comandi dall'utente. MFC/OLE1 ha fornito la `COleClientItem::InWaitForRelease` funzione per questa operazione. In MFC/OLE 2 questo non è necessario, pertanto è possibile rimuovere l'override di OnCommand in CMainFrame tutti insieme.

A questo punto, OCLIENT verrà compilato e collegato.

### <a name="other-necessary-changes"></a>Altre modifiche necessarie

Tuttavia, l'esecuzione di OCLIENT non può essere eseguita in pochi aspetti. È preferibile risolvere questi problemi adesso anziché più tardi.

Per prima cosa, è necessario inizializzare le librerie OLE. Questa operazione viene eseguita chiamando `AfxOleInit` da `InitInstance` :

```cpp
if (!AfxOleInit())
{
    AfxMessageBox("Failed to initialize OLE libraries");
    return FALSE;
}
```

È inoltre consigliabile verificare la presenza di funzioni virtuali per le modifiche all'elenco di parametri. Una di queste funzioni è `COleClientItem::OnChange` , sottoposta a override in ogni applicazione contenitore MFC/OLE. Esaminando la Guida in linea, si noterà che è stato aggiunto un'DWORD dwParam ' aggiuntivo. Il nuovo CRectItem:: OnChange è simile al seguente:

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

In MFC/OLE1, le applicazioni contenitore derivano la classe Document da `COleClientDoc` . In MFC/OLE 2 questa classe è stata rimossa e sostituita da `COleDocument` . questa nuova organizzazione rende più semplice la compilazione di applicazioni contenitore/server. È disponibile un **#define** mappato `COleClientDoc` a `COleDocument` per semplificare il porting delle applicazioni MFC/OLE1 a MFC/OLE 2, ad esempio OCLIENT. Una delle funzionalità non fornite da fornita `COleDocument` da `COleClientDoc` è rappresentata dalle voci della mappa messaggi del comando standard. Questa operazione viene eseguita in modo che le applicazioni server, che usano `COleDocument` (indirettamente), non portino il sovraccarico di questi gestori di comandi, a meno che non siano un'applicazione contenitore/server. È necessario aggiungere le seguenti voci alla mappa messaggi CMainDoc:

```cpp
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE, OnUpdatePasteMenu)
ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE_LINK, OnUpdatePasteLinkMenu)
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_LINKS, OnUpdateEditLinksMenu)
ON_COMMAND(ID_OLE_EDIT_LINKS, COleDocument::OnEditLinks)
ON_UPDATE_COMMAND_UI(ID_OLE_VERB_FIRST, OnUpdateObjectVerbMenu)
ON_UPDATE_COMMAND_UI(ID_OLE_EDIT_CONVERT, OnUpdateObjectVerbMenu)
ON_COMMAND(ID_OLE_EDIT_CONVERT, OnEditConvert)
```

L'implementazione di tutti questi comandi si trova in `COleDocument` , ovvero la classe di base per il documento.

A questo punto, OCLIENT è un'applicazione contenitore OLE funzionale. È possibile inserire elementi di qualsiasi tipo (OLE1 o OLE 2). Poiché il codice necessario per abilitare l'attivazione sul posto non è implementato, gli elementi vengono modificati in una finestra separata in modo analogo a OLE1. Nella sezione successiva vengono illustrate le modifiche necessarie per abilitare la modifica sul posto (talvolta denominata "modifica visiva").

### <a name="adding-visual-editing"></a>Aggiunta della "modifica visiva"

Una delle funzionalità più interessanti di OLE è l'attivazione sul posto (o la "modifica visiva"). Questa funzionalità consente all'applicazione server di assumere parti dell'interfaccia utente del contenitore per fornire un'interfaccia di modifica più trasparente per l'utente. Per implementare l'attivazione sul posto in OCLIENT, è necessario aggiungere alcune risorse speciali, oltre ad altri codici. Queste risorse e il codice vengono in genere forniti da Creazione guidata applicazioni: in realtà, gran parte del codice è stato preso in prestito direttamente da una nuova applicazione creazione guidata applicazioni con supporto "container".

Prima di tutto, è necessario aggiungere una risorsa di menu da usare quando è presente un elemento attivo sul posto. È possibile creare questa risorsa di menu aggiuntiva in Visual C++ copiando la risorsa IDR_OCLITYPE e rimuovendo tutti i popup, tranne il file e la finestra. Due barre dei separatori vengono inserite tra i popup del file e della finestra per indicare la separazione dei gruppi (dovrebbe essere simile a: file &#124;&#124; finestra). Per ulteriori informazioni sul significato di questi separatori e sul modo in cui vengono uniti i menu Server e contenitore, vedere menu [e risorse: Unione di menu](../mfc/menus-and-resources-menu-merging.md).

Una volta creati questi menu, è necessario consentirne la conoscenza da parte del Framework. Questa operazione viene eseguita chiamando `CDocTemplate::SetContainerInfo` per il modello di documento prima di aggiungerla all'elenco dei modelli di documento in InitInstance. Il nuovo codice per registrare il modello di documento ha un aspetto simile al seguente:

```cpp
CDocTemplate* pTemplate = new CMultiDocTemplate(
    IDR_OLECLITYPE,
    RUNTIME_CLASS(CMainDoc),
    RUNTIME_CLASS(CMDIChildWnd), // standard MDI child frame
    RUNTIME_CLASS(CMainView));

pTemplate->SetContainerInfo(IDR_OLECLITYPE_INPLACE);

AddDocTemplate(pTemplate);
```

La risorsa IDR_OLECLITYPE_INPLACE è la risorsa sul posto speciale creata in Visual C++.

Per abilitare l'attivazione sul posto, è necessario modificare la `CView` classe derivata (CMainView), nonché la `COleClientItem` classe derivata (CRectItem). Tutte queste sostituzioni vengono fornite da Creazione guidata applicazioni e la maggior parte dell'implementazione proviene direttamente da un'applicazione creazione guidata applicazioni predefinita.

Nel primo passaggio di questa porta, l'attivazione sul posto è stata disabilitata interamente eseguendo l'override di `COleClientItem::CanActivate` . Questa sostituzione deve essere rimossa per consentire l'attivazione sul posto. Inoltre, il valore NULL è stato passato a tutte le chiamate a `DoVerb` (sono disponibili due) perché la visualizzazione era necessaria solo per l'attivazione sul posto. Per implementare completamente l'attivazione sul posto, è necessario passare la visualizzazione corretta nella `DoVerb` chiamata. Una di queste chiamate è in `CMainView::OnInsertObject` :

```cpp
pItem->DoVerb(OLEIVERB_SHOW, this);
```

Un altro si trova in `CMainView::OnLButtonDblClk` :

```cpp
m_pSelection->DoVerb(OLEIVERB_PRIMARY, this);
```

È necessario eseguire l'override di `COleClientItem::OnGetItemPosition` . Indica al server dove posizionare la finestra relativa alla finestra del contenitore quando l'elemento è attivato sul posto. Per OCLIENT, l'implementazione è semplice:

```cpp
void CRectItem::OnGetItemPosition(CRect& rPosition)
{
    rPosition = m_rect;
}
```

La maggior parte dei server implementa anche il cosiddetto "ridimensionamento sul posto". In questo modo è possibile ridimensionare e spostare la finestra del server mentre l'utente sta modificando l'elemento. Il contenitore deve partecipare a questa azione, perché lo stato di trasferimento o ridimensionamento della finestra di solito influiscono sulla posizione e sulle dimensioni all'interno del documento del contenitore stesso. L'implementazione per OCLIENT sincronizza il rettangolo interno gestito da m_rect con la nuova posizione e le dimensioni.

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

A questo punto, è disponibile un codice sufficiente per consentire l'attivazione sul posto di un elemento e per gestire il dimensionamento e lo spostamento dell'elemento quando è attivo, ma nessun codice consentirà all'utente di uscire dalla sessione di modifica. Sebbene alcuni server forniscano questa funzionalità gestendo la chiave di escape, è consigliabile che i contenitori forniscano due modi per disattivare un elemento: (1) facendo clic all'esterno dell'elemento e (2) premendo il tasto ESC.

Per il tasto ESCAPE, aggiungere un acceleratore con Visual C++ che esegue il mapping della chiave VK_ESCAPE a un comando, ID_CANCEL_EDIT viene aggiunto alle risorse. Il gestore per questo comando segue:

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

Per gestire il caso in cui l'utente fa clic all'esterno dell'elemento, aggiungere il codice seguente all'inizio di `CMainView::SetSelection` :

```cpp
if (pNewSel != m_pSelection || pNewSel == NULL)
{
    COleClientItem* pActiveItem =
        GetDocument()->GetInPlaceActiveItem(this);
    if (pActiveItem != NULL&& pActiveItem != pNewSel)
        pActiveItem->Close();
}
```

Quando un elemento è attivo sul posto, deve avere lo stato attivo. Per assicurarsi che questo sia il caso in cui si gestisca OnSetFocus in modo che lo stato attivo venga sempre trasferito all'elemento attivo quando la visualizzazione riceve lo stato attivo:

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

Quando la vista viene ridimensionata, è necessario notificare all'elemento attivo che il rettangolo di ritaglio è stato modificato. A tale scopo, è necessario fornire un gestore per `OnSize` :

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

## <a name="case-study-hiersvr-from-mfc-20"></a>Case Study: HIERSVR di MFC 2,0

[HIERSVR](../overview/visual-cpp-samples.md) è stato incluso anche in MFC 2,0 ed è stato implementato OLE con MFC/OLE1. Questa nota descrive brevemente i passaggi in base ai quali questa applicazione è stata inizialmente convertita in modo da utilizzare le classi MFC/OLE 2. Dopo aver completato la porta iniziale è stata aggiunta una serie di funzionalità per illustrare meglio le classi MFC/OLE 2. Queste funzionalità non verranno analizzate qui. Per ulteriori informazioni su queste funzionalità avanzate, vedere l'esempio stesso.

> [!NOTE]
> Gli errori del compilatore e il processo step-by-Step sono stati creati con Visual C++ 2,0. È possibile che i messaggi di errore e i percorsi specifici siano stati modificati con Visual C++ 4,0, ma le informazioni concettuali restano valide.

### <a name="getting-it-up-and-running"></a>Preparazione e esecuzione

L'approccio adottato per eseguire il porting dell'esempio HIERSVR a MFC/OLE consiste nell'iniziare compilando e correggendo gli errori del compilatore evidenti che comporteranno. Se si prende l'esempio HIERSVR da MFC 2,0 e lo si compila in questa versione di MFC, si noterà che non ci sono molti errori da risolvere (anche se è presente più di un esempio OCLIENT). Gli errori nell'ordine in cui si verificano di solito sono descritti di seguito.

### <a name="compile-and-fix-errors"></a>Compilazione e correzione degli errori

```Output
\hiersvr\hiersvr.cpp(83) : error C2039: 'RunEmbedded' : is not a member of 'COleTemplateServer'
```

Il primo errore indica un problema molto più grande con la `InitInstance` funzione per i server. L'inizializzazione necessaria per un server OLE è probabilmente una delle modifiche più importanti che è necessario apportare all'applicazione MFC/OLE1 per l'esecuzione. La cosa migliore da fare è esaminare cosa crea creazione guidata applicazioni per un server OLE e modificare il codice nel modo appropriato. Di seguito sono riportati alcuni aspetti da tenere presenti:

È necessario inizializzare le librerie OLE chiamando `AfxOleInit`

Chiamare SetServerInfo sull'oggetto modello di documento per impostare gli handle delle risorse del server e le informazioni sulle classi di runtime che non è possibile impostare con il `CDocTemplate` costruttore.

Non visualizzare la finestra principale dell'applicazione se l'opzione/Embedding è presente nella riga di comando.

È necessario un **GUID** per il documento. Si tratta di un identificatore univoco per il tipo di documento (128 bit). Creazione guidata applicazioni ne creerà uno. Se si usa la tecnica descritta di seguito per copiare il nuovo codice da una nuova applicazione server generata da Creazione guidata applicazioni, è possibile semplicemente "rubare" il GUID da tale applicazione. In caso contrario, è possibile utilizzare l'utilità GUIDGEN.EXE nella directory BIN.

È necessario connettere l' `COleTemplateServer` oggetto al modello di documento chiamando `COleTemplateServer::ConnectTemplate` .

Aggiornare il registro di sistema quando l'applicazione viene eseguita autonomamente. In questo modo, se l'utente sposta. EXE per l'applicazione, eseguendola dalla nuova posizione, aggiornerà il database di registrazione del sistema di Windows in modo che punti al nuovo percorso.

Dopo aver applicato tutte queste modifiche in base a ciò che creazione guidata applicazioni crea per `InitInstance` , il `InitInstance` (e il GUID correlato) per HIERSVR deve essere letto come segue:

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

Si noterà che il codice precedente fa riferimento a un nuovo ID risorsa IDR_HIERSVRTYPE_SRVR_EMB. Si tratta della risorsa di menu da usare quando viene modificato un documento incorporato in un altro contenitore. In MFC/OLE1 le voci di menu specifiche per la modifica di un elemento incorporato sono state modificate in tempo reale. L'uso di una struttura di menu completamente diversa quando si modifica un elemento incorporato anziché modificare un documento basato su file rende molto più semplice fornire interfacce utente diverse per queste due modalità separate. Come si vedrà in seguito, quando si modifica un oggetto incorporato sul posto viene usata una risorsa di menu completamente separata.

Per creare questa risorsa, caricare lo script di risorsa in Visual C++ e copiare la risorsa di menu IDR_HIERSVRTYPE esistente. Rinominare la nuova risorsa in IDR_HIERSVRTYPE_SRVR_EMB (si tratta della stessa convenzione di denominazione utilizzata da Creazione guidata applicazioni). Modificare quindi "Salva file" in "aggiornamento file"; assegnare all'ID di comando ID_FILE_UPDATE. Modificare anche "file Salva con nome" in "file Salva copia con nome"; assegnare all'ID di comando ID_FILE_SAVE_COPY_AS. Il Framework fornisce l'implementazione di entrambi i comandi.

```Output
\hiersvr\svritem.h(60) : error C2433: 'OLESTATUS' : 'virtual' not permitted on data declarations
\hiersvr\svritem.h(60) : error C2501: 'OLESTATUS' : missing decl-specifiers
\hiersvr\svritem.h(60) : error C2146: syntax error : missing ';' before identifier 'OnSetData'
\hiersvr\svritem.h(60) : error C2061: syntax error : identifier 'OLECLIPFORMAT'
\hiersvr\svritem.h(60) : error C2501: 'OnSetData' : missing decl-specifiers
```

Sono stati generati numerosi errori dall'override di `OnSetData` , poiché si riferisce al tipo **OleStatus** . **OleStatus** è stato il modo in cui OLE1 ha restituito errori. Questa operazione è stata modificata in **HRESULT** in OLE 2, sebbene in genere MFC converta un valore **HRESULT** in un oggetto `COleException` che contiene l'errore. In questo caso specifico, l'override di non `OnSetData` è più necessario, quindi la cosa più semplice consiste nel rimuoverlo.

```Output
\hiersvr\svritem.cpp(30) : error C2660: 'COleServerItem::COleServerItem' : function does not take 1 parameters
```

Il `COleServerItem` costruttore accetta un parametro ' bool ' aggiuntivo. Questo flag determina il modo in cui la gestione della memoria viene eseguita sugli `COleServerItem` oggetti. Impostando il valore su TRUE, il Framework gestisce la gestione della memoria di questi oggetti, eliminando tali oggetti quando non sono più necessari. HIERSVR USA `CServerItem` gli oggetti (derivati da `COleServerItem` ) come parte dei dati nativi, quindi questo flag verrà impostato su false. Ciò consente a HIERSVR di determinare quando ogni elemento del server viene eliminato.

```Output
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class
\hiersvr\svritem.cpp(44) : error C2259: 'CServerItem' : illegal attempt to instantiate abstract class
```

Poiché questi errori implicano, esistono alcune funzioni ' pure-Virtual ' che non sono state sottoposte a override in CServerItem. Probabilmente ciò è dovuto al fatto che l'elenco di parametri di onpare è stato modificato. Per correggere l'errore, modificare `CServerItem::OnDraw` come segue (così come la dichiarazione in svritem. h):

```cpp
BOOL CServerItem::OnDraw(CDC* pDC, CSize& rSize)
{
    // request from OLE to draw node
    pDC->SetMapMode(MM_TEXT); // always in pixels
    return DoDraw(pDC, CPoint(0, 0), FALSE);
}
```

Il nuovo parametro è' rsize .'. In questo modo è possibile specificare le dimensioni del disegno, se opportuno. Questa dimensione deve essere in **HIMETRIC**. In questo caso, non è consigliabile inserire questo valore in, in modo che il Framework chiami `OnGetExtent` per recuperare l'extent. Per eseguire questa operazione, è necessario implementare `OnGetExtent` :

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

Nella funzione CServerItem:: CalcNodeSize le dimensioni dell'elemento vengono convertite in **HIMETRIC** e archiviate in *m_rectBounds*. Il membro '*m_rectBounds*' non documentato di `COleServerItem` non esiste (è stato sostituito parzialmente da *M_SIZEEXTENT*, ma in OLE 2 questo membro ha un utilizzo leggermente diverso rispetto a quello di *m_rectBounds* in OLE1). Anziché impostare la dimensione **HIMETRIC** in questa variabile membro, verrà restituita. Questo valore restituito viene usato in `OnGetExtent` , implementato in precedenza.

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

CServerItem esegue anche l'override di `COleServerItem::OnGetTextData` . Questa funzione è obsoleta in MFC/OLE e viene sostituita da un meccanismo diverso. La versione MFC 3,0 dell'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md) implementa questa funzionalità eseguendo l'override di `COleServerItem::OnRenderFileData` . Questa funzionalità non è importante per questa porta di base, pertanto è possibile rimuovere l'override di OnGetTextData.

In svritem. cpp sono presenti molti più errori che non sono stati risolti. Non sono errori "reali", ma solo gli errori causati da errori precedenti.

```Output
\hiersvr\svrview.cpp(325) : error C2660: 'CopyToClipboard' : function does not take 2 parameters
```

`COleServerItem::CopyToClipboard` il flag non è più supportato `bIncludeNative` . I dati nativi, ovvero i dati scritti dalla funzione Serialize dell'elemento server, vengono sempre copiati, quindi si rimuove il primo parametro. `CopyToClipboard`Genera inoltre un'eccezione quando si verifica un errore anziché restituire false. Modificare il codice per CServerView:: OnEditCopy come indicato di seguito:

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

Sebbene si siano verificati altri errori derivanti dalla compilazione della versione MFC 2,0 di HIERSVR rispetto alla versione di OCLIENT, sono state effettivamente rilevate meno modifiche.

A questo punto, HIERSVR verrà compilato e collegato e funzionerà come server OLE, ma senza la funzionalità di modifica sul posto, che verrà implementata successivamente.

### <a name="adding-visual-editing"></a>Aggiunta della "modifica visiva"

Per aggiungere "modifica visiva" (o attivazione sul posto) a questa applicazione server, è necessario gestire solo alcune operazioni:

- È necessaria una risorsa di menu speciale da usare quando l'elemento è attivo sul posto.

- Questa applicazione dispone di una barra degli strumenti, quindi è necessario disporre di una barra degli strumenti con solo un subset della barra degli strumenti normale in modo che corrisponda ai comandi di menu disponibili nel server (corrisponde alla risorsa di menu indicata in precedenza).

- È necessaria una nuova classe derivata da che fornisce l'interfaccia utente sul `COleIPFrameWnd` posto (molto simile a CMainFrame, derivata da `CMDIFrameWnd` , che fornisce l'interfaccia utente MDI).

- È necessario indicare al Framework le risorse e le classi speciali.

La risorsa di menu è facile da creare. Eseguire Visual C++, copiare la risorsa di menu IDR_HIERSVRTYPE in una risorsa di menu denominata IDR_HIERSVRTYPE_SRVR_IP. Modificare il menu in modo da lasciare solo i popup dei menu modifica e guida. Aggiungere due separatori al menu tra i menu modifica e guida (dovrebbe avere un aspetto simile al seguente: Edit &#124;&#124; Help). Per ulteriori informazioni sul significato di questi separatori e sul modo in cui vengono uniti i menu del server e del contenitore, vedere menu [e risorse: Unione di menu](../mfc/menus-and-resources-menu-merging.md).

È possibile creare facilmente la bitmap per la barra degli strumenti del subset copiando quella da una nuova applicazione creazione guidata applicazioni generata con un'opzione "Server" selezionata. Questa bitmap può quindi essere importata in Visual C++. Assicurarsi di assegnare alla bitmap un ID di IDR_HIERSVRTYPE_SRVR_IP.

La classe derivata da `COleIPFrameWnd` può essere copiata da un'applicazione generata da Creazione guidata applicazioni anche con supporto server. Copiare entrambi i file, IPFRAME. CPP e IPFRAME. H e aggiungerli al progetto. Assicurarsi che la `LoadBitmap` chiamata faccia riferimento a IDR_HIERSVRTYPE_SRVR_IP, ovvero la bitmap creata nel passaggio precedente.

Ora che sono state create tutte le nuove risorse e nuove classi, aggiungere il codice necessario in modo che il Framework sia in grado di conoscerle (e sappia che questa applicazione supporta ora la modifica sul posto). Questa operazione viene eseguita aggiungendo altri parametri alla `SetServerInfo` chiamata nella `InitInstance` funzione:

```cpp
pDocTemplate->SetServerInfo(IDR_HIERSVRTYPE_SRVR_EMB,
    IDR_HIERSVRTYPE_SRVR_IP,
    RUNTIME_CLASS(CInPlaceFrame));
```

È ora possibile eseguire sul posto in qualsiasi contenitore che supporta anche l'attivazione sul posto. Tuttavia, esiste un bug secondario ancora in agguato nel codice. HIERSVR supporta un menu di scelta rapida, visualizzato quando l'utente preme il pulsante destro del mouse. Questo menu funziona quando HIERSVR è completamente aperto, ma non funziona durante la modifica di un incorporamento sul posto. Il motivo può essere aggiunto a questa singola riga di codice in CServerView:: OnRButtonDown:

```cpp
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,
    point.x,
    point.y,
    AfxGetApp()->m_pMainWnd);
```

Si noti il riferimento a `AfxGetApp()->m_pMainWnd` . Quando il server viene attivato sul posto, dispone di una finestra principale e m_pMainWnd è impostato, ma è in genere invisibile. Inoltre, questa finestra si riferisce alla finestra *principale* dell'applicazione, alla finestra cornice MDI visualizzata quando il server è completamente aperto o viene eseguito autonomamente. Non fa riferimento alla finestra cornice attiva che, quando attivata sul posto, è una finestra cornice derivata da `COleIPFrameWnd` . Per ottenere la finestra attiva corretta anche durante la modifica sul posto, questa versione di MFC aggiunge una nuova funzione, `AfxGetMainWnd` . In genere, è consigliabile usare questa funzione anziché `AfxGetApp()->m_pMainWnd` . Questo codice deve essere modificato come segue:

```cpp
pMenu->TrackPopupMenu(TPM_CENTERALIGN | TPM_RIGHTBUTTON,
    point.x,
    point.y,
    AfxGetMainWnd());
```

A questo punto si dispone di un server OLE abilitato in modo minimo per l'attivazione sul posto funzionale. Esistono tuttavia molte funzionalità disponibili con MFC/OLE 2 che non erano disponibili in MFC/OLE1. Vedere l'esempio HIERSVR per altre idee sulle funzionalità che è opportuno implementare. Di seguito sono elencate alcune delle funzionalità implementate da HIERSVR:

- Zoom, per il vero comportamento WYSIWYG rispetto al contenitore.

- Trascinamento della selezione e formato degli Appunti personalizzato.

- Scorrimento della finestra del contenitore durante la modifica della selezione.

L'esempio HIERSVR in MFC 3,0 USA anche una progettazione leggermente diversa per gli elementi del server. Questo consente di conservare la memoria e rende più flessibili i collegamenti. Con la versione 2,0 di HIERSVR ogni nodo della struttura ad albero *è-a* `COleServerItem` . `COleServerItem` comporta un sovraccarico maggiore rispetto a quanto è strettamente necessario per ognuno di questi nodi, ma `COleServerItem` per ogni collegamento attivo è necessario un oggetto. Tuttavia, nella maggior parte dei casi, vi sono pochissimi collegamenti attivi in un determinato momento. Per rendere questa operazione più efficiente, il HIERSVR in questa versione di MFC separa il nodo da `COleServerItem` . Dispone sia di CServerNode che di una `CServerItem` classe. `CServerItem`(Derivato da `COleServerItem` ) viene creato solo se necessario. Quando il contenitore (o i contenitori) smette di usare quel particolare collegamento a quel particolare nodo, viene eliminato l'oggetto CServerItem associato al CServerNode. Questa progettazione è più efficiente e flessibile. La sua flessibilità si presenta quando si gestiscono più collegamenti di selezione. Nessuna di queste due versioni di HIERSVR supporta la selezione multipla, ma sarebbe molto più semplice aggiungere (e per supportare collegamenti a tali selezioni) con la versione MFC 3,0 di HIERSVR, poiché `COleServerItem` è separato dai dati nativi.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
