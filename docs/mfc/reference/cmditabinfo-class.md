---
title: Classe CMDITabInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMDITabInfo
- AFXMDICLIENTAREAWND/CMDITabInfo
- AFXMDICLIENTAREAWND/CMDITabInfo::Serialize
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bAutoColor
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bDocumentMenu
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bEnableTabSwap
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bFlatFrame
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bTabCloseButton
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bTabCustomTooltips
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bTabIcons
- AFXMDICLIENTAREAWND/CMDITabInfo::m_nTabBorderSize
- AFXMDICLIENTAREAWND/CMDITabInfo::m_style
- AFXMDICLIENTAREAWND/CMDITabInfo::m_tabLocation
dev_langs:
- C++
helpviewer_keywords:
- CMDITabInfo class
- CMDITabInfo class, constructor
ms.assetid: 988ae1b7-4f7f-4239-b88f-7e28b3291c5e
caps.latest.revision: 37
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
ms.openlocfilehash: a45532c98d5da7d89d27e3d29d9b40075cf0376f
ms.lasthandoff: 02/24/2017

---
# <a name="cmditabinfo-class"></a>Classe CMDITabInfo
Il `CMDITabInfo` classe viene utilizzata per passare parametri al [CMDIFrameWndEx::EnableMDITabbedGroups](../../mfc/reference/cmdiframewndex-class.md#enablemditabbedgroups) metodo. Impostare i membri di questa classe per controllare il comportamento dei gruppi MDI a schede.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMDITabInfo   
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMDITabInfo::CMDITabInfo`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDITabInfo::Serialize](#serialize)|Legge o scrive l'oggetto corrente da o in un archivio.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDITabInfo::m_bActiveTabCloseButton;](#m_bactivetabclosebutton_)|Specifica se un **Chiudi** pulsante viene visualizzato sull'etichetta della scheda attiva.|  
|[CMDITabInfo::m_bAutoColor](#m_bautocolor)|Specifica se le schede MDI dei colori.|  
|[CMDITabInfo::m_bDocumentMenu](#m_bdocumentmenu)|Specifica se il gruppo di schede Visualizza un menu di scelta rapida che viene visualizzato un elenco dei documenti aperti o Visualizza i pulsanti di scorrimento.|  
|[CMDITabInfo::m_bEnableTabSwap](#m_benabletabswap)|Specifica se l'utente è possibile scambiare le posizioni delle schede trascinando.|  
|[CMDITabInfo::m_bFlatFrame](#m_bflatframe)|Specifica se le schede dispongono di un frame flat.|  
|[CMDITabInfo::m_bTabCloseButton](#m_btabclosebutton)|Specifica se ogni etichetta scheda Visualizza un **Chiudi** pulsante.|  
|[CMDITabInfo::m_bTabCustomTooltips](#m_btabcustomtooltips)|Specifica se le descrizioni comandi personalizzate sono abilitate.|  
|[CMDITabInfo::m_bTabIcons](#m_btabicons)|Specifica se visualizzare le icone nelle schede MDI.|  
|[CMDITabInfo::m_nTabBorderSize](#m_ntabbordersize)|Specifica le dimensioni del bordo della finestra ogni scheda.|  
|[CMDITabInfo::m_style](#m_style)|Specifica lo stile delle etichette di scheda.|  
|[CMDITabInfo::m_tabLocation](#m_tablocation)|Specifica se le etichette delle schede si trovano nella parte superiore o inferiore della pagina.|  
  
## <a name="remarks"></a>Note  
 Questa classe specifica i parametri dei gruppi che il framework crea scheda MDI.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come impostare i valori delle variabili membro diverse in `CMDITabInfo` (classe).  
  
 [!code-cpp[NVC_MFC_MDITab n.&1;](../../mfc/reference/codesnippet/cpp/cmditabinfo-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMDITabInfo](../../mfc/reference/cmditabinfo-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmdiclientareawnd.h  
  
##  <a name="m_bactivetabclosebutton_"></a>CMDITabInfo::m_bActiveTabCloseButton;  
 Specifica se un **Chiudi** pulsante viene visualizzato sull'etichetta della scheda attiva.  
  
```  
BOOL m_bActiveTabCloseButton;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, verrà visualizzata l'etichetta della scheda attiva un **Chiudi** pulsante. Il **Chiudi** pulsante verrà rimossa dall'angolo superiore destro dell'area della scheda. In caso contrario, l'etichetta della scheda attiva non verrà visualizzato un **Chiudi** pulsante. Il **Chiudi** pulsante verrà visualizzato nell'angolo superiore destro dell'area della scheda.  
  
##  <a name="m_bautocolor"></a>CMDITabInfo::m_bAutoColor  
 Specifica se tutte le schede MDI ha il proprio colore.  
  
```  
BOOL m_bAutoColor;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, ogni scheda avranno il proprio colore. Il set di colori viene gestito dalla libreria MFC. In caso contrario, le schede vengono visualizzate in bianco. Il valore predefinito è `FALSE`.  
  
##  <a name="m_bdocumentmenu"></a>CMDITabInfo::m_bDocumentMenu  
 Specifica se ogni scheda viene visualizzato un menu di scelta rapida viene visualizzato un elenco dei documenti aperti sul bordo destro dell'area della scheda.  
  
```  
BOOL m_bDocumentMenu;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, windows ogni scheda consente di visualizzare un menu di scelta rapida viene visualizzato un elenco dei documenti aperti sul bordo destro dell'area della scheda; In caso contrario, la finestra scheda Visualizza i pulsanti di scorrimento sul bordo destro dell'area della scheda. Il valore predefinito è `FALSE`.  
  
##  <a name="m_benabletabswap"></a>CMDITabInfo::m_bEnableTabSwap  
 Specifica se l'utente è possibile scambiare le posizioni delle schede trascinando.  
  
```  
BOOL m_bEnableTabSwap;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, l'utente può modificare le posizioni di schede trascinando le schede. In caso contrario, l'utente non può modificare le posizioni di schede. Il valore predefinito è `TRUE`.  
  
##  <a name="m_bflatframe"></a>CMDITabInfo::m_bFlatFrame  
 Specifica se ogni finestra a schede dispone di un frame semplice.  
  
```  
BOOL m_bFlatFrame;  
```  
  
##  <a name="m_btabclosebutton"></a>CMDITabInfo::m_bTabCloseButton  
 Specifica se tutte le finestre della scheda Visualizza un **Chiudi** pulsante.  
  
```  
BOOL m_bTabCloseButton;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, ogni finestra scheda viene visualizzato il **Chiudi** pulsante sul lato destro della scheda. In caso contrario, il **Chiudi** pulsante non viene visualizzato. Il valore predefinito è `TRUE`.  
  
##  <a name="m_btabcustomtooltips"></a>CMDITabInfo::m_bTabCustomTooltips  
 Specifica se le schede visualizzano descrizioni comandi.  
  
```  
BOOL m_bTabCustomTooltips;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, l'applicazione invia un `AFX_WM_ON_GET_TAB_TOOLTIP` messaggio sulla cornice principale. È possibile gestire questo messaggio utilizzando il `ON_REGISTERED_MESSAGE` (macro).  
  
##  <a name="m_btabicons"></a>CMDITabInfo::m_bTabIcons  
 Specifica se visualizzare le icone nelle schede MDI.  
  
```  
BOOL m_bTabIcons;  
```  
  
### <a name="remarks"></a>Note  
 Se `TRUE`, le icone vengono visualizzate in ogni scheda MDI. In caso contrario, le icone non vengono visualizzate nelle schede. Il valore predefinito è `FALSE`.  
  
##  <a name="m_ntabbordersize"></a>CMDITabInfo::m_nTabBorderSize  
 Specifica la dimensione del bordo, in pixel, di ogni finestra a schede.  
  
```  
int m_nTabBorderSize;  
```  
  
### <a name="remarks"></a>Note  
 [CMFCVisualManager::GetMDITabsBordersSize](../../mfc/reference/cmfcvisualmanager-class.md#getmditabsborderssize) restituisce il valore predefinito.  
  
##  <a name="m_style"></a>CMDITabInfo::m_style  
 Specifica lo stile delle etichette di scheda.  
  
```  
CMFCTabCtrl::Style m_style  
```  
  
### <a name="remarks"></a>Note  
 Specificare uno dei seguenti stili per le etichette della scheda:  
  
 `STYLE_3D`  
 Stile&3;D.  
  
 `STYLE_3D_ONENOTE`  
 Stile di Microsoft OneNote.  
  
 `STYLE_3D_VS2005`  
 Stile di Microsoft Visual Studio 2005.  
  
 `STYLE_3D_SCROLLED`  
 Stile&3;D con etichette scheda rettangolo.  
  
 `STYLE_FLAT_SHARED_HORZ_SCROLL`  
 Bidimensionale con barra di scorrimento orizzontale condiviso.  
  
 `STYLE_3D_ROUNDED_SCROLL`  
 Stile&3;D con etichette scheda arrotondamento.  
  
##  <a name="m_tablocation"></a>CMDITabInfo::m_tabLocation  
 Specifica se le etichette delle schede si trovano nella parte superiore o inferiore della pagina.  
  
```  
CMFCTabCtrl::Location m_tabLocation;  
```  
  
### <a name="remarks"></a>Note  
 Si applicano alle schede uno dei flag di percorso seguente:  
  
-   LOCATION_BOTTOM: le etichette delle schede si trovano nella parte inferiore della pagina.  
  
-   LOCATION_TOP: le etichette delle schede si trovano nella parte superiore della pagina  
  
##  <a name="serialize"></a>CMDITabInfo::Serialize  
 Legge o scrive questo oggetto da un archivio o in un archivio.  
  
```  
void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
 Oggetto [CArchive (classe)](../../mfc/reference/carchive-class.md) oggetto da serializzare.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)   
 [Gruppi a schede MDI](../../mfc/mdi-tabbed-groups.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

