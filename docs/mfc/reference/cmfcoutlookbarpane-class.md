---
title: Classe CMFCOutlookBarPane
ms.date: 11/04/2016
f1_keywords:
- CMFCOutlookBarPane
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::AddButton
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::CanBeAttached
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::ClearAll
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::Create
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::EnablePageScrollMode
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::GetRegularColor
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::IsBackgroundTexture
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::IsDrawShadedHighlight
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::RemoveButton
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetBackColor
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetBackImage
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetDefaultState
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetExtraSpace
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetTextColor
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetTransparentColor
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::EnableContextMenuItems
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::RemoveAllButtons
helpviewer_keywords:
- CMFCOutlookBarPane [MFC], AddButton
- CMFCOutlookBarPane [MFC], CanBeAttached
- CMFCOutlookBarPane [MFC], ClearAll
- CMFCOutlookBarPane [MFC], Create
- CMFCOutlookBarPane [MFC], EnablePageScrollMode
- CMFCOutlookBarPane [MFC], GetRegularColor
- CMFCOutlookBarPane [MFC], IsBackgroundTexture
- CMFCOutlookBarPane [MFC], IsDrawShadedHighlight
- CMFCOutlookBarPane [MFC], RemoveButton
- CMFCOutlookBarPane [MFC], SetBackColor
- CMFCOutlookBarPane [MFC], SetBackImage
- CMFCOutlookBarPane [MFC], SetDefaultState
- CMFCOutlookBarPane [MFC], SetExtraSpace
- CMFCOutlookBarPane [MFC], SetTextColor
- CMFCOutlookBarPane [MFC], SetTransparentColor
- CMFCOutlookBarPane [MFC], EnableContextMenuItems
- CMFCOutlookBarPane [MFC], RemoveAllButtons
ms.assetid: 094e2ef3-a118-487e-a4cc-27626108fe08
ms.openlocfilehash: 9ef6a06a4889119e39e72a9e495e5d4f9e17cf56
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69505157"
---
# <a name="cmfcoutlookbarpane-class"></a>Classe CMFCOutlookBarPane

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

Controllo derivato dalla [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) che può essere inserito in una barra di Outlook ( [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)). Il riquadro della barra di Outlook contiene una colonna di pulsanti di grandi dimensioni. L'utente può scorrere verso l'alto e verso il basso l'elenco dei pulsanti, se questo è più grande del riquadro. Quando l'utente scollega un riquadro della barra di Outlook dalla barra stessa, questo può rimanere mobile o essere ancorato nella finestra cornice principale.

## <a name="syntax"></a>Sintassi

