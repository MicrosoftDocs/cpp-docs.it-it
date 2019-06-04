---
title: CMenu (classe)
ms.date: 11/04/2016
f1_keywords:
- CMenu
- AFXWIN/CMenu
- AFXWIN/CMenu::CMenu
- AFXWIN/CMenu::AppendMenu
- AFXWIN/CMenu::Attach
- AFXWIN/CMenu::CheckMenuItem
- AFXWIN/CMenu::CheckMenuRadioItem
- AFXWIN/CMenu::CreateMenu
- AFXWIN/CMenu::CreatePopupMenu
- AFXWIN/CMenu::DeleteMenu
- AFXWIN/CMenu::DeleteTempMap
- AFXWIN/CMenu::DestroyMenu
- AFXWIN/CMenu::Detach
- AFXWIN/CMenu::DrawItem
- AFXWIN/CMenu::EnableMenuItem
- AFXWIN/CMenu::FromHandle
- AFXWIN/CMenu::GetDefaultItem
- AFXWIN/CMenu::GetMenuContextHelpId
- AFXWIN/CMenu::GetMenuInfo
- AFXWIN/CMenu::GetMenuItemCount
- AFXWIN/CMenu::GetMenuItemID
- AFXWIN/CMenu::GetMenuItemInfo
- AFXWIN/CMenu::GetMenuState
- AFXWIN/CMenu::GetMenuString
- AFXWIN/CMenu::GetSafeHmenu
- AFXWIN/CMenu::GetSubMenu
- AFXWIN/CMenu::InsertMenu
- AFXWIN/CMenu::InsertMenuItem
- AFXWIN/CMenu::LoadMenu
- AFXWIN/CMenu::LoadMenuIndirect
- AFXWIN/CMenu::MeasureItem
- AFXWIN/CMenu::ModifyMenu
- AFXWIN/CMenu::RemoveMenu
- AFXWIN/CMenu::SetDefaultItem
- AFXWIN/CMenu::SetMenuContextHelpId
- AFXWIN/CMenu::SetMenuInfo
- AFXWIN/CMenu::SetMenuItemBitmaps
- AFXWIN/CMenu::SetMenuItemInfo
- AFXWIN/CMenu::TrackPopupMenu
- AFXWIN/CMenu::TrackPopupMenuEx
- AFXWIN/CMenu::m_hMenu
helpviewer_keywords:
- CMenu [MFC], CMenu
- CMenu [MFC], AppendMenu
- CMenu [MFC], Attach
- CMenu [MFC], CheckMenuItem
- CMenu [MFC], CheckMenuRadioItem
- CMenu [MFC], CreateMenu
- CMenu [MFC], CreatePopupMenu
- CMenu [MFC], DeleteMenu
- CMenu [MFC], DeleteTempMap
- CMenu [MFC], DestroyMenu
- CMenu [MFC], Detach
- CMenu [MFC], DrawItem
- CMenu [MFC], EnableMenuItem
- CMenu [MFC], FromHandle
- CMenu [MFC], GetDefaultItem
- CMenu [MFC], GetMenuContextHelpId
- CMenu [MFC], GetMenuInfo
- CMenu [MFC], GetMenuItemCount
- CMenu [MFC], GetMenuItemID
- CMenu [MFC], GetMenuItemInfo
- CMenu [MFC], GetMenuState
- CMenu [MFC], GetMenuString
- CMenu [MFC], GetSafeHmenu
- CMenu [MFC], GetSubMenu
- CMenu [MFC], InsertMenu
- CMenu [MFC], InsertMenuItem
- CMenu [MFC], LoadMenu
- CMenu [MFC], LoadMenuIndirect
- CMenu [MFC], MeasureItem
- CMenu [MFC], ModifyMenu
- CMenu [MFC], RemoveMenu
- CMenu [MFC], SetDefaultItem
- CMenu [MFC], SetMenuContextHelpId
- CMenu [MFC], SetMenuInfo
- CMenu [MFC], SetMenuItemBitmaps
- CMenu [MFC], SetMenuItemInfo
- CMenu [MFC], TrackPopupMenu
- CMenu [MFC], TrackPopupMenuEx
- CMenu [MFC], m_hMenu
ms.assetid: 40cacfdc-d45c-4ec7-bf28-991c72812499
ms.openlocfilehash: 5df6515573cfca784d1e59f34342466dde2e42e4
ms.sourcegitcommit: ecf274bcfe3a977c48745aaa243e5e731f1fdc5f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2019
ms.locfileid: "66504852"
---
# <a name="cmenu-class"></a>CMenu (classe)

Incapsulamento di `HMENU`di Windows.

## <a name="syntax"></a>Sintassi

