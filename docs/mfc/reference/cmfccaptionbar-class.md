---
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
ms.openlocfilehash: 3a1e8890176fe686b54fe4756dfd578869cbcdfb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367791"
---
# <a name="cmfccaptionbar-class"></a>CMFCCaptionBar (classe)

Un `CMFCCaptionBar` oggetto è una barra di controllo che può visualizzare tre elementi: un pulsante, un'etichetta di testo e una bitmap. Può essere visualizzato un solo elemento di ogni tipo alla volta. È possibile allineare ciascun elemento ai margini sinistro o destro del controllo o al centro. È inoltre possibile applicare uno stile Flat o 3D ai bordi superiore e inferiore della barra del titolo.

## <a name="syntax"></a>Sintassi

```
class CMFCCaptionBar : public CPane
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionBar::Create](#create)|Crea il controllo barra del titolo `CMFCCaptionBar` e lo associa all'oggetto.|
|[CMFCCaptionBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Indica se è possibile inserire dinamicamente un altro riquadro tra la barra del titolo e il relativo frame padre. (Overrides [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|
|[CMFCCaptionBar::EnableButton](#enablebutton)|Attiva o disattiva il pulsante sulla barra del titolo.|
|[CMFCCaptionBar::GetAlignment](#getalignment)|Restituisce l'allineamento dell'elemento specificato.|
|[CMFCCaptionBar::GetBorderSize](#getbordersize)|Restituisce la dimensione del bordo della barra del titolo.|
|[CMFCCaptionBar::GetButtonRect](#getbuttonrect)|Recupera il rettangolo di delimitazione del pulsante nella barra del titolo.|
|[CMFCCaptionBar::GetMargin](#getmargin)|Restituisce la distanza tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo.|
|[CMFCCaptionBar::IsMessageBarMode](#ismessagebarmode)|Specifica se la barra del titolo è in modalità barra dei messaggi.|
|[CMFCCaptionBar::RemoveBitmap](#removebitmap)|Rimuove l'immagine bitmap dalla barra del titolo.|
|[CMFCCaptionBar::RemoveButton](#removebutton)|Rimuove il pulsante dalla barra del titolo.|
|[CMFCCaptionBar::RemoveIcon](#removeicon)|Rimuove l'icona dalla barra del titolo.|
|[CMFCCaptionBar::RemoveText](#removetext)|Rimuove l'etichetta di testo dalla barra del titolo.|
|[CMFCCaptionBar::SetBitmap](#setbitmap)|Imposta l'immagine bitmap per la barra del titolo.|
|[CMFCCaptionBar::SetBorderSize](#setbordersize)|Imposta la dimensione del bordo della barra del titolo.|
|[CMFCCaptionBar::SetButton](#setbutton)|Imposta il pulsante per la barra del titolo.|
|[CMFCCaptionBar::SetButtonPressed](#setbuttonpressed)|Specifica se il pulsante rimane premuto.|
|[CMFCCaptionBar::SetButtonToolTip](#setbuttontooltip)|Imposta la descrizione comando per il pulsante.|
|[CMFCCaptionBar::SetFlatBorder](#setflatborder)|Imposta lo stile del bordo della barra del titolo.|
|[CMFCCaptionBar::SetIcon](#seticon)|Imposta l'icona per una barra del titolo.|
|[CMFCCaptionBar::SetImageToolTip](#setimagetooltip)|Imposta la descrizione comando per l'immagine per la barra del titolo.|
|[CMFCCaptionBar::SetMargin](#setmargin)|Imposta la distanza tra il bordo dell'elemento barra del titolo e il bordo del controllo barra del titolo.|
|[CMFCCaptionBar::SetText](#settext)|Imposta l'etichetta di testo per la barra del titolo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionBar::OnDrawBackground](#ondrawbackground)|Chiamato dal framework per riempire lo sfondo della barra del titolo.|
|[CMFCCaptionBar::OnDrawBorder](#ondrawborder)|Chiamato dal framework per disegnare il bordo della barra del titolo.|
|[CMFCCaptionBar::OnDrawButton](#ondrawbutton)|Chiamato dal framework per disegnare il pulsante della barra del titolo.|
|[CMFCCaptionBar::OnDrawImage](#ondrawimage)|Chiamato dal framework per disegnare l'immagine della barra del titolo.|
|[CMFCCaptionBar::OnDrawText](#ondrawtext)|Chiamato dal framework per disegnare il testo della barra del titolo.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground)|Colore di sfondo della barra del titolo.|
|[CMFCCaptionBar::m_clrBarBorder](#m_clrbarborder)|Colore del bordo della barra del titolo.|
|[CMFCCaptionBar::m_clrBarText](#m_clrbartext)|Colore del testo della barra della didascalia.|

## <a name="remarks"></a>Osservazioni

Per creare una barra del titolo, attenersi alla seguente procedura:

1. Costruire l'oggetto `CMFCCaptionBar`. In genere, si aggiunge la barra del titolo a una classe della finestra cornice.

1. Chiamare il [CMFCCaptionBar::Create](#create) metodo per creare il controllo `CMFCCaptionBar` barra del titolo e associarlo all'oggetto.

1. Chiamare [CMFCCaptionBar::SetButton](#setbutton), [CMFCCaptionBar::SetText](#settext), [CMFCCaptionBar::SetIcon](#seticon)e [CMFCCaptionBar::SetBitmap](#setbitmap) per impostare gli elementi della barra del titolo.

Quando si imposta l'elemento pulsante, è necessario assegnare un ID di comando al pulsante. Quando l'utente fa clic sul pulsante, la barra del titolo instrada i messaggi di WM_COMMAND messaggi che dispongono di questo ID per la finestra cornice padre.

La barra del titolo può funzionare anche in modalità barra dei messaggi, che emula la barra dei messaggi visualizzata nelle applicazioni di Microsoft Office 2007. In modalità barra dei messaggi, nella barra del titolo vengono visualizzati una bitmap, un messaggio e un pulsante (che in genere apre una finestra di dialogo). È possibile assegnare una descrizione comando alla bitmap.

Per abilitare la modalità barra dei messaggi, chiamare [CMFCCaptionBar::Create](#create) e impostare il quarto parametro (bIsMessageBarMode) su TRUE.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCCaptionBar` . L'esempio mostra come creare il controllo barra del titolo, impostare un bordo 3D della barra del titolo, impostare la distanza, in pixel, tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo, impostare il pulsante per la barra del titolo, impostare la descrizione comando per il pulsante, impostare l'etichetta di testo per la barra del titolo, impostare l'immagine bitmap per la barra della didascalia e impostare la descrizione comando per l'immagine nella barra del titolo. Questo frammento di codice fa parte dell'esempio Demo di [MS Office 2007.](../../overview/visual-cpp-samples.md)

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

