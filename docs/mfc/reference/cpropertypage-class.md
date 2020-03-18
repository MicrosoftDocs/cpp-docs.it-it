---
title: Classe CPropertyPage
ms.date: 11/04/2016
f1_keywords:
- CPropertyPage
- AFXDLGS/CPropertyPage
- AFXDLGS/CPropertyPage::CPropertyPage
- AFXDLGS/CPropertyPage::CancelToClose
- AFXDLGS/CPropertyPage::Construct
- AFXDLGS/CPropertyPage::GetPSP
- AFXDLGS/CPropertyPage::OnApply
- AFXDLGS/CPropertyPage::OnCancel
- AFXDLGS/CPropertyPage::OnKillActive
- AFXDLGS/CPropertyPage::OnOK
- AFXDLGS/CPropertyPage::OnQueryCancel
- AFXDLGS/CPropertyPage::OnReset
- AFXDLGS/CPropertyPage::OnSetActive
- AFXDLGS/CPropertyPage::OnWizardBack
- AFXDLGS/CPropertyPage::OnWizardFinish
- AFXDLGS/CPropertyPage::OnWizardNext
- AFXDLGS/CPropertyPage::QuerySiblings
- AFXDLGS/CPropertyPage::SetModified
- AFXDLGS/CPropertyPage::m_psp
helpviewer_keywords:
- CPropertyPage [MFC], CPropertyPage
- CPropertyPage [MFC], CancelToClose
- CPropertyPage [MFC], Construct
- CPropertyPage [MFC], GetPSP
- CPropertyPage [MFC], OnApply
- CPropertyPage [MFC], OnCancel
- CPropertyPage [MFC], OnKillActive
- CPropertyPage [MFC], OnOK
- CPropertyPage [MFC], OnQueryCancel
- CPropertyPage [MFC], OnReset
- CPropertyPage [MFC], OnSetActive
- CPropertyPage [MFC], OnWizardBack
- CPropertyPage [MFC], OnWizardFinish
- CPropertyPage [MFC], OnWizardNext
- CPropertyPage [MFC], QuerySiblings
- CPropertyPage [MFC], SetModified
- CPropertyPage [MFC], m_psp
ms.assetid: d9000a21-aa81-4530-85d9-f43432afb4dc
ms.openlocfilehash: 6a6223708c83f7a5b3e6532a2016660d558f8270
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79421037"
---
# <a name="cpropertypage-class"></a>Classe CPropertyPage

Rappresenta singole pagine di una finestra delle proprietà, altrimenti nota come finestra di dialogo a schede.

## <a name="syntax"></a>Sintassi

