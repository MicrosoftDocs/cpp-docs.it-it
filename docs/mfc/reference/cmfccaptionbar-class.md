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
ms.openlocfilehash: c6385cb6bd3eec3ce5fefe0475d771c774777820
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781874"
---
# <a name="cmfccaptionbar-class"></a>CMFCCaptionBar (classe)

Oggetto `CMFCCaptionBar` oggetto è una barra di controllo che è possibile visualizzare tre elementi: un pulsante, un'etichetta di testo e una bitmap. Può essere visualizzato un solo elemento di ogni tipo alla volta. È possibile allineare ciascun elemento ai margini sinistro o destro del controllo o al centro. È inoltre possibile applicare uno stile Flat o 3D ai bordi superiore e inferiore della barra del titolo.

## <a name="syntax"></a>Sintassi

```
class CMFCCaptionBar : public CPane
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionBar::Create](#create)|Crea il controllo barra del titolo e la collega al `CMFCCaptionBar` oggetto.|
|[CMFCCaptionBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Indica se un altro riquadro può essere inserito in modo dinamico tra la barra del titolo e il relativo frame padre. (Esegue l'override [cbasepane:: Doesallowdyninsertbefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|
|[CMFCCaptionBar::EnableButton](#enablebutton)|Abilita o disabilita il pulsante della barra del titolo.|
|[CMFCCaptionBar::GetAlignment](#getalignment)|Restituisce l'allineamento dell'elemento specificato.|
|[CMFCCaptionBar::GetBorderSize](#getbordersize)|Restituisce la dimensione del bordo della barra del titolo.|
|[CMFCCaptionBar::GetButtonRect](#getbuttonrect)|Recupera il rettangolo di delimitazione del pulsante sulla barra del titolo.|
|[CMFCCaptionBar::GetMargin](#getmargin)|Restituisce la distanza tra il bordo degli elementi barra didascalia e il bordo del controllo indicatore di didascalia.|
|[CMFCCaptionBar::IsMessageBarMode](#ismessagebarmode)|Specifica se la barra del titolo è in modalità barra dei messaggi.|
|[CMFCCaptionBar::RemoveBitmap](#removebitmap)|Rimuove l'immagine bitmap della barra del titolo.|
|[CMFCCaptionBar::RemoveButton](#removebutton)|Rimuove il pulsante della barra del titolo.|
|[CMFCCaptionBar::RemoveIcon](#removeicon)|Rimuove l'icona della barra del titolo.|
|[CMFCCaptionBar::RemoveText](#removetext)|Rimuove l'etichetta di testo dalla barra del titolo.|
|[CMFCCaptionBar::SetBitmap](#setbitmap)|Imposta l'immagine bitmap per della barra del titolo.|
|[CMFCCaptionBar::SetBorderSize](#setbordersize)|Imposta la dimensione del bordo della barra del titolo.|
|[CMFCCaptionBar::SetButton](#setbutton)|Imposta il pulsante per la barra del titolo.|
|[CMFCCaptionBar::SetButtonPressed](#setbuttonpressed)|Consente di specificare se il pulsante premuto.|
|[CMFCCaptionBar::SetButtonToolTip](#setbuttontooltip)|Imposta la descrizione comando del pulsante.|
|[CMFCCaptionBar::SetFlatBorder](#setflatborder)|Imposta lo stile del bordo della barra del titolo.|
|[CMFCCaptionBar::SetIcon](#seticon)|Imposta l'icona per una barra del titolo.|
|[CMFCCaptionBar::SetImageToolTip](#setimagetooltip)|Imposta la descrizione comando per l'immagine per la barra del titolo.|
|[CMFCCaptionBar::SetMargin](#setmargin)|Imposta la distanza tra il bordo dell'elemento barra didascalia e il bordo del controllo indicatore di didascalia.|
|[CMFCCaptionBar::SetText](#settext)|Imposta l'etichetta di testo per la barra del titolo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionBar::OnDrawBackground](#ondrawbackground)|Chiamato dal framework per riempire lo sfondo della barra del titolo.|
|[CMFCCaptionBar::OnDrawBorder](#ondrawborder)|Chiamato dal framework per disegnare il bordo della barra del titolo.|
|[CMFCCaptionBar::OnDrawButton](#ondrawbutton)|Chiamata eseguita dal framework per disegnare il pulsante della barra del titolo.|
|[CMFCCaptionBar::OnDrawImage](#ondrawimage)|Chiamato dal framework per disegnare l'immagine di barra del titolo.|
|[CMFCCaptionBar::OnDrawText](#ondrawtext)|Chiamata eseguita dal framework per disegnare il testo barra del titolo.|

### <a name="data-members"></a>Membri di dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground)|Il colore di sfondo della barra del titolo.|
|[CMFCCaptionBar::m_clrBarBorder](#m_clrbarborder)|Colore del bordo della barra del titolo.|
|[CMFCCaptionBar::m_clrBarText](#m_clrbartext)|Colore del testo della barra di didascalia.|

## <a name="remarks"></a>Note

Per creare una barra del titolo, seguire questa procedura:

1. Costruire l'oggetto `CMFCCaptionBar`. In genere, è necessario aggiungere la barra del titolo di una classe della finestra cornice.

1. Chiamare il [CMFCCaptionBar::Create](#create) per creare il controllo barra del titolo e associarlo al `CMFCCaptionBar` oggetto.

1. Chiamare [CMFCCaptionBar::SetButton](#setbutton), [CMFCCaptionBar::SetText](#settext), [CMFCCaptionBar::SetIcon](#seticon), e [CMFCCaptionBar::SetBitmap](#setbitmap)per impostare gli elementi della barra di didascalia.

Quando si imposta l'elemento button, è necessario assegnare un ID di comando per il pulsante. Quando l'utente fa clic sul pulsante, la barra del titolo instrada i messaggi WM_COMMAND con questo ID per la finestra cornice padre.

Barra del titolo può interagire anche in modalità barra dei messaggi, che emula la barra dei messaggi che viene visualizzato nelle applicazioni Microsoft Office 2007. In modalità indicatore di messaggio, la barra del titolo visualizza una bitmap, un messaggio e un pulsante (che in genere si apre una finestra di dialogo.) È possibile assegnare una descrizione comando alla bitmap.

Per abilitare la modalità barra dei messaggi, chiamare [CMFCCaptionBar::Create](#create) e il quarto parametro (bIsMessageBarMode) impostato su TRUE.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCCaptionBar` . L'esempio illustra come creare il controllo barra del titolo, impostare un bordo 3D della barra del titolo, impostare la distanza, espressa in pixel, tra il bordo della didascalia della barra di elementi e il bordo del controllo indicatore di didascalia, impostare il pulsante per la barra del titolo , impostare la descrizione comando del pulsante, impostare l'etichetta di testo per la barra del titolo, impostare l'immagine bitmap per la barra del titolo e impostare la descrizione comando per l'immagine nella barra del titolo. Questo frammento di codice fa parte di [esempio di MS Office 2007 Demo](../../overview/visual-cpp-samples.md).

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

