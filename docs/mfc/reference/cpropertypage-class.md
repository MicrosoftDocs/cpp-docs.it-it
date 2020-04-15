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
ms.openlocfilehash: 816948ea17f674c3cd693331502df33cce62610c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363992"
---
# <a name="cpropertypage-class"></a>Classe CPropertyPage

Rappresenta singole pagine di una finestra delle proprietà, altrimenti nota come finestra di dialogo a schede.

## <a name="syntax"></a>Sintassi

```
class CPropertyPage : public CDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropertyPage::CPropertyPage](#cpropertypage)|Costruisce un oggetto `CPropertyPage`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropertyPage::CancelToClose](#canceltoclose)|Modifica il pulsante OK per leggere Chiudi e disabilita il pulsante Annulla, dopo una modifica irreversibile nella pagina di una finestra delle proprietà modale.|
|[CPropertyPage::Construct](#construct)|Costruisce un oggetto `CPropertyPage`. Utilizzare `Construct` se si desidera specificare i parametri in fase di esecuzione o se si utilizzano matrici.|
|[CPropertyPage::GetPSP](#getpsp)|Recupera la struttura [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2) di `CPropertyPage` Windows associata all'oggetto.|
|[CPropertyPage::OnApply](#onapply)|Chiamato dal framework quando si fa clic sul pulsante Applica ora.|
|[CPropertyPage::OnCancel](#oncancel)|Chiamato dal framework quando si fa clic sul pulsante Annulla.|
|[CPropertyPage::OnKillActiveCPropertyPage::OnKillActive](#onkillactive)|Chiamato dal framework quando la pagina corrente non è più la pagina attiva. Eseguire la convalida dei dati qui.|
|[CPropertyPage::OnOK](#onok)|Chiamato dal framework quando si fa clic sul pulsante OK, Applica ora o Chiudi.|
|[CPropertyPage::OnQueryCancel](#onquerycancel)|Chiamato dal framework quando si fa clic sul pulsante Annulla e prima che venga eseguito l'annullamento.|
|[CPropertyPage::OnReset](#onreset)|Chiamato dal framework quando si fa clic sul pulsante Annulla.|
|[CPropertyPage::OnSetActive](#onsetactive)|Chiamato dal framework quando la pagina viene resa attiva.|
|[CPropertyPage::OnWizardBack](#onwizardback)|Chiamato dal framework quando si fa clic sul pulsante Indietro durante l'utilizzo di una finestra delle proprietà di tipo procedura guidata.|
|[CPropertyPage::OnWizardFinish](#onwizardfinish)|Chiamato dal framework quando si fa clic sul pulsante Fine durante l'utilizzo di una finestra delle proprietà di tipo procedura guidata.|
|[CPropertyPage::OnWizardNext](#onwizardnext)|Chiamato dal framework quando si fa clic sul pulsante Next durante l'utilizzo di una finestra delle proprietà di tipo procedura guidata.|
|[CPropertyPage::QuerySiblings](#querysiblings)|Inoltra il messaggio a ogni pagina della finestra delle proprietà.|
|[CPropertyPage::SetModified](#setmodified)|Chiamata per attivare o disattivare il pulsante Applica ora.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropertyPage::m_psp](#m_psp)|Struttura [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2) di Windows. Fornisce l'accesso ai parametri di base della pagina delle proprietà.|

## <a name="remarks"></a>Osservazioni

Come per le finestre di dialogo standard, si deriva una classe da `CPropertyPage` per ogni pagina nella finestra delle proprietà. Per `CPropertyPage`utilizzare gli oggetti derivati, creare innanzitutto un [cPropertySheet](../../mfc/reference/cpropertysheet-class.md) oggetto e quindi creare un oggetto per ogni pagina che va nella finestra delle proprietà. Chiamare [CPropertySheet::AddPage](../../mfc/reference/cpropertysheet-class.md#addpage) per ogni pagina nella finestra e quindi visualizzare la finestra delle proprietà chiamando [CPropertySheet::DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) per una finestra delle proprietà modale o [CPropertySheet::Create](../../mfc/reference/cpropertysheet-class.md#create) per una finestra delle proprietà non modale.

È possibile creare un tipo di finestra di dialogo scheda denominata procedura guidata, costituita da una finestra delle proprietà con una sequenza di pagine delle proprietà che guidano l'utente attraverso i passaggi di un'operazione, ad esempio la configurazione di un dispositivo o la creazione di un notiziario. In una finestra di dialogo scheda di tipo procedura guidata, le pagine delle proprietà non dispongono di schede e solo una pagina delle proprietà è visibile alla volta. Inoltre, invece di avere OK e Applica ora pulsanti, una finestra di dialogo scheda tipo procedura guidata ha un pulsante Indietro, un pulsante Avanti o Fine e un pulsante Annulla.

Per ulteriori informazioni sulla creazione di una finestra delle proprietà come procedura guidata, vedere [CPropertySheet::SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode). Per ulteriori informazioni `CPropertyPage` sull'utilizzo degli oggetti, consultate l'articolo [Finestre delle proprietà e pagine delle proprietà](../../mfc/property-sheets-and-property-pages-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`CPropertyPage`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs.h

## <a name="cpropertypagecanceltoclose"></a><a name="canceltoclose"></a>CPropertyPage::CancelToClose

Chiamare questa funzione dopo che è stata apportata una modifica irreversibile ai dati in una pagina di una finestra delle proprietà modale.

```
void CancelToClose();
```

### <a name="remarks"></a>Osservazioni

Questa funzione cambierà il pulsante OK in Chiudi e disattiverà il pulsante Annulla. Questa modifica avvisa l'utente che una modifica è permanente e le modifiche non possono essere annullate.

La `CancelToClose` funzione membro non esegue alcuna operazione in una finestra delle proprietà non modale, perché una finestra delle proprietà non modale non dispone di un pulsante Annulla per impostazione predefinita.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertyPage::QuerySiblings](#querysiblings).

## <a name="cpropertypageconstruct"></a><a name="construct"></a>CPropertyPage::Construct

Chiamare questa funzione membro `CPropertyPage` per costruire un oggetto.

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

*NIDTemplate (modello)*<br/>
ID del modello utilizzato per questa pagina.

*nIDCaption (didascalie di identità)*<br/>
ID del nome da inserire nella scheda di questa pagina. Se 0, il nome verrà ricavato dal modello di finestra di dialogo per questa pagina.

*lpszTemplateName (nome di metodo)*<br/>
Contiene una stringa con terminazione null che è il nome di una risorsa modello.

*nIDHeaderTitle*<br/>
ID del nome da inserire nella posizione del titolo dell'intestazione della pagina delle proprietà. Per impostazione predefinita, 0.

*nIDHeaderSubTitle*<br/>
ID del nome da inserire nella posizione del sottotitolo dell'intestazione della pagina delle proprietà. Per impostazione predefinita, 0.

### <a name="remarks"></a>Osservazioni

L'oggetto viene visualizzato dopo aver soddisfatto tutte le condizioni seguenti:

- La pagina è stata aggiunta a una finestra delle proprietà utilizzando [CPropertySheet::AddPage](../../mfc/reference/cpropertysheet-class.md#addpage).

- È stata chiamata la funzione [DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) o [Create](../../mfc/reference/cpropertysheet-class.md#create) della finestra delle proprietà.

- L'utente ha selezionato (a schede) questa pagina.

Chiamare `Construct` se uno degli altri costruttori di classe non è stato chiamato. La `Construct` funzione membro è flessibile perché è possibile lasciare vuota l'istruzione di parametro e quindi specificare più parametri e costruzione in qualsiasi punto del codice.

È necessario `Construct` utilizzare quando si lavora con `Construct` matrici ed è necessario chiamare per ogni membro della matrice in modo che ai membri dati vengano assegnati valori appropriati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#112](../../mfc/codesnippet/cpp/cpropertypage-class_1.cpp)]

## <a name="cpropertypagecpropertypage"></a><a name="cpropertypage"></a>CPropertyPage::CPropertyPage

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

*NIDTemplate (modello)*<br/>
ID del modello utilizzato per questa pagina.

*nIDCaption (didascalie di identità)*<br/>
ID del nome da inserire nella scheda di questa pagina. Se 0, il nome verrà ricavato dal modello di finestra di dialogo per questa pagina.

*dwSize (Dimensioni dwSize)*<br/>
*lpszTemplateName (nome di metodo)* Punta a una stringa contenente il nome del modello per questa pagina. Non può essere NULL.

*nIDHeaderTitle*<br/>
ID del nome da inserire nella posizione del titolo dell'intestazione della pagina delle proprietà.

*nIDHeaderSubTitle*<br/>
ID del nome da inserire nella posizione del sottotitolo dell'intestazione della pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

L'oggetto viene visualizzato dopo aver soddisfatto tutte le condizioni seguenti:

- La pagina è stata aggiunta a una finestra delle proprietà utilizzando [CPropertySheet::AddPage](../../mfc/reference/cpropertysheet-class.md#addpage).

- È stata chiamata la funzione [DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) o [Create](../../mfc/reference/cpropertysheet-class.md#create) della finestra delle proprietà.

- L'utente ha selezionato (a schede) questa pagina.

Se si dispone di più parametri (ad esempio, se si utilizza una `CPropertyPage`matrice), utilizzare [CPropertySheet::Construct](../../mfc/reference/cpropertysheet-class.md#construct) anziché .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#113](../../mfc/codesnippet/cpp/cpropertypage-class_2.cpp)]

## <a name="cpropertypagegetpsp"></a><a name="getpsp"></a>CPropertyPage::GetPSP

Recupera la struttura [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2) di `CPropertyPage` Windows associata all'oggetto.

```
const PROPSHEETPAGE& GetPSP() const;