```
class CPropertyPage : public CDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropertyPage:: CPropertyPage](#cpropertypage)|Costruisce un oggetto `CPropertyPage`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropertyPage:: CancelToClose](#canceltoclose)|Imposta il pulsante OK su Read Close e Disabilita il pulsante Annulla dopo una modifica irreversibile nella pagina di una finestra delle proprietà modale.|
|[CPropertyPage:: Construct](#construct)|Costruisce un oggetto `CPropertyPage`. Utilizzare `Construct` se si desidera specificare i parametri in fase di esecuzione o se si utilizzano matrici.|
|[CPropertyPage:: GetPSP](#getpsp)|Recupera la struttura [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2) di Windows associata all'oggetto `CPropertyPage`.|
|[CPropertyPage:: OnApply](#onapply)|Chiamata eseguita dal framework quando si fa clic sul pulsante Applica ora.|
|[CPropertyPage:: OnCancel](#oncancel)|Chiamata eseguita dal framework quando si fa clic sul pulsante Annulla.|
|[CPropertyPage:: OnKillActive](#onkillactive)|Chiamata eseguita dal framework quando la pagina corrente non è più la pagina attiva. Eseguire la convalida dei dati qui.|
|[CPropertyPage:: OnOK (](#onok)|Chiamata eseguita dal framework quando si fa clic sul pulsante OK, applica ora o Chiudi.|
|[CPropertyPage:: OnQueryCancel](#onquerycancel)|Chiamata eseguita dal framework quando si fa clic sul pulsante Annulla e prima che venga eseguita l'annullamento.|
|[CPropertyPage:: OnReset](#onreset)|Chiamata eseguita dal framework quando si fa clic sul pulsante Annulla.|
|[CPropertyPage:: OnSetActive](#onsetactive)|Chiamato dal framework quando la pagina viene resa la pagina attiva.|
|[CPropertyPage:: OnWizardBack](#onwizardback)|Chiamata eseguita dal framework quando si fa clic sul pulsante indietro quando si utilizza una finestra delle proprietà del tipo di procedura guidata.|
|[CPropertyPage:: OnWizardFinish](#onwizardfinish)|Chiamata eseguita dal framework quando si fa clic sul pulsante fine durante l'utilizzo di una finestra delle proprietà del tipo di procedura guidata.|
|[CPropertyPage:: OnWizardNext](#onwizardnext)|Chiamata eseguita dal framework quando si fa clic sul pulsante Avanti quando si utilizza una finestra delle proprietà del tipo di procedura guidata.|
|[CPropertyPage:: QuerySiblings](#querysiblings)|Il messaggio viene trasmesso a ogni pagina della finestra delle proprietà.|
|[CPropertyPage:: filemodified](#setmodified)|Chiamare per attivare o disattivare il pulsante Applica ora.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropertyPage:: m_psp](#m_psp)|Struttura [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2) di Windows. Fornisce l'accesso ai parametri della pagina delle proprietà di base.|

## <a name="remarks"></a>Osservazioni

Come per le finestre di dialogo standard, è possibile derivare una classe da `CPropertyPage` per ogni pagina nella finestra delle proprietà. Per usare gli oggetti derivati da `CPropertyPage`, creare innanzitutto un oggetto [CPropertySheet](../../mfc/reference/cpropertysheet-class.md) , quindi creare un oggetto per ogni pagina che viene inserita nella finestra delle proprietà. Chiamare [CPropertySheet:: AddPage](../../mfc/reference/cpropertysheet-class.md#addpage) per ogni pagina del foglio, quindi visualizzare la finestra delle proprietà chiamando [CPropertySheet::D omodal](../../mfc/reference/cpropertysheet-class.md#domodal) per una finestra delle proprietà modale o [CPropertySheet:: create](../../mfc/reference/cpropertysheet-class.md#create) per una finestra delle proprietà non modale.

È possibile creare una finestra di dialogo di tipo scheda denominata procedura guidata, costituita da una finestra delle proprietà con una sequenza di pagine delle proprietà che guida l'utente nei passaggi di un'operazione, ad esempio la configurazione di un dispositivo o la creazione di una newsletter. In una finestra di dialogo della procedura guidata-tipo, le pagine delle proprietà non dispongono di schede ed è visibile una sola pagina delle proprietà alla volta. Inoltre, anziché avere i pulsanti OK e applica ora, una finestra di dialogo della scheda tipo di procedura guidata include un pulsante indietro, un pulsante avanti o fine e un pulsante Annulla.

Per ulteriori informazioni sulla creazione di una finestra delle proprietà come procedura guidata, vedere [CPropertySheet:: SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode). Per ulteriori informazioni sull'utilizzo di `CPropertyPage` oggetti, vedere l'articolo [finestre delle proprietà e pagine delle proprietà](../../mfc/property-sheets-and-property-pages-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`CPropertyPage`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="canceltoclose"></a>CPropertyPage:: CancelToClose

Chiamare questa funzione dopo che è stata apportata una modifica irreversibile ai dati in una pagina di una finestra delle proprietà modale.

```
void CancelToClose();
```

### <a name="remarks"></a>Osservazioni

Questa funzione modificherà il pulsante OK per chiudere e disabilitare il pulsante Annulla. Questa modifica avvisa l'utente che una modifica è permanente e le modifiche non possono essere annullate.

La funzione membro `CancelToClose` non esegue alcuna operazione in una finestra delle proprietà non modale, perché per impostazione predefinita per una finestra delle proprietà non modale non è presente un pulsante Annulla.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertyPage:: QuerySiblings](#querysiblings).

##  <a name="construct"></a>CPropertyPage:: Construct

Chiamare questa funzione membro per costruire un oggetto `CPropertyPage`.

```
void Construct(
    UINT nIDTemplate,
    UINT nIDCaption = 0);

void Construct(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption = 0);