##  <a name="create"></a>  CMFCCaptionBar::Create

Crea il controllo barra del titolo e la collega al `CMFCCaptionBar` oggetto.

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
La combinazione OR logica degli stili di barra del titolo.

*pParentWnd*<br/>
La finestra padre del controllo indicatore di didascalia.

*uID*<br/>
L'ID del controllo indicatore di didascalia.

*nHeight*<br/>
Altezza, in pixel, del controllo indicatore di didascalia. Se è 1, l'altezza viene calcolato in base all'altezza dell'icona, il testo e il pulsante che visualizza il controllo barra del titolo.

*bIsMessageBarMode*<br/>
TRUE se la barra del titolo è in modalità di barra il messaggio. FALSE in caso contrario.

### <a name="return-value"></a>Valore restituito

TRUE se il controllo barra del titolo viene creato correttamente. FALSE in caso contrario.

### <a name="remarks"></a>Note

Si costruisce un `CMFCCaptionBar` oggetto in due passaggi. Prima di tutto si chiama il costruttore e quindi si chiama il `Create` metodo, che crea il controllo di Windows e lo collega al `CMFCCaptionBar` oggetto.

##  <a name="doesallowdyninsertbefore"></a>  CMFCCaptionBar::DoesAllowDynInsertBefore

Indica se un altro riquadro può essere inserito in modo dinamico tra la barra del titolo e il relativo frame padre.