**Intestazione:** afxcaptionbar.h

## <a name="cmfccaptionbarcreate"></a><a name="create"></a>CMFCCaptionBar::Create

Crea il controllo barra del titolo `CMFCCaptionBar` e lo associa all'oggetto.

```
BOOL Create(
    DWORD dwStyle,
    CWnd* pParentWnd,
    UINT uID,
    int nHeight=-1,
    BOOL bIsMessageBarMode=FALSE);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Combinazione logica OR degli stili della barra del titolo.

*pParentWnd (informazioni in due)*<br/>
Finestra padre del controllo barra del titolo.

*Uid*<br/>
ID del controllo barra del titolo.

*nAltezza*<br/>
Altezza, in pixel, del controllo barra del titolo. Se è -1, l'altezza viene calcolata in base all'altezza dell'icona, al testo e al pulsante visualizzati dal controllo barra del titolo.

*BIsMessageBarMode (Modalità Bar-messaggio)*<br/>
TRUESe la barra del titolo è in modalità barra dei messaggi; FALSE in caso contrario.

### <a name="return-value"></a>Valore restituito

TRUESe il controllo barra della didascalia viene creato correttamente. FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Costruire un `CMFCCaptionBar` oggetto in due passaggi. Innanzitutto si chiama il costruttore `Create` e quindi si chiama il metodo , `CMFCCaptionBar` che crea il controllo Windows e lo associa all'oggetto.

## <a name="cmfccaptionbardoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a>CMFCCaptionBar::DoesAllowDynInsertBefore

Indica se è possibile inserire dinamicamente un altro riquadro tra la barra del titolo e il relativo frame padre.

```
virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE a meno che non venga sottoposto a override.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccaptionbarenablebutton"></a><a name="enablebutton"></a>CMFCCaptionBar::EnableButton

Attiva o disattiva il pulsante sulla barra del titolo.

