---
title: Classe COleControlContainer
ms.date: 11/04/2016
f1_keywords:
- COleControlContainer
- AFXOCC/COleControlContainer
- AFXOCC/COleControlContainer::COleControlContainer
- AFXOCC/COleControlContainer::AttachControlSite
- AFXOCC/COleControlContainer::BroadcastAmbientPropertyChange
- AFXOCC/COleControlContainer::CheckDlgButton
- AFXOCC/COleControlContainer::CheckRadioButton
- AFXOCC/COleControlContainer::CreateControl
- AFXOCC/COleControlContainer::CreateOleFont
- AFXOCC/COleControlContainer::FindItem
- AFXOCC/COleControlContainer::FreezeAllEvents
- AFXOCC/COleControlContainer::GetAmbientProp
- AFXOCC/COleControlContainer::GetDlgItem
- AFXOCC/COleControlContainer::GetDlgItemInt
- AFXOCC/COleControlContainer::GetDlgItemText
- AFXOCC/COleControlContainer::HandleSetFocus
- AFXOCC/COleControlContainer::HandleWindowlessMessage
- AFXOCC/COleControlContainer::IsDlgButtonChecked
- AFXOCC/COleControlContainer::OnPaint
- AFXOCC/COleControlContainer::OnUIActivate
- AFXOCC/COleControlContainer::OnUIDeactivate
- AFXOCC/COleControlContainer::ScrollChildren
- AFXOCC/COleControlContainer::SendDlgItemMessage
- AFXOCC/COleControlContainer::SetDlgItemInt
- AFXOCC/COleControlContainer::SetDlgItemText
- AFXOCC/COleControlContainer::m_crBack
- AFXOCC/COleControlContainer::m_crFore
- AFXOCC/COleControlContainer::m_listSitesOrWnds
- AFXOCC/COleControlContainer::m_nWindowlessControls
- AFXOCC/COleControlContainer::m_pOleFont
- AFXOCC/COleControlContainer::m_pSiteCapture
- AFXOCC/COleControlContainer::m_pSiteFocus
- AFXOCC/COleControlContainer::m_pSiteUIActive
- AFXOCC/COleControlContainer::m_pWnd
- AFXOCC/COleControlContainer::m_siteMap
helpviewer_keywords:
- COleControlContainer [MFC], COleControlContainer
- COleControlContainer [MFC], AttachControlSite
- COleControlContainer [MFC], BroadcastAmbientPropertyChange
- COleControlContainer [MFC], CheckDlgButton
- COleControlContainer [MFC], CheckRadioButton
- COleControlContainer [MFC], CreateControl
- COleControlContainer [MFC], CreateOleFont
- COleControlContainer [MFC], FindItem
- COleControlContainer [MFC], FreezeAllEvents
- COleControlContainer [MFC], GetAmbientProp
- COleControlContainer [MFC], GetDlgItem
- COleControlContainer [MFC], GetDlgItemInt
- COleControlContainer [MFC], GetDlgItemText
- COleControlContainer [MFC], HandleSetFocus
- COleControlContainer [MFC], HandleWindowlessMessage
- COleControlContainer [MFC], IsDlgButtonChecked
- COleControlContainer [MFC], OnPaint
- COleControlContainer [MFC], OnUIActivate
- COleControlContainer [MFC], OnUIDeactivate
- COleControlContainer [MFC], ScrollChildren
- COleControlContainer [MFC], SendDlgItemMessage
- COleControlContainer [MFC], SetDlgItemInt
- COleControlContainer [MFC], SetDlgItemText
- COleControlContainer [MFC], m_crBack
- COleControlContainer [MFC], m_crFore
- COleControlContainer [MFC], m_listSitesOrWnds
- COleControlContainer [MFC], m_nWindowlessControls
- COleControlContainer [MFC], m_pOleFont
- COleControlContainer [MFC], m_pSiteCapture
- COleControlContainer [MFC], m_pSiteFocus
- COleControlContainer [MFC], m_pSiteUIActive
- COleControlContainer [MFC], m_pWnd
- COleControlContainer [MFC], m_siteMap
ms.assetid: f7ce9246-0fb7-4f07-a83a-6c2390d0fdf8
ms.openlocfilehash: 2c2c97090fc8255c06e1678a377fe2dcc968ffd2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214113"
---
# <a name="colecontrolcontainer-class"></a>Classe COleControlContainer