```
virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

A meno che non viene sottoposto a override, restituisce FALSE.

### <a name="remarks"></a>Note

##  <a name="enablebutton"></a>  CMFCCaptionBar::EnableButton

Abilita o disabilita il pulsante della barra del titolo.

```
void EnableButton(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] True per abilitare il pulsante, FALSE per disabilitare il pulsante.

##  <a name="getalignment"></a>  CMFCCaptionBar::GetAlignment

Restituisce l'allineamento dell'elemento specificato.

```
BarElementAlignment GetAlignment(BarElement elem);
```

### <a name="parameters"></a>Parametri

*elem*<br/>
[in] Un elemento della barra di didascalia per il quale recuperare l'allineamento.

### <a name="return-value"></a>Valore restituito

L'allineamento di un elemento, ad esempio un pulsante, una bitmap, testo o un'icona.

### <a name="remarks"></a>Note

L'allineamento dell'elemento può essere uno dei valori seguenti:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

##  <a name="getbordersize"></a>  CMFCCaptionBar::GetBorderSize

Restituisce la dimensione del bordo della barra del titolo.

```
int GetBorderSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni, in pixel, del bordo.

##  <a name="getbuttonrect"></a>  CMFCCaptionBar::GetButtonRect

Recupera il rettangolo di delimitazione del pulsante sulla barra del titolo.

```
CRect GetButtonRect() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` oggetto che contiene le coordinate del rettangolo di delimitazione del pulsante sulla barra del titolo.

##  <a name="getmargin"></a>  CMFCCaptionBar::GetMargin

Restituisce la distanza tra il bordo degli elementi barra didascalia e il bordo del controllo indicatore di didascalia.

```
int GetMargin() const;
```

### <a name="return-value"></a>Valore restituito

Distanza, espressa in pixel, tra il bordo degli elementi barra didascalia e il bordo del controllo indicatore di didascalia.

##  <a name="ismessagebarmode"></a>  CMFCCaptionBar::IsMessageBarMode

Specifica se la barra del titolo è in modalità barra dei messaggi.

```
BOOL IsMessageBarMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la barra del titolo è in modalità di barra il messaggio. FALSE in caso contrario.

### <a name="remarks"></a>Note

Nella modalità barra dei messaggi, la barra del titolo visualizza un'immagine con una descrizione comando, un testo del messaggio e un pulsante.

##  <a name="m_clrbarbackground"></a>  CMFCCaptionBar::m_clrBarBackground

Il colore di sfondo della barra del titolo.

```
COLORREF m_clrBarBackground
```

##  <a name="m_clrbarborder"></a>  CMFCCaptionBar::m_clrBarBorder

Colore del bordo della barra del titolo.

```
COLORREF m_clrBarBorder
```

##  <a name="m_clrbartext"></a>  CMFCCaptionBar::m_clrBarText

Colore del testo della barra di didascalia.

```
COLORREF m_clrBarText
```

##  <a name="ondrawbackground"></a>  CMFCCaptionBar::OnDrawBackground

Chiamato dal framework per riempire lo sfondo della barra del titolo.

```
virtual void OnDrawBackground(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al contesto di dispositivo della barra del titolo.

*rect*<br/>
[in] Per riempire il rettangolo di delimitazione.

### <a name="remarks"></a>Note

Il `OnDrawBackground` metodo viene chiamato quando sta per essere riempito lo sfondo della barra del titolo. L'implementazione predefinita riempie lo sfondo usando il [CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground) colore.

L'override del metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto della barra del titolo.

##  <a name="ondrawborder"></a>  CMFCCaptionBar::OnDrawBorder

Chiamato dal framework per disegnare il bordo della barra del titolo.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Un contesto di dispositivo che consente di visualizzare i bordi.

*rect*<br/>
[in] Il rettangolo di delimitazione.

### <a name="remarks"></a>Note

Per impostazione predefinita, i bordi sono applicato lo stile flat.

L'override del metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto dei bordi della barra del titolo.

##  <a name="ondrawbutton"></a>  CMFCCaptionBar::OnDrawButton

Chiamata eseguita dal framework per disegnare il pulsante della barra del titolo.

```
virtual void OnDrawButton(
    CDC* pDC,
    CRect rect,
    const CString& strButton,
    BOOL bEnabled);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo che consente di visualizzare il pulsante.