PROPSHEETPAGE& GetPSP();
```

### <a name="return-value"></a>Valore restituito

Un riferimento `PROPSHEETPAGE` alla struttura.

## <a name="cpropertypagem_psp"></a><a name="m_psp"></a>CPropertyPage::m_psp

`m_psp`è una struttura i cui membri memorizzano le caratteristiche di [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2).

```
PROPSHEETPAGE m_psp;
```

### <a name="remarks"></a>Osservazioni

Utilizzare questa struttura per inizializzare l'aspetto di una pagina delle proprietà dopo la costruzione.

Per ulteriori informazioni su questa struttura, incluso `PROPSHEETPAGE` un elenco dei relativi membri, vedere Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#128](../../mfc/codesnippet/cpp/cpropertypage-class_3.cpp)]

## <a name="cpropertypageonapply"></a><a name="onapply"></a>CPropertyPage::OnApply

Questa funzione membro viene chiamata dal framework quando l'utente sceglie il OK o il pulsante Applica ora .

```
virtual BOOL OnApply();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le modifiche vengono accettate; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Quando il framework chiama questa funzione, le modifiche apportate a tutte le pagine `OnApply` delle proprietà nella finestra delle proprietà vengono accettate, la finestra delle proprietà mantiene lo stato attivo e restituisce TRUE (il valore 1). Prima `OnApply` di poter essere chiamato dal framework, è necessario aver chiamato [SetModified](#setmodified) e impostarne il parametro su TRUE. Questo attiverà il pulsante Applica ora non appena l'utente apporta una modifica nella pagina delle proprietà.

Eseguire l'override di questa funzione membro per specificare l'azione eseguita dal programma quando l'utente fa clic sul pulsante Applica ora. Quando si esegue l'override, la funzione deve restituire TRUE per accettare le modifiche e FALSE per impedire che le modifiche abbiano effetto.

L'implementazione `OnApply` `OnOK`predefinita delle chiamate .

Per ulteriori informazioni sui messaggi di notifica inviati quando l'utente preme il pulsante Applica ora o OK in una finestra delle proprietà, vedere [PSN_APPLY](/windows/win32/Controls/psn-apply) in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertyPage::OnOK](#onok).

## <a name="cpropertypageoncancel"></a><a name="oncancel"></a>CPropertyPage::OnCancel

Questa funzione membro viene chiamata dal framework quando il Annulla pulsante è selezionato.

```
virtual void OnCancel();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per eseguire le azioni del pulsante Annulla.Override this member function to perform Cancel button actions. L'impostazione predefinita nega tutte le modifiche apportate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#114](../../mfc/codesnippet/cpp/cpropertypage-class_4.cpp)]

## <a name="cpropertypageonkillactive"></a><a name="onkillactive"></a>CPropertyPage::OnKillActiveCPropertyPage::OnKillActive

Questa funzione membro viene chiamata dal framework quando la pagina non è più la pagina attiva.

```
virtual BOOL OnKillActive();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se i dati sono stati aggiornati correttamente, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per eseguire attività speciali di convalida dei dati.

L'implementazione predefinita di questa funzione membro copia le impostazioni dai controlli nella pagina delle proprietà alle variabili membro della pagina delle proprietà. Se i dati non sono stati aggiornati correttamente a causa di un errore di convalida dei dati della finestra di dialogo (DDV), la pagina mantiene lo stato attivo.

Dopo che questa funzione membro restituisce correttamente, il framework chiamerà la funzione [OnOK](#onok) della pagina.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#115](../../mfc/codesnippet/cpp/cpropertypage-class_5.cpp)]

## <a name="cpropertypageonok"></a><a name="onok"></a>CPropertyPage::OnOK

Questa funzione membro viene chiamata dal framework quando l'utente sceglie il pulsante OK o Applica ora , immediatamente dopo che il framework chiama [OnKillActive](#onkillactive).

```
virtual void OnOK();
```

### <a name="remarks"></a>Osservazioni

Quando l'utente sceglie il OK o il pulsante Applica ora, il framework riceve la notifica [di PSN_APPLY](/windows/win32/Controls/psn-apply) dalla pagina delle proprietà. La chiamata `OnOK` a non verrà effettuata se si chiama [CPropertySheet::PressButton](../../mfc/reference/cpropertysheet-class.md#pressbutton) perché la pagina delle proprietà non invia la notifica in questo caso.

Eseguire l'override di questa funzione membro per implementare un comportamento aggiuntivo specifico per la pagina attualmente attiva quando l'utente chiude l'intera finestra delle proprietà.

L'implementazione predefinita di questa funzione membro contrassegna la pagina come `OnKillActive` "pulita" per indicare che i dati sono stati aggiornati nella funzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#116](../../mfc/codesnippet/cpp/cpropertypage-class_6.cpp)]

## <a name="cpropertypageonquerycancel"></a><a name="onquerycancel"></a>CPropertyPage::OnQueryCancel

Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante Annulla e prima che venga eseguita l'azione di annullamento.

```
virtual BOOL OnQueryCancel();
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE per impedire l'operazione di annullamento o TRUE per consentirla.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione eseguita dal programma quando l'utente fa clic sul pulsante Annulla.

L'implementazione `OnQueryCancel` predefinita di restituisce TRUE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#117](../../mfc/codesnippet/cpp/cpropertypage-class_7.cpp)]

## <a name="cpropertypageonreset"></a><a name="onreset"></a>CPropertyPage::OnReset

Questa funzione membro viene chiamata dal framework quando l'utente sceglie il Annulla pulsante.

```
virtual void OnReset();
```

### <a name="remarks"></a>Osservazioni

Quando il framework chiama questa funzione, le modifiche a tutte le pagine delle proprietà apportate dall'utente in precedenza scegliendo il pulsante Applica ora vengono eliminate e la finestra delle proprietà mantiene lo stato attivo.

Eseguire l'override di questa funzione membro per specificare l'azione eseguita dal programma quando l'utente fa clic sul pulsante Annulla.

L'implementazione `OnReset` predefinita di non esegue alcuna operazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertyPage::OnCancel](#oncancel).

## <a name="cpropertypageonsetactive"></a><a name="onsetactive"></a>CPropertyPage::OnSetActive

Questa funzione membro viene chiamata dal framework quando la pagina viene scelta dall'utente e diventa la pagina attiva.

```
virtual BOOL OnSetActive();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la pagina è stata impostata come attiva; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per eseguire attività quando viene attivata una pagina. L'override di questa funzione membro chiamerebbe in genere la versione predefinita dopo l'aggiornamento dei membri dati, per consentire l'aggiornamento dei controlli della pagina con i nuovi dati.

L'implementazione predefinita crea la finestra per la pagina, se non creata in precedenza, e la rende la pagina attiva.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet::SetFinishText](../../mfc/reference/cpropertysheet-class.md#setfinishtext).

## <a name="cpropertypageonwizardback"></a><a name="onwizardback"></a>CPropertyPage::OnWizardBack

Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante Indietro in una procedura guidata.

```
virtual LRESULT OnWizardBack();
```

### <a name="return-value"></a>Valore restituito

0 per passare automaticamente alla pagina successiva; -1 per impedire la modifica della pagina. Per passare a una pagina diversa da quella successiva, restituire l'identificatore della finestra di dialogo da visualizzare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando viene premuto il pulsante Indietro.

Per ulteriori informazioni su come creare una finestra delle proprietà di tipo procedura guidata, vedere [CPropertySheet::SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#118](../../mfc/codesnippet/cpp/cpropertypage-class_8.cpp)]

## <a name="cpropertypageonwizardfinish"></a><a name="onwizardfinish"></a>CPropertyPage::OnWizardFinish

Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante Fine in una procedura guidata.

```
virtual BOOL OnWizardFinish();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà viene eliminata al termine della procedura guidata; in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Quando un utente fa clic sul pulsante **Fine** in una procedura guidata, il framework chiama questa funzione; quando `OnWizardFinish` restituisce TRUE (un valore diverso da zero), la finestra delle proprietà può essere eliminata (ma non viene effettivamente eliminata). Chiamata `DestroyWindow` per eliminare la finestra delle proprietà. Non chiamare `DestroyWindow` `OnWizardFinish`da ; in questo modo causerà il danneggiamento dell'heap o altri errori.

È possibile eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando viene premuto il pulsante Fine. Quando si esegue l'override di questa funzione, restituire FALSE per impedire l'eliminazione della finestra delle proprietà.

Per ulteriori informazioni sui messaggi di notifica inviati quando l'utente preme il pulsante Fine in una finestra delle proprietà della procedura guidata, vedere [PSN_WIZFINISH](/windows/win32/Controls/psn-wizfinish) in Windows SDK.

Per ulteriori informazioni su come creare una finestra delle proprietà di tipo procedura guidata, vedere [CPropertySheet::SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#119](../../mfc/codesnippet/cpp/cpropertypage-class_9.cpp)]

[!code-cpp[NVC_MFCDocView#120](../../mfc/codesnippet/cpp/cpropertypage-class_10.cpp)]

[!code-cpp[NVC_MFCDocView#121](../../mfc/codesnippet/cpp/cpropertypage-class_11.cpp)]

[!code-cpp[NVC_MFCDocView#122](../../mfc/codesnippet/cpp/cpropertypage-class_12.cpp)]

## <a name="cpropertypageonwizardnext"></a><a name="onwizardnext"></a>CPropertyPage::OnWizardNext

Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante Avanti in una procedura guidata.

```
virtual LRESULT OnWizardNext();
```

### <a name="return-value"></a>Valore restituito

0 per passare automaticamente alla pagina successiva; -1 per impedire la modifica della pagina. Per passare a una pagina diversa da quella successiva, restituire l'identificatore della finestra di dialogo da visualizzare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando viene premuto il pulsante Avanti.

Per ulteriori informazioni su come creare una finestra delle proprietà di tipo procedura guidata, vedere [CPropertySheet::SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#123](../../mfc/codesnippet/cpp/cpropertypage-class_13.cpp)]

## <a name="cpropertypagequerysiblings"></a><a name="querysiblings"></a>CPropertyPage::QuerySiblings

Chiamare questa funzione membro per inoltrare un messaggio a ogni pagina nella finestra delle proprietà.

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

## <a name="cpropertypagesetmodified"></a><a name="setmodified"></a>CPropertyPage::SetModified

Chiamare questa funzione membro per abilitare o disabilitare il pulsante Applica ora, a seconda che le impostazioni nella pagina delle proprietà devono essere applicate all'oggetto esterno appropriato.

```
void SetModified(BOOL bChanged = TRUE);
```

### <a name="parameters"></a>Parametri

*bCambiato*<br/>
TRUE per indicare che le impostazioni della pagina delle proprietà sono state modificate dall'ultima volta che sono state applicate; FALSE per indicare che le impostazioni della pagina delle proprietà sono state applicate o devono essere ignorate.

### <a name="remarks"></a>Osservazioni

Il framework tiene traccia di quali pagine sono "sporche", `SetModified( TRUE )`ovvero le pagine delle proprietà per le quali sono state chiamate . Il pulsante Applica ora sarà `SetModified( TRUE )` sempre abilitato se si chiama per una delle pagine. Il pulsante Applica ora verrà `SetModified( FALSE )` disabilitato quando si chiama per una delle pagine, ma solo se nessuna delle altre pagine è "sporca".

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#127](../../mfc/codesnippet/cpp/cpropertypage-class_17.cpp)]

## <a name="see-also"></a>Vedere anche

[ESEMPIO MFC CMNCTRL1](../../overview/visual-cpp-samples.md)<br/>
[ESEMPIO MFC CMNCTRL2](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC PROPDLG](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CPropertySheet](../../mfc/reference/cpropertysheet-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
