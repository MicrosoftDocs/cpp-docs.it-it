---
title: Classe CMFCColorPopupMenu | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCColorPopupMenu
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::CMFCColorPopupMenu
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::CreateTearOffBar
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::GetMenuBar
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::SetPropList
dev_langs: C++
helpviewer_keywords:
- CMFCColorPopupMenu [MFC], CMFCColorPopupMenu
- CMFCColorPopupMenu [MFC], CreateTearOffBar
- CMFCColorPopupMenu [MFC], GetMenuBar
- CMFCColorPopupMenu [MFC], SetPropList
ms.assetid: 0bf9efe8-aed5-4ab7-b23b-eb284b4668be
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f91c8a6929ada133b3c2ab9f6fc26e9477a88d6b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfccolorpopupmenu-class"></a>Classe CMFCColorPopupMenu
Rappresenta un menu di scelta rapida in cui gli utenti di selezionare colori in un documento o un'applicazione.  
  
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
|[CMFCColorPopupMenu::CreateTearOffBar](#createtearoffbar)|Crea una barra dei colori tear-off ancorata. (Esegue l'override [CMFCPopupMenu::CreateTearOffBar](../../mfc/reference/cmfcpopupmenu-class.md#createtearoffbar).)|  
|[CMFCColorPopupMenu::GetMenuBar](#getmenubar)|Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporate all'interno del menu a comparsa. (Esegue l'override [CMFCPopupMenu::GetMenuBar](../../mfc/reference/cmfcpopupmenu-class.md#getmenubar).)|  
|`CMFCColorPopupMenu::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCColorPopupMenu::SetPropList](#setproplist)|Imposta l'oggetto controllo griglia di proprietà del `CMFCColorBar` oggetto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|nome|Descrizione|  
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
 Matrice di colori che il framework Visualizza il menu a comparsa.  
  
 [in] `color`  
 Il colore predefinito selezionato.  
  
 [in] `lpszAutoColor`  
 L'etichetta di testo di *automatica* pulsante colore (impostazione predefinita), o `NULL`.  
  
 L'etichetta standard per il pulsante automatico è **automatica**.  
  
 [in] `lpszOtherColor`  
 L'etichetta di testo di *altri* pulsante che consente di visualizzare ulteriori opzioni di colore, o `NULL`.  
  
 L'etichetta del pulsante altri standard è **altri colori...** .  
  
 [in] `lpszDocColors`  
 L'etichetta di testo del pulsante di colori di documento. La tavolozza di colori del documento vengono elencati tutti i colori che utilizza il documento.  
  
 [in] `lstDocColors`  
 Un elenco di colori che utilizza il documento.  
  
 [in] `nColumns`  
 Il numero di colonne con la matrice di colori.  
  
 [in] `nHorzDockRows`  
 Il numero di righe che la barra dei colori è quando è ancorato in orizzontale.  
  
 [in] `nVertDockColumns`  
 Il numero di colonne che la barra dei colori è quando è ancorato in verticale.  
  
 [in] `colorAutomatic`  
 Il colore predefinito che il framework applica quando si fa clic sul pulsante automatico.  
  
 [in] `uiCommandID`  
 ID di comando del controllo barra dei colori.  
  
 [in] `bStdColorDlg`  
 Valore booleano che indica se visualizzare la finestra di dialogo colore di sistema standard o [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) la finestra di dialogo.  
  
 [in] `pParentBtn`  
 Un puntatore a un pulsante padre.  
  
 [in] `nID`  
 ID di comando.  
  
### <a name="remarks"></a>Note  
 Ogni overload di costruttore imposta la `m_bEnabledInCustomizeMode` membro `FALSE`.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCColorPopupMenu` oggetto.  
  
 [!code-cpp[NVC_MFC_RibbonApp#34](../../mfc/reference/codesnippet/cpp/cmfccolorpopupmenu-class_1.cpp)]  
  
##  <a name="createtearoffbar"></a>CMFCColorPopupMenu::CreateTearOffBar  
 Crea una barra dei colori tear-off ancorata.  
  
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
 Questo metodo crea un [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md) dell'oggetto e ne esegue il cast a un [classe CPane](../../mfc/reference/cpane-class.md) puntatore. È possibile eseguire il cast di questo valore a un [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md) puntatore utilizzando una delle macro di cast descritto in [tipo cast di oggetti della classe MFC](../../mfc/reference/type-casting-of-mfc-class-objects.md).  
  
##  <a name="getmenubar"></a>CMFCColorPopupMenu::GetMenuBar  
 Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporate all'interno del menu a comparsa.  
  
```  
virtual CMFCPopupMenuBar* GetMenuBar();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a incorporato `CMFCPopupMenuBar`.  
  
### <a name="remarks"></a>Note  
 Menu a comparsa colore è incorporato [classe CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) oggetto. Eseguire l'override di questo metodo in una classe derivata se l'applicazione utilizza un tipo incorporato diverso.  
  
##  <a name="setproplist"></a>CMFCColorPopupMenu::SetPropList  
 Imposta l'oggetto controllo griglia di proprietà del `CMFCColorBar` oggetto.  
  
```  
void SetPropList(CMFCPropertyGridCtrl* pWndList);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndList`  
 Puntatore a un oggetto di controllo griglia proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
