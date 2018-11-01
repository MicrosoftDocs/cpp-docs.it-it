---
title: Classe CCmdUI
ms.date: 11/04/2016
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
ms.openlocfilehash: 7d550268fb417301116b5168d4c0ff76fdc35716
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50571142"
---
# <a name="ccmdui-class"></a>Classe CCmdUI

Viene usato solo in un' `ON_UPDATE_COMMAND_UI` gestore in un `CCmdTarget`-classe derivata.

## <a name="syntax"></a>Sintassi

```
class CCmdUI
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCmdUI::ContinueRouting](#continuerouting)|Indica il meccanismo di routing dei comandi per continuare il routing del messaggio corrente lungo la catena dei gestori.|
|[CCmdUI:: Enable](#enable)|Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.|
|[CCmdUI::SetCheck](#setcheck)|Imposta lo stato di selezione dell'elemento dell'interfaccia utente per questo comando.|
|[CCmdUI::SetRadio](#setradio)|Ad esempio il `SetCheck` funzione membro, ma opera su gruppi di opzione.|
|[CCmdUI::SetText](#settext)|Imposta il testo per l'elemento dell'interfaccia utente per questo comando.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCmdUI::m_nID](#m_nid)|L'ID dell'oggetto dell'interfaccia utente.|
|[CCmdUI::m_nIndex](#m_nindex)|L'indice dell'oggetto dell'interfaccia utente.|
|[CCmdUI::m_pMenu](#m_pmenu)|Punta al menu rappresentato dal `CCmdUI` oggetto.|
|[CCmdUI::m_pOther](#m_pother)|Punta all'oggetto window che riceve la notifica.|
|[CCmdUI::m_pSubMenu](#m_psubmenu)|Punta al sottomenu indipendente rappresentato dal `CCmdUI` oggetto.|

## <a name="remarks"></a>Note

`CCmdUI` non è una classe di base.

Quando un utente dell'applicazione estrae un menu, ogni elemento menu dovrà sapere se deve essere visualizzato come abilitato o disabilitato. La destinazione di un comando di menu fornisce queste informazioni mediante l'implementazione di un gestore ON_UPDATE_COMMAND_UI. Per ogni oggetto comando dell'interfaccia utente nell'applicazione, usare la finestra proprietà per creare un prototipo di voce e la funzione della mappa messaggi per ogni gestore.

Quando viene effettuato il pull nel menu a discesa, il framework cerca e chiama ogni gestore ON_UPDATE_COMMAND_UI, ogni gestore chiama `CCmdUI` , ad esempio funzioni membro `Enable` e `Check`, e il framework visualizza quindi in modo appropriato ogni voce di menu.

Una voce di menu può essere sostituita con un pulsante della barra di controllo o un altro oggetto di interfaccia utente di comando senza modificare il codice all'interno di `ON_UPDATE_COMMAND_UI` gestore.

Nella tabella seguente sono riepilogati gli effetti `CCmdUI`di funzioni membro hanno sui vari elementi dell'interfaccia utente di comando.

|Elemento dell'interfaccia utente|Abilita|SetCheck|SetRadio|SetText|
|--------------------------|------------|--------------|--------------|-------------|
|Voce di menu|Abilita o disabilita|Seleziona o deseleziona|Controlla l'uso di un punto|Set di elementi di testo|
|Pulsante della barra degli strumenti|Abilita o disabilita|Consente di selezionare, viene deselezionata, o indeterminato|Uguale a `SetCheck`|(Non applicabile)|
|Riquadro barra di stato|Imposta il testo visibile o invisibile|Bordo a comparsa o normale set|Uguale a `SetCheck`|Imposta il testo riquadro|
|Pulsante normale `CDialogBar`|Abilita o disabilita|Seleziona o deseleziona la casella di controllo|Uguale a `SetCheck`|Set di testo del pulsante|
|Controllo normale in `CDialogBar`|Abilita o disabilita|(Non applicabile)|(Non applicabile)|Imposta il testo della finestra|

Per altre informazioni sull'uso di questa classe, vedere [come oggetti dell'interfaccia utente di aggiornamento](../../mfc/how-to-update-user-interface-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CCmdUI`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="continuerouting"></a>  CCmdUI::ContinueRouting

