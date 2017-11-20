---
title: Classe CMFCRibbonStatusBar | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonStatusBar
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddDynamicElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddExtendedElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::AddSeparator
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::Create
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::CreateEx
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::FindByID
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::FindElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetCount
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetExCount
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetExElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetExtendedArea
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::GetSpace
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::IsBottomFrame
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::IsExtendedElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::IsInformationMode
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::RecalcLayout
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::RemoveAll
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::RemoveElement
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::SetInformation
- AFXRIBBONSTATUSBAR/CMFCRibbonStatusBar::OnDrawInformation
dev_langs: C++
helpviewer_keywords:
- CMFCRibbonStatusBar [MFC], AddDynamicElement
- CMFCRibbonStatusBar [MFC], AddElement
- CMFCRibbonStatusBar [MFC], AddExtendedElement
- CMFCRibbonStatusBar [MFC], AddSeparator
- CMFCRibbonStatusBar [MFC], Create
- CMFCRibbonStatusBar [MFC], CreateEx
- CMFCRibbonStatusBar [MFC], FindByID
- CMFCRibbonStatusBar [MFC], FindElement
- CMFCRibbonStatusBar [MFC], GetCount
- CMFCRibbonStatusBar [MFC], GetElement
- CMFCRibbonStatusBar [MFC], GetExCount
- CMFCRibbonStatusBar [MFC], GetExElement
- CMFCRibbonStatusBar [MFC], GetExtendedArea
- CMFCRibbonStatusBar [MFC], GetSpace
- CMFCRibbonStatusBar [MFC], IsBottomFrame
- CMFCRibbonStatusBar [MFC], IsExtendedElement
- CMFCRibbonStatusBar [MFC], IsInformationMode
- CMFCRibbonStatusBar [MFC], RecalcLayout
- CMFCRibbonStatusBar [MFC], RemoveAll
- CMFCRibbonStatusBar [MFC], RemoveElement
- CMFCRibbonStatusBar [MFC], SetInformation
- CMFCRibbonStatusBar [MFC], OnDrawInformation
ms.assetid: 921eb57f-3b40-49fa-a38c-3f2fb6dc2893
caps.latest.revision: "37"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: cd6322b372a9cfb6ef75875d183d1b3e0a3e79c2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cmfcribbonstatusbar-class"></a>Classe CMFCRibbonStatusBar
Il `CMFCRibbonStatusBar` implementa un controllo barra di stato che è possibile visualizzare gli elementi della barra multifunzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonStatusBar : public CMFCRibbonBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonStatusBar::AddDynamicElement](#adddynamicelement)|Aggiunge un elemento dinamico per la barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::AddElement](#addelement)|Aggiunge un nuovo elemento della barra multifunzione alla barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::AddExtendedElement](#addextendedelement)|Aggiunge un elemento della barra multifunzione per l'area estesa della barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::AddSeparator](#addseparator)|Aggiunge un separatore alla barra di stato multifunzione.|  
|[CMFCRibbonStatusBar::Create](#create)|Crea una barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::CreateEx](#createex)|Crea una barra di stato della barra multifunzione con uno stile esteso.|  
|[CMFCRibbonStatusBar::FindByID](#findbyid)||  
|[CMFCRibbonStatusBar::FindElement](#findelement)|Restituisce un puntatore all'elemento con l'ID di comando specificato.|  
|[CMFCRibbonStatusBar::GetCount](#getcount)|Restituisce il numero di elementi che si trovano nell'area principale della barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::GetElement](#getelement)|Restituisce un puntatore all'elemento che si trova in corrispondenza dell'indice specificato.|  
|[CMFCRibbonStatusBar::GetExCount](#getexcount)|Restituisce il numero di elementi che si trovano nell'area estesa della barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::GetExElement](#getexelement)|Restituisce un puntatore all'elemento situato in corrispondenza dell'indice specificato nell'area estesa della barra di stato multifunzione.|  
|[CMFCRibbonStatusBar::GetExtendedArea](#getextendedarea)||  
|[CMFCRibbonStatusBar::GetSpace](#getspace)||  
|[CMFCRibbonStatusBar::IsBottomFrame](#isbottomframe)||  
|[CMFCRibbonStatusBar::IsExtendedElement](#isextendedelement)||  
|[CMFCRibbonStatusBar::IsInformationMode](#isinformationmode)|Determina se la modalità di informazioni viene abilitata per la barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::RecalcLayout](#recalclayout)|(Esegue l'override [CMFCRibbonBar::RecalcLayout](../../mfc/reference/cmfcribbonbar-class.md#recalclayout).)|  
|[CMFCRibbonStatusBar::RemoveAll](#removeall)|Rimuove tutti gli elementi dalla barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::RemoveElement](#removeelement)|Rimuove l'elemento che presenta un ID di comando specificato dalla barra di stato della barra multifunzione.|  
|[CMFCRibbonStatusBar::SetInformation](#setinformation)|Abilita o disabilita la modalità di informazioni per la barra di stato della barra multifunzione.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonStatusBar::OnDrawInformation](#ondrawinformation)|Visualizza la stringa di informazioni che viene visualizzato sulla barra quando è abilitata la modalità di informazioni di stato della barra multifunzione.|  
  
## <a name="remarks"></a>Note  
 Gli utenti possono modificare la visibilità degli elementi della barra multifunzione in una barra di stato della barra multifunzione utilizzando il menu di scelta predefiniti per la barra di stato della barra multifunzione. È possibile aggiungere o rimuovere elementi in modo dinamico.  
  
 Una barra di stato della barra multifunzione sono presenti due aree: un'area principale e un'area estesa. L'area estesa viene visualizzato sul lato destro della barra di stato della barra multifunzione e viene visualizzato in un colore diverso rispetto a quello dell'area principale.  
  
 In genere, l'area principale della barra di stato Visualizza le notifiche di stato e l'area estesa controlli di visualizzazione. L'area estesa rimane visibile fino a quando possibile, quando l'utente ridimensiona la barra di stato della barra multifunzione.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCRibbonStatusBar` classe. Nell'esempio viene illustrato come aggiungere un nuovo elemento della barra multifunzione alla barra di stato della barra multifunzione, aggiungere un elemento della barra multifunzione nell'area estesa della barra di stato della barra multifunzione, aggiungere un separatore e attivare la modalità normale per la barra di stato della barra multifunzione.  
  
 [!code-cpp[NVC_MFC_RibbonApp#15](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbar-class_1.cpp)]  
[!code-cpp[NVC_MFC_RibbonApp#16](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbar-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)  
  
 [CMFCRibbonStatusBar](../../mfc/reference/cmfcribbonstatusbar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonstatusbar. h  
  
##  <a name="adddynamicelement"></a>CMFCRibbonStatusBar::AddDynamicElement  
 Aggiunge un elemento dinamico per la barra di stato della barra multifunzione.  
  
```  
void AddDynamicElement(CMFCRibbonBaseElement* pElement);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pElement`  
 Un puntatore a un elemento dinamico.  
  
### <a name="remarks"></a>Note  
 A differenza di elementi regolari, elementi dinamici non sono personalizzabili e Personalizza menu della barra di stato non vengono visualizzate.  
  
##  <a name="addelement"></a>CMFCRibbonStatusBar::AddElement  
 Aggiunge un nuovo elemento della barra multifunzione alla barra di stato della barra multifunzione.  
  
```  
void AddElement(
    CMFCRibbonBaseElement* pElement,  
    LPCTSTR lpszLabel,  
    BOOL bIsVisible=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pElement`  
 Puntatore all'elemento aggiunto.  
  
 [in] `lpszLabel`  
 Un'etichetta di testo dell'elemento.  
  
 [in] `bIsVisible`  
 `TRUE`Se si desidera aggiungere l'elemento come visibile, `FALSE` se si desidera aggiungere, l'elemento è nascosto.  
  
##  <a name="addextendedelement"></a>CMFCRibbonStatusBar::AddExtendedElement  
 Aggiunge un elemento della barra multifunzione per l'area estesa della barra di stato della barra multifunzione.  
  
```  
void AddExtendedElement(
    CMFCRibbonBaseElement* pElement,  
    LPCTSTR lpszLabel,  
    BOOL bIsVisible=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pElement`  
 Puntatore all'elemento aggiunto.  
  
 [in] `lpszLabel`  
 L'etichetta di testo dell'elemento.  
  
 [in] `bIsVisible`  
 `TRUE`Se si desidera aggiungere l'elemento come visibile, `FALSE` se si desidera aggiungere, l'elemento è nascosto.  
  
### <a name="remarks"></a>Note  
 L'area estesa si trova a destra della barra di stato.  
  
##  <a name="addseparator"></a>CMFCRibbonStatusBar::AddSeparator  
 Aggiunge un separatore alla barra di stato multifunzione.  
  
```  
void AddSeparator();
```  
  
### <a name="remarks"></a>Note  
 Il framework aggiunge un separatore dopo il metodo [CMFCRibbonStatusBar::AddElement](#addelement). Inserisce l'ultimo elemento.  
  
##  <a name="create"></a>CMFCRibbonStatusBar::Create  
 Crea una barra di stato della barra multifunzione.  
  
```  
BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,  
    UINT nID=AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 Puntatore alla finestra padre.  
  
 [in] `dwStyle`  
 Combinazione OR logica di stili del controllo.  
  
 [in] `nID`  
 L'ID di controllo della barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra di stato viene creata correttamente, `FALSE` in caso contrario.  
  
##  <a name="createex"></a>CMFCRibbonStatusBar::CreateEx  
 Crea una barra di stato della barra multifunzione con uno stile esteso.  
  
```  
BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle=0,  
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,  
    UINT nID=AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore alla finestra padre.  
  
 `dwCtrlStyle`  
 Combinazione OR logica di stili aggiuntivi per la creazione dell'oggetto barra di stato.  
  
 `dwStyle`  
 Lo stile del controllo della barra di stato.  
  
 `nID`  
 L'ID di controllo della barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra di stato viene creata correttamente, `FALSE` in caso contrario.  
  
##  <a name="findbyid"></a>CMFCRibbonStatusBar::FindByID  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCRibbonBaseElement* FindByID(UINT uiCmdID, BOOL = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 [in] `BOOL`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="findelement"></a>CMFCRibbonStatusBar::FindElement  
 Restituisce un puntatore all'elemento con l'ID di comando specificato.  
  
```  
CMFCRibbonBaseElement* FindElement(UINT uiID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 L'ID dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento con l'ID di comando specificato. `NULL`Se tale elemento non è presente.  
  
##  <a name="getcount"></a>CMFCRibbonStatusBar::GetCount  
 Restituisce il numero di elementi che si trovano nell'area principale della barra di stato della barra multifunzione.  
  
```  
int GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi che si trovano nell'area principale della barra di stato della barra multifunzione.  
  
##  <a name="getelement"></a>CMFCRibbonStatusBar::GetElement  
 Restituisce un puntatore all'elemento che si trova in corrispondenza dell'indice specificato.  
  
```  
CMFCRibbonBaseElement* GetElement(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Specifica un indice in base zero di un elemento che si trova nell'area principale della barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento che si trova in corrispondenza dell'indice specificato. `NULL`Se l'indice è negativo o maggiore del numero di elementi nella barra di stato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getexcount"></a>CMFCRibbonStatusBar::GetExCount  
 Restituisce il numero di elementi che si trovano nell'area estesa della barra di stato della barra multifunzione.  
  
```  
int GetExCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi che si trovano nell'area estesa della barra di stato della barra multifunzione.  
  
##  <a name="getexelement"></a>CMFCRibbonStatusBar::GetExElement  
 Restituisce un puntatore all'elemento situato in corrispondenza dell'indice specificato nell'area estesa della barra di stato multifunzione. L'area estesa si trova a destra della barra di stato.  
  
```  
CMFCRibbonBaseElement* GetExElement(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Specifica l'indice a base zero di un elemento situato nell'area estesa della barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'elemento situato in corrispondenza dell'indice specificato nell'area estesa della barra di stato multifunzione. `NULL` se `nIndex` è negativo o supera il numero di elementi presenti nell'area estesa della barra di stato multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getextendedarea"></a>CMFCRibbonStatusBar::GetExtendedArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL GetExtendedArea(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getspace"></a>CMFCRibbonStatusBar::GetSpace  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetSpace() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isbottomframe"></a>CMFCRibbonStatusBar::IsBottomFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsBottomFrame() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isextendedelement"></a>CMFCRibbonStatusBar::IsExtendedElement  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsExtendedElement(CMFCRibbonBaseElement* pElement) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pElement`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isinformationmode"></a>CMFCRibbonStatusBar::IsInformationMode  
 Determina se la modalità di informazioni viene abilitata per la barra di stato della barra multifunzione.  
  
```  
BOOL IsInformationMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra di stato può lavorare in modalità di informazioni; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 In modalità di informazioni, la barra di stato nasconde tutti i riquadri regolari e visualizza una stringa di messaggio.  
  
##  <a name="ondrawinformation"></a>CMFCRibbonStatusBar::OnDrawInformation  
 Visualizza la stringa visualizzata sulla barra quando è abilitata la modalità di informazioni di stato della barra multifunzione.  
  
```  
virtual void OnDrawInformation(
    CDC* pDC,  
    CString& strInfo,  
    CRect rectInfo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `strInfo`  
 La stringa di informazioni.  
  
 [in] `rectInfo`  
 Rettangolo di delimitazione.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata se si desidera personalizzare l'aspetto della stringa di informazioni sulla barra di stato. Utilizzare il [CMFCRibbonStatusBar::SetInformation](#setinformation) metodo per inserire la barra di stato in modalità di informazioni. In questa modalità, la barra di stato nasconde tutti i riquadri e Visualizza la stringa di informazioni specificata da `strInfo`.  
  
##  <a name="recalclayout"></a>CMFCRibbonStatusBar::RecalcLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RecalcLayout();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="removeall"></a>CMFCRibbonStatusBar::RemoveAll  
 Rimuove tutti gli elementi dalla barra di stato della barra multifunzione.  
  
```  
void RemoveAll();
```  
  
##  <a name="removeelement"></a>CMFCRibbonStatusBar::RemoveElement  
 Rimuove l'elemento che presenta un ID di comando specificato dalla barra di stato della barra multifunzione.  
  
```  
BOOL RemoveElement(UINT uiID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 ID dell'elemento da rimuovere dalla barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se un elemento con la proprietà specificata `uiID` viene rimosso. In caso contrario, `FALSE`.  
  
##  <a name="setinformation"></a>CMFCRibbonStatusBar::SetInformation  
 Abilita o disabilita la modalità di informazioni per la barra di stato della barra multifunzione.  
  
```  
void SetInformation(LPCTSTR lpszInfo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszInfo`  
 La stringa di informazioni.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per inserire la barra di stato nella modalità di informazioni. In questa modalità, la barra di stato nasconde tutti i riquadri e Visualizza la stringa di informazioni specificata da `lpszInfo`.  
  
 Quando lpszInfo è `NULL`, la barra di stato viene ripristinato alla modalità normale.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)   
 [Classe CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)   
 [Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
