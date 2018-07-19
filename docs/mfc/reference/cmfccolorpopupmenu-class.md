---
title: Classe CMFCColorPopupMenu | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCColorPopupMenu
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::CMFCColorPopupMenu
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::CreateTearOffBar
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::GetMenuBar
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::SetPropList
dev_langs:
- C++
helpviewer_keywords:
- CMFCColorPopupMenu [MFC], CMFCColorPopupMenu
- CMFCColorPopupMenu [MFC], CreateTearOffBar
- CMFCColorPopupMenu [MFC], GetMenuBar
- CMFCColorPopupMenu [MFC], SetPropList
ms.assetid: 0bf9efe8-aed5-4ab7-b23b-eb284b4668be
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b32317f4fd67a627a272ea8eefcc949d1b0e63c8
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37852994"
---
# <a name="cmfccolorpopupmenu-class"></a>Classe CMFCColorPopupMenu
Rappresenta un menu a comparsa in cui gli utenti di selezionare colori in un documento o l'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCColorPopupMenu : public CMFCPopupMenu  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCColorPopupMenu::CMFCColorPopupMenu](#cmfccolorpopupmenu)|Costruisce un oggetto `CMFCColorPopupMenu`.|  
|`CMFCColorPopupMenu::~CMFCColorPopupMenu`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCColorPopupMenu::CreateTearOffBar](#createtearoffbar)|Crea una barra di colore a comparsa ancorata. (Esegue l'override [CMFCPopupMenu::CreateTearOffBar](../../mfc/reference/cmfcpopupmenu-class.md#createtearoffbar).)|  
|[CMFCColorPopupMenu::GetMenuBar](#getmenubar)|Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporate all'interno del menu a comparsa. (Esegue l'override [CMFCPopupMenu::GetMenuBar](../../mfc/reference/cmfcpopupmenu-class.md#getmenubar).)|  
|`CMFCColorPopupMenu::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCColorPopupMenu::SetPropList](#setproplist)|Imposta l'oggetto di controllo della griglia di proprietà di incorporato `CMFCColorBar` oggetto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|nome|Descrizione|  
|`m_bEnabledInCustomizeMode`|Un valore booleano che determina se visualizzare la barra dei colori.|  
|`m_wndColorBar`|Il `CMFCColorBar` oggetto che fornisce la selezione del colore.|  
  
### <a name="remarks"></a>Note  
 Questa classe eredita le funzionalità di menu a comparsa del `CMFCPopupMenu` classe e gestisce un `CMFCColorBar` oggetto che fornisce la selezione del colore. Quando il framework della barra degli strumenti è in modalità di personalizzazione e la `m_bEnabledInCustomizeMode` membro è impostato su FALSE, l'oggetto barra dei colori non viene visualizzato. Per altre informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)  
  
 Per altre informazioni sulle `CMFCColorBar`, vedere [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)  
  
 [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)  
  
 [CMFCColorPopupMenu](../../mfc/reference/cmfccolorpopupmenu-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcolorpopupmenu.h  
  
##  <a name="cmfccolorpopupmenu"></a>  CMFCColorPopupMenu::CMFCColorPopupMenu  
 Costruisce un oggetto `CMFCColorPopupMenu`.  
  
```  
CMFCColorPopupMenu(
    const CArray<COLORREF, COLORREF>& colors,  
    COLORREF color,  
    LPCTSTR lpszAutoColor,  
    LPCTSTR lpszOtherColor,  
    LPCTSTR lpszDocColors, CList<COLORREF, COLORREF>& lstDocColors,  
    int nColumns,  
    int nHorzDockRows,  
    int nVertDockColumns,  
    COLORREF colorAutomatic,  
    UINT uiCommandID,  
    BOOL bStdColorDlg = FALSE);

 
CMFCColorPopupMenu(
    CMFCColorButton* pParentBtn,  
    const CArray<COLORREF, COLORREF>& colors,  
    COLORREF color,  
    LPCTSTR lpszAutoColor,  
    LPCTSTR lpszOtherColor,  
    LPCTSTR lpszDocColors, CList<COLORREF, COLORREF>& lstDocColors,  
    int nColumns,  
    COLORREF colorAutomatic);

 
CMFCColorPopupMenu(
    CMFCRibbonColorButton* pParentBtn,  
    const CArray<COLORREF, COLORREF>& colors,  
    COLORREF color,  
    LPCTSTR lpszAutoColor,  
    LPCTSTR lpszOtherColor,  
    LPCTSTR lpszDocColors, CList<COLORREF, COLORREF>& lstDocColors,  
    int nColumns,  
    COLORREF colorAutomatic,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colori*  
 Matrice di colori che il framework Visualizza il menu a comparsa.  
  
 [in] *colore*  
 Colore predefinito selezionato.  
  
 [in] *lpszAutoColor*  
 L'etichetta di testo il *automatica* pulsante colore (impostazione predefinita), o NULL.  
  
 L'etichetta standard per il pulsante automatico verrà **automatica**.  
  
 [in] *lpszOtherColor*  
 L'etichetta di testo il *altri* button, che consente di visualizzare più colori, o NULL.  
  
 L'etichetta standard per il pulsante altro è **altri colori...** .  
  
 [in] *lpszDocColors*  
 L'etichetta di testo del pulsante di colori di documento. La tavolozza dei colori del documento sono elencati tutti i colori utilizzati attualmente nel documento.  
  
 [in] *lstDocColors*  
 Un elenco di colori utilizzati attualmente nel documento.  
  
 [in] *nColumns*  
 Il numero di colonne con la matrice di colori.  
  
 [in] *nHorzDockRows*  
 Il numero di righe che la barra dei colori è quando è ancorato in orizzontale.  
  
 [in] *nVertDockColumns*  
 Il numero di colonne nella barra dei colori con cui è ancorato in verticale.  
  
 [in] *colorAutomatic*  
 Il colore predefinito che il framework applica quando si fa clic sul pulsante automatico.  
  
 [in] *uiCommandID*  
 ID di comando di controllo sulla barra dei colori.  
  
 [in] *bStdColorDlg*  
 Valore booleano che indica se visualizzare la finestra di dialogo colore di sistema standard o la [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) nella finestra di dialogo.  
  
 [in] *pParentBtn*  
 Puntatore a un padre del pulsante.  
  
 [in] *nID*  
 ID di comando.  
  
### <a name="remarks"></a>Note  
 Ogni overload costruttore imposta la `m_bEnabledInCustomizeMode` membro su FALSE.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come costruire un `CMFCColorPopupMenu` oggetto.  
  
 [!code-cpp[NVC_MFC_RibbonApp#34](../../mfc/reference/codesnippet/cpp/cmfccolorpopupmenu-class_1.cpp)]  
  
##  <a name="createtearoffbar"></a>  CMFCColorPopupMenu::CreateTearOffBar  
 Crea una barra di colore a comparsa ancorata.  
  
```  
virtual CPane* CreateTearOffBar(
    CFrameWnd* pWndMain,  
    UINT uiID,  
    LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] *pWndMain*|Puntatore alla finestra padre della barra a comparsa.|  
|[in] *uiID*|ID comando della barra a comparsa.|  
|[in] *lpszName*|Il testo della finestra della barra a comparsa.|  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al nuovo oggetto barra a comparsa controllo.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea un' [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) dell'oggetto e ne esegue il cast a un [classe CPane](../../mfc/reference/cpane-class.md) puntatore. È possibile eseguire il cast di questo valore a un [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) puntatore usando una delle macro di cast descritto in [tipo di cast di oggetti della classe MFC](../../mfc/reference/type-casting-of-mfc-class-objects.md).  
  
##  <a name="getmenubar"></a>  CMFCColorPopupMenu::GetMenuBar  
 Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporate all'interno del menu a comparsa.  
  
```  
virtual CMFCPopupMenuBar* GetMenuBar();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per l'oggetto incorporato `CMFCPopupMenuBar`.  
  
### <a name="remarks"></a>Note  
 Nel menu a comparsa colore sono incorporata [CMFCPopupMenuBar (classe)](../../mfc/reference/cmfcpopupmenubar-class.md) oggetto. L'override del metodo in una classe derivata se l'applicazione usa un diverso tipo incorporato.  
  
##  <a name="setproplist"></a>  CMFCColorPopupMenu::SetPropList  
 Imposta l'oggetto di controllo della griglia di proprietà di incorporato `CMFCColorBar` oggetto.  
  
```  
void SetPropList(CMFCPropertyGridCtrl* pWndList);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pWndList*  
 Puntatore a un oggetto di controllo griglia proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