```
void EnableButton(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare il pulsante, FALSE per disabilitare il pulsante.

## <a name="cmfccaptionbargetalignment"></a><a name="getalignment"></a>CMFCCaptionBar::GetAlignment

Restituisce l'allineamento dell'elemento specificato.

```
BarElementAlignment GetAlignment(BarElement elem);
```

### <a name="parameters"></a>Parametri

*elem*<br/>
[in] Elemento della barra del titolo per il quale recuperare l'allineamento.

### <a name="return-value"></a>Valore restituito

L'allineamento di un elemento, ad esempio un pulsante, una bitmap, un testo o un'icona.

### <a name="remarks"></a>Osservazioni

L'allineamento dell'elemento può essere uno dei seguenti valori:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

## <a name="cmfccaptionbargetbordersize"></a><a name="getbordersize"></a>CMFCCaptionBar::GetBorderSize

Restituisce la dimensione del bordo della barra del titolo.

```
int GetBorderSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni, in pixel, del bordo.

## <a name="cmfccaptionbargetbuttonrect"></a><a name="getbuttonrect"></a>CMFCCaptionBar::GetButtonRect

Recupera il rettangolo di delimitazione del pulsante nella barra del titolo.

```
CRect GetButtonRect() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` che contiene le coordinate del rettangolo di delimitazione del pulsante nella barra del titolo.

## <a name="cmfccaptionbargetmargin"></a><a name="getmargin"></a>CMFCCaptionBar::GetMargin

Restituisce la distanza tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo.

```
int GetMargin() const;
```

### <a name="return-value"></a>Valore restituito

Distanza, in pixel, tra il bordo degli elementi della barra della didascalia e il bordo del controllo barra della didascalia.

## <a name="cmfccaptionbarismessagebarmode"></a><a name="ismessagebarmode"></a>CMFCCaptionBar::IsMessageBarMode

Specifica se la barra del titolo è in modalità barra dei messaggi.

