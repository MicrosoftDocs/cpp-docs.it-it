---
title: Classe COlePropertyPage
ms.date: 11/04/2016
f1_keywords:
- COlePropertyPage
- AFXCTL/COlePropertyPage
- AFXCTL/COlePropertyPage::COlePropertyPage
- AFXCTL/COlePropertyPage::GetControlStatus
- AFXCTL/COlePropertyPage::GetObjectArray
- AFXCTL/COlePropertyPage::GetPageSite
- AFXCTL/COlePropertyPage::OVERWRITEApply
- AFXCTL/COlePropertyPage::IsModified
- AFXCTL/COlePropertyPage::OnEditProperty
- AFXCTL/COlePropertyPage::OnHelp
- AFXCTL/COlePropertyPage::OnInitDialog
- AFXCTL/COlePropertyPage::OnObjectsChanged
- AFXCTL/COlePropertyPage::OnSetPageSite
- AFXCTL/COlePropertyPage::SetControlStatus
- AFXCTL/COlePropertyPage::SetDialogResource
- AFXCTL/COlePropertyPage::SetHelpInfo
- AFXCTL/COlePropertyPage::SetModifiedFlag
- AFXCTL/COlePropertyPage::SetPageName
helpviewer_keywords:
- COlePropertyPage [MFC], COlePropertyPage
- COlePropertyPage [MFC], GetControlStatus
- COlePropertyPage [MFC], GetObjectArray
- COlePropertyPage [MFC], GetPageSite
- COlePropertyPage [MFC], IgnoreApply
- COlePropertyPage [MFC], IsModified
- COlePropertyPage [MFC], OnEditProperty
- COlePropertyPage [MFC], OnHelp
- COlePropertyPage [MFC], OnInitDialog
- COlePropertyPage [MFC], OnObjectsChanged
- COlePropertyPage [MFC], OnSetPageSite
- COlePropertyPage [MFC], SetControlStatus
- COlePropertyPage [MFC], SetDialogResource
- COlePropertyPage [MFC], SetHelpInfo
- COlePropertyPage [MFC], SetModifiedFlag
- COlePropertyPage [MFC], SetPageName
ms.assetid: e9972872-8e6b-4550-905e-d36a274d64dc
ms.openlocfilehash: 872ade08438e54098da730012f98cdd906483887
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753800"
---
# <a name="colepropertypage-class"></a>Classe COlePropertyPage

