---
title: CMenu (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ab829aeae9858fda830ebf2f15823c4e9c3c2f1c
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37039297"
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
|[CMenu:: AppendMenu](#appendmenu)|Aggiunge un nuovo elemento alla fine di questo menu.|  
|[CMenu::Attach](#attach)|Associa un handle di menu di Windows per un `CMenu` oggetto.|  
|[CMenu::CheckMenuItem](#checkmenuitem)|Inserisce un segno di spunta accanto a o rimuove un segno di spunta da una voce di menu nel menu a comparsa.|  
|[CMenu::CheckMenuRadioItem](#checkmenuradioitem)|Inserisce un pulsante di opzione accanto a una voce di menu e rimuove il pulsante di opzione da tutte le altre voci di menu del gruppo.|  
|[CMenu::CreateMenu](#createmenu)|Crea un menu vuoto e la collega a un `CMenu` oggetto.|  
|[CMenu::CreatePopupMenu](#createpopupmenu)|Crea un menu a comparsa vuoto e la collega a un `CMenu` oggetto.|  
|[CMenu](#deletemenu)|Elimina un elemento specificato dal menu di scelta. Se la voce di menu è associato un menu a comparsa, Elimina l'handle per il menu a comparsa e libera la memoria utilizzata da tale Management Pack.|  
|[CMenu::DeleteTempMap](#deletetempmap)|Elimina qualsiasi temporaneo `CMenu` degli oggetti creati dal `FromHandle` funzione membro.|  
|[CMenu::DestroyMenu](#destroymenu)|Elimina il menu collegato a un `CMenu` dell'oggetto e libera tutta la memoria occupata il menu di scelta.|  
|[CMenu::Detach](#detach)|Scollega un handle di menu di Windows da un `CMenu` dell'oggetto e restituisce l'handle.|  
|[CMenu::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di un menu creato dal proprietario cambia.|  
|[EnableMenuItem](#enablemenuitem)|Abilita o disabilita offusca (grigi) una voce di menu.|  
|[CMenu::FromHandle](#fromhandle)|Restituisce un puntatore a un `CMenu` oggetto fornito da un handle di menu di Windows.|  
|[CMenu::GetDefaultItem](#getdefaultitem)|Determina la voce di menu predefinito menu specificato.|  
|[CMenu::GetMenuContextHelpId](#getmenucontexthelpid)|Recupera l'ID del contesto della Guida associato al menu.|  
|[CMenu::GetMenuInfo](#getmenuinfo)|Recupera le informazioni in un menu specifico.|  
|[CMenu::GetMenuItemCount](#getmenuitemcount)|Determina il numero di elementi in un menu popup di primo livello.|  
|[CMenu::GetMenuItemID](#getmenuitemid)|Ottiene l'identificatore della voce di menu per una voce di menu che si trova in corrispondenza della posizione specificata.|  
|[CMenu::GetMenuItemInfo](#getmenuiteminfo)|Recupera informazioni su una voce di menu.|  
|[CMenu::GetMenuState](#getmenustate)|Restituisce lo stato della voce di menu specificata o il numero di elementi in un menu a comparsa.|  
|[CMenu::GetMenuString](#getmenustring)|Recupera l'etichetta della voce di menu specificato.|  
|[CMenu::GetSafeHmenu](#getsafehmenu)|Restituisce il `m_hMenu` incapsulato da questo `CMenu` oggetto.|  
|[CMenu::GetSubMenu](#getsubmenu)|Recupera un puntatore a un menu a comparsa.|  
|[CMenu:: InsertMenu](#insertmenu)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata, lo spostamento di altri elementi di menu a discesa.|  
|[CMenu::InsertMenuItem](#insertmenuitem)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata in un menu.|  
|[CMenu::LoadMenu](#loadmenu)|Carica una risorsa di menu dal file eseguibile e lo collega a un `CMenu` oggetto.|  
|[CMenu::LoadMenuIndirect](#loadmenuindirect)|Carica un menu di scelta da un modello di menu in memoria e lo collega a un `CMenu` oggetto.|  
|[CMenu::MeasureItem](#measureitem)|Chiamato dal framework per determinare le dimensioni di menu quando viene creato un menu creato dal proprietario.|  
|[CMenu::ModifyMenu](#modifymenu)|Modifica una voce di menu esistente nella posizione specificata.|  
|[CMenu::RemoveMenu](#removemenu)|Elimina una voce di menu con un menu a comparsa associata dal menu di scelta specificato.|  
|[CMenu::SetDefaultItem](#setdefaultitem)|Imposta la voce di menu predefinito per il menu di scelta specificato.|  
|[CMenu::SetMenuContextHelpId](#setmenucontexthelpid)|Imposta l'ID del contesto della Guida da associare il menu di scelta.|  
|[CMenu::SetMenuInfo](#setmenuinfo)|Imposta le informazioni in un menu specifico.|  
|[CMenu::SetMenuItemBitmaps](#setmenuitembitmaps)|Associa le bitmap di segno di spunta specificato con una voce di menu.|  
|[CMenu::SetMenuItemInfo](#setmenuiteminfo)|Modificare le informazioni su una voce di menu.|  
|[CMenu::TrackPopupMenu](#trackpopupmenu)|Visualizza un menu a comparsa a virgola mobile nella posizione specificata e tiene traccia la selezione di elementi nel menu a comparsa.|  
|[CMenu::TrackPopupMenuEx](#trackpopupmenuex)|Visualizza un menu a comparsa a virgola mobile nella posizione specificata e tiene traccia la selezione di elementi nel menu a comparsa.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMenu::operator HMENU](#operator_hmenu)|Recupera l'handle dell'oggetto menu.|  
|[CMenu::operator! =](#operator_neq)|Determina se due oggetti di menu non sono uguali.|  
|[CMenu::operator = =](#operator_eq_eq)|Determina se due oggetti menu sono uguali.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMenu::m_hMenu](#m_hmenu)|Specifica l'handle per il menu di Windows collegato la `CMenu` oggetto.|  
  
## <a name="remarks"></a>Note  
 Fornisce funzioni membro per la creazione, di rilevamento, aggiornamento ed eliminazione definitiva di un menu.  
  
 Creare una `CMenu` oggetto sullo stack frame come locale, quindi chiamare `CMenu`di funzioni membro per modificare il nuovo menu in base alle esigenze. Successivamente, chiamare [CWnd::SetMenu](../../mfc/reference/cwnd-class.md#setmenu) per impostare il menu a una finestra, seguito immediatamente da una chiamata ai `CMenu` dell'oggetto [scollegamento](#detach) funzione membro. Il `CWnd::SetMenu` funzione membro imposta il menu della finestra al nuovo menu comporta il ridisegno per riflettere la modifica di menu nella finestra e lo passa la proprietà del menu nella finestra. La chiamata a `Detach` scollega il `HMENU` dal `CMenu` dell'oggetto, questa operazione che quando locale `CMenu` variabile diventa esterno all'ambito, il `CMenu` distruttore di oggetti non tenta di eliminare un menu non possiede più. Il menu viene automaticamente distrutta quando la finestra viene eliminata.  
  
 È possibile usare il [LoadMenuIndirect](#loadmenuindirect) funzione membro per creare un menu da un modello in memoria, ma un menu creato da una risorsa da una chiamata a [LoadMenu](#loadmenu) più facilmente gestibili e la risorsa di menu può essere creato e modificato dall'editor di menu.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMenu`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="appendmenu"></a>  CMenu:: AppendMenu  
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
 *nFlags*  
 Specifica le informazioni sullo stato della nuova voce di menu quando viene aggiunto al menu di scelta. È costituito da uno o più dei valori elencati nella sezione Osservazioni.  
  
 *nIDNewItem*  
 Specifica l'ID di comando della voce di menu nuovo oppure, se *nFlags* è impostata su **MF_POPUP**, l'handle del menu ( `HMENU`) di un menu a comparsa. Il *nIDNewItem* parametro viene ignorato (non necessarie) se *nFlags* è impostato su **MF_SEPARATOR**.  
  
 *lpszNewItem*  
 Specifica il contenuto della voce di menu nuovo. Il *nFlags* parametro viene utilizzato per interpretare *lpszNewItem* nel modo seguente:  
  
|nFlags|Interpretazione di lpszNewItem|  
|------------|-----------------------------------|  
|`MF_OWNERDRAW`|Contiene un valore a 32 bit fornita dall'applicazione che l'applicazione può usare per mantenere i dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione durante l'elaborazione `WM_MEASUREITEM` e `WM_DRAWITEM` i messaggi. Il valore viene archiviato nel **itemData** membro della struttura fornita con tali messaggi.|  
|`MF_STRING`|Contiene un puntatore a una stringa con terminazione null. Si tratta l'interpretazione predefinita.|  
|`MF_SEPARATOR`|Il *lpszNewItem* parametro viene ignorato (non necessari).|  
  
 *pBmp*  
 Punta a un `CBitmap` oggetto che verrà utilizzato come voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione può specificare lo stato della voce di menu impostando i valori *nFlags*. Quando si *nIDNewItem* specifica un menu a comparsa, diventa parte del menu a cui viene aggiunto. Se tale menu viene eliminato definitivamente, verrà eliminato anche il menu aggiunto. Un menu aggiunto dovrebbe essere scollegato da un `CMenu` oggetto per evitare conflitti. Si noti che **MF_STRING** e `MF_OWNERDRAW` non sono validi per la versione di bitmap di `AppendMenu`.  
  
 L'elenco seguente descrive i flag che possono essere impostati in *nFlags*:  
  
- **MF_CHECKED** funge da un elemento toggle con **MF_UNCHECKED** per inserire il segno di spunta accanto all'elemento predefinito. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere la [SetMenuItemBitmaps](#setmenuitembitmaps) funzione membro), viene visualizzata la bitmap di "segno di spunta su".  
  
- **MF_UNCHECKED** funge da un elemento toggle con **MF_CHECKED** per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta off".  
  
- **MF_DISABLED** disabilita la voce di menu in modo che non possono essere selezionato, ma non dim.  
  
- **MF_ENABLED** consente la voce di menu in modo che è possibile selezionare e ripristinarlo dallo stato inattivo.  
  
- **MF_GRAYED** disabilita la voce di menu in modo che non è possibile selezionare Disattiva.  
  
- **MF_MENUBARBREAK** posiziona l'elemento in una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. La nuova colonna di menu a comparsa sarà separata dalla colonna precedente da una linea di divisione verticale.  
  
- **MF_MENUBREAK** posiziona l'elemento in una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. Nessuna linea di separazione viene inserita tra le colonne.  
  
- **MF_OWNERDRAW** specifica che l'elemento è un elemento di disegno. Quando viene visualizzato il menu per la prima volta, la finestra proprietaria il menu riceve un messaggio WM_MEASUREITEM, che recupera l'altezza e la larghezza della voce di menu. Il messaggio WM_DRAWITEM è quello inviato ogni volta che il proprietario è necessario aggiornare l'aspetto visivo della voce di menu. Questa opzione non è valida per una voce di menu di primo livello.  
  
- **MF_POPUP** specifica che la voce di menu dispone di un menu a comparsa associato. Il parametro ID specifica un handle a un menu di scelta rapida che deve essere associata all'elemento. Viene utilizzato per l'aggiunta di un menu popup di primo livello o un menu a comparsa gerarchico per una voce di menu a comparsa.  
  
- **MF_SEPARATOR** Disegna una linea di divisione orizzontale. Può essere utilizzato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.  
  
- **MF_STRING** specifica che la voce di menu è una stringa di caratteri.  
  
 Ognuno dei gruppi seguenti sono elencati i flag che si escludono a vicenda e non possono essere utilizzati insieme:  
  
- **MF_DISABLED**, **MF_ENABLED**, e **MF_GRAYED**  
  
- **MF_STRING**, **MF_OWNERDRAW**, **MF_SEPARATOR**e la versione di bitmap  
  
- **MF_MENUBARBREAK** e **MF_MENUBREAK**  
  
- **MF_CHECKED** e **MF_UNCHECKED**  
  
 Ogni volta che un menu che si trova una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu::CreateMenu](#createmenu).  
  
##  <a name="attach"></a>  CMenu::Attach  
 Collega un menu di Windows esistente a un `CMenu` oggetto.  
  
```  
BOOL Attach(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 *hMenu*  
 Specifica un handle a un menu di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha avuto esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione non deve essere chiamata se un menu di scelta è già collegato al `CMenu` oggetto. L'handle del menu viene archiviato nel `m_hMenu` (membro dati).  
  
 Se il menu di cui si desidera modificare è già associato a una finestra, è possibile usare il [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu) funzione per ottenere un handle al menu di scelta.  
  
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
 *nIDCheckItem*  
 Specifica la voce di menu da controllare, come determinato dalla *nControllare*.  
  
 *nControllare*  
 Specifica come controllare la voce di menu e come determinare la posizione dell'elemento nel menu di scelta. Il *nControllare* parametro può essere una combinazione di **MF_CHECKED** oppure **MF_UNCHECKED** con **MF_BYPOSITION** o **MF_ BYCOMMAND** flag. Questi flag possono essere combinati tramite l'operatore OR bit per bit. Tali funzioni hanno i significati seguenti:  
  
- **MF_BYCOMMAND** specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita.  
  
- **MF_BYPOSITION** specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.  
  
- **MF_CHECKED** funge da un elemento toggle con **MF_UNCHECKED** per inserire il segno di spunta accanto all'elemento predefinito.  
  
- **MF_UNCHECKED** funge da un elemento toggle con **MF_CHECKED** per rimuovere un segno di spunta accanto all'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato precedente dell'elemento: **MF_CHECKED** oppure **MF_UNCHECKED**, o 0xFFFFFFFF se la voce di menu non esisteva.  
  
### <a name="remarks"></a>Note  
 Il *nIDCheckItem* parametro specifica l'elemento da modificare.  
  
 Il *nIDCheckItem* parametro può indicare una voce di menu a comparsa, nonché una voce di menu. Non sono passaggi speciali sono necessari per controllare una voce di menu a comparsa. Voci di menu di primo livello non possono essere verificate. Una voce di menu a comparsa deve essere verificata in base alla posizione perché non è presente un identificatore di voce di menu associato.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu::GetMenuState](#getmenustate).  
  
##  <a name="checkmenuradioitem"></a>  CMenu::CheckMenuRadioItem  
 Controlla una voce di menu specificato e lo rende una voce di opzione.  
  
```  
BOOL CheckMenuRadioItem(
    UINT nIDFirst,  
    UINT nIDLast,  
    UINT nIDItem,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDFirst*  
 Specifica (come un ID o un offset, in base al valore *nFlags*) la prima voce di menu nel gruppo di pulsanti di opzione.  
  
 *nIDLast*  
 Specifica (come un ID o un offset, in base al valore *nFlags*) l'ultima voce di menu nel gruppo di pulsanti di opzione.  
  
 *nIDItem*  
 Specifica (come un ID o un offset, in base al valore *nFlags*) l'elemento nel gruppo che verrà controllato con un pulsante di opzione.  
  
 *nFlags*  
 Specifica l'interpretazione degli *nIDFirst*, *nIDLast*, e *nIDItem* nel modo seguente:  
  
|nFlags|Interpretazione|  
|------------|--------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0  
  
### <a name="remarks"></a>Note  
 Allo stesso tempo, la funzione Deseleziona tutte le altre voci di menu del gruppo associato e cancella il flag di tipo di opzione-item per tali elementi. L'elemento selezionato viene visualizzato utilizzando una bitmap radio pulsante (o punto elenco) invece di una bitmap di segno di spunta.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [ON_COMMAND_RANGE](message-map-macros-mfc.md#on_command_range).  
  
##  <a name="cmenu"></a>  CMenu::CMenu  
 Crea un menu vuoto e la collega a un `CMenu` oggetto.  
  
```  
CMenu();
```  
  
### <a name="remarks"></a>Note  
 Il menu non viene creato finché non si chiama una delle funzioni membro create o caricamento di **CMenu:**  
  
- [CreateMenu](#createmenu)  
  
- [CreatePopupMenu](#createpopupmenu)  
  
- [LoadMenu](#loadmenu)  
  
- [LoadMenuIndirect](#loadmenuindirect)  
  
- [Attach](#attach)  
  
##  <a name="createmenu"></a>  CMenu::CreateMenu  
 Crea un menu di scelta e la collega al `CMenu` oggetto.  
  
```  
BOOL CreateMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu di scelta è stato creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il menu di scelta è inizialmente vuota. Voci di menu possono essere aggiunti tramite il `AppendMenu` o `InsertMenu` funzione membro.  
  
 Se il menu viene assegnato a una finestra, viene automaticamente distrutta quando la finestra viene eliminata.  
  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu di scelta non è assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#22](../../mfc/reference/codesnippet/cpp/cmenu-class_2.cpp)]  
  
##  <a name="createpopupmenu"></a>  CMenu::CreatePopupMenu  
 Crea un menu a comparsa e lo collega al `CMenu` oggetto.  
  
```  
BOOL CreatePopupMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu di scelta rapida è stato creato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il menu di scelta è inizialmente vuota. Voci di menu possono essere aggiunti tramite il `AppendMenu` o `InsertMenu` funzione membro. L'applicazione è possibile aggiungere il menu di scelta rapida a un menu esistente o un menu di scelta rapida. Il `TrackPopupMenu` funzione membro può essere utilizzata per visualizzare questo menu come menu a comparsa a virgola mobile e per tenere traccia delle selezioni nel menu a comparsa.  
  
 Se il menu viene assegnato a una finestra, viene automaticamente distrutta quando la finestra viene eliminata. Se il menu viene aggiunto a un menu esistente, viene automaticamente distrutta quando viene eliminato definitivamente tale menu.  
  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu di scelta rapida se il menu di scelta non è assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu::CreateMenu](#createmenu).  
  
##  <a name="deletemenu"></a>  CMenu  
 Elimina una voce dal menu di scelta.  
  
```  
BOOL DeleteMenu(
    UINT nPosition,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *nPosition*  
 Specifica la voce di menu che deve essere eliminato, come determinato dalla *nFlags*.  
  
 *nFlags*  
 Viene utilizzata per interpretare *nPosition* nel modo seguente:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se la voce di menu dispone di un menu a comparsa associata, `DeleteMenu` Elimina l'handle per il menu a comparsa e libera la memoria utilizzata dal menu a comparsa.  
  
 Ogni volta che un menu che si trova una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).  
  
##  <a name="deletetempmap"></a>  CMenu::DeleteTempMap  
 Chiamato automaticamente dal `CWinApp` gestore tempo di inattività, consente di eliminare qualsiasi temporaneo `CMenu` degli oggetti creati dal [FromHandle](#fromhandle) funzione membro.  
  
```  
static void PASCAL DeleteTempMap();
```  
  
### <a name="remarks"></a>Note  
 `DeleteTempMap` Scollega l'oggetto menu di Windows associato a un elemento temporaneo `CMenu` oggetto prima di eliminare il `CMenu` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#23](../../mfc/reference/codesnippet/cpp/cmenu-class_3.cpp)]  
  
##  <a name="destroymenu"></a>  CMenu::DestroyMenu  
 Elimina definitivamente il menu di scelta e tutte le risorse di Windows che sono state utilizzate.  
  
```  
BOOL DestroyMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu viene eliminato definitivamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il menu viene disconnesso dal `CMenu` dell'oggetto prima di essere eliminato. Le finestre `DestroyMenu` funzione chiamata in modo automatico il `CMenu` distruttore.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu::CreateMenu](#createmenu).  
  
##  <a name="detach"></a>  CMenu::Detach  
 Scollega un menu di Windows da un `CMenu` dell'oggetto e restituisce l'handle.  
  
```  
HMENU Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle, di tipo `HMENU`, a un menu di Windows, se ha esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Il `m_hMenu` membro dati è impostato su **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]  
  
##  <a name="drawitem"></a>  CMenu::DrawItem  
 Chiamato dal framework quando un aspetto visivo di un menu creato dal proprietario cambia.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 *lpDrawItemStruct*  
 Un puntatore a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura che contiene informazioni sul tipo di disegno necessaria.  
  
### <a name="remarks"></a>Note  
 Il `itemAction` membro del `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita. Eseguire l'override di questa funzione membro per implementare disegno di un proprietario `CMenu` oggetto. L'applicazione deve ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito *lpDrawItemStruct* prima del completamento di questa funzione membro.  
  
 Vedere [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una descrizione del `DRAWITEMSTRUCT` struttura.  
  
### <a name="example"></a>Esempio  
 Il codice seguente è da MFC [CTRLTEST](../../visual-cpp-samples.md) esempio:  
  
 [!code-cpp[NVC_MFCWindowing#24](../../mfc/reference/codesnippet/cpp/cmenu-class_4.cpp)]  
  
##  <a name="enablemenuitem"></a>  EnableMenuItem  
 Abilita o disabilita offusca una voce di menu.  
  
```  
UINT EnableMenuItem(
    UINT nIDEnableItem,  
    UINT nEnable);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDEnableItem*  
 Specifica la voce di menu deve essere abilitato, come determinato dalla *nEnable*. Questo parametro è possibile specificare gli elementi di menu di scelta rapida, nonché le voci di menu standard.  
  
 *nEnable*  
 Specifica l'azione da intraprendere. Può essere una combinazione di **MF_DISABLED**, **MF_ENABLED**, o **MF_GRAYED**, con **MF_BYCOMMAND** o **MF_BYPOSITION** . Questi valori possono essere combinati utilizzando l'operatore OR bit per bit. Questi valori non hanno i significati seguenti:  
  
- **MF_BYCOMMAND** specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita.  
  
- **MF_BYPOSITION** specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.  
  
- **MF_DISABLED** disabilita la voce di menu in modo che non possono essere selezionato, ma non dim.  
  
- **MF_ENABLED** consente la voce di menu in modo che è possibile selezionare e ripristinarlo dallo stato inattivo.  
  
- **MF_GRAYED** disabilita la voce di menu in modo che non è possibile selezionare Disattiva.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato precedente ( **MF_DISABLED**, **MF_ENABLED**, o **MF_GRAYED**) o -1 se non è valido.  
  
### <a name="remarks"></a>Note  
 Il [CreateMenu](#createmenu), [InsertMenu](#insertmenu), [ModifyMenu](#modifymenu), e [LoadMenuIndirect](#loadmenuindirect) funzioni membro possono inoltre impostare lo stato (abilitato, disabilitato o visualizzato in grigio) di una voce di menu.  
  
 Utilizzando il **MF_BYPOSITION** valore richiede un'applicazione può utilizzare corrette `CMenu`. Se il `CMenu` del menu barra viene usata, una voce di menu di primo livello (un elemento nella barra dei menu) è interessata. Per impostare lo stato di un elemento in un menu a comparsa popup o annidato in base alla posizione, è necessario specificare un'applicazione di `CMenu` del menu a comparsa.  
  
 Quando un'applicazione specifica il **MF_BYCOMMAND** flag, Windows controlla tutti gli elementi di menu di scelta rapida che sono subordinati al `CMenu`; pertanto, a meno che non sono presenti voci di menu duplicate, utilizzando il `CMenu` del menu barra è sufficiente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#25](../../mfc/reference/codesnippet/cpp/cmenu-class_5.cpp)]  
  
##  <a name="fromhandle"></a>  CMenu::FromHandle  
 Restituisce un puntatore a un `CMenu` oggetto fornito da un handle di Windows a un menu.  
  
```  
static CMenu* PASCAL FromHandle(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 *hMenu*  
 Un handle di Windows a un menu.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CMenu` che potrebbe essere temporaneo o permanente.  
  
### <a name="remarks"></a>Note  
 Se un `CMenu` oggetto non è già collegato all'oggetto di menu di Windows, una password temporanea `CMenu` oggetto viene creato e collegato.  
  
 Questa memoria temporanea `CMenu` oggetto è valido solo fino alla successiva esecuzione l'applicazione dispone di tempo di inattività nel relativo ciclo di eventi, nel qual caso vengono eliminati tutti gli oggetti temporanei.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu::CreateMenu](#createmenu).  
  
##  <a name="getdefaultitem"></a>  CMenu::GetDefaultItem  
 Determina la voce di menu predefinito menu specificato.  
  
```  
UINT GetDefaultItem(
    UINT gmdiFlags,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *gmdiFlags*  
 Valore che specifica come la funzione Cerca per voci di menu. Questo parametro può essere none, uno o una combinazione dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|**GMDI_GOINTOPOPUPS**|Specifica che, se la voce predefinita che viene aperto un sottomenu, la funzione sia la ricerca in modo ricorsivo il sottomenu corrispondente. Se il sottomenu non dispone di alcun elemento predefinito, il valore restituito identifica l'elemento che apre il sottomenu.<br /><br /> Per impostazione predefinita, la funzione restituisce il primo elemento predefinito dal menu specificato, indipendentemente dal fatto che sia un elemento che viene aperto un sottomenu.|  
|**GMDI_USEDISABLED**|Specifica che la funzione deve restituire un elemento predefinito, anche se è disabilitato.<br /><br /> Per impostazione predefinita, la funzione ignora elementi disabilitati o non disponibile.|  
  
 *fByPos*  
 Valore che specifica se recuperare l'identificatore della voce di menu o la relativa posizione. Se questo parametro è **FALSE**, viene restituito l'identificatore. In caso contrario, viene restituita la posizione.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è l'identificatore o la posizione della voce di menu. Se la funzione ha esito negativo, il valore restituito è - 1.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della funzione Win32 [GetMenuDefaultItem](http://msdn.microsoft.com/library/windows/desktop/ms647976), come descritto in Windows SDK.  
  
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
 *lpcmi*  
 Un puntatore a un [MENUINFO](http://msdn.microsoft.com/library/windows/desktop/ms647575) struttura contenente informazioni per il menu di scelta.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare informazioni sul menu.  
  
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
 *nPos*  
 Specifica la posizione (in base zero) della voce di menu viene recuperato il cui ID.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di elemento per l'elemento specificato in un menu a comparsa se la funzione ha esito positivo. Se l'elemento specificato è un menu di scelta rapida (in contrapposizione a un elemento all'interno del menu a comparsa), il valore restituito è -1. Se *nPos* corrisponde a un **separatore** voce di menu, il valore restituito è 0.  
  
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
 *uItem*  
 Identificatore o la posizione della voce di menu per cui ottenere informazioni. Il significato di questo parametro dipende dal valore di `ByPos`.  
  
 *lpMenuItemInfo*  
 Un puntatore a un [MENUITEMINFO](http://msdn.microsoft.com/library/windows/desktop/ms647578), come descritto in Windows SDK, che contiene informazioni sul menu di scelta.  
  
 *fByPos*  
 Valore che specifica il significato di `nIDItem`. Per impostazione predefinita `ByPos` viene **FALSE**, a indicare che uItem è un identificatore di elemento di menu. Se `ByPos` non è impostata su **FALSE**, indica una posizione di voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni dettagliate sull'errore, utilizzare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360), come descritto in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del della funzione Win32 [GetMenuItemInfo](http://msdn.microsoft.com/library/windows/desktop/ms647980), come descritto in Windows SDK. Si noti che nell'implementazione MFC di `GetMenuItemInfo`, non si usa un handle a un menu.  
  
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
 *nID*  
 Specifica l'ID della voce di menu, come determinato dalla *nFlags*.  
  
 *nFlags*  
 Specifica la natura della *nID*. Può essere uno dei valori seguenti:  
  
- **MF_BYCOMMAND** specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita.  
  
- **MF_BYPOSITION** specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore 0xFFFFFFFF se l'elemento specificato non esiste. Se *nId* identifica un menu a comparsa, il byte di ordine superiore contiene il numero di elementi del menu a comparsa e il byte meno significativo contiene i flag di menu associati il menu a comparsa. In caso contrario, il valore restituito è una maschera (o booleano) dei valori dell'elenco seguente (questa maschera descrive lo stato del menu elemento *nId* identifica):  
  
- **MF_CHECKED** funge da un elemento toggle con **MF_UNCHECKED** per inserire il segno di spunta accanto all'elemento predefinito. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap di "segno di spunta su".  
  
- **MF_DISABLED** disabilita la voce di menu in modo che non possono essere selezionato, ma non dim.  
  
- **MF_ENABLED** consente la voce di menu in modo che è possibile selezionare e ripristinarlo dallo stato inattivo. Si noti che il valore di questa costante è 0; un'applicazione non è consigliabile testare su 0 per un errore quando si utilizza questo valore.  
  
- **MF_GRAYED** disabilita la voce di menu in modo che non è possibile selezionare Disattiva.  
  
- **MF_MENUBARBREAK** posiziona l'elemento in una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. La nuova colonna di menu a comparsa sarà separata dalla colonna precedente da una linea di divisione verticale.  
  
- **MF_MENUBREAK** posiziona l'elemento in una nuova riga nei menu statici o in una nuova colonna nei menu a comparsa. Nessuna linea di separazione viene inserita tra le colonne.  
  
- **MF_SEPARATOR** Disegna una linea di divisione orizzontale. Può essere utilizzato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.  
  
- **MF_UNCHECKED** funge da un elemento toggle con **MF_CHECKED** per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta off". Si noti che il valore di questa costante è 0; un'applicazione non è consigliabile testare su 0 per un errore quando si utilizza questo valore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#27](../../mfc/reference/codesnippet/cpp/cmenu-class_7.cpp)]  
  
##  <a name="getmenustring"></a>  CMenu::GetMenuString  
 Copia l'etichetta della voce di menu specificato nel buffer specificato.  
  
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
 *nIDItem*  
 Specifica l'identificatore di tipo integer della voce di menu o l'offset della voce di menu nel menu di scelta, a seconda del valore di *nFlags*.  
  
 *lpString*  
 Punta al buffer che riceverà l'etichetta.  
  
 *rString*  
 Un riferimento a un `CString` oggetto che deve ricevere la stringa copiata dal menu.  
  
 *nMaxCount*  
 Specifica la lunghezza massima (in caratteri) dell'etichetta da copiare. Se l'etichetta è più lungo del massimo specificato nella *nMaxCount*, i caratteri aggiuntivi vengono troncati.  
  
 *nFlags*  
 Specifica l'interpretazione del *nIDItem* parametro. Può essere uno dei valori seguenti:  
  
|nFlags|Interpretazione di nIDItem|  
|------------|-------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il numero effettivo di caratteri copiati nel buffer, senza includere il carattere di terminazione null.  
  
### <a name="remarks"></a>Note  
 Il *nMaxCount* parametro deve corrispondere a uno più grande del numero di caratteri nell'etichetta per contenere il carattere null che termina una stringa.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="getsafehmenu"></a>  CMenu::GetSafeHmenu  
 Restituisce il `HMENU` incapsulato da questo `CMenu` oggetto, o una **NULL** `CMenu` puntatore.  
  
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
 *nPos*  
 Specifica la posizione del menu a comparsa contenuta nel menu di scelta. I valori di posizione iniziano da 0 per la prima voce di menu. Identificatore del menu di scelta rapida non può essere utilizzato in questa funzione.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CMenu` oggetto la cui proprietà `m_hMenu` membro contiene un handle per il menu di scelta rapida se non esiste un menu di scelta rapida in corrispondenza della posizione specificata; in caso contrario **NULL**. Se un `CMenu` oggetto non esiste, quindi viene creato un temporaneo. Il `CMenu` puntatore restituito non deve essere archiviati.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu::TrackPopupMenu](#trackpopupmenu).  
  
##  <a name="insertmenu"></a>  CMenu:: InsertMenu  
 Inserisce una nuova voce di menu in corrispondenza della posizione specificata da *nPosition* e altri elementi viene spostato il menu a discesa.  
  
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
 *nPosition*  
 Specifica la voce di menu prima della quale la nuova voce di menu è da inserire. Il *nFlags* parametro può essere utilizzato per interpretare *nPosition* nei modi seguenti:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0. Se *nPosition* è -1, la nuova voce di menu viene aggiunto alla fine del menu.|  
  
 *nFlags*  
 Specifica la modalità *nPosition* viene interpretato e specifica informazioni sullo stato della nuova voce di menu quando viene aggiunto al menu di scelta. Per un elenco di flag che può essere impostato, vedere la [AppendMenu](#appendmenu) funzione membro. Per specificare più valori, utilizzare l'operatore OR bit per bit combinarle con il **MF_BYCOMMAND** oppure **MF_BYPOSITION** flag.  
  
 *nIDNewItem*  
 Specifica l'ID di comando della voce di menu nuovo oppure, se *nFlags* è impostata su **MF_POPUP**, l'handle del menu ( `HMENU`) del menu a comparsa. Il *nIDNewItem* parametro viene ignorato (non necessarie) se *nFlags* è impostato su **MF_SEPARATOR**.  
  
 *lpszNewItem*  
 Specifica il contenuto della voce di menu nuovo. *nFlags* può essere usato per interpretare *lpszNewItem* nei modi seguenti:  
  
|nFlags|Interpretazione di lpszNewItem|  
|------------|-----------------------------------|  
|**MF_OWNERDRAW**|Contiene un valore a 32 bit fornita dall'applicazione che l'applicazione può usare per mantenere i dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione nel **itemData** membro della struttura fornita dal [WM_MEASUREITEM](http://msdn.microsoft.com/library/windows/desktop/bb775925) e [WM_DRAWITEM](http://msdn.microsoft.com/library/windows/desktop/bb775923) i messaggi. Questi messaggi vengono inviati quando la voce di menu viene inizialmente visualizzata o viene modificata.|  
|**MF_STRING**|Contiene un puntatore a una stringa con terminazione null di tipo long. Si tratta l'interpretazione predefinita.|  
|**MF_SEPARATOR**|Il *lpszNewItem* parametro viene ignorato (non necessari).|  
  
 *pBmp*  
 Punta a un `CBitmap` oggetto che verrà utilizzato come voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione può specificare lo stato della voce di menu impostando i valori *nFlags*.  
  
 Ogni volta che un menu che si trova una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.  
  
 Quando si *nIDNewItem* specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se viene eliminato definitivamente tale menu, menu inserite verrà anche eliminato. Un menu inserite deve essere scollegato da un `CMenu` oggetto per evitare conflitti.  
  
 Se attiva finestra figlio MDI (interfaccia) a documenti multipli viene ingrandita e un'applicazione inserisce un menu a comparsa menu dell'applicazione MDI chiamando questa funzione e specificando il **MF_BYPOSITION** flag, il menu di inserimento una posizione più a sinistra del previsto. Ciò accade perché il menu di controllo della finestra figlio MDI attiva viene inserito nella prima posizione della barra dei menu della finestra cornice MDI. Per posizionare correttamente il menu di scelta, l'applicazione deve aggiungere 1 il valore della posizione che sarebbe altrimenti usato. Un'applicazione può utilizzare il **WM_MDIGETACTIVE** messaggio per determinare se la finestra figlio attualmente attiva è ingrandita.  
  
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
 *uItem*  
 Vedere la descrizione della *uItem* in [InsertMenuItem](http://msdn.microsoft.com/library/windows/desktop/ms647988) in Windows SDK.  
  
 *lpMenuItemInfo*  
 Vedere la descrizione della *lpmii* in **InsertMenuItem** in Windows SDK.  
  
 *fByPos*  
 Vedere la descrizione della *fByPosition* in **InsertMenuItem** in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Questa funzione esegue il wrapping [InsertMenuItem](http://msdn.microsoft.com/library/windows/desktop/ms647988), descritto in Windows SDK.  
  
##  <a name="loadmenu"></a>  CMenu::LoadMenu  
 Carica una risorsa di menu dal file eseguibile dell'applicazione e lo collega al `CMenu` oggetto.  
  
```  
BOOL LoadMenu(LPCTSTR lpszResourceName);  
BOOL LoadMenu(UINT nIDResource);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszResourceName*  
 Punta a una stringa con terminazione null che contiene il nome della risorsa menu da caricare.  
  
 *nIDResource*  
 Specifica l'ID di menu della risorsa menu da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la risorsa di menu è stata caricata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu di scelta non è assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#29](../../mfc/reference/codesnippet/cpp/cmenu-class_9.cpp)]  
  
##  <a name="loadmenuindirect"></a>  CMenu::LoadMenuIndirect  
 Carica una risorsa da un modello di menu in memoria e lo collega al `CMenu` oggetto.  
  
```  
BOOL LoadMenuIndirect(const void* lpMenuTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 *lpMenuTemplate*  
 Punta a un modello di menu (ovvero una singola [MENUITEMTEMPLATEHEADER](http://msdn.microsoft.com/library/windows/desktop/ms647583) struttura e un insieme di uno o più [MENUITEMTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms647581) strutture). Per ulteriori informazioni su queste due strutture, vedi il Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la risorsa di menu è stata caricata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un modello di menu è un'intestazione seguita da una raccolta di uno o più [MENUITEMTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms647581) strutture, ognuno dei quali può contenere uno o più voci di menu e menu di scelta rapida.  
  
 Il numero di versione deve essere 0.  
  
 Il **mtOption** flags deve includere **MF_END** per l'ultimo elemento in un elenco popup e per l'ultimo elemento nell'elenco principale. Vedere il `AppendMenu` funzione membro per altri flag. Il **mtId** membro deve essere omessa dal **MENUITEMTEMPLATE** struttura quando **MF_POPUP** specificato nel **mtOption**.  
  
 Lo spazio allocato per il **MENUITEMTEMPLATE** struttura deve essere sufficientemente grande per il **mtString** per contenere il nome della voce di menu sotto forma di stringa con terminazione null.  
  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu di scelta non è assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#30](../../mfc/reference/codesnippet/cpp/cmenu-class_10.cpp)]  
  
##  <a name="m_hmenu"></a>  CMenu::m_hMenu  
 Specifica il `HMENU` handle del menu finestre collegata la `CMenu` oggetto.  
  
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
 *lpMeasureItemStruct*  
 Un puntatore a un `MEASUREITEMSTRUCT` struttura.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare il `MEASUREITEMSTRUCT` struttura per informare Windows delle dimensioni del menu.  
  
 Vedere [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una descrizione del `MEASUREITEMSTRUCT` struttura.  
  
### <a name="example"></a>Esempio  
 Il codice seguente è da MFC [CTRLTEST](../../visual-cpp-samples.md) esempio:  
  
 [!code-cpp[NVC_MFCWindowing#31](../../mfc/reference/codesnippet/cpp/cmenu-class_11.cpp)]  
  
##  <a name="modifymenu"></a>  CMenu::ModifyMenu  
 Modifica una voce di menu esistenti in corrispondenza della posizione specificata da *nPosition*.  
  
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
 *nPosition*  
 Specifica la voce di menu da modificare. Il *nFlags* parametro può essere utilizzato per interpretare *nPosition* nei modi seguenti:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
 *nFlags*  
 Specifica la modalità *nPosition* viene interpretato e vengono fornite informazioni sulle modifiche da apportare alla voce di menu. Per un elenco di flag che possono essere impostati, vedere la [AppendMenu](#appendmenu) funzione membro.  
  
 *nIDNewItem*  
 Specifica l'ID di comando della voce di menu modificata oppure, se *nFlags* è impostata su **MF_POPUP**, l'handle del menu ( `HMENU`) di un menu a comparsa. Il *nIDNewItem* parametro viene ignorato (non necessarie) se *nFlags* è impostato su **MF_SEPARATOR**.  
  
 *lpszNewItem*  
 Specifica il contenuto della voce di menu nuovo. Il *nFlags* parametro può essere utilizzato per interpretare *lpszNewItem* nei modi seguenti:  
  
|nFlags|Interpretazione di lpszNewItem|  
|------------|-----------------------------------|  
|**MF_OWNERDRAW**|Contiene un valore a 32 bit fornita dall'applicazione che l'applicazione può usare per mantenere i dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione durante l'elaborazione **MF_MEASUREITEM** e **MF_DRAWITEM**.|  
|**MF_STRING**|Contiene un puntatore di tipo long a una stringa con terminazione null o a un `CString`.|  
|**MF_SEPARATOR**|Il *lpszNewItem* parametro viene ignorato (non necessari).|  
  
 *pBmp*  
 Punta a un `CBitmap` oggetto che verrà utilizzato come voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione specifica il nuovo stato della voce di menu impostando i valori *nFlags*. Se questa funzione sostituisce un menu a comparsa associato alla voce di menu, Elimina il vecchio menu a comparsa e libera la memoria utilizzata dal menu a comparsa.  
  
 Quando si *nIDNewItem* specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se viene eliminato definitivamente tale menu, menu inserite verrà anche eliminato. Un menu inserite deve essere scollegato da un `CMenu` oggetto per evitare conflitti.  
  
 Ogni volta che un menu che si trova una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`. Per modificare gli attributi di voci di menu esistenti, risulta più veloce usare il `CheckMenuItem` e `EnableMenuItem` funzioni membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="operator_hmenu"></a>  CMenu::operator HMENU  
 Utilizzare questo operatore per recuperare l'handle del `CMenu` oggetto.  
  
```  
operator HMENU() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se l'operazione riesce, l'handle del `CMenu` dell'oggetto; in caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare l'handle per chiamare direttamente le API di Windows.  
  
##  <a name="operator_neq"></a>  CMenu::operator! =  
 Determina se due menu logicamente non sono uguali.  
  
```  
BOOL operator!=(const CMenu& menu) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *menu di scelta*  
 Oggetto `CMenu` oggetto per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se un oggetto del menu a sinistra non è uguale a un oggetto di menu a destra.  
  
##  <a name="operator_eq_eq"></a>  CMenu::operator = =  
 Determina se due menu sono uguali.  
  
```  
BOOL operator==(const CMenu& menu) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *menu di scelta*  
 Oggetto `CMenu` oggetto per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se un oggetto di menu a sinistra è uguale (in termini del `HMENU` valore) a un oggetto di menu a destra.  
  
##  <a name="removemenu"></a>  CMenu::RemoveMenu  
 Elimina una voce di menu con un menu a comparsa associata dal menu di scelta.  
  
```  
BOOL RemoveMenu(
    UINT nPosition,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *nPosition*  
 Specifica la voce di menu da rimuovere. Il *nFlags* parametro può essere utilizzato per interpretare *nPosition* nei modi seguenti:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
 *nFlags*  
 Specifica la modalità *nPosition* viene interpretato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Ma non elimina l'handle per un menu a comparsa, pertanto il menu può essere riutilizzato. Prima di chiamare questa funzione, l'applicazione può chiamare la `GetSubMenu` funzione membro per recuperare il messaggio popup `CMenu` oggetto per il riutilizzo.  
  
 Ogni volta che un menu che si trova una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.  
  
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
 *uItem*  
 Identificatore o la posizione della nuova voce di menu predefinito o - 1 per nessun elemento predefinito. Il significato di questo parametro dipende dal valore di *fByPos*.  
  
 *fByPos*  
 Valore che specifica il significato dei *uItem*. Se questo parametro è **FALSE**, *uItem* è un identificatore di elemento di menu. In caso contrario, è una posizione di voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni dettagliate sull'errore, utilizzare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360), come descritto in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della funzione Win32 [SetMenuDefaultItem](http://msdn.microsoft.com/library/windows/desktop/ms647996), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="setmenucontexthelpid"></a>  CMenu::SetMenuContextHelpId  
 Associa un ID del contesto della Guida con `CMenu`.  
  
```  
BOOL SetMenuContextHelpId(DWORD dwContextHelpId);
```  
  
### <a name="parameters"></a>Parametri  
 *dwContextHelpId*  
 ID del contesto della Guida da associare a `CMenu`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0  
  
### <a name="remarks"></a>Note  
 Tutti gli elementi nel menu di condivideranno questo identificatore, ovvero non è possibile associare un identificatore di contesto della Guida per le singole voci di menu.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="setmenuinfo"></a>  CMenu::SetMenuInfo  
 Imposta le informazioni per un menu.  
  
```  
BOOL SetMenuInfo(LPCMENUINFO lpcmi);
```  
  
### <a name="parameters"></a>Parametri  
 *lpcmi*  
 Un puntatore a un [MENUINFO](http://msdn.microsoft.com/library/windows/desktop/ms647575) struttura contenente informazioni per il menu di scelta.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per impostare il menu di informazioni specifiche.  
  
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
 *nPosition*  
 Specifica la voce di menu da modificare. Il *nFlags* parametro può essere utilizzato per interpretare *nPosition* nei modi seguenti:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
 *nFlags*  
 Specifica la modalità *nPosition* viene interpretato.  
  
 *pBmpUnchecked*  
 Specifica la mappa di bit da usare per voci di menu che non vengono controllate.  
  
 *pBmpChecked*  
 Specifica la mappa di bit da usare per voci di menu che vengono controllati.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se la voce di menu è selezionata o deselezionata, verrà visualizzata la mappa di bit appropriata accanto alla voce di menu.  
  
 Se entrambi *pBmpUnchecked* oppure *pBmpChecked* è **NULL**, Windows viene visualizzato nulla accanto alla voce di menu per l'attributo corrispondente. Se entrambi i parametri sono **NULL**, Windows Usa il segno di spunta predefinito quando la voce è selezionata e rimuove il segno di spunta se l'elemento è deselezionata.  
  
 Quando viene eliminato il menu di scelta, non vengono eliminati definitivamente questi bitmap; l'applicazione deve eliminarle definitivamente.  
  
 Le finestre **GetMenuCheckMarkDimensions** funzione recupera le dimensioni del segno di spunta predefinito utilizzato per voci di menu. L'applicazione utilizza questi valori per determinare le dimensioni appropriate per le bitmap fornite con questa funzione. Ottenere la dimensione, creare le bitmap e quindi si impostano.  
  
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
 *uItem*  
 Vedere la descrizione della *uItem* in [SetMenuItemInfo](http://msdn.microsoft.com/library/windows/desktop/ms648001) in Windows SDK.  
  
 *lpMenuItemInfo*  
 Vedere la descrizione della *lpmii* in **SetMenuItemInfo** in Windows SDK.  
  
 *fByPos*  
 Vedere la descrizione della *fByPosition* in **SetMenuItemInfo** in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Questa funzione esegue il wrapping [SetMenuItemInfo](http://msdn.microsoft.com/library/windows/desktop/ms648001), descritto in Windows SDK.  
  
##  <a name="trackpopupmenu"></a>  CMenu::TrackPopupMenu  
 Visualizza un menu a comparsa a virgola mobile nella posizione specificata e tiene traccia la selezione di elementi nel menu a comparsa.  
  
```  
BOOL TrackPopupMenu(
    UINT nFlags,  
    int x,  
    int y,  
    CWnd* pWnd,  
    LPCRECT lpRect = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *nFlags*  
 Specifica i flag di posizione sullo schermo e la posizione del mouse. Vedere [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) per un elenco dei flag.  
  
 *x*  
 Specifica la posizione orizzontale nelle coordinate dello schermo del menu a comparsa. In base al valore di *nFlags* parametro, il menu può essere allineato a sinistra, a destra oppure centrato relazione questa posizione.  
  
 *y*  
 Specifica la posizione verticale nelle coordinate dello schermo della parte superiore del menu sullo schermo.  
  
 *pWnd*  
 Identifica la finestra proprietaria del menu a comparsa. Questo parametro non può essere **NULL**, anche se il **TPM_NONOTIFY** flag specificato. Questa finestra riceve tutti **WM_COMMAND** messaggi dal menu di scelta. In Windows 3.1 e versioni successive, la finestra non riceve **WM_COMMAND** messaggi fino a `TrackPopupMenu` restituisce. In Windows 3.0, la finestra riceve **WM_COMMAND** i messaggi prima che `TrackPopupMenu` restituisce.  
  
 *lpRect*  
 Ignorato.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce il risultato della chiamata al metodo [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Un menu a comparsa a virgola mobile può trovarsi ovunque sullo schermo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#34](../../mfc/reference/codesnippet/cpp/cmenu-class_14.cpp)]  
  
##  <a name="trackpopupmenuex"></a>  CMenu::TrackPopupMenuEx  
 Visualizza un menu a comparsa a virgola mobile nella posizione specificata e tiene traccia la selezione di elementi nel menu a comparsa.  
  
```  
BOOL TrackPopupMenuEx(
    UINT fuFlags,  
    int x,  
    int y,  
    CWnd* pWnd,  
    LPTPMPARAMS lptpm);
```  
  
### <a name="parameters"></a>Parametri  
 *fuFlags*  
 Specifica le varie funzioni per menu esteso. Per un elenco di tutti i valori e relativo significato, vedere [TrackPopupMenuEx](http://msdn.microsoft.com/library/windows/desktop/ms648003).  
  
 *x*  
 Specifica la posizione orizzontale nelle coordinate dello schermo del menu a comparsa.  
  
 *y*  
 Specifica la posizione verticale nelle coordinate dello schermo della parte superiore del menu sullo schermo.  
  
 *pWnd*  
 Un puntatore alla finestra proprietaria del menu a comparsa e la ricezione di messaggi dal menu creato. Questa finestra può essere qualsiasi finestra dall'applicazione corrente, ma non può essere **NULL**. Se si specifica **TPM_NONOTIFY** nel *fuFlags* parametro, la funzione non inviare messaggi a *pWnd*. La funzione deve restituire per la finestra a cui puntata *pWnd* per ricevere il **WM_COMMAND** messaggio.  
  
 *lptpm*  
 Puntatore a un [TPMPARAMS](http://msdn.microsoft.com/library/windows/desktop/ms647586) struttura che specifica un'area dello schermo il menu non deve sovrapporsi. Questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Se si specifica **TPM_RETURNCMD** nel *fuFlags* parametro, il valore restituito è l'identificatore della voce di menu dell'elemento selezionato dall'utente. Se l'utente annulla il menu di scelta senza effettuare una selezione oppure se si verifica un errore, il valore restituito è 0.  
  
 Se non si specifica **TPM_RETURNCMD** nel *fuFlags* parametro, il valore restituito è diverso da zero se la funzione ha esito positivo e 0 in caso di errore. Per ottenere informazioni dettagliate sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Un menu a comparsa a virgola mobile può trovarsi ovunque sullo schermo. Per ulteriori informazioni sulla gestione degli errori durante la creazione del menu a comparsa, vedere [TrackPopupMenuEx](http://msdn.microsoft.com/library/windows/desktop/ms648003).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CTRLTEST](../../visual-cpp-samples.md)   
 [Esempio MFC DYNAMENU](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CObject](../../mfc/reference/cobject-class.md)
