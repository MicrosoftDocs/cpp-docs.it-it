---
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
ms.openlocfilehash: 1d4bd31d5095f572ee80f0357a2d7526482f1caa
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752551"
---
# <a name="cmfccolordialog-class"></a>Classe CMFCColorDialog

La `CMFCColorDialog` classe rappresenta una finestra di dialogo per la selezione dei colori.

## <a name="syntax"></a>Sintassi

```
class CMFCColorDialog : public CDialogEx
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorDialog::CMFCColorDialog](#cmfccolordialog)|Costruisce un oggetto `CMFCColorDialog`.|
|`CMFCColorDialog::~CMFCColorDialog`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorDialog::GetColor](#getcolor)|Restituisce il colore selezionato corrente.|
|[CMFCColorDialog::GetPalette](#getpalette)|Restituisce la tavolozza del colore.|
|`CMFCColorDialog::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage.](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Per ulteriori informazioni sulla sintassi e ulteriori informazioni, vedere [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override di `CDialogEx::PreTranslateMessage`.|
|[CMFCColorDialog::RebuildPalette](#rebuildpalette)|Deriva una tavolozza dalla tavolozza di sistema.|
|[CMFCColorDialog::SetCurrentColor](#setcurrentcolor)|Imposta il colore selezionato corrente.|
|[CMFCColorDialog::SetNewColor](#setnewcolor)|Imposta il colore più equivalente a un valore RGB specificato.|
|[CMFCColorDialog::SetPageOne](#setpageone)|Seleziona un valore RGB per la prima pagina delle proprietà.|
|[CMFCColorDialog::SetPageTwo](#setpagetwo)|Seleziona un valore RGB per la seconda pagina delle proprietà.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|`m_bIsMyPalette`|TRUESe la finestra di dialogo di selezione dei colori utilizza la propria tavolozza dei colori oppure FALSE se la finestra di dialogo utilizza una tavolozza specificata nel `CMFCColorDialog` costruttore.|
|`m_bPickerMode`|TRUE mentre l'utente seleziona un colore dalla finestra di dialogo di selezione; in caso contrario, FALSE.|
|`m_btnColorSelect`|Pulsante di colore selezionato dall'utente.|
|`m_CurrentColor`|Colore attualmente selezionato.|
|`m_hcurPicker`|Cursore utilizzato per selezionare un colore.|
|`m_NewColor`|Il colore selezionato potenziale, che può essere selezionato in modo permanente o ripristinato al colore originale.|
|`m_pColourSheetOne`|Puntatore alla prima pagina delle proprietà della finestra delle proprietà per la selezione dei colori.|
|`m_pColourSheetTwo`|Puntatore alla seconda pagina delle proprietà della finestra delle proprietà selezione colori.|
|`m_pPalette`|Tavolozza logica corrente.|
|`m_pPropSheet`|Puntatore alla finestra delle proprietà per la finestra di dialogo di selezione dei colori.|
|`m_wndColors`|Oggetto controllo selezione colori.|
|`m_wndStaticPlaceHolder`|Controllo statico segnaposto per la finestra delle proprietà della selezione colori.|

## <a name="remarks"></a>Osservazioni

La finestra di dialogo per la selezione dei colori viene visualizzata come finestra delle proprietà con due pagine. Nella prima pagina, si seleziona un colore standard dalla tavolozza di sistema; nella seconda pagina, si seleziona un colore personalizzato.

È possibile `CMFCColorDialog` costruire un oggetto nello `DoModal`stack e quindi chiamare , `CMFCColorDialog` passando il colore iniziale come parametro al costruttore. La finestra di dialogo di selezione dei colori crea quindi diversi [CMFCColorPickerCtrl classe](../../mfc/reference/cmfccolorpickerctrl-class.md) oggetti per gestire ogni tavolozza dei colori.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare una `CMFCColorDialog` finestra di dialogo di colore utilizzando vari metodi nella classe . Nell'esempio viene illustrato come impostare i colori correnti e nuovi della finestra di dialogo e come impostare i componenti rosso, verde e blu di un colore selezionato nelle due pagine delle proprietà della finestra di dialogo dei colori. Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#3](../../mfc/reference/codesnippet/cpp/cmfccolordialog-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolordialog.h

## <a name="cmfccolordialogcmfccolordialog"></a><a name="cmfccolordialog"></a>CMFCColorDialog::CMFCColorDialog

Costruisce un oggetto `CMFCColorDialog`.

```
CMFCColorDialog(
    COLORREF clrInit=0,
    DWORD dwFlags=0,
    CWnd* pParentWnd=NULL,
    HPALETTE hPal=NULL);
```

### <a name="parameters"></a>Parametri

*ClrInit (informazioni in base al fatto di essere*<br/>
[in] Selezione colore predefinita. Se non viene specificato alcun valore, il valore predefinito è RGB(0,0,0) (nero).

*dwFlags*<br/>
[in] Riservato.

*pParentWnd (informazioni in due)*<br/>
[in] Puntatore alla finestra padre o proprietario della finestra di dialogo.

*hPal (in stato di*<br/>
[in] Handle di una tavolozza dei colori.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolordialoggetcolor"></a><a name="getcolor"></a>CMFCColorDialog::GetColor

Recupera il colore selezionato dall'utente dalla finestra di dialogo dei colori.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che contiene le informazioni RGB per il colore selezionato nella finestra di dialogo dei colori.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione dopo `DoModal` aver chiamato il metodo .

## <a name="cmfccolordialoggetpalette"></a><a name="getpalette"></a>CMFCColorDialog::GetPalette

Recupera la tavolozza dei colori disponibile nella finestra di dialogo dei colori corrente.

```
CPalette* GetPalette() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `CPalette` specificato nel `CMFCColorDialog` costruttore.

### <a name="remarks"></a>Osservazioni

La tavolozza dei colori specifica i colori che l'utente può scegliere.

## <a name="cmfccolordialogrebuildpalette"></a><a name="rebuildpalette"></a>CMFCColorDialog::RebuildPalette

Deriva una tavolozza dalla tavolozza di sistema.

```cpp
void RebuildPalette();
```

## <a name="cmfccolordialogsetcurrentcolor"></a><a name="setcurrentcolor"></a>CMFCColorDialog::SetCurrentColor

Imposta il colore corrente della finestra di dialogo.

```cpp
void SetCurrentColor(COLORREF rgb);
```

### <a name="parameters"></a>Parametri

*Rgb*<br/>
[in] Un valore di colore RGB

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolordialogsetnewcolor"></a><a name="setnewcolor"></a>CMFCColorDialog::SetNewColor

Imposta il colore corrente sul colore della tavolozza corrente più simile.

```cpp
void SetNewColor(COLORREF rgb);
```

### <a name="parameters"></a>Parametri

*Rgb*<br/>
[in] Oggetto [COLORREF](/windows/win32/gdi/colorref) che specifica un colore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolordialogsetpageone"></a><a name="setpageone"></a>CMFCColorDialog::SetPageOne

Specifica in modo esplicito i componenti rosso, verde e blu di un colore selezionato nella prima pagina delle proprietà di una finestra di dialogo dei colori.

```cpp
void SetPageOne(
    BYTE R,
    BYTE G,
    BYTE B);
```

### <a name="parameters"></a>Parametri

*R*<br/>
[in] Specifica il componente rosso del valore RGB.

*G*<br/>
[in] Specifica il componente verde del valore RGB.

*B*<br/>
[in] Specifica il componente blu del valore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolordialogsetpagetwo"></a><a name="setpagetwo"></a>CMFCColorDialog::SetPageTwo

Specifica in modo esplicito i componenti rosso, verde e blu di un colore selezionato nella seconda pagina delle proprietà di una finestra di dialogo dei colori.

```cpp
void SetPageTwo(
    BYTE R,
    BYTE G,
    BYTE B);
```

### <a name="parameters"></a>Parametri

*R*<br/>
[in] Specifica un componente rosso del valore RGB

*G*<br/>
[in] Specifica un componente verde di un valore RGB

*B*<br/>
[in] Specifica un componente blu di un valore RGB

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md)