Utilizzata per visualizzare le proprietà di un controllo personalizzato in un'interfaccia grafica, simile a una finestra di dialogo.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE COlePropertyPage : public CDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePropertyPage::COlePropertyPage](#colepropertypage)|Costruisce un oggetto `COlePropertyPage`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePropertyPage::GetControlStatus](#getcontrolstatus)|Indica se l'utente ha modificato il valore nel controllo.|
|[COlePropertyPage::GetObjectArray](#getobjectarray)|Restituisce la matrice di oggetti modificati dalla pagina delle proprietà.|
|[COlePropertyPage::GetPageSite](#getpagesite)|Restituisce un puntatore all'interfaccia della `IPropertyPageSite` pagina delle proprietà.|
|[COlePropertyPage::IgnoreApply](#ignoreapply)|Determina quali controlli non abilitano il pulsante Applica.|
|[COlePropertyPage::IsModified](#ismodified)|Indica se l'utente ha modificato la pagina delle proprietà.|
|[COlePropertyPage::OnEditProperty](#oneditproperty)|Chiamato dal framework quando l'utente modifica una proprietà.|
|[COlePropertyPage::OnHelp](#onhelp)|Chiamato dal framework quando l'utente richiama la Guida.|
|[COlePropertyPage::OnInitDialog](#oninitdialog)|Chiamato dal framework quando viene inizializzata la pagina delle proprietà.|
|[COlePropertyPage::OnObjectsChanged](#onobjectschanged)|Chiamato dal framework quando viene scelto un altro controllo OLE, con nuove proprietà.|
|[COlePropertyPage::OnSetPageSite](#onsetpagesite)|Chiamato dal framework quando il frame della proprietà fornisce il sito della pagina.|
|[COlePropertyPage::SetControlStatus](#setcontrolstatus)|Imposta un flag che indica se l'utente ha modificato il valore nel controllo.|
|[COlePropertyPage::SetDialogResource](#setdialogresource)|Imposta la risorsa finestra di dialogo della pagina delle proprietà.|
|[COlePropertyPage::SetHelpInfo](#sethelpinfo)|Consente di impostare il breve testo della Guida della pagina delle proprietà, il nome del relativo file della Guida e il relativo contesto della Guida.|
|[COlePropertyPage::SetModifiedFlag](#setmodifiedflag)|Imposta un flag che indica se l'utente ha modificato la pagina delle proprietà.|
|[COlePropertyPage::NomePaginaSetPage](#setpagename)|Imposta il nome (didascalia) della pagina delle proprietà.|

## <a name="remarks"></a>Osservazioni

Ad esempio, una pagina delle proprietà può includere un controllo di modifica che consente all'utente di visualizzare e modificare la proprietà didascalia del controllo.

Ogni proprietà personalizzata o del controllo stock può avere un controllo finestra di dialogo che consente all'utente del controllo di visualizzare il valore della proprietà corrente e modificare tale valore, se necessario.

Per ulteriori informazioni `COlePropertyPage`sull'utilizzo di , vedere l'articolo [Controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`COlePropertyPage`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="colepropertypagecolepropertypage"></a><a name="colepropertypage"></a>COlePropertyPage::COlePropertyPage

Costruisce un oggetto `COlePropertyPage`.

```
COlePropertyPage(
    UINT idDlg,
    UINT idCaption);
```

### <a name="parameters"></a>Parametri

*IDDlg*<br/>
ID risorsa del modello di finestra di dialogo.

*idCaption (didascalia)*<br/>
ID risorsa della didascalia della pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

Quando si implementa una `COlePropertyPage`sottoclasse di , il `COlePropertyPage` costruttore della sottoclasse deve utilizzare il costruttore per identificare la risorsa modello di finestra di dialogo su cui si basa la pagina delle proprietà e la risorsa stringa contenente la relativa didascalia.

## <a name="colepropertypagegetcontrolstatus"></a><a name="getcontrolstatus"></a>COlePropertyPage::GetControlStatus

Determina se l'utente ha modificato il valore del controllo della pagina delle proprietà con l'ID risorsa specificato.

```
BOOL GetControlStatus(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
ID risorsa di un controllo pagina delle proprietà.

### <a name="return-value"></a>Valore restituito

TRUESe il valore del controllo è stato modificato. in caso contrario, FALSE.

## <a name="colepropertypagegetobjectarray"></a><a name="getobjectarray"></a>COlePropertyPage::GetObjectArray

Restituisce la matrice di oggetti modificati dalla pagina delle proprietà.

```
LPDISPATCH* GetObjectArray(ULONG* pnObjects);
```

### <a name="parameters"></a>Parametri

*pnOggetti*<br/>
Puntatore a un intero lungo senza segno che riceverà il numero di oggetti modificati dalla pagina.

### <a name="return-value"></a>Valore restituito

Puntatore a `IDispatch` una matrice di puntatori, utilizzati per accedere alle proprietà di ogni controllo nella pagina delle proprietà. Il chiamante non deve rilasciare questi puntatori a interfaccia.

### <a name="remarks"></a>Osservazioni

Ogni oggetto pagina delle proprietà gestisce `IDispatch` una matrice di puntatori alle interfacce degli oggetti modificati dalla pagina. Questa funzione imposta il relativo *pnObjects* argomento per il numero di elementi in tale matrice e restituisce un puntatore al primo elemento della matrice.

## <a name="colepropertypagegetpagesite"></a><a name="getpagesite"></a>COlePropertyPage::GetPageSite

Ottiene un puntatore all'interfaccia della `IPropertyPageSite` pagina delle proprietà.

```
LPPROPERTYPAGESITE GetPageSite();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia della `IPropertyPageSite` pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

I controlli e i contenitori collaborano in modo che gli utenti possano esplorare e modificare le proprietà del controllo. Il controllo fornisce pagine delle proprietà, ognuna delle quali è un oggetto OLE che consente all'utente di modificare un set correlato di proprietà. Il contenitore fornisce una cornice delle proprietà che visualizza le pagine delle proprietà. Per ogni pagina, il frame della proprietà fornisce `IPropertyPageSite` un sito della pagina, che supporta l'interfaccia.

## <a name="colepropertypageignoreapply"></a><a name="ignoreapply"></a>COlePropertyPage::IgnoreApply

Determina quali controlli non abilitano il pulsante Applica.

```cpp
void IgnoreApply(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
ID del controllo da ignorare.

### <a name="remarks"></a>Osservazioni

Il pulsante Applica della pagina delle proprietà è abilitato solo quando sono stati modificati i valori dei controlli della pagina delle proprietà. Utilizzare questa funzione per specificare i controlli che non causano l'abilitazione del pulsante Applica quando cambiano i relativi valori.

## <a name="colepropertypageismodified"></a><a name="ismodified"></a>COlePropertyPage::IsModified

Determina se l'utente ha modificato i valori nella pagina delle proprietà.

```
BOOL IsModified();
```

### <a name="return-value"></a>Valore restituito

TRUESe la pagina delle proprietà è stata modificata.

## <a name="colepropertypageoneditproperty"></a><a name="oneditproperty"></a>COlePropertyPage::OnEditProperty

Il framework chiama questa funzione quando una proprietà specifica deve essere modificata.

```
virtual BOOL OnEditProperty(DISPID dispid);
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
ID dispatch della proprietà in corso di modifica.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce FALSE. Gli override di questa funzione devono restituire TRUE.

### <a name="remarks"></a>Osservazioni

È possibile eseguirne l'override per impostare lo stato attivo sul controllo appropriato nella pagina. L'implementazione predefinita non esegue alcuna operazione e restituisce FALSE.

## <a name="colepropertypageonhelp"></a><a name="onhelp"></a>COlePropertyPage::OnHelp

Il framework chiama questa funzione quando l'utente richiede la Guida in linea.

```
virtual BOOL OnHelp(LPCTSTR lpszHelpDir);
```

### <a name="parameters"></a>Parametri

*lpszHelpDir*<br/>
Directory contenente il file della Guida della pagina delle proprietà.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce FALSE.

### <a name="remarks"></a>Osservazioni

Eseguire l'override se la pagina delle proprietà deve eseguire qualsiasi azione speciale quando l'utente accede alla Guida. L'implementazione predefinita non esegue alcuna operazione e restituisce FALSE, che indica al framework di chiamare WinHelp.The default implementation does nothing and returns FALSE, which isstructs the framework to call WinHelp.

## <a name="colepropertypageoninitdialog"></a><a name="oninitdialog"></a>COlePropertyPage::OnInitDialog

Il framework chiama questa funzione quando viene inizializzata la finestra di dialogo della pagina delle proprietà.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce FALSE.

### <a name="remarks"></a>Osservazioni

Eseguire l'override se è necessaria un'azione speciale quando la finestra di dialogo viene inizializzata. L'implementazione `CDialog::OnInitDialog` predefinita chiama e restituisce FALSE.

## <a name="colepropertypageonobjectschanged"></a><a name="onobjectschanged"></a>COlePropertyPage::OnObjectsChanged

Chiamato dal framework quando viene scelto un altro controllo OLE, con nuove proprietà.

```
virtual void OnObjectsChanged();
```

### <a name="remarks"></a>Osservazioni

Quando si visualizzano le proprietà di un controllo OLE nell'ambiente di sviluppo, viene utilizzata una finestra di dialogo non modale per visualizzare le relative pagine delle proprietà. Se viene selezionato un altro controllo, è necessario visualizzare un set diverso di pagine delle proprietà per il nuovo set di proprietà. Il framework chiama questa funzione per notificare la pagina delle proprietà della modifica.

Eseguire l'override di questa funzione per ricevere la notifica di questa azione ed eseguire azioni speciali.

## <a name="colepropertypageonsetpagesite"></a><a name="onsetpagesite"></a>COlePropertyPage::OnSetPageSite

Il framework chiama questa funzione quando la cornice delle proprietà fornisce il sito della pagina delle proprietà.

```
virtual void OnSetPageSite();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita carica la didascalia della pagina e tenta di determinare le dimensioni della pagina dalla risorsa finestra di dialogo. Eseguire l'override di questa funzione se la pagina delle proprietà richiede ulteriori azioni; l'override deve chiamare l'implementazione della classe base.

## <a name="colepropertypagesetcontrolstatus"></a><a name="setcontrolstatus"></a>COlePropertyPage::SetControlStatus

Modifica lo stato di un controllo della pagina delle proprietà.

```
BOOL SetControlStatus(
    UINT nID,
    BOOL bDirty);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Contiene l'ID di un controllo della pagina delle proprietà.

*bSporco*<br/>
Specifica se un campo della pagina delle proprietà è stato modificato. Impostare su TRUE se il campo è stato modificato, FALSE se non è stato modificato.

### <a name="return-value"></a>Valore restituito

TRUE, se il controllo specificato è stato impostato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se lo stato di un controllo della pagina delle proprietà è dirty quando la pagina delle proprietà viene chiusa o viene scelto il pulsante Applica, la proprietà del controllo verrà aggiornata con il valore appropriato.

## <a name="colepropertypagesetdialogresource"></a><a name="setdialogresource"></a>COlePropertyPage::SetDialogResource

Imposta la risorsa finestra di dialogo della pagina delle proprietà.

```cpp
void SetDialogResource(HGLOBAL hDialog);
```

### <a name="parameters"></a>Parametri

*hDialog (finestra di dialogo)*<br/>
Gestire la risorsa finestra di dialogo della pagina delle proprietà.

## <a name="colepropertypagesethelpinfo"></a><a name="sethelpinfo"></a>COlePropertyPage::SetHelpInfo

Specifica le informazioni sulla descrizione comando, il nome del file della Guida e il contesto della Guida per la pagina delle proprietà.

```cpp
void SetHelpInfo(
    LPCTSTR lpszDocString,
    LPCTSTR lpszHelpFile = NULL,
    DWORD dwHelpContext = 0);
```

### <a name="parameters"></a>Parametri

*lpszDocString (stringhe)*<br/>
Stringa contenente brevi informazioni della Guida da visualizzare in una barra di stato o in un'altra posizione.

*lpszHelpFile (file)*<br/>
Nome del file della Guida della pagina delle proprietà.

*dwHelpContext*<br/>
Contesto della Guida per la pagina delle proprietà.

## <a name="colepropertypagesetmodifiedflag"></a><a name="setmodifiedflag"></a>COlePropertyPage::SetModifiedFlag

Indica se l'utente ha modificato la pagina delle proprietà.

```cpp
void SetModifiedFlag(BOOL bModified = TRUE);
```

### <a name="parameters"></a>Parametri

*bModificato*<br/>
Specifica il nuovo valore per il flag modificato della pagina delle proprietà.

## <a name="colepropertypagesetpagename"></a><a name="setpagename"></a>COlePropertyPage::NomePaginaSetPage

Imposta il nome della pagina delle proprietà, che la cornice delle proprietà verrà in genere visualizzata nella scheda della pagina.

```cpp
void SetPageName(LPCTSTR lpszPageName);
```

### <a name="parameters"></a>Parametri

*lpszPageName (nome di pagina di lpszPage)*<br/>
Puntatore a una stringa contenente il nome della pagina delle proprietà.

## <a name="see-also"></a>Vedere anche

[Esempio MFC CIRC3](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC TESTHELP](../../overview/visual-cpp-samples.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
