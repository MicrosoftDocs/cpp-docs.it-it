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
ms.openlocfilehash: 42aec2937cd81ebbb50482321b8deae001723d3a
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78883622"
---
# <a name="ccmdui-class"></a>Classe CCmdUI

Viene utilizzato solo all'interno di un gestore `ON_UPDATE_COMMAND_UI` in una classe derivata da `CCmdTarget`.

## <a name="syntax"></a>Sintassi

```
class CCmdUI
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCmdUI:: ContinueRouting](#continuerouting)|Indica al meccanismo di routing del comando di continuare a indirizzare il messaggio corrente alla catena di gestori.|
|[CCmdUI:: Enable](#enable)|Abilita o Disabilita l'elemento dell'interfaccia utente per questo comando.|
|[CCmdUI:: secheck](#setcheck)|Imposta lo stato di selezione dell'elemento dell'interfaccia utente per questo comando.|
|[CCmdUI:: seradio](#setradio)|Analogamente al `SetCheck` funzione membro, ma opera sui gruppi di radio.|
|[CCmdUI:: SetText](#settext)|Imposta il testo per l'elemento dell'interfaccia utente per questo comando.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCmdUI:: m_nID](#m_nid)|ID dell'oggetto dell'interfaccia utente.|
|[CCmdUI:: m_nIndex](#m_nindex)|Indice dell'oggetto dell'interfaccia utente.|
|[CCmdUI:: m_pMenu](#m_pmenu)|Punta al menu rappresentato dall'oggetto `CCmdUI`.|
|[CCmdUI:: m_pOther](#m_pother)|Punta all'oggetto finestra che ha inviato la notifica.|
|[CCmdUI:: m_pSubMenu](#m_psubmenu)|Punta al sottomenu contenuto rappresentato dall'oggetto `CCmdUI`.|

## <a name="remarks"></a>Osservazioni

`CCmdUI` non dispone di una classe di base.

Quando un utente dell'applicazione estrae un menu, ogni voce di menu deve sapere se deve essere visualizzata come abilitata o disabilitata. La destinazione di un comando di menu fornisce queste informazioni implementando un gestore ON_UPDATE_COMMAND_UI. Per ogni oggetto dell'interfaccia utente del comando nell'applicazione, usare la [creazione guidata classe](mfc-class-wizard.md) o la finestra **proprietà** (in **Visualizzazione classi**) per creare una voce della mappa messaggi e un prototipo di funzione per ogni gestore.

Quando il menu viene estratto, il Framework cerca e chiama ogni gestore di ON_UPDATE_COMMAND_UI, ogni gestore chiama `CCmdUI` funzioni membro quali `Enable` e `Check`e il Framework Visualizza in modo appropriato ogni voce di menu.

Una voce di menu può essere sostituita da un pulsante della barra di controllo o da un altro oggetto dell'interfaccia utente del comando senza modificare il codice all'interno del gestore `ON_UPDATE_COMMAND_UI`.

Nella tabella seguente vengono riepilogate le funzioni membro dell'effetto `CCmdUI`sui vari elementi dell'interfaccia utente del comando.

|Elemento dell'interfaccia utente|Abilitare|SetCheck|SetRadio|SetText|
|--------------------------|------------|--------------|--------------|-------------|
|Voce di menu|Abilitazione o disabilitazione|Controlla o deseleziona|Controlli con un punto|Imposta il testo dell'elemento|
|Pulsante della barra degli strumenti|Abilitazione o disabilitazione|Seleziona, deseleziona o indeterminato|Uguale a `SetCheck`|(Non applicabile)|
|Riquadro Barra di stato|Rende il testo visibile o invisibile|Imposta la finestra popup o il bordo normale|Uguale a `SetCheck`|Imposta il testo del riquadro|
|Pulsante normale in `CDialogBar`|Abilitazione o disabilitazione|Casella di controllo controlla o deseleziona|Uguale a `SetCheck`|Imposta il testo del pulsante|
|Controllo normale in `CDialogBar`|Abilitazione o disabilitazione|(Non applicabile)|(Non applicabile)|Imposta il testo della finestra|

Per ulteriori informazioni sull'utilizzo di questa classe, vedere [come aggiornare gli oggetti dell'interfaccia utente](../../mfc/how-to-update-user-interface-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CCmdUI`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="continuerouting"></a>CCmdUI:: ContinueRouting