Chiamare questa funzione membro per stabilire il meccanismo di routing dei comandi per continuare il routing del messaggio corrente lungo la catena dei gestori.

```
void ContinueRouting();
```

### <a name="remarks"></a>Note

Si tratta di una funzione membro avanzata che deve essere usata in combinazione con un gestore ON_COMMAND_EX che restituisce FALSE. Per altre informazioni, vedere [tecnica nota 6](../../mfc/tn006-message-maps.md).

##  <a name="enable"></a>  CCmdUI:: Enable

Chiamare questa funzione membro per abilitare o disabilitare l'elemento dell'interfaccia utente per questo comando.

```
virtual void Enable(BOOL bOn = TRUE);
```

### <a name="parameters"></a>Parametri

*Bin*<br/>
True per abilitare l'elemento su FALSE per disabilitarla.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#46](../../mfc/codesnippet/cpp/ccmdui-class_1.cpp)]

[!code-cpp[NVC_MFCDocView#47](../../mfc/codesnippet/cpp/ccmdui-class_2.cpp)]

##  <a name="m_nid"></a>  CCmdUI::m_nID

L'ID della voce di menu, pulsante della barra degli strumenti o un altro oggetto di interfaccia utente rappresentato dal `CCmdUI` oggetto.

```
UINT m_nID;
```

##  <a name="m_nindex"></a>  CCmdUI::m_nIndex

L'indice della voce di menu, pulsante della barra degli strumenti o un altro oggetto di interfaccia utente rappresentato dal `CCmdUI` oggetto.

```
UINT m_nIndex;
```

##  <a name="m_pmenu"></a>  CCmdUI::m_pMenu

Puntatore (del `CMenu` tipo) al menu rappresentato dal `CCmdUI` oggetto.

```
CMenu* m_pMenu;
```

### <a name="remarks"></a>Note

NULL se l'elemento non è un menu.

##  <a name="m_psubmenu"></a>  CCmdUI::m_pSubMenu

Puntatore (del `CMenu` tipo) per il sottomenu indipendente rappresentato dal `CCmdUI` oggetto.

```
CMenu* m_pSubMenu;
```

### <a name="remarks"></a>Note

NULL se l'elemento non è un menu. Se il sottomenu è un finestra popup *m_nID* contiene l'ID del primo elemento nel menu a comparsa. Per altre informazioni, vedere [21 Nota tecnica](../../mfc/tn021-command-and-message-routing.md).

##  <a name="m_pother"></a>  CCmdUI::m_pOther

Puntatore (di tipo `CWnd`) all'oggetto finestra, ad esempio una barra degli strumenti o allo stato, che ha inviato la notifica.

```
CWnd* m_pOther;
```

### <a name="remarks"></a>Note

NULL se l'elemento è un menu o non `CWnd` oggetto.

##  <a name="setcheck"></a>  CCmdUI::SetCheck

Chiamare questa funzione membro per impostare l'elemento dell'interfaccia utente per questo comando per lo stato di selezione appropriata.

```
virtual void SetCheck(int nCheck = 1);
```

### <a name="parameters"></a>Parametri

*nControllare*<br/>
Specifica lo stato di controllo da impostare. Se 0, deseleziona; Se i controlli di 1, e se è 2, imposta indeterminato.

### <a name="remarks"></a>Note

Questa funzione membro funziona per le voci di menu e pulsanti della barra degli strumenti. Stato indeterminato si applica solo ai pulsanti della barra degli strumenti.

##  <a name="setradio"></a>  CCmdUI::SetRadio

Chiamare questa funzione membro per impostare l'elemento dell'interfaccia utente per questo comando per lo stato di selezione appropriata.

```
virtual void SetRadio(BOOL bOn = TRUE);
```

### <a name="parameters"></a>Parametri

*Bin*<br/>
TRUE per abilitare l'elemento; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questa funzione membro funziona come `SetCheck`, ad eccezione del fatto che opera sugli elementi dell'interfaccia utente che agisce come parte di un gruppo di opzione. Deselezionare gli altri elementi nel gruppo non è automatica, a meno che gli elementi mantenere il comportamento di radio-group.

##  <a name="settext"></a>  CCmdUI::SetText

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

[Esempio MFC MDI](../../visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
