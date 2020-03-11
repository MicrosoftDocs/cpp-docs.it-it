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
ms.openlocfilehash: 1cd7be72dc6c9a38fae4f5ccc1a15c184a2d4466
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78855637"
---
# <a name="cmenu-class"></a>Classe CMenu

Incapsulamento di `HMENU`di Windows.

## <a name="syntax"></a>Sintassi

```
class CMenu : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu:: CMenu](#cmenu)|Costruisce un oggetto `CMenu`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu::AppendMenu](#appendmenu)|Aggiunge un nuovo elemento alla fine di questo menu.|
|[CMenu:: Connetti](#attach)|Connette un handle di menu di Windows a un oggetto `CMenu`.|
|[CMenu:: CheckMenuItem](#checkmenuitem)|Inserisce un segno di spunta accanto a o rimuove un segno di spunta da una voce di menu nel menu a comparsa.|
|[CMenu:: CheckMenuRadioItem](#checkmenuradioitem)|Inserisce un pulsante di opzione accanto a una voce di menu e rimuove il pulsante di opzione da tutte le altre voci di menu del gruppo.|
|[CMenu:: CreateMenu](#createmenu)|Crea un menu vuoto e lo collega a un oggetto `CMenu`.|
|[CMenu:: CreatePopupMenu](#createpopupmenu)|Crea un menu popup vuoto e lo collega a un oggetto `CMenu`.|
|[CMenu::D eleteMenu](#deletemenu)|Elimina un elemento specificato dal menu. Se la voce di menu dispone di un menu di scelta rapida associato, Elimina l'handle dal menu a comparsa e libera la memoria usata.|
|[CMenu::D eleteTempMap](#deletetempmap)|Elimina tutti gli oggetti `CMenu` temporanei creati dalla funzione membro `FromHandle`.|
|[CMenu::D estroyMenu](#destroymenu)|Elimina il menu associato a un oggetto `CMenu` e libera la memoria occupata dal menu.|
|[CMenu::D etach](#detach)|Scollega un handle di menu di Windows da un oggetto `CMenu` e restituisce l'handle.|
|[CMenu::D rawItem](#drawitem)|Chiamata eseguita dal framework quando viene modificato un aspetto visivo di un menu creato dal proprietario.|
|[CMenu:: EnableMenuItem](#enablemenuitem)|Abilita, Disabilita o offusca (grigio) una voce di menu.|
|[CMenu:: FromHandle](#fromhandle)|Restituisce un puntatore a un oggetto `CMenu` dato un handle di menu di Windows.|
|[CMenu:: GetDefaultItem](#getdefaultitem)|Determina la voce di menu predefinita nel menu specificato.|
|[CMenu:: GetMenuContextHelpId](#getmenucontexthelpid)|Recupera l'ID del contesto della Guida associato al menu.|
|[CMenu:: GetMenuInfo](#getmenuinfo)|Recupera le informazioni su un menu specifico.|
|[CMenu:: GetMenuItemCount](#getmenuitemcount)|Determina il numero di elementi in un menu di scelta rapida o di primo livello.|
|[CMenu:: GetMenuItemID](#getmenuitemid)|Ottiene l'identificatore di voce di menu per una voce di menu che si trova nella posizione specificata.|
|[CMenu:: GetMenuItemInfo](#getmenuiteminfo)|Recupera le informazioni su una voce di menu.|
|[CMenu:: GetMenuState](#getmenustate)|Restituisce lo stato della voce di menu specificata o il numero di elementi in un menu di scelta rapida.|
|[CMenu:: GetMenuString](#getmenustring)|Recupera l'etichetta della voce di menu specificata.|
|[CMenu:: GetSafeHmenu](#getsafehmenu)|Restituisce la `m_hMenu` di cui è stato eseguito il wrapper da questo oggetto `CMenu`.|
|[CMenu:: getsottomenù](#getsubmenu)|Recupera un puntatore a un menu di scelta rapida.|
|[CMenu::InsertMenu](#insertmenu)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata, portando gli altri elementi verso il basso nel menu.|
|[CMenu:: InsertMenuItem](#insertmenuitem)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata in un menu.|
|[CMenu:: LoadMenu](#loadmenu)|Carica una risorsa di menu dal file eseguibile e la collega a un oggetto `CMenu`.|
|[CMenu:: LoadMenuIndirect](#loadmenuindirect)|Carica un menu da un modello di menu in memoria e lo collega a un oggetto `CMenu`.|
|[CMenu:: MeasureItem](#measureitem)|Chiamata eseguita dal Framework per determinare le dimensioni del menu quando viene creato un menu creato dal proprietario.|
|[CMenu::ModifyMenu](#modifymenu)|Modifica una voce di menu esistente in corrispondenza della posizione specificata.|
|[CMenu:: RemoveMenu](#removemenu)|Elimina una voce di menu con un menu popup associato dal menu specificato.|
|[CMenu:: SetDefaultItem](#setdefaultitem)|Imposta la voce di menu predefinita per il menu specificato.|
|[CMenu:: SetMenuContextHelpId](#setmenucontexthelpid)|Imposta l'ID del contesto della guida da associare al menu.|
|[CMenu:: SetMenuInfo](#setmenuinfo)|Imposta le informazioni in un menu specifico.|
|[CMenu:: SetMenuItemBitmaps](#setmenuitembitmaps)|Associa le bitmap di segno di spunta specificate a una voce di menu.|
|[CMenu:: SetMenuItemInfo](#setmenuiteminfo)|Modifica le informazioni relative a una voce di menu.|
|[CMenu:: TrackPopupMenu](#trackpopupmenu)|Visualizza un menu a comparsa mobile nella posizione specificata e tiene traccia della selezione degli elementi nel menu a comparsa.|
|[CMenu:: TrackPopupMenuEx](#trackpopupmenuex)|Visualizza un menu a comparsa mobile nella posizione specificata e tiene traccia della selezione degli elementi nel menu a comparsa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu:: operator HMENU](#operator_hmenu)|Recupera l'handle dell'oggetto menu.|
|[CMenu:: operator! =](#operator_neq)|Determina se due oggetti menu non sono uguali.|
|[CMenu:: operator = =](#operator_eq_eq)|Determina se due oggetti menu sono uguali.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenu:: m_hMenu](#m_hmenu)|Specifica l'handle per il menu di Windows collegato all'oggetto `CMenu`.|

## <a name="remarks"></a>Osservazioni

Fornisce funzioni membro per la creazione, il monitoraggio, l'aggiornamento e l'eliminazione di un menu.

Creare un oggetto `CMenu` sul stack frame come locale, quindi chiamare le funzioni membro di `CMenu`per modificare il nuovo menu in base alle esigenze. Chiamare quindi [CWnd:: semenu](../../mfc/reference/cwnd-class.md#setmenu) per impostare il menu su una finestra, seguito immediatamente da una chiamata alla funzione membro di [scollegamento](#detach) dell'oggetto `CMenu`. La funzione membro `CWnd::SetMenu` imposta il menu della finestra sul nuovo menu, fa in modo che la finestra venga ridisegnato per riflettere la modifica del menu e passa anche la proprietà del menu alla finestra. La chiamata a `Detach` disconnette il HMENU dall'oggetto `CMenu`, in modo che quando la variabile `CMenu` locale passa fuori dall'ambito, il distruttore dell'oggetto `CMenu` non tenta di eliminare definitivamente un menu che non ne è più proprietario. Il menu stesso viene eliminato automaticamente quando viene eliminata definitivamente la finestra.

È possibile usare la funzione membro [LoadMenuIndirect](#loadmenuindirect) per creare un menu da un modello in memoria, ma un menu creato da una risorsa tramite una chiamata a [LoadMenu](#loadmenu) è più facilmente gestito e la risorsa di menu può essere creata e modificata dall'editor dei menu.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMenu`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="appendmenu"></a>CMenu:: AppendMenu

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
Specifica le informazioni sullo stato della nuova voce di menu quando viene aggiunta al menu. È costituito da uno o più valori elencati nella sezione Osservazioni.

