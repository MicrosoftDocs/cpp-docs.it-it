---
title: Classe CMFCColorDialog | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a4d6bf9d62ae1cb80041145903267d4af4d88eaa
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43214152"
---
# <a name="cmfccolordialog-class"></a>Classe CMFCColorDialog
Il `CMFCColorDialog` classe rappresenta una finestra di dialogo di selezione colore.  
  
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
|[CMFCColorDialog::GetColor](#getcolor)|Restituisce il colore corrente selezionato.|  
|[CMFCColorDialog::GetPalette](#getpalette)|Restituisce una tavolozza di colori.|  
|`CMFCColorDialog::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per la [TranslateMessage](https://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](https://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. Per la sintassi e altre informazioni, vedere [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override`CDialogEx::PreTranslateMessage`.|  
|[CMFCColorDialog::RebuildPalette](#rebuildpalette)|Deriva una tavolozza dalla tavolozza di sistema.|  
|[CMFCColorDialog::SetCurrentColor](#setcurrentcolor)|Imposta il colore corrente selezionato.|  
|[CMFCColorDialog::SetNewColor](#setnewcolor)|Imposta il colore più equivalente al valore RGB specificato.|  
|[CMFCColorDialog::SetPageOne](#setpageone)|Seleziona un valore RGB per la prima pagina di proprietà.|  
|[CMFCColorDialog::SetPageTwo](#setpagetwo)|Seleziona un valore RGB per la seconda pagina delle proprietà.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|`m_bIsMyPalette`|TRUE se la finestra di dialogo di selezione colori Usa la propria tavolozza dei colori o FALSE se la finestra di dialogo viene utilizzata una tavolozza specificato nella `CMFCColorDialog` costruttore.|  
|`m_bPickerMode`|TRUE quando l'utente seleziona un colore dalla finestra di dialogo di selezione; in caso contrario, FALSE.|  
|`m_btnColorSelect`|Pulsante colore che l'utente ha selezionato.|  
|`m_CurrentColor`|Il colore attualmente selezionato.|  
|`m_hcurPicker`|Cursore che consente di scegliere un colore.|  
|`m_NewColor`|Potenziali colore selezionato, che può essere selezionato o verrà ripristinato il colore originale in modo permanente.|  
|`m_pColourSheetOne`|Puntatore alla prima pagina delle proprietà della finestra delle proprietà di selezione colore.|  
|`m_pColourSheetTwo`|Puntatore alla pagina delle proprietà secondo della finestra delle proprietà di selezione colore.|  
|`m_pPalette`|La tavolozza logica corrente.|  
|`m_pPropSheet`|Puntatore alla finestra delle proprietà per la finestra di dialogo di selezione colore.|  
|`m_wndColors`|Un oggetto di controllo di selezione colore.|  
|`m_wndStaticPlaceHolder`|Un controllo statico che è un segnaposto per la finestra delle proprietà di selezione colore.|  
  
## <a name="remarks"></a>Note  
 Nella finestra di dialogo di selezione di colore viene visualizzato come una finestra delle proprietà con due pagine. Nella prima pagina, si seleziona un colore standard dalla tavolozza di sistema; Nella seconda pagina, si seleziona un colore personalizzato.  
  
 È possibile costruire una `CMFCColorDialog` dell'oggetto nello stack e quindi chiamare `DoModal`, passando il colore iniziale come parametro per il `CMFCColorDialog` costruttore. Nella finestra di dialogo di selezione di colore quindi creati numerosi [classe CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md) oggetti per gestire ogni tavolozza dei colori.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come configurare una finestra di dialogo colore utilizzando i vari metodi nel `CMFCColorDialog` classe. Nell'esempio viene illustrato come impostare l'oggetto corrente e i nuovi colori della finestra di dialogo e come impostare i componenti rossi, verdi e blu del colore selezionato nella pagina delle due proprietà della finestra di dialogo colore. In questo esempio fa parte il [esempio di nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#3](../../mfc/reference/codesnippet/cpp/cmfccolordialog-class_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcolordialog.h  
  
##  <a name="cmfccolordialog"></a>  CMFCColorDialog::CMFCColorDialog  
 Costruisce un oggetto `CMFCColorDialog`.  
  
```  
CMFCColorDialog(
    COLORREF clrInit=0,  
    DWORD dwFlags=0,  
    CWnd* pParentWnd=NULL,  
    HPALETTE hPal=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *clrInit*  
 La selezione di colore predefinito. Se viene specificato alcun valore, il valore predefinito è RGB(0,0,0) (nero).  
  
 [in] *dwFlags*  
 (Riservato).  
  
 [in] *pParentWnd*  
 Puntatore alla finestra padre o proprietaria della finestra di dialogo.  
  
 [in] *hPal*  
 Handle per una tavolozza dei colori.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcolor"></a>  CMFCColorDialog::GetColor  
 Recupera il colore selezionato dall'utente nella finestra di dialogo colore.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore che contiene informazioni per il colore selezionato nella finestra di dialogo colore RGB.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione dopo la chiamata di `DoModal` (metodo).  
  
##  <a name="getpalette"></a>  CMFCColorDialog::GetPalette  
 Recupera la tavolozza dei colori che è disponibile nella finestra di dialogo colore corrente.  
  
```  
CPalette* GetPalette() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore ai `CPalette` oggetto che è stato specificato nella `CMFCColorDialog` costruttore.  
  
### <a name="remarks"></a>Note  
 La tavolozza dei colori specifica i colori che l'utente può scegliere.  
  
##  <a name="rebuildpalette"></a>  CMFCColorDialog::RebuildPalette  
 Deriva una tavolozza dalla tavolozza di sistema.  
  
```  
void RebuildPalette();
```  
  
##  <a name="setcurrentcolor"></a>  CMFCColorDialog::SetCurrentColor  
 Imposta il colore corrente della finestra di dialogo.  
  
```  
void SetCurrentColor(COLORREF rgb);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *rgb*  
 Un valore di colore RGB  
  
### <a name="remarks"></a>Note  
  
##  <a name="setnewcolor"></a>  CMFCColorDialog::SetNewColor  
 Imposta il colore corrente per il colore della tavolozza corrente che è molto simile.  
  
```  
void SetNewColor(COLORREF rgb);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *rgb*  
 Oggetto [COLORREF](/windows/desktop/gdi/colorref) che specifica un colore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpageone"></a>  CMFCColorDialog::SetPageOne  
 Specifica in modo esplicito i componenti rossi, verdi e blu del colore selezionato nella pagina delle proprietà prima di una finestra di dialogo colore.  
  
```  
void SetPageOne(
    BYTE R,  
    BYTE G,  
    BYTE B);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *R*  
 Specifica il componente rosso del valore RGB.  
  
 [in] *G*  
 Specifica il componente verde del valore RGB.  
  
 [in] *B*  
 Specifica il componente blu del valore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpagetwo"></a>  CMFCColorDialog::SetPageTwo  
 Specifica in modo esplicito i componenti rossi, verdi e blu del colore selezionato nella seconda pagina delle proprietà di una finestra di dialogo colore.  
  
```  
void SetPageTwo(
    BYTE R,  
    BYTE G,  
    BYTE B);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *R*  
 Specifica un componente rossa del valore RGB  
  
 [in] *G*  
 Specifica un componente verde di un valore RGB  
  
 [in] *B*  
 Specifica un componente blu di un valore RGB  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md)