*rect*<br/>
[in] Il rettangolo di delimitazione del pulsante.

*strButton*<br/>
[in] Etichetta di testo del pulsante.

*bEnabled*<br/>
[in] TRUE se il pulsante è abilitato; FALSE in caso contrario.

### <a name="remarks"></a>Note

L'override del metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto del pulsante della barra del titolo.

##  <a name="ondrawimage"></a>  CMFCCaptionBar::OnDrawImage

Chiamato dal framework per disegnare l'immagine di barra del titolo.

```
virtual void OnDrawImage(
    CDC* pDC,
    CRect rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo che consente di visualizzare l'immagine.

*rect*<br/>
[in] Specifica il rettangolo di delimitazione dell'immagine.

### <a name="remarks"></a>Note

L'override del metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto dell'immagine.

##  <a name="ondrawtext"></a>  CMFCCaptionBar::OnDrawText

Chiamata eseguita dal framework per disegnare il testo barra del titolo.

```
virtual void OnDrawText(
    CDC* pDC,
    CRect rect,
    const CString& strText);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo che consente di visualizzare il pulsante.

*rect*<br/>
[in] Il rettangolo di delimitazione del testo.

*strText*<br/>
[in] La stringa di testo da visualizzare.

### <a name="remarks"></a>Note

L'implementazione predefinita viene visualizzato il testo usando `CDC::DrawText` e [CMFCCaptionBar::m_clrBarText](#m_clrbartext) colore.

L'override del metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto del testo della barra del titolo.

##  <a name="removebitmap"></a>  CMFCCaptionBar::RemoveBitmap

Rimuove l'immagine bitmap della barra del titolo.

```
void RemoveBitmap();
```

##  <a name="removebutton"></a>  CMFCCaptionBar::RemoveButton

Rimuove il pulsante della barra del titolo.

```
void RemoveButton();
```

### <a name="remarks"></a>Note

Il layout degli elementi di didascalia a barre vengono automaticamente adeguati.

##  <a name="removeicon"></a>  CMFCCaptionBar::RemoveIcon

Rimuove l'icona della barra del titolo.

```
void RemoveIcon();
```

##  <a name="removetext"></a>  CMFCCaptionBar::RemoveText

Rimuove l'etichetta di testo dalla barra del titolo.

```
void RemoveText();
```

##  <a name="setbitmap"></a>  CMFCCaptionBar::SetBitmap

Imposta l'immagine bitmap per della barra del titolo.

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

*hBitmap*<br/>
[in] Handle per la mappa di bit da impostare.

*clrTransparent*<br/>
[in] Un valore RGB che specifica il colore trasparente dell'immagine bitmap.

*bStretch*<br/>
[in] Se TRUE, la bitmap viene adattata se non si adatta all'immagine del rettangolo di delimitazione. In caso contrario, la bitmap non è estesa.

*bmpAlignment*<br/>
[in] L'allineamento dell'immagine bitmap.

### <a name="remarks"></a>Note

Utilizzare questo metodo per impostare una bitmap in una barra del titolo.