Funge da contenitore di controlli per i controlli ActiveX.

## <a name="syntax"></a>Sintassi

```
class COleControlContainer : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleControlContainer:: COleControlContainer](#colecontrolcontainer)|Costruisce un oggetto `COleControlContainer`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleControlContainer:: AttachControlSite](#attachcontrolsite)|Crea un sito di controllo, ospitato dal contenitore.|
|[COleControlContainer:: BroadcastAmbientPropertyChange](#broadcastambientpropertychange)|Informa tutti i controlli ospitati che una proprietà di ambiente è stata modificata.|
|[COleControlContainer:: CheckDlgButton](#checkdlgbutton)|Modifica il controllo pulsante specificato.|
|[COleControlContainer:: CheckRadioButton](#checkradiobutton)|Seleziona il pulsante di opzione specificato di un gruppo.|
|[COleControlContainer:: CreateControl](#createcontrol)|Crea un controllo ActiveX ospitato.|
|[COleControlContainer:: CreateOleFont](#createolefont)|Crea un tipo di carattere OLE.|
|[COleControlContainer:: FindItem](#finditem)|Restituisce il sito personalizzato del controllo specificato.|
|[COleControlContainer:: FreezeAllEvents](#freezeallevents)|Determina se il sito del controllo accetta eventi.|
|[COleControlContainer:: GetAmbientProp](#getambientprop)|Recupera la proprietà di ambiente specificata.|
|[COleControlContainer:: GetDlgItem](#getdlgitem)|Recupera il controllo della finestra di dialogo specificato.|
|[COleControlContainer:: GetDlgItemInt](#getdlgitemint)|Recupera il valore del controllo finestra di dialogo specificato.|
|[COleControlContainer:: GetDlgItemText](#getdlgitemtext)|Recupera la didascalia del controllo finestra di dialogo specificato.|
|[COleControlContainer:: HandleSetFocus](#handlesetfocus)|Determina se il contenitore gestisce WM_SETFOCUS messaggi.|
|[COleControlContainer:: HandleWindowlessMessage](#handlewindowlessmessage)|Gestisce i messaggi inviati a un controllo privo di finestra.|
|[COleControlContainer:: IsDlgButtonChecked](#isdlgbuttonchecked)|Determina lo stato del pulsante specificato.|
|[COleControlContainer:: OnPaint](#onpaint)|Chiamato per ridisegnare una parte del contenitore.|
|[COleControlContainer:: OnUIActivate](#onuiactivate)|Chiamato quando un controllo sta per essere attivato sul posto.|
|[COleControlContainer:: OnUIDeactivate](#onuideactivate)|Chiamato quando un controllo sta per essere disattivato.|
|[COleControlContainer:: ScrollChildren](#scrollchildren)|Chiamata eseguita dal framework quando i messaggi di scorrimento vengono ricevuti da una finestra figlio.|
|[COleControlContainer:: SendDlgItemMessage](#senddlgitemmessage)|Invia un messaggio al controllo specificato.|
|[COleControlContainer:: SetDlgItemInt](#setdlgitemint)|Imposta il valore del controllo specificato.|
|[COleControlContainer:: SetDlgItemText](#setdlgitemtext)|Imposta il testo del controllo specificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleControlContainer:: m_crBack](#m_crback)|Colore di sfondo del contenitore.|
|[COleControlContainer:: m_crFore](#m_crfore)|Colore di primo piano del contenitore.|
|[COleControlContainer:: m_listSitesOrWnds](#m_listsitesorwnds)|Elenco dei siti di controllo supportati.|
|[COleControlContainer:: m_nWindowlessControls](#m_nwindowlesscontrols)|Numero di controlli senza finestra ospitati.|
|[COleControlContainer:: m_pOleFont](#m_polefont)|Puntatore al tipo di carattere OLE del sito del controllo personalizzato.|
|[COleControlContainer:: m_pSiteCapture](#m_psitecapture)|Puntatore al sito del controllo di acquisizione.|
|[COleControlContainer:: m_pSiteFocus](#m_psitefocus)|Puntatore al controllo che ha attualmente lo stato attivo per l'input.|
|[COleControlContainer:: m_pSiteUIActive](#m_psiteuiactive)|Puntatore al controllo attualmente attivato sul posto.|
|[COleControlContainer:: m_pWnd](#m_pwnd)|Puntatore alla finestra che implementa il contenitore di controlli.|
|[COleControlContainer:: m_siteMap](#m_sitemap)|Mappa del sito.|

## <a name="remarks"></a>Osservazioni

Questa operazione viene eseguita fornendo supporto per uno o più siti di controllo ActiveX (implementati da `COleControlSite` ). `COleControlContainer`implementa completamente le interfacce [IOleInPlaceFrame](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceframe) e [IOleContainer](/windows/win32/api/oleidl/nn-oleidl-iolecontainer) , consentendo ai controlli ActiveX contenuti di soddisfare le proprie qualifiche come elementi sul posto.

In genere, questa classe viene utilizzata insieme a `COccManager` e `COleControlSite` per implementare un contenitore di controlli ActiveX personalizzato, con siti personalizzati per uno o più controlli ActiveX.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleControlContainer`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxocc. h