```
BOOL IsMessageBarMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la barra del titolo è in modalità barra dei messaggi; FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Nella modalità della barra dei messaggi, la barra del titolo visualizza un'immagine con una descrizione comando, un testo del messaggio e un pulsante.

## <a name="cmfccaptionbarm_clrbarbackground"></a><a name="m_clrbarbackground"></a>CMFCCaptionBar::m_clrBarBackground

Colore di sfondo della barra del titolo.

```
COLORREF m_clrBarBackground
```

## <a name="cmfccaptionbarm_clrbarborder"></a><a name="m_clrbarborder"></a>CMFCCaptionBar::m_clrBarBorder

Colore del bordo della barra del titolo.

```
COLORREF m_clrBarBorder
```

## <a name="cmfccaptionbarm_clrbartext"></a><a name="m_clrbartext"></a>CMFCCaptionBar::m_clrBarText

Colore del testo della barra della didascalia.

```
COLORREF m_clrBarText
```

## <a name="cmfccaptionbarondrawbackground"></a><a name="ondrawbackground"></a>CMFCCaptionBar::OnDrawBackground

Chiamato dal framework per riempire lo sfondo della barra del titolo.

```
virtual void OnDrawBackground(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al contesto di dispositivo della barra del titolo.

*Rect*<br/>
[in] Rettangolo di delimitazione da riempire.

### <a name="remarks"></a>Osservazioni

Il `OnDrawBackground` metodo viene chiamato quando lo sfondo della barra del titolo sta per essere riempito. L'implementazione predefinita riempie lo sfondo utilizzando il [CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground) colore.

Eseguire l'override `CMFCCaptionBar` di questo metodo in una classe derivata per personalizzare l'aspetto della barra del titolo.

## <a name="cmfccaptionbarondrawborder"></a><a name="ondrawborder"></a>CMFCCaptionBar::OnDrawBorder

Chiamato dal framework per disegnare il bordo della barra del titolo.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Contesto di periferica utilizzato per visualizzare i bordi.

*Rect*<br/>
[in] Rettangolo di delimitazione.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, i bordi hanno lo stile piatto.

Eseguire l'override `CMFCCaptionBar` di questo metodo in una classe derivata per personalizzare l'aspetto dei bordi della barra del titolo.

## <a name="cmfccaptionbarondrawbutton"></a><a name="ondrawbutton"></a>CMFCCaptionBar::OnDrawButton

Chiamato dal framework per disegnare il pulsante della barra del titolo.

```
virtual void OnDrawButton(
    CDC* pDC,
    CRect rect,
    const CString& strButton,
    BOOL bEnabled);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo utilizzato per visualizzare il pulsante.

*Rect*<br/>
[in] Rettangolo di delimitazione del pulsante.

*strButton*<br/>
[in] Etichetta di testo del pulsante.

*bAbilitato*<br/>
[in] TRUESe il pulsante è abilitato; FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Eseguire l'override `CMFCCaptionBar` di questo metodo in una classe derivata per personalizzare l'aspetto del pulsante della barra del titolo.

## <a name="cmfccaptionbarondrawimage"></a><a name="ondrawimage"></a>CMFCCaptionBar::OnDrawImage

Chiamato dal framework per disegnare l'immagine della barra del titolo.

```
virtual void OnDrawImage(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo utilizzato per visualizzare l'immagine.

*Rect*<br/>
[in] Specifica il rettangolo di delimitazione dell'immagine.

### <a name="remarks"></a>Osservazioni

Eseguire l'override `CMFCCaptionBar` di questo metodo in una classe derivata per personalizzare l'aspetto dell'immagine.

## <a name="cmfccaptionbarondrawtext"></a><a name="ondrawtext"></a>CMFCCaptionBar::OnDrawText

Chiamato dal framework per disegnare il testo della barra del titolo.

```
virtual void OnDrawText(
    CDC* pDC,
    CRect rect,
    const CString& strText);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo utilizzato per visualizzare il pulsante.

*Rect*<br/>
[in] Rettangolo di delimitazione del testo.

*strText (testo str)*<br/>
[in] Stringa di testo da visualizzare.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita visualizza `CDC::DrawText` il testo utilizzando e [CMFCCaptionBar::m_clrBarText](#m_clrbartext) colore.

Eseguire l'override `CMFCCaptionBar` di questo metodo in una classe derivata per personalizzare l'aspetto del testo della barra del titolo.

## <a name="cmfccaptionbarremovebitmap"></a><a name="removebitmap"></a>CMFCCaptionBar::RemoveBitmap

Rimuove l'immagine bitmap dalla barra del titolo.

```
void RemoveBitmap();
```

## <a name="cmfccaptionbarremovebutton"></a><a name="removebutton"></a>CMFCCaptionBar::RemoveButton

Rimuove il pulsante dalla barra del titolo.

```
void RemoveButton();
```

### <a name="remarks"></a>Osservazioni

Il layout degli elementi della barra del titolo viene regolato automaticamente.

## <a name="cmfccaptionbarremoveicon"></a><a name="removeicon"></a>CMFCCaptionBar::RemoveIcon

Rimuove l'icona dalla barra del titolo.

```
void RemoveIcon();
```

## <a name="cmfccaptionbarremovetext"></a><a name="removetext"></a>CMFCCaptionBar::RemoveText

Rimuove l'etichetta di testo dalla barra del titolo.

```
void RemoveText();
```

## <a name="cmfccaptionbarsetbitmap"></a><a name="setbitmap"></a>CMFCCaptionBar::SetBitmap

Imposta l'immagine bitmap per la barra del titolo.

```
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

*Hbitmap*<br/>
[in] Handle per la bitmap da impostare.

*ClrTransparent*<br/>
[in] Valore RGB che specifica il colore trasparente della bitmap.

*bAllunga*<br/>
[in] Se TRUE, la bitmap viene estesa se non si adatta al rettangolo di delimitazione dell'immagine. In caso contrario, la bitmap non viene estesa.

*bmpAlignment (Allineamento bmp)*<br/>
[in] L'allineamento della bitmap.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per impostare una bitmap su una barra del titolo.

La bitmap precedente viene eliminata automaticamente. Se nella barra del titolo viene visualizzata un'icona perché è stato chiamato il metodo [CMFCCaptionBar::SetIcon](#seticon) , la bitmap non verrà visualizzata a meno che non si rimuova l'icona chiamando [CMFCCaptionBar::RemoveIcon](#removeicon).

La bitmap viene allineata come specificato dal *bmpAlignment* parametro.  Questo parametro può avere uno dei valori `BarElementAlignment` seguenti:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

## <a name="cmfccaptionbarsetbordersize"></a><a name="setbordersize"></a>CMFCCaptionBar::SetBorderSize

Imposta la dimensione del bordo della barra del titolo.

```
void SetBorderSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nDimensioni*<br/>
[in] Nuova dimensione, in pixel, del bordo della barra del titolo.

## <a name="cmfccaptionbarsetbutton"></a><a name="setbutton"></a>CMFCCaptionBar::SetButton

Imposta il pulsante per la barra del titolo.

```
void SetButton(
    LPCTSTR lpszLabel,
    UINT uiCmdUI,
    BarElementAlignment btnAlignmnet=ALIGN_LEFT,
    BOOL bHasDropDownArrow=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
Etichetta di comando del pulsante.

*uiCmdUI (informazioni in questo stato in stato in*<br/>
ID di comando del pulsante.

*btnAlignmnet (informazioni in bosnia)*<br/>
L'allineamento del pulsante.

*bHasDropDownArrow*<br/>
TRUEse il pulsante visualizza una freccia a discesa, FALSE in caso contrario.

## <a name="cmfccaptionbarsetbuttonpressed"></a><a name="setbuttonpressed"></a>CMFCCaptionBar::SetButtonPressed

Specifica se il pulsante rimane premuto.

```
void SetButtonPressed(BOOL bPresed=TRUE);
```

### <a name="parameters"></a>Parametri

*bPresed*<br/>
TRUESe il pulsante mantiene lo stato premuto, FALSE in caso contrario.

## <a name="cmfccaptionbarsetbuttontooltip"></a><a name="setbuttontooltip"></a>CMFCCaptionBar::SetButtonToolTip

Imposta la descrizione comando per il pulsante.

```
void SetButtonToolTip(
    LPCTSTR lpszToolTip,
    LPCTSTR lpszDescription=NULL);
```

### <a name="parameters"></a>Parametri

*lpszToolTip*<br/>
[in] Didascalia della descrizione comando.

*lpszDescrizione*<br/>
[in] Descrizione della descrizione comando.

## <a name="cmfccaptionbarsetflatborder"></a><a name="setflatborder"></a>CMFCCaptionBar::SetFlatBorder

Imposta lo stile del bordo della barra del titolo.

```
void SetFlatBorder(BOOL bFlat=TRUE);
```

### <a name="parameters"></a>Parametri

*bPiatto*<br/>
[in] TRUESe il bordo di una barra del titolo è piatto. FALSE se il bordo è 3D.

## <a name="cmfccaptionbarseticon"></a><a name="seticon"></a>CMFCCaptionBar::SetIcon

Imposta l'icona per una barra del titolo.

```
void SetIcon(
    HICON hIcon,
    BarElementAlignment iconAlignment=ALIGN_RIGHT);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
[in] Handle per l'icona da impostare.

*iconaAllineamento*<br/>
[in] L'allineamento dell'icona.

### <a name="remarks"></a>Osservazioni

Le barre delle didascalie possono visualizzare icone o bitmap. Vedere [CMFCCaptionBar::SetBitmap](#setbitmap) per informazioni su come visualizzare una bitmap. Se si impostano sia un'icona che una bitmap, l'icona viene sempre visualizzata. Chiamare [CMFCCaptionBar::RemoveIcon](#removeicon) per rimuovere un'icona dalla barra del titolo.

L'icona viene allineata in base al parametro *iconAlignment.* Può essere uno dei `BarElementAlignment` seguenti valori:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

## <a name="cmfccaptionbarsetimagetooltip"></a><a name="setimagetooltip"></a>CMFCCaptionBar::SetImageToolTip

Imposta la descrizione comando per l'immagine nella barra del titolo.

```
void SetImageToolTip(
    LPCTSTR lpszToolTip,
    LPCTSTR lpszDescription=NULL);
```

### <a name="parameters"></a>Parametri

*lpszToolTip*<br/>
[in] Testo della descrizione comando.

*lpszDescrizione*<br/>
[in] Descrizione della descrizione comando.

## <a name="cmfccaptionbarsetmargin"></a><a name="setmargin"></a>CMFCCaptionBar::SetMargin

Imposta la distanza tra il bordo dell'elemento barra del titolo e il bordo del controllo barra del titolo.

```
void SetMargin(int nMargin);
```

### <a name="parameters"></a>Parametri

*nMargine*<br/>
[in] Distanza, in pixel, tra il bordo degli elementi della barra della didascalia e il bordo del controllo barra della didascalia.

## <a name="cmfccaptionbarsettext"></a><a name="settext"></a>CMFCCaptionBar::SetText

Imposta l'etichetta di testo per la barra del titolo.

```
void SetText(
    const CString& strText,
    BarElementAlignment textAlignment=ALIGN_RIGHT);
```

### <a name="parameters"></a>Parametri

*strText (testo str)*<br/>
[in] Stringa di testo da impostare.

*Textalignment*<br/>
[in] Allineamento del testo.

### <a name="remarks"></a>Osservazioni

L'etichetta di testo viene allineata come specificato dal parametro *textAlignment.* Può essere uno dei `BarElementAlignment` seguenti valori:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