*nIDNewItem*<br/>
Specifica l'ID di comando della nuova voce di menu o, se *nFlags* è impostato su MF_POPUP, l'handle di menu (`HMENU`) di un menu a comparsa. Il parametro *nIDNewItem* viene ignorato (non necessario) se *nFlags* è impostato su MF_SEPARATOR.

*lpszNewItem*<br/>
Specifica il contenuto della nuova voce di menu. Il parametro *nFlags* viene usato per interpretare *lpszNewItem* nel modo seguente:

|nFlags|Interpretazione di lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contiene un valore a 32 bit fornito dall'applicazione che può essere utilizzato dall'applicazione per gestire dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione quando elabora WM_MEASUREITEM e WM_DRAWITEM messaggi. Il valore viene archiviato nel membro `itemData` della struttura fornita con tali messaggi.|
|MF_STRING|Contiene un puntatore a una stringa con terminazione null. Si tratta dell'interpretazione predefinita.|
|MF_SEPARATOR|Il parametro *lpszNewItem* viene ignorato (non necessario).|

*pBmp*<br/>
Punta a un oggetto `CBitmap` che verrà utilizzato come voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'applicazione può specificare lo stato della voce di menu impostando i valori in *nFlags*. Quando *nIDNewItem* specifica un menu a comparsa, diventa parte del menu a cui viene aggiunto. Se il menu viene eliminato definitivamente, il menu aggiunto viene eliminato definitivamente. Un menu aggiunto deve essere scollegato da un oggetto `CMenu` per evitare conflitti. Si noti che MF_STRING e MF_OWNERDRAW non sono validi per la versione bitmap di `AppendMenu`.

Nell'elenco seguente vengono descritti i flag che possono essere impostati in *nFlags*:

- MF_CHECKED funge da interruttore con MF_UNCHECKED per inserire il segno di spunta predefinito accanto all'elemento. Quando l'applicazione fornisce bitmap di segno di spunta (vedere la funzione membro [SetMenuItemBitmaps](#setmenuitembitmaps) ), viene visualizzata la bitmap "segno di spunta su".

- MF_UNCHECKED funge da interruttore con MF_CHECKED per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce bitmap di segno di spunta (vedere la funzione membro `SetMenuItemBitmaps`), viene visualizzata la bitmap "segno di spunta fuori".

- MF_DISABLED disabilita la voce di menu in modo che non sia possibile selezionarla, ma non la attenua.

- MF_ENABLED Abilita la voce di menu in modo che sia possibile selezionarla e ripristinarla dallo stato in grigio.

- MF_GRAYED disabilita la voce di menu in modo che non possa essere selezionata e offuscata.

- MF_MENUBARBREAK posiziona l'elemento su una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. La nuova colonna del menu popup sarà separata dalla colonna precedente mediante una linea di divisione verticale.

- MF_MENUBREAK posiziona l'elemento su una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. Non viene posizionata alcuna linea di separazione tra le colonne.

- MF_OWNERDRAW specifica che l'elemento è un elemento di traccia del proprietario. Quando il menu viene visualizzato per la prima volta, la finestra che possiede il menu riceve un messaggio di WM_MEASUREITEM, che recupera l'altezza e la larghezza della voce di menu. Il messaggio WM_DRAWITEM è quello inviato ogni volta che il proprietario deve aggiornare l'aspetto visivo della voce di menu. Questa opzione non è valida per una voce di menu di primo livello.

- MF_POPUP specifica che alla voce di menu è associato un menu a comparsa. Il parametro ID specifica un handle per un menu di scelta rapida da associare all'elemento. Viene usato per aggiungere un menu popup di primo livello o un menu a comparsa gerarchico a una voce di menu di scelta rapida.

- MF_SEPARATOR disegna una linea di divisione orizzontale. Può essere usato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.

- MF_STRING specifica che la voce di menu è una stringa di caratteri.

Ognuno dei seguenti gruppi elenca i flag che si escludono a vicenda e non possono essere usati insieme:

- MF_DISABLED, MF_ENABLED e MF_GRAYED

- MF_STRING, MF_OWNERDRAW, MF_SEPARATOR e la versione bitmap

- MF_MENUBARBREAK e MF_MENUBREAK

- MF_CHECKED e MF_UNCHECKED

Ogni volta che un menu che risiede in una finestra viene modificato (indipendentemente dal fatto che la finestra sia visualizzata), l'applicazione deve chiamare [CWnd::D rawmenubar](../../mfc/reference/cwnd-class.md#drawmenubar).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: CreateMenu](#createmenu).

##  <a name="attach"></a>CMenu:: Connetti

Connette un menu di Windows esistente a un oggetto `CMenu`.

```
BOOL Attach(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
Specifica un handle per un menu di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione non deve essere chiamata se un menu è già collegato all'oggetto `CMenu`. L'handle di menu viene archiviato nel membro dati `m_hMenu`.

Se il menu che si desidera modificare è già associato a una finestra, è possibile utilizzare la funzione [CWnd:: GetMenu](../../mfc/reference/cwnd-class.md#getmenu) per ottenere un handle per il menu.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]

##  <a name="checkmenuitem"></a>CMenu:: CheckMenuItem

Aggiunge segni di spunta o rimuove segni di spunta dalle voci di menu nel menu a comparsa.

```
UINT CheckMenuItem(
    UINT nIDCheckItem,
    UINT nCheck);
```

### <a name="parameters"></a>Parametri

*nIDCheckItem*<br/>
Specifica la voce di menu da controllare, come determinato da *nPer*.

*nPer*<br/>
Specifica come controllare la voce di menu e come determinare la posizione dell'elemento nel menu. Il parametro *nPer* può essere una combinazione di MF_CHECKED o MF_UNCHECKED con i flag MF_BYPOSITION o MF_BYCOMMAND. Questi flag possono essere combinati utilizzando l'operatore OR bit per bit. Hanno i significati seguenti:

- MF_BYCOMMAND specifica che il parametro restituisce l'ID del comando della voce di menu esistente. Questa è la modalità predefinita.

- MF_BYPOSITION specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.

- MF_CHECKED funge da interruttore con MF_UNCHECKED per inserire il segno di spunta predefinito accanto all'elemento.

- MF_UNCHECKED funge da interruttore con MF_CHECKED per rimuovere un segno di spunta accanto all'elemento.

### <a name="return-value"></a>Valore restituito

Stato precedente dell'elemento: MF_CHECKED o MF_UNCHECKED o 0xFFFFFFFF se la voce di menu non esiste.

### <a name="remarks"></a>Osservazioni

Il parametro *nIDCheckItem* specifica l'elemento da modificare.

Il parametro *nIDCheckItem* può identificare una voce di menu popup e una voce di menu. Non sono necessari passaggi speciali per verificare una voce di menu di scelta rapida. Non è possibile controllare le voci di menu di primo livello. Una voce di menu di scelta rapida deve essere controllata in base alla posizione, poiché non dispone di un identificatore di voce di menu associato.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: GetMenuState](#getmenustate).

##  <a name="checkmenuradioitem"></a>CMenu:: CheckMenuRadioItem

Controlla una voce di menu specificata e la imposta come voce di radio.

```
BOOL CheckMenuRadioItem(
    UINT nIDFirst,
    UINT nIDLast,
    UINT nIDItem,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*nIDFirst*<br/>
Specifica come ID o offset, a seconda del valore di *nFlags*, la prima voce di menu del gruppo di pulsanti di opzione.

*nIDLast*<br/>
Specifica (come ID o offset, a seconda del valore di *nFlags*) l'ultima voce di menu nel gruppo di pulsanti di opzione.

*nIDItem*<br/>
Specifica (come ID o offset, a seconda del valore di *nFlags*) elemento del gruppo che verrà verificato con un pulsante di opzione.

*nFlags*<br/>
Specifica l'interpretazione di *nIDFirst*, *nIDLast*e *nIDItem* nel modo seguente:

|nFlags|Interpretazione|
|------------|--------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID del comando della voce di menu esistente. Si tratta dell'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario, 0

### <a name="remarks"></a>Osservazioni

Allo stesso tempo, la funzione deseleziona tutte le altre voci di menu nel gruppo associato e cancella il flag del tipo di elemento radio per tali elementi. L'elemento selezionato viene visualizzato utilizzando una bitmap del pulsante di opzione (o Bullet) anziché una bitmap del segno di spunta.

### <a name="example"></a>Esempio

  Vedere l'esempio per [ON_COMMAND_RANGE](message-map-macros-mfc.md#on_command_range).

##  <a name="cmenu"></a>CMenu:: CMenu

Crea un menu vuoto e lo collega a un oggetto `CMenu`.

```
CMenu();
```

### <a name="remarks"></a>Osservazioni

Il menu non viene creato fino a quando non si chiama una delle funzioni membro create o Load di `CMenu:`

- [CreateMenu](#createmenu)

- [CreatePopupMenu](#createpopupmenu)

- [LoadMenu](#loadmenu)

- [LoadMenuIndirect](#loadmenuindirect)

- [Collega](#attach)

##  <a name="createmenu"></a>CMenu:: CreateMenu

Crea un menu e lo connette all'oggetto `CMenu`.

```
BOOL CreateMenu();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il menu è stato creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Il menu è inizialmente vuoto. È possibile aggiungere voci di menu tramite la funzione membro `AppendMenu` o `InsertMenu`.

Se il menu viene assegnato a una finestra, viene eliminato automaticamente quando viene eliminata definitivamente la finestra.

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non è assegnato a una finestra. Un'applicazione libera un menu chiamando la funzione membro [DestroyMenu](#destroymenu) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#22](../../mfc/reference/codesnippet/cpp/cmenu-class_2.cpp)]

##  <a name="createpopupmenu"></a>CMenu:: CreatePopupMenu

Crea un menu a comparsa e lo collega all'oggetto `CMenu`.

```
BOOL CreatePopupMenu();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il menu popup è stato creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Il menu è inizialmente vuoto. È possibile aggiungere voci di menu tramite la funzione membro `AppendMenu` o `InsertMenu`. L'applicazione può aggiungere il menu a comparsa a un menu esistente o a un menu di scelta rapida. La funzione membro `TrackPopupMenu` può essere usata per visualizzare questo menu come menu a comparsa mobile e per tenere traccia delle selezioni nel menu a comparsa.

Se il menu viene assegnato a una finestra, viene eliminato automaticamente quando viene eliminata definitivamente la finestra. Se il menu viene aggiunto a un menu esistente, viene eliminato automaticamente quando tale menu viene eliminato definitivamente.

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu a comparsa se il menu non è assegnato a una finestra. Un'applicazione libera un menu chiamando la funzione membro [DestroyMenu](#destroymenu) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: CreateMenu](#createmenu).

##  <a name="deletemenu"></a>CMenu::D eleteMenu

Elimina un elemento dal menu.

```
BOOL DeleteMenu(
    UINT nPosition,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*nPosition*<br/>
Specifica la voce di menu da eliminare, come determinato da *nFlags*.

*nFlags*<br/>
Viene usato per interpretare *nPosition* nel modo seguente:

|nFlags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID del comando della voce di menu esistente. Si tratta dell'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se la voce di menu dispone di un menu di scelta rapida associato, `DeleteMenu` Elimina l'handle dal menu a comparsa e libera la memoria usata dal menu a comparsa.

Ogni volta che un menu che risiede in una finestra viene modificato (indipendentemente dal fatto che venga visualizzata la finestra), l'applicazione deve chiamare [CWnd::D rawmenubar](../../mfc/reference/cwnd-class.md#drawmenubar).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd:: GetMenu](../../mfc/reference/cwnd-class.md#getmenu).

##  <a name="deletetempmap"></a>CMenu::D eleteTempMap

Chiamato automaticamente dal gestore `CWinApp` tempo di inattività, Elimina tutti gli oggetti `CMenu` temporanei creati dalla funzione membro [FromHandle](#fromhandle) .

```
static void PASCAL DeleteTempMap();
```

### <a name="remarks"></a>Osservazioni

`DeleteTempMap` scollega l'oggetto menu di Windows collegato a un oggetto `CMenu` temporaneo prima di eliminare l'oggetto `CMenu`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#23](../../mfc/reference/codesnippet/cpp/cmenu-class_3.cpp)]

##  <a name="destroymenu"></a>CMenu::D estroyMenu

Elimina definitivamente il menu e tutte le risorse di Windows utilizzate.

```
BOOL DestroyMenu();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il menu viene eliminato definitivamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Il menu viene scollegato dall'oggetto `CMenu` prima che venga eliminato definitivamente. La funzione Windows `DestroyMenu` viene chiamata automaticamente nel distruttore `CMenu`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: CreateMenu](#createmenu).

##  <a name="detach"></a>CMenu::D etach

Scollega un menu di Windows da un oggetto `CMenu` e restituisce l'handle.

```
HMENU Detach();
```

### <a name="return-value"></a>Valore restituito

Handle, di tipo HMENU, in un menu di Windows, se ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Il membro dati `m_hMenu` è impostato su NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]

##  <a name="drawitem"></a>CMenu::D rawItem

Chiamata eseguita dal framework quando viene modificato un aspetto visivo di un menu creato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che contiene informazioni sul tipo di disegno necessario.

### <a name="remarks"></a>Osservazioni

Il membro `itemAction` della struttura `DRAWITEMSTRUCT` definisce l'azione di disegno da eseguire. Eseguire l'override di questa funzione membro per implementare il disegno per un oggetto `CMenu` di disegno del proprietario. L'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima della chiusura di questa funzione membro.

Per una descrizione della struttura `DRAWITEMSTRUCT`, vedere [CWnd:: OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) .

### <a name="example"></a>Esempio

Il codice seguente è riportato nell'esempio MFC [CTRLTEST](../../overview/visual-cpp-samples.md) :

[!code-cpp[NVC_MFCWindowing#24](../../mfc/reference/codesnippet/cpp/cmenu-class_4.cpp)]

##  <a name="enablemenuitem"></a>CMenu:: EnableMenuItem

Consente di abilitare, disabilitare o offuscare una voce di menu.

```
UINT EnableMenuItem(
    UINT nIDEnableItem,
    UINT nEnable);
```

### <a name="parameters"></a>Parametri

*nIDEnableItem*<br/>
Specifica la voce di menu da abilitare, come determinato da *nVuoi attivarla*. Questo parametro può specificare voci di menu popup e voci di menu standard.

*nVuoi attivarla*<br/>
Specifica l'azione da intraprendere. Può essere una combinazione di MF_DISABLED, MF_ENABLED o MF_GRAYED con MF_BYCOMMAND o MF_BYPOSITION. Questi valori possono essere combinati utilizzando l'operatore OR bit per bit. I valori hanno il significato seguente:

- MF_BYCOMMAND specifica che il parametro restituisce l'ID del comando della voce di menu esistente. Questa è la modalità predefinita.

- MF_BYPOSITION specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.

- MF_DISABLED disabilita la voce di menu in modo che non sia possibile selezionarla, ma non la attenua.

- MF_ENABLED Abilita la voce di menu in modo che sia possibile selezionarla e ripristinarla dallo stato in grigio.

- MF_GRAYED disabilita la voce di menu in modo che non possa essere selezionata e offuscata.

### <a name="return-value"></a>Valore restituito

Stato precedente (MF_DISABLED, MF_ENABLED o MF_GRAYED) oppure-1 se non è valido.

### <a name="remarks"></a>Osservazioni

Le funzioni membro [CreateMenu](#createmenu), [InsertMenu](#insertmenu), [ModifyMenu](#modifymenu)e [LoadMenuIndirect](#loadmenuindirect) possono inoltre impostare lo stato (abilitato, disabilitato o in grigio) di una voce di menu.

L'utilizzo del valore MF_BYPOSITION richiede che un'applicazione utilizzi la `CMenu`corretta. Se viene utilizzata la `CMenu` della barra dei menu, viene applicata una voce di menu di primo livello (un elemento nella barra dei menu). Per impostare lo stato di un elemento in un popup o un menu popup annidato in base alla posizione, un'applicazione deve specificare il `CMenu` del menu a comparsa.

Quando un'applicazione specifica il flag di MF_BYCOMMAND, Windows controlla tutte le voci di menu popup subordinate al `CMenu`; Pertanto, a meno che non siano presenti voci di menu duplicate, l'utilizzo della `CMenu` della barra dei menu è sufficiente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#25](../../mfc/reference/codesnippet/cpp/cmenu-class_5.cpp)]

##  <a name="fromhandle"></a>CMenu:: FromHandle

Restituisce un puntatore a un oggetto `CMenu` dato un handle di Windows a un menu.

```
static CMenu* PASCAL FromHandle(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
Handle di Windows per un menu.

### <a name="return-value"></a>Valore restituito

Puntatore a un `CMenu` che può essere temporaneo o permanente.

### <a name="remarks"></a>Osservazioni

Se un oggetto `CMenu` non è già collegato all'oggetto menu di Windows, viene creato e collegato un oggetto `CMenu` temporaneo.

Questo oggetto `CMenu` temporaneo è valido solo fino alla successiva esecuzione del tempo di inattività dell'applicazione nel ciclo di eventi, al momento dell'eliminazione di tutti gli oggetti temporanei.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: CreateMenu](#createmenu).

##  <a name="getdefaultitem"></a>CMenu:: GetDefaultItem

Determina la voce di menu predefinita nel menu specificato.

```
UINT GetDefaultItem(
    UINT gmdiFlags,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*gmdiFlags*<br/>
Valore che specifica il modo in cui la funzione Cerca le voci di menu. Questo parametro non può essere nessuno, uno o una combinazione dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|GMDI_GOINTOPOPUPS|Specifica che, se l'elemento predefinito è uno che apre un sottomenu, la funzione deve eseguire la ricerca in modo ricorsivo nel sottomenu corrispondente. Se il sottomenu non contiene elementi predefiniti, il valore restituito identifica l'elemento che apre il sottomenu.<br /><br /> Per impostazione predefinita, la funzione restituisce il primo elemento predefinito nel menu specificato, indipendentemente dal fatto che si tratti di un elemento che apre un sottomenu.|
|GMDI_USEDISABLED|Specifica che la funzione deve restituire un elemento predefinito, anche se è disabilitato.<br /><br /> Per impostazione predefinita, la funzione ignora gli elementi disabilitati o in grigio.|

*fByPos*<br/>
Valore che specifica se recuperare l'identificatore o la posizione della voce di menu. Se questo parametro è FALSE, viene restituito l'identificatore. In caso contrario, viene restituita la posizione.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è l'identificatore o la posizione della voce di menu. Se la funzione ha esito negativo, il valore restituito è-1.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento della funzione Win32 [GetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-getmenudefaultitem), come descritto nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).

##  <a name="getmenucontexthelpid"></a>CMenu:: GetMenuContextHelpId

Recupera l'ID della guida del contesto associato all'`CMenu`.

```
DWORD GetMenuContextHelpId() const;
```

### <a name="return-value"></a>Valore restituito

ID della guida del contesto attualmente associato a `CMenu` se ne esiste uno; in caso contrario, zero.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).

##  <a name="getmenuinfo"></a>CMenu:: GetMenuInfo

Recupera le informazioni per un menu.

```
BOOL GetMenuInfo(LPMENUINFO lpcmi) const;
```

### <a name="parameters"></a>Parametri

*lpcmi*<br/>
Puntatore a una struttura [MENUINFO](/windows/win32/api/winuser/ns-winuser-menuinfo) contenente informazioni per il menu.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare le informazioni sul menu.

##  <a name="getmenuitemcount"></a>CMenu:: GetMenuItemCount

Determina il numero di elementi in un menu di scelta rapida o di primo livello.

```
UINT GetMenuItemCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nel menu se la funzione ha esito positivo; in caso contrario,-1.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd:: GetMenu](../../mfc/reference/cwnd-class.md#getmenu).

##  <a name="getmenuitemid"></a>CMenu:: GetMenuItemID

Ottiene l'identificatore di voce di menu per una voce di menu che si trova nella posizione definita da *nPos*.

```
UINT GetMenuItemID(int nPos) const;
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Specifica la posizione (in base zero) della voce di menu il cui ID viene recuperato.

### <a name="return-value"></a>Valore restituito

ID dell'elemento specificato in un menu popup se la funzione ha esito positivo. Se l'elemento specificato è un menu a comparsa (in contrapposizione a un elemento all'interno del menu popup), il valore restituito è-1. Se *nPos* corrisponde a una voce di menu separatore, il valore restituito è 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).

##  <a name="getmenuiteminfo"></a>CMenu:: GetMenuItemInfo

Recupera le informazioni su una voce di menu.

```
BOOL GetMenuItemInfo(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem*<br/>
Identificatore o posizione della voce di menu per cui ottenere informazioni. Il significato di questo parametro dipende dal valore di `ByPos`.

*lpMenuItemInfo*<br/>
Puntatore a un [MENUITEMINFO](/windows/win32/api/winuser/ns-winuser-menuiteminfow), come descritto nella Windows SDK, che contiene informazioni sul menu.

*fByPos*<br/>
Valore che specifica il significato della `nIDItem`. Per impostazione predefinita, `ByPos` è FALSE, che indica che uItem è un identificatore della voce di menu. Se `ByPos` non è impostato su FALSE, indica la posizione di una voce di menu.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni estese sugli errori, usare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror), come descritto nel Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del della funzione Win32 [GetMenuItemInfo](/windows/win32/api/winuser/nf-winuser-getmenuiteminfow), come descritto nel Windows SDK. Si noti che nell'implementazione MFC di `GetMenuItemInfo`non viene utilizzato un handle per un menu.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#26](../../mfc/reference/codesnippet/cpp/cmenu-class_6.cpp)]

##  <a name="getmenustate"></a>CMenu:: GetMenuState

Restituisce lo stato della voce di menu specificata o il numero di elementi in un menu di scelta rapida.

```
UINT GetMenuState(
    UINT nID,
    UINT nFlags) const;
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Specifica l'ID della voce di menu, come determinato da *nFlags*.

*nFlags*<br/>
Specifica la natura di *NID*. Può essere uno dei valori seguenti:

- MF_BYCOMMAND specifica che il parametro restituisce l'ID del comando della voce di menu esistente. Questa è la modalità predefinita.

- MF_BYPOSITION specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.

### <a name="return-value"></a>Valore restituito

Il valore 0xFFFFFFFF se l'elemento specificato non esiste. Se *NID* identifica un menu a comparsa, il byte più significativo contiene il numero di elementi nel menu popup e il byte di ordine inferiore contiene i flag di menu associati al menu di scelta rapida. In caso contrario, il valore restituito è una maschera (booleana o) dei valori dell'elenco seguente (questa maschera descrive lo stato della voce di menu che *NID* identifica):

- MF_CHECKED funge da interruttore con MF_UNCHECKED per inserire il segno di spunta predefinito accanto all'elemento. Quando l'applicazione fornisce bitmap di segno di spunta (vedere la funzione membro `SetMenuItemBitmaps`), viene visualizzata la bitmap "segno di spunta su".

- MF_DISABLED disabilita la voce di menu in modo che non sia possibile selezionarla, ma non la attenua.

- MF_ENABLED Abilita la voce di menu in modo che sia possibile selezionarla e ripristinarla dallo stato in grigio. Si noti che il valore di questa costante è 0. Quando si utilizza questo valore, un'applicazione non deve eseguire il test con 0.

- MF_GRAYED disabilita la voce di menu in modo che non possa essere selezionata e offuscata.

- MF_MENUBARBREAK posiziona l'elemento su una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. La nuova colonna del menu popup sarà separata dalla colonna precedente mediante una linea di divisione verticale.

- MF_MENUBREAK posiziona l'elemento su una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. Non viene posizionata alcuna linea di separazione tra le colonne.

- MF_SEPARATOR disegna una linea di divisione orizzontale. Può essere usato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.

- MF_UNCHECKED funge da interruttore con MF_CHECKED per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce bitmap di segno di spunta (vedere la funzione membro `SetMenuItemBitmaps`), viene visualizzata la bitmap "segno di spunta fuori". Si noti che il valore di questa costante è 0. Quando si utilizza questo valore, un'applicazione non deve eseguire il test con 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#27](../../mfc/reference/codesnippet/cpp/cmenu-class_7.cpp)]

##  <a name="getmenustring"></a>CMenu:: GetMenuString

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
Specifica l'identificatore di tipo integer della voce di menu o l'offset della voce di menu nel menu, a seconda del valore di *nFlags*.

*lpString*<br/>
Punta al buffer che deve ricevere l'etichetta.

*rString*<br/>
Riferimento a un oggetto `CString` che deve ricevere la stringa di menu copiata.

*nMaxCount*<br/>
Specifica la lunghezza massima (in caratteri) dell'etichetta da copiare. Se l'etichetta è più lunga del valore massimo specificato in *nMaxCount*, i caratteri aggiuntivi vengono troncati.

*nFlags*<br/>
Specifica l'interpretazione del parametro *nIDItem* . Può essere uno dei valori seguenti:

|nFlags|Interpretazione di nIDItem|
|------------|-------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID del comando della voce di menu esistente. Si tratta dell'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

### <a name="return-value"></a>Valore restituito

Specifica il numero effettivo di caratteri copiati nel buffer, escluso il carattere di terminazione null.

### <a name="remarks"></a>Osservazioni

Il parametro *nMaxCount* deve avere una dimensione maggiore del numero di caratteri nell'etichetta per contenere il carattere null che termina una stringa.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).

##  <a name="getsafehmenu"></a>CMenu:: GetSafeHmenu

Restituisce il HMENU di cui è stato eseguito il wrapper da questo oggetto `CMenu` o un puntatore`CMenu` NULL.

```
HMENU GetSafeHmenu() const;
```

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: LoadMenu](#loadmenu).

##  <a name="getsubmenu"></a>CMenu:: getsottomenù

Recupera l'oggetto `CMenu` di un menu di scelta rapida.

```
CMenu* GetSubMenu(int nPos) const;
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Specifica la posizione del menu di scelta rapida contenuto nel menu. I valori di posizione iniziano da 0 per la prima voce di menu. Impossibile utilizzare l'identificatore del menu a comparsa in questa funzione.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CMenu` il cui membro `m_hMenu` contiene un handle per il menu di scelta rapida se è presente un menu a comparsa nella posizione specificata. in caso contrario, NULL. Se non esiste un oggetto `CMenu`, ne viene creato uno temporaneo. Il puntatore `CMenu` restituito non deve essere archiviato.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: TrackPopupMenu](#trackpopupmenu).

##  <a name="insertmenu"></a>CMenu:: InsertMenu

Inserisce una nuova voce di menu nella posizione specificata da *nPosition* e sposta gli altri elementi verso il basso nel menu.

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
Specifica la voce di menu prima della quale deve essere inserita la nuova voce di menu. Il parametro *nFlags* può essere utilizzato per interpretare *nPosition* nei modi seguenti:

|nFlags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID del comando della voce di menu esistente. Si tratta dell'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0. Se *nPosition* è-1, alla fine del menu viene aggiunta la nuova voce di menu.|

*nFlags*<br/>
Specifica la modalità di interpretazione di *nPosition* e specifica le informazioni sullo stato della nuova voce di menu quando viene aggiunta al menu. Per un elenco dei flag che è possibile impostare, vedere la funzione membro [AppendMenu](#appendmenu) . Per specificare più di un valore, utilizzare l'operatore OR bit per bit per combinarli con il flag MF_BYCOMMAND o MF_BYPOSITION.

*nIDNewItem*<br/>
Specifica l'ID di comando della nuova voce di menu o, se *nFlags* è impostato su MF_POPUP, l'handle di menu (HMENU) del menu a comparsa. Il parametro *nIDNewItem* viene ignorato (non necessario) se *nFlags* è impostato su MF_SEPARATOR.

*lpszNewItem*<br/>
Specifica il contenuto della nuova voce di menu. *nFlags* può essere usato per interpretare *lpszNewItem* nei modi seguenti:

|nFlags|Interpretazione di lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contiene un valore a 32 bit fornito dall'applicazione che può essere utilizzato dall'applicazione per gestire dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione nel membro `itemData` della struttura fornita dai messaggi [WM_MEASUREITEM](/windows/win32/Controls/wm-measureitem) e [WM_DRAWITEM](/windows/win32/Controls/wm-drawitem) . Questi messaggi vengono inviati quando la voce di menu viene inizialmente visualizzata o modificata.|
|MF_STRING|Contiene un puntatore long a una stringa con terminazione null. Si tratta dell'interpretazione predefinita.|
|MF_SEPARATOR|Il parametro *lpszNewItem* viene ignorato (non necessario).|

*pBmp*<br/>
Punta a un oggetto `CBitmap` che verrà utilizzato come voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'applicazione può specificare lo stato della voce di menu impostando i valori in *nFlags*.

Ogni volta che un menu che risiede in una finestra viene modificato (indipendentemente dal fatto che venga visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.

Quando *nIDNewItem* specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se il menu viene eliminato definitivamente, anche il menu inserito verrà eliminato definitivamente. Un menu inserito deve essere scollegato da un oggetto `CMenu` per evitare conflitti.

Se la finestra figlio MDI (Multiple Document Interface) attiva è ingrandita e un'applicazione inserisce un menu a comparsa nel menu dell'applicazione MDI chiamando questa funzione e specificando il flag di MF_BYPOSITION, il menu viene inserito una posizione più a sinistra di previsto. Questo problema si verifica perché il menu di controllo della finestra figlio MDI attiva viene inserito nella prima posizione della barra dei menu della finestra cornice MDI. Per posizionare correttamente il menu, l'applicazione deve aggiungere 1 al valore di posizione che altrimenti verrebbe utilizzato. Un'applicazione può utilizzare il messaggio WM_MDIGETACTIVE per determinare se la finestra figlio attualmente attiva è ingrandita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#28](../../mfc/reference/codesnippet/cpp/cmenu-class_8.cpp)]

##  <a name="insertmenuitem"></a>CMenu:: InsertMenuItem

Inserisce una nuova voce di menu in corrispondenza della posizione specificata in un menu.

```
BOOL InsertMenuItem(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem*<br/>
Vedere la descrizione di *uItem* in [InsertMenuItem](/windows/win32/api/winuser/nf-winuser-insertmenuitemw) nella Windows SDK.

*lpMenuItemInfo*<br/>
Vedere la descrizione di *lpmii* in `InsertMenuItem` nel Windows SDK.

*fByPos*<br/>
Vedere la descrizione di *fByPosition* in `InsertMenuItem` nel Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione esegue il wrapping di [InsertMenuItem](/windows/win32/api/winuser/nf-winuser-insertmenuitemw), descritto nel Windows SDK.

##  <a name="loadmenu"></a>CMenu:: LoadMenu

Carica una risorsa di menu dal file eseguibile dell'applicazione e la collega all'oggetto `CMenu`.

```
BOOL LoadMenu(LPCTSTR lpszResourceName);
BOOL LoadMenu(UINT nIDResource);
```

### <a name="parameters"></a>Parametri

*lpszResourceName*<br/>
Punta a una stringa con terminazione null che contiene il nome della risorsa di menu da caricare.

*nIDResource*<br/>
Specifica l'ID menu della risorsa di menu da caricare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la risorsa di menu è stata caricata correttamente. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non è assegnato a una finestra. Un'applicazione libera un menu chiamando la funzione membro [DestroyMenu](#destroymenu) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#29](../../mfc/reference/codesnippet/cpp/cmenu-class_9.cpp)]

##  <a name="loadmenuindirect"></a>CMenu:: LoadMenuIndirect

Carica una risorsa da un modello di menu in memoria e la collega all'oggetto `CMenu`.

```
BOOL LoadMenuIndirect(const void* lpMenuTemplate);
```

### <a name="parameters"></a>Parametri

*lpMenuTemplate*<br/>
Punta a un modello di menu, ovvero una singola struttura [MENUITEMTEMPLATEHEADER](/windows/win32/api/winuser/ns-winuser-menuitemtemplateheader) e una raccolta di una o più strutture [MENUITEMTEMPLATE](/windows/win32/api/winuser/ns-winuser-menuitemtemplate) . Per ulteriori informazioni su queste due strutture, vedere la Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la risorsa di menu è stata caricata correttamente. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un modello di menu è un'intestazione seguita da una raccolta di una o più strutture [MENUITEMTEMPLATE](/windows/win32/api/winuser/ns-winuser-menuitemtemplate) , ognuna delle quali può contenere una o più voci di menu e menu di scelta rapida.

Il numero di versione deve essere 0.

I flag di `mtOption` devono includere MF_END per l'ultimo elemento in un elenco popup e per l'ultimo elemento nell'elenco principale. Vedere la funzione membro `AppendMenu` per altri flag. Quando si specifica MF_POPUP in `mtOption`, è necessario omettere il membro `mtId` dalla struttura MENUITEMTEMPLATE.

Lo spazio allocato per la struttura MENUITEMTEMPLATE deve essere sufficientemente grande affinché `mtString` contenga il nome della voce di menu come stringa con terminazione null.

Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non è assegnato a una finestra. Un'applicazione libera un menu chiamando la funzione membro [DestroyMenu](#destroymenu) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#30](../../mfc/reference/codesnippet/cpp/cmenu-class_10.cpp)]

##  <a name="m_hmenu"></a>CMenu:: m_hMenu

Specifica l'handle HMENU del menu di Windows collegato all'oggetto `CMenu`.

```
HMENU m_hMenu;
```

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: LoadMenu](#loadmenu).

##  <a name="measureitem"></a>CMenu:: MeasureItem

Chiamato dal framework quando viene creato un menu con lo stile di creazione del proprietario.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct*<br/>
Puntatore a una struttura `MEASUREITEMSTRUCT`.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare la struttura `MEASUREITEMSTRUCT` per informare le finestre delle dimensioni del menu.

Per una descrizione della struttura `MEASUREITEMSTRUCT`, vedere [CWnd:: OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) .

### <a name="example"></a>Esempio

Il codice seguente è riportato nell'esempio MFC [CTRLTEST](../../overview/visual-cpp-samples.md) :

[!code-cpp[NVC_MFCWindowing#31](../../mfc/reference/codesnippet/cpp/cmenu-class_11.cpp)]

##  <a name="modifymenu"></a>CMenu:: ModifyMenu

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

*nPosition*<br/>
Specifica la voce di menu da modificare. Il parametro *nFlags* può essere utilizzato per interpretare *nPosition* nei modi seguenti:

|nFlags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID del comando della voce di menu esistente. Si tratta dell'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

*nFlags*<br/>
Specifica il modo in cui *nPosition* viene interpretato e fornisce informazioni sulle modifiche da apportare alla voce di menu. Per un elenco di flag che è possibile impostare, vedere la funzione membro [AppendMenu](#appendmenu) .

*nIDNewItem*<br/>
Specifica l'ID di comando della voce di menu modificata o, se *nFlags* è impostato su MF_POPUP, il menu di scelta rapida (HMENU) di un menu a comparsa. Il parametro *nIDNewItem* viene ignorato (non necessario) se *nFlags* è impostato su MF_SEPARATOR.

*lpszNewItem*<br/>
Specifica il contenuto della nuova voce di menu. Il parametro *nFlags* può essere utilizzato per interpretare *lpszNewItem* nei modi seguenti:

|nFlags|Interpretazione di lpszNewItem|
|------------|-----------------------------------|
|MF_OWNERDRAW|Contiene un valore a 32 bit fornito dall'applicazione che può essere utilizzato dall'applicazione per gestire dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione quando elabora MF_MEASUREITEM e MF_DRAWITEM.|
|MF_STRING|Contiene un puntatore long a una stringa con terminazione null o a un `CString`.|
|MF_SEPARATOR|Il parametro *lpszNewItem* viene ignorato (non necessario).|

*pBmp*<br/>
Punta a un oggetto `CBitmap` che verrà utilizzato come voce di menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'applicazione specifica il nuovo stato della voce di menu impostando i valori in *nFlags*. Se questa funzione sostituisce un menu a comparsa associato alla voce di menu, Elimina il vecchio menu popup e libera la memoria usata dal menu a comparsa.

Quando *nIDNewItem* specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se il menu viene eliminato definitivamente, anche il menu inserito verrà eliminato definitivamente. Un menu inserito deve essere scollegato da un oggetto `CMenu` per evitare conflitti.

Ogni volta che un menu che risiede in una finestra viene modificato (indipendentemente dal fatto che venga visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`. Per modificare gli attributi delle voci di menu esistenti, è molto più veloce usare le funzioni membro `CheckMenuItem` e `EnableMenuItem`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).

##  <a name="operator_hmenu"></a>CMenu:: operator HMENU

Utilizzare questo operatore per recuperare l'handle dell'oggetto `CMenu`.

```
operator HMENU() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, l'handle dell'oggetto `CMenu`; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

È possibile usare l'handle per chiamare direttamente le API di Windows.

##  <a name="operator_neq"></a>CMenu:: operator! =

Determina se due menu non sono logicamente uguali.

```
BOOL operator!=(const CMenu& menu) const;
```

### <a name="parameters"></a>Parametri

*menu*<br/>
Oggetto `CMenu` per il confronto.

### <a name="remarks"></a>Osservazioni

Verifica se un oggetto menu sul lato sinistro non è uguale a un oggetto menu a destra.

##  <a name="operator_eq_eq"></a>CMenu:: operator = =

Determina se due menu sono logicamente uguali.

```
BOOL operator==(const CMenu& menu) const;
```

### <a name="parameters"></a>Parametri

*menu*<br/>
Oggetto `CMenu` per il confronto.

### <a name="remarks"></a>Osservazioni

Verifica se un oggetto menu a sinistra è uguale (in termini di valore HMENU) a un oggetto menu a destra.

##  <a name="removemenu"></a>CMenu:: RemoveMenu

Elimina dal menu una voce di menu con un menu popup associato.

```
BOOL RemoveMenu(
    UINT nPosition,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*nPosition*<br/>
Specifica la voce di menu da rimuovere. Il parametro *nFlags* può essere utilizzato per interpretare *nPosition* nei modi seguenti:

|nFlags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID del comando della voce di menu esistente. Si tratta dell'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

*nFlags*<br/>
Specifica la modalità di interpretazione di *nPosition* .

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Non elimina l'handle per un menu di scelta rapida, quindi il menu può essere riutilizzato. Prima di chiamare questa funzione, l'applicazione può chiamare la funzione membro `GetSubMenu` per recuperare il popup `CMenu` oggetto per il riutilizzo.

Ogni volta che un menu che risiede in una finestra viene modificato (indipendentemente dal fatto che venga visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).

##  <a name="setdefaultitem"></a>CMenu:: SetDefaultItem

Imposta la voce di menu predefinita per il menu specificato.

```
BOOL SetDefaultItem(
    UINT uItem,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem*<br/>
Identificatore o posizione della nuova voce di menu predefinita o-1 per nessun elemento predefinito. Il significato di questo parametro dipende dal valore di *fByPos*.

*fByPos*<br/>
Valore che specifica il significato di *uItem*. Se questo parametro è FALSE, *uItem* è un identificatore della voce di menu. In caso contrario, si tratta di una posizione della voce di menu.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni estese sugli errori, usare la funzione Win32 [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror), come descritto nel Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento della funzione Win32 [SetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-setmenudefaultitem), come descritto nel Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).

##  <a name="setmenucontexthelpid"></a>CMenu:: SetMenuContextHelpId

Associa un ID della guida del contesto a `CMenu`.

```
BOOL SetMenuContextHelpId(DWORD dwContextHelpId);
```

### <a name="parameters"></a>Parametri

*dwContextHelpId*<br/>
ID della Guida di contesto da associare a `CMenu`.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario, 0

### <a name="remarks"></a>Osservazioni

Poiché tutti gli elementi del menu condividono questo identificatore, non è possibile alleghi un identificatore di contesto della Guida alle singole voci di menu.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).

##  <a name="setmenuinfo"></a>CMenu:: SetMenuInfo

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

##  <a name="setmenuitembitmaps"></a>CMenu:: SetMenuItemBitmaps

Associa le bitmap specificate a una voce di menu.

```
BOOL SetMenuItemBitmaps(
    UINT nPosition,
    UINT nFlags,
    const CBitmap* pBmpUnchecked,
    const CBitmap* pBmpChecked);
```

### <a name="parameters"></a>Parametri

*nPosition*<br/>
Specifica la voce di menu da modificare. Il parametro *nFlags* può essere utilizzato per interpretare *nPosition* nei modi seguenti:

|nFlags|Interpretazione di nPosition|
|------------|---------------------------------|
|MF_BYCOMMAND|Specifica che il parametro fornisce l'ID del comando della voce di menu esistente. Si tratta dell'impostazione predefinita se non è impostata né MF_BYCOMMAND né MF_BYPOSITION.|
|MF_BYPOSITION|Specifica che il parametro assegna la posizione della voce di menu esistente. Il primo elemento si trova nella posizione 0.|

*nFlags*<br/>
Specifica la modalità di interpretazione di *nPosition* .

*pBmpUnchecked*<br/>
Specifica la bitmap da usare per le voci di menu che non sono selezionate.

*pBmpChecked*<br/>
Specifica la bitmap da usare per le voci di menu controllate.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se la voce di menu è selezionata o deselezionata, Windows Visualizza la bitmap appropriata accanto alla voce di menu.

Se *pBmpUnchecked* o *pBmpChecked* è null, Windows non visualizza nulla accanto alla voce di menu per l'attributo corrispondente. Se entrambi i parametri sono NULL, Windows utilizza il segno di spunta predefinito quando l'elemento è selezionato e rimuove il segno di spunta quando l'elemento è deselezionato.

Quando il menu viene eliminato definitivamente, le bitmap non vengono eliminate definitivamente. l'applicazione deve eliminarli definitivamente.

La funzione Windows `GetMenuCheckMarkDimensions` recupera le dimensioni del segno di spunta predefinito usato per le voci di menu. L'applicazione utilizza questi valori per determinare le dimensioni appropriate per le bitmap fornite con questa funzione. Ottenere le dimensioni, creare le bitmap e quindi impostarle.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#32](../../mfc/reference/codesnippet/cpp/cmenu-class_12.cpp)]

[!code-cpp[NVC_MFCWindowing#33](../../mfc/reference/codesnippet/cpp/cmenu-class_13.cpp)]

##  <a name="setmenuiteminfo"></a>CMenu:: SetMenuItemInfo

Modifica le informazioni relative a una voce di menu.

```
BOOL SetMenuItemInfo(
    UINT uItem,
    LPMENUITEMINFO lpMenuItemInfo,
    BOOL fByPos = FALSE);
```

### <a name="parameters"></a>Parametri

*uItem*<br/>
Vedere la descrizione di *uItem* in [SetMenuItemInfo](/windows/win32/api/winuser/nf-winuser-setmenuiteminfow) nella Windows SDK.

*lpMenuItemInfo*<br/>
Vedere la descrizione di *lpmii* in `SetMenuItemInfo` nel Windows SDK.

*fByPos*<br/>
Vedere la descrizione di *fByPosition* in `SetMenuItemInfo` nel Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione esegue il wrapping di [SetMenuItemInfo](/windows/win32/api/winuser/nf-winuser-setmenuiteminfow), descritto nel Windows SDK.

##  <a name="trackpopupmenu"></a>CMenu:: TrackPopupMenu

Visualizza un menu a comparsa mobile nella posizione specificata e tiene traccia della selezione degli elementi nel menu a comparsa.

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
Specifica la posizione dello schermo e i flag di posizionamento del mouse. Per un elenco dei flag disponibili, vedere [TrackPopupMenu](/windows/win32/api/winuser/nf-winuser-trackpopupmenu) .

*x*<br/>
Specifica la posizione orizzontale nelle coordinate dello schermo del menu a comparsa. A seconda del valore del parametro *nFlags* , il menu può essere allineato a sinistra, a destra o centrato rispetto a questa posizione.

*y*<br/>
Specifica la posizione verticale nelle coordinate dello schermo della parte superiore del menu sullo schermo.

*pWnd*<br/>
Identifica la finestra proprietaria del menu a comparsa. Questo parametro non può essere NULL, anche se viene specificato il flag di TPM_NONOTIFY. Questa finestra riceve tutti i messaggi di WM_COMMAND dal menu. Nelle versioni di Windows 3,1 e successive la finestra non riceve WM_COMMAND messaggi fino a quando non viene restituito `TrackPopupMenu`. In Windows 3,0, la finestra riceve WM_COMMAND messaggi prima che `TrackPopupMenu` venga restituito.

*lpRect*<br/>
Ignorato.

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce il risultato della chiamata a [TrackPopupMenu](/windows/win32/api/winuser/nf-winuser-trackpopupmenu) nel Windows SDK.

### <a name="remarks"></a>Osservazioni

Un menu a comparsa mobile può essere visualizzato in qualsiasi punto dello schermo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#34](../../mfc/reference/codesnippet/cpp/cmenu-class_14.cpp)]

##  <a name="trackpopupmenuex"></a>CMenu:: TrackPopupMenuEx

Visualizza un menu a comparsa mobile nella posizione specificata e tiene traccia della selezione degli elementi nel menu a comparsa.

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
Specifica varie funzioni per il menu esteso. Per un elenco di tutti i valori e il relativo significato, vedere [TrackPopupMenuEx](/windows/win32/api/winuser/nf-winuser-trackpopupmenuex).

*x*<br/>
Specifica la posizione orizzontale nelle coordinate dello schermo del menu a comparsa.

*y*<br/>
Specifica la posizione verticale nelle coordinate dello schermo della parte superiore del menu sullo schermo.

*pWnd*<br/>
Puntatore alla finestra proprietaria del menu a comparsa e ricezione dei messaggi dal menu creato. Questa finestra può essere qualsiasi finestra dell'applicazione corrente, ma non può essere NULL. Se si specifica TPM_NONOTIFY nel parametro *fuFlags* , la funzione non invia alcun messaggio a *pWnd*. La funzione deve restituire per la finestra a cui punta *pWnd* per ricevere il messaggio di WM_COMMAND.

*lptpm*<br/>
Puntatore a una struttura [TPMPARAMS](/windows/win32/api/winuser/ns-winuser-tpmparams) che specifica un'area dello schermo che il menu non deve sovrapporsi. Questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Se si specifica TPM_RETURNCMD nel parametro *fuFlags* , il valore restituito è l'identificatore di voce di menu dell'elemento selezionato dall'utente. Se l'utente annulla il menu senza effettuare una selezione o se si verifica un errore, il valore restituito è 0.

Se non si specifica TPM_RETURNCMD nel parametro *fuFlags* , il valore restituito è diverso da zero se la funzione ha esito positivo e 0 in caso di esito negativo. Per ottenere informazioni estese sull'errore, chiamare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Osservazioni

Un menu a comparsa mobile può essere visualizzato in qualsiasi punto dello schermo. Per ulteriori informazioni sulla gestione degli errori durante la creazione del menu popup, vedere [TrackPopupMenuEx](/windows/win32/api/winuser/nf-winuser-trackpopupmenuex).

## <a name="see-also"></a>Vedere anche

[CTRLTEST di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[DYNAMENU di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
