---
title: Classe CMenu
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
ms.openlocfilehash: 5ec97d8cf039034078f29b38fb6a41d6ff9a5e53
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369973"
---
# <a name="cmenu-class"></a>Classe CMenu

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
|[CMenu::AppendMenu](#appendmenu)|Aggiunge una nuova voce alla fine di questo menu.|
|[MenuC::Associare](#attach)|Associa un handle di menu `CMenu` di Windows a un oggetto.|
|[CMenu::CheckMenuItem](#checkmenuitem)|Posiziona o rimuove un segno di spunta da una voce di menu nel menu a comparsa.|
|[CMenu::CheckMenuRadioItem](#checkmenuradioitem)|Posiziona un pulsante di opzione accanto a una voce di menu e rimuove il pulsante di opzione da tutte le altre voci di menu del gruppo.|
|[CMenu::CreateMenu](#createmenu)|Crea un menu vuoto e lo `CMenu` associa a un oggetto.|
|[CMenu::CreatePopupMenu](#createpopupmenu)|Crea un menu a comparsa vuoto e `CMenu` lo associa a un oggetto.|
|[MenuC::DeleteMenu](#deletemenu)|Elimina una voce specificata dal menu. Se alla voce di menu è associato un menu a comparsa, l'handle viene eliminato nel menu a comparsa e la memoria da essa utilizzata.|
|[CMenu::DeleteTempMap](#deletetempmap)|Elimina tutti `CMenu` gli oggetti `FromHandle` temporanei creati dalla funzione membro.|
|[Menu::DestroyMenu](#destroymenu)|Elimina il menu associato `CMenu` a un oggetto e libera qualsiasi memoria occupata dal menu.|
|[CMenu::Detach](#detach)|Scollega un handle di `CMenu` menu di Windows da un oggetto e restituisce l'handle.|
|[Menu::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di un menu disegnato dal proprietario viene modificato.|
|[CMenu::EnableMenuItem](#enablemenuitem)|Abilita, disabilita o attenua (grigi) una voce di menu.|
|[CMenu::FromHandle](#fromhandle)|Restituisce un `CMenu` puntatore a un oggetto dato un handle di menu di Windows.|
|[CMenu::GetDefaultItem](#getdefaultitem)|Determina la voce di menu predefinita nel menu specificato.|
|[CMenu::GetMenuContextHelpId](#getmenucontexthelpid)|Recupera l'ID di scelta rapida della Guida associato al menu.|
|[CMenu::GetMenuInfo](#getmenuinfo)|Recupera informazioni in un menu specifico.|
|[CMenu::GetMenuItemCount](#getmenuitemcount)|Determina il numero di elementi in un menu a comparsa o di primo livello.|
|[CMenu::GetMenuItemID](#getmenuitemid)|Ottiene l'identificatore della voce di menu per una voce di menu situata nella posizione specificata.|
|[CMenu::GetMenuItemInfo](#getmenuiteminfo)|Recupera informazioni su una voce di menu.|
|[CMenu::GetMenuState](#getmenustate)|Restituisce lo stato della voce di menu specificata o il numero di voci in un menu a comparsa.|
|[CMenu::GetMenuString](#getmenustring)|Recupera l'etichetta della voce di menu specificata.|
|[CMenu::GetSafeHmenu](#getsafehmenu)|Restituisce `m_hMenu` l'oggetto di cui è `CMenu` stato eseguito il wrapping.|
|[CMenu::GetSubMenu](#getsubmenu)|Recupera un puntatore a un menu a comparsa.|
|[CMenu::InsertMenu](#insertmenu)|Inserisce una nuova voce di menu nella posizione specificata, spostando le altre voci verso il basso nel menu.|
|[CMenu::InsertMenuItem](#insertmenuitem)|Inserisce una nuova voce di menu nella posizione specificata in un menu.|
|[CMenu::LoadMenu](#loadmenu)|Carica una risorsa di menu dal file eseguibile e la associa a un `CMenu` oggetto.|
|[CMenu::LoadMenuIndiretto](#loadmenuindirect)|Carica un menu da un modello di menu `CMenu` in memoria e lo associa a un oggetto.|
|[CMenu::MeasureItem](#measureitem)|Chiamato dal framework per determinare le dimensioni del menu quando viene creato un menu disegnato dal proprietario.|
|[CMenu::ModifyMenu](#modifymenu)|Modifica una voce di menu esistente nella posizione specificata.|
|[CMenu::RemoveMenu](#removemenu)|Elimina una voce di menu con un menu a comparsa associato dal menu specificato.|
|[CMenu::SetDefaultItem](#setdefaultitem)|Imposta la voce di menu predefinita per il menu specificato.|
|[CMenu::SetMenuContextHelpId](#setmenucontexthelpid)|Imposta l'ID di scelta rapida della Guida da associare al menu.|
|[CMenu::SetMenuInfo](#setmenuinfo)|Imposta le informazioni su un menu specifico.|
|[CMenu::SetMenuItemBitmaps](#setmenuitembitmaps)|Associa le bitmap di segni di spunta specificate a una voce di menu.|
|[CMenu::SetMenuItemInfo](#setmenuiteminfo)|Modifica le informazioni su una voce di menu.|
|[CMenu::TrackPopupMenu](#trackpopupmenu)|Visualizza un menu a comparsa mobile nella posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.|
|[CMenu::TrackPopupMenuEx](#trackpopupmenuex)|Visualizza un menu a comparsa mobile nella posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu::operatore HMENU](#operator_hmenu)|Recupera l'handle dell'oggetto menu.|
|[CMenu::operator !](#operator_neq)|Determina se due oggetti di menu non sono uguali.|
|[CMenu::operatore](#operator_eq_eq)|Determina se due oggetti di menu sono uguali.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu::m_hMenu](#m_hmenu)|Specifica l'handle del menu Finestre `CMenu` associato all'oggetto.|

## <a name="remarks"></a>Osservazioni

Fornisce funzioni membro per la creazione, il rilevamento, l'aggiornamento e l'eliminazione di un menu.

Creare `CMenu` un oggetto nello stack frame come `CMenu`locale, quindi chiamare 's funzioni membro per modificare il nuovo menu in base alle esigenze. Successivamente, chiamare [CWnd::SetMenu](../../mfc/reference/cwnd-class.md#setmenu) per impostare il menu su una `CMenu` finestra, seguita immediatamente da una chiamata alla funzione membro [Detach](#detach) dell'oggetto. La `CWnd::SetMenu` funzione membro imposta il menu della finestra per il nuovo menu, fa sì che la finestra da ridisegnare per riflettere la modifica del menu e passa anche la proprietà del menu alla finestra. La chiamata `Detach` a scollega l'Oggetto HMENU dall'oggetto, `CMenu` in modo che quando la variabile locale `CMenu` passa all'esterno dell'ambito, il distruttore dell'oggetto `CMenu` non tenti di eliminare un menu di cui non è più proprietario. Il menu stesso viene automaticamente distrutto quando la finestra viene distrutta.

È possibile utilizzare il [LoadMenuIndirect](#loadmenuindirect) funzione membro per creare un menu da un modello in memoria, ma un menu creato da una risorsa da una chiamata a [LoadMenu](#loadmenu) è più facilmente mantenuto e la risorsa di menu stessa può essere creata e modificata dall'editor di menu.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMenu`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cmenuappendmenu"></a><a name="appendmenu"></a>CMenu::AppendMenu

Aggiunge una nuova voce alla fine di un menu.

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

*Nflags*<br/>
Specifica le informazioni sullo stato della nuova voce di menu quando viene aggiunta al menu. È costituito da uno o più valori elencati nella sezione Osservazioni.

*nIDNewItem (elemento nIDNewItem)*<br/>
Specifica l'ID di comando della nuova voce di menu o, se `HMENU` *nFlags* è impostato su MF_POPUP, l'handle di menu ( ) di un menu a comparsa. Il parametro *nIDNewItem* viene ignorato (non necessario) se *nFlags* è impostato su MF_SEPARATOR.

*lpszNewItem (informazioni in due)*<br/>
Specifica il contenuto della nuova voce di menu. Il parametro *nFlags* viene utilizzato per interpretare *lpszNewItem* nel modo seguente:

|Nflags|Interpretazione di lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contiene un valore a 32 bit fornito dall'applicazione che l'applicazione può utilizzare per gestire dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione quando elabora i messaggi di WM_MEASUREITEM e WM_DRAWITEM. Il valore viene `itemData` archiviato nel membro della struttura fornito con tali messaggi.|
|MF_STRING|Contiene un puntatore a una stringa con terminazione null. Questa è l'interpretazione predefinita.|
|MF_SEPARATOR|Il parametro *lpszNewItem* viene ignorato (non necessario).|

*pBmp*<br/>
Punta a `CBitmap` un oggetto che verrà utilizzato come voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'applicazione può specificare lo stato della voce di menu impostando i valori in *nFlags*. Quando *nIDNewItem* specifica un menu a comparsa, diventa parte del menu a cui viene aggiunto. Se tale menu viene eliminato, verrà eliminato anche il menu aggiunto. Un menu aggiunto deve essere `CMenu` scollegato da un oggetto per evitare conflitti. Si noti che MF_STRING e MF_OWNERDRAW `AppendMenu`non sono validi per la versione bitmap di .

Nell'elenco seguente vengono descritti i flag che possono essere impostati in *nFlags*:

- MF_CHECKED funge da interruttore con MF_UNCHECKED per inserire il segno di spunta predefinito accanto all'elemento. Quando l'applicazione fornisce bitmap di segno di spunta (vedere la funzione membro [SetMenuItemBitmaps),](#setmenuitembitmaps) viene visualizzata la bitmap "segno di spunta su".

- MF_UNCHECKED funge da interruttore con MF_CHECKED per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce bitmap di segno `SetMenuItemBitmaps` di spunta (vedere la funzione membro), viene visualizzata la bitmap "segno di spunta disattivato".

- MF_DISABLED Disabilita la voce di menu in modo che non possa essere selezionata ma non la dim.

- MF_ENABLED Abilita la voce di menu in modo che possa essere selezionata e la ripristina dallo stato disattivato.

- MF_GRAYED Disabilita la voce di menu in modo che non possa essere selezionata e la attenua.

- MF_MENUBARBREAK Inserisce l'elemento in una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. La nuova colonna del menu a comparsa sarà separata dalla colonna precedente da una linea di divisione verticale.

- MF_MENUBREAK Posiziona l'elemento in una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. Non viene inserita alcuna linea di divisione tra le colonne.

- MF_OWNERDRAW Specifica che l'elemento è un elemento disegnato dal proprietario. Quando il menu viene visualizzato per la prima volta, la finestra proprietaria del menu riceve un messaggio di WM_MEASUREITEM, che recupera l'altezza e la larghezza della voce di menu. Il messaggio WM_DRAWITEM è quello inviato ogni volta che il proprietario deve aggiornare l'aspetto visivo della voce di menu. Questa opzione non è valida per una voce di menu di primo livello.

- MF_POPUP Specifica che alla voce di menu è associato un menu a comparsa. Il parametro ID consente di specificare un handle per un menu a comparsa che deve essere associato all'elemento. Viene utilizzato per aggiungere un menu a comparsa di primo livello o un menu a comparsa gerarchico a una voce di menu a comparsa.

- MF_SEPARATOR disegna una linea di divisione orizzontale. Può essere utilizzato solo in un menu a comparsa. Questa linea non può essere oscurata, disabilitata o evidenziata. Gli altri parametri vengono ignorati.

- MF_STRING Specifica che la voce di menu è una stringa di caratteri.

Ognuno dei seguenti gruppi elenca i flag che si escludono a vicenda e che non possono essere utilizzati insieme:

- MF_DISABLED, MF_ENABLED e MF_GRAYED

- MF_STRING, MF_OWNERDRAW, MF_SEPARATOR e la versione bitmap

- MF_MENUBARBREAK e MF_MENUBREAK

- MF_CHECKED e MF_UNCHECKED

Ogni volta che un menu che si trova in una finestra viene modificato (indipendentemente dal fatto che la finestra sia visualizzata), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::CreateMenu](#createmenu).

## <a name="cmenuattach"></a><a name="attach"></a>MenuC::Associare

Associa un menu Windows esistente `CMenu` a un oggetto.

```
BOOL Attach(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*Hmenu*<br/>
Specifica un handle per un menu di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione non deve essere chiamata se all'oggetto `CMenu` è già associato un menu. L'handle di menu `m_hMenu` viene archiviato nel membro dati.

Se il menu che si desidera modificare è già associato a una finestra, è possibile utilizzare la funzione [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu) per ottenere un handle per il menu.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]

## <a name="cmenucheckmenuitem"></a><a name="checkmenuitem"></a>CMenu::CheckMenuItem

Aggiunge o rimuove segni di spunta dalle voci di menu nel menu a comparsa.

```
UINT CheckMenuItem(
    UINT nIDCheckItem,
    UINT nCheck);
```

### <a name="parameters"></a>Parametri

*nIDCheckItem (oggetto NIDCheckItem)*<br/>
Specifica la voce di menu da controllare, come determinato da *nCheck*.

*nControllare*<br/>
Specifica come controllare la voce di menu e come determinare la posizione dell'elemento nel menu. Il parametro *nCheck* può essere una combinazione di MF_CHECKED o MF_UNCHECKED con flag di MF_BYPOSITION o MF_BYCOMMAND. Questi flag possono essere combinati utilizzando l'operatore OR bit per bit. Hanno i seguenti significati:

- MF_BYCOMMAND Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è la modalità predefinita.

- MF_BYPOSITION specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.

- MF_CHECKED funge da interruttore con MF_UNCHECKED per inserire il segno di spunta predefinito accanto all'elemento.

- MF_UNCHECKED funge da interruttore con MF_CHECKED per rimuovere un segno di spunta accanto all'elemento.

### <a name="return-value"></a>Valore restituito

Lo stato precedente della voce: MF_CHECKED o MF_UNCHECKED oppure 0xFFFFFFFF se la voce di menu non esisteva.

### <a name="remarks"></a>Osservazioni

Il parametro *nIDCheckItem* consente di specificare l'elemento da modificare.

Il *nIDCheckItem* parametro può identificare una voce di menu a comparsa nonché una voce di menu. Non sono necessari passaggi speciali per controllare una voce di menu a comparsa. Le voci di menu di primo livello non possono essere selezionate. Una voce di menu a comparsa deve essere controllata in base alla posizione poiché non dispone di un identificatore di voce di menu associato.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::GetMenuState](#getmenustate).

## <a name="cmenucheckmenuradioitem"></a><a name="checkmenuradioitem"></a>CMenu::CheckMenuRadioItem

Controlla una voce di menu specificata e la rende una voce radio.

```
BOOL CheckMenuRadioItem(
    UINT nIDFirst,
    UINT nIDLast,
    UINT nIDItem,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*nIDPrimo*<br/>
Specifica (come ID o offset, a seconda del valore di *nFlags*) la prima voce di menu nel gruppo di pulsanti di opzione.

*nIDUltimo*<br/>
Specifica (come ID o offset, a seconda del valore di *nFlags*) l'ultima voce di menu nel gruppo di pulsanti di opzione.

*nIDItem (oggetto NIDItem)*<br/>
Specifica (come ID o offset, a seconda del valore di *nFlags*) l'elemento del gruppo che verrà controllato con un pulsante di opzione.

*Nflags*<br/>
Specifica l'interpretazione di *nIDFirst*, *nIDLast*e *nIDItem* nel modo seguente:

|Nflags|Interpretazione|
|------------|--------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario 0

### <a name="remarks"></a>Osservazioni

Allo stesso tempo, la funzione deseleziona tutte le altre voci di menu nel gruppo associato e cancella il flag del tipo di voce radio per tali elementi. L'elemento selezionato viene visualizzato utilizzando una bitmap di pulsante di opzione (o punto elenco) anziché una bitmap con segno di spunta.

### <a name="example"></a>Esempio

  Vedere l'esempio per [ON_COMMAND_RANGE](message-map-macros-mfc.md#on_command_range).

## <a name="cmenucmenu"></a><a name="cmenu"></a>CMenu::CMenu

Crea un menu vuoto e lo `CMenu` associa a un oggetto.

```
CMenu();
```

### <a name="remarks"></a>Osservazioni

Il menu non viene creato fino a quando non si chiama una delle funzioni membro create o load di`CMenu:`

- [CreateMenu (informazioni in questo gruppo)](#createmenu)

- [CreatePopupMenu](#createpopupmenu)

- [Menu Di caricamento](#loadmenu)

- [LoadMenuIndiretto](#loadmenuindirect)

- [Attach](#attach)

## <a name="cmenucreatemenu"></a><a name="createmenu"></a>CMenu::CreateMenu

Crea un menu e lo `CMenu` associa all'oggetto.

```
BOOL CreateMenu();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il menu è stato creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il menu è inizialmente vuoto. Le voci di menu `AppendMenu` possono `InsertMenu` essere aggiunte utilizzando la funzione membro o .

Se il menu è assegnato a una finestra, viene eliminato automaticamente quando la finestra viene distrutta.

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non è assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#22](../../mfc/reference/codesnippet/cpp/cmenu-class_2.cpp)]

## <a name="cmenucreatepopupmenu"></a><a name="createpopupmenu"></a>CMenu::CreatePopupMenu

Crea un menu a comparsa e `CMenu` lo associa all'oggetto.

```
BOOL CreatePopupMenu();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il menu a comparsa è stato creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il menu è inizialmente vuoto. Le voci di menu `AppendMenu` possono `InsertMenu` essere aggiunte utilizzando la funzione membro o . L'applicazione può aggiungere il menu a comparsa a un menu esistente o a un menu a comparsa. La `TrackPopupMenu` funzione membro può essere utilizzata per visualizzare questo menu come un menu a comparsa mobile e per tenere traccia delle selezioni nel menu a comparsa.

Se il menu è assegnato a una finestra, viene eliminato automaticamente quando la finestra viene distrutta. Se il menu viene aggiunto a un menu esistente, viene eliminato automaticamente quando tale menu viene eliminato.

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu a comparsa se il menu non è assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::CreateMenu](#createmenu).

## <a name="cmenudeletemenu"></a><a name="deletemenu"></a>MenuC::DeleteMenu

Elimina una voce dal menu.

```
BOOL DeleteMenu(
    UINT nPosition,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*nPosizione*<br/>
Specifica la voce di menu da eliminare, come determinato da *nFlags*.

*Nflags*<br/>
Viene utilizzato per interpretare nPosition nel modo seguente:Is used to interpret *nPosition* in the following way:

|Nflags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se alla voce di menu è `DeleteMenu` associato un menu a comparsa, l'handle viene eliminato nel menu a comparsa e la memoria utilizzata dal menu a comparsa.

Ogni volta che un menu che si trova in una finestra viene modificato (indipendentemente dal fatto che la finestra sia visualizzata), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).

## <a name="cmenudeletetempmap"></a><a name="deletetempmap"></a>CMenu::DeleteTempMap

Chiamato automaticamente `CWinApp` dal gestore del tempo di `CMenu` inattività, elimina tutti gli oggetti temporanei creati dal [FromHandle](#fromhandle) funzione membro.

```
static void PASCAL DeleteTempMap();
```

### <a name="remarks"></a>Osservazioni

`DeleteTempMap`scollega l'oggetto menu di Windows `CMenu` associato a `CMenu` un oggetto temporaneo prima di eliminare l'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#23](../../mfc/reference/codesnippet/cpp/cmenu-class_3.cpp)]

## <a name="cmenudestroymenu"></a><a name="destroymenu"></a>Menu::DestroyMenu

Elimina il menu e tutte le risorse di Windows utilizzate.

```
BOOL DestroyMenu();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il menu viene eliminato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il menu viene scollegato dall'oggetto `CMenu` prima di essere eliminato. La `DestroyMenu` funzione windows viene `CMenu` chiamata automaticamente nel distruttore.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::CreateMenu](#createmenu).

## <a name="cmenudetach"></a><a name="detach"></a>CMenu::Detach

Scollega un menu di `CMenu` Windows da un oggetto e restituisce l'handle.

```
HMENU Detach();
```

### <a name="return-value"></a>Valore restituito

Handle, di tipo HMENU, a un menu di Windows, se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Il `m_hMenu` membro dati è impostato su NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]

## <a name="cmenudrawitem"></a><a name="drawitem"></a>Menu::DrawItem

Chiamato dal framework quando un aspetto visivo di un menu disegnato dal proprietario viene modificato.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che contiene informazioni sul tipo di disegno richiesto.

### <a name="remarks"></a>Osservazioni

Il `itemAction` membro `DRAWITEMSTRUCT` della struttura definisce l'azione di disegno da eseguire. Eseguire l'override di questa funzione `CMenu` membro per implementare il disegno per un oggetto di disegno del proprietario. L'applicazione deve ripristinare tutti gli oggetti Graphics Device Interface (GDI) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima della chiusura di questa funzione membro.

Vedere [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una `DRAWITEMSTRUCT` descrizione della struttura.

### <a name="example"></a>Esempio

Il codice seguente è tratto dall'esempio MFC [CTRLTEST:](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFCWindowing#24](../../mfc/reference/codesnippet/cpp/cmenu-class_4.cpp)]

## <a name="cmenuenablemenuitem"></a><a name="enablemenuitem"></a>CMenu::EnableMenuItem

Abilita, disabilita o attenua una voce di menu.

```
UINT EnableMenuItem(
    UINT nIDEnableItem,
    UINT nEnable);
```

### <a name="parameters"></a>Parametri

*nIDEnableItem (elemento in cui è stato abilitato su nID*<br/>
Specifica la voce di menu da abilitare, come determinato da *nEnable*. Questo parametro può specificare voci di menu a comparsa e voci di menu standard.

*nAbilita*<br/>
Specifica l'azione da eseguire. Può essere una combinazione di MF_DISABLED, MF_ENABLED o MF_GRAYED, con MF_BYCOMMAND o MF_BYPOSITION. Questi valori possono essere combinati utilizzando l'operatore OR bit per bit. I valori hanno il significato seguente:

- MF_BYCOMMAND Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è la modalità predefinita.

- MF_BYPOSITION specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.

- MF_DISABLED Disabilita la voce di menu in modo che non possa essere selezionata ma non la dim.

- MF_ENABLED Abilita la voce di menu in modo che possa essere selezionata e la ripristina dallo stato disattivato.

- MF_GRAYED Disabilita la voce di menu in modo che non possa essere selezionata e la attenua.

### <a name="return-value"></a>Valore restituito

Stato precedente ( MF_DISABLED, MF_ENABLED o MF_GRAYED) o -1 se non è valido.

### <a name="remarks"></a>Osservazioni

Le funzioni membro [CreateMenu](#createmenu), [InsertMenu](#insertmenu), [ModifyMenu](#modifymenu)e [LoadMenuIndirect](#loadmenuindirect) possono inoltre impostare lo stato (abilitato, disabilitato o disattivato) di una voce di menu.

L'utilizzo del valore MF_BYPOSITION richiede `CMenu`che un'applicazione utilizzi l'oggetto corretto . Se `CMenu` viene utilizzata la barra dei menu, viene influenzata una voce di menu di primo livello (una voce nella barra dei menu). Per impostare lo stato di un elemento in un menu a comparsa `CMenu` o nidificato in base alla posizione, un'applicazione deve specificare il menu a comparsa.

Quando un'applicazione specifica il flag di MF_BYCOMMAND, Windows controlla tutte `CMenu`le voci di menu a comparsa che sono subordinate all'oggetto ; pertanto, a meno che non `CMenu` siano presenti voci di menu duplicate, l'utilizzo della barra dei menu è sufficiente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#25](../../mfc/reference/codesnippet/cpp/cmenu-class_5.cpp)]

## <a name="cmenufromhandle"></a><a name="fromhandle"></a>CMenu::FromHandle

Restituisce un `CMenu` puntatore a un oggetto dato un handle di Windows a un menu.

```
static CMenu* PASCAL FromHandle(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*Hmenu*<br/>
Un handle di Windows a un menu.

### <a name="return-value"></a>Valore restituito

Puntatore a `CMenu` un che può essere temporaneo o permanente.

### <a name="remarks"></a>Osservazioni

Se `CMenu` un oggetto non è già associato all'oggetto menu Windows, viene creato e associato un oggetto temporaneo. `CMenu`

Questo `CMenu` oggetto temporaneo è valido solo fino alla successiva inattività dell'applicazione nel ciclo di eventi, in cui vengono eliminati tutti gli oggetti temporanei.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::CreateMenu](#createmenu).

## <a name="cmenugetdefaultitem"></a><a name="getdefaultitem"></a>CMenu::GetDefaultItem

Determina la voce di menu predefinita nel menu specificato.

```
UINT GetDefaultItem(
    UINT gmdiFlags,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*gmdiFlags (gmdiFlags)*<br/>
Valore che specifica la modalità di ricerca delle voci di menu da parte della funzione. Questo parametro può essere nessuno, uno o una combinazione dei seguenti valori:

|Valore|Significato|
|-----------|-------------|
|GMDI_GOINTOPOPUPS|Specifica che, se l'elemento predefinito è uno che apre un sottomenu, la funzione consiste nel cercare ricorsivo nel sottomenu corrispondente. Se il sottomenu non dispone di alcuna voce predefinita, il valore restituito identifica l'elemento che apre il sottomenu.<br /><br /> Per impostazione predefinita, la funzione restituisce la prima voce predefinita del menu specificato, indipendentemente dal fatto che si tratti di un elemento che apre un sottomenu.|
|GMDI_USEDISABLED|Specifica che la funzione deve restituire un elemento predefinito, anche se è disabilitato.<br /><br /> Per impostazione predefinita, la funzione ignora gli elementi disabilitati o in grigio.|

*fByPos (informazioni in base al tame*<br/>
Valore che specifica se recuperare l'identificatore della voce di menu o la relativa posizione. Se questo parametro è FALSE, viene restituito l'identificatore. In caso contrario, viene restituita la posizione.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è l'identificatore o la posizione della voce di menu. Se la funzione ha esito negativo, il valore restituito è - 1.If the function fails, the return value is - 1.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento della funzione Win32 [GetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-getmenudefaultitem), come descritto in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::InsertMenu](#insertmenu).

## <a name="cmenugetmenucontexthelpid"></a><a name="getmenucontexthelpid"></a>CMenu::GetMenuContextHelpId

Recupera l'ID della `CMenu`Guida contestuale associato a .

```
DWORD GetMenuContextHelpId() const;
```

### <a name="return-value"></a>Valore restituito

L'ID della Guida `CMenu` contestuale attualmente associato a se ne ha uno; zero in caso contrario.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::InsertMenu](#insertmenu).

## <a name="cmenugetmenuinfo"></a><a name="getmenuinfo"></a>CMenu::GetMenuInfo

Recupera informazioni per un menu.

```
BOOL GetMenuInfo(LPMENUINFO lpcmi) const;
```

### <a name="parameters"></a>Parametri

*lpcmi*<br/>
Puntatore a una struttura [MENUINFO](/windows/win32/api/winuser/ns-winuser-menuinfo) contenente informazioni per il menu.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare informazioni sul menu.

## <a name="cmenugetmenuitemcount"></a><a name="getmenuitemcount"></a>CMenu::GetMenuItemCount

Determina il numero di elementi in un menu a comparsa o di primo livello.

```
UINT GetMenuItemCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di voci nel menu se la funzione ha esito positivo; in caso contrario -1.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).

## <a name="cmenugetmenuitemid"></a><a name="getmenuitemid"></a>CMenu::GetMenuItemID

Ottiene l'identificatore della voce di menu per una voce di menu situata nella posizione definita da *nPos*.

```
UINT GetMenuItemID(int nPos) const;
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Specifica la posizione (in base zero) della voce di menu il cui ID viene recuperato.

### <a name="return-value"></a>Valore restituito

L'ID elemento per l'elemento specificato in un menu a comparsa se la funzione ha esito positivo. Se l'elemento specificato è un menu a comparsa (anziché un elemento all'interno del menu a comparsa), il valore restituito è -1. Se *nPos* corrisponde a una voce di menu SEPARATOR, il valore restituito è 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::InsertMenu](#insertmenu).

## <a name="cmenugetmenuiteminfo"></a><a name="getmenuiteminfo"></a>CMenu::GetMenuItemInfo

Recupera informazioni su una voce di menu.

```
BOOL GetMenuItemInfo(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem (informazioni in cui è stato*<br/>
Identificatore o posizione della voce di menu di cui ottenere informazioni. Il significato di questo parametro `ByPos`dipende dal valore di .

*lpMenuItemInfo (informazioni in questo articolo)*<br/>
Puntatore a un [oggetto MENUITEMINFO](/windows/win32/api/winuser/ns-winuser-menuiteminfow), come descritto in Windows SDK, che contiene informazioni sul menu.

*fByPos (informazioni in base al tame*<br/>
Valore che specifica `nIDItem`il significato di . Per impostazione predefinita, `ByPos` è FALSE, che indica che uItem è un identificatore di voce di menu. Se `ByPos` non è impostato su FALSE, indica la posizione di una voce di menu.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni estese sugli errori, utilizzare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror), come descritto in Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento della funzione Win32 [GetMenuItemInfo](/windows/win32/api/winuser/nf-winuser-getmenuiteminfow), come descritto in Windows SDK. Si noti che `GetMenuItemInfo`nell'implementazione MFC di , non si utilizza un handle per un menu.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#26](../../mfc/reference/codesnippet/cpp/cmenu-class_6.cpp)]

## <a name="cmenugetmenustate"></a><a name="getmenustate"></a>CMenu::GetMenuState

Restituisce lo stato della voce di menu specificata o il numero di voci in un menu a comparsa.

```
UINT GetMenuState(
    UINT nID,
    UINT nFlags) const;
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Specifica l'ID della voce di menu, come determinato da *nFlags*.

*Nflags*<br/>
Specifica la natura di *nID*. Può essere uno dei valori seguenti:

- MF_BYCOMMAND Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è la modalità predefinita.

- MF_BYPOSITION specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.

### <a name="return-value"></a>Valore restituito

Valore 0xFFFFFFFF se l'elemento specificato non esiste. Se *nId* identifica un menu a comparsa, il byte più significativo contiene il numero di voci nel menu a comparsa e il byte meno significativo contiene i flag di menu associati al menu a comparsa. In caso contrario, il valore restituito è una maschera (OR booleano) dei valori dell'elenco seguente (questa maschera descrive lo stato della voce di menu identificata da *nId):*

- MF_CHECKED funge da interruttore con MF_UNCHECKED per inserire il segno di spunta predefinito accanto all'elemento. Quando l'applicazione fornisce bitmap di selezione `SetMenuItemBitmaps` (vedere la funzione membro), viene visualizzata la bitmap "segno di spunta su".

- MF_DISABLED Disabilita la voce di menu in modo che non possa essere selezionata ma non la dim.

- MF_ENABLED Abilita la voce di menu in modo che possa essere selezionata e la ripristina dallo stato disattivato. Si noti che il valore di questa costante è 0; un'applicazione non deve verificare la causa dell'errore 0 quando si utilizza questo valore.

- MF_GRAYED Disabilita la voce di menu in modo che non possa essere selezionata e la attenua.

- MF_MENUBARBREAK Inserisce l'elemento in una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. La nuova colonna del menu a comparsa sarà separata dalla colonna precedente da una linea di divisione verticale.

- MF_MENUBREAK Posiziona l'elemento in una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. Non viene inserita alcuna linea di divisione tra le colonne.

- MF_SEPARATOR disegna una linea di divisione orizzontale. Può essere utilizzato solo in un menu a comparsa. Questa linea non può essere oscurata, disabilitata o evidenziata. Gli altri parametri vengono ignorati.

- MF_UNCHECKED funge da interruttore con MF_CHECKED per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce bitmap di segno `SetMenuItemBitmaps` di spunta (vedere la funzione membro), viene visualizzata la bitmap "segno di spunta disattivato". Si noti che il valore di questa costante è 0; un'applicazione non deve verificare la causa dell'errore 0 quando si utilizza questo valore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#27](../../mfc/reference/codesnippet/cpp/cmenu-class_7.cpp)]

## <a name="cmenugetmenustring"></a><a name="getmenustring"></a>CMenu::GetMenuString

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

*nIDItem (oggetto NIDItem)*<br/>
Specifica l'identificatore intero della voce di menu o l'offset della voce di menu nel menu, a seconda del valore di *nFlags*.

*lpStringa*<br/>
Punta al buffer che deve ricevere l'etichetta.

*rStringa*<br/>
Riferimento a `CString` un oggetto che deve ricevere la stringa di menu copiata.

*nMaxCount*<br/>
Specifica la lunghezza massima (in caratteri) dell'etichetta da copiare. Se l'etichetta è più lunga del valore massimo specificato in *nMaxCount*, i caratteri aggiuntivi vengono troncati.

*Nflags*<br/>
Specifica l'interpretazione del parametro *nIDItem.* Può essere uno dei valori seguenti:

|Nflags|Interpretazione di nIDItem|
|------------|-------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

### <a name="return-value"></a>Valore restituito

Specifica il numero effettivo di caratteri copiati nel buffer, escluso il carattere di terminazione null.

### <a name="remarks"></a>Osservazioni

Il *nMaxCount* parametro deve essere uno maggiore del numero di caratteri nell'etichetta per contenere il carattere null che termina una stringa.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::InsertMenu](#insertmenu).

## <a name="cmenugetsafehmenu"></a><a name="getsafehmenu"></a>CMenu::GetSafeHmenu

Restituisce l'HMENU `CMenu` di cui`CMenu` è stato eseguito il wrapping da questo oggetto o un puntatore NULL.

```
HMENU GetSafeHmenu() const;
```

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::LoadMenu](#loadmenu).

## <a name="cmenugetsubmenu"></a><a name="getsubmenu"></a>CMenu::GetSubMenu

Recupera l'oggetto `CMenu` di un menu a comparsa.

```
CMenu* GetSubMenu(int nPos) const;
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Specifica la posizione del menu a comparsa contenuto nel menu. I valori di posizione iniziano da 0 per la prima voce di menu. L'identificatore del menu a comparsa non può essere utilizzato in questa funzione.

### <a name="return-value"></a>Valore restituito

Un puntatore `CMenu` a `m_hMenu` un oggetto il cui membro contiene un handle per il menu a comparsa se esiste un menu a comparsa nella posizione specificata; in caso contrario NULL. Se `CMenu` un oggetto non esiste, ne viene creato uno temporaneo. Il `CMenu` puntatore restituito non deve essere archiviato.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::TrackPopupMenu](#trackpopupmenu).

## <a name="cmenuinsertmenu"></a><a name="insertmenu"></a>CMenu::InsertMenu

Inserisce una nuova voce di menu nella posizione specificata da *nPosition* e sposta altre voci verso il basso nel menu.

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

*nPosizione*<br/>
Specifica la voce di menu prima della quale deve essere inserita la nuova voce di menu. Il parametro nFlags può essere utilizzato per interpretare nPosition nei modi seguenti:The *nFlags* parameter can be used to interpret *nPosition* in the following ways:

|Nflags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0. Se *nPosition* è -1, la nuova voce di menu viene aggiunta alla fine del menu.|

*Nflags*<br/>
Specifica come viene interpretata *nPosition* e specifica le informazioni sullo stato della nuova voce di menu quando viene aggiunta al menu. Per un elenco dei flag che possono essere impostati, vedere il [AppendMenu](#appendmenu) funzione membro. Per specificare più di un valore, utilizzare l'operatore OR bit per bit per combinarli con il flag MF_BYCOMMAND o MF_BYPOSITION.

*nIDNewItem (elemento nIDNewItem)*<br/>
Specifica l'ID di comando della nuova voce di menu o, se *nFlags* è impostato su MF_POPUP, l'handle di menu ( HMENU) del menu a comparsa. Il parametro *nIDNewItem* viene ignorato (non necessario) se *nFlags* è impostato su MF_SEPARATOR.

*lpszNewItem (informazioni in due)*<br/>
Specifica il contenuto della nuova voce di menu. *nFlags* può essere utilizzato per interpretare *lpszNewItem* nei modi seguenti:

|Nflags|Interpretazione di lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contiene un valore a 32 bit fornito dall'applicazione che l'applicazione può utilizzare per gestire dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è `itemData` disponibile per l'applicazione nel membro della struttura fornita dai messaggi [di WM_MEASUREITEM](/windows/win32/Controls/wm-measureitem) e [WM_DRAWITEM.](/windows/win32/Controls/wm-drawitem) Questi messaggi vengono inviati quando la voce di menu viene visualizzata inizialmente o viene modificata.|
|MF_STRING|Contiene un puntatore lungo a una stringa con terminazione null. Questa è l'interpretazione predefinita.|
|MF_SEPARATOR|Il parametro *lpszNewItem* viene ignorato (non necessario).|

*pBmp*<br/>
Punta a `CBitmap` un oggetto che verrà utilizzato come voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'applicazione può specificare lo stato della voce di menu impostando i valori in *nFlags*.

Ogni volta che un menu che si trova in una finestra viene modificato `CWnd::DrawMenuBar`(indipendentemente dal fatto che la finestra sia visualizzata o meno), l'applicazione deve chiamare .

Quando *nIDNewItem* specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se tale menu viene eliminato, verrà eliminato anche il menu inserito. Un menu inserito deve `CMenu` essere scollegato da un oggetto per evitare conflitti.

Se la finestra figlio dell'interfaccia a documenti multipli (MDI) attiva è ingrandita e un'applicazione inserisce un menu a comparsa nel menu dell'applicazione MDI chiamando questa funzione e specificando il flag MF_BYPOSITION, il menu viene inserito una posizione più a sinistra del previsto. Ciò si verifica perché il menu Control della finestra figlio MDI attiva viene inserito nella prima posizione della barra dei menu della finestra cornice MDI. Per posizionare correttamente il menu, l'applicazione deve aggiungere 1 al valore di posizione che verrebbe altrimenti utilizzato. Un'applicazione può utilizzare il messaggio WM_MDIGETACTIVE per determinare se la finestra figlio attualmente attiva è ingrandita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#28](../../mfc/reference/codesnippet/cpp/cmenu-class_8.cpp)]

## <a name="cmenuinsertmenuitem"></a><a name="insertmenuitem"></a>CMenu::InsertMenuItem

Inserisce una nuova voce di menu nella posizione specificata in un menu.

```
BOOL InsertMenuItem(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem (informazioni in cui è stato*<br/>
Vedere la descrizione di *uItem* in [InsertMenuItem](/windows/win32/api/winuser/nf-winuser-insertmenuitemw) in Windows SDK.

*lpMenuItemInfo (informazioni in questo articolo)*<br/>
Vedere la descrizione di `InsertMenuItem` *lpmii* in Windows SDK.

*fByPos (informazioni in base al tame*<br/>
Vedere la descrizione di `InsertMenuItem` *fByPosition* in Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione esegue il wrapping di [InsertMenuItem](/windows/win32/api/winuser/nf-winuser-insertmenuitemw), descritta in Windows SDK.

## <a name="cmenuloadmenu"></a><a name="loadmenu"></a>CMenu::LoadMenu

Carica una risorsa di menu dal file eseguibile dell'applicazione e la associa all'oggetto. `CMenu`

```
BOOL LoadMenu(LPCTSTR lpszResourceName);
BOOL LoadMenu(UINT nIDResource);
```

### <a name="parameters"></a>Parametri

*LpszResourceName (nome della risorsa)*<br/>
Punta a una stringa con terminazione null che contiene il nome della risorsa di menu da caricare.

*nIDResource*<br/>
Specifica l'ID di menu della risorsa di menu da caricare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la risorsa di menu è stata caricata correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non è assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#29](../../mfc/reference/codesnippet/cpp/cmenu-class_9.cpp)]

## <a name="cmenuloadmenuindirect"></a><a name="loadmenuindirect"></a>CMenu::LoadMenuIndiretto

Carica una risorsa da un modello di menu `CMenu` in memoria e la associa all'oggetto.

```
BOOL LoadMenuIndirect(const void* lpMenuTemplate);
```

### <a name="parameters"></a>Parametri

*LpMenuTemplate (modello)*<br/>
Punta a un modello di menu (che è una singola struttura [MENUITEMTEMPLATEHEADER](/windows/win32/api/winuser/ns-winuser-menuitemtemplateheader) e una raccolta di una o più strutture [MENUITEMTEMPLATE).](/windows/win32/api/winuser/ns-winuser-menuitemtemplate) Per ulteriori informazioni su queste due strutture, vedere Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la risorsa di menu è stata caricata correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Un modello di menu è un'intestazione seguita da una raccolta di una o più strutture [MENUITEMTEMPLATE,](/windows/win32/api/winuser/ns-winuser-menuitemtemplate) ognuna delle quali può contenere una o più voci di menu e menu a comparsa.

Il numero di versione deve essere 0.The version number should be 0.

I `mtOption` flag devono includere MF_END per l'ultimo elemento in un elenco popup e per l'ultimo elemento nell'elenco principale. Vedere `AppendMenu` la funzione membro per altri flag. Il `mtId` membro deve essere omesso dalla struttura MENUITEMTEMPLATE quando MF_POPUP è specificato in `mtOption`.

Lo spazio allocato per la struttura `mtString` MENUITEMTEMPLATE deve essere sufficientemente grande da contenere il nome della voce di menu come stringa con terminazione null.

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non è assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#30](../../mfc/reference/codesnippet/cpp/cmenu-class_10.cpp)]

## <a name="cmenum_hmenu"></a><a name="m_hmenu"></a>CMenu::m_hMenu

Specifica l'handle HMENU del menu Windows `CMenu` associato all'oggetto.

```
HMENU m_hMenu;
```

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::LoadMenu](#loadmenu).

## <a name="cmenumeasureitem"></a><a name="measureitem"></a>CMenu::MeasureItem

Chiamato dal framework quando viene creato un menu con lo stile di disegno del proprietario.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct (oggetto LpMeasureItemStruct)*<br/>
Puntatore a `MEASUREITEMSTRUCT` una struttura.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di `MEASUREITEMSTRUCT` questa funzione membro e compilare la struttura per informare Windows delle dimensioni del menu.

Vedere [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una `MEASUREITEMSTRUCT` descrizione della struttura.

### <a name="example"></a>Esempio

Il codice seguente è tratto dall'esempio MFC [CTRLTEST:](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFCWindowing#31](../../mfc/reference/codesnippet/cpp/cmenu-class_11.cpp)]

## <a name="cmenumodifymenu"></a><a name="modifymenu"></a>CMenu::ModifyMenu

Modifica una voce di menu esistente nella posizione specificata da *nPosition*.

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

*nPosizione*<br/>
Specifica la voce di menu da modificare. Il parametro nFlags può essere utilizzato per interpretare nPosition nei modi seguenti:The *nFlags* parameter can be used to interpret *nPosition* in the following ways:

|Nflags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

*Nflags*<br/>
Specifica il modo in cui *nPosition* viene interpretato e fornisce informazioni sulle modifiche da apportare alla voce di menu. Per un elenco dei flag che possono essere impostati, vedere il [AppendMenu](#appendmenu) funzione membro.

*nIDNewItem (elemento nIDNewItem)*<br/>
Specifica l'ID di comando della voce di menu modificata o, se *nFlags* è impostato su MF_POPUP, l'handle di menu (HMENU) di un menu a comparsa. Il parametro *nIDNewItem* viene ignorato (non necessario) se *nFlags* è impostato su MF_SEPARATOR.

*lpszNewItem (informazioni in due)*<br/>
Specifica il contenuto della nuova voce di menu. Il parametro *nFlags* può essere utilizzato per interpretare *lpszNewItem* nei modi seguenti:

|Nflags|Interpretazione di lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contiene un valore a 32 bit fornito dall'applicazione che l'applicazione può utilizzare per gestire dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione quando elabora MF_MEASUREITEM e MF_DRAWITEM.|
|MF_STRING|Contiene un puntatore lungo a una stringa `CString`con terminazione null o a un oggetto .|
|MF_SEPARATOR|Il parametro *lpszNewItem* viene ignorato (non necessario).|

*pBmp*<br/>
Punta a `CBitmap` un oggetto che verrà utilizzato come voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'applicazione specifica il nuovo stato della voce di menu impostando i valori in *nFlags*. Se questa funzione sostituisce un menu a comparsa associato alla voce di menu, distrugge il vecchio menu a comparsa e libera la memoria utilizzata dal menu a comparsa.

Quando *nIDNewItem* specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se tale menu viene eliminato, verrà eliminato anche il menu inserito. Un menu inserito deve `CMenu` essere scollegato da un oggetto per evitare conflitti.

Ogni volta che un menu che si trova in una finestra viene modificato `CWnd::DrawMenuBar`(indipendentemente dal fatto che la finestra sia visualizzata o meno), l'applicazione deve chiamare . Per modificare gli attributi delle voci di menu `CheckMenuItem` esistenti, è molto più veloce utilizzare le funzioni membro e `EnableMenuItem` .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::InsertMenu](#insertmenu).

## <a name="cmenuoperator-hmenu"></a><a name="operator_hmenu"></a>CMenu::operatore HMENU

Utilizzare questo operatore per `CMenu` recuperare l'handle dell'oggetto.

```
operator HMENU() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito `CMenu` positivo, l'handle dell'oggetto; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare l'handle per chiamare direttamente le API di Windows.You can use the handle to call Windows APIs directly.

## <a name="cmenuoperator-"></a><a name="operator_neq"></a>CMenu::operator !

Determina se due menu non sono logicamente uguali.

```
BOOL operator!=(const CMenu& menu) const;
```

### <a name="parameters"></a>Parametri

*Menu*<br/>
Oggetto `CMenu` per il confronto.

### <a name="remarks"></a>Osservazioni

Verifica se un oggetto menu sul lato sinistro non è uguale a un oggetto menu sul lato destro.

## <a name="cmenuoperator-"></a><a name="operator_eq_eq"></a>CMenu::operatore

Determina se due menu sono logicamente uguali.

```
BOOL operator==(const CMenu& menu) const;
```

### <a name="parameters"></a>Parametri

*Menu*<br/>
Oggetto `CMenu` per il confronto.

### <a name="remarks"></a>Osservazioni

Verifica se un oggetto menu sul lato sinistro è uguale (in termini di valore HMENU) a un oggetto menu sul lato destro.

## <a name="cmenuremovemenu"></a><a name="removemenu"></a>CMenu::RemoveMenu

Elimina una voce di menu con un menu a comparsa associato dal menu.

```
BOOL RemoveMenu(
    UINT nPosition,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*nPosizione*<br/>
Specifica la voce di menu da rimuovere. Il parametro nFlags può essere utilizzato per interpretare nPosition nei modi seguenti:The *nFlags* parameter can be used to interpret *nPosition* in the following ways:

|Nflags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

*Nflags*<br/>
Specifica come viene interpretata *nPosition.*

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Non distrugge la maniglia per un menu a comparsa, quindi il menu può essere riutilizzato. Prima di chiamare questa funzione, `GetSubMenu` l'applicazione può chiamare `CMenu` la funzione membro per recuperare l'oggetto popup per il riutilizzo.

Ogni volta che un menu che si trova in una finestra viene modificato `CWnd::DrawMenuBar`(indipendentemente dal fatto che la finestra sia visualizzata o meno), l'applicazione deve chiamare .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::InsertMenu](#insertmenu).

## <a name="cmenusetdefaultitem"></a><a name="setdefaultitem"></a>CMenu::SetDefaultItem

Imposta la voce di menu predefinita per il menu specificato.

```
BOOL SetDefaultItem(
    UINT uItem,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem (informazioni in cui è stato*<br/>
Identificatore o posizione della nuova voce di menu predefinita o - 1 per nessuna voce predefinita. Il significato di questo parametro dipende dal valore di *fByPos*.

*fByPos (informazioni in base al tame*<br/>
Valore che specifica il significato di *uItem*. Se questo parametro è FALSE, *uItem* è un identificatore di voce di menu. In caso contrario, si tratta di una posizione di voce di menu.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni estese sugli errori, utilizzare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror), come descritto in Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento della funzione Win32 [SetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-setmenudefaultitem), come descritto in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::InsertMenu](#insertmenu).

## <a name="cmenusetmenucontexthelpid"></a><a name="setmenucontexthelpid"></a>CMenu::SetMenuContextHelpId

Associa un ID della `CMenu`Guida contestuale a .

```
BOOL SetMenuContextHelpId(DWORD dwContextHelpId);
```

### <a name="parameters"></a>Parametri

*dwContextHelpId*<br/>
ID della Guida `CMenu`del contesto da associare a .

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario 0

### <a name="remarks"></a>Osservazioni

Tutte le voci del menu condividono questo identificatore: non è possibile associare un identificatore di contesto della Guida alle singole voci di menu.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu::InsertMenu](#insertmenu).

## <a name="cmenusetmenuinfo"></a><a name="setmenuinfo"></a>CMenu::SetMenuInfo

Imposta le informazioni per un menu.

```
BOOL SetMenuInfo(LPCMENUINFO lpcmi);
```

### <a name="parameters"></a>Parametri

*lpcmi*<br/>
Puntatore a una struttura [MENUINFO](/windows/win32/api/winuser/ns-winuser-menuinfo) contenente informazioni per il menu.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per impostare informazioni specifiche sul menu.

## <a name="cmenusetmenuitembitmaps"></a><a name="setmenuitembitmaps"></a>CMenu::SetMenuItemBitmaps

Associa le bitmap specificate a una voce di menu.

```
BOOL SetMenuItemBitmaps(
    UINT nPosition,
    UINT nFlags,
    const CBitmap* pBmpUnchecked,
    const CBitmap* pBmpChecked);
```

### <a name="parameters"></a>Parametri

*nPosizione*<br/>
Specifica la voce di menu da modificare. Il parametro nFlags può essere utilizzato per interpretare nPosition nei modi seguenti:The *nFlags* parameter can be used to interpret *nPosition* in the following ways:

|Nflags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

*Nflags*<br/>
Specifica come viene interpretata *nPosition.*

*pBmpUnchecked (pBmpUnchecked)*<br/>
Specifica la bitmap da utilizzare per le voci di menu non selezionate.

*pBmpControllato*<br/>
Specifica la bitmap da utilizzare per le voci di menu selezionate.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se la voce di menu è selezionata o deselezionata, Windows visualizza la bitmap appropriata accanto alla voce di menu.

Se *pBmpUnchecked* o *pBmpChecked* è NULL, Windows non visualizza nulla accanto alla voce di menu per l'attributo corrispondente. Se entrambi i parametri sono NULL, Windows utilizza il segno di spunta predefinito quando l'elemento è selezionato e rimuove il segno di spunta quando l'elemento è deselezionato.

Quando il menu viene eliminato, queste bitmap non vengono distrutte; l'applicazione deve distruggerli.

La `GetMenuCheckMarkDimensions` funzione Windows recupera le dimensioni del segno di spunta predefinito utilizzato per le voci di menu. L'applicazione utilizza questi valori per determinare le dimensioni appropriate per le bitmap fornite con questa funzione. Ottenere le dimensioni, creare le bitmap e quindi impostarle.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#32](../../mfc/reference/codesnippet/cpp/cmenu-class_12.cpp)]

[!code-cpp[NVC_MFCWindowing#33](../../mfc/reference/codesnippet/cpp/cmenu-class_13.cpp)]

## <a name="cmenusetmenuiteminfo"></a><a name="setmenuiteminfo"></a>CMenu::SetMenuItemInfo

Modifica le informazioni su una voce di menu.

```
BOOL SetMenuItemInfo(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem (informazioni in cui è stato*<br/>
Vedere la descrizione di *uItem* in [SetMenuItemInfo](/windows/win32/api/winuser/nf-winuser-setmenuiteminfow) in Windows SDK.

*lpMenuItemInfo (informazioni in questo articolo)*<br/>
Vedere la descrizione di `SetMenuItemInfo` *lpmii* in Windows SDK.

*fByPos (informazioni in base al tame*<br/>
Vedere la descrizione di `SetMenuItemInfo` *fByPosition* in Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione esegue il wrapping di [SetMenuItemInfo](/windows/win32/api/winuser/nf-winuser-setmenuiteminfow), descritta in Windows SDK.

## <a name="cmenutrackpopupmenu"></a><a name="trackpopupmenu"></a>CMenu::TrackPopupMenu

Visualizza un menu a comparsa mobile nella posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.

```
BOOL TrackPopupMenu(
    UINT nFlags,
    int x,
    int y,
    CWnd* pWnd,
    LPCRECT lpRect = 0);
```

### <a name="parameters"></a>Parametri

*Nflags*<br/>
Specifica i flag di posizione dello schermo e della posizione del mouse. Per un elenco dei flag disponibili, vedere [TrackPopupMenu.](/windows/win32/api/winuser/nf-winuser-trackpopupmenu)

*X*<br/>
Specifica la posizione orizzontale nelle coordinate dello schermo del menu a comparsa. A seconda del valore del parametro *nFlags,* il menu può essere allineato a sinistra, a destra o centrato rispetto a questa posizione.

*Y*<br/>
Specifica la posizione verticale nelle coordinate dello schermo della parte superiore del menu sullo schermo.

*pWnd (in questo stato di windows*<br/>
Identifica la finestra proprietaria del menu a comparsa. Questo parametro non può essere NULL, anche se è specificato il flag TPM_NONOTIFY. Questa finestra riceve tutti i WM_COMMAND messaggi dal menu. Nelle versioni di Windows 3.1 e successive, `TrackPopupMenu` la finestra non riceve messaggi di WM_COMMAND fino alla restituzione. In Windows 3.0, la finestra `TrackPopupMenu` riceve WM_COMMAND messaggi prima della restituzione.

*Lprect*<br/>
Ignorato.

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce il risultato della chiamata [di TrackPopupMenu](/windows/win32/api/winuser/nf-winuser-trackpopupmenu) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Un menu a comparsa mobile può essere visualizzato in qualsiasi punto dello schermo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#34](../../mfc/reference/codesnippet/cpp/cmenu-class_14.cpp)]

## <a name="cmenutrackpopupmenuex"></a><a name="trackpopupmenuex"></a>CMenu::TrackPopupMenuEx

Visualizza un menu a comparsa mobile nella posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.

```
BOOL TrackPopupMenuEx(
    UINT fuFlags,
    int x,
    int y,
    CWnd* pWnd,
    LPTPMPARAMS lptpm);
```

### <a name="parameters"></a>Parametri

*fuFlags (contrassegni di stato)*<br/>
Specifica varie funzioni per il menu esteso. Per un elenco di tutti i valori e il relativo significato, vedere [TrackPopupMenuEx](/windows/win32/api/winuser/nf-winuser-trackpopupmenuex).

*X*<br/>
Specifica la posizione orizzontale nelle coordinate dello schermo del menu a comparsa.

*Y*<br/>
Specifica la posizione verticale nelle coordinate dello schermo della parte superiore del menu sullo schermo.

*pWnd (in questo stato di windows*<br/>
Un puntatore alla finestra proprietaria del menu a comparsa e alla ricezione dei messaggi dal menu creato. Questa finestra può essere qualsiasi finestra dell'applicazione corrente, ma non può essere NULL. Se si specifica TPM_NONOTIFY nel parametro *fuFlags,* la funzione non invia alcun messaggio a *pWnd*. La funzione deve restituire per la finestra a cui punta *pWnd* per ricevere il messaggio di WM_COMMAND.

*lptpm*<br/>
Puntatore a una struttura [TPMPARAMS](/windows/win32/api/winuser/ns-winuser-tpmparams) che specifica un'area dello schermo in cui il menu non deve sovrapporsi. Questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Se si specifica TPM_RETURNCMD nel parametro *fuFlags,* il valore restituito è l'identificatore della voce di menu dell'elemento selezionato dall'utente. Se l'utente annulla il menu senza effettuare una selezione o se si verifica un errore, il valore restituito è 0.

Se non si specifica TPM_RETURNCMD nel parametro *fuFlags,* il valore restituito è diverso da zero se la funzione ha esito positivo e 0 se ha esito negativo. Per ottenere informazioni estese sull'errore, chiamare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Osservazioni

Un menu a comparsa mobile può essere visualizzato in qualsiasi punto dello schermo. Per ulteriori informazioni sulla gestione degli errori durante la creazione del menu a comparsa, consultate [TrackPopupMenuEx.](/windows/win32/api/winuser/nf-winuser-trackpopupmenuex)

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLTEST](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC DYNAMENU](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