## <a name="colecontrolcontainerattachcontrolsite"></a><a name="attachcontrolsite"></a>COleControlContainer:: AttachControlSite

Chiamata eseguita dal Framework per creare e alleghi un sito di controllo.

```
virtual void AttachControlSite(
    CWnd* pWnd,
    UINT nIDC = 0);

void AttachControlSite(
    CWnd* pWnd,
    UINT nIDC = 0);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore a un oggetto `CWnd`.

*nIDC*<br/>
ID del controllo da collegare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione se si desidera personalizzare questo processo.

> [!NOTE]
> Usare la prima forma di questa funzione se si esegue un collegamento statico alla libreria MFC. Utilizzare il secondo modulo se ci si collega in modo dinamico alla libreria MFC.

## <a name="colecontrolcontainerbroadcastambientpropertychange"></a><a name="broadcastambientpropertychange"></a>COleControlContainer:: BroadcastAmbientPropertyChange

Informa tutti i controlli ospitati che una proprietà di ambiente è stata modificata.

```
virtual void BroadcastAmbientPropertyChange(DISPID dispid);
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch della proprietà di ambiente da modificare.

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata dal framework quando una proprietà di ambiente ha modificato il valore. Eseguire l'override di questa funzione per personalizzare questo comportamento.

## <a name="colecontrolcontainercheckdlgbutton"></a><a name="checkdlgbutton"></a>COleControlContainer:: CheckDlgButton

Modifica lo stato corrente del pulsante.

```
virtual void CheckDlgButton(
    int nIDButton,
    UINT nCheck);
```

### <a name="parameters"></a>Parametri

*nIDButton*<br/>
ID del pulsante da modificare.

*nPer*<br/>
Specifica lo stato del pulsante. Può essere uno dei valori seguenti:

- BST_CHECKED imposta lo stato del pulsante su controllato.

- BST_INDETERMINATE imposta lo stato del pulsante su grigio, che indica uno stato indeterminato. Usare questo valore solo se il pulsante ha lo stile BS_3STATE o BS_AUTO3STATE.

- BST_UNCHECKED imposta lo stato del pulsante su deselezionato.

## <a name="colecontrolcontainercheckradiobutton"></a><a name="checkradiobutton"></a>COleControlContainer:: CheckRadioButton

Consente di selezionare un pulsante di opzione specificato in un gruppo e di cancellare i pulsanti rimanenti del gruppo.

