---
title: Classe CSplitButton
ms.date: 11/19/2018
f1_keywords:
- CSplitButton
- AFXCMN/CSplitButton
- AFXCMN/CSplitButton::CSplitButton
- AFXCMN/CSplitButton::Create
- AFXCMN/CSplitButton::SetDropDownMenu
- AFXCMN/CSplitButton::OnDropDown
helpviewer_keywords:
- CSplitButton [MFC], CSplitButton
- CSplitButton [MFC], Create
- CSplitButton [MFC], SetDropDownMenu
- CSplitButton [MFC], OnDropDown
ms.assetid: 6844d0a9-6408-4e44-9b5f-57628ed8bad6
ms.openlocfilehash: 70bba379f33be2d4df05f6b96eac14bf248cf356
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64346271"
---
# <a name="csplitbutton-class"></a>Classe CSplitButton

Il `CSplitButton` classe rappresenta un controllo pulsante di menu combinato. Il controllo pulsante di menu combinato segue un comportamento predefinito quando un utente fa clic sulla parte principale del pulsante e visualizza un menu a discesa quando l'utente fa clic sulla freccia a discesa del pulsante.

## <a name="syntax"></a>Sintassi

```
class CSplitButton : public CButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSplitButton::CSplitButton](#csplitbutton)|Costruisce un oggetto `CSplitButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSplitButton::Create](#create)|Crea un controllo pulsante di menu combinato con gli stili specificati e lo collega all'oggetto corrente `CSplitButton` oggetto.|
|[CSplitButton::SetDropDownMenu](#setdropdownmenu)|Imposta il menu di scelta rapida che viene visualizzato quando un utente fa clic sulla freccia elenco a discesa del controllo pulsante di divisione corrente.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CSplitButton::OnDropDown](#ondropdown)|Gestisce la notifica BCN_DROPDOWN che viene inviato dal sistema quando l'utente seleziona la freccia di elenco a discesa del controllo pulsante di divisione corrente.|

## <a name="remarks"></a>Note

Il `CSplitButton` classe è derivata dal [CButton](../../mfc/reference/cbutton-class.md) classe. Il controllo pulsante di menu combinato è un controllo pulsante di cui lo stile è BS_SPLITBUTTON. Visualizza un menu personalizzato quando un utente fa clic sulla freccia giù. Per altre informazioni, vedere gli stili BS_SPLITBUTTON e BS_DEFSPLITBUTTON [stili dei pulsanti](/windows/desktop/Controls/button-styles).

La figura seguente rappresenta una finestra di dialogo che contiene un controllo pager e un controllo pulsante di divisione (1). Freccia a discesa (2) è già stato fatto clic e viene visualizzato il sottomenu (3).

![Finestra di dialogo con un controllo splitbutton e il cercapersone. ](../../mfc/reference/media/splitbutton_pager.png "Finestra di dialogo con un controllo splitbutton e il cercapersone.")

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

`CSplitButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

Questa classe è supportata in Windows Vista e versioni successive.

Requisiti aggiuntivi per questa classe sono descritte nel [compilare i requisiti per Windows Vista controlli comuni](../../mfc/build-requirements-for-windows-vista-common-controls.md).

##  <a name="create"></a>  CSplitButton::Create

Crea un controllo pulsante di menu combinato con gli stili specificati e lo collega all'oggetto corrente `CSplitButton` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwStyle*|[in] Una combinazione bit per bit (OR) di stili da applicare al controllo. Per altre informazioni, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).|
|*rect*|[in] Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che contiene la posizione e dimensioni del controllo.|
|*pParentWnd*|[in] Un puntatore non null a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto, ovvero la finestra padre del controllo.|
|*nID*|[in] L'ID del controllo.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

##  <a name="csplitbutton"></a>  CSplitButton::CSplitButton

Costruisce un oggetto `CSplitButton`. I parametri del costruttore specificano un sottomenu che viene visualizzato quando l'utente seleziona la freccia di elenco a discesa del controllo pulsante di divisione.

```
CSplitButton();

CSplitButton(
    UINT nMenuId,
    UINT nSubMenuId)
CSplitButton(CMenu* pMenu)
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*nMenuId*|[in] L'ID risorsa della barra dei menu.|
|*nSubMenuId*|[in] L'ID di risorsa di un sottomenu.|
|*pMenu*|[in] Un puntatore a un [CMenu](../../mfc/reference/cmenu-class.md) oggetto che specifica un sottomenu. Il `CSplitButton` eliminazioni dell'oggetto di `CMenu` oggetto e relativo HMENU associati quando la `CSplitButton` oggetto esce dall'ambito.|

### <a name="remarks"></a>Note

Usare la [CSplitButton::Create](#create) per creare un controllo pulsante di menu combinato e associarlo al `CSplitButton` oggetto.

##  <a name="ondropdown"></a>  CSplitButton::OnDropDown

Gestisce la notifica BCN_DROPDOWN che viene inviato dal sistema quando l'utente seleziona la freccia di elenco a discesa del controllo pulsante di divisione corrente.

```
afx_msg void OnDropDown(
    NMHDR* pNMHDR,
    LRESULT* pResult);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pNMHDR*|[in] Puntatore a un [NMHDR](/windows/desktop/api/richedit/ns-richedit-_nmhdr) struttura che contiene informazioni sul [BCN_DROPDOWN](/windows/desktop/Controls/bcn-dropdown) notifica.|
|*pResult*|[out] (Non usato, viene restituito alcun valore). Valore restituito del [BCN_DROPDOWN](/windows/desktop/Controls/bcn-dropdown) notifica.|

### <a name="remarks"></a>Note

Quando l'utente fa clic sulla freccia giù in un controllo split button, sistema invia una notifica BCN_DROPDOWN dei messaggi, quali il `OnDropDown` gli handle di metodo. Tuttavia, il `CSplitButton` oggetto non inoltra la notifica BCN_DROPDOWN al controllo che contiene il controllo pulsante di menu combinato. Di conseguenza, il controllo che lo contiene non supporta un'azione personalizzata in risposta alla notifica.

Per implementare un'azione personalizzata che supporta il controllo contenitore, usare una [CButton](../../mfc/reference/cbutton-class.md) oggetto con uno stile di BS_SPLITBUTTON consente invece di un `CSplitButton` oggetto. Quindi implementare un gestore per la notifica BCN_DROPDOWN nel `CButton` oggetto. Per altre informazioni, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).

Per implementare un'azione personalizzata che il pulsante di divisione controllo stesso supporta, utilizzare [reflection di messaggio](../../mfc/tn062-message-reflection-for-windows-controls.md). Derivare la propria classe dal `CSplitButton` classe e assegnargli il nome, ad esempio, CMySplitButton. Per l'applicazione per gestire la notifica BCN_DROPDOWN quindi aggiungere la mappa dei messaggi seguenti:

```
BEGIN_MESSAGE_MAP(CMySplitButton,
    CSplitButton)
    ON_NOTIFY_REFLECT(BCN_DROPDOWN, &CMySplitButton::OnDropDown)
END_MESSAGE_MAP()
```

##  <a name="setdropdownmenu"></a>  CSplitButton::SetDropDownMenu

Imposta il menu di scelta rapida che viene visualizzato quando un utente fa clic sulla freccia elenco a discesa del controllo pulsante di divisione corrente.

```
void SetDropDownMenu(
    UINT nMenuId,
    UINT nSubMenuId);

void SetDropDownMenu(CMenu* pMenu);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*nMenuId*|[in] L'ID risorsa della barra dei menu.|
|*nSubMenuId*|[in] L'ID di risorsa di un sottomenu.|
|*pMenu*|[in] Puntatore a un [CMenu](../../mfc/reference/cmenu-class.md) oggetto che specifica un sottomenu. Il `CSplitButton` eliminazioni dell'oggetto di `CMenu` oggetto e relativo HMENU associati quando la `CSplitButton` oggetto esce dall'ambito.|

### <a name="remarks"></a>Note

Il *nMenuId* parametro identifica una barra dei menu, ovvero un elenco delle voci di menu barra orizzontale. Il *nSubMenuId* parametro è un numero di indice in base zero che identifica un sottomenu, ovvero l'elenco di riepilogo a discesa delle voci di menu associata a ogni elemento della barra dei menu. Ad esempio, una tipica applicazione dispone di un menu che contiene gli elementi della barra dei menu, "File", "Modifica" e "Help". L'elemento della barra di menu "File" dispone di un sottomenu contenente le voci di menu "Apri", "Chiudi" ed "Exit". Quando si fa clic sulla freccia a discesa del controllo pulsante di menu combinato, il controllo viene visualizzato il sottomenu specificato, non la barra dei menu.

La figura seguente rappresenta una finestra di dialogo che contiene un controllo pager e un controllo pulsante di divisione (1). Freccia a discesa (2) è già stato fatto clic e viene visualizzato il sottomenu (3).

![Finestra di dialogo con un controllo splitbutton e il cercapersone. ](../../mfc/reference/media/splitbutton_pager.png "Finestra di dialogo con un controllo splitbutton e il cercapersone.")

### <a name="example"></a>Esempio

La prima istruzione nell'esempio di codice seguente viene illustrato il [CSplitButton::SetDropDownMenu](#setdropdownmenu) (metodo). Abbiamo creato il menu di scelta con la risorsa di Visual Studio editor, che l'ID della barra dei menu, IDR_MENU1 assegnato automaticamente un nome. Il *nSubMenuId* parametro, che è uguale a zero, si intende il sottomenu solo della barra dei menu.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/csplitbutton-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CSplitButton](../../mfc/reference/csplitbutton-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)