void Construct(
    UINT nIDTemplate,
    UINT nIDCaption,
    UINT nIDHeaderTitle,
    UINT nIDHeaderSubTitle = 0);

void Construct(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption,
    UINT nIDHeaderTitle,
    UINT nIDHeaderSubTitle = 0);
```

### <a name="parameters"></a>Parametri

*nIDTemplate*<br/>
ID del modello usato per questa pagina.

*nIDCaption*<br/>
ID del nome da inserire nella scheda per questa pagina. Se è 0, il nome verrà ricavato dal modello di finestra di dialogo per questa pagina.

*lpszTemplateName*<br/>
Contiene una stringa a terminazione null che rappresenta il nome di una risorsa modello.

*nIDHeaderTitle*<br/>
ID del nome da inserire nella posizione del titolo dell'intestazione della pagina delle proprietà. Per impostazione predefinita, 0.

*nIDHeaderSubTitle*<br/>
ID del nome da inserire nella posizione del sottotitolo dell'intestazione della pagina delle proprietà. Per impostazione predefinita, 0.

### <a name="remarks"></a>Osservazioni

L'oggetto viene visualizzato dopo che sono state soddisfatte tutte le condizioni seguenti:

- La pagina è stata aggiunta a una finestra delle proprietà utilizzando [CPropertySheet:: AddPage](../../mfc/reference/cpropertysheet-class.md#addpage).

- È stata chiamata la funzione [DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) o [create](../../mfc/reference/cpropertysheet-class.md#create) della finestra delle proprietà.

- L'utente ha selezionato (a schede) Questa pagina.

Chiamare `Construct` se non è stato chiamato uno degli altri costruttori della classe. La funzione membro `Construct` è flessibile perché è possibile lasciare vuota l'istruzione del parametro, quindi specificare più parametri e costruzione in qualsiasi punto del codice.

È necessario utilizzare `Construct` quando si utilizzano le matrici ed è necessario chiamare `Construct` per ogni membro della matrice, in modo che ai membri dati vengano assegnati valori appropriati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#112](../../mfc/codesnippet/cpp/cpropertypage-class_1.cpp)]

##  <a name="cpropertypage"></a>CPropertyPage:: CPropertyPage

Costruisce un oggetto `CPropertyPage`.

```
CPropertyPage();

explicit CPropertyPage(
    UINT nIDTemplate,
    UINT nIDCaption = 0,
    DWORD dwSize = sizeof(PROPSHEETPAGE));

explicit CPropertyPage(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption = 0,
    DWORD dwSize = sizeof(PROPSHEETPAGE));

CPropertyPage(
    UINT nIDTemplate,
    UINT nIDCaption,
    UINT nIDHeaderTitle,
    UINT nIDHeaderSubTitle = 0,
    DWORD dwSize = sizeof(PROPSHEETPAGE));

CPropertyPage(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption,
    UINT nIDHeaderTitle,
    UINT nIDHeaderSubTitle = 0,
    DWORD dwSize = sizeof(PROPSHEETPAGE));
```

### <a name="parameters"></a>Parametri

*nIDTemplate*<br/>
ID del modello usato per questa pagina.

*nIDCaption*<br/>
ID del nome da inserire nella scheda per questa pagina. Se è 0, il nome verrà ricavato dal modello di finestra di dialogo per questa pagina.

*dwSize*<br/>
*lpszTemplateName* Punta a una stringa che contiene il nome del modello per questa pagina. Non può essere NULL.

*nIDHeaderTitle*<br/>
ID del nome da inserire nella posizione del titolo dell'intestazione della pagina delle proprietà.

*nIDHeaderSubTitle*<br/>
ID del nome da inserire nella posizione del sottotitolo dell'intestazione della pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

L'oggetto viene visualizzato dopo che sono state soddisfatte tutte le condizioni seguenti:

- La pagina è stata aggiunta a una finestra delle proprietà utilizzando [CPropertySheet:: AddPage](../../mfc/reference/cpropertysheet-class.md#addpage).

- È stata chiamata la funzione [DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) o [create](../../mfc/reference/cpropertysheet-class.md#create) della finestra delle proprietà.

- L'utente ha selezionato (a schede) Questa pagina.

Se si dispone di più parametri, ad esempio se si utilizza una matrice, utilizzare [CPropertySheet:: Construct](../../mfc/reference/cpropertysheet-class.md#construct) anziché `CPropertyPage`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#113](../../mfc/codesnippet/cpp/cpropertypage-class_2.cpp)]

##  <a name="getpsp"></a>CPropertyPage:: GetPSP

Recupera la struttura [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2) di Windows associata all'oggetto `CPropertyPage`.

```
const PROPSHEETPAGE& GetPSP() const;