```
class CMFCOutlookBarPane : public CMFCToolBar
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|`CMFCOutlookBarPane::CMFCOutlookBarPane`|Costruttore predefinito.|
|`CMFCOutlookBarPane::~CMFCOutlookBarPane`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCOutlookBarPane::AddButton](#addbutton)|Aggiunge un pulsante al riquadro della barra di Outlook.|
|[CMFCOutlookBarPane::CanBeAttached](#canbeattached)|Determina se il riquadro può essere ancorato a un altro riquadro o a una finestra cornice. Esegue l'override di [CBasePane:: CanBeAttached](../../mfc/reference/cbasepane-class.md#canbeattached).|
|`CMFCOutlookBarPane::CanBeRestored`|Determina se il sistema è in grado di ripristinare lo stato originale di una barra degli strumenti dopo la personalizzazione. Esegue l'override di [CMFCToolBar:: CanBeRestored](../../mfc/reference/cmfctoolbar-class.md#canberestored).|
|[CMFCOutlookBarPane::ClearAll](#clearall)|Libera le risorse utilizzate dalle immagini nel riquadro della barra di Outlook.|
|[CMFCOutlookBarPane::Create](#create)|Crea il riquadro della barra di Outlook.|
|`CMFCOutlookBarPane::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCOutlookBarPane::Dock`|Chiamata eseguita dal Framework per ancorare il riquadro della barra di Outlook. Esegue l'override di `CPane::Dock`.|
|[CMFCOutlookBarPane::EnablePageScrollMode](#enablepagescrollmode)|Specifica se le frecce di scorrimento nel riquadro della barra di Outlook spostano l'elenco dei pulsanti per pagina o per pulsante.|
|[CMFCOutlookBarPane::GetRegularColor](#getregularcolor)|Restituisce il colore del testo normale (non selezionato) del riquadro della barra di Outlook.|
|`CMFCOutlookBarPane::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCOutlookBarPane::IsBackgroundTexture](#isbackgroundtexture)|Determina se è stata caricata un'immagine di sfondo per il riquadro della barra di Outlook.|
|`CMFCOutlookBarPane::IsChangeState`|Determina se un riquadro mobile può essere ancorato. Esegue l'override di `CPane::IsChangeState`.|
|[CMFCOutlookBarPane::IsDrawShadedHighlight](#isdrawshadedhighlight)|Determina se il bordo del pulsante è ombreggiato quando viene evidenziato un pulsante e viene visualizzata un'immagine di sfondo.|
|`CMFCOutlookBarPane::OnBeforeFloat`|Chiamata eseguita dal framework quando un riquadro sta per essere float. Esegue l'override di [CPane:: OnBeforeFloat](../../mfc/reference/cpane-class.md#onbeforefloat).|
|[CMFCOutlookBarPane::RemoveButton](#removebutton)|Rimuove il pulsante con l'ID di comando specificato.|
|`CMFCOutlookBarPane::RestoreOriginalstate`|Ripristina lo stato originale di una barra degli strumenti. Esegue l'override di [CMFCToolBar:: RestoreOriginalState](../../mfc/reference/cmfctoolbar-class.md#restoreoriginalstate).|
|[CMFCOutlookBarPane::SetBackColor](#setbackcolor)|Imposta il colore di sfondo.|
|[CMFCOutlookBarPane::SetBackImage](#setbackimage)|Imposta l'immagine di sfondo.|
|[CMFCOutlookBarPane::SetDefaultState](#setdefaultstate)|Reimposta il riquadro della barra di Outlook sul set originale di pulsanti.|
|[CMFCOutlookBarPane::SetExtraSpace](#setextraspace)|Imposta il numero di pixel di riempimento utilizzati intorno ai pulsanti nel riquadro della barra di Outlook.|
|[CMFCOutlookBarPane::SetTextColor](#settextcolor)|Imposta i colori del testo normale e evidenziato nel riquadro della barra di Outlook.|
|[CMFCOutlookBarPane::SetTransparentColor](#settransparentcolor)|Imposta il colore trasparente per il riquadro della barra di Outlook.|
|`CMFCOutlookBarPane::SmartUpdate`|Utilizzato internamente per aggiornare la barra di Outlook. Esegue l'override di `CMFCToolBar::SmartUpdate`.|

### <a name="protected-methods"></a>Metodi protetti

|Name|Descrizione|
|----------|-----------------|
|[CMFCOutlookBarPane::EnableContextMenuItems](#enablecontextmenuitems)|Specifica le voci di menu di scelta rapida visualizzate in modalità di personalizzazione.|
|[CMFCOutlookBarPane::RemoveAllButtons](#removeallbuttons)|Rimuove tutti i pulsanti dal riquadro della barra di Outlook. Esegue l'override di [CMFCToolBar:: RemoveAllButtons](../../mfc/reference/cmfctoolbar-class.md#removeallbuttons).|

## <a name="remarks"></a>Note

Per informazioni su come implementare una barra di Outlook, vedere [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).

Per un esempio di una barra di Outlook, vedere il progetto di esempio OutlookDemo.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare i vari metodi della `CMFCOutlookBarPane` classe. Nell'esempio viene illustrato come creare un riquadro della barra di Outlook, abilitare la modalità di scorrimento pagina, abilitare l'ancoraggio e impostare il colore di sfondo della barra di Outlook. Questo frammento di codice fa parte dell' [esempio Outlook](../../overview/visual-cpp-samples.md)MultiViews.

[!code-cpp[NVC_MFC_OutlookMultiViews#3](../../mfc/reference/codesnippet/cpp/cmfcoutlookbarpane-class_1.h)]
[!code-cpp[NVC_MFC_OutlookMultiViews#4](../../mfc/reference/codesnippet/cpp/cmfcoutlookbarpane-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxoutlookbarpane. h

##  <a name="addbutton"></a>CMFCOutlookBarPane:: AddButton

Aggiunge un pulsante al riquadro della barra di Outlook.

```
BOOL AddButton(
    UINT uiImage,
    LPCTSTR lpszLabel,
    UINT iIdCommand,
    int iInsertAt=-1);

BOOL AddButton(
    UINT uiImage,
    UINT uiLabel,
    UINT iIdCommand,
    int iInsertAt=-1);

BOOL AddButton(
    LPCTSTR szBmpFileName,
    LPCTSTR szLabel,
    UINT iIdCommand,
    int iInsertAt=-1);

BOOL AddButton(
    HBITMAP hBmp,
    LPCTSTR lpszLabel,
    UINT iIdCommand,
    int iInsertAt=-1);

BOOL AddButton(
    HICON hIcon,
    LPCTSTR lpszLabel,
    UINT iIdCommand,
    int iInsertAt=-1,
    BOOL bAlphaBlend=FALSE);
```

### <a name="parameters"></a>Parametri

*uiImage*<br/>
in Specifica l'identificatore di risorsa di una bitmap.

*lpszLabel*<br/>
in Specifica il testo del pulsante.

*iIdCommand*<br/>
in Specifica l'ID del controllo Button.

*iInsertAt*<br/>
in Specifica l'indice in base zero nella pagina della barra di Outlook in corrispondenza della quale inserire il pulsante.

*uiLabel*<br/>
in ID di risorsa di stringa.

*szBmpFileName*<br/>
in Specifica il nome del file di immagine disco da caricare.

*szLabel*<br/>
in Specifica il testo del pulsante.

*hBmp*<br/>
in Handle per la bitmap di un pulsante.

*hIcon*<br/>
in Handle per l'icona di un pulsante.

### <a name="return-value"></a>Valore restituito

TRUE se un pulsante è stato aggiunto correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Utilizzare questo metodo per inserire un nuovo pulsante nella pagina di una barra di Outlook. È possibile caricare l'immagine del pulsante dalle risorse dell'applicazione o da un file su disco.

Se l'ID di pagina specificato da *uiPageID* è-1, il pulsante viene inserito nella prima pagina.

Se l'indice specificato da *iInsertAt* è-1, il pulsante viene aggiunto alla fine della pagina.

##  <a name="canbeattached"></a>CMFCOutlookBarPane:: CanBeAttached

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

```
virtual BOOL CanBeAttached() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="clearall"></a>CMFCOutlookBarPane:: ClearAll

Libera le risorse usate dalle immagini nel riquadro della barra di Outlook.

```
void ClearAll();
```

### <a name="remarks"></a>Note

Questo metodo chiama direttamente [CMFCToolBarImages:: Clear](../../mfc/reference/cmfctoolbarimages-class.md#clear), che viene chiamato sulle immagini utilizzate dal riquadro della barra di Outlook.

##  <a name="create"></a>CMFCOutlookBarPane:: create

Crea il riquadro della barra di Outlook.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle=AFX_DEFAULT_TOOLBAR_STYLE,
    UINT uiID=(UINT)-1,
    DWORD dwControlBarStyle=0);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
in Specifica la finestra padre del controllo del riquadro della barra di Outlook. Non può essere NULL.

*dwStyle*<br/>
in Stile della finestra.  Per un elenco degli stili della finestra, vedere [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*uiID*<br/>
in ID del controllo. Deve essere univoco per consentire il salvataggio dello stato del controllo.

*dwControlBarStyle*<br/>
in Specifica gli stili speciali che definiscono il comportamento del controllo del riquadro della barra di Outlook quando viene scollegato dalla barra di Outlook.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per costruire un `CMFCOutlookBarPane` oggetto, chiamare prima il costruttore, quindi chiamare `Create`, che crea il controllo del riquadro della barra di Outlook e lo `CMFCOutlookBarPane` collega all'oggetto.

Per ulteriori informazioni su `dwControlBarStyle` , vedere [CBasePane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex).

##  <a name="enablecontextmenuitems"></a>CMFCOutlookBarPane:: EnableContextMenuItems

Specifica le voci di menu di scelta rapida visualizzate in modalità di personalizzazione.

```
virtual BOOL EnableContextMenuItems(
    CMFCToolBarButton* pButton,
    CMenu* pPopup);
```

### <a name="parameters"></a>Parametri

*pButton*<br/>
in Puntatore a un pulsante della barra degli strumenti su cui un utente ha fatto clic.

*pPopup*<br/>
in Puntatore al menu di scelta rapida.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il menu di scelta rapida deve essere visualizzato; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per modificare il menu di scelta rapida standard del framework visualizzato dal Framework in modalità di personalizzazione.

L'implementazione predefinita controlla la modalità di personalizzazione ( [CMFCToolBar:: IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)) e, se è impostata su true, Disabilita tutte le voci del menu di scelta rapida eccetto **Delete**. Quindi passa semplicemente i parametri di input a `CMFCToolBar::EnableContextMenuItems`.

> [!NOTE]
> *Menu* di scelta rapida è un sinonimo di menu di scelta rapida.

##  <a name="enablepagescrollmode"></a>CMFCOutlookBarPane:: EnablePageScrollMode

Specifica se le frecce di scorrimento nel riquadro della barra di Outlook fanno avanzare l'elenco dei pulsanti pagina per pagina o pulsante per pulsante.

```
void EnablePageScrollMode(BOOL bPageScroll=TRUE);
```

### <a name="parameters"></a>Parametri

*bPageScroll*<br/>
in Se TRUE, abilitare la modalità di scorrimento pagina. Se FALSE, disabilitare la modalità di scorrimento della pagina.

##  <a name="getregularcolor"></a>CMFCOutlookBarPane:: GetRegularColor

Restituisce il colore del testo normale (ovvero non selezionato) del riquadro della barra di Outlook.

```
DECLARE_MESSAGE_MAPCOLORREF GetRegularColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore del testo corrente come valore di colore RGB.

### <a name="remarks"></a>Note

Usare [CMFCOutlookBarPane:: SetTextColor](#settextcolor) per impostare il colore del testo corrente (normale e selezionato) della barra di Outlook. È possibile ottenere il colore del testo predefinito chiamando la funzione [GetSysColor](/windows/win32/api/winuser/nf-winuser-getsyscolor) con l'indice COLOR_WINDOW.

##  <a name="isbackgroundtexture"></a>  CMFCOutlookBarPane::IsBackgroundTexture

Determina se è stata caricata un'immagine di sfondo per il riquadro della barra di Outlook.

```
BOOL IsBackgroundTexture() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è presente un'immagine di sfondo da visualizzare; in caso contrario, FALSE.

### <a name="remarks"></a>Note

È possibile aggiungere un'immagine di sfondo chiamando la funzione [CMFCOutlookBarPane:: SetBackImage](#setbackimage) .

Se non è presente un'immagine di sfondo, lo sfondo viene disegnato con un colore specificato tramite [CMFCOutlookBarPane:: SetBackColor](#setbackcolor).

##  <a name="isdrawshadedhighlight"></a>CMFCOutlookBarPane:: IsDrawShadedHighlight

Determina se il bordo del pulsante è ombreggiato quando viene evidenziato un pulsante e viene visualizzata un'immagine di sfondo.

```
BOOL IsDrawShadedHighlight() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se i bordi del pulsante sono ombreggiati; in caso contrario, FALSE.

##  <a name="removeallbuttons"></a>  CMFCOutlookBarPane::RemoveAllButtons

Rimuove tutti i pulsanti dal riquadro della barra di Outlook.

```
virtual void RemoveAllButtons();
```

##  <a name="removebutton"></a>CMFCOutlookBarPane:: RemoveButton

Rimuove il pulsante con l'ID di comando specificato.

```
BOOL RemoveButton(UINT iIdCommand);
```

### <a name="parameters"></a>Parametri

*iIdCommand*<br/>
in Specifica l'ID comando di un pulsante da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante è stato rimosso correttamente. FALSE se l'ID di comando specificato non è valido.

##  <a name="setbackcolor"></a>CMFCOutlookBarPane:: SetBackColor

Imposta il colore di sfondo della barra di Outlook.

```
void SetBackColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
[in] Specifica il nuovo colore di sfondo.

### <a name="remarks"></a>Note

Chiamare questa funzione per impostare il colore di sfondo corrente per la barra di Outlook. Il colore di sfondo viene utilizzato solo se non è presente alcuna immagine di sfondo.

##  <a name="setbackimage"></a>CMFCOutlookBarPane:: SetBackImage

Imposta l'immagine di sfondo.

```
void SetBackImage(UINT uiImageID);
```

### <a name="parameters"></a>Parametri

*uiImageID*<br/>
in Specifica l'ID risorsa immagine.

### <a name="remarks"></a>Note

Chiamare questo metodo per impostare l'immagine di sfondo della barra di Outlook. L'elenco di immagini di sfondo viene gestito dall'oggetto della [classe CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) incorporato.

##  <a name="setdefaultstate"></a>  CMFCOutlookBarPane::SetDefaultState

Reimposta il riquadro della barra di Outlook sul set originale di pulsanti.

```
void SetDefaultState();
```

### <a name="remarks"></a>Note

Questo metodo consente di ripristinare i pulsanti della barra di Outlook nel set originale. Questo metodo è simile `CMFCOutlookBarPane::RestoreOriginalstate`a, ad eccezione del fatto che non attiva un ridisegnato del riquadro della barra di Outlook.

##  <a name="setextraspace"></a>CMFCOutlookBarPane:: SetExtraSpace

Imposta il numero di pixel di riempimento utilizzati intorno ai pulsanti nel riquadro della barra di Outlook.

```
void SetExtraSpace()
```

##  <a name="settextcolor"></a>  CMFCOutlookBarPane::SetTextColor

Imposta i colori del testo normale e evidenziato nel riquadro della barra di Outlook.

```
void SetTextColor(
    COLORREF clrRegText,
    COLORREF clrSelText=0);
```

### <a name="parameters"></a>Parametri

*clrRegText*<br/>
in Specifica il nuovo colore per il testo non selezionato.

*clrSelText*<br/>
in Specifica il nuovo colore per il testo selezionato.

##  <a name="settransparentcolor"></a>CMFCOutlookBarPane:: SetTransparentColor

Imposta il colore trasparente per il riquadro della barra di Outlook.

```
void SetTransparentColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Specifica il nuovo colore trasparente.

### <a name="remarks"></a>Note

Il colore trasparente è necessario per visualizzare le immagini trasparenti. Qualsiasi occorrenza di questo colore in un'immagine viene invece disegnata con il colore di sfondo.  Non esiste alcuna combinazione di immagini in background e in primo piano.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)<br/>
[Classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)
