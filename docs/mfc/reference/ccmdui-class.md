---
title: CCmdUI (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CCmdUI
- AFXWIN/CCmdUI
- AFXWIN/CCmdUI::ContinueRouting
- AFXWIN/CCmdUI::Enable
- AFXWIN/CCmdUI::SetCheck
- AFXWIN/CCmdUI::SetRadio
- AFXWIN/CCmdUI::SetText
- AFXWIN/CCmdUI::m_nID
- AFXWIN/CCmdUI::m_nIndex
- AFXWIN/CCmdUI::m_pMenu
- AFXWIN/CCmdUI::m_pOther
- AFXWIN/CCmdUI::m_pSubMenu
dev_langs:
- C++
helpviewer_keywords:
- CCmdUI [MFC], ContinueRouting
- CCmdUI [MFC], Enable
- CCmdUI [MFC], SetCheck
- CCmdUI [MFC], SetRadio
- CCmdUI [MFC], SetText
- CCmdUI [MFC], m_nID
- CCmdUI [MFC], m_nIndex
- CCmdUI [MFC], m_pMenu
- CCmdUI [MFC], m_pOther
- CCmdUI [MFC], m_pSubMenu
ms.assetid: 04eaaaf5-f510-48ab-b425-94665ba24766
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cf80f2ebea8fe27596ce1b240cc414cc0db7a8db
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33356688"
---
# <a name="ccmdui-class"></a>CCmdUI (classe)
Viene utilizzato solo in un `ON_UPDATE_COMMAND_UI` gestore in un `CCmdTarget`-classe derivata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CCmdUI  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCmdUI::ContinueRouting](#continuerouting)|Indica il meccanismo di routing di comandi per continuare il routing del messaggio corrente lungo la catena dei gestori.|  
|[CCmdUI:: Enable](#enable)|Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.|  
|[CCmdUI::SetCheck](#setcheck)|Imposta lo stato di controllo dell'elemento dell'interfaccia utente per questo comando.|  
|[CCmdUI::SetRadio](#setradio)|Ad esempio il `SetCheck` funzione membro, ma opera su gruppi di opzione.|  
|[CCmdUI::SetText](#settext)|Imposta il testo per l'elemento dell'interfaccia utente per questo comando.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCmdUI::m_nID](#m_nid)|L'ID dell'oggetto dell'interfaccia utente.|  
|[CCmdUI::m_nIndex](#m_nindex)|Indice dell'oggetto dell'interfaccia utente.|  
|[CCmdUI::m_pMenu](#m_pmenu)|Punta al menu rappresentato dal `CCmdUI` oggetto.|  
|[CCmdUI::m_pOther](#m_pother)|Punta all'oggetto window che ha inviato la notifica.|  
|[CCmdUI::m_pSubMenu](#m_psubmenu)|Punta al sottomenu indipendente rappresentato dal `CCmdUI` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CCmdUI` non dispone di una classe basa.  
  
 Quando un utente di un'applicazione recupera un menu, ogni elemento di menu deve sapere se deve essere visualizzato come abilitato o disabilitato. La destinazione di un comando di menu fornisce queste informazioni mediante l'implementazione di un `ON_UPDATE_COMMAND_UI` gestore. Per ognuno degli oggetti comando dell'interfaccia utente dell'applicazione, utilizzare la finestra proprietà per creare un prototipo di immissione e la funzione della mappa messaggi per ogni gestore.  
  
 Quando il menu verrà spostato verso il basso, il framework cerca e chiama ognuno `ON_UPDATE_COMMAND_UI` gestore, ogni gestore chiama `CCmdUI` funzioni membro, ad esempio **abilitare** e **controllare**e quindi il framework Consente di visualizzare in modo appropriato ogni voce di menu.  
  
 Una voce di menu può essere sostituita con un pulsante della barra di controllo o un altro oggetto dell'interfaccia utente di comando senza modificare il codice all'interno di `ON_UPDATE_COMMAND_UI` gestore.  
  
 Nella tabella seguente sono riepilogati gli effetti `CCmdUI`di funzioni membro hanno sui vari elementi dell'interfaccia utente di comando.  
  
|Elemento dell'interfaccia utente|Abilita|SetCheck|SetRadio|SetText|  
|--------------------------|------------|--------------|--------------|-------------|  
|Voce di menu|Abilita o disabilita|Seleziona o deseleziona|Controlla l'utilizzo di un punto|Set di elementi di testo|  
|Pulsante della barra degli strumenti|Abilita o disabilita|Seleziona, viene deselezionata, o indeterminato|Uguale a `SetCheck`|(Non applicabile)|  
|Riquadro barra di stato|Consente di testo visibile o invisibile|Bordo di pop-out o normale set|Uguale a `SetCheck`|Imposta il testo riquadro|  
|Pulsante normale in `CDialogBar`|Abilita o disabilita|Seleziona o deseleziona la casella di controllo|Uguale a `SetCheck`|Set di testo del pulsante|  
|Controllo normale in `CDialogBar`|Abilita o disabilita|(Non applicabile)|(Non applicabile)|Imposta il testo della finestra|  
  
 Per ulteriori informazioni sull'utilizzo di questa classe, vedere [come oggetti dell'interfaccia utente aggiornamento](../../mfc/how-to-update-user-interface-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CCmdUI`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="continuerouting"></a>  CCmdUI::ContinueRouting  
 Chiamare questa funzione membro per indicare il meccanismo di routing di comandi per continuare il routing del messaggio corrente lungo la catena dei gestori.  
  
```  
void ContinueRouting();
```  
  
### <a name="remarks"></a>Note  
 Si tratta di una funzione membro avanzata che deve essere utilizzata in combinazione con un `ON_COMMAND_EX` gestore che restituisce **FALSE**. Per ulteriori informazioni, vedere [6 Nota tecnica](../../mfc/tn006-message-maps.md).  
  
##  <a name="enable"></a>  CCmdUI:: Enable  
 Chiamare questa funzione membro per abilitare o disabilitare l'elemento dell'interfaccia utente per questo comando.  
  
```  
virtual void Enable(BOOL bOn = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bOn`  
 **TRUE** per abilitare l'elemento **FALSE** per disabilitarlo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#46](../../mfc/codesnippet/cpp/ccmdui-class_1.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#47](../../mfc/codesnippet/cpp/ccmdui-class_2.cpp)]  
  
##  <a name="m_nid"></a>  CCmdUI::m_nID  
 L'ID della voce di menu, il pulsante della barra degli strumenti o un altro oggetto dell'interfaccia utente rappresentato dal `CCmdUI` oggetto.  
  
```  
UINT m_nID;  
```  
  
##  <a name="m_nindex"></a>  CCmdUI::m_nIndex  
 L'indice della voce di menu, il pulsante della barra degli strumenti o un altro oggetto dell'interfaccia utente rappresentato dal `CCmdUI` oggetto.  
  
```  
UINT m_nIndex;  
```  
  
##  <a name="m_pmenu"></a>  CCmdUI::m_pMenu  
 Puntatore (di `CMenu` tipo) per il menu rappresentato dal `CCmdUI` oggetto.  
  
```  
CMenu* m_pMenu;  
```  
  
### <a name="remarks"></a>Note  
 **NULL** se l'elemento non è un menu.  
  
##  <a name="m_psubmenu"></a>  CCmdUI::m_pSubMenu  
 Puntatore (di `CMenu` tipo) per il sottomenu indipendente rappresentato dal `CCmdUI` oggetto.  
  
```  
CMenu* m_pSubMenu;  
```  
  
### <a name="remarks"></a>Note  
 **NULL** se l'elemento non è un menu. Se il sottomenu è visualizzata una finestra popup, `m_nID` contiene l'ID del primo elemento del menu a comparsa. Per ulteriori informazioni, vedere [21 Nota tecnica](../../mfc/tn021-command-and-message-routing.md).  
  
##  <a name="m_pother"></a>  CCmdUI::m_pOther  
 Puntatore (di tipo `CWnd`) per l'oggetto finestra, ad esempio una barra di stato o lo strumento che ha inviato la notifica.  
  
```  
CWnd* m_pOther;  
```  
  
### <a name="remarks"></a>Note  
 **NULL** se l'elemento è un menu o un non - `CWnd` oggetto.  
  
##  <a name="setcheck"></a>  CCmdUI::SetCheck  
 Chiamare questa funzione membro per impostare l'elemento dell'interfaccia utente per questo comando lo stato di controllo appropriate.  
  
```  
virtual void SetCheck(int nCheck = 1);
```  
  
### <a name="parameters"></a>Parametri  
 `nCheck`  
 Specifica lo stato di controllo da impostare. Se 0, deseleziona; Se 1, viene verificata; e se è 2, imposta indeterminato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro funziona per le voci di menu e pulsanti della barra degli strumenti. Lo stato indeterminato si applica solo ai pulsanti della barra degli strumenti.  
  
##  <a name="setradio"></a>  CCmdUI::SetRadio  
 Chiamare questa funzione membro per impostare l'elemento dell'interfaccia utente per questo comando lo stato di controllo appropriate.  
  
```  
virtual void SetRadio(BOOL bOn = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bOn`  
 **TRUE** per abilitare l'elemento; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro funziona come `SetCheck`, ad eccezione del fatto che opera sugli elementi dell'interfaccia utente che agisce come parte di un gruppo di opzione. Deselezionare gli altri elementi nel gruppo non è automatica, a meno che gli elementi stessi mantengono il comportamento di gruppo di opzione.  
  
##  <a name="settext"></a>  CCmdUI::SetText  
 Chiamare questa funzione membro per impostare il testo dell'elemento dell'interfaccia utente per questo comando.  
  
```  
virtual void SetText(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Puntatore a una stringa di testo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#48](../../mfc/codesnippet/cpp/ccmdui-class_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