```
class CMenu : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu::CMenu](#cmenu)|Costruisce un oggetto `CMenu`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu::AppendMenu](#appendmenu)|Aggiunge un nuovo elemento alla fine di questo menu.|
|[CMenu::Attach](#attach)|Associa un handle del menu di Windows per un `CMenu` oggetto.|
|[CMenu::CheckMenuItem](#checkmenuitem)|Inserisce un segno di spunta accanto a o rimuove un segno di spunta da una voce di menu nel menu a comparsa.|
|[CMenu::CheckMenuRadioItem](#checkmenuradioitem)|Inserisce un pulsante di opzione accanto a una voce di menu e rimuove il pulsante di opzione da tutte le altre voci di menu del gruppo.|
|[CMenu::CreateMenu](#createmenu)|Consente di creare un menu vuoto e lo collega a un `CMenu` oggetto.|
|[CMenu::CreatePopupMenu](#createpopupmenu)|Consente di creare un menu a comparsa vuoto e lo collega a un `CMenu` oggetto.|
|[CMenu::DeleteMenu](#deletemenu)|Elimina un elemento specificato dal menu di scelta. Se la voce di menu è associato un menu a comparsa, Elimina l'handle per il menu di scelta rapida e libera la memoria usata da esso.|
|[CMenu::DeleteTempMap](#deletetempmap)|Elimina qualsiasi temporary `CMenu` degli oggetti creati dal `FromHandle` funzione membro.|
|[CMenu::DestroyMenu](#destroymenu)|Elimina definitivamente il menu collegato a un `CMenu` dell'oggetto e libera tutta la memoria occupata il menu di scelta.|
|[CMenu::Detach](#detach)|Scollega un handle del menu di Windows da un `CMenu` specificato e restituisce l'handle.|
|[CMenu::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di un menu creato dal proprietario cambia.|
|[CMenu::EnableMenuItem](#enablemenuitem)|Abilita, disabilita o attenua (tonalità di grigio) una voce di menu.|
|[CMenu::FromHandle](#fromhandle)|Restituisce un puntatore a un `CMenu` oggetto dato un handle di menu di Windows.|
|[CMenu::GetDefaultItem](#getdefaultitem)|Determina la voce di menu predefinito sul menu specificato.|
|[CMenu::GetMenuContextHelpId](#getmenucontexthelpid)|Recupera l'ID del contesto della Guida associato al menu.|
|[CMenu::GetMenuInfo](#getmenuinfo)|Recupera le informazioni in un menu specifico.|
|[CMenu::GetMenuItemCount](#getmenuitemcount)|Determina il numero di elementi in un menu popup di primo livello.|
|[CMenu::GetMenuItemID](#getmenuitemid)|Ottiene l'identificatore della voce di menu per una voce di menu che si trova nella posizione specificata.|
|[CMenu::GetMenuItemInfo](#getmenuiteminfo)|Recupera informazioni su una voce di menu.|
|[CMenu::GetMenuState](#getmenustate)|Restituisce lo stato della voce di menu specificata o il numero di elementi in un menu a comparsa.|
|[CMenu::GetMenuString](#getmenustring)|Recupera l'etichetta della voce di menu specificato.|
|[CMenu::GetSafeHmenu](#getsafehmenu)|Restituisce il `m_hMenu` sottoposto a wrapping da questo `CMenu` oggetto.|
|[CMenu::GetSubMenu](#getsubmenu)|Recupera un puntatore a un menu a comparsa.|
|[CMenu::InsertMenu](#insertmenu)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata, lo spostamento di altri elementi di menu a discesa.|
|[CMenu::InsertMenuItem](#insertmenuitem)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata in un menu.|
|[CMenu::LoadMenu](#loadmenu)|Carica una risorsa di menu dal file eseguibile e lo collega a un `CMenu` oggetto.|
|[CMenu::LoadMenuIndirect](#loadmenuindirect)|Carica un menu di scelta da un modello dal menu in memoria e lo collega a un `CMenu` oggetto.|
|[CMenu::MeasureItem](#measureitem)|Chiamato dal framework per determinare le dimensioni di menu quando viene creato un menu creato dal proprietario.|
|[CMenu::ModifyMenu](#modifymenu)|Modifica una voce di menu esistenti in corrispondenza della posizione specificata.|
|[CMenu::RemoveMenu](#removemenu)|Elimina una voce di menu con un menu a comparsa associato dal menu di scelta specificato.|
|[CMenu::SetDefaultItem](#setdefaultitem)|Imposta la voce di menu predefinito per il menu di scelta specificato.|
|[CMenu::SetMenuContextHelpId](#setmenucontexthelpid)|Imposta l'ID del contesto della Guida da associare il menu di scelta.|
|[CMenu::SetMenuInfo](#setmenuinfo)|Imposta le informazioni in un menu specifico.|
|[CMenu::SetMenuItemBitmaps](#setmenuitembitmaps)|Associa le bitmap di segno di spunta specificato a una voce di menu.|
|[CMenu::SetMenuItemInfo](#setmenuiteminfo)|Modificare le informazioni su una voce di menu.|
|[CMenu::TrackPopupMenu](#trackpopupmenu)|Consente di visualizzare un menu a comparsa a virgola mobile in corrispondenza della posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.|
|[CMenu::TrackPopupMenuEx](#trackpopupmenuex)|Consente di visualizzare un menu a comparsa a virgola mobile in corrispondenza della posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu::operator HMENU](#operator_hmenu)|Recupera l'handle dell'oggetto menu.|
|[CMenu::operator! =](#operator_neq)|Determina se due oggetti di menu non sono uguali.|
|[CMenu::operator = =](#operator_eq_eq)|Determina se due oggetti di menu sono uguali.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu::m_hMenu](#m_hmenu)|Specifica l'handle per il menu di Windows associato ai `CMenu` oggetto.|

## <a name="remarks"></a>Note

Fornisce funzioni membro per la creazione, di rilevamento, aggiornamento ed eliminazione definitiva di un menu.

Creare un `CMenu` oggetto nello stack frame come locale, quindi chiamare `CMenu`di funzioni membro per modificare il nuovo menu in base alle esigenze. Successivamente, chiamare [CWnd::SetMenu](../../mfc/reference/cwnd-class.md#setmenu) seguita immediatamente da una chiamata a impostare il menu a una finestra, il `CMenu` dell'oggetto [Detach](#detach) funzione membro. Il `CWnd::SetMenu` funzione membro imposta il menu della finestra al nuovo menu, fa sì che la finestra deve avvenire in modo da riflettere la modifica di menu e passa inoltre la proprietà del menu di scelta nella finestra. La chiamata a `Detach` disconnette l'elemento HMENU dal `CMenu` dell'oggetto, quindi che, quando locale `CMenu` variabile diventa esterno all'ambito, il `CMenu` distruttore di oggetti non tenta di eliminare definitivamente un menu di scelta non possiede più. Lo stesso menu viene automaticamente distrutta quando la finestra viene eliminata.

È possibile usare la [LoadMenuIndirect](#loadmenuindirect) funzione di membro per creare un menu di scelta da un modello in memoria, ma un menu creato da una risorsa da una chiamata a [LoadMenu](#loadmenu) più facilmente gestibili e la risorsa di menu se stesso può essere creato e modificato dall'editor di menu.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMenu`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="appendmenu"></a>  CMenu::AppendMenu

Aggiunge un nuovo elemento alla fine di un menu.

```
BOOL AppendMenu(
    UINT nFlags,
    UINT_PTR nIDNewItem = 0,
    LPCTSTR lpszNewItem = NULL);

BOOL AppendMenu(
    UINT nFlags,
    UINT_PTR nIDNewItem,
    const CBitmap* pBmp);
```

### <a name="parameters"></a>Parametri

*nFlags*<br/>
Specifica le informazioni sullo stato della nuova voce di menu quando questo viene aggiunto al menu di scelta. È costituito da uno o più dei valori elencati nella sezione Osservazioni.

*nIDNewItem*<br/>
Specifica l'ID di comando di nuova voce di menu oppure, se *nFlags* è impostata su MF_POPUP, l'handle di menu ( `HMENU`) di un menu a comparsa. Il *nIDNewItem* parametro viene ignorato (non necessaria) se *nFlags* è impostato su MF_SEPARATOR.

*lpszNewItem*<br/>
Specifica il contenuto della nuova voce di menu. Il *nFlags* parametro viene utilizzato per interpretare *lpszNewItem* nel modo seguente:

|nFlags|Interpretazione di lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contiene un valore a 32 bit fornito dall'applicazione che l'applicazione può usare per mantenere dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione durante l'elaborazione dei messaggi WM_MEASUREITEM e WM_DRAWITEM. Il valore viene archiviato nel `itemData` membro della struttura fornita con tali messaggi.|
|MF_STRING|Contiene un puntatore a una stringa con terminazione null. Si tratta dell'interpretazione predefinita.|
|MF_SEPARATOR|Il *lpszNewItem* parametro viene ignorato (non necessario).|

*pBmp*<br/>
Punta a un `CBitmap` oggetto che verrà usato come voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

L'applicazione può specificare lo stato della voce di menu impostando i valori nella *nFlags*. Quando *nIDNewItem* specifica un menu a comparsa, diventa parte del menu a cui viene aggiunto. Se tale menu viene eliminato definitivamente, verrà anche eliminato il menu aggiunto. Un menu aggiunto dovrebbe essere scollegato da un `CMenu` oggetto per evitare conflitti. Si noti che MF_STRING e MF_OWNERDRAW non sono validi per la versione di bitmap di `AppendMenu`.

L'elenco seguente descrive i flag che possono essere impostati nel *nFlags*:

- Si comporta come un elemento toggle MF_CHECKED con MF_UNCHECKED per inserire il valore predefinito segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere la [SetMenuItemBitmaps](#setmenuitembitmaps) funzione membro), viene visualizzata la bitmap "segno di spunta su".

- MF_UNCHECKED si comporta come un elemento toggle con MF_CHECKED per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta off".

- MF_DISABLED disabilita la voce di menu in modo che non possono essere selezionato, ma non oscurato.

- MF_ENABLED per consentire la voce di menu può essere selezionato e si esegue il ripristino dallo stato inattivo.

- MF_GRAYED disabilita la voce di menu in modo che non possono essere selezionato e si attenua.

- MF_MENUBARBREAK posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nel menu a comparsa. La nuova colonna di menu a comparsa sarà separata dalla colonna precedente da una linea verticale.

- MF_MENUBREAK posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nel menu a comparsa. Nessuna linea di demarcazione viene inserita tra le colonne.

- MF_OWNERDRAW specifica che l'elemento è un elemento creato dal proprietario. Quando viene visualizzato il menu di scelta per la prima volta, la finestra proprietaria il menu riceve un messaggio WM_MEASUREITEM, che recupera l'altezza e la larghezza della voce di menu. Il messaggio WM_DRAWITEM è quella inviata ogni volta che il proprietario è necessario aggiorna l'aspetto visivo della voce di menu. Questa opzione non è valida per una voce di menu di primo livello.

- MF_POPUP specifica che la voce di menu dispone di un menu a comparsa associato. Il parametro ID specifica un handle per un menu di scelta rapida che deve essere associata all'elemento. Viene utilizzato per l'aggiunta di un menu popup di primo livello o un menu a comparsa gerarchico per una voce di menu a comparsa.

- MF_SEPARATOR Disegna una linea orizzontale. Può essere usato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.

- MF_STRING specifica che la voce di menu è una stringa di caratteri.

Ognuno dei gruppi seguenti sono elencati i flag che si escludono a vicenda e non possono essere usati contemporaneamente:

- MF_DISABLED MF_ENABLED e MF_GRAYED

- MF_STRING, MF_OWNERDRAW, MF_SEPARATOR e la versione di bitmap

- MF_MENUBARBREAK e MF_MENUBREAK

- MF_CHECKED e MF_UNCHECKED

Ogni volta che un menu che si trovano in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu::CreateMenu](#createmenu).

##  <a name="attach"></a>  CMenu::Attach

Collega un menu di Windows esistente a un `CMenu` oggetto.

```
BOOL Attach(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
Specifica un handle a un menu di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha avuto esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione non deve essere chiamata se un menu di scelta è già associato ai `CMenu` oggetto. L'handle di menu viene archiviato nel `m_hMenu` (membro dati).

Se si desidera modificare il menu di scelta è già associato a una finestra, è possibile usare la [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu) funzione per ottenere un handle per il menu di scelta.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]

##  <a name="checkmenuitem"></a>  CMenu::CheckMenuItem

Aggiunge i segni di spunta a o rimuove segni di spunta da voci di menu nel menu a comparsa.

```
UINT CheckMenuItem(
    UINT nIDCheckItem,
    UINT nCheck);
```

### <a name="parameters"></a>Parametri

*nIDCheckItem*<br/>
Specifica la voce di menu da controllare, come determinato dalla *nControllare*.

*nCheck*<br/>
Specifica come verificare la voce di menu e come determinare la posizione dell'elemento nel menu di scelta. Il *nControllare* parametro può essere una combinazione di MF_CHECKED o MF_UNCHECKED con flag MF_BYPOSITION o MF_BYCOMMAND. Questi flag possono essere combinati utilizzando l'operatore OR bit per bit. Hanno i significati seguenti:

- MF_BYCOMMAND specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questa è l'impostazione predefinita.

- MF_BYPOSITION specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.

- Si comporta come un elemento toggle MF_CHECKED con MF_UNCHECKED per inserire il valore predefinito segno di spunta accanto all'elemento.

- MF_UNCHECKED si comporta come un elemento toggle con MF_CHECKED per rimuovere un segno di spunta accanto all'elemento.

### <a name="return-value"></a>Valore restituito

Lo stato precedente dell'elemento: MF_CHECKED o MF_UNCHECKED oppure 0xFFFFFFFF se la voce di menu non esiste.

### <a name="remarks"></a>Note

Il *nIDCheckItem* parametro specifica l'elemento da modificare.

Il *nIDCheckItem* parametro può identificare un menu di scelta rapida, nonché una voce di menu. Non sono necessari passaggi speciali per verificare una voce di menu a comparsa. Voci di menu di primo livello non possono essere controllate. Poiché non dispone di un identificatore di voci di menu associato, una voce di menu a comparsa deve essere selezionata in base alla posizione.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu::GetMenuState](#getmenustate).

##  <a name="checkmenuradioitem"></a>  CMenu::CheckMenuRadioItem

Controlla una voce di menu specificato e lo rende un elemento radio.

```
BOOL CheckMenuRadioItem(
    UINT nIDFirst,
    UINT nIDLast,
    UINT nIDItem,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*nIDFirst*<br/>
Specifica (come un ID o un offset, in base al valore *nFlags*) la prima voce di menu nel gruppo di pulsanti di opzione.

*nIDLast*<br/>
Specifica (come un ID o un offset, in base al valore *nFlags*) l'ultima voce di menu nel gruppo di pulsanti di opzione.

*nIDItem*<br/>
Specifica (come un ID o un offset, in base al valore *nFlags*) l'elemento nel gruppo che verrà controllato con un pulsante di opzione.

*nFlags*<br/>
Specifica l'interpretazione dei *nIDFirst*, *nIDLast*, e *nIDItem* nel modo seguente:

|nFlags|Interpretazione|
|------------|--------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. in caso contrario 0

### <a name="remarks"></a>Note

Allo stesso tempo, la funzione Deseleziona tutte le altre voci di menu del gruppo associato e cancella il flag di tipo radio-item per tali elementi. Elemento selezionato viene visualizzato utilizzando una bitmap radio pulsante (o punto elenco) invece di una bitmap di segno di spunta.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [ON_COMMAND_RANGE](message-map-macros-mfc.md#on_command_range).

##  <a name="cmenu"></a>  CMenu::CMenu

Consente di creare un menu vuoto e lo collega a un `CMenu` oggetto.

```
CMenu();
```

### <a name="remarks"></a>Note

Il menu non viene creato finché non si chiama uno di creare o caricare le funzioni membro di `CMenu:`

- [CreateMenu](#createmenu)

- [CreatePopupMenu](#createpopupmenu)

- [LoadMenu](#loadmenu)

- [LoadMenuIndirect](#loadmenuindirect)

- [Attach](#attach)

##  <a name="createmenu"></a>  CMenu::CreateMenu

Consente di creare un menu di scelta e lo collega al `CMenu` oggetto.

```
BOOL CreateMenu();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il menu di scelta è stato creato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Il menu di scelta è inizialmente vuota. Voci di menu possono essere aggiunti tramite il `AppendMenu` o `InsertMenu` funzione membro.

Se il menu di scelta è assegnato a una finestra, viene eliminato automaticamente quando la finestra viene eliminata.

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non viene assegnato a una finestra. Un'applicazione libera un menu di scelta chiamando il [DestroyMenu](#destroymenu) funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#22](../../mfc/reference/codesnippet/cpp/cmenu-class_2.cpp)]

##  <a name="createpopupmenu"></a>  CMenu::CreatePopupMenu

Consente di creare un menu a comparsa e lo collega al `CMenu` oggetto.

```
BOOL CreatePopupMenu();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il menu di scelta rapida è stato creato con successo; in caso contrario 0.

### <a name="remarks"></a>Note

Il menu di scelta è inizialmente vuota. Voci di menu possono essere aggiunti tramite il `AppendMenu` o `InsertMenu` funzione membro. L'applicazione è possibile aggiungere il menu di scelta rapida a un menu esistente o un menu a comparsa. Il `TrackPopupMenu` funzione membro può essere usata per visualizzare questo menu come menu a comparsa a virgola mobile e per tenere traccia delle selezioni nel menu a comparsa.

Se il menu di scelta è assegnato a una finestra, viene eliminato automaticamente quando la finestra viene eliminata. Se il menu viene aggiunto a un menu esistente, viene eliminato automaticamente quando tale menu viene eliminato definitivamente.

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu a comparsa se il menu di scelta non è assegnato a una finestra. Un'applicazione libera un menu di scelta chiamando il [DestroyMenu](#destroymenu) funzione membro.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu::CreateMenu](#createmenu).

##  <a name="deletemenu"></a>  CMenu::DeleteMenu

Elimina un elemento dal menu di scelta.

```
BOOL DeleteMenu(
    UINT nPosition,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*nPosition*<br/>
Specifica la voce di menu che deve essere eliminato, come determinato dalla *nFlags*.

*nFlags*<br/>
Viene utilizzata per interpretare *Ncorrisponde* nel modo seguente:

|nFlags|Interpretazione di Ncorrisponde|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Se la voce di menu dispone di un menu a comparsa associato `DeleteMenu` Elimina l'handle per il menu di scelta rapida e libera la memoria utilizzata dal menu a comparsa.

Ogni volta che un menu che si trovano in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).

##  <a name="deletetempmap"></a>  CMenu::DeleteTempMap

Chiamato automaticamente dal `CWinApp` gestore tempo di inattività, Elimina temporanei `CMenu` degli oggetti creati dalle [FromHandle](#fromhandle) funzione membro.

```
static void PASCAL DeleteTempMap();
```

### <a name="remarks"></a>Note

`DeleteTempMap` Disconnette l'oggetto menu Windows associata a un elemento temporaneo `CMenu` oggetto prima di eliminare il `CMenu` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#23](../../mfc/reference/codesnippet/cpp/cmenu-class_3.cpp)]

##  <a name="destroymenu"></a>  CMenu::DestroyMenu

Elimina definitivamente il menu e le risorse di Windows che sono state usate.

```
BOOL DestroyMenu();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene eliminato il menu di scelta; in caso contrario 0.

### <a name="remarks"></a>Note

Il menu di scelta non è associata ai `CMenu` dell'oggetto prima di essere eliminato. Il Windows `DestroyMenu` funzione viene chiamata in modo automatico il `CMenu` distruttore.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu::CreateMenu](#createmenu).

##  <a name="detach"></a>  CMenu::Detach

Scollega un menu di Windows da un `CMenu` specificato e restituisce l'handle.

```
HMENU Detach();
```

### <a name="return-value"></a>Valore restituito

L'handle, di tipo HMENU, a un menu di Windows, se ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Note

Il `m_hMenu` membro dati è impostato su NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]

##  <a name="drawitem"></a>  CMenu::DrawItem

Chiamato dal framework quando un aspetto visivo di un menu creato dal proprietario cambia.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Un puntatore a un [DRAWITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagdrawitemstruct) struttura che contiene informazioni sul tipo di disegno necessaria.

### <a name="remarks"></a>Note

Il `itemAction` membro del `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita. Eseguire l'override di questa funzione membro per implementare disegno di un disegno `CMenu` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito *lpDrawItemStruct* prima della chiusura di questa funzione membro.

Visualizzare [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una descrizione del `DRAWITEMSTRUCT` struttura.

### <a name="example"></a>Esempio

Il codice seguente è da MFC [CTRLTEST](../../overview/visual-cpp-samples.md) esempio:

[!code-cpp[NVC_MFCWindowing#24](../../mfc/reference/codesnippet/cpp/cmenu-class_4.cpp)]

##  <a name="enablemenuitem"></a>  CMenu::EnableMenuItem

Abilita, disabilita o attenua una voce di menu.

```
UINT EnableMenuItem(
    UINT nIDEnableItem,
    UINT nEnable);
```

### <a name="parameters"></a>Parametri

*nIDEnableItem*<br/>
Specifica la voce di menu deve essere abilitata, come determinato dalla *nEnable*. Questo parametro può specificare voci di menu a comparsa, nonché le voci di menu standard.

*nEnable*<br/>
Specifica l'azione da intraprendere. Può essere una combinazione di MF_DISABLED, MF_ENABLED o MF_GRAYED, con MF_BYCOMMAND o MF_BYPOSITION. Questi valori possono essere combinati utilizzando l'operatore OR bit per bit. Questi valori hanno i significati seguenti:

- MF_BYCOMMAND specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questa è l'impostazione predefinita.

- MF_BYPOSITION specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.

- MF_DISABLED disabilita la voce di menu in modo che non possono essere selezionato, ma non oscurato.

- MF_ENABLED per consentire la voce di menu può essere selezionato e si esegue il ripristino dallo stato inattivo.

- MF_GRAYED disabilita la voce di menu in modo che non possono essere selezionato e si attenua.

### <a name="return-value"></a>Valore restituito

Stato precedente (MF_DISABLED, MF_ENABLED o MF_GRAYED) o -1 se non è valido.

### <a name="remarks"></a>Note

Il [CreateMenu](#createmenu), [InsertMenu](#insertmenu), [ModifyMenu](#modifymenu), e [LoadMenuIndirect](#loadmenuindirect) funzioni membro possono inoltre impostare lo stato (abilitato, disabilitato o inattivo) di una voce di menu.

Utilizzando il valore MF_BYPOSITION richiede un'applicazione di usare i valori corretti `CMenu`. Se il `CMenu` del menu barra viene usata, è interessata una voce di menu di primo livello (un elemento nella barra dei menu). Per impostare lo stato di un elemento in un menu a comparsa a comparsa o annidato in base alla posizione, è necessario specificare un'applicazione di `CMenu` del menu a comparsa.

Quando un'applicazione specifica il flag MF_BYCOMMAND, Windows controlla tutti gli elementi di menu di scelta rapida che sono subordinati al `CMenu`; pertanto, a meno che non sono presenti voci di menu duplicate, usando il `CMenu` del menu barra è sufficiente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#25](../../mfc/reference/codesnippet/cpp/cmenu-class_5.cpp)]

##  <a name="fromhandle"></a>  CMenu::FromHandle

Restituisce un puntatore a un `CMenu` oggetto dato un handle di Windows a un menu.

```
static CMenu* PASCAL FromHandle(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
Handle Windows per un menu.

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CMenu` che potrebbe essere temporaneo o permanente.

### <a name="remarks"></a>Note

Se un `CMenu` oggetto non è ancora connesso all'oggetto menu Windows, una variabile temporanea `CMenu` oggetto viene creato e collegato.

Questo temporaneo `CMenu` oggetto è valido solo fino alla successiva esecuzione l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, momento in cui vengono eliminati tutti gli oggetti temporanei.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu::CreateMenu](#createmenu).

##  <a name="getdefaultitem"></a>  CMenu::GetDefaultItem

Determina la voce di menu predefinito sul menu specificato.

```
UINT GetDefaultItem(
    UINT gmdiFlags,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*gmdiFlags*<br/>
Valore che specifica come la funzione Cerca le voci di menu. Questo parametro può essere Nessuno, uno o una combinazione dei valori seguenti:

|Value|Significato|
|-----------|-------------|
|GMDI_GOINTOPOPUPS|Specifica che, se l'elemento predefinito è uno che si apre un sottomenu, la funzione è per eseguire la ricerca in modo ricorsivo il sottomenu corrispondente. Se il sottomenu non dispone di alcun elemento predefinito, il valore restituito identifica l'elemento che si apre il sottomenu.<br /><br /> Per impostazione predefinita, la funzione restituisce il primo elemento di impostazione predefinita nel menu specificato, indipendentemente dal tipo di un elemento che si apre un sottomenu.|
|GMDI_USEDISABLED|Specifica che la funzione deve restituire un elemento predefinito, anche se è disabilitato.<br /><br /> Per impostazione predefinita, la funzione ignora elementi disabilitati o inattivi.|

*fByPos*<br/>
Valore che specifica se recuperare l'identificatore della voce di menu o la relativa posizione. Se questo parametro è FALSE, viene restituito l'identificatore. In caso contrario, viene restituita la posizione.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è l'identificatore o la posizione della voce di menu. Se la funzione ha esito negativo, il valore restituito è - 1.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento della funzione Win32 [GetMenuDefaultItem](/windows/desktop/api/winuser/nf-winuser-getmenudefaultitem), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).

##  <a name="getmenucontexthelpid"></a>  CMenu::GetMenuContextHelpId

Recupera l'ID associato alla Guida sensibile al contesto `CMenu`.

```
DWORD GetMenuContextHelpId() const;
```

### <a name="return-value"></a>Valore restituito

La Guida sensibile al contesto ID attualmente associato `CMenu` se presente; in caso contrario, zero.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).

##  <a name="getmenuinfo"></a>  CMenu::GetMenuInfo

Recupera le informazioni per un menu.

```
BOOL GetMenuInfo(LPMENUINFO lpcmi) const;
```

### <a name="parameters"></a>Parametri

*lpcmi*<br/>
Un puntatore a un [MENUINFO](/windows/desktop/api/winuser/ns-winuser-tagmenuinfo) struttura che contiene informazioni per il menu di scelta.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.

### <a name="remarks"></a>Note

Chiamare questa funzione per recuperare informazioni sui menu.

##  <a name="getmenuitemcount"></a>  CMenu::GetMenuItemCount

Determina il numero di elementi in un menu popup di primo livello.

```
UINT GetMenuItemCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di voci del menu se la funzione ha esito positivo. in caso contrario,-1.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).

##  <a name="getmenuitemid"></a>  CMenu::GetMenuItemID

Ottiene l'identificatore della voce di menu per una voce di menu che si trova in corrispondenza della posizione definita da *nPos*.

```
UINT GetMenuItemID(int nPos) const;
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Specifica la posizione (in base zero) della voce di menu viene recuperato il cui ID.

### <a name="return-value"></a>Valore restituito

ID elemento per l'elemento specificato in un menu a comparsa se la funzione ha esito positivo. Se l'elemento specificato è un menu a comparsa (invece di un elemento all'interno del menu a comparsa), il valore restituito è -1. Se *nPos* corrisponde a un separatore di menu, il valore restituito è 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).

##  <a name="getmenuiteminfo"></a>  CMenu::GetMenuItemInfo

Recupera informazioni su una voce di menu.

```
BOOL GetMenuItemInfo(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem*<br/>
Identificatore o la posizione della voce di menu per cui ottenere informazioni. Il significato di questo parametro dipende dal valore di `ByPos`.

*lpMenuItemInfo*<br/>
Un puntatore a un [MENUITEMINFO](/windows/desktop/api/winuser/ns-winuser-tagmenuiteminfoa), come descritto nel SDK di Windows, che contiene informazioni sui menu.

*fByPos*<br/>
Valore che specifica il significato di `nIDItem`. Per impostazione predefinita, `ByPos` è FALSE, che indica che uItem è un identificatore di elemento menu. Se `ByPos` non è impostata su FALSE, indica una posizione di voce di menu.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni sull'errore, usare la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror), come descritto nel SDK di Windows.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del della funzione Win32 [GetMenuItemInfo](/windows/desktop/api/winuser/nf-winuser-getmenuiteminfoa), come descritto nel SDK di Windows. Si noti che nell'implementazione MFC di `GetMenuItemInfo`, non si usa un handle a un menu.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#26](../../mfc/reference/codesnippet/cpp/cmenu-class_6.cpp)]

##  <a name="getmenustate"></a>  CMenu::GetMenuState

Restituisce lo stato della voce di menu specificata o il numero di elementi in un menu a comparsa.

```
UINT GetMenuState(
    UINT nID,
    UINT nFlags) const;
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Specifica l'ID voce di menu, come determinato dalla *nFlags*.

*nFlags*<br/>
Specifica la natura della *nID*. Può essere uno dei valori seguenti:

- MF_BYCOMMAND specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questa è l'impostazione predefinita.

- MF_BYPOSITION specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.

### <a name="return-value"></a>Valore restituito

Il valore è 0xFFFFFFFF se l'elemento specificato non esiste. Se *nId* identifica un menu a comparsa, il byte di ordine superiore contiene il numero di elementi nel menu a comparsa e il byte meno significativi contiene i flag di menu associati nel menu a comparsa. In caso contrario, il valore restituito è una maschera (o booleano) dei valori nell'elenco seguente (questa maschera descrive lo stato del menu che di elemento *nId* identifica):

- Si comporta come un elemento toggle MF_CHECKED con MF_UNCHECKED per inserire il valore predefinito segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta su".

- MF_DISABLED disabilita la voce di menu in modo che non possono essere selezionato, ma non oscurato.

- MF_ENABLED per consentire la voce di menu può essere selezionato e si esegue il ripristino dallo stato inattivo. Si noti che il valore di questa costante è 0. un'applicazione non è consigliabile testare su 0 per esito negativo quando si usa questo valore.

- MF_GRAYED disabilita la voce di menu in modo che non possono essere selezionato e si attenua.

- MF_MENUBARBREAK posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nel menu a comparsa. La nuova colonna di menu a comparsa sarà separata dalla colonna precedente da una linea verticale.

- MF_MENUBREAK posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nel menu a comparsa. Nessuna linea di demarcazione viene inserita tra le colonne.

- MF_SEPARATOR Disegna una linea orizzontale. Può essere usato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.

- MF_UNCHECKED si comporta come un elemento toggle con MF_CHECKED per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta off". Si noti che il valore di questa costante è 0. un'applicazione non è consigliabile testare su 0 per esito negativo quando si usa questo valore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#27](../../mfc/reference/codesnippet/cpp/cmenu-class_7.cpp)]

##  <a name="getmenustring"></a>  CMenu::GetMenuString

Copia l'etichetta della voce di menu specificata nel buffer specificato.

```
int GetMenuString(
    UINT nIDItem,
    LPTSTR lpString,
    int nMaxCount,
    UINT nFlags) const;

int GetMenuString(
    UINT nIDItem,
    CString& rString,
    UINT nFlags) const;
```

### <a name="parameters"></a>Parametri

*nIDItem*<br/>
Specifica l'identificatore di tipo integer della voce di menu o l'offset della voce di menu nel menu, in base al valore *nFlags*.

*lpString*<br/>
Punta al buffer che riceverà l'etichetta.

*rString*<br/>
Un riferimento a un `CString` oggetto che deve ricevere la stringa copiata dal menu.

*nMaxCount*<br/>
Specifica la lunghezza massima (in caratteri) dell'etichetta deve essere copiato. Se l'etichetta è più lungo rispetto al valore massimo specificato nella *nMaxCount*, i caratteri aggiuntivi vengono troncati.

*nFlags*<br/>
Specifica l'interpretazione del *nIDItem* parametro. Può essere uno dei valori seguenti:

|nFlags|Interpretazione di nIDItem|
|------------|-------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|

### <a name="return-value"></a>Valore restituito

Specifica il numero effettivo di caratteri copiati nel buffer, senza includere il carattere di terminazione null.

### <a name="remarks"></a>Note

Il *nMaxCount* parametro deve essere più ampio rispetto al numero di caratteri nell'etichetta per contenere il carattere null che termina una stringa.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).

##  <a name="getsafehmenu"></a>  CMenu::GetSafeHmenu

Restituisce l'elemento HMENU sottoposto a wrapping da questo `CMenu` oggetto o un valore NULL`CMenu` puntatore.

```
HMENU GetSafeHmenu() const;
```

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu::LoadMenu](#loadmenu).

##  <a name="getsubmenu"></a>  CMenu::GetSubMenu

Recupera il `CMenu` oggetto di un menu a comparsa.

```
CMenu* GetSubMenu(int nPos) const;
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Specifica la posizione del menu a comparsa contenuta nel menu di scelta. I valori di posizione iniziano da 0 per la prima voce di menu. Identificatore del menu a comparsa non può essere utilizzato in questa funzione.

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CMenu` il cui `m_hMenu` membro contiene un handle per il menu di scelta rapida se non esiste un menu di scelta rapida in corrispondenza della posizione specificata; in caso contrario, NULL. Se un `CMenu` oggetto non esiste, quindi viene creato uno temporaneo. Il `CMenu` puntatore restituito non deve essere archiviato.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu::TrackPopupMenu](#trackpopupmenu).

##  <a name="insertmenu"></a>  CMenu::InsertMenu

Inserisce una nuova voce di menu in corrispondenza della posizione specificata da *Ncorrisponde* e sposta gli altri elementi di menu a discesa.

```
BOOL InsertMenu(
    UINT nPosition,
    UINT nFlags,
    UINT_PTR nIDNewItem = 0,
    LPCTSTR lpszNewItem = NULL);

BOOL InsertMenu(
    UINT nPosition,
    UINT nFlags,
    UINT_PTR nIDNewItem,
    const CBitmap* pBmp);
```

### <a name="parameters"></a>Parametri

*nPosition*<br/>
Specifica la voce di menu prima che la nuova voce di menu deve essere inserito. Il *nFlags* parametro può essere usato per interpretare *Ncorrisponde* nei modi seguenti:

|nFlags|Interpretazione di Ncorrisponde|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0. Se *Ncorrisponde* è -1, la nuova voce di menu viene aggiunto alla fine del menu.|

*nFlags*<br/>
Specifica la modalità *Ncorrisponde* viene interpretato e specifica le informazioni sullo stato della nuova voce di menu quando questo viene aggiunto al menu di scelta. Per un elenco di flag che possono essere impostati, vedere la [AppendMenu](#appendmenu) funzione membro. Per specificare più valori, usare l'operatore OR bit per bit combinarli con il flag MF_BYCOMMAND o MF_BYPOSITION.

*nIDNewItem*<br/>
Specifica l'ID di comando di nuova voce di menu oppure, se *nFlags* è impostato su MF_POPUP, l'handle di menu (HMENU) del menu a comparsa. Il *nIDNewItem* parametro viene ignorato (non necessaria) se *nFlags* è impostato su MF_SEPARATOR.

*lpszNewItem*<br/>
Specifica il contenuto della nuova voce di menu. *nFlags* può essere utilizzato per interpretare *lpszNewItem* nei modi seguenti:

|nFlags|Interpretazione di lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contiene un valore a 32 bit fornito dall'applicazione che l'applicazione può usare per mantenere dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione nel `itemData` membro della struttura fornita dal [WM_MEASUREITEM](/windows/desktop/Controls/wm-measureitem) e [WM_DRAWITEM](/windows/desktop/Controls/wm-drawitem) messaggi. Questi messaggi vengono inviati quando la voce di menu deve essere visualizzata inizialmente o viene modificata.|
|MF_STRING|Contiene un puntatore a una stringa con terminazione null di tipo long. Si tratta dell'interpretazione predefinita.|
|MF_SEPARATOR|Il *lpszNewItem* parametro viene ignorato (non necessario).|

*pBmp*<br/>
Punta a un `CBitmap` oggetto che verrà usato come voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

L'applicazione può specificare lo stato della voce di menu impostando i valori nella *nFlags*.

Ogni volta che un menu che si trovano in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.

Quando *nIDNewItem* specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se tale menu viene eliminato definitivamente, verrà anche eliminato il menu inserito. Un menu inserito deve essere scollegato da un `CMenu` oggetto per evitare conflitti.

Se attiva ingrandita finestra figlio MDI (interfaccia) a documenti multipli e un'applicazione inserisce un menu a comparsa in menu dell'applicazione MDI chiamando questa funzione e si specifica che il flag MF_BYPOSITION, il menu di scelta è inserita una posizione verso sinistra rispetto a è previsto. Ciò accade perché il menu di controllo della finestra figlio MDI attiva viene inserito nella prima posizione della barra dei menu della finestra cornice MDI. Per posizionare il menu di scelta in modo corretto, l'applicazione deve aggiungere 1 al valore di posizione che sarebbe altrimenti usato. Un'applicazione può utilizzare il messaggio WM_MDIGETACTIVE per determinare se la finestra figlio attualmente attiva è ingrandita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#28](../../mfc/reference/codesnippet/cpp/cmenu-class_8.cpp)]

##  <a name="insertmenuitem"></a>  CMenu::InsertMenuItem

Inserisce una nuova voce di menu in corrispondenza della posizione specificata in un menu.

```
BOOL InsertMenuItem(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem*<br/>
Vedere la descrizione della *uItem* nelle [InsertMenuItem](/windows/desktop/api/winuser/nf-winuser-insertmenuitema) nel SDK di Windows.

*lpMenuItemInfo*<br/>
Vedere la descrizione della *lpmii* in `InsertMenuItem` nel SDK di Windows.

*fByPos*<br/>
Vedere la descrizione della *fByPosition* in `InsertMenuItem` nel SDK di Windows.

### <a name="remarks"></a>Note

Questa funzione esegue il wrapping [InsertMenuItem](/windows/desktop/api/winuser/nf-winuser-insertmenuitema), come descritto nel SDK di Windows.

##  <a name="loadmenu"></a>  CMenu::LoadMenu

Carica una risorsa di menu dal file eseguibile dell'applicazione e lo collega al `CMenu` oggetto.

```
BOOL LoadMenu(LPCTSTR lpszResourceName);
BOOL LoadMenu(UINT nIDResource);
```

### <a name="parameters"></a>Parametri

*lpszResourceName*<br/>
Punta a una stringa con terminazione null che contiene il nome della risorsa di menu da caricare.

*nIDResource*<br/>
Specifica l'ID del menu della risorsa di menu da caricare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la risorsa di menu è stata caricata correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non viene assegnato a una finestra. Un'applicazione libera un menu di scelta chiamando il [DestroyMenu](#destroymenu) funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#29](../../mfc/reference/codesnippet/cpp/cmenu-class_9.cpp)]

##  <a name="loadmenuindirect"></a>  CMenu::LoadMenuIndirect

Carica una risorsa da un modello dal menu in memoria e lo collega al `CMenu` oggetto.

```
BOOL LoadMenuIndirect(const void* lpMenuTemplate);
```

### <a name="parameters"></a>Parametri

*lpMenuTemplate*<br/>
Punta a un modello di menu (ovvero un singolo [MENUITEMTEMPLATEHEADER](/windows/desktop/api/winuser/ns-winuser-menuitemtemplateheader) struttura e una raccolta di uno o più [MENUITEMTEMPLATE](/windows/desktop/api/winuser/ns-winuser-menuitemtemplate) strutture). Per altre informazioni su queste due strutture, vedere il SDK di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la risorsa di menu è stata caricata correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Un modello di menu è un'intestazione seguita da una raccolta di uno o più [MENUITEMTEMPLATE](/windows/desktop/api/winuser/ns-winuser-menuitemtemplate) strutture, ognuno dei quali può contenere uno o più voci di menu e menu di scelta rapida.

Il numero di versione deve essere 0.

Il `mtOption` flag devono includere MF_END per l'ultimo elemento in un elenco popup e per l'ultimo elemento nell'elenco principale. Vedere il `AppendMenu` funzione membro per gli altri flag. Il `mtId` membro deve essere omessa dalla struttura MENUITEMTEMPLATE quando MF_POPUP viene specificato in `mtOption`.

Lo spazio allocato per la struttura MENUITEMTEMPLATE deve essere sufficientemente grande per `mtString` per contenere il nome della voce di menu sotto forma di stringa con terminazione null.

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non viene assegnato a una finestra. Un'applicazione libera un menu di scelta chiamando il [DestroyMenu](#destroymenu) funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#30](../../mfc/reference/codesnippet/cpp/cmenu-class_10.cpp)]

##  <a name="m_hmenu"></a>  CMenu::m_hMenu

Specifica l'handle HMENU del menu di Windows associato ai `CMenu` oggetto.

```
HMENU m_hMenu;
```

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu::LoadMenu](#loadmenu).

##  <a name="measureitem"></a>  CMenu::MeasureItem

Chiamato dal framework quando viene creato un menu con lo stile di disegno.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct*<br/>
Un puntatore a un `MEASUREITEMSTRUCT` struttura.

### <a name="remarks"></a>Note

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare il `MEASUREITEMSTRUCT` struttura informa Windows delle dimensioni del menu.

Visualizzare [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una descrizione del `MEASUREITEMSTRUCT` struttura.

### <a name="example"></a>Esempio

Il codice seguente è da MFC [CTRLTEST](../../overview/visual-cpp-samples.md) esempio:

[!code-cpp[NVC_MFCWindowing#31](../../mfc/reference/codesnippet/cpp/cmenu-class_11.cpp)]

##  <a name="modifymenu"></a>  CMenu::ModifyMenu

Modifica una voce di menu esistenti in corrispondenza della posizione specificata da *Ncorrisponde*.

```
BOOL ModifyMenu(
    UINT nPosition,
    UINT nFlags,
    UINT_PTR nIDNewItem = 0,
    LPCTSTR lpszNewItem = NULL);

BOOL ModifyMenu(
    UINT nPosition,
    UINT nFlags,
    UINT_PTR nIDNewItem,
    const CBitmap* pBmp);
```

### <a name="parameters"></a>Parametri

*nPosition*<br/>
Specifica la voce di menu da modificare. Il *nFlags* parametro può essere usato per interpretare *Ncorrisponde* nei modi seguenti:

|nFlags|Interpretazione di Ncorrisponde|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|

*nFlags*<br/>
Specifica la modalità *Ncorrisponde* viene interpretato e fornisce informazioni sulle modifiche da apportare alla voce di menu. Per un elenco di flag che possono essere impostati, vedere la [AppendMenu](#appendmenu) funzione membro.

*nIDNewItem*<br/>
Specifica l'ID di comando della voce di menu modificata oppure, se *nFlags* è impostato su MF_POPUP, l'handle di menu (HMENU) di un menu a comparsa. Il *nIDNewItem* parametro viene ignorato (non necessaria) se *nFlags* è impostato su MF_SEPARATOR.

*lpszNewItem*<br/>
Specifica il contenuto della nuova voce di menu. Il *nFlags* parametro può essere usato per interpretare *lpszNewItem* nei modi seguenti:

|nFlags|Interpretazione di lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contiene un valore a 32 bit fornito dall'applicazione che l'applicazione può usare per mantenere dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione durante l'elaborazione MF_MEASUREITEM e MF_DRAWITEM.|
|MF_STRING|Contiene un puntatore di tipo long a una stringa con terminazione null o a un `CString`.|
|MF_SEPARATOR|Il *lpszNewItem* parametro viene ignorato (non necessario).|

*pBmp*<br/>
Punta a un `CBitmap` oggetto che verrà usato come voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

L'applicazione specifica il nuovo stato della voce di menu impostando i valori nella *nFlags*. Se questa funzione sostituisce un menu a comparsa associato con la voce di menu, Elimina in modo permanente nel precedente menu a comparsa e libera la memoria usata dal menu a comparsa.

Quando *nIDNewItem* specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se tale menu viene eliminato definitivamente, verrà anche eliminato il menu inserito. Un menu inserito deve essere scollegato da un `CMenu` oggetto per evitare conflitti.

Ogni volta che un menu che si trovano in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`. Per modificare gli attributi di voci di menu esistenti, è molto più veloce usare il `CheckMenuItem` e `EnableMenuItem` funzioni membro.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).

##  <a name="operator_hmenu"></a>  CMenu::operator HMENU

Utilizzare questo operatore per recuperare l'handle del `CMenu` oggetto.

```
operator HMENU() const;
```

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, l'handle del `CMenu` oggetto; in caso contrario, NULL.

### <a name="remarks"></a>Note

È possibile usare l'handle per chiamare direttamente le API di Windows.

##  <a name="operator_neq"></a>  CMenu::operator! =

Determina se due menu logicamente non sono uguali.

```
BOOL operator!=(const CMenu& menu) const;
```

### <a name="parameters"></a>Parametri

*menu*<br/>
Oggetto `CMenu` oggetto per il confronto.

### <a name="remarks"></a>Note

Verifica se un oggetto menu sul lato sinistro non è uguale a un oggetto menu sul lato destro.

##  <a name="operator_eq_eq"></a>  CMenu::operator ==

Determina se due menu sono uguali.

```
BOOL operator==(const CMenu& menu) const;
```

### <a name="parameters"></a>Parametri

*menu*<br/>
Oggetto `CMenu` oggetto per il confronto.

### <a name="remarks"></a>Note

Verifica se un oggetto menu sul lato sinistro è uguale (in termini di valore HMENU) a un oggetto menu sul lato destro.

##  <a name="removemenu"></a>  CMenu::RemoveMenu

Elimina una voce di menu con un menu a comparsa associato dal menu di scelta.

```
BOOL RemoveMenu(
    UINT nPosition,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*nPosition*<br/>
Specifica la voce di menu da rimuovere. Il *nFlags* parametro può essere usato per interpretare *Ncorrisponde* nei modi seguenti:

|nFlags|Interpretazione di Ncorrisponde|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|

*nFlags*<br/>
Specifica la modalità *Ncorrisponde* viene interpretato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Ma non elimina l'handle per un menu a comparsa, in modo che il menu può essere riutilizzato. Prima di chiamare questa funzione, l'applicazione può chiamare le `GetSubMenu` funzione di membro per recuperare il popup `CMenu` oggetto per il riutilizzo.

Ogni volta che un menu che si trovano in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).

##  <a name="setdefaultitem"></a>  CMenu::SetDefaultItem

Imposta la voce di menu predefinito per il menu di scelta specificato.

```
BOOL SetDefaultItem(
    UINT uItem,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem*<br/>
Identificatore o la posizione della nuova voce di menu predefinito o - 1 per nessun elemento predefinito. Il significato di questo parametro dipende dal valore della *fByPos*.

*fByPos*<br/>
Valore che specifica il significato dei *uItem*. Se questo parametro è FALSE, *uItem* è un identificatore di elemento menu. In caso contrario, è una posizione di voce di menu.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni sull'errore, usare la funzione Win32 [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror), come descritto nel SDK di Windows.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento della funzione Win32 [SetMenuDefaultItem](/windows/desktop/api/winuser/nf-winuser-setmenudefaultitem), come descritto nel SDK di Windows.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).

##  <a name="setmenucontexthelpid"></a>  CMenu::SetMenuContextHelpId

Associa un ID di contesto della Guida in linea con `CMenu`.

```
BOOL SetMenuContextHelpId(DWORD dwContextHelpId);
```

### <a name="parameters"></a>Parametri

*dwContextHelpId*<br/>
ID del contesto della Guida da associare `CMenu`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. in caso contrario 0

### <a name="remarks"></a>Note

Tutti gli elementi nel menu di condivideranno questo identificatore, ovvero non è possibile collegare un identificatore di contesto della Guida per le singole voci di menu.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).

##  <a name="setmenuinfo"></a>  CMenu::SetMenuInfo

Imposta le informazioni per un menu.

```
BOOL SetMenuInfo(LPCMENUINFO lpcmi);
```

### <a name="parameters"></a>Parametri

*lpcmi*<br/>
Un puntatore a un [MENUINFO](/windows/desktop/api/winuser/ns-winuser-tagmenuinfo) struttura che contiene informazioni per il menu di scelta.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.

### <a name="remarks"></a>Note

Chiamare questa funzione per impostare informazioni specifiche su nel menu.

##  <a name="setmenuitembitmaps"></a>  CMenu::SetMenuItemBitmaps

Associa le mappe di bit specificato a una voce di menu.

```
BOOL SetMenuItemBitmaps(
    UINT nPosition,
    UINT nFlags,
    const CBitmap* pBmpUnchecked,
    const CBitmap* pBmpChecked);
```

### <a name="parameters"></a>Parametri

*nPosition*<br/>
Specifica la voce di menu da modificare. Il *nFlags* parametro può essere usato per interpretare *Ncorrisponde* nei modi seguenti:

|nFlags|Interpretazione di Ncorrisponde|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|

*nFlags*<br/>
Specifica la modalità *Ncorrisponde* viene interpretato.

*pBmpUnchecked*<br/>
Specifica la bitmap da utilizzare per voci di menu che non vengono controllate.

*pBmpChecked*<br/>
Specifica la bitmap da utilizzare per voci di menu che vengono controllati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Se la voce di menu è selezionata o deselezionata, Windows visualizza il bitmap appropriate accanto alla voce di menu.

Se uno dei due *pBmpUnchecked* oppure *pBmpChecked* è NULL, Windows verrà visualizzato nulla accanto alla voce di menu per l'attributo corrispondente. Se entrambi i parametri sono NULL, Windows Usa il segno di spunta predefinita quando l'elemento è selezionato e consente di rimuovere il segno di spunta se l'elemento è deselezionata.

Quando viene eliminato il menu di scelta, tali bitmap non vengono eliminati definitivamente; l'applicazione deve eliminarle definitivamente.

Il Windows `GetMenuCheckMarkDimensions` funzione recupera le dimensioni del segno di spunta predefinito usato per le voci di menu. L'applicazione usa questi valori per determinare le dimensioni appropriate per le bitmap fornite con questa funzione. Ottenere le dimensioni, creare i vostri bitmap e quindi impostarli.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#32](../../mfc/reference/codesnippet/cpp/cmenu-class_12.cpp)]

[!code-cpp[NVC_MFCWindowing#33](../../mfc/reference/codesnippet/cpp/cmenu-class_13.cpp)]

##  <a name="setmenuiteminfo"></a>  CMenu::SetMenuItemInfo

Modificare le informazioni su una voce di menu.

```
BOOL SetMenuItemInfo(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem*<br/>
Vedere la descrizione della *uItem* nelle [SetMenuItemInfo](/windows/desktop/api/winuser/nf-winuser-setmenuiteminfoa) nel SDK di Windows.

*lpMenuItemInfo*<br/>
Vedere la descrizione della *lpmii* in `SetMenuItemInfo` nel SDK di Windows.

*fByPos*<br/>
Vedere la descrizione della *fByPosition* in `SetMenuItemInfo` nel SDK di Windows.

### <a name="remarks"></a>Note

Questa funzione esegue il wrapping [SetMenuItemInfo](/windows/desktop/api/winuser/nf-winuser-setmenuiteminfoa), come descritto nel SDK di Windows.

##  <a name="trackpopupmenu"></a>  CMenu::TrackPopupMenu

Consente di visualizzare un menu a comparsa a virgola mobile in corrispondenza della posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.

```
BOOL TrackPopupMenu(
    UINT nFlags,
    int x,
    int y,
    CWnd* pWnd,
    LPCRECT lpRect = 0);
```

### <a name="parameters"></a>Parametri

*nFlags*<br/>
Specifica i flag di posizione sullo schermo e posizione del mouse. Visualizzare [TrackPopupMenu](/windows/desktop/api/winuser/nf-winuser-trackpopupmenu) per un elenco di flag disponibili.

*x*<br/>
Specifica la posizione orizzontale in coordinate dello schermo del menu a comparsa. In base al valore di *nFlags* parametro, il menu può essere allineato a sinistra, allineati a destra oppure centrato rispetto a questa posizione.

*y*<br/>
Specifica la posizione verticale in coordinate dello schermo della parte superiore del menu sullo schermo.

*pWnd*<br/>
Identifica la finestra proprietaria del menu a comparsa. Questo parametro non può essere NULL, anche se viene specificato il flag TPM_NONOTIFY. In questa finestra riceve tutti i messaggi WM_COMMAND dal menu di scelta. In Windows 3.1 e versioni successive, la finestra non riceverà messaggi WM_COMMAND finché `TrackPopupMenu` restituisce. Nella versione 3.0 di Windows, la finestra riceve i messaggi WM_COMMAND prima `TrackPopupMenu` restituisce.

*lpRect*<br/>
Ignorato.

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce il risultato della chiamata al metodo [TrackPopupMenu](/windows/desktop/api/winuser/nf-winuser-trackpopupmenu) nel SDK di Windows.

### <a name="remarks"></a>Note

Un menu a comparsa a virgola mobile può trovarsi in qualsiasi punto sullo schermo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#34](../../mfc/reference/codesnippet/cpp/cmenu-class_14.cpp)]

##  <a name="trackpopupmenuex"></a>  CMenu::TrackPopupMenuEx

Consente di visualizzare un menu a comparsa a virgola mobile in corrispondenza della posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.

```
BOOL TrackPopupMenuEx(
    UINT fuFlags,
    int x,
    int y,
    CWnd* pWnd,
    LPTPMPARAMS lptpm);
```

### <a name="parameters"></a>Parametri

*fuFlags*<br/>
Specifica diverse funzioni per i menu esteso. Per un elenco di tutti i valori e il relativo significato, vedere [TrackPopupMenuEx](/windows/desktop/api/winuser/nf-winuser-trackpopupmenuex).

*x*<br/>
Specifica la posizione orizzontale in coordinate dello schermo del menu a comparsa.

*y*<br/>
Specifica la posizione verticale in coordinate dello schermo della parte superiore del menu sullo schermo.

*pWnd*<br/>
Puntatore alla finestra proprietaria del menu a comparsa e la ricezione di messaggi dal menu creato. In questa finestra può essere qualsiasi finestra dall'applicazione corrente ma non può essere NULL. Se si specifica TPM_NONOTIFY nel *fuFlags* parametro, la funzione non inviare messaggi a *pWnd*. La funzione deve restituire per la finestra a cui punta *pWnd* per ricevere il messaggio WM_COMMAND.

*lptpm*<br/>
Puntatore a un [TPMPARAMS](/windows/desktop/api/winuser/ns-winuser-tagtpmparams) struttura che specifica un'area dello schermo nel menu non deve sovrapporsi. Questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Se si specifica TPM_RETURNCMD nel *fuFlags* parametro, il valore restituito è l'identificatore della voce di menu dell'elemento selezionato dall'utente. Se l'utente annulla il menu senza effettuare una selezione oppure se si verifica un errore, il valore restituito è 0.

Se non si specifica TPM_RETURNCMD nel *fuFlags* parametro, il valore restituito è diverso da zero se la funzione ha esito positivo e 0 in caso di errore. Per ottenere informazioni sull'errore, chiamare [GetLastError](/windows/desktop/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Note

Un menu a comparsa a virgola mobile può trovarsi in qualsiasi punto sullo schermo. Per altre informazioni sulla gestione degli errori durante la creazione di menu a comparsa, vedere [TrackPopupMenuEx](/windows/desktop/api/winuser/nf-winuser-trackpopupmenuex).

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLTEST](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC DYNAMENU](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