```
virtual void CheckRadioButton(
    int nIDFirstButton,
    int nIDLastButton,
    int nIDCheckButton);
```

### <a name="parameters"></a>Parametri

*nIDFirstButton*<br/>
Specifica l'identificatore del primo pulsante di opzione nel gruppo.

*nIDLastButton*<br/>
Specifica l'identificatore dell'ultimo pulsante di opzione nel gruppo.

*nIDCheckButton*<br/>
Specifica l'identificatore del pulsante di opzione da verificare.

## <a name="colecontrolcontainercolecontrolcontainer"></a><a name="colecontrolcontainer"></a>COleControlContainer:: COleControlContainer

Costruisce un oggetto `COleControlContainer`.

```
explicit COleControlContainer(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra padre del contenitore del controllo.

### <a name="remarks"></a>Osservazioni

Una volta che l'oggetto è stato creato correttamente, aggiungere un sito di controllo personalizzato con una chiamata a `AttachControlSite` .

## <a name="colecontrolcontainercreatecontrol"></a><a name="createcontrol"></a>COleControlContainer:: CreateControl

Crea un controllo ActiveX, ospitato dall'oggetto specificato `COleControlSite` .

```
BOOL CreateControl(
    CWnd* pWndCtrl,
    REFCLSID clsid,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    UINT nID,
    CFile* pPersist =NULL,
    BOOL bStorage =FALSE,
    BSTR bstrLicKey =NULL,
    COleControlSite** ppNewSite =NULL);

BOOL CreateControl(
    CWnd* pWndCtrl,
    REFCLSID clsid,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const POINT* ppt,
    const SIZE* psize,
    UINT nID,
    CFile* pPersist =NULL,
    BOOL bStorage =FALSE,
    BSTR bstrLicKey =NULL,
    COleControlSite** ppNewSite =NULL);
