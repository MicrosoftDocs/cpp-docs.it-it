---
title: Classe CSplitButton | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CSplitButton [MFC], CSplitButton
- CSplitButton [MFC], Create
- CSplitButton [MFC], SetDropDownMenu
- CSplitButton [MFC], OnDropDown
ms.assetid: 6844d0a9-6408-4e44-9b5f-57628ed8bad6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fbced65aa76206d040ff1c13267fe9b7d3c69eca
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122787"
---
# <a name="csplitbutton-class"></a>Classe CSplitButton
Il `CSplitButton` classe rappresenta un controllo pulsante di menu combinato. Il controllo pulsante di menu combinato segue un comportamento predefinito quando un utente fa clic sulla parte principale del pulsante e visualizza un menu a discesa quando l'utente fa clic sulla freccia a discesa del pulsante.  
  
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
|[CSplitButton::Create](#create)|Crea un controllo pulsante di menu combinato con gli stili specificati e lo collega all'oggetto corrente `CSplitButton` oggetto.|  
|[CSplitButton::SetDropDownMenu](#setdropdownmenu)|Imposta il menu di riepilogo a discesa che viene visualizzato quando un utente fa clic sulla freccia giù del controllo pulsante di menu combinato corrente.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitButton::OnDropDown](#ondropdown)|Gestisce la notifica BCN_DROPDOWN inviati dal sistema quando un utente fa clic sulla freccia giù del controllo pulsante di menu combinato corrente.|  
  
## <a name="remarks"></a>Note  
 Il `CSplitButton` classe è derivata dal [CButton](../../mfc/reference/cbutton-class.md) classe. Il controllo pulsante di menu combinato è un controllo pulsante la cui stile è BS_SPLITBUTTON. Viene visualizzato un menu personalizzato quando un utente fa clic sulla freccia a discesa. Per altre informazioni, vedere gli stili BS_SPLITBUTTON e BS_DEFSPLITBUTTON [stili dei pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb775951).  
  
 La figura seguente illustra una finestra di dialogo contenente un controllo cercapersone e un controllo pulsante di menu combinato (1). La freccia giù (2) è già stato fatto clic e viene visualizzato il sottomenu (3).  
  
 ![Finestra di dialogo con un controllo splitbutton e cercapersone. ] (../../mfc/reference/media/splitbutton_pager.png "splitbutton_pager")  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 `CSplitButton`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
 Questa classe è supportata in [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] e versioni successive.  
  
 I requisiti aggiuntivi per questa classe sono descritti [compilare i requisiti per la Vista controlli comuni di Windows](../../mfc/build-requirements-for-windows-vista-common-controls.md).  
  
##  <a name="create"></a>  CSplitButton::Create  
 Crea un controllo pulsante di menu combinato con gli stili specificati e lo collega all'oggetto corrente `CSplitButton` oggetto.  
  
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
|[in] *dwStyle*|Combinazione bit per bit (OR) di stili da applicare al controllo. Per altre informazioni, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).|  
|[in] *rect*|Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e dimensioni del controllo.|  
|[in] *pParentWnd*|Un puntatore non null a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è la finestra padre del controllo.|  
|[in] *nID*|L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo dà esito positivo. in caso contrario, FALSE.  
  
##  <a name="csplitbutton"></a>  CSplitButton::CSplitButton  
 Costruisce un oggetto `CSplitButton`. I parametri del costruttore specificano un sottomenu che viene visualizzato quando un utente fa clic sulla freccia giù del controllo pulsante di menu combinato.  
  
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
|[in] *nMenuId*|L'ID risorsa della barra dei menu.|  
|[in] *nSubMenuId*|L'ID di risorsa di un sottomenu.|  
|[in] *pMenu*|Un puntatore a un [CMenu](../../mfc/reference/cmenu-class.md) oggetto che specifica un sottomenu. Il `CSplitButton` oggetto eliminazioni il `CMenu` oggetto e relativo HMENU associati quando il `CSplitButton` oggetto esce dall'ambito.|  
  
### <a name="remarks"></a>Note  
 Usare la [CSplitButton::Create](#create) per creare un controllo pulsante di menu combinato e associarlo al `CSplitButton` oggetto.  
  
##  <a name="ondropdown"></a>  CSplitButton::OnDropDown  
 Gestisce la notifica BCN_DROPDOWN inviati dal sistema quando un utente fa clic sulla freccia giù del controllo pulsante di menu combinato corrente.  
  
```  
afx_msg void OnDropDown(
    NMHDR* pNMHDR,   
    LRESULT* pResult);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *pNMHDR viene convertito nel*|Puntatore a un [NMHDR](http://msdn.microsoft.com/library/windows/desktop/bb775514) struttura che contiene informazioni sul [BCN_DROPDOWN](http://msdn.microsoft.com/library/windows/desktop/bb775983) notifica.|  
|[out] *pResult*|(Non usato, viene restituito alcun valore). Valore di restituito il [BCN_DROPDOWN](http://msdn.microsoft.com/library/windows/desktop/bb775983) notifica.|  
  
### <a name="remarks"></a>Note  
 Quando l'utente fa clic sulla freccia giù su un controllo pulsante di menu combinato, sistema invia una notifica BCN_DROPDOWN dei messaggi, quali il `OnDropDown` gli handle di metodo. Tuttavia, il `CSplitButton` oggetto non inoltra la notifica BCN_DROPDOWN al controllo che contiene il controllo pulsante di menu combinato. Di conseguenza, il controllo contenitore non supporta un'azione personalizzata in risposta alla notifica.  
  
 Per implementare un'azione personalizzata che supporta il controllo che lo contiene, utilizzare un [CButton](../../mfc/reference/cbutton-class.md) oggetto con uno stile di BS_SPLITBUTTON anziché un `CSplitButton` oggetto. Quindi implementare un gestore per la notifica BCN_DROPDOWN il `CButton` oggetto. Per altre informazioni, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).  
  
 Per implementare un'azione personalizzata che il pulsante di menu combinato controllo stesso supporta, utilizzare [reflection di messaggio](../../mfc/tn062-message-reflection-for-windows-controls.md). Derivare la propria classe dalla `CSplitButton` classe e assegnargli il nome, ad esempio, CMySplitButton. Per l'applicazione per gestire la notifica BCN_DROPDOWN quindi aggiungere la mappa dei messaggi seguenti:  
  
```  
BEGIN_MESSAGE_MAP(CMySplitButton,
    CSplitButton)  
    ON_NOTIFY_REFLECT(BCN_DROPDOWN, &CMySplitButton::OnDropDown)  
END_MESSAGE_MAP()  
```  
  
##  <a name="setdropdownmenu"></a>  CSplitButton::SetDropDownMenu  
 Imposta il menu di riepilogo a discesa che viene visualizzato quando un utente fa clic sulla freccia giù del controllo pulsante di menu combinato corrente.  
  
```  
void SetDropDownMenu(
    UINT nMenuId,   
    UINT nSubMenuId);  
  
void SetDropDownMenu(CMenu* pMenu);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *nMenuId*|L'ID risorsa della barra dei menu.|  
|[in] *nSubMenuId*|L'ID di risorsa di un sottomenu.|  
|[in] *pMenu*|Puntatore a un [CMenu](../../mfc/reference/cmenu-class.md) oggetto che specifica un sottomenu. Il `CSplitButton` oggetto eliminazioni il `CMenu` oggetto e relativo HMENU associati quando il `CSplitButton` oggetto esce dall'ambito.|  
  
### <a name="remarks"></a>Note  
 Il *nMenuId* parametro identifica una barra dei menu, ovvero un elenco di voci di menu barra orizzontale. Il *nSubMenuId* parametro è un numero di indice in base zero che identifica un sottomenu, ovvero l'elenco di riepilogo a discesa delle voci di menu associata a ogni elemento della barra dei menu. Ad esempio, una tipica applicazione dispone di un menu che contiene gli elementi della barra dei menu, "File", "Modifica" e "Help". L'elemento della barra dei menu "File" dispone di un sottomenu contenente le voci di menu "Apri", "Chiudi" ed "Exit". Quando si fa clic sulla freccia a discesa del controllo pulsante di menu combinato, il controllo Visualizza il sottomenu specificato, non la barra dei menu.  
  
 La figura seguente illustra una finestra di dialogo contenente un controllo cercapersone e un controllo pulsante di menu combinato (1). La freccia giù (2) è già stato fatto clic e viene visualizzato il sottomenu (3).  
  
 ![Finestra di dialogo con un controllo splitbutton e cercapersone. ] (../../mfc/reference/media/splitbutton_pager.png "splitbutton_pager")  
  
### <a name="example"></a>Esempio  
 La prima istruzione nell'esempio di codice seguente viene illustrato il [CSplitButton::SetDropDownMenu](#setdropdownmenu) metodo. Creato il menu con la risorsa di Visual Studio editor, denominato automaticamente l'ID di barra dei menu, IDR_MENU1. Il *nSubMenuId* parametro, che è uguale a zero, si intende il sottomenu solo della barra dei menu.  
  
 [!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/csplitbutton-class_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CSplitButton](../../mfc/reference/csplitbutton-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CButton](../../mfc/reference/cbutton-class.md)