La mappa di bit precedente viene eliminato automaticamente. Se la barra del titolo viene visualizzata un'icona perché hai chiamato così il [CMFCCaptionBar::SetIcon](#seticon) metodo, la bitmap non verrà visualizzata a meno che non si rimuove l'icona chiamando [CMFCCaptionBar::RemoveIcon](#removeicon).

La bitmap è allineata come specificato dal *bmpAlignment* parametro.  Questo parametro può avere uno dei valori `BarElementAlignment` seguenti:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

##  <a name="setbordersize"></a>  CMFCCaptionBar::SetBorderSize

Imposta la dimensione del bordo della barra del titolo.

```
void SetBorderSize(int nSize);
```

### <a name="parameters"></a>Parametri

*nSize*<br/>
[in] La nuova dimensione, in pixel, del bordo barra del titolo.

##  <a name="setbutton"></a>  CMFCCaptionBar::SetButton

Imposta il pulsante per la barra del titolo.

```
void SetButton(
    LPCTSTR lpszLabel,
    UINT uiCmdUI,
    BarElementAlignment btnAlignmnet=ALIGN_LEFT,
    BOOL bHasDropDownArrow=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
Etichetta di comando del pulsante.

*uiCmdUI*<br/>
ID del comando. del pulsante

*btnAlignmnet*<br/>
Allineamento del pulsante.

*bHasDropDownArrow*<br/>
TRUE se il pulsante Visualizza un elenco a discesa sulla freccia, in caso contrario, FALSE.

##  <a name="setbuttonpressed"></a>  CMFCCaptionBar::SetButtonPressed

Consente di specificare se il pulsante premuto.

```
void SetButtonPressed(BOOL bPresed=TRUE);
```

### <a name="parameters"></a>Parametri

*bPresed*<br/>
TRUE se il pulsante mantiene lo stato di premuto, FALSE in caso contrario.

##  <a name="setbuttontooltip"></a>  CMFCCaptionBar::SetButtonToolTip

Imposta la descrizione comando del pulsante.

```
void SetButtonToolTip(
    LPCTSTR lpszToolTip,
    LPCTSTR lpszDescription=NULL);
```

### <a name="parameters"></a>Parametri

*lpszToolTip*<br/>
[in] La didascalia della descrizione comando.

*lpszDescription*<br/>
[in] La descrizione comando.

##  <a name="setflatborder"></a>  CMFCCaptionBar::SetFlatBorder

Imposta lo stile del bordo della barra del titolo.

```
void SetFlatBorder(BOOL bFlat=TRUE);
```

### <a name="parameters"></a>Parametri

*bFlat*<br/>
[in] TRUE se il bordo di una barra del titolo è flat. FALSE se il bordo 3D.

##  <a name="seticon"></a>  CMFCCaptionBar::SetIcon

Imposta l'icona per una barra del titolo.

```
void SetIcon(
    HICON hIcon,
    BarElementAlignment iconAlignment=ALIGN_RIGHT);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
[in] L'handle dell'icona da impostare.

*iconAlignment*<br/>
[in] L'allineamento dell'icona.

### <a name="remarks"></a>Note

Barre del titolo possono visualizzare icone o bitmap. Visualizzare [CMFCCaptionBar::SetBitmap](#setbitmap) per scoprire come fare visualizzare una bitmap. Se si imposta un'icona sia una bitmap, l'icona viene visualizzata sempre. Chiamare [CMFCCaptionBar::RemoveIcon](#removeicon) per rimuovere un'icona nella barra del titolo.

L'icona è allineato in base al *iconAlignment* parametro. Può essere uno dei seguenti `BarElementAlignment` valori:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

##  <a name="setimagetooltip"></a>  CMFCCaptionBar::SetImageToolTip

Imposta la descrizione comando per l'immagine nella barra del titolo.

```
void SetImageToolTip(
    LPCTSTR lpszToolTip,
    LPCTSTR lpszDescription=NULL);
```

### <a name="parameters"></a>Parametri

*lpszToolTip*<br/>
[in] Il testo della descrizione comando.

*lpszDescription*<br/>
[in] La descrizione comando.

##  <a name="setmargin"></a>  CMFCCaptionBar::SetMargin

Imposta la distanza tra il bordo dell'elemento barra didascalia e il bordo del controllo indicatore di didascalia.

```
void SetMargin(int nMargin);
```

### <a name="parameters"></a>Parametri

*nMargin*<br/>
[in] Distanza, espressa in pixel, tra il bordo degli elementi barra didascalia e il bordo del controllo indicatore di didascalia.

##  <a name="settext"></a>  CMFCCaptionBar::SetText

Imposta l'etichetta di testo per la barra del titolo.

```
void SetText(
    const CString& strText,
    BarElementAlignment textAlignment=ALIGN_RIGHT);
```

### <a name="parameters"></a>Parametri

*strText*<br/>
[in] La stringa di testo da impostare.

*textAlignment*<br/>
[in] L'allineamento del testo.

### <a name="remarks"></a>Note

L'etichetta di testo è allineato come specificato dal *textAlignment* parametro. Può essere uno dei seguenti `BarElementAlignment` valori:

- ALIGN_INVALID

- ALIGN_LEFT

- ALIGN_RIGHT

- ALIGN_CENTER

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
