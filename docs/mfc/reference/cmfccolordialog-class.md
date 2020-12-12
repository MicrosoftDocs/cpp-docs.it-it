---
description: 'Altre informazioni su: classe CMFCColorDialog'
title: Classe CMFCColorDialog
ms.date: 11/04/2016
f1_keywords:
- CMFCColorDialog
- AFXCOLORDIALOG/CMFCColorDialog
- AFXCOLORDIALOG/CMFCColorDialog::CMFCColorDialog
- AFXCOLORDIALOG/CMFCColorDialog::GetColor
- AFXCOLORDIALOG/CMFCColorDialog::GetPalette
- AFXCOLORDIALOG/CMFCColorDialog::RebuildPalette
- AFXCOLORDIALOG/CMFCColorDialog::SetCurrentColor
- AFXCOLORDIALOG/CMFCColorDialog::SetNewColor
- AFXCOLORDIALOG/CMFCColorDialog::SetPageOne
- AFXCOLORDIALOG/CMFCColorDialog::SetPageTwo
helpviewer_keywords:
- CMFCColorDialog [MFC], CMFCColorDialog
- CMFCColorDialog [MFC], GetColor
- CMFCColorDialog [MFC], GetPalette
- CMFCColorDialog [MFC], RebuildPalette
- CMFCColorDialog [MFC], SetCurrentColor
- CMFCColorDialog [MFC], SetNewColor
- CMFCColorDialog [MFC], SetPageOne
- CMFCColorDialog [MFC], SetPageTwo
ms.assetid: 235bbbbc-a3b1-46e0-801b-fb55093ec579
ms.openlocfilehash: 4279a92ef22253ce2909acce88d77428e3ed5495
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327689"
---
# <a name="cmfccolordialog-class"></a>Classe CMFCColorDialog

La `CMFCColorDialog` classe rappresenta una finestra di dialogo di selezione colori.

## <a name="syntax"></a>Sintassi

