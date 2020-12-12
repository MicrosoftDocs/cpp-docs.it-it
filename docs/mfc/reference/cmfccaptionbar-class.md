---
description: 'Altre informazioni su: classe CMFCCaptionBar'
title: CMFCCaptionBar (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCCaptionBar
- AFXCAPTIONBAR/CMFCCaptionBar
- AFXCAPTIONBAR/CMFCCaptionBar::Create
- AFXCAPTIONBAR/CMFCCaptionBar::DoesAllowDynInsertBefore
- AFXCAPTIONBAR/CMFCCaptionBar::EnableButton
- AFXCAPTIONBAR/CMFCCaptionBar::GetAlignment
- AFXCAPTIONBAR/CMFCCaptionBar::GetBorderSize
- AFXCAPTIONBAR/CMFCCaptionBar::GetButtonRect
- AFXCAPTIONBAR/CMFCCaptionBar::GetMargin
- AFXCAPTIONBAR/CMFCCaptionBar::IsMessageBarMode
- AFXCAPTIONBAR/CMFCCaptionBar::RemoveBitmap
- AFXCAPTIONBAR/CMFCCaptionBar::RemoveButton
- AFXCAPTIONBAR/CMFCCaptionBar::RemoveIcon
- AFXCAPTIONBAR/CMFCCaptionBar::RemoveText
- AFXCAPTIONBAR/CMFCCaptionBar::SetBitmap
- AFXCAPTIONBAR/CMFCCaptionBar::SetBorderSize
- AFXCAPTIONBAR/CMFCCaptionBar::SetButton
- AFXCAPTIONBAR/CMFCCaptionBar::SetButtonPressed
- AFXCAPTIONBAR/CMFCCaptionBar::SetButtonToolTip
- AFXCAPTIONBAR/CMFCCaptionBar::SetFlatBorder
- AFXCAPTIONBAR/CMFCCaptionBar::SetIcon
- AFXCAPTIONBAR/CMFCCaptionBar::SetImageToolTip
- AFXCAPTIONBAR/CMFCCaptionBar::SetMargin
- AFXCAPTIONBAR/CMFCCaptionBar::SetText
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawBackground
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawBorder
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawButton
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawImage
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawText
- AFXCAPTIONBAR/CMFCCaptionBar::m_clrBarBackground
- AFXCAPTIONBAR/CMFCCaptionBar::m_clrBarBorder
- AFXCAPTIONBAR/CMFCCaptionBar::m_clrBarText
helpviewer_keywords:
- CMFCCaptionBar [MFC], Create
- CMFCCaptionBar [MFC], DoesAllowDynInsertBefore
- CMFCCaptionBar [MFC], EnableButton
- CMFCCaptionBar [MFC], GetAlignment
- CMFCCaptionBar [MFC], GetBorderSize
- CMFCCaptionBar [MFC], GetButtonRect
- CMFCCaptionBar [MFC], GetMargin
- CMFCCaptionBar [MFC], IsMessageBarMode
- CMFCCaptionBar [MFC], RemoveBitmap
- CMFCCaptionBar [MFC], RemoveButton
- CMFCCaptionBar [MFC], RemoveIcon
- CMFCCaptionBar [MFC], RemoveText
- CMFCCaptionBar [MFC], SetBitmap
- CMFCCaptionBar [MFC], SetBorderSize
- CMFCCaptionBar [MFC], SetButton
- CMFCCaptionBar [MFC], SetButtonPressed
- CMFCCaptionBar [MFC], SetButtonToolTip
- CMFCCaptionBar [MFC], SetFlatBorder
- CMFCCaptionBar [MFC], SetIcon
- CMFCCaptionBar [MFC], SetImageToolTip
- CMFCCaptionBar [MFC], SetMargin
- CMFCCaptionBar [MFC], SetText
- CMFCCaptionBar [MFC], OnDrawBackground
- CMFCCaptionBar [MFC], OnDrawBorder
- CMFCCaptionBar [MFC], OnDrawButton
- CMFCCaptionBar [MFC], OnDrawImage
- CMFCCaptionBar [MFC], OnDrawText
- CMFCCaptionBar [MFC], m_clrBarBackground
- CMFCCaptionBar [MFC], m_clrBarBorder
- CMFCCaptionBar [MFC], m_clrBarText
ms.assetid: acb54d5f-14ff-4c96-aeb3-7717cf566d9a
ms.openlocfilehash: a5dd5f968c52268935b6176115e8723a9d82e8a1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327740"
---
# <a name="cmfccaptionbar-class"></a>CMFCCaptionBar (classe)

Un `CMFCCaptionBar` oggetto è una barra di controllo che può visualizzare tre elementi: un pulsante, un'etichetta di testo e una bitmap. Può essere visualizzato un solo elemento di ogni tipo alla volta. È possibile allineare ciascun elemento ai margini sinistro o destro del controllo o al centro. È inoltre possibile applicare uno stile Flat o 3D ai bordi superiore e inferiore della barra del titolo.

## <a name="syntax"></a>Sintassi

```
class CMFCCaptionBar : public CPane
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCCaptionBar:: create](#create)|Crea il controllo barra del titolo e lo collega all' `CMFCCaptionBar` oggetto.|
|[CMFCCaptionBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Indica se è possibile inserire dinamicamente un altro riquadro tra la barra del titolo e il relativo frame padre. Esegue l'override di [CBasePane::D oesallowdyninsertbefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).|
|[CMFCCaptionBar:: EnableButton](#enablebutton)|Abilita o Disabilita il pulsante sulla barra del titolo.|
|[CMFCCaptionBar:: getAlignment](#getalignment)|Restituisce l'allineamento dell'elemento specificato.|
|[CMFCCaptionBar:: GetBorderSize](#getbordersize)|Restituisce la dimensione del bordo della barra del titolo.|
|[CMFCCaptionBar:: GetButtonRect](#getbuttonrect)|Recupera il rettangolo di delimitazione del pulsante sulla barra del titolo.|
|[CMFCCaptionBar:: GetMargin](#getmargin)|Restituisce la distanza tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo.|
|[CMFCCaptionBar:: IsMessageBarMode](#ismessagebarmode)|Specifica se la barra del titolo è nella modalità della barra dei messaggi.|
|[CMFCCaptionBar:: RemoveBitmap](#removebitmap)|Rimuove l'immagine bitmap dalla barra del titolo.|
|[CMFCCaptionBar:: RemoveButton](#removebutton)|Rimuove il pulsante dalla barra del titolo.|
|[CMFCCaptionBar:: RemoveIcon](#removeicon)|Rimuove l'icona dalla barra del titolo.|
|[CMFCCaptionBar:: RemoveText](#removetext)|Rimuove l'etichetta di testo dalla barra del titolo.|
|[CMFCCaptionBar:: sebitmap](#setbitmap)|Imposta l'immagine bitmap per la barra del titolo.|
|[CMFCCaptionBar:: SetBorderSize](#setbordersize)|Imposta la dimensione del bordo della barra del titolo.|
|[CMFCCaptionBar:: MyButton](#setbutton)|Imposta il pulsante per la barra del titolo.|
|[CMFCCaptionBar:: SetButtonPressed](#setbuttonpressed)|Specifica se il pulsante rimane premuto.|
|[CMFCCaptionBar:: SetButtonToolTip](#setbuttontooltip)|Imposta la descrizione comando per il pulsante.|
|[CMFCCaptionBar:: SetFlatBorder](#setflatborder)|Imposta lo stile del bordo della barra del titolo.|
|[CMFCCaptionBar:: seicon](#seticon)|Imposta l'icona per una barra del titolo.|
|[CMFCCaptionBar:: SetImageToolTip](#setimagetooltip)|Imposta la descrizione comando per l'immagine per la barra del titolo.|
|[CMFCCaptionBar:: semargin](#setmargin)|Imposta la distanza tra il bordo dell'elemento della barra del titolo e il bordo del controllo barra del titolo.|
|[CMFCCaptionBar:: SetText](#settext)|Imposta l'etichetta di testo per la barra del titolo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCCaptionBar:: OnDrawBackground](#ondrawbackground)|Chiamato dal Framework per riempire lo sfondo della barra del titolo.|
|[CMFCCaptionBar:: OnDrawBorder](#ondrawborder)|Chiamato dal Framework per creare il bordo della barra del titolo.|
|[CMFCCaptionBar:: OnDrawButton](#ondrawbutton)|Chiamato dal Framework per creare il pulsante della barra del titolo.|
|[CMFCCaptionBar:: OnDrawImage](#ondrawimage)|Chiamato dal Framework per creare l'immagine della barra del titolo.|
|[CMFCCaptionBar:: OnDrawText](#ondrawtext)|Chiamato dal Framework per creare il testo della barra del titolo.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CMFCCaptionBar:: m_clrBarBackground](#m_clrbarbackground)|Colore di sfondo della barra del titolo.|
|[CMFCCaptionBar:: m_clrBarBorder](#m_clrbarborder)|Colore del bordo della barra del titolo.|
|[CMFCCaptionBar:: m_clrBarText](#m_clrbartext)|Colore del testo della barra del titolo.|

## <a name="remarks"></a>Commenti

Per creare una barra del titolo, attenersi alla seguente procedura:

1. Costruire l'oggetto `CMFCCaptionBar`. In genere, è necessario aggiungere la barra del titolo a una classe della finestra cornice.

1. Chiamare il metodo [CMFCCaptionBar:: create](#create) per creare il controllo barra del titolo e collegarlo all' `CMFCCaptionBar` oggetto.

1. Chiamare [CMFCCaptionBar:: sebutton](#setbutton), [CMFCCaptionBar:: SetText](#settext), [CMFCCaptionBar:: seicon](#seticon)e [CMFCCaptionBar:: ToBitmap](#setbitmap) per impostare gli elementi della barra del titolo.

Quando si imposta l'elemento Button, è necessario assegnare un ID comando al pulsante. Quando l'utente fa clic sul pulsante, la barra del titolo instrada i messaggi di WM_COMMAND con questo ID alla finestra cornice padre.

La barra del titolo può anche funzionare in modalità barra dei messaggi, che emula la barra dei messaggi visualizzata nelle applicazioni Microsoft Office 2007. In modalità barra dei messaggi la barra del titolo Visualizza una bitmap, un messaggio e un pulsante (che in genere apre una finestra di dialogo). È possibile assegnare una descrizione comando alla bitmap.

Per abilitare la modalità barra dei messaggi, chiamare [CMFCCaptionBar:: create](#create) e impostare il quarto parametro (bIsMessageBarMode) su true.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCCaptionBar` . Nell'esempio viene illustrato come creare il controllo barra del titolo, impostare un bordo 3D della barra del titolo, impostare la distanza in pixel tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo, impostare il pulsante per la barra del titolo, impostare la descrizione comando per il pulsante, impostare l'etichetta di testo per la barra del titolo, impostare l'immagine bitmap per la barra e impostano la descrizione comando per l'immagine nella barra del titolo. Questo frammento di codice fa parte dell' [esempio Microsoft Office 2007 demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#1](../../mfc/reference/codesnippet/cpp/cmfccaptionbar-class_1.h)]
[!code-cpp[NVC_MFC_MSOffice2007Demo#2](../../mfc/reference/codesnippet/cpp/cmfccaptionbar-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcaptionbar. h

## <a name="cmfccaptionbarcreate"></a><a name="create"></a> CMFCCaptionBar:: create

Crea il controllo barra del titolo e lo collega all' `CMFCCaptionBar` oggetto.

```
BOOL Create(
    DWORD dwStyle,
    CWnd* pParentWnd,
    UINT uID,
    int nHeight=-1,
    BOOL bIsMessageBarMode=FALSE);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Combinazione logica o degli stili della barra del titolo.

*pParentWnd*<br/>
Finestra padre del controllo barra del titolo.

*uID*<br/>
ID del controllo barra del titolo.

*nHeight*<br/>
Altezza, in pixel, del controllo barra del titolo. Se è-1, l'altezza viene calcolata in base all'altezza dell'icona, al testo e al pulsante visualizzato dal controllo barra del titolo.

*bIsMessageBarMode*<br/>
TRUE se la barra del titolo è nella modalità della barra dei messaggi; In caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se il controllo barra del titolo viene creato correttamente; In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Si costruisce un `CMFCCaptionBar` oggetto in due passaggi. Prima viene chiamato il costruttore, quindi viene chiamato il `Create` metodo, che crea il controllo Windows e lo collega all' `CMFCCaptionBar` oggetto.

## <a name="cmfccaptionbardoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a> CMFCCaptionBar::D oesAllowDynInsertBefore

Indica se è possibile inserire dinamicamente un altro riquadro tra la barra del titolo e il relativo frame padre.

```
virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE a meno che non venga sottoposto a override.

### <a name="remarks"></a>Commenti

## <a name="cmfccaptionbarenablebutton"></a><a name="enablebutton"></a> CMFCCaptionBar:: EnableButton

Abilita o Disabilita il pulsante sulla barra del titolo.

```cpp
void EnableButton(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per abilitare il pulsante, FALSE per disabilitare il pulsante.

## <a name="cmfccaptionbargetalignment"></a><a name="getalignment"></a> CMFCCaptionBar:: getAlignment

Restituisce l'allineamento dell'elemento specificato.

```
BarElementAlignment GetAlignment(BarElement elem);
```

### <a name="parameters"></a>Parametri

*elem*<br/>
in Elemento della barra del titolo per il quale recuperare l'allineamento.

### <a name="return-value"></a>Valore restituito

Allineamento di un elemento, ad esempio un pulsante, una bitmap, un testo o un'icona.

### <a name="remarks"></a>Commenti

L'allineamento dell'elemento può essere uno dei valori seguenti:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

## <a name="cmfccaptionbargetbordersize"></a><a name="getbordersize"></a> CMFCCaptionBar:: GetBorderSize

Restituisce la dimensione del bordo della barra del titolo.

```
int GetBorderSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione, in pixel, del bordo.

## <a name="cmfccaptionbargetbuttonrect"></a><a name="getbuttonrect"></a> CMFCCaptionBar:: GetButtonRect

Recupera il rettangolo di delimitazione del pulsante sulla barra del titolo.

```
CRect GetButtonRect() const;
```

### <a name="return-value"></a>Valore restituito

`CRect`Oggetto che contiene le coordinate del rettangolo di delimitazione del pulsante sulla barra del titolo.

## <a name="cmfccaptionbargetmargin"></a><a name="getmargin"></a> CMFCCaptionBar:: GetMargin

Restituisce la distanza tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo.

```
int GetMargin() const;
```

### <a name="return-value"></a>Valore restituito

Distanza, in pixel, tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo.

## <a name="cmfccaptionbarismessagebarmode"></a><a name="ismessagebarmode"></a> CMFCCaptionBar:: IsMessageBarMode

Specifica se la barra del titolo è nella modalità della barra dei messaggi.

```
BOOL IsMessageBarMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la barra del titolo è nella modalità della barra dei messaggi; In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Nella modalità barra dei messaggi la barra del titolo Visualizza un'immagine con una descrizione comando, un testo del messaggio e un pulsante.

## <a name="cmfccaptionbarm_clrbarbackground"></a><a name="m_clrbarbackground"></a> CMFCCaptionBar:: m_clrBarBackground

Colore di sfondo della barra del titolo.

```
COLORREF m_clrBarBackground
```

## <a name="cmfccaptionbarm_clrbarborder"></a><a name="m_clrbarborder"></a> CMFCCaptionBar:: m_clrBarBorder

Colore del bordo della barra del titolo.

```
COLORREF m_clrBarBorder
```

## <a name="cmfccaptionbarm_clrbartext"></a><a name="m_clrbartext"></a> CMFCCaptionBar:: m_clrBarText

Colore del testo della barra del titolo.

```
COLORREF m_clrBarText
```

## <a name="cmfccaptionbarondrawbackground"></a><a name="ondrawbackground"></a> CMFCCaptionBar:: OnDrawBackground

Chiamato dal Framework per riempire lo sfondo della barra del titolo.

```
virtual void OnDrawBackground(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore al contesto di dispositivo della barra del titolo.

*Rect*<br/>
in Rettangolo di delimitazione da riempire.

### <a name="remarks"></a>Commenti

Il `OnDrawBackground` metodo viene chiamato quando è in fase di riempimento lo sfondo della barra del titolo. L'implementazione predefinita riempie lo sfondo utilizzando il colore [CMFCCaptionBar:: m_clrBarBackground](#m_clrbarbackground) .

Eseguire l'override di questo metodo in una `CMFCCaptionBar` classe derivata per personalizzare l'aspetto della barra del titolo.

## <a name="cmfccaptionbarondrawborder"></a><a name="ondrawborder"></a> CMFCCaptionBar:: OnDrawBorder

Chiamato dal Framework per creare il bordo della barra del titolo.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Contesto di dispositivo usato per visualizzare i bordi.

*Rect*<br/>
in Rettangolo di delimitazione.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, i bordi hanno lo stile flat.

Eseguire l'override di questo metodo in una `CMFCCaptionBar` classe derivata per personalizzare l'aspetto dei bordi della barra del titolo.

## <a name="cmfccaptionbarondrawbutton"></a><a name="ondrawbutton"></a> CMFCCaptionBar:: OnDrawButton

Chiamato dal Framework per creare il pulsante della barra del titolo.

```
virtual void OnDrawButton(
    CDC* pDC,
    CRect rect,
    const CString& strButton,
    BOOL bEnabled);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo usato per visualizzare il pulsante.

*Rect*<br/>
in Rettangolo delimitatore del pulsante.

*strButton*<br/>
in Etichetta di testo del pulsante.

*bEnabled*<br/>
in TRUE se il pulsante è abilitato; In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo in una `CMFCCaptionBar` classe derivata per personalizzare l'aspetto del pulsante della barra del titolo.

## <a name="cmfccaptionbarondrawimage"></a><a name="ondrawimage"></a> CMFCCaptionBar:: OnDrawImage

Chiamato dal Framework per creare l'immagine della barra del titolo.

```
virtual void OnDrawImage(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo usato per visualizzare l'immagine.

*Rect*<br/>
in Specifica il rettangolo di delimitazione dell'immagine.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo in una `CMFCCaptionBar` classe derivata per personalizzare l'aspetto dell'immagine.

## <a name="cmfccaptionbarondrawtext"></a><a name="ondrawtext"></a> CMFCCaptionBar:: OnDrawText

Chiamato dal Framework per creare il testo della barra del titolo.

```
virtual void OnDrawText(
    CDC* pDC,
    CRect rect,
    const CString& strText);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo usato per visualizzare il pulsante.

*Rect*<br/>
in Rettangolo delimitatore del testo.

*strText*<br/>
in Stringa di testo da visualizzare.

### <a name="remarks"></a>Commenti

L'implementazione predefinita Visualizza il testo usando `CDC::DrawText` e [CMFCCaptionBar:: m_clrBarText](#m_clrbartext) color.

Eseguire l'override di questo metodo in una `CMFCCaptionBar` classe derivata per personalizzare l'aspetto del testo della barra del titolo.

## <a name="cmfccaptionbarremovebitmap"></a><a name="removebitmap"></a> CMFCCaptionBar:: RemoveBitmap

Rimuove l'immagine bitmap dalla barra del titolo.

```cpp
void RemoveBitmap();
```

## <a name="cmfccaptionbarremovebutton"></a><a name="removebutton"></a> CMFCCaptionBar:: RemoveButton

Rimuove il pulsante dalla barra del titolo.

```cpp
void RemoveButton();
```

### <a name="remarks"></a>Commenti

Il layout degli elementi della barra del titolo viene regolato automaticamente.

## <a name="cmfccaptionbarremoveicon"></a><a name="removeicon"></a> CMFCCaptionBar:: RemoveIcon

Rimuove l'icona dalla barra del titolo.

```cpp
void RemoveIcon();
```

## <a name="cmfccaptionbarremovetext"></a><a name="removetext"></a> CMFCCaptionBar:: RemoveText

Rimuove l'etichetta di testo dalla barra del titolo.

```cpp
void RemoveText();
```

## <a name="cmfccaptionbarsetbitmap"></a><a name="setbitmap"></a> CMFCCaptionBar:: sebitmap

Imposta l'immagine bitmap per la barra del titolo.

```cpp
void SetBitmap(
    HBITMAP hBitmap,
    COLORREF clrTransparent,
    BOOL bStretch=FALSE,
    BarElementAlignment bmpAlignment=ALIGN_RIGHT);

void SetBitmap(
    UINT uiBmpResID,
    COLORREF clrTransparent,
    BOOL bStretch=FALSE,
    BarElementAlignment bmpAlignment=ALIGN_RIGHT);
```

### <a name="parameters"></a>Parametri

*hBitmap*<br/>
in Handle per la bitmap da impostare.

*clrTransparent*<br/>
in Valore RGB che specifica il colore trasparente della bitmap.

*bStretch*<br/>
in Se TRUE, la bitmap viene allungata se non è adatta al rettangolo di delimitazione dell'immagine. In caso contrario, la bitmap non viene allungata.

*bmpAlignment*<br/>
in Allineamento della bitmap.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per impostare una bitmap in una barra del titolo.

La bitmap precedente viene distrutta automaticamente. Se la barra del titolo Visualizza un'icona perché è stato chiamato il metodo [CMFCCaptionBar:: seicon](#seticon) , la bitmap non verrà visualizzata a meno che non si rimuova l'icona chiamando [CMFCCaptionBar:: RemoveIcon](#removeicon).

La bitmap è allineata come specificato dal parametro *bmpAlignment* .  Questo parametro può avere uno dei valori `BarElementAlignment` seguenti:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

## <a name="cmfccaptionbarsetbordersize"></a><a name="setbordersize"></a> CMFCCaptionBar:: SetBorderSize

Imposta la dimensione del bordo della barra del titolo.

```cpp
void SetBorderSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nSize*<br/>
in Nuova dimensione, in pixel, del bordo della barra del titolo.

## <a name="cmfccaptionbarsetbutton"></a><a name="setbutton"></a> CMFCCaptionBar:: MyButton

Imposta il pulsante per la barra del titolo.

```cpp
void SetButton(
    LPCTSTR lpszLabel,
    UINT uiCmdUI,
    BarElementAlignment btnAlignmnet=ALIGN_LEFT,
    BOOL bHasDropDownArrow=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
Etichetta del comando del pulsante.

*uiCmdUI*<br/>
ID di comando del pulsante.

*btnAlignmnet*<br/>
Allineamento del pulsante.

*bHasDropDownArrow*<br/>
TRUE se il pulsante Visualizza una freccia a discesa; in caso contrario, FALSE.

## <a name="cmfccaptionbarsetbuttonpressed"></a><a name="setbuttonpressed"></a> CMFCCaptionBar:: SetButtonPressed

Specifica se il pulsante rimane premuto.

```cpp
void SetButtonPressed(BOOL bPresed=TRUE);
```

### <a name="parameters"></a>Parametri

*bPresed*<br/>
TRUE se il pulsante mantiene lo stato premuto; in caso contrario, FALSE.

## <a name="cmfccaptionbarsetbuttontooltip"></a><a name="setbuttontooltip"></a> CMFCCaptionBar:: SetButtonToolTip

Imposta la descrizione comando per il pulsante.

```cpp
void SetButtonToolTip(
    LPCTSTR lpszToolTip,
    LPCTSTR lpszDescription=NULL);
```

### <a name="parameters"></a>Parametri

*lpszToolTip*<br/>
in Didascalia della descrizione comando.

*lpszDescription*<br/>
in Descrizione della descrizione comando.

## <a name="cmfccaptionbarsetflatborder"></a><a name="setflatborder"></a> CMFCCaptionBar:: SetFlatBorder

Imposta lo stile del bordo della barra del titolo.

```cpp
void SetFlatBorder(BOOL bFlat=TRUE);
```

### <a name="parameters"></a>Parametri

*bFlat*<br/>
in TRUE se il bordo di una barra del titolo è Flat. FALSE se il bordo è 3D.

## <a name="cmfccaptionbarseticon"></a><a name="seticon"></a> CMFCCaptionBar:: seicon

Imposta l'icona per una barra del titolo.

```cpp
void SetIcon(
    HICON hIcon,
    BarElementAlignment iconAlignment=ALIGN_RIGHT);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
in Handle per l'icona da impostare.

*iconAlignment*<br/>
in Allineamento dell'icona.

### <a name="remarks"></a>Commenti

Le barre del titolo possono visualizzare icone o bitmap. Per informazioni su come visualizzare una bitmap, vedere [CMFCCaptionBar:: ToBitmap](#setbitmap) . Se si impostano un'icona e una bitmap, l'icona viene sempre visualizzata. Chiamare [CMFCCaptionBar:: RemoveIcon](#removeicon) per rimuovere un'icona dalla barra del titolo.

L'icona è allineata in base al parametro *iconAlignment* . Può essere uno dei `BarElementAlignment` valori seguenti:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

## <a name="cmfccaptionbarsetimagetooltip"></a><a name="setimagetooltip"></a> CMFCCaptionBar:: SetImageToolTip

Imposta la descrizione comando per l'immagine nella barra del titolo.

```cpp
void SetImageToolTip(
    LPCTSTR lpszToolTip,
    LPCTSTR lpszDescription=NULL);
```

### <a name="parameters"></a>Parametri

*lpszToolTip*<br/>
in Testo della descrizione comando.

*lpszDescription*<br/>
in Descrizione della descrizione comando.

## <a name="cmfccaptionbarsetmargin"></a><a name="setmargin"></a> CMFCCaptionBar:: semargin

Imposta la distanza tra il bordo dell'elemento della barra del titolo e il bordo del controllo barra del titolo.

```cpp
void SetMargin(int nMargin);
```

### <a name="parameters"></a>Parametri

*nMargin*<br/>
in Distanza, in pixel, tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo.

## <a name="cmfccaptionbarsettext"></a><a name="settext"></a> CMFCCaptionBar:: SetText

Imposta l'etichetta di testo per la barra del titolo.

```cpp
void SetText(
    const CString& strText,
    BarElementAlignment textAlignment=ALIGN_RIGHT);
```

### <a name="parameters"></a>Parametri

*strText*<br/>
in Stringa di testo da impostare.

*textAlignment*<br/>
in Allineamento del testo.

### <a name="remarks"></a>Commenti

L'etichetta di testo è allineata come specificato dal parametro *TextAlignment* . Può essere uno dei `BarElementAlignment` valori seguenti:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
