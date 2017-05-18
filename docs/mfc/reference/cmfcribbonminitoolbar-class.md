---
title: Classe CMFCRibbonMiniToolBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonMiniToolBar
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::IsContextMenuMode
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::IsRibbonMiniToolBar
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::SetCommands
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::Show
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::ShowWithContextMenu
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonMiniToolBar class
ms.assetid: 7017e963-aeaf-4fe9-b540-e15a7ed41e94
caps.latest.revision: 24
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 7c69880578c0aba88a8463112f4d1e05f6032497
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribbonminitoolbar-class"></a>Classe CMFCRibbonMiniToolBar
Implementa una barra degli strumenti popup contestuale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonMiniToolBar : public CMFCRibbonPanelMenu  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonMiniToolBar::CMFCRibbonMiniToolBar`|Costruttore predefinito.|  
|`CMFCRibbonMiniToolBar::~CMFCRibbonMiniToolBar`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonMiniToolBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|`CMFCRibbonMiniToolBar::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCRibbonMiniToolBar::IsContextMenuMode](#iscontextmenumode)||  
|[CMFCRibbonMiniToolBar::IsRibbonMiniToolBar](#isribbonminitoolbar)|Esegue l'override di `CMFCPopupMenu::IsRibbonMiniToolBar`.|  
|[CMFCRibbonMiniToolBar::SetCommands](#setcommands)|Imposta l'elenco di comandi da visualizzare sulla barra degli strumenti.|  
|[CMFCRibbonMiniToolBar::Show](#show)|Visualizza la barra di formattazione rapida in coordinate dello schermo specificate.|  
|[CMFCRibbonMiniToolBar::ShowWithContextMenu](#showwithcontextmenu)|Visualizza la barra di formattazione rapida con un menu di scelta rapida.|  
  
## <a name="remarks"></a>Note  
 La barra di formattazione rapida viene in genere visualizzata dopo che l'utente seleziona un oggetto in un documento. Ad esempio, quando l'utente seleziona un blocco di testo in un programma di elaborazione, l'applicazione visualizza una barra di formattazione rapida che contiene i comandi di formattazione del testo.  
  
 La barra di formattazione rapida diventa trasparente quando il puntatore del mouse è fuori dei limiti della barra di formattazione rapida.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)  
  
 [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)  
  
 `CMFCRibbonPanelMenu`  
  
 [CMFCRibbonMiniToolBar](../../mfc/reference/cmfcribbonminitoolbar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxRibbonMiniToolBar.h  
  
##  <a name="setcommands"></a>CMFCRibbonMiniToolBar::SetCommands  
 Imposta l'elenco di comandi da visualizzare sulla barra degli strumenti.  
  
```  
void SetCommands(
    CMFCRibbonBar* pRibbonBar,  
    const CList<UINT,UINT>& lstCommands);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRibbonBar`  
 La barra multifunzione che la barra Cerca i pulsanti da visualizzare.  
  
 [in] `lstCommands`  
 L'elenco dei comandi da visualizzare nella barra di formattazione rapida. Tutte le categorie della barra multifunzione vengono eseguita la ricerca per trovare i pulsanti associati.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per impostare l'elenco dei comandi da visualizzare nella barra di formattazione rapida.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetCommands` metodo la `CMFCRibbonMiniToolBar` classe. Questo frammento di codice fa parte di [esempio MS Office 2007 Demo](../../visual-cpp-samples.md).  
  
 [!code-cpp[9 NVC_MFC_MSOffice2007Demo](../../mfc/reference/codesnippet/cpp/cmfcribbonminitoolbar-class_1.cpp)]  
  
##  <a name="show"></a>CMFCRibbonMiniToolBar::Show  
 Visualizza la barra di formattazione rapida in coordinate dello schermo specificate.  
  
```  
BOOL Show(
    int x,  
    int y);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `x`  
 Specifica la posizione orizzontale della barra di formattazione rapida nelle coordinate dello schermo.  
  
 [in] `y`  
 Specifica la posizione verticale della barra di formattazione rapida nelle coordinate dello schermo.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra è stata visualizzata correttamente. in caso contrario, `FALSE`.  
  
##  <a name="showwithcontextmenu"></a>CMFCRibbonMiniToolBar::ShowWithContextMenu  
 Visualizza la barra di formattazione rapida con un menu di scelta rapida.  
  
```  
BOOL ShowWithContextMenu(
    int x,  
    int y,  
    UINT uiMenuResID,  
    CWnd* pWndOwner);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `x`  
 Specifica la posizione orizzontale del menu di scelta rapida nelle coordinate dello schermo.  
  
 [in] `y`  
 Specifica la posizione verticale del menu di scelta rapida nelle coordinate dello schermo.  
  
 [in] `uiMenuResID`  
 Specifica l'ID di risorsa di menu di scelta rapida per la visualizzazione.  
  
 [in] `pWndOwner`  
 Identifica la finestra che riceve messaggi dal menu di scelta rapida.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il menu di scelta rapida è stato visualizzato correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per visualizzare una barra degli strumenti mini dotato di un menu di scelta rapida. Menu di scelta rapida è posizionato 15 pixel sotto la barra.  
  
##  <a name="iscontextmenumode"></a>CMFCRibbonMiniToolBar::IsContextMenuMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsContextMenuMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isribbonminitoolbar"></a>CMFCRibbonMiniToolBar::IsRibbonMiniToolBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsRibbonMiniToolBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