Chiamare questa funzione membro per indicare al meccanismo di routing del comando di continuare a indirizzare il messaggio corrente alla catena di gestori.

```
void ContinueRouting();
```

### <a name="remarks"></a>Osservazioni

Si tratta di una funzione membro avanzata da usare insieme a un gestore di ON_COMMAND_EX che restituisce FALSE. Per ulteriori informazioni, vedere la [Nota tecnica 6](../../mfc/tn006-message-maps.md).

##  <a name="enable"></a>CCmdUI:: Enable

Chiamare questa funzione membro per abilitare o disabilitare l'elemento dell'interfaccia utente per questo comando.

```
virtual void Enable(BOOL bOn = TRUE);
```

### <a name="parameters"></a>Parametri

*bOn*<br/>
TRUE per abilitare l'elemento, FALSE per disabilitarlo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#46](../../mfc/codesnippet/cpp/ccmdui-class_1.cpp)]

[!code-cpp[NVC_MFCDocView#47](../../mfc/codesnippet/cpp/ccmdui-class_2.cpp)]

##  <a name="m_nid"></a>CCmdUI:: m_nID

ID della voce di menu, pulsante della barra degli strumenti o altro oggetto dell'interfaccia utente rappresentato dall'oggetto `CCmdUI`.

```
UINT m_nID;
```

##  <a name="m_nindex"></a>CCmdUI:: m_nIndex

Indice della voce di menu, del pulsante della barra degli strumenti o di un altro oggetto dell'interfaccia utente rappresentato dall'oggetto `CCmdUI`.

```
UINT m_nIndex;
```

##  <a name="m_pmenu"></a>CCmdUI:: m_pMenu

Puntatore (di tipo `CMenu`) al menu rappresentato dall'oggetto `CCmdUI`.

```
CMenu* m_pMenu;
```

### <a name="remarks"></a>Osservazioni

NULL se l'elemento non è un menu.

##  <a name="m_psubmenu"></a>CCmdUI:: m_pSubMenu

Puntatore (di tipo `CMenu`) al sottomenu contenuto rappresentato dall'oggetto `CCmdUI`.

```
CMenu* m_pSubMenu;
```

### <a name="remarks"></a>Osservazioni

NULL se l'elemento non è un menu. Se il sottomenu è un popup, *m_nID* contiene l'ID del primo elemento nel menu a comparsa. Per ulteriori informazioni, vedere la [Nota tecnica 21](../../mfc/tn021-command-and-message-routing.md).

##  <a name="m_pother"></a>CCmdUI:: m_pOther

Puntatore (di tipo `CWnd`) all'oggetto finestra, ad esempio uno strumento o una barra di stato, che ha inviato la notifica.

```
CWnd* m_pOther;
```

### <a name="remarks"></a>Osservazioni

NULL se l'elemento è un menu o un oggetto non `CWnd`.

##  <a name="setcheck"></a>CCmdUI:: secheck

Chiamare questa funzione membro per impostare l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato.

```
virtual void SetCheck(int nCheck = 1);
```

### <a name="parameters"></a>Parametri

*nPer*<br/>
Specifica lo stato di selezione da impostare. Se è 0, deseleziona; Se è 1, controlla; e se 2, imposta indeterminato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro funziona per le voci di menu e i pulsanti della barra degli strumenti. Lo stato indeterminato si applica solo ai pulsanti della barra degli strumenti.

##  <a name="setradio"></a>CCmdUI:: seradio

Chiamare questa funzione membro per impostare l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato.

```
virtual void SetRadio(BOOL bOn = TRUE);
```

### <a name="parameters"></a>Parametri

*bOn*<br/>
TRUE per abilitare l'elemento; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione membro funziona come `SetCheck`, ad eccezione del fatto che opera su elementi dell'interfaccia utente che agiscono come parte di un gruppo di radio. La deselezione degli altri elementi del gruppo non è automatica, a meno che gli elementi stessi non gestiscano il comportamento del gruppo di radio.

##  <a name="settext"></a>CCmdUI:: SetText

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
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
