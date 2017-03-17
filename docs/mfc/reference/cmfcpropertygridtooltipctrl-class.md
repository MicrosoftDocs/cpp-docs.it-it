---
title: Classe CMFCPropertyGridToolTipCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCPropertyGridToolTipCtrl
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Create
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Deactivate
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::GetLastRect
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Hide
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::SetTextMargin
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Track
dev_langs:
- C++
helpviewer_keywords:
- CMFCPropertyGridToolTipCtrl class
- CMFCPropertyGridToolTipCtrl class, destructor
- PreTranslateMessage method
- ~CMFCPropertyGridToolTipCtrl destructor
ms.assetid: 84b436e5-6695-4da0-9569-1a875e087711
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: e5290706799dcd253205ac74dad72cd7783d19dd
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcpropertygridtooltipctrl-class"></a>Classe CMFCPropertyGridToolTipCtrl
Implementa una descrizione comando controllare che il [CMFCPropertyGridCtrl classe](../../mfc/reference/cmfcpropertygridctrl-class.md) viene utilizzata per visualizzare le descrizioni comandi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCPropertyGridToolTipCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl](#cmfcpropertygridtooltipctrl)|Costruisce un oggetto `CMFCPropertyGridToolTipCtrl`.|  
|`CMFCPropertyGridToolTipCtrl::~CMFCPropertyGridToolTipCtrl`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCPropertyGridToolTipCtrl::Create](#create)|Crea una finestra per il controllo descrizione comandi.|  
|[CMFCPropertyGridToolTipCtrl::Deactivate](#deactivate)|Disattiva e nasconde il controllo descrizione comandi.|  
|[CMFCPropertyGridToolTipCtrl::GetLastRect](#getlastrect)|Restituisce le coordinate dell'ultima posizione del controllo descrizione comandi.|  
|[CMFCPropertyGridToolTipCtrl::Hide](#hide)|Nasconde il controllo descrizione comandi.|  
|`CMFCPropertyGridToolTipCtrl::PreTranslateMessage`|Utilizzato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati per il [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. (Esegue l'override di [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|  
|[CMFCPropertyGridToolTipCtrl::SetTextMargin](#settextmargin)|Imposta la spaziatura tra il testo della descrizione comando e il bordo della finestra della descrizione comando.|  
|[CMFCPropertyGridToolTipCtrl::Track](#track)|Visualizza il controllo descrizione comandi.|  
  
## <a name="remarks"></a>Note  
 Le descrizioni comandi quando il puntatore del mouse si sofferma su un nome di proprietà. Il [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md) classe visualizza una descrizione comando in modo che sia facilmente leggibile dall'utente. In genere, la posizione di una descrizione comando è determinata dalla posizione del puntatore. Utilizzando questa classe, la descrizione comando visualizzata sopra il nome della proprietà, è simile all'estensione di proprietà naturale, in modo che il nome della proprietà è completamente visibile.  
  
 MFC automaticamente questo controllo viene creato e utilizzato nel [CMFCPropertyGridCtrl classe](../../mfc/reference/cmfcpropertygridctrl-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCPropertyGridToolTipCtrl` classe e come visualizzare il controllo descrizione comandi.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#23;](../../mfc/reference/codesnippet/cpp/cmfcpropertygridtooltipctrl-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpropertygridtooltipctrl.h  
  
##  <a name="cmfcpropertygridtooltipctrl"></a>CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl  
 Costruisce un oggetto `CMFCPropertyGridToolTipCtrl`.  
  
```  
CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl();
```  
  
##  <a name="create"></a>CMFCPropertyGridToolTipCtrl::Create  
 Crea una finestra per il controllo descrizione comandi.  
  
```  
BOOL Create(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Puntatore alla finestra padre.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra è stata creata correttamente; in caso contrario, FALSE.  
  
##  <a name="deactivate"></a>CMFCPropertyGridToolTipCtrl::Deactivate  
 Disattiva e nasconde il controllo descrizione comandi.  
  
```  
void Deactivate();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta la posizione e testo ultimo i valori vuoti, in modo che le chiamate successive al [CMFCPropertyGridToolTipCtrl::Track](#track) visualizzazione della descrizione comando.  
  
##  <a name="getlastrect"></a>CMFCPropertyGridToolTipCtrl::GetLastRect  
 Restituisce le coordinate dell'ultima posizione del controllo descrizione comandi.  
  
```  
void GetLastRect(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rect`  
 Contiene l'ultima posizione del controllo descrizione comandi.  
  
##  <a name="hide"></a>CMFCPropertyGridToolTipCtrl::Hide  
 Nasconde il controllo descrizione comandi.  
  
```  
void Hide();
```  
  
##  <a name="settextmargin"></a>CMFCPropertyGridToolTipCtrl::SetTextMargin  
 Imposta la spaziatura tra il testo della descrizione comando e il bordo della finestra della descrizione comando.  
  
```  
void SetTextMargin(int nTextMargin);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nTextMargin`  
 Specifica la spaziatura tra il testo del controllo descrizione comando e il bordo della finestra della descrizione comando. Il valore predefinito è 10 pixel.  
  
##  <a name="track"></a>CMFCPropertyGridToolTipCtrl::Track  
 Visualizza il controllo descrizione comandi.  
  
```  
void Track(
    CRect rect,  
    const CString& strText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 Specifica la posizione e dimensioni del controllo descrizione comandi.  
  
 [in] `strText`  
 Specifica il testo da visualizzare nella descrizione comandi.  
  
### <a name="remarks"></a>Note  
 Questo metodo visualizza il controllo descrizione comandi alla posizione e dimensione specificata da `rect`. Se la posizione, dimensione e il testo non sono stati modificati dall'ultima volta che questo metodo è stato chiamato, questo metodo non ha alcun effetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

