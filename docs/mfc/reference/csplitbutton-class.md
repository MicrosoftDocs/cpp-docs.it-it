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
ms.openlocfilehash: 38fceed1cc42ca0aac2e6ddaf145db273c95771d
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753125"
---
# <a name="csplitbutton-class"></a>Classe CSplitButton

La `CSplitButton` classe rappresenta un controllo pulsante di divisione. Il controllo pulsante di menu combinato segue un comportamento predefinito quando un utente fa clic sulla parte principale del pulsante e visualizza un menu a discesa quando l'utente fa clic sulla freccia a discesa del pulsante.

## <a name="syntax"></a>Sintassi

```
class CSplitButton : public CButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Controllo CSplitButton::CSplitButton](#csplitbutton)|Costruisce un oggetto `CSplitButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Controllo CSplitButton::Create](#create)|Crea un controllo pulsante di divisione con `CSplitButton` gli stili specificati e lo associa all'oggetto corrente.|
|[Controllo CSplitButton::SetDropDownMenu](#setdropdownmenu)|Imposta il menu a discesa visualizzato quando un utente fa clic sulla freccia a discesa del controllo pulsante di divisione corrente.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Controllo CSplitButton::OnDropDown](#ondropdown)|Gestisce il BCN_DROPDOWN notifica che il sistema invia quando un utente fa clic sulla freccia a discesa del controllo pulsante di divisione corrente.|

## <a name="remarks"></a>Osservazioni

La `CSplitButton` classe è derivata dalla [classe CButton.](../../mfc/reference/cbutton-class.md) Il controllo pulsante di divisione è un controllo pulsante il cui stile è BS_SPLITBUTTON. Visualizza un menu personalizzato quando un utente fa clic sulla freccia a discesa. Per ulteriori informazioni, vedere gli stili di BS_SPLITBUTTON e BS_DEFSPLITBUTTON in [Stili pulsante](/windows/win32/Controls/button-styles).

Nella figura seguente viene illustrata una finestra di dialogo che contiene un controllo pager e un controllo pulsante di divisione (1). La freccia a discesa (2) è già stata cliccata e viene visualizzato il sottomenu (3).

![Finestra di dialogo con SplitButton e un controllo pager](../../mfc/reference/media/splitbutton_pager.png "Finestra di dialogo con SplitButton e un controllo pager")

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

`CSplitButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

Questa classe è supportata in Windows Vista e versioni successive.

Ulteriori requisiti per questa classe sono descritti in [Requisiti di compilazione per](../../mfc/build-requirements-for-windows-vista-common-controls.md)i controlli comuni di Windows Vista .

## <a name="csplitbuttoncreate"></a><a name="create"></a>Controllo CSplitButton::Create

Crea un controllo pulsante di divisione con `CSplitButton` gli stili specificati e lo associa all'oggetto corrente.

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
|*DwStyle (in stile dwStyle)*|[in] Combinazione bit per bit (OR) di stili da applicare al controllo. Per ulteriori informazioni, consultate [Stili dei pulsanti.](../../mfc/reference/styles-used-by-mfc.md#button-styles)|
|*Rect*|[in] Riferimento a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che contiene la posizione e le dimensioni del controllo.|
|*pParentWnd (informazioni in due)*|[in] Puntatore non null a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è la finestra padre del controllo.|
|*nID*|[in] ID del controllo.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

## <a name="csplitbuttoncsplitbutton"></a><a name="csplitbutton"></a>Controllo CSplitButton::CSplitButton

Costruisce un oggetto `CSplitButton`. I parametri del costruttore specificano un sottomenu che viene visualizzato quando un utente fa clic sulla freccia a discesa del controllo pulsante di divisione.

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
|*nId menu*|[in] ID risorsa della barra dei menu.|
|*nSubMenuId (idsottoMenu*|[in] ID risorsa di un sottomenu.|
|*pMenu (Menu)*|[in] Puntatore a un [CMenu](../../mfc/reference/cmenu-class.md) oggetto che specifica un sottomenu. L'oggetto `CSplitButton` elimina `CMenu` l'oggetto e il `CSplitButton` relativo HMENU associato quando l'oggetto esce dall'ambito.|

### <a name="remarks"></a>Osservazioni

Utilizzare il [CSplitButton::Create](#create) metodo per creare un controllo `CSplitButton` pulsante di divisione e associarlo all'oggetto.

## <a name="csplitbuttonondropdown"></a><a name="ondropdown"></a>Controllo CSplitButton::OnDropDown

Gestisce il BCN_DROPDOWN notifica che il sistema invia quando un utente fa clic sulla freccia a discesa del controllo pulsante di divisione corrente.

```
afx_msg void OnDropDown(
    NMHDR* pNMHDR,
    LRESULT* pResult);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pNMHDR*|[in] Puntatore a una struttura [NMHDR](/windows/win32/api/richedit/ns-richedit-nmhdr) che contiene informazioni sulla [notifica BCN_DROPDOWN.](/windows/win32/Controls/bcn-dropdown)|
|*pRisultato*|[fuori] (Non utilizzato; non viene restituito alcun valore.) Valore restituito della notifica [di BCN_DROPDOWN.](/windows/win32/Controls/bcn-dropdown)|

### <a name="remarks"></a>Osservazioni

Quando l'utente fa clic sulla freccia a discesa in un controllo pulsante di divisione, il sistema invia un messaggio di notifica BCN_DROPDOWN, che il `OnDropDown` metodo gestisce. Tuttavia, `CSplitButton` l'oggetto non inoltra la notifica BCN_DROPDOWN al controllo che contiene il controllo pulsante di divisione. Di conseguenza, il controllo contenitore non può supportare un'azione personalizzata in risposta alla notifica.

Per implementare un'azione personalizzata supportata dal controllo contenitore, utilizzare `CSplitButton` un oggetto [CButton](../../mfc/reference/cbutton-class.md) con uno stile di BS_SPLITBUTTON anziché un oggetto . Implementare quindi un gestore `CButton` per la notifica BCN_DROPDOWN nell'oggetto. Per ulteriori informazioni, consultate [Stili dei pulsanti.](../../mfc/reference/styles-used-by-mfc.md#button-styles)

Per implementare un'azione personalizzata supportata dal controllo pulsante di divisione stesso, utilizzare la reflection dei [messaggi.](../../mfc/tn062-message-reflection-for-windows-controls.md) Derivare la propria `CSplitButton` classe dalla classe e denominarla, ad esempio CMySplitButton. Aggiungere quindi la seguente mappa messaggi all'applicazione per gestire la notifica di BCN_DROPDOWN:

```
BEGIN_MESSAGE_MAP(CMySplitButton,
    CSplitButton)
    ON_NOTIFY_REFLECT(BCN_DROPDOWN, &CMySplitButton::OnDropDown)
END_MESSAGE_MAP()
```

## <a name="csplitbuttonsetdropdownmenu"></a><a name="setdropdownmenu"></a>Controllo CSplitButton::SetDropDownMenu

Imposta il menu a discesa visualizzato quando un utente fa clic sulla freccia a discesa del controllo pulsante di divisione corrente.

```cpp
void SetDropDownMenu(
    UINT nMenuId,
    UINT nSubMenuId);

void SetDropDownMenu(CMenu* pMenu);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*nId menu*|[in] ID risorsa della barra dei menu.|
|*nSubMenuId (idsottoMenu*|[in] ID risorsa di un sottomenu.|
|*pMenu (Menu)*|[in] Puntatore a un [CMenu](../../mfc/reference/cmenu-class.md) oggetto che specifica un sottomenu. L'oggetto `CSplitButton` elimina `CMenu` l'oggetto e il `CSplitButton` relativo HMENU associato quando l'oggetto esce dall'ambito.|

### <a name="remarks"></a>Osservazioni

Il *nMenuId* parametro identifica una barra dei menu, che è un elenco orizzontale di voci della barra dei menu. Il *nSubMenuId* parametro è un numero di indice in base zero che identifica un sottomenu, ovvero l'elenco a discesa di voci di menu associate a ogni voce della barra dei menu. Ad esempio, un'applicazione tipica dispone di un menu che contiene le voci della barra dei menu, "File", "Modifica" e "Guida". La voce della barra dei menu "File" ha un sottomenu che contiene le voci di menu "Apri", "Chiudi" ed "Esci". Quando si fa clic sulla freccia a discesa del controllo pulsante di divisione, il controllo visualizza il sottomenu specificato, non la barra dei menu.

Nella figura seguente viene illustrata una finestra di dialogo che contiene un controllo pager e un controllo pulsante di divisione (1). La freccia a discesa (2) è già stata cliccata e viene visualizzato il sottomenu (3).

![Finestra di dialogo con SplitButton e un controllo pager](../../mfc/reference/media/splitbutton_pager.png "Finestra di dialogo con SplitButton e un controllo pager")

### <a name="example"></a>Esempio

La prima istruzione nell'esempio di codice seguente illustra il [metodo CSplitButton::SetDropDownMenu](#setdropdownmenu) . Il menu è stato creato con l'editor di risorse di Visual Studio, che ha denominato automaticamente l'ID della barra dei menu, IDR_MENU1. Il parametro *nSubMenuId,* che è zero, fa riferimento all'unico sottomenu della barra dei menu.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/csplitbutton-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CSplitButton](../../mfc/reference/csplitbutton-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)