PROPSHEETPAGE& GetPSP();
```

### <a name="return-value"></a>Valore restituito

Riferimento alla struttura `PROPSHEETPAGE`.

##  <a name="m_psp"></a>CPropertyPage:: m_psp

`m_psp` è una struttura i cui membri archiviano le caratteristiche di [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2).

```
PROPSHEETPAGE m_psp;
```

### <a name="remarks"></a>Osservazioni

Usare questa struttura per inizializzare l'aspetto di una pagina delle proprietà dopo che è stata costruita.

Per ulteriori informazioni su questa struttura, incluso un elenco dei relativi membri, vedere `PROPSHEETPAGE` nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#128](../../mfc/codesnippet/cpp/cpropertypage-class_3.cpp)]

##  <a name="onapply"></a>CPropertyPage:: OnApply

Questa funzione membro viene chiamata dal framework quando l'utente sceglie il pulsante OK o applica ora.

```
virtual BOOL OnApply();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le modifiche vengono accettate; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Quando il Framework chiama questa funzione, vengono accettate le modifiche apportate a tutte le pagine delle proprietà nella finestra delle proprietà, la finestra delle proprietà mantiene lo stato attivo e `OnApply` restituisce TRUE (valore 1). Prima che `OnApply` possa essere chiamato dal Framework, è necessario che sia stato chiamato il metodo [immodified](#setmodified) e che il relativo parametro sia impostato su true. Verrà attivato il pulsante Applica ora non appena l'utente apporta una modifica nella pagina delle proprietà.

Eseguire l'override di questa funzione membro per specificare l'azione eseguita dal programma quando l'utente fa clic sul pulsante Applica ora. Quando si esegue l'override di, la funzione deve restituire TRUE per accettare le modifiche e FALSE per impedire che le modifiche abbiano effetto.

L'implementazione predefinita di `OnApply` chiama `OnOK`.

Per ulteriori informazioni sui messaggi di notifica inviati quando l'utente preme il pulsante Applica ora o OK in una finestra delle proprietà, vedere [PSN_APPLY](/windows/win32/Controls/psn-apply) nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertyPage:: OnOK (](#onok).

##  <a name="oncancel"></a>CPropertyPage:: OnCancel

Questa funzione membro viene chiamata dal framework quando viene selezionato il pulsante Annulla.

```
virtual void OnCancel();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per eseguire le azioni del pulsante Annulla. Il valore predefinito nega tutte le modifiche apportate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#114](../../mfc/codesnippet/cpp/cpropertypage-class_4.cpp)]

##  <a name="onkillactive"></a>CPropertyPage:: OnKillActive

Questa funzione membro viene chiamata dal framework quando la pagina non è più la pagina attiva.

```
virtual BOOL OnKillActive();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se i dati sono stati aggiornati correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per eseguire attività speciali di convalida dei dati.

L'implementazione predefinita di questa funzione membro copia le impostazioni dai controlli della pagina delle proprietà alle variabili membro della pagina delle proprietà. Se i dati non sono stati aggiornati correttamente a causa di un errore di convalida dei dati della finestra di dialogo (DDV), la pagina mantiene lo stato attivo.

Dopo che questa funzione membro viene restituita correttamente, il Framework chiamerà la funzione [OnOK (](#onok) della pagina.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#115](../../mfc/codesnippet/cpp/cpropertypage-class_5.cpp)]

##  <a name="onok"></a>CPropertyPage:: OnOK (

Questa funzione membro viene chiamata dal framework quando l'utente sceglie il pulsante OK o applica adesso, immediatamente dopo che il Framework chiama [OnKillActive](#onkillactive).

```
virtual void OnOK();
```

### <a name="remarks"></a>Osservazioni

Quando l'utente sceglie il pulsante OK o applica ora, il Framework riceve la notifica [PSN_APPLY](/windows/win32/Controls/psn-apply) dalla pagina delle proprietà. La chiamata a `OnOK` non verrà eseguita se si chiama [CPropertySheet::P ressbutton](../../mfc/reference/cpropertysheet-class.md#pressbutton) perché la pagina delle proprietà non invia la notifica in questo caso.

Eseguire l'override di questa funzione membro per implementare un comportamento aggiuntivo specifico della pagina attualmente attiva quando l'utente ignora l'intera finestra delle proprietà.

L'implementazione predefinita di questa funzione membro contrassegna la pagina come "pulita" per indicare che i dati sono stati aggiornati nella funzione `OnKillActive`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#116](../../mfc/codesnippet/cpp/cpropertypage-class_6.cpp)]

##  <a name="onquerycancel"></a>CPropertyPage:: OnQueryCancel

Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante Annulla e prima che venga eseguita l'azione di annullamento.

```
virtual BOOL OnQueryCancel();
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE per impedire l'operazione di annullamento o TRUE per consentirne l'esecuzione.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione eseguita dal programma quando l'utente fa clic sul pulsante Annulla.

L'implementazione predefinita di `OnQueryCancel` restituisce TRUE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#117](../../mfc/codesnippet/cpp/cpropertypage-class_7.cpp)]

##  <a name="onreset"></a>CPropertyPage:: OnReset

Questa funzione membro viene chiamata dal framework quando l'utente sceglie il pulsante Annulla.

```
virtual void OnReset();
```

### <a name="remarks"></a>Osservazioni

Quando il Framework chiama questa funzione, le modifiche apportate a tutte le pagine delle proprietà effettuate dall'utente che precedentemente scelgono il pulsante Applica ora vengono ignorate e la finestra delle proprietà mantiene lo stato attivo.

Eseguire l'override di questa funzione membro per specificare l'azione eseguita dal programma quando l'utente fa clic sul pulsante Annulla.

L'implementazione predefinita di `OnReset` non esegue alcuna operazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertyPage:: OnCancel](#oncancel).

##  <a name="onsetactive"></a>CPropertyPage:: OnSetActive

Questa funzione membro viene chiamata dal framework quando la pagina viene scelta dall'utente e diventa la pagina attiva.

```
virtual BOOL OnSetActive();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la pagina è stata impostata correttamente come attiva; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per eseguire attività quando viene attivata una pagina. L'override di questa funzione membro in genere chiama la versione predefinita dopo l'aggiornamento dei membri dati per consentire l'aggiornamento dei controlli della pagina con i nuovi dati.

L'implementazione predefinita crea la finestra per la pagina, se non è stata creata in precedenza, e la imposta come pagina attiva.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet:: SetFinishText](../../mfc/reference/cpropertysheet-class.md#setfinishtext).

##  <a name="onwizardback"></a>CPropertyPage:: OnWizardBack

Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante indietro in una procedura guidata.

```
virtual LRESULT OnWizardBack();
```

### <a name="return-value"></a>Valore restituito

0 per passare automaticamente alla pagina successiva; -1 per impedire la modifica della pagina. Per passare a una pagina diversa da quella successiva, restituire l'identificatore della finestra di dialogo da visualizzare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando viene premuto il pulsante indietro.

Per ulteriori informazioni su come creare una finestra delle proprietà di tipo procedura guidata, vedere [CPropertySheet:: SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#118](../../mfc/codesnippet/cpp/cpropertypage-class_8.cpp)]

##  <a name="onwizardfinish"></a>CPropertyPage:: OnWizardFinish

Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante fine in una procedura guidata.

```
virtual BOOL OnWizardFinish();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà viene distrutta al termine della procedura guidata. in caso contrario, zero.

### <a name="remarks"></a>Osservazioni

Quando un utente fa clic sul pulsante **fine** in una procedura guidata, il Framework chiama questa funzione; Quando `OnWizardFinish` restituisce TRUE (un valore diverso da zero), la finestra delle proprietà può essere distrutta (ma non viene effettivamente distrutta). Chiamare `DestroyWindow` per eliminare definitivamente la finestra delle proprietà. Non chiamare `DestroyWindow` da `OnWizardFinish`; Questa operazione causerà il danneggiamento dell'heap o altri errori.

È possibile eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando viene premuto il pulsante fine. Quando si esegue l'override di questa funzione, viene restituito FALSE per impedire che la finestra delle proprietà venga eliminata definitivamente.

Per ulteriori informazioni sui messaggi di notifica inviati quando l'utente preme il pulsante fine in una finestra delle proprietà della procedura guidata, vedere [PSN_WIZFINISH](/windows/win32/Controls/psn-wizfinish) nel Windows SDK.

Per ulteriori informazioni su come creare una finestra delle proprietà di tipo procedura guidata, vedere [CPropertySheet:: SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#119](../../mfc/codesnippet/cpp/cpropertypage-class_9.cpp)]

[!code-cpp[NVC_MFCDocView#120](../../mfc/codesnippet/cpp/cpropertypage-class_10.cpp)]

[!code-cpp[NVC_MFCDocView#121](../../mfc/codesnippet/cpp/cpropertypage-class_11.cpp)]

[!code-cpp[NVC_MFCDocView#122](../../mfc/codesnippet/cpp/cpropertypage-class_12.cpp)]

##  <a name="onwizardnext"></a>CPropertyPage:: OnWizardNext

Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante avanti in una procedura guidata.

```
virtual LRESULT OnWizardNext();
```

### <a name="return-value"></a>Valore restituito

0 per passare automaticamente alla pagina successiva; -1 per impedire la modifica della pagina. Per passare a una pagina diversa da quella successiva, restituire l'identificatore della finestra di dialogo da visualizzare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando viene premuto il pulsante Avanti.

Per ulteriori informazioni su come creare una finestra delle proprietà di tipo procedura guidata, vedere [CPropertySheet:: SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#123](../../mfc/codesnippet/cpp/cpropertypage-class_13.cpp)]

##  <a name="querysiblings"></a>CPropertyPage:: QuerySiblings

Chiamare questa funzione membro per inviare un messaggio a ogni pagina nella finestra delle proprietà.

```
LRESULT QuerySiblings(
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*wParam*<br/>
Specifica informazioni aggiuntive dipendenti dal messaggio.

*lParam*<br/>
Specifica informazioni aggiuntive dipendenti dal messaggio

### <a name="return-value"></a>Valore restituito

Valore diverso da zero da una pagina nella finestra delle proprietà oppure 0 se tutte le pagine restituiscono un valore pari a 0.

### <a name="remarks"></a>Osservazioni

Se una pagina restituisce un valore diverso da zero, la finestra delle proprietà non invia il messaggio alle pagine successive.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#124](../../mfc/codesnippet/cpp/cpropertypage-class_14.cpp)]

[!code-cpp[NVC_MFCDocView#125](../../mfc/codesnippet/cpp/cpropertypage-class_15.cpp)]

[!code-cpp[NVC_MFCDocView#126](../../mfc/codesnippet/cpp/cpropertypage-class_16.cpp)]

##  <a name="setmodified"></a>CPropertyPage:: filemodified

Chiamare questa funzione membro per abilitare o disabilitare il pulsante Applica ora, a seconda che le impostazioni nella pagina delle proprietà debbano essere applicate all'oggetto esterno appropriato.

```
void SetModified(BOOL bChanged = TRUE);
```

### <a name="parameters"></a>Parametri

*bChanged*<br/>
TRUE per indicare che le impostazioni della pagina delle proprietà sono state modificate dopo l'ultima applicazione. FALSE per indicare che le impostazioni della pagina delle proprietà sono state applicate o che devono essere ignorate.

### <a name="remarks"></a>Osservazioni

Il Framework tiene traccia delle pagine che sono "Dirty", ovvero le pagine delle proprietà per cui è stato chiamato `SetModified( TRUE )`. Il pulsante Applica ora sarà sempre abilitato se si chiama `SetModified( TRUE )` per una delle pagine. Il pulsante Applica ora verrà disabilitato quando si chiama `SetModified( FALSE )` per una delle pagine, ma solo se nessuna delle altre pagine è "Dirty".

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#127](../../mfc/codesnippet/cpp/cpropertypage-class_17.cpp)]

## <a name="see-also"></a>Vedere anche

[CMNCTRL1 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[CMNCTRL2 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[PROPDLG di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[SNAPVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CPropertySheet](../../mfc/reference/cpropertysheet-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