```
class CMFCColorDialog : public CDialogEx
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCColorDialog:: CMFCColorDialog](#cmfccolordialog)|Costruisce un oggetto `CMFCColorDialog`.|
|`CMFCColorDialog::~CMFCColorDialog`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCColorDialog:: GetColor](#getcolor)|Restituisce il colore selezionato corrente.|
|[CMFCColorDialog:: gettavolozza](#getpalette)|Restituisce la tavolozza del colore.|
|`CMFCColorDialog::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Per la sintassi e altre informazioni, vedere [CWnd::P retranslatemessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override di `CDialogEx::PreTranslateMessage`.|
|[CMFCColorDialog:: RebuildPalette](#rebuildpalette)|Deriva una tavolozza dalla tavolozza di sistema.|
|[CMFCColorDialog:: SetCurrentColor](#setcurrentcolor)|Imposta il colore selezionato corrente.|
|[CMFCColorDialog:: SetNewColor](#setnewcolor)|Imposta il colore più equivalente a un valore RGB specificato.|
|[CMFCColorDialog:: SetPageOne](#setpageone)|Seleziona un valore RGB per la prima pagina delle proprietà.|
|[CMFCColorDialog:: SetPageTwo](#setpagetwo)|Seleziona un valore RGB per la seconda pagina delle proprietà.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|`m_bIsMyPalette`|TRUE se la finestra di dialogo Selezione colori utilizza la relativa tavolozza dei colori o FALSE se la finestra di dialogo utilizza una tavolozza specificata nel `CMFCColorDialog` costruttore.|
|`m_bPickerMode`|TRUE quando l'utente seleziona un colore dalla finestra di dialogo di selezione; in caso contrario, FALSE.|
|`m_btnColorSelect`|Pulsante del colore selezionato dall'utente.|
|`m_CurrentColor`|Colore attualmente selezionato.|
|`m_hcurPicker`|Cursore utilizzato per selezionare un colore.|
|`m_NewColor`|Colore potenziale selezionato, che può essere selezionato in modo permanente o ripristinato al colore originale.|
|`m_pColourSheetOne`|Puntatore alla prima pagina delle proprietà della finestra delle proprietà di selezione dei colori.|
|`m_pColourSheetTwo`|Puntatore alla seconda pagina delle proprietà della finestra delle proprietà di selezione dei colori.|
|`m_pPalette`|Tavolozza logica corrente.|
|`m_pPropSheet`|Puntatore alla finestra delle proprietà per la finestra di dialogo di selezione colori.|
|`m_wndColors`|Oggetto controllo selezione colori.|
|`m_wndStaticPlaceHolder`|Controllo statico che rappresenta un segnaposto per la finestra delle proprietà di selezione colori.|

## <a name="remarks"></a>Commenti

La finestra di dialogo Selezione colori viene visualizzata come finestra delle proprietà con due pagine. Nella prima pagina selezionare un colore standard dalla tavolozza di sistema. nella seconda pagina è possibile selezionare un colore personalizzato.

È possibile costruire un `CMFCColorDialog` oggetto nello stack e quindi chiamare `DoModal` , passando il colore iniziale come parametro al `CMFCColorDialog` costruttore. La finestra di dialogo Selezione colori crea quindi diversi oggetti della [classe CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md) per gestire ogni tavolozza dei colori.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare una finestra di dialogo dei colori utilizzando diversi metodi della `CMFCColorDialog` classe. Nell'esempio viene illustrato come impostare i colori correnti e nuovi della finestra di dialogo e come impostare i componenti rosso, verde e blu di un colore selezionato nelle due pagine delle proprietà della finestra di dialogo colore. Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#3](../../mfc/reference/codesnippet/cpp/cmfccolordialog-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolordialog. h

## <a name="cmfccolordialogcmfccolordialog"></a><a name="cmfccolordialog"></a> CMFCColorDialog:: CMFCColorDialog

Costruisce un oggetto `CMFCColorDialog`.

```
CMFCColorDialog(
    COLORREF clrInit=0,
    DWORD dwFlags=0,
    CWnd* pParentWnd=NULL,
    HPALETTE hPal=NULL);
```

### <a name="parameters"></a>Parametri

*clrInit*<br/>
in Selezione di colori predefinita. Se non viene specificato alcun valore, il valore predefinito è RGB (0, 0, 0) (nero).

*dwFlags*<br/>
[in] Riservato.

*pParentWnd*<br/>
in Puntatore alla finestra padre o proprietaria della finestra di dialogo.

*hPal*<br/>
in Handle per una tavolozza dei colori.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfccolordialoggetcolor"></a><a name="getcolor"></a> CMFCColorDialog:: GetColor

Recupera il colore selezionato dall'utente dalla finestra di dialogo dei colori.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che contiene le informazioni RGB per il colore selezionato nella finestra di dialogo colore.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo la chiamata al `DoModal` metodo.

## <a name="cmfccolordialoggetpalette"></a><a name="getpalette"></a> CMFCColorDialog:: gettavolozza

Recupera la tavolozza dei colori disponibile nella finestra di dialogo del colore corrente.

```
CPalette* GetPalette() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all' `CPalette` oggetto specificato nel `CMFCColorDialog` costruttore.

### <a name="remarks"></a>Commenti

La tavolozza dei colori specifica i colori che l'utente può scegliere.

## <a name="cmfccolordialogrebuildpalette"></a><a name="rebuildpalette"></a> CMFCColorDialog:: RebuildPalette

Deriva una tavolozza dalla tavolozza di sistema.

```cpp
void RebuildPalette();
```

## <a name="cmfccolordialogsetcurrentcolor"></a><a name="setcurrentcolor"></a> CMFCColorDialog:: SetCurrentColor

Imposta il colore corrente della finestra di dialogo.

```cpp
void SetCurrentColor(COLORREF rgb);
```

### <a name="parameters"></a>Parametri

*RGB*<br/>
in Valore di colore RGB

### <a name="remarks"></a>Commenti

## <a name="cmfccolordialogsetnewcolor"></a><a name="setnewcolor"></a> CMFCColorDialog:: SetNewColor

Imposta il colore corrente sul colore nella tavolozza corrente più simile.

```cpp
void SetNewColor(COLORREF rgb);
```

### <a name="parameters"></a>Parametri

*RGB*<br/>
in Oggetto [COLORREF](/windows/win32/gdi/colorref) che specifica un colore RGB.

### <a name="remarks"></a>Commenti

## <a name="cmfccolordialogsetpageone"></a><a name="setpageone"></a> CMFCColorDialog:: SetPageOne

Specifica in modo esplicito i componenti rosso, verde e blu di un colore selezionato nella prima pagina delle proprietà di una finestra di dialogo colore.

```cpp
void SetPageOne(
    BYTE R,
    BYTE G,
    BYTE B);
```

### <a name="parameters"></a>Parametri

*R*<br/>
in Specifica il componente rosso del valore RGB.

*G*<br/>
in Specifica il componente verde del valore RGB.

*B*<br/>
in Specifica il componente blu del valore RGB.

### <a name="remarks"></a>Commenti

## <a name="cmfccolordialogsetpagetwo"></a><a name="setpagetwo"></a> CMFCColorDialog:: SetPageTwo

Specifica in modo esplicito i componenti rosso, verde e blu di un colore selezionato nella seconda pagina delle proprietà di una finestra di dialogo colore.

```cpp
void SetPageTwo(
    BYTE R,
    BYTE G,
    BYTE B);
```

### <a name="parameters"></a>Parametri

*R*<br/>
in Specifica un componente rosso del valore RGB

*G*<br/>
in Specifica un componente verde di un valore RGB

*B*<br/>
in Specifica un componente blu di un valore RGB

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md)
