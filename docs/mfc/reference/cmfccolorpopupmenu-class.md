---
title: Classe CMFCColorPopupMenu | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- CMFCColorPopupMenu class
ms.assetid: 0bf9efe8-aed5-4ab7-b23b-eb284b4668be
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 14076d78eaf86ef01e68656685dd2fd102d96311
ms.lasthandoff: 02/24/2017

---
# <a name="cmfccolorpopupmenu-class"></a>Classe CMFCColorPopupMenu
Rappresenta un menu a comparsa in cui gli utenti di selezionare colori in un documento o un'applicazione.  
  
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
|[CMFCColorPopupMenu::CreateTearOffBar](#createtearoffbar)|Crea una barra dei colori a comparsa ancorata. (Esegue l'override di [CMFCPopupMenu::CreateTearOffBar](../../mfc/reference/cmfcpopupmenu-class.md#createtearoffbar).)|  
|[CMFCColorPopupMenu::GetMenuBar](#getmenubar)|Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) che è incorporato nel menu a comparsa. (Esegue l'override di [CMFCPopupMenu::GetMenuBar](../../mfc/reference/cmfcpopupmenu-class.md#getmenubar).)|  
|`CMFCColorPopupMenu::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCColorPopupMenu::SetPropList](#setproplist)|Imposta l'oggetto controllo griglia delle proprietà del `CMFCColorBar` oggetto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`m_bEnabledInCustomizeMode`|Valore booleano che determina se visualizzare la barra dei colori.|  
|`m_wndColorBar`|Il `CMFCColorBar` oggetto che fornisce la selezione dei colori.|  
  
### <a name="remarks"></a>Note  
 Questa classe eredita le funzionalità di menu a comparsa del `CMFCPopupMenu` classe e gestisce un `CMFCColorBar` oggetto che fornisce la selezione dei colori. Quando il framework della barra degli strumenti è in modalità di personalizzazione e `m_bEnabledInCustomizeMode` membro è impostato su `FALSE`, non viene visualizzato l'oggetto della barra dei colori. Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)  
  
 Per ulteriori informazioni su `CMFCColorBar`, vedere [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md).  
  
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
  
##  <a name="cmfccolorpopupmenu"></a>CMFCColorPopupMenu::CMFCColorPopupMenu  
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
 [in] `colors`  
 Matrice di colori che il framework consente di visualizzare il menu a comparsa.  
  
 [in] `color`  
 Il colore predefinito selezionato.  
  
 [in] `lpszAutoColor`  
 L'etichetta di testo di *automatica* pulsante colore (impostazione predefinita), o `NULL`.  
  
 L'etichetta standard per il pulsante automatica è **automatica**.  
  
 [in] `lpszOtherColor`  
 L'etichetta di testo di *altri* pulsante che consente di visualizzare più colori, o `NULL`.  
  
 L'etichetta del pulsante altri standard è **altri colori... **.  
  
 [in] `lpszDocColors`  
 L'etichetta di testo del pulsante colori documento. La tavolozza dei colori del documento sono elencati tutti i colori attualmente utilizzati nel documento.  
  
 [in] `lstDocColors`  
 Un elenco di colori attualmente utilizzati nel documento.  
  
 [in] `nColumns`  
 Il numero di colonne con la matrice di colori.  
  
 [in] `nHorzDockRows`  
 Il numero di righe con la barra dei colori quando è ancorato in senso orizzontale.  
  
 [in] `nVertDockColumns`  
 Il numero di colonne nella barra dei colori con cui è ancorato in senso verticale.  
  
 [in] `colorAutomatic`  
 Il colore predefinito che il framework applica quando si fa clic sul pulsante automatica.  
  
 [in] `uiCommandID`  
 ID di comando del controllo barra dei colori.  
  
 [in] `bStdColorDlg`  
 Valore booleano che indica se si desidera visualizzare nella finestra di dialogo dei colori di sistema standard o [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) la finestra di dialogo.  
  
 [in] `pParentBtn`  
 Un puntatore a un pulsante padre.  
  
 [in] `nID`  
 ID di comando.  
  
### <a name="remarks"></a>Note  
 Ogni overload di costruttore imposta la `m_bEnabledInCustomizeMode` membro `FALSE`.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCColorPopupMenu` oggetto.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#34;](../../mfc/reference/codesnippet/cpp/cmfccolorpopupmenu-class_1.cpp)]  
  
##  <a name="createtearoffbar"></a>CMFCColorPopupMenu::CreateTearOffBar  
 Crea una barra dei colori a comparsa ancorata.  
  
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
|[in] `pWndMain`|Puntatore alla finestra padre della barra a comparsa.|  
|[in] `uiID`|L'ID di comando della barra a comparsa.|  
|[in] `lpszName`|Il testo della finestra della barra a comparsa.|  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al nuovo oggetto barra a comparsa controllo.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea un [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md) dell'oggetto e ne esegue il cast a un [CPane classe](../../mfc/reference/cpane-class.md) puntatore. È possibile eseguire il cast di questo valore a un [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md) puntatore utilizzando una delle macro cast descritto in [tipo cast di oggetti della classe MFC](../../mfc/reference/type-casting-of-mfc-class-objects.md).  
  
##  <a name="getmenubar"></a>CMFCColorPopupMenu::GetMenuBar  
 Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) che è incorporato nel menu a comparsa.  
  
```  
virtual CMFCPopupMenuBar* GetMenuBar();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a incorporato `CMFCPopupMenuBar`.  
  
### <a name="remarks"></a>Note  
 Menu a comparsa colore è incorporato [CMFCPopupMenuBar classe](../../mfc/reference/cmfcpopupmenubar-class.md) oggetto. Eseguire l'override di questo metodo in una classe derivata se l'applicazione utilizza un diverso tipo incorporato.  
  
##  <a name="setproplist"></a>CMFCColorPopupMenu::SetPropList  
 Imposta l'oggetto controllo griglia delle proprietà del `CMFCColorBar` oggetto.  
  
```  
void SetPropList(CMFCPropertyGridCtrl* pWndList);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndList`  
 Puntatore a un oggetto di controllo griglia delle proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

