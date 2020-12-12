---
description: 'Altre informazioni su: Classe COlePropertyPage'
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
ms.openlocfilehash: 56d5696e16a347bab5ed154faf9038c6add446dd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226727"
---
# <a name="colepropertypage-class"></a>Classe COlePropertyPage

Utilizzata per visualizzare le proprietà di un controllo personalizzato in un'interfaccia grafica, simile a una finestra di dialogo.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE COlePropertyPage : public CDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COlePropertyPage:: COlePropertyPage](#colepropertypage)|Costruisce un oggetto `COlePropertyPage`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COlePropertyPage:: GetControlStatus](#getcontrolstatus)|Indica se l'utente ha modificato il valore nel controllo.|
|[COlePropertyPage:: GetObjectArray](#getobjectarray)|Restituisce la matrice di oggetti modificati dalla pagina delle proprietà.|
|[COlePropertyPage:: GetPageSite](#getpagesite)|Restituisce un puntatore all'interfaccia della pagina delle proprietà `IPropertyPageSite` .|
|[COlePropertyPage:: IgnoreApply](#ignoreapply)|Determina i controlli che non abilitano il pulsante Applica.|
|[COlePropertyPage:: modified](#ismodified)|Indica se l'utente ha modificato la pagina delle proprietà.|
|[COlePropertyPage:: OnEditProperty](#oneditproperty)|Chiamata eseguita dal framework quando l'utente modifica una proprietà.|
|[COlePropertyPage:: OnHelp](#onhelp)|Chiamata eseguita dal framework quando l'utente richiama la guida.|
|[COlePropertyPage:: OnInitDialog](#oninitdialog)|Chiamata eseguita dal framework quando viene inizializzata la pagina delle proprietà.|
|[COlePropertyPage:: OnObjectsChanged](#onobjectschanged)|Chiamata eseguita dal framework quando viene scelto un altro controllo OLE, con le nuove proprietà.|
|[COlePropertyPage:: OnSetPageSite](#onsetpagesite)|Chiamata eseguita dal framework quando il frame della proprietà fornisce il sito della pagina.|
|[COlePropertyPage:: SetControlStatus](#setcontrolstatus)|Imposta un flag che indica se l'utente ha modificato il valore nel controllo.|
|[COlePropertyPage:: SetDialogResource](#setdialogresource)|Imposta la risorsa finestra di dialogo della pagina delle proprietà.|
|[COlePropertyPage:: SetHelpInfo](#sethelpinfo)|Imposta il breve testo della guida della pagina delle proprietà, il nome del file della guida e il contesto della guida.|
|[COlePropertyPage:: SetModifiedFlag](#setmodifiedflag)|Imposta un flag che indica se l'utente ha modificato la pagina delle proprietà.|
|[COlePropertyPage:: sepagename](#setpagename)|Imposta il nome della pagina delle proprietà (didascalia).|

## <a name="remarks"></a>Commenti

Ad esempio, una pagina delle proprietà può includere un controllo di modifica che consente all'utente di visualizzare e modificare la proprietà didascalia del controllo.

Ogni proprietà personalizzata o di controllo del magazzino può disporre di un controllo finestra di dialogo che consente all'utente del controllo di visualizzare il valore della proprietà corrente e di modificarlo, se necessario.

Per ulteriori informazioni sull'utilizzo di `COlePropertyPage` , vedere l'articolo [controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`COlePropertyPage`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="colepropertypagecolepropertypage"></a><a name="colepropertypage"></a> COlePropertyPage:: COlePropertyPage

Costruisce un oggetto `COlePropertyPage`.

```
COlePropertyPage(
    UINT idDlg,
    UINT idCaption);
```

### <a name="parameters"></a>Parametri

*idDlg*<br/>
ID risorsa del modello di finestra di dialogo.

*idCaption*<br/>
ID risorsa della didascalia della pagina delle proprietà.

### <a name="remarks"></a>Commenti

Quando si implementa una sottoclasse di `COlePropertyPage` , il costruttore della sottoclasse deve usare il `COlePropertyPage` costruttore per identificare la risorsa del modello di finestra di dialogo su cui si basa la pagina delle proprietà e la risorsa di stringa che contiene la didascalia.

## <a name="colepropertypagegetcontrolstatus"></a><a name="getcontrolstatus"></a> COlePropertyPage:: GetControlStatus

Determina se l'utente ha modificato il valore del controllo della pagina delle proprietà con l'ID di risorsa specificato.

```
BOOL GetControlStatus(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
ID risorsa di un controllo della pagina delle proprietà.

### <a name="return-value"></a>Valore restituito

TRUE se il valore del controllo è stato modificato. in caso contrario, FALSE.

## <a name="colepropertypagegetobjectarray"></a><a name="getobjectarray"></a> COlePropertyPage:: GetObjectArray

Restituisce la matrice di oggetti modificati dalla pagina delle proprietà.

```
LPDISPATCH* GetObjectArray(ULONG* pnObjects);
```

### <a name="parameters"></a>Parametri

*pnObjects*<br/>
Puntatore a un valore long integer senza segno che riceverà il numero di oggetti modificati dalla pagina.

### <a name="return-value"></a>Valore restituito

Puntatore a una matrice di `IDispatch` puntatori, usati per accedere alle proprietà di ogni controllo nella pagina delle proprietà. Il chiamante non deve rilasciare questi puntatori di interfaccia.

### <a name="remarks"></a>Commenti

Ogni oggetto pagina delle proprietà mantiene una matrice di puntatori alle `IDispatch` interfacce degli oggetti modificati dalla pagina. Questa funzione imposta il relativo argomento *pnObjects* sul numero di elementi nella matrice e restituisce un puntatore al primo elemento della matrice.

## <a name="colepropertypagegetpagesite"></a><a name="getpagesite"></a> COlePropertyPage:: GetPageSite

Ottiene un puntatore all'interfaccia della pagina delle proprietà `IPropertyPageSite` .

```
LPPROPERTYPAGESITE GetPageSite();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia della pagina delle proprietà `IPropertyPageSite` .

### <a name="remarks"></a>Commenti

I controlli e i contenitori cooperano in modo che gli utenti possano esplorare e modificare le proprietà dei controlli. Il controllo fornisce pagine di proprietà, ognuna delle quali è un oggetto OLE che consente all'utente di modificare un set correlato di proprietà. Il contenitore fornisce un frame di proprietà che visualizza le pagine delle proprietà. Per ogni pagina, il frame della proprietà fornisce un sito della pagina che supporta l' `IPropertyPageSite` interfaccia.

## <a name="colepropertypageignoreapply"></a><a name="ignoreapply"></a> COlePropertyPage:: IgnoreApply

Determina i controlli che non abilitano il pulsante Applica.

```cpp
void IgnoreApply(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
ID del controllo da ignorare.

### <a name="remarks"></a>Commenti

Il pulsante applica della pagina delle proprietà è abilitato solo quando i valori dei controlli della pagina delle proprietà sono stati modificati. Usare questa funzione per specificare i controlli che non determinano l'abilitazione del pulsante applica quando cambiano i valori.

## <a name="colepropertypageismodified"></a><a name="ismodified"></a> COlePropertyPage:: modified

Determina se l'utente ha modificato i valori nella pagina delle proprietà.

```
BOOL IsModified();
```

### <a name="return-value"></a>Valore restituito

TRUE se la pagina delle proprietà è stata modificata.

## <a name="colepropertypageoneditproperty"></a><a name="oneditproperty"></a> COlePropertyPage:: OnEditProperty

Il Framework chiama questa funzione quando è necessario modificare una proprietà specifica.

```
virtual BOOL OnEditProperty(DISPID dispid);
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch della proprietà da modificare.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce FALSE. Le sostituzioni di questa funzione devono restituire TRUE.

### <a name="remarks"></a>Commenti

È possibile eseguirne l'override per impostare lo stato attivo sul controllo appropriato nella pagina. L'implementazione predefinita non esegue alcuna operazione e restituisce FALSE.

## <a name="colepropertypageonhelp"></a><a name="onhelp"></a> COlePropertyPage:: OnHelp

Il Framework chiama questa funzione quando l'utente richiede la guida online.

```
virtual BOOL OnHelp(LPCTSTR lpszHelpDir);
```

### <a name="parameters"></a>Parametri

*lpszHelpDir*<br/>
Directory contenente il file della guida della pagina delle proprietà.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce FALSE.

### <a name="remarks"></a>Commenti

Eseguirne l'override se la pagina delle proprietà deve eseguire un'azione speciale quando l'utente accede alla guida. L'implementazione predefinita non esegue alcuna operazione e restituisce FALSE, che indica al Framework di chiamare WinHelp.

## <a name="colepropertypageoninitdialog"></a><a name="oninitdialog"></a> COlePropertyPage:: OnInitDialog

Il Framework chiama questa funzione quando la finestra di dialogo della pagina delle proprietà viene inizializzata.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce FALSE.

### <a name="remarks"></a>Commenti

Eseguirne l'override se è necessaria un'azione speciale quando la finestra di dialogo viene inizializzata. L'implementazione predefinita chiama `CDialog::OnInitDialog` e restituisce false.

## <a name="colepropertypageonobjectschanged"></a><a name="onobjectschanged"></a> COlePropertyPage:: OnObjectsChanged

Chiamata eseguita dal framework quando viene scelto un altro controllo OLE, con le nuove proprietà.

```
virtual void OnObjectsChanged();
```

### <a name="remarks"></a>Commenti

Quando si visualizzano le proprietà di un controllo OLE nell'ambiente di sviluppo, viene utilizzata una finestra di dialogo non modale per visualizzare le relative pagine delle proprietà. Se si seleziona un altro controllo, per il nuovo set di proprietà deve essere visualizzato un set di pagine delle proprietà diverso. Il Framework chiama questa funzione per inviare una notifica alla pagina delle proprietà della modifica.

Eseguire l'override di questa funzione per ricevere la notifica di questa azione ed eseguire qualsiasi azione speciale.

## <a name="colepropertypageonsetpagesite"></a><a name="onsetpagesite"></a> COlePropertyPage:: OnSetPageSite

Il Framework chiama questa funzione quando il frame della proprietà fornisce il sito della pagina delle proprietà.

```
virtual void OnSetPageSite();
```

### <a name="remarks"></a>Commenti

L'implementazione predefinita carica la didascalia della pagina e tenta di determinare le dimensioni della pagina dalla risorsa finestra di dialogo. Eseguire l'override di questa funzione se la pagina delle proprietà richiede ulteriori azioni. l'override deve chiamare l'implementazione della classe di base.

## <a name="colepropertypagesetcontrolstatus"></a><a name="setcontrolstatus"></a> COlePropertyPage:: SetControlStatus

Modifica lo stato di un controllo della pagina delle proprietà.

```
BOOL SetControlStatus(
    UINT nID,
    BOOL bDirty);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Contiene l'ID di un controllo della pagina delle proprietà.

*bDirty*<br/>
Specifica se un campo della pagina delle proprietà è stato modificato. Impostare su TRUE se il campo è stato modificato, FALSE se non è stato modificato.

### <a name="return-value"></a>Valore restituito

TRUE se il controllo specificato è stato impostato. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Se lo stato di un controllo della pagina delle proprietà è dirty quando la pagina delle proprietà è chiusa o viene scelto il pulsante Applica, la proprietà del controllo verrà aggiornata con il valore appropriato.

## <a name="colepropertypagesetdialogresource"></a><a name="setdialogresource"></a> COlePropertyPage:: SetDialogResource

Imposta la risorsa finestra di dialogo della pagina delle proprietà.

```cpp
void SetDialogResource(HGLOBAL hDialog);
```

### <a name="parameters"></a>Parametri

*hDialog*<br/>
Handle per la risorsa finestra di dialogo della pagina delle proprietà.

## <a name="colepropertypagesethelpinfo"></a><a name="sethelpinfo"></a> COlePropertyPage:: SetHelpInfo

Specifica le informazioni sulla descrizione comando, il nome file della guida e il contesto della Guida per la pagina delle proprietà.

```cpp
void SetHelpInfo(
    LPCTSTR lpszDocString,
    LPCTSTR lpszHelpFile = NULL,
    DWORD dwHelpContext = 0);
```

### <a name="parameters"></a>Parametri

*lpszDocString*<br/>
Stringa contenente brevi informazioni della Guida per la visualizzazione in una barra di stato o in un'altra posizione.

*lpszHelpFile*<br/>
Nome del file della guida della pagina delle proprietà.

*dwHelpContext*<br/>
Contesto della Guida per la pagina delle proprietà.

## <a name="colepropertypagesetmodifiedflag"></a><a name="setmodifiedflag"></a> COlePropertyPage:: SetModifiedFlag

Indica se l'utente ha modificato la pagina delle proprietà.

```cpp
void SetModifiedFlag(BOOL bModified = TRUE);
```

### <a name="parameters"></a>Parametri

*bModified*<br/>
Specifica il nuovo valore per il flag modificato della pagina delle proprietà.

## <a name="colepropertypagesetpagename"></a><a name="setpagename"></a> COlePropertyPage:: sepagename

Imposta il nome della pagina delle proprietà, che viene in genere visualizzato nel frame della proprietà nella scheda della pagina.

```cpp
void SetPageName(LPCTSTR lpszPageName);
```

### <a name="parameters"></a>Parametri

*lpszPageName*<br/>
Puntatore a una stringa contenente il nome della pagina delle proprietà.

## <a name="see-also"></a>Vedi anche

[CIRC3 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[TESTHELP di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
