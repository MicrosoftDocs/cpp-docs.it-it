---
title: Classe CCmdUI
ms.date: 09/06/2019
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
ms.openlocfilehash: 5f411890575c07e471b02c423aa42ec5bf51ac0a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352268"
---
# <a name="ccmdui-class"></a>Classe CCmdUI

Viene utilizzato solo `ON_UPDATE_COMMAND_UI` all'interno di un gestore in una `CCmdTarget`classe derivata.

## <a name="syntax"></a>Sintassi

```
class CCmdUI
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCmdUI::ContinueRouting](#continuerouting)|Indica al meccanismo di routing dei comandi di continuare a instradare il messaggio corrente lungo la catena di gestori.|
|[CCmdUI::AbilitareCCmdUI::Enable](#enable)|Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.|
|[CCmdUI::SetCheck](#setcheck)|Imposta lo stato di controllo dell'elemento dell'interfaccia utente per questo comando.|
|[CCmdUI::SetRadio](#setradio)|Come `SetCheck` la funzione membro, ma opera su gruppi radio.|
|[CCmdUI::SetText](#settext)|Imposta il testo per l'elemento dell'interfaccia utente per questo comando.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCmdUI::m_nID](#m_nid)|ID dell'oggetto dell'interfaccia utente.|
|[CCmdUI::m_nIndex](#m_nindex)|Indice dell'oggetto dell'interfaccia utente.|
|[CCmdUI::m_pMenu](#m_pmenu)|Punta al menu rappresentato dall'oggetto. `CCmdUI`|
|[CCmdUI::m_pOther](#m_pother)|Punta all'oggetto finestra che ha inviato la notifica.|
|[CCmdUI::m_pSubMenu](#m_psubmenu)|Punta al sottomenu contenuto rappresentato dall'oggetto. `CCmdUI`|

## <a name="remarks"></a>Osservazioni

`CCmdUI`non dispone di una classe base.

Quando un utente dell'applicazione tira verso il basso un menu, ogni voce di menu deve sapere se deve essere visualizzata come abilitata o disabilitata. La destinazione di un comando di menu fornisce queste informazioni implementando un gestore di ON_UPDATE_COMMAND_UI. Per ogni oggetto dell'interfaccia utente del comando nell'applicazione, utilizzare la [Creazione guidata classe](mfc-class-wizard.md) o la finestra **Proprietà** (in **Visualizzazione classi**) per creare una voce della mappa messaggi e un prototipo di funzione per ogni gestore.

Quando il menu viene estratto verso il basso, il framework `CCmdUI` cerca e `Enable` `Check`chiama ogni gestore ON_UPDATE_COMMAND_UI, ogni gestore chiama le funzioni membro, ad esempio e , e il framework visualizza quindi in modo appropriato ogni voce di menu.

Una voce di menu può essere sostituita con un pulsante della barra `ON_UPDATE_COMMAND_UI` di controllo o un altro oggetto dell'interfaccia utente di comando senza modificare il codice all'interno del gestore.

Nella tabella seguente vengono `CCmdUI`riepilogati gli effetti delle funzioni membro su vari elementi dell'interfaccia utente dei comandi.

|Elemento dell'interfaccia utente|Abilitare|SetCheck (Controllo)|SetRadio|ImpostaTesto|
|--------------------------|------------|--------------|--------------|-------------|
|Voce di menu|Abilita o disabilita|Controlli o deselezionamenti|Controlli con un punto|Imposta il testo dell'elemento|
|Pulsante della barra degli strumenti|Abilita o disabilita|Seleziona, deseleziona o indeterminato|Uguale a `SetCheck`|(Non applicabile)|
|Riquadro barra di stato|Rende il testo visibile o invisibile|Imposta il bordo popup o normale|Uguale a `SetCheck`|Imposta il testo del riquadro|
|Pulsante Normale in`CDialogBar`|Abilita o disabilita|Casella di controllo Seleziona o deseleziona|Uguale a `SetCheck`|Imposta il testo del pulsante|
|Controllo normale in`CDialogBar`|Abilita o disabilita|(Non applicabile)|(Non applicabile)|Imposta il testo della finestra|

Per ulteriori informazioni sull'utilizzo di questa classe, vedere Come aggiornare gli [oggetti dell'interfaccia utente](../../mfc/how-to-update-user-interface-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CCmdUI`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="ccmduicontinuerouting"></a><a name="continuerouting"></a>CCmdUI::ContinueRouting

Chiamare questa funzione membro per indicare al meccanismo di routing dei comandi di continuare a instradare il messaggio corrente lungo la catena di gestori.

```
void ContinueRouting();
```

