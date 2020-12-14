---
description: 'Altre informazioni su: classe CSplitButton'
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
ms.openlocfilehash: e73273bbeb0d03dc5ca2a3a2e6daa1be05936280
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345121"
---
# <a name="csplitbutton-class"></a>Classe CSplitButton

La `CSplitButton` classe rappresenta un controllo pulsante di divisione. Il controllo pulsante di menu combinato segue un comportamento predefinito quando un utente fa clic sulla parte principale del pulsante e visualizza un menu a discesa quando l'utente fa clic sulla freccia a discesa del pulsante.

## <a name="syntax"></a>Sintassi

```
class CSplitButton : public CButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSplitButton:: CSplitButton](#csplitbutton)|Costruisce un oggetto `CSplitButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSplitButton:: create](#create)|Crea un controllo pulsante di divisione con gli stili specificati e lo associa all' `CSplitButton` oggetto corrente.|
|[CSplitButton:: SetDropDownMenu](#setdropdownmenu)|Imposta il menu a discesa che viene visualizzato quando un utente fa clic sulla freccia a discesa del controllo pulsante di menu combinato corrente.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CSplitButton:: OnDropDown](#ondropdown)|Gestisce la notifica di BCN_DROPDOWN inviata dal sistema quando un utente fa clic sulla freccia a discesa del controllo pulsante di suddivisione corrente.|

## <a name="remarks"></a>Commenti

La `CSplitButton` classe è derivata dalla classe [CButton](../../mfc/reference/cbutton-class.md) . Il controllo pulsante di divisione è un controllo Button il cui stile è BS_SPLITBUTTON. Viene visualizzato un menu personalizzato quando un utente fa clic sulla freccia a discesa. Per ulteriori informazioni, vedere gli stili BS_SPLITBUTTON e BS_DEFSPLITBUTTON negli [stili dei pulsanti](/windows/win32/Controls/button-styles).

Nella figura seguente è illustrata una finestra di dialogo che contiene un controllo pager e un controllo pulsante di divisione (1). È già stato fatto clic sulla freccia a discesa (2) e viene visualizzato il sottomenu (3).

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

I requisiti aggiuntivi per questa classe sono descritti in [requisiti di compilazione per i controlli comuni di Windows Vista](../../mfc/build-requirements-for-windows-vista-common-controls.md).

## <a name="csplitbuttoncreate"></a><a name="create"></a> CSplitButton:: create

Crea un controllo pulsante di divisione con gli stili specificati e lo associa all' `CSplitButton` oggetto corrente.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*\
in Combinazione bit per bit (o) di stili da applicare al controllo. Per altre informazioni, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).

*Rect*\
in Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che contiene la posizione e le dimensioni del controllo.

*pParentWnd*\
in Puntatore non null a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta la finestra padre del controllo.

*nID*\
in ID del controllo.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

## <a name="csplitbuttoncsplitbutton"></a><a name="csplitbutton"></a> CSplitButton:: CSplitButton

Costruisce un oggetto `CSplitButton`. I parametri del costruttore specificano un sottomenu che viene visualizzato quando un utente fa clic sulla freccia a discesa del controllo pulsante di menu combinato.

```
CSplitButton();

CSplitButton(
    UINT nMenuId,
    UINT nSubMenuId)
CSplitButton(CMenu* pMenu)
```

### <a name="parameters"></a>Parametri

*nMenuId*\
in ID risorsa della barra dei menu.

*nSubMenuId*\
in ID risorsa di un sottomenu.

*pMenu*\
in Puntatore a un oggetto [CMenu](../../mfc/reference/cmenu-class.md) che specifica un sottomenu. L'oggetto `CSplitButton` Elimina l' `CMenu` oggetto e il HMENU associato quando l' `CSplitButton` oggetto esce dall'ambito.

### <a name="remarks"></a>Commenti

Usare il metodo [CSplitButton:: create](#create) per creare un controllo pulsante combinato e collegarlo all' `CSplitButton` oggetto.

## <a name="csplitbuttonondropdown"></a><a name="ondropdown"></a> CSplitButton:: OnDropDown

Gestisce la notifica di BCN_DROPDOWN inviata dal sistema quando un utente fa clic sulla freccia a discesa del controllo pulsante di suddivisione corrente.

```
afx_msg void OnDropDown(
    NMHDR* pNMHDR,
    LRESULT* pResult);
```

### <a name="parameters"></a>Parametri

*pNMHDR*\
in Puntatore a una struttura [NMHDR](/windows/win32/api/richedit/ns-richedit-nmhdr) contenente informazioni sulla notifica del [BCN_DROPDOWN](/windows/win32/Controls/bcn-dropdown) .

*pResult*\
out (Non usato; non viene restituito alcun valore). Valore restituito della notifica [BCN_DROPDOWN](/windows/win32/Controls/bcn-dropdown) .

### <a name="remarks"></a>Commenti

Quando l'utente fa clic sulla freccia a discesa di un controllo pulsante combinato, il sistema invia un messaggio di notifica BCN_DROPDOWN, `OnDropDown` gestito dal metodo. Tuttavia, l' `CSplitButton` oggetto non invia la notifica di BCN_DROPDOWN al controllo che contiene il controllo pulsante di divisione. Di conseguenza, il controllo contenitore non può supportare un'azione personalizzata in risposta alla notifica.

Per implementare un'azione personalizzata supportata dal controllo che lo contiene, usare un oggetto [CButton](../../mfc/reference/cbutton-class.md) con uno stile di BS_SPLITBUTTON anziché un `CSplitButton` oggetto. Implementare quindi un gestore per la notifica BCN_DROPDOWN nell' `CButton` oggetto. Per altre informazioni, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).

Per implementare un'azione personalizzata supportata dal controllo pulsante di divisione, utilizzare la [Reflection del messaggio](../../mfc/tn062-message-reflection-for-windows-controls.md). Derivare la propria classe dalla `CSplitButton` classe e denominarla, ad esempio CMySplitButton. Aggiungere quindi la seguente mappa messaggi all'applicazione per gestire la notifica di BCN_DROPDOWN:

```
BEGIN_MESSAGE_MAP(CMySplitButton,
    CSplitButton)
    ON_NOTIFY_REFLECT(BCN_DROPDOWN, &CMySplitButton::OnDropDown)
END_MESSAGE_MAP()
```

## <a name="csplitbuttonsetdropdownmenu"></a><a name="setdropdownmenu"></a> CSplitButton:: SetDropDownMenu

Imposta il menu a discesa che viene visualizzato quando un utente fa clic sulla freccia a discesa del controllo pulsante di menu combinato corrente.

```cpp
void SetDropDownMenu(
    UINT nMenuId,
    UINT nSubMenuId);

void SetDropDownMenu(CMenu* pMenu);
```

### <a name="parameters"></a>Parametri

*nMenuId*\
in ID risorsa della barra dei menu.

*nSubMenuId*\
in ID risorsa di un sottomenu.

*pMenu*\
in Puntatore a un oggetto [CMenu](../../mfc/reference/cmenu-class.md) che specifica un sottomenu. L'oggetto `CSplitButton` Elimina l' `CMenu` oggetto e il HMENU associato quando l' `CSplitButton` oggetto esce dall'ambito.

### <a name="remarks"></a>Commenti

Il parametro *nMenuID* identifica una barra dei menu, ovvero un elenco orizzontale di elementi della barra dei menu. Il parametro *nSubMenuId* è un numero di indice in base zero che identifica un sottomenu, ovvero l'elenco a discesa di voci di menu associate a ogni elemento della barra dei menu. Ad esempio, un'applicazione tipica dispone di un menu che contiene gli elementi della barra dei menu, "file", "modifica" e "Guida". L'elemento della barra dei menu "file" include un sottomenu che contiene le voci di menu "Open", "close" e "Exit". Quando si fa clic sulla freccia a discesa del controllo pulsante di menu combinato, il controllo Visualizza il sottomenu specificato, non la barra dei menu.

Nella figura seguente è illustrata una finestra di dialogo che contiene un controllo pager e un controllo pulsante di divisione (1). È già stato fatto clic sulla freccia a discesa (2) e viene visualizzato il sottomenu (3).

![Finestra di dialogo con SplitButton e un controllo pager](../../mfc/reference/media/splitbutton_pager.png "Finestra di dialogo con SplitButton e un controllo pager")

### <a name="example"></a>Esempio

La prima istruzione nell'esempio di codice seguente illustra il metodo [CSplitButton:: SetDropDownMenu](#setdropdownmenu) . Il menu è stato creato con l'editor di risorse di Visual Studio, che ha automaticamente il nome ID della barra dei menu, IDR_MENU1. Il parametro *nSubMenuId* , che è zero, si riferisce al solo sottomenu della barra dei menu.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/csplitbutton-class_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Classe CSplitButton](../../mfc/reference/csplitbutton-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)
