---
title: Classe CSplitButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSplitButton
- AFXCMN/CSplitButton
- AFXCMN/CSplitButton::CSplitButton
- AFXCMN/CSplitButton::Create
- AFXCMN/CSplitButton::SetDropDownMenu
- AFXCMN/CSplitButton::OnDropDown
dev_langs:
- C++
helpviewer_keywords:
- CSplitButton class
ms.assetid: 6844d0a9-6408-4e44-9b5f-57628ed8bad6
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
ms.openlocfilehash: b4c038a177d5c501d4baad8eaa208af0e76ce231
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="csplitbutton-class"></a>Classe CSplitButton
La `CSplitButton` classe rappresenta un controllo split button. Il controllo pulsante di menu combinato segue un comportamento predefinito quando un utente fa clic sulla parte principale del pulsante e visualizza un menu a discesa quando l'utente fa clic sulla freccia a discesa del pulsante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSplitButton : public CButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitButton::CSplitButton](#csplitbutton)|Costruisce un oggetto `CSplitButton`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitButton::Create](#create)|Crea un controllo pulsante di menu combinato con gli stili specificati e lo collega a corrente `CSplitButton` oggetto.|  
|[CSplitButton::SetDropDownMenu](#setdropdownmenu)|Imposta il menu a discesa che viene visualizzato quando un utente fa clic sulla freccia a discesa del controllo pulsante di divisione corrente.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitButton::OnDropDown](#ondropdown)|Gestisce il `BCN_DROPDOWN` notifica che viene inviato dal sistema quando un utente fa clic sulla freccia a discesa del controllo pulsante di divisione corrente.|  
  
## <a name="remarks"></a>Note  
 Il `CSplitButton` viene derivata dal [CButton](../../mfc/reference/cbutton-class.md) (classe). Controllo split button è un pulsante con lo stile `BS_SPLITBUTTON`. Visualizza un menu personalizzato quando un utente fa clic sulla freccia a discesa. Per ulteriori informazioni, vedere il `BS_SPLITBUTTON` e `BS_DEFSPLITBUTTON` negli stili [stili dei pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb775951).  
  
 Nella figura seguente viene illustrata una finestra di dialogo contenente un controllo pager e un controllo pulsante di divisione (1). Freccia giù (2) è già stato fatto clic e viene visualizzato il sottomenu (3).  
  
 ![Finestra di dialogo con splitbutton e un controllo pager. ] (../../mfc/reference/media/splitbutton_pager.png "splitbutton_pager")  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 `CSplitButton`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
 Questa classe è supportata in [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] e versioni successive.  
  
 Requisiti aggiuntivi per questa classe sono descritti [creare requisiti per Windows Vista controlli comuni](../../mfc/build-requirements-for-windows-vista-common-controls.md).  
  
##  <a name="create"></a>CSplitButton::Create  
 Crea un controllo pulsante di menu combinato con gli stili specificati e lo collega a corrente `CSplitButton` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `dwStyle`|Combinazione bit per bit (OR) di stili da applicare al controllo. Per ulteriori informazioni, vedere [stili dei pulsanti](../../mfc/reference/button-styles.md).|  
|[in] `rect`|Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e le dimensioni del controllo.|  
|[in] `pParentWnd`|Un puntatore non null a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto finestra padre del controllo.|  
|[in] `nID`|L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
##  <a name="csplitbutton"></a>CSplitButton::CSplitButton  
 Costruisce un oggetto `CSplitButton`. I parametri del costruttore specificano un sottomenu che viene visualizzato quando un utente fa clic sulla freccia giù del controllo pulsante di divisione.  
  
```  
CSplitButton();

 
CSplitButton(
    UINT nMenuId,   
    UINT nSubMenuId)  
CSplitButton(CMenu* pMenu)  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `nMenuId`|L'ID risorsa della barra dei menu.|  
|[in] `nSubMenuId`|ID della risorsa di un sottomenu.|  
|[in] `pMenu`|Un puntatore a un [CMenu](../../mfc/reference/cmenu-class.md) oggetto che specifica un sottomenu. Il `CSplitButton` oggetto elimina il `CMenu` oggetto e l'identificatore associato `HMENU` quando il `CSplitButton` oggetto esce dall'ambito.|  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CSplitButton::Create](#create) per creare un controllo split button e associarlo al `CSplitButton` oggetto.  
  
##  <a name="ondropdown"></a>CSplitButton::OnDropDown  
 Gestisce il `BCN_DROPDOWN` notifica che viene inviato dal sistema quando un utente fa clic sulla freccia a discesa del controllo pulsante di divisione corrente.  
  
```  
afx_msg void OnDropDown(
    NMHDR* pNMHDR,   
    LRESULT* pResult);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pNMHDR`|Puntatore a un [NMHDR](http://msdn.microsoft.com/library/windows/desktop/bb775514) struttura che contiene informazioni sui [BCN_DROPDOWN](http://msdn.microsoft.com/library/windows/desktop/bb775983) notifica.|  
|[out] `pResult`|(Non utilizzato, viene restituito alcun valore). Valore restituito di [BCN_DROPDOWN](http://msdn.microsoft.com/library/windows/desktop/bb775983) notifica.|  
  
### <a name="remarks"></a>Note  
 Quando l'utente fa clic sulla freccia giù in un controllo split button, viene inviato dal sistema una `BCN_DROPDOWN` notifica di messaggio che il `OnDropDown` metodo gestito. Tuttavia, il `CSplitButton` oggetto non inoltra il `BCN_DROPDOWN` notifica al controllo che contiene il controllo pulsante di divisione. Di conseguenza, il controllo contenitore non supporta un'azione personalizzata in risposta alla notifica.  
  
 Per implementare un'azione personalizzata che supporta il controllo contenitore, utilizzare un [CButton](../../mfc/reference/cbutton-class.md) oggetto con uno stile di `BS_SPLITBUTTON` anziché un `CSplitButton` oggetto. Quindi implementare un gestore per il `BCN_DROPDOWN` notifica il `CButton` oggetto. Per ulteriori informazioni, vedere [stili dei pulsanti](../../mfc/reference/button-styles.md).  
  
 Per implementare un'azione personalizzata che il pulsante di divisione controllo supporta, utilizzare [messaggio reflection](../../mfc/tn062-message-reflection-for-windows-controls.md). Derivare la propria classe dalla `CSplitButton` classe e denominarla, ad esempio, CMySplitButton. Aggiungere quindi la mappa dei messaggi seguenti per l'applicazione per gestire il `BCN_DROPDOWN` notifica:  
  
```  
BEGIN_MESSAGE_MAP(CMySplitButton,
    CSplitButton)  
    ON_NOTIFY_REFLECT(BCN_DROPDOWN, &CMySplitButton::OnDropDown)  
END_MESSAGE_MAP()  
```  
  
##  <a name="setdropdownmenu"></a>CSplitButton::SetDropDownMenu  
 Imposta il menu a discesa che viene visualizzato quando un utente fa clic sulla freccia a discesa del controllo pulsante di divisione corrente.  
  
```  
void SetDropDownMenu(
    UINT nMenuId,   
    UINT nSubMenuId);  
  
void SetDropDownMenu(CMenu* pMenu);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `nMenuId`|L'ID risorsa della barra dei menu.|  
|[in] `nSubMenuId`|ID della risorsa di un sottomenu.|  
|[in] `pMenu`|Puntatore a un [CMenu](../../mfc/reference/cmenu-class.md) oggetto che specifica un sottomenu. Il `CSplitButton` oggetto elimina il `CMenu` oggetto e l'identificatore associato `HMENU` quando il `CSplitButton` oggetto esce dall'ambito.|  
  
### <a name="remarks"></a>Note  
 Il `nMenuId` parametro identifica una barra dei menu, ovvero un elenco delle voci di menu della barra orizzontale. Il `nSubMenuId` parametro è un numero di indice in base zero che identifica un sottomenu, ovvero l'elenco di riepilogo a discesa delle voci di menu associata a ogni elemento della barra dei menu. Ad esempio, una tipica applicazione dispone di un menu che contiene gli elementi della barra dei menu, "File", "Modifica" e "Help". L'elemento della barra di menu "File" dispone di un sottomenu che contiene le voci di menu "Open", "Chiudi" ed "Exit". Quando si fa clic sulla freccia a discesa del controllo pulsante di menu combinato, il controllo viene visualizzato il sottomenu specificato, non la barra dei menu.  
  
 Nella figura seguente viene illustrata una finestra di dialogo contenente un controllo pager e un controllo pulsante di divisione (1). Freccia giù (2) è già stato fatto clic e viene visualizzato il sottomenu (3).  
  
 ![Finestra di dialogo con splitbutton e un controllo pager. ] (../../mfc/reference/media/splitbutton_pager.png "splitbutton_pager")  
  
### <a name="example"></a>Esempio  
 La prima istruzione nell'esempio di codice seguente viene illustrato il [CSplitButton::SetDropDownMenu](#setdropdownmenu) metodo. Creato il menu di Visual Studio editor di risorse denominato automaticamente l'ID di barra dei menu, `IDR_MENU1`. Il `nSubMenuId` parametro, che corrisponde a zero, si intende il sottomenu solo della barra dei menu.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2 n.&1;](../../mfc/reference/codesnippet/cpp/csplitbutton-class_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CSplitButton](../../mfc/reference/csplitbutton-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CButton (classe)](../../mfc/reference/cbutton-class.md)