### <a name="remarks"></a>Osservazioni

Si tratta di una funzione membro avanzata che deve essere utilizzata insieme a un gestore di ON_COMMAND_EX che restituisce FALSE. Per ulteriori informazioni, vedere [la Nota tecnica 6](../../mfc/tn006-message-maps.md).

## <a name="ccmduienable"></a><a name="enable"></a>CCmdUI::AbilitareCCmdUI::Enable

Chiamare questa funzione membro per abilitare o disabilitare l'elemento dell'interfaccia utente per questo comando.

```
virtual void Enable(BOOL bOn = TRUE);
```

### <a name="parameters"></a>Parametri

*Bon*<br/>
TRUE per abilitare l'elemento, FALSE per disabilitarlo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#46](../../mfc/codesnippet/cpp/ccmdui-class_1.cpp)]

[!code-cpp[NVC_MFCDocView#47](../../mfc/codesnippet/cpp/ccmdui-class_2.cpp)]

## <a name="ccmduim_nid"></a><a name="m_nid"></a>CCmdUI::m_nID

ID della voce di menu, del pulsante della barra `CCmdUI` degli strumenti o di un altro oggetto dell'interfaccia utente rappresentato dall'oggetto.

```
UINT m_nID;
```

## <a name="ccmduim_nindex"></a><a name="m_nindex"></a>CCmdUI::m_nIndex

Indice della voce di menu, del pulsante della barra `CCmdUI` degli strumenti o di un altro oggetto dell'interfaccia utente rappresentato dall'oggetto.

```
UINT m_nIndex;
```

## <a name="ccmduim_pmenu"></a><a name="m_pmenu"></a>CCmdUI::m_pMenu

Puntatore `CMenu` (di tipo) al `CCmdUI` menu rappresentato dall'oggetto.

```
CMenu* m_pMenu;
```

### <a name="remarks"></a>Osservazioni

NULL se l'elemento non è un menu.

## <a name="ccmduim_psubmenu"></a><a name="m_psubmenu"></a>CCmdUI::m_pSubMenu

Puntatore `CMenu` (di tipo) al sottomenu `CCmdUI` contenuto rappresentato dall'oggetto.

```
CMenu* m_pSubMenu;
```

### <a name="remarks"></a>Osservazioni

NULL se l'elemento non è un menu. Se il sottomenu è un popup, *m_nID* contiene l'ID del primo elemento nel menu a comparsa. Per ulteriori informazioni, vedere la [Nota tecnica 21](../../mfc/tn021-command-and-message-routing.md).

## <a name="ccmduim_pother"></a><a name="m_pother"></a>CCmdUI::m_pOther

Puntatore (di tipo `CWnd`) all'oggetto finestra, ad esempio uno strumento o una barra di stato, che ha inviato la notifica.

```
CWnd* m_pOther;
```

### <a name="remarks"></a>Osservazioni

NULL se l'elemento è un `CWnd` menu o un non oggetto.

## <a name="ccmduisetcheck"></a><a name="setcheck"></a>CCmdUI::SetCheck

Chiamare questa funzione membro per impostare l'elemento dell'interfaccia utente per questo comando sullo stato di controllo appropriato.

```
virtual void SetCheck(int nCheck = 1);
```

### <a name="parameters"></a>Parametri

*nControllare*<br/>
Specifica lo stato di controllo da impostare. Se 0, deseleziona; se 1, controlla; e se 2, imposta indeterminato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro funziona per le voci di menu e pulsanti della barra degli strumenti. Lo stato indeterminato si applica solo ai pulsanti della barra degli strumenti.

## <a name="ccmduisetradio"></a><a name="setradio"></a>CCmdUI::SetRadio

Chiamare questa funzione membro per impostare l'elemento dell'interfaccia utente per questo comando sullo stato di controllo appropriato.

```
virtual void SetRadio(BOOL bOn = TRUE);
```

### <a name="parameters"></a>Parametri

*Bon*<br/>
TRUE per abilitare l'elemento; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione membro `SetCheck`funziona come , ad eccezione del fatto che opera su elementi dell'interfaccia utente che fanno parte di un gruppo radio. Deselezionare gli altri elementi del gruppo non è automatico a meno che gli elementi stessi non mantengano il comportamento del gruppo radio.

## <a name="ccmduisettext"></a><a name="settext"></a>CCmdUI::SetText

Chiamare questa funzione membro per impostare il testo dell'elemento dell'interfaccia utente per questo comando.

```
virtual void SetText(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Puntatore a una stringa di testo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#48](../../mfc/codesnippet/cpp/ccmdui-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