```

### <a name="parameters"></a>Parametri

*pWndCtrl*<br/>
Puntatore all'oggetto finestra che rappresenta il controllo.

*clsid*<br/>
ID univoco della classe del controllo.

*lpszWindowName*<br/>
Puntatore al testo da visualizzare nel controllo. Imposta il valore della didascalia o della proprietà di testo del controllo (se presente). Se è NULL, la proprietà didascalia o testo del controllo non viene modificata.

*dwStyle*<br/>
Stili di Windows. Gli stili disponibili sono elencati nella sezione **osservazioni** .

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo. Può trattarsi di un `CRect` oggetto o di una `RECT` struttura.

*nID*<br/>
Specifica l'ID della finestra figlio del controllo.

*pPersist*<br/>
Puntatore a un oggetto `CFile` che contiene lo stato persistente per il controllo. Il valore predefinito è NULL, che indica che il controllo viene inizializzato senza ripristinare lo stato da qualsiasi archiviazione persistente. Se non è NULL, deve essere un puntatore a un `CFile` oggetto derivato da che contiene i dati persistenti del controllo, sotto forma di flusso o di archiviazione. Questi dati potrebbero essere stati salvati in un'attivazione precedente del client. `CFile`Può contenere altri dati, ma il puntatore di lettura/scrittura deve essere impostato sul primo byte di dati permanenti al momento della chiamata a `CreateControl` .

*bStorage*<br/>
Indica se i dati in *pPersist* devono essere interpretati `IStorage` come `IStream` dati o. Se i dati in *pPersist* sono di archiviazione, *BSTORAGE* deve essere true. Se i dati in *pPersist* sono un flusso, *BSTORAGE* deve essere false. Il valore predefinito è FALSE.

*bstrLicKey*<br/>
Dati facoltativi del codice di licenza. Questi dati sono necessari solo per la creazione di controlli che richiedono un codice di licenza in fase di esecuzione. Se il controllo supporta la gestione delle licenze, è necessario fornire un codice di licenza per la creazione del controllo in modo che abbia esito positivo. Il valore predefinito è NULL.

*ppNewSite*<br/>
Puntatore al sito del controllo esistente che ospiterà il controllo da creare. Il valore predefinito è NULL, a indicare che un nuovo sito di controllo verrà creato e collegato automaticamente al nuovo controllo.

*PPT*<br/>
Puntatore a una `POINT` struttura che contiene l'angolo superiore sinistro del controllo. Le dimensioni del controllo sono determinate dal valore di *psize*. I valori *PPT* e *psize* sono un metodo facoltativo per specificare le dimensioni e la posizione del controllo.

*psize*<br/>
Puntatore a una `SIZE` struttura che contiene le dimensioni del controllo. L'angolo superiore sinistro è determinato dal valore di *PPT*. I valori *PPT* e *psize* sono un metodo facoltativo per specificare le dimensioni e la posizione del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Solo un subset dei flag *dwStyle* di Windows è supportato da `CreateControl` :

- WS_VISIBLE crea una finestra che inizialmente è visibile. Obbligatorio se si desidera che il controllo sia immediatamente visibile, ad esempio le finestre normali.

- WS_DISABLED crea una finestra che inizialmente è disabilitata. Una finestra disabilitata non può ricevere input dall'utente. Può essere impostato se il controllo ha una proprietà abilitata.

- WS_BORDER crea una finestra con un bordo di linea sottile. Può essere impostato se il controllo ha una proprietà BorderStyle.

- WS_GROUP Specifica il primo controllo di un gruppo di controlli. L'utente può modificare lo stato attivo della tastiera da un controllo del gruppo a quello successivo usando i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo e avvia il gruppo successivo.

- WS_TABSTOP specifica un controllo in grado di ricevere lo stato attivo quando l'utente preme il tasto TAB. Premendo il tasto TAB viene modificato lo stato attivo della tastiera sul controllo successivo dello stile del WS_TABSTOP.

Usare il secondo overload per creare controlli di dimensioni predefinite.

## <a name="colecontrolcontainercreateolefont"></a><a name="createolefont"></a>COleControlContainer:: CreateOleFont

Crea un tipo di carattere OLE.

```cpp
void CreateOleFont(CFont* pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
Puntatore al tipo di carattere che deve essere utilizzato dal contenitore di controlli.

## <a name="colecontrolcontainerfinditem"></a><a name="finditem"></a>COleControlContainer:: FindItem

Trova il sito personalizzato che ospita l'elemento specificato.

```
virtual COleControlSite* FindItem(UINT nID) const;
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore dell'elemento da trovare.

### <a name="return-value"></a>Valore restituito

Puntatore al sito personalizzato dell'elemento specificato.

## <a name="colecontrolcontainerfreezeallevents"></a><a name="freezeallevents"></a>COleControlContainer:: FreezeAllEvents

Determina se il contenitore ignorerà gli eventi dai siti di controllo collegati o li accetterà.

```cpp
void FreezeAllEvents(BOOL bFreeze);
```

### <a name="parameters"></a>Parametri

*bFreeze*<br/>
Diverso da zero se gli eventi verranno elaborati; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Non è necessario che il controllo interrompa la generazione di eventi se richiesto dal contenitore di controlli. Può continuare la generazione ma tutti gli eventi successivi verranno ignorati dal contenitore di controlli.

## <a name="colecontrolcontainergetambientprop"></a><a name="getambientprop"></a>COleControlContainer:: GetAmbientProp

Recupera il valore di una proprietà di ambiente specificata.

```
virtual BOOL GetAmbientProp(
    COleControlSite* pSite,
    DISPID dispid,
    VARIANT* pvarResult);
```

### <a name="parameters"></a>Parametri

*pSite*<br/>
Puntatore a un sito di controllo da cui verrà recuperata la proprietà di ambiente.

*DISPID*<br/>
ID dispatch della proprietà di ambiente desiderata.

*pVarResult*<br/>
Puntatore al valore della proprietà di ambiente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="colecontrolcontainergetdlgitem"></a><a name="getdlgitem"></a>COleControlContainer:: GetDlgItem

Recupera un puntatore al controllo o alla finestra figlio specificato in una finestra di dialogo o in un'altra finestra.

```
virtual CWnd* GetDlgItem(int nID) const;

virtual void GetDlgItem(
    int nID,
    HWND* phWnd) const;
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore dell'elemento della finestra di dialogo da recuperare.

*phWnd*<br/>
Puntatore all'handle dell'oggetto finestra dell'elemento della finestra di dialogo specificato.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra dell'elemento della finestra di dialogo.

## <a name="colecontrolcontainergetdlgitemint"></a><a name="getdlgitemint"></a>COleControlContainer:: GetDlgItemInt

Recupera il valore del testo tradotto del controllo specificato.

```
virtual UINT GetDlgItemInt(
    int nID,
    BOOL* lpTrans,
    BOOL bSigned) const;
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore del controllo.

*lpTrans*<br/>
Puntatore a una variabile booleana che riceve un valore di esito positivo/negativo della funzione (TRUE indica l'esito positivo, FALSE indica un errore).

*bSigned*<br/>
Specifica se la funzione deve esaminare il testo per un segno meno all'inizio e restituire un valore intero con segno se ne trova uno. Se il parametro *bSigned* è true, specificando che il valore da recuperare è un valore intero con segno, eseguire il cast del valore restituito a un **`int`** tipo. Per ottenere informazioni estese sull'errore, chiamare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, la variabile a cui punta *lpTrans* è impostata su true e il valore restituito è il valore tradotto del testo del controllo.

Se la funzione ha esito negativo, la variabile a cui punta *lpTrans* è impostata su false e il valore restituito è zero. Si noti che, poiché zero è un possibile valore tradotto, un valore restituito pari a zero non indica l'errore.

Se *lpTrans* è null, la funzione non restituisce alcuna informazione sull'esito positivo o negativo.

### <a name="remarks"></a>Osservazioni

La funzione converte il testo recuperato rimuovendo eventuali spazi aggiuntivi all'inizio del testo e quindi convertendo le cifre decimali. La funzione interrompe la conversione quando raggiunge la fine del testo o rileva un carattere non numerico.

Questa funzione restituisce zero se il valore tradotto è maggiore di INT_MAX (per i numeri con segno) o UINT_MAX (per i numeri senza segno).

## <a name="colecontrolcontainergetdlgitemtext"></a><a name="getdlgitemtext"></a>COleControlContainer:: GetDlgItemText

Recupera il testo del controllo specificato.

```
virtual int GetDlgItemText(
    int nID,
    LPTSTR lpStr,
    int nMaxCount) const;
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore del controllo.

*lpStr*<br/>
Puntatore al testo del controllo.

*nMaxCount*<br/>
Specifica la lunghezza massima, in caratteri, della stringa da copiare nel buffer a cui punta *LPSTR*. Se la lunghezza della stringa supera il limite, la stringa viene troncata.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito specifica il numero di caratteri copiati nel buffer, escluso il carattere di terminazione null.

Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni estese sull'errore, chiamare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

## <a name="colecontrolcontainerhandlesetfocus"></a><a name="handlesetfocus"></a>COleControlContainer:: HandleSetFocus

Determina se il contenitore gestisce WM_SETFOCUS messaggi.

```
virtual BOOL HandleSetFocus();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il contenitore gestisce WM_SETFOCUS messaggi; in caso contrario, zero.

## <a name="colecontrolcontainerhandlewindowlessmessage"></a><a name="handlewindowlessmessage"></a>COleControlContainer:: HandleWindowlessMessage

Elabora i messaggi della finestra per i controlli privi di finestra.

```
virtual BOOL HandleWindowlessMessage(
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* plResult);
```

### <a name="parameters"></a>Parametri

*message*<br/>
Identificatore del messaggio della finestra, fornito da Windows.

*wParam*<br/>
Parametro del messaggio. fornito da Windows. Specifica informazioni aggiuntive specifiche del messaggio. Il contenuto di questo parametro dipende dal valore del parametro del *messaggio* .

*lParam*<br/>
Parametro del messaggio. fornito da Windows. Specifica informazioni aggiuntive specifiche del messaggio. Il contenuto di questo parametro dipende dal valore del parametro del *messaggio* .

*plResult*<br/>
Codice risultato di Windows. Specifica il risultato dell'elaborazione del messaggio e dipende dal messaggio inviato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare la gestione dei messaggi di controllo senza finestra.

## <a name="colecontrolcontainerisdlgbuttonchecked"></a><a name="isdlgbuttonchecked"></a>COleControlContainer:: IsDlgButtonChecked

Determina lo stato del pulsante specificato.

```
virtual UINT IsDlgButtonChecked(int nIDButton) const;
```

### <a name="parameters"></a>Parametri

*nIDButton*<br/>
Identificatore del controllo Button.

### <a name="return-value"></a>Valore restituito

Valore restituito, da un pulsante creato con lo stile BS_AUTOCHECKBOX, BS_AUTORADIOBUTTON, BS_AUTO3STATE, BS_CHECKBOX, BS_RADIOBUTTON o BS_3STATE. Può essere uno dei valori seguenti:

- BST_CHECKED pulsante è selezionato.

- BST_INDETERMINATE pulsante è visualizzato in grigio, che indica uno stato indeterminato (si applica solo se il pulsante ha lo stile BS_3STATE o BS_AUTO3STATE).

- BST_UNCHECKED pulsante è deselezionata.

### <a name="remarks"></a>Osservazioni

Se il pulsante è un controllo a tre stati, la funzione membro determina se è in grigio, è selezionata o nessuno dei due.

## <a name="colecontrolcontainerm_crback"></a><a name="m_crback"></a>COleControlContainer:: m_crBack

Colore di sfondo del contenitore.

```
COLORREF m_crBack;
```

## <a name="colecontrolcontainerm_crfore"></a><a name="m_crfore"></a>COleControlContainer:: m_crFore

Colore di primo piano del contenitore.

```
COLORREF m_crFore;
```

## <a name="colecontrolcontainerm_listsitesorwnds"></a><a name="m_listsitesorwnds"></a>COleControlContainer:: m_listSitesOrWnds

Elenco dei siti di controllo ospitati dal contenitore.

```
CTypedPtrList<CPtrList, COleControlSiteOrWnd*> m_listSitesOrWnds;
```

## <a name="colecontrolcontainerm_nwindowlesscontrols"></a><a name="m_nwindowlesscontrols"></a>COleControlContainer:: m_nWindowlessControls

Numero di controlli privi di finestra ospitati dal contenitore di controlli.

```
int m_nWindowlessControls;
```

## <a name="colecontrolcontainerm_polefont"></a><a name="m_polefont"></a>COleControlContainer:: m_pOleFont

Puntatore al tipo di carattere OLE del sito del controllo personalizzato.

```
LPFONTDISP m_pOleFont;
```

## <a name="colecontrolcontainerm_psitecapture"></a><a name="m_psitecapture"></a>COleControlContainer:: m_pSiteCapture

Puntatore al sito del controllo di acquisizione.

```
COleControlSite* m_pSiteCapture;
```

## <a name="colecontrolcontainerm_psitefocus"></a><a name="m_psitefocus"></a>COleControlContainer:: m_pSiteFocus

Puntatore al sito del controllo che ha attualmente lo stato attivo per l'input.

```
COleControlSite* m_pSiteFocus;
```

## <a name="colecontrolcontainerm_psiteuiactive"></a><a name="m_psiteuiactive"></a>COleControlContainer:: m_pSiteUIActive

Puntatore al sito del controllo attivato sul posto.

```
COleControlSite* m_pSiteUIActive;
```

## <a name="colecontrolcontainerm_pwnd"></a><a name="m_pwnd"></a>COleControlContainer:: m_pWnd

Puntatore all'oggetto finestra associato al contenitore.

```
CWnd* m_pWnd;
```

## <a name="colecontrolcontainerm_sitemap"></a><a name="m_sitemap"></a>COleControlContainer:: m_siteMap

Mappa del sito.

```
CMapPtrToPtr m_siteMap;
```

## <a name="colecontrolcontaineronpaint"></a><a name="onpaint"></a>COleControlContainer:: OnPaint

Chiamato dal Framework per gestire le richieste di WM_PAINT.

```
virtual BOOL OnPaint(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo usato dal contenitore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato gestito; in caso contrario, zero.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare il processo di disegno.

## <a name="colecontrolcontaineronuiactivate"></a><a name="onuiactivate"></a>COleControlContainer:: OnUIActivate

Chiamato dal framework quando il sito di controllo, a cui fa riferimento *pSite*, sta per essere attivato sul posto.

```
virtual void OnUIActivate(COleControlSite* pSite);
```

### <a name="parameters"></a>Parametri

*pSite*<br/>
Puntatore al sito del controllo che sta per essere attivato sul posto.

### <a name="remarks"></a>Osservazioni

L'attivazione sul posto significa che il menu principale del contenitore viene sostituito con un menu composito sul posto.

## <a name="colecontrolcontaineronuideactivate"></a><a name="onuideactivate"></a>COleControlContainer:: OnUIDeactivate

Chiamata eseguita dal framework quando il sito del controllo, a cui fa riferimento *pSite*, sta per essere disattivato.

```
virtual void OnUIDeactivate(COleControlSite* pSite);
```

### <a name="parameters"></a>Parametri

*pSite*<br/>
Puntatore al sito del controllo che sta per essere disattivato.

### <a name="remarks"></a>Osservazioni

Quando viene ricevuta questa notifica, il contenitore deve reinstallare la relativa interfaccia utente e attivare l'attivazione.

## <a name="colecontrolcontainerscrollchildren"></a><a name="scrollchildren"></a>COleControlContainer:: ScrollChildren

Chiamata eseguita dal framework quando i messaggi di scorrimento vengono ricevuti da una finestra figlio.

```
virtual void ScrollChildren(
    int dx,
    int dy);
```

### <a name="parameters"></a>Parametri

*DX*<br/>
Quantità, in pixel, dello scorrimento lungo l'asse x.

*DY*<br/>
Quantità di scorrimento lungo l'asse y in pixel.

## <a name="colecontrolcontainersenddlgitemmessage"></a><a name="senddlgitemmessage"></a>COleControlContainer:: SendDlgItemMessage

Invia un messaggio al controllo specificato.

```
virtual LRESULT SendDlgItemMessage(
    int nID,
    UINT message,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Specifica l'identificatore del controllo che riceve il messaggio.

*message*<br/>
Specifica il messaggio da inviare.

*wParam*<br/>
Specifica informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
Specifica informazioni aggiuntive specifiche del messaggio.

## <a name="colecontrolcontainersetdlgitemint"></a><a name="setdlgitemint"></a>COleControlContainer:: SetDlgItemInt

Imposta il testo di un controllo in una finestra di dialogo sulla rappresentazione di stringa di un valore integer specificato.

```
virtual void SetDlgItemInt(
    int nID,
    UINT nValue,
    BOOL bSigned);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore del controllo.

*nValue*<br/>
Valore intero da visualizzare.

*bSigned*<br/>
Specifica se il parametro *nValue* è con segno o senza segno. Se questo parametro è TRUE, *nValue* è firmato. Se questo parametro è TRUE e *nValue* è minore di zero, un segno meno viene inserito prima della prima cifra della stringa. Se questo parametro è FALSE, *nValue* è senza segno.

## <a name="colecontrolcontainersetdlgitemtext"></a><a name="setdlgitemtext"></a>COleControlContainer:: SetDlgItemText

Imposta il testo del controllo specificato, usando il testo contenuto in *lpszString*.

```
virtual void SetDlgItemText(
    int nID,
    LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Identificatore del controllo.

*lpszString*<br/>
Puntatore al testo del controllo.

## <a name="see-also"></a>Vedere anche

[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleControlSite](../../mfc/reference/colecontrolsite-class.md)<br/>
[Classe COccManager](../../mfc/reference/coccmanager-class.md)
