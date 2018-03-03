---
title: CMenu (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 104c965da403040308386e019d56684577318eee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CMenu::Attach](#attach)|Associa un handle del menu di Windows per un `CMenu` oggetto.|  
|[CMenu::CheckMenuItem](#checkmenuitem)|Inserisce un segno di spunta accanto a o rimuove un segno di spunta da una voce di menu nel menu a comparsa.|  
|[CMenu::CheckMenuRadioItem](#checkmenuradioitem)|Inserisce un pulsante di opzione accanto a una voce di menu e rimuove tutte le altre voci di menu nel gruppo di pulsante di opzione.|  
|[CMenu::CreateMenu](#createmenu)|Crea un menu vuoto e la collega a un `CMenu` oggetto.|  
|[CMenu::CreatePopupMenu](#createpopupmenu)|Crea un menu a comparsa vuoto e lo collega a un `CMenu` oggetto.|  
|[CMenu](#deletemenu)|Elimina un elemento specificato dal menu. Se la voce di menu è associato a un menu a comparsa, Elimina l'handle per il menu a comparsa e libera la memoria utilizzata da esso.|  
|[CMenu::DeleteTempMap](#deletetempmap)|Elimina qualsiasi temporaneo `CMenu` degli oggetti creati dal `FromHandle` funzione membro.|  
|[CMenu::DestroyMenu](#destroymenu)|Elimina il menu collegato a un `CMenu` dell'oggetto e libera tutta la memoria occupata dal menu.|  
|[CMenu::Detach](#detach)|Scollega un handle di menu di Windows da un `CMenu` dell'oggetto e restituisce l'handle.|  
|[CMenu::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di un menu creato dal proprietario cambia.|  
|[EnableMenuItem](#enablemenuitem)|Abilita o disabilita offusca (visualizzata in grigio) una voce di menu.|  
|[CMenu::FromHandle](#fromhandle)|Restituisce un puntatore a un `CMenu` oggetto in base a un handle del menu di Windows.|  
|[CMenu::GetDefaultItem](#getdefaultitem)|Determina la voce di menu predefinito dal menu specificato.|  
|[CMenu::GetMenuContextHelpId](#getmenucontexthelpid)|Recupera l'ID del contesto della Guida associato al menu.|  
|[CMenu::GetMenuInfo](#getmenuinfo)|Recupera le informazioni in un menu specifico.|  
|[CMenu::GetMenuItemCount](#getmenuitemcount)|Determina il numero di elementi in un menu popup di primo livello.|  
|[CMenu::GetMenuItemID](#getmenuitemid)|Ottiene l'identificatore della voce di menu per una voce di menu che si trova nella posizione specificata.|  
|[CMenu::GetMenuItemInfo](#getmenuiteminfo)|Recupera informazioni su una voce di menu.|  
|[CMenu::GetMenuState](#getmenustate)|Restituisce lo stato della voce di menu specificata o il numero di elementi in un menu a comparsa.|  
|[CMenu::GetMenuString](#getmenustring)|Recupera l'etichetta della voce di menu specificato.|  
|[CMenu::GetSafeHmenu](#getsafehmenu)|Restituisce il `m_hMenu` incapsulato da questo `CMenu` oggetto.|  
|[CMenu::GetSubMenu](#getsubmenu)|Recupera un puntatore a un menu a comparsa.|  
|[CMenu:: InsertMenu](#insertmenu)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata, lo spostamento di altri elementi di menu a discesa.|  
|[CMenu::InsertMenuItem](#insertmenuitem)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata in un menu.|  
|[CMenu::LoadMenu](#loadmenu)|Carica una risorsa di menu dal file eseguibile e lo collega a un `CMenu` oggetto.|  
|[CMenu::LoadMenuIndirect](#loadmenuindirect)|Carica un menu da un modello di menu in memoria e lo collega a un `CMenu` oggetto.|  
|[CMenu::MeasureItem](#measureitem)|Chiamato dal framework per determinare le dimensioni di menu quando viene creato un menu creato dal proprietario.|  
|[CMenu::ModifyMenu](#modifymenu)|Modifica una voce di menu esistente nella posizione specificata.|  
|[CMenu::RemoveMenu](#removemenu)|Elimina una voce di menu con un menu a comparsa associato dal menu specificato.|  
|[CMenu::SetDefaultItem](#setdefaultitem)|Imposta la voce di menu predefinito per il menu specificato.|  
|[CMenu::SetMenuContextHelpId](#setmenucontexthelpid)|Imposta l'ID del contesto della Guida da associare il menu.|  
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
  
 Creare un `CMenu` oggetto sullo stack frame come locale, quindi chiamare `CMenu`di funzioni membro per modificare il nuovo menu in base alle esigenze. Successivamente, chiamare [CWnd::SetMenu](../../mfc/reference/cwnd-class.md#setmenu) per impostare il menu a una finestra, seguito immediatamente da una chiamata al `CMenu` dell'oggetto [scollegamento](#detach) funzione membro. Il `CWnd::SetMenu` funzione membro imposta il menu della finestra per il nuovo menu, la finestra di essere ridisegnato per riflettere la modifica di menu e restituisce anche la proprietà del menu di scelta nella finestra. La chiamata a **scollegamento** scollega il `HMENU` dal `CMenu` dell'oggetto, pertanto che quando locale `CMenu` variabile diventa esterno all'ambito, il `CMenu` distruttore di oggetti non tenta di eliminare un menu non è più proprietario. Il menu viene automaticamente distrutta quando la finestra viene eliminata.  
  
 È possibile utilizzare il [LoadMenuIndirect](#loadmenuindirect) funzione membro per creare un menu da un modello in memoria, ma un menu creato da una risorsa da una chiamata a [LoadMenu](#loadmenu) più facilmente gestibili e la stessa risorsa di menu possono essere creati e modificati dall'editor di menu.  
  
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
 `nFlags`  
 Specifica le informazioni sullo stato della nuova voce di menu quando viene aggiunto al menu. È costituito da uno o più dei valori elencati nella sezione Osservazioni.  
  
 `nIDNewItem`  
 Specifica l'ID di comando della voce di menu nuovo o, se `nFlags` è impostato su **MF_POPUP**, l'handle del menu ( `HMENU`) di un menu a comparsa. Il `nIDNewItem` parametro viene ignorato (non necessaria) se `nFlags` è impostato su **MF_SEPARATOR**.  
  
 `lpszNewItem`  
 Specifica il contenuto della voce di menu nuovo. Il `nFlags` parametro viene utilizzato per interpretare `lpszNewItem` nel modo seguente:  
  
|nFlags|Interpretazione di lpszNewItem|  
|------------|-----------------------------------|  
|`MF_OWNERDRAW`|Contiene un valore a 32 bit fornita dall'applicazione che l'applicazione può usare per mantenere dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione durante l'elaborazione `WM_MEASUREITEM` e `WM_DRAWITEM` i messaggi. Il valore viene archiviato nel **itemData** membro della struttura fornita con tali messaggi.|  
|**MF_STRING**|Contiene un puntatore a una stringa con terminazione null. Questo è l'interpretazione predefinita.|  
|**MF_SEPARATOR**|Il `lpszNewItem` parametro viene ignorato (non necessario).|  
  
 *pBmp*  
 Punta a un `CBitmap` oggetto che verrà utilizzato come voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione può specificare lo stato della voce di menu impostando i valori `nFlags`. Quando `nIDNewItem` specifica un menu a comparsa, diventa parte del menu a cui viene aggiunto. Se il menu viene eliminato definitivamente, verrà eliminato anche il menu aggiunto. Un menu aggiunto deve essere scollegato da un `CMenu` oggetto per evitare conflitti. Si noti che **MF_STRING** e `MF_OWNERDRAW` non sono validi per la versione di bitmap di `AppendMenu`.  
  
 Nell'elenco seguente vengono descritti i flag che possono essere impostati in `nFlags`:  
  
- **MF_CHECKED** agisce come un elemento toggle con **MF_UNCHECKED** per inserire il segno di spunta accanto all'elemento predefinito. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il [SetMenuItemBitmaps](#setmenuitembitmaps) funzione membro), viene visualizzata la bitmap "segno di spunta su".  
  
- **MF_UNCHECKED** agisce come un elemento toggle con **MF_CHECKED** per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta off".  
  
- **MF_DISABLED** disabilita la voce di menu in modo che non possono essere selezionato, ma non oscurato.  
  
- `MF_ENABLED`Consente la voce di menu in modo che è possibile selezionare e ripristinarlo dallo stato inattivo.  
  
- **MF_GRAYED** disabilita la voce di menu in modo che non è possibile selezionare Disattiva.  
  
- **MF_MENUBARBREAK** posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nei menu a comparsa. La nuova colonna di menu a comparsa sarà separata da una linea di divisione verticale dalla colonna precedente.  
  
- **MF_MENUBREAK** posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nei menu a comparsa. Nessuna linea di divisione viene inserita tra le colonne.  
  
- `MF_OWNERDRAW`Specifica che l'elemento è un elemento proprietario. Quando viene visualizzato il menu per la prima volta, la finestra proprietaria il menu riceve un `WM_MEASUREITEM` messaggio, che recupera l'altezza e la larghezza della voce di menu. Il `WM_DRAWITEM` messaggio è quello inviato ogni volta che il proprietario è necessario aggiornare l'aspetto della voce di menu. Questa opzione non è valida per una voce di menu di primo livello.  
  
- **MF_POPUP** specifica che la voce di menu dispone di un menu a comparsa associato. Il parametro ID specifica un handle a un menu di scelta rapida che deve essere associato all'elemento. Viene utilizzato per l'aggiunta di un menu popup di primo livello o un menu a comparsa gerarchico per una voce di menu a comparsa.  
  
- **MF_SEPARATOR** Disegna una linea di divisione orizzontale. Può essere utilizzato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.  
  
- **MF_STRING** specifica che la voce di menu è una stringa di caratteri.  
  
 Ognuno dei gruppi seguenti sono elencati flag si escludono a vicenda e non possono essere utilizzati insieme:  
  
- **MF_DISABLED**, `MF_ENABLED`, e **MF_GRAYED**  
  
- **MF_STRING**, `MF_OWNERDRAW`, **MF_SEPARATOR**e la versione di bitmap  
  
- **MF_MENUBARBREAK** e **MF_MENUBREAK**  
  
- **MF_CHECKED** e **MF_UNCHECKED**  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu::CreateMenu](#createmenu).  
  
##  <a name="attach"></a>CMenu::Attach  
 Collega un menu di Windows esistente a un `CMenu` oggetto.  
  
```  
BOOL Attach(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 `hMenu`  
 Specifica un handle a un menu di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione non deve essere chiamata se è già collegato un menu di `CMenu` oggetto. L'handle del menu viene archiviato nel `m_hMenu` (membro dati).  
  
 Se il menu di cui si desidera modificare è già associato a una finestra, è possibile utilizzare il [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu) funzione per ottenere un handle per il menu.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]  
  
##  <a name="checkmenuitem"></a>CMenu::CheckMenuItem  
 Aggiunge i segni di spunta per o rimuove le voci di menu nel menu a comparsa di segni di spunta.  
  
```  
UINT CheckMenuItem(
    UINT nIDCheckItem,  
    UINT nCheck);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDCheckItem`  
 Specifica la voce di menu da controllare, come determinato da `nCheck`.  
  
 `nCheck`  
 Specifica come controllare la voce di menu e come determinare la posizione dell'elemento del menu. Il `nCheck` parametro può essere una combinazione di **MF_CHECKED** o **MF_UNCHECKED** con **MF_BYPOSITION** o **MF_BYCOMMAND** flag. Questi flag possono essere combinati utilizzando l'operatore OR bit per bit. Tali funzioni hanno i significati seguenti:  
  
- **MF_BYCOMMAND** specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita.  
  
- **MF_BYPOSITION** specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.  
  
- **MF_CHECKED** agisce come un elemento toggle con **MF_UNCHECKED** per inserire il segno di spunta accanto all'elemento predefinito.  
  
- **MF_UNCHECKED** agisce come un elemento toggle con **MF_CHECKED** per rimuovere un segno di spunta accanto all'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato precedente dell'elemento: **MF_CHECKED** o **MF_UNCHECKED**, o 0xFFFFFFFF se la voce di menu non esiste.  
  
### <a name="remarks"></a>Note  
 Il `nIDCheckItem` parametro specifica l'elemento da modificare.  
  
 Il `nIDCheckItem` parametro può identificare un menu di scelta rapida, nonché una voce di menu. Non richiede passaggi particolari sono necessari per controllare una voce di menu a comparsa. Impossibile controllare le voci di menu di primo livello. Poiché non dispone di un identificatore della voce di menu associato, è necessario che una voce di menu a comparsa dalla posizione.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu::GetMenuState](#getmenustate).  
  
##  <a name="checkmenuradioitem"></a>CMenu::CheckMenuRadioItem  
 Controlla una voce di menu specificato e lo rende una voce di opzione.  
  
```  
BOOL CheckMenuRadioItem(
    UINT nIDFirst,  
    UINT nIDLast,  
    UINT nIDItem,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDFirst`  
 Specifica (come un ID o un offset, in base al valore `nFlags`) la prima voce di menu nel gruppo di pulsanti di opzione.  
  
 `nIDLast`  
 Specifica (come un ID o un offset, in base al valore `nFlags`) l'ultima voce di menu nel gruppo di pulsanti di opzione.  
  
 `nIDItem`  
 Specifica (come un ID o un offset, in base al valore `nFlags`) l'elemento nel gruppo che verrà controllato con un pulsante di opzione.  
  
 `nFlags`  
 Specifica l'interpretazione di `nIDFirst`, `nIDLast`, e `nIDItem` nel modo seguente:  
  
|nFlags|Interpretazione|  
|------------|--------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0  
  
### <a name="remarks"></a>Note  
 Allo stesso tempo, la funzione Deseleziona tutte le altre voci di menu del gruppo associato e cancella il flag di tipo di opzione-item per tali elementi. L'elemento selezionato viene visualizzato utilizzando una bitmap di pulsante (o punto elenco) radio anziché una bitmap di segno di spunta.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [ON_COMMAND_RANGE](message-map-macros-mfc.md#on_command_range).  
  
##  <a name="cmenu"></a>CMenu::CMenu  
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
  
##  <a name="createmenu"></a>CMenu::CreateMenu  
 Crea un menu e lo collega al `CMenu` oggetto.  
  
```  
BOOL CreateMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu è stato creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il menu è inizialmente vuoto. Voci di menu possono essere aggiunti tramite il `AppendMenu` o `InsertMenu` funzione membro.  
  
 Se il menu viene assegnato a una finestra, viene automaticamente distrutta quando la finestra viene eliminata.  
  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non viene assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#22](../../mfc/reference/codesnippet/cpp/cmenu-class_2.cpp)]  
  
##  <a name="createpopupmenu"></a>CMenu::CreatePopupMenu  
 Crea un menu a comparsa e lo collega al `CMenu` oggetto.  
  
```  
BOOL CreatePopupMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu di scelta rapida è stato creato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il menu è inizialmente vuoto. Voci di menu possono essere aggiunti tramite il `AppendMenu` o `InsertMenu` funzione membro. L'applicazione è possibile aggiungere il menu di scelta rapida a un menu esistente o un menu a comparsa. Il `TrackPopupMenu` funzione membro può essere utilizzata per visualizzare questo menu come menu a comparsa a virgola mobile e per tenere traccia delle selezioni nel menu a comparsa.  
  
 Se il menu viene assegnato a una finestra, viene automaticamente distrutta quando la finestra viene eliminata. Se il menu viene aggiunto a un menu esistente, viene automaticamente distrutta quando viene eliminato definitivamente tale menu.  
  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu a comparsa, se il menu non è assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu::CreateMenu](#createmenu).  
  
##  <a name="deletemenu"></a>CMenu  
 Elimina un elemento dal menu.  
  
```  
BOOL DeleteMenu(
    UINT nPosition,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `nPosition`  
 Specifica la voce di menu che deve essere eliminato, come determinato dalla `nFlags`.  
  
 `nFlags`  
 Viene utilizzata per interpretare `nPosition` nel modo seguente:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se la voce di menu dispone di un menu a comparsa associata, `DeleteMenu` Elimina l'handle per il menu a comparsa e libera la memoria utilizzata dal menu di scelta rapida.  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).  
  
##  <a name="deletetempmap"></a>CMenu::DeleteTempMap  
 Chiamato automaticamente dal `CWinApp` gestore tempo di inattività, elimina qualsiasi temporaneo `CMenu` degli oggetti creati dal [FromHandle](#fromhandle) funzione membro.  
  
```  
static void PASCAL DeleteTempMap();
```  
  
### <a name="remarks"></a>Note  
 `DeleteTempMap`Disconnette l'oggetto menu di Windows associato a un elemento temporaneo `CMenu` oggetto prima di eliminare il `CMenu` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#23](../../mfc/reference/codesnippet/cpp/cmenu-class_3.cpp)]  
  
##  <a name="destroymenu"></a>CMenu::DestroyMenu  
 Elimina definitivamente il menu e le risorse di Windows che sono state utilizzate.  
  
```  
BOOL DestroyMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu viene eliminato definitivamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il menu viene disconnesso dal `CMenu` dell'oggetto prima di essere eliminato. Le finestre `DestroyMenu` funzione chiamata in modo automatico il `CMenu` distruttore.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu::CreateMenu](#createmenu).  
  
##  <a name="detach"></a>CMenu::Detach  
 Scollega un menu di Windows da un `CMenu` dell'oggetto e restituisce l'handle.  
  
```  
HMENU Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle, di tipo `HMENU`, a un menu di Windows, se l'esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Il `m_hMenu` membro dati è impostato su **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#21](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]  
  
##  <a name="drawitem"></a>CMenu::DrawItem  
 Chiamato dal framework quando un aspetto visivo di un menu creato dal proprietario cambia.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura che contiene informazioni sul tipo di disegno necessaria.  
  
### <a name="remarks"></a>Note  
 Il `itemAction` appartenente il `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita. Eseguire l'override di questa funzione membro per implementare disegno di un proprietario `CMenu` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima del completamento di questa funzione membro.  
  
 Vedere [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una descrizione del `DRAWITEMSTRUCT` struttura.  
  
### <a name="example"></a>Esempio  
 Il codice seguente è da MFC [CTRLTEST](../../visual-cpp-samples.md) esempio:  
  
 [!code-cpp[NVC_MFCWindowing#24](../../mfc/reference/codesnippet/cpp/cmenu-class_4.cpp)]  
  
##  <a name="enablemenuitem"></a>EnableMenuItem  
 Abilita o disabilita offusca una voce di menu.  
  
```  
UINT EnableMenuItem(
    UINT nIDEnableItem,  
    UINT nEnable);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDEnableItem*  
 Specifica la voce di menu da attivare, come determinato da `nEnable`. Questo parametro è possibile specificare gli elementi di menu di scelta rapida, nonché le voci di menu standard.  
  
 `nEnable`  
 Specifica l'azione da intraprendere. Può essere una combinazione di **MF_DISABLED**, `MF_ENABLED`, o **MF_GRAYED**, con **MF_BYCOMMAND** o **MF_BYPOSITION**. Questi valori possono essere combinati utilizzando l'operatore OR bit per bit. Questi valori hanno il significato seguente:  
  
- **MF_BYCOMMAND** specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita.  
  
- **MF_BYPOSITION** specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.  
  
- **MF_DISABLED** disabilita la voce di menu in modo che non possono essere selezionato, ma non oscurato.  
  
- `MF_ENABLED`Consente la voce di menu in modo che è possibile selezionare e ripristinarlo dallo stato inattivo.  
  
- **MF_GRAYED** disabilita la voce di menu in modo che non è possibile selezionare Disattiva.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato precedente ( **MF_DISABLED**, `MF_ENABLED`, o **MF_GRAYED**) o -1 se non è valido.  
  
### <a name="remarks"></a>Note  
 Il [CreateMenu](#createmenu), [InsertMenu](#insertmenu), [ModifyMenu](#modifymenu), e [LoadMenuIndirect](#loadmenuindirect) funzioni membro possono inoltre impostare lo stato (abilitato, disabilitato o visualizzato in grigio) di una voce di menu.  
  
 Utilizzo di **MF_BYPOSITION** valore richiede un'applicazione può utilizzare corrette `CMenu`. Se il `CMenu` del menu barra viene usata, una voce di menu di primo livello (un elemento nella barra dei menu) è interessata. Per impostare lo stato di un elemento in un menu a comparsa popup o annidato in base alla posizione, è necessario specificare un'applicazione di `CMenu` del menu a comparsa.  
  
 Quando un'applicazione specifica di **MF_BYCOMMAND** flag, Windows controlla tutti gli elementi di menu di scelta rapida che sono subordinati al `CMenu`; pertanto, a meno che non esistono voci di menu duplicate, utilizzando il `CMenu` del menu barra è sufficiente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#25](../../mfc/reference/codesnippet/cpp/cmenu-class_5.cpp)]  
  
##  <a name="fromhandle"></a>CMenu::FromHandle  
 Restituisce un puntatore a un `CMenu` oggetto in base a un handle di Windows a un menu.  
  
```  
static CMenu* PASCAL FromHandle(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 `hMenu`  
 Un handle di Windows a un menu.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CMenu` che potrebbe essere temporaneo o permanente.  
  
### <a name="remarks"></a>Note  
 Se un `CMenu` oggetto non è già collegato all'oggetto dal menu di Windows, una password temporanea `CMenu` oggetto viene creato e collegato.  
  
 Questo temporaneo `CMenu` oggetto è valido solo fino alla successiva esecuzione dell'applicazione è il tempo di inattività nel relativo ciclo di eventi, nel qual caso vengono eliminati tutti gli oggetti temporanei.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu::CreateMenu](#createmenu).  
  
##  <a name="getdefaultitem"></a>CMenu::GetDefaultItem  
 Determina la voce di menu predefinito dal menu specificato.  
  
```  
UINT GetDefaultItem(
    UINT gmdiFlags,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *gmdiFlags*  
 Valore che specifica la modalità con cui la funzione Cerca per voci di menu. Questo parametro può essere Nessuno, uno o una combinazione dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|**GMDI_GOINTOPOPUPS**|Specifica che, se la voce predefinita che viene aperto un sottomenu, la funzione è la ricerca in modo ricorsivo il sottomenu corrispondente. Se il sottomenu non dispone di alcun elemento predefinito, il valore restituito identifica l'elemento che apre il sottomenu.<br /><br /> Per impostazione predefinita, la funzione restituisce il primo elemento predefinito dal menu specificato, indipendentemente dal fatto che sia un elemento che viene aperto un sottomenu.|  
|**GMDI_USEDISABLED**|Specifica che la funzione restituisce un elemento predefinito, anche se è disabilitato.<br /><br /> Per impostazione predefinita, la funzione ignora elementi disabilitati o non disponibile.|  
  
 `fByPos`  
 Valore che specifica se recuperare l'identificatore della voce di menu o la relativa posizione. Se questo parametro è **FALSE**, viene restituito l'identificatore. In caso contrario, viene restituita la posizione.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è l'identificatore o la posizione della voce di menu. Se la funzione ha esito negativo, il valore restituito è - 1.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della funzione Win32 [GetMenuDefaultItem](http://msdn.microsoft.com/library/windows/desktop/ms647976), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="getmenucontexthelpid"></a>CMenu::GetMenuContextHelpId  
 Recupera l'ID associato alla Guida sensibile al contesto `CMenu`.  
  
```  
DWORD GetMenuContextHelpId() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La Guida sensibile al contesto ID attualmente associato `CMenu` se presente; in caso contrario è zero.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="getmenuinfo"></a>CMenu::GetMenuInfo  
 Recupera le informazioni per un menu.  
  
```  
BOOL GetMenuInfo(LPMENUINFO lpcmi) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpcmi`  
 Un puntatore a un [MENUINFO](http://msdn.microsoft.com/library/windows/desktop/ms647575) struttura contenente informazioni per il menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare informazioni sul menu.  
  
##  <a name="getmenuitemcount"></a>CMenu::GetMenuItemCount  
 Determina il numero di elementi in un menu popup di primo livello.  
  
```  
UINT GetMenuItemCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di voci di menu se la funzione ha esito positivo. in caso contrario-1.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).  
  
##  <a name="getmenuitemid"></a>CMenu::GetMenuItemID  
 Ottiene l'identificatore della voce di menu per una voce di menu si trova in corrispondenza della posizione definita da `nPos`.  
  
```  
UINT GetMenuItemID(int nPos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica la posizione (in base zero) della voce di menu viene recuperato il cui ID.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di elemento per l'elemento specificato in un menu a comparsa se la funzione ha esito positivo. Se l'elemento specificato è un menu a comparsa (in contrapposizione a un elemento all'interno del menu a comparsa), il valore restituito è -1. Se `nPos` corrisponde a un **separatore** voce di menu, il valore restituito è 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="getmenuiteminfo"></a>CMenu::GetMenuItemInfo  
 Recupera informazioni su una voce di menu.  
  
```  
BOOL GetMenuItemInfo(
    UINT uItem,  
    LPMENUITEMINFO lpMenuItemInfo,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `uItem`  
 Identificatore o la posizione della voce di menu per cui ottenere informazioni. Il significato di questo parametro dipende dal valore di `ByPos`.  
  
 `lpMenuItemInfo`  
 Un puntatore a un [MENUITEMINFO](http://msdn.microsoft.com/library/windows/desktop/ms647578), come descritto in Windows SDK, che contiene informazioni sul menu di.  
  
 `fByPos`  
 Valore che specifica il significato di `nIDItem`. Per impostazione predefinita, `ByPos` è **FALSE**, che indica che uItem è un identificatore di elemento di menu. Se `ByPos` non è impostata su **FALSE**, indica una posizione di voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni dettagliate sull'errore, utilizzare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360), come descritto in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del della funzione Win32 [GetMenuItemInfo](http://msdn.microsoft.com/library/windows/desktop/ms647980), come descritto in Windows SDK. Si noti che nell'implementazione MFC di `GetMenuItemInfo`, non si usa un handle a un menu.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#26](../../mfc/reference/codesnippet/cpp/cmenu-class_6.cpp)]  
  
##  <a name="getmenustate"></a>CMenu::GetMenuState  
 Restituisce lo stato della voce di menu specificata o il numero di elementi in un menu a comparsa.  
  
```  
UINT GetMenuState(
    UINT nID,  
    UINT nFlags) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Specifica l'ID della voce di menu, come determinato da `nFlags`.  
  
 `nFlags`  
 Specifica la natura del `nID`. Può essere uno dei valori seguenti:  
  
- **MF_BYCOMMAND** specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questa è l'impostazione predefinita.  
  
- **MF_BYPOSITION** specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore è 0xFFFFFFFF se l'elemento specificato non esiste. Se *nId* identifica un menu a comparsa, il byte di ordine superiore contiene il numero di elementi nel menu a comparsa e i byte di ordine inferiore contiene i flag di menu associati il menu a comparsa. In caso contrario il valore restituito è una maschera (o booleano) dei valori nell'elenco seguente (questa maschera descrive lo stato del menu elemento *nId* identifica):  
  
- **MF_CHECKED** agisce come un elemento toggle con **MF_UNCHECKED** per inserire il segno di spunta accanto all'elemento predefinito. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta su".  
  
- **MF_DISABLED** disabilita la voce di menu in modo che non possono essere selezionato, ma non oscurato.  
  
- `MF_ENABLED`Consente la voce di menu in modo che è possibile selezionare e ripristinarlo dallo stato inattivo. Si noti che il valore di questa costante è 0; un'applicazione non è consigliabile testare su 0 per un errore quando si utilizza questo valore.  
  
- **MF_GRAYED** disabilita la voce di menu in modo che non è possibile selezionare Disattiva.  
  
- **MF_MENUBARBREAK** posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nei menu a comparsa. La nuova colonna di menu a comparsa sarà separata da una linea di divisione verticale dalla colonna precedente.  
  
- **MF_MENUBREAK** posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nei menu a comparsa. Nessuna linea di divisione viene inserita tra le colonne.  
  
- **MF_SEPARATOR** Disegna una linea di divisione orizzontale. Può essere utilizzato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.  
  
- **MF_UNCHECKED** agisce come un elemento toggle con **MF_CHECKED** per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere il `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta off". Si noti che il valore di questa costante è 0; un'applicazione non è consigliabile testare su 0 per un errore quando si utilizza questo valore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#27](../../mfc/reference/codesnippet/cpp/cmenu-class_7.cpp)]  
  
##  <a name="getmenustring"></a>CMenu::GetMenuString  
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
 `nIDItem`  
 Specifica l'identificatore di tipo integer della voce di menu o l'offset della voce di menu nel menu, a seconda del valore di `nFlags`.  
  
 `lpString`  
 Punta al buffer che riceverà l'etichetta.  
  
 `rString`  
 Un riferimento a un `CString` oggetto che deve ricevere la stringa copiata dal menu.  
  
 `nMaxCount`  
 Specifica la lunghezza massima (in caratteri) dell'etichetta da copiare. Se l'etichetta è più lungo del massimo specificato nella `nMaxCount`, i caratteri aggiuntivi vengono troncati.  
  
 `nFlags`  
 Specifica l'interpretazione del `nIDItem` parametro. Può essere uno dei valori seguenti:  
  
|nFlags|Interpretazione di nIDItem|  
|------------|-------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il numero effettivo di caratteri copiati nel buffer, escluso il carattere di terminazione null.  
  
### <a name="remarks"></a>Note  
 Il `nMaxCount` parametro deve essere maggiore del numero di caratteri nell'etichetta per contenere il carattere null che termina una stringa di uno.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="getsafehmenu"></a>CMenu::GetSafeHmenu  
 Restituisce il `HMENU` incapsulato da questo `CMenu` oggetto, o un **NULL** `CMenu` puntatore.  
  
```  
HMENU GetSafeHmenu() const;  
```  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu::LoadMenu](#loadmenu).  
  
##  <a name="getsubmenu"></a>CMenu::GetSubMenu  
 Recupera il `CMenu` oggetto di un menu a comparsa.  
  
```  
CMenu* GetSubMenu(int nPos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica la posizione del menu a comparsa contenuta nel menu. I valori di posizione iniziano da 0 per la prima voce di menu. Identificatore del menu di scelta rapida non può essere utilizzato in questa funzione.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CMenu` i cui `m_hMenu` membro contiene un handle per il menu a comparsa se esiste un menu a comparsa in corrispondenza della posizione specificata; in caso contrario **NULL**. Se un `CMenu` oggetto non esiste, quindi viene creato un temporaneo. Il `CMenu` puntatore restituito non deve essere archiviati.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu::TrackPopupMenu](#trackpopupmenu).  
  
##  <a name="insertmenu"></a>CMenu:: InsertMenu  
 Inserisce una nuova voce di menu in corrispondenza della posizione specificata da `nPosition` e Sposta altri elementi di menu a discesa.  
  
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
 `nPosition`  
 Specifica la voce di menu prima della quale è necessario inserire la nuova voce di menu. Il `nFlags` parametro può essere utilizzato per interpretare `nPosition` nei modi seguenti:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0. Se `nPosition` è -1, la nuova voce di menu viene aggiunto alla fine del menu.|  
  
 `nFlags`  
 Specifica la modalità `nPosition` viene interpretato e specifica le informazioni sullo stato della nuova voce di menu quando viene aggiunto al menu. Per un elenco di flag che è possibile impostare, vedere il [AppendMenu](#appendmenu) funzione membro. Per specificare più valori, utilizzare l'operatore OR bit per bit per combinarli con i **MF_BYCOMMAND** o **MF_BYPOSITION** flag.  
  
 `nIDNewItem`  
 Specifica l'ID di comando della voce di menu nuovo o, se `nFlags` è impostato su **MF_POPUP**, l'handle del menu ( `HMENU`) del menu a comparsa. Il `nIDNewItem` parametro viene ignorato (non necessaria) se `nFlags` è impostato su **MF_SEPARATOR**.  
  
 `lpszNewItem`  
 Specifica il contenuto della voce di menu nuovo. `nFlags`può essere utilizzato per interpretare `lpszNewItem` nei modi seguenti:  
  
|nFlags|Interpretazione di lpszNewItem|  
|------------|-----------------------------------|  
|`MF_OWNERDRAW`|Contiene un valore a 32 bit fornita dall'applicazione che l'applicazione può usare per mantenere dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione nel **itemData** membro della struttura fornita dal [WM_MEASUREITEM](http://msdn.microsoft.com/library/windows/desktop/bb775925) e [WM_DRAWITEM](http://msdn.microsoft.com/library/windows/desktop/bb775923) messaggi. Questi messaggi vengono inviati quando la voce di menu viene inizialmente visualizzata o viene modificata.|  
|**MF_STRING**|Contiene un puntatore a una stringa con terminazione null di tipo long. Questo è l'interpretazione predefinita.|  
|**MF_SEPARATOR**|Il `lpszNewItem` parametro viene ignorato (non necessario).|  
  
 *pBmp*  
 Punta a un `CBitmap` oggetto che verrà utilizzato come voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione può specificare lo stato della voce di menu impostando i valori `nFlags`.  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.  
  
 Quando `nIDNewItem` specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se il menu viene eliminato definitivamente, verrà eliminato anche il menu inserito. Un menu inserite deve essere scollegato da un `CMenu` oggetto per evitare conflitti.  
  
 Se è attiva finestra figlio MDI (interfaccia) a documenti multipli viene ottimizzata e un'applicazione inserisce un menu a comparsa menu dell'applicazione MDI chiamando questa funzione e specificando la **MF_BYPOSITION** flag, il menu di inserimento una posizione più a sinistra del previsto. Ciò accade perché il menu di controllo della finestra figlio MDI attiva viene inserito nella prima posizione della barra dei menu della finestra cornice MDI. Per posizionare correttamente il menu, l'applicazione deve aggiungere 1 al valore di posizione che verrebbe utilizzato in caso contrario. Un'applicazione può utilizzare il **WM_MDIGETACTIVE** messaggio per determinare se la finestra figlio attualmente attiva è ingrandita.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#28](../../mfc/reference/codesnippet/cpp/cmenu-class_8.cpp)]  
  
##  <a name="insertmenuitem"></a>CMenu::InsertMenuItem  
 Inserisce una nuova voce di menu in corrispondenza della posizione specificata in un menu.  
  
```  
BOOL InsertMenuItem(
    UINT uItem,  
    LPMENUITEMINFO lpMenuItemInfo,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `uItem`  
 Vedere la descrizione di `uItem` in [InsertMenuItem](http://msdn.microsoft.com/library/windows/desktop/ms647988) in Windows SDK.  
  
 `lpMenuItemInfo`  
 Vedere la descrizione di `lpmii` in **InsertMenuItem** in Windows SDK.  
  
 `fByPos`  
 Vedere la descrizione di `fByPosition` in **InsertMenuItem** in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Questa funzione esegue il wrapping [InsertMenuItem](http://msdn.microsoft.com/library/windows/desktop/ms647988), descritto in Windows SDK.  
  
##  <a name="loadmenu"></a>CMenu::LoadMenu  
 Carica una risorsa di menu dal file eseguibile dell'applicazione e lo collega al `CMenu` oggetto.  
  
```  
BOOL LoadMenu(LPCTSTR lpszResourceName);  
BOOL LoadMenu(UINT nIDResource);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszResourceName`  
 Punta a una stringa con terminazione null che contiene il nome della risorsa di menu da caricare.  
  
 `nIDResource`  
 Specifica l'ID di menu della risorsa di menu da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la risorsa di menu è stata caricata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non viene assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#29](../../mfc/reference/codesnippet/cpp/cmenu-class_9.cpp)]  
  
##  <a name="loadmenuindirect"></a>CMenu::LoadMenuIndirect  
 Carica una risorsa da un modello di menu in memoria e lo collega al `CMenu` oggetto.  
  
```  
BOOL LoadMenuIndirect(const void* lpMenuTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 *lpMenuTemplate*  
 Punta a un modello di menu (ovvero un singolo [MENUITEMTEMPLATEHEADER](http://msdn.microsoft.com/library/windows/desktop/ms647583) struttura e un insieme di uno o più [MENUITEMTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms647581) strutture). Per ulteriori informazioni su queste due strutture, vedi il Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la risorsa di menu è stata caricata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un modello di menu è un'intestazione seguita da una raccolta di uno o più [MENUITEMTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms647581) strutture, ognuno dei quali può contenere uno o più voci di menu e menu di scelta rapida.  
  
 Il numero di versione deve essere 0.  
  
 Il **mtOption** devono includere flag **MF_END** per l'ultimo elemento in un elenco e per l'ultimo elemento nell'elenco principale. Vedere il `AppendMenu` funzione membro per altri flag. Il **mtId** membro deve essere omesso dal **MENUITEMTEMPLATE** struttura quando **MF_POPUP** specificato nel **mtOption**.  
  
 Lo spazio allocato per il **MENUITEMTEMPLATE** struttura deve essere sufficientemente grande per **mtString** per contenere il nome della voce di menu come una stringa con terminazione null.  
  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non viene assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#30](../../mfc/reference/codesnippet/cpp/cmenu-class_10.cpp)]  
  
##  <a name="m_hmenu"></a>CMenu::m_hMenu  
 Specifica il `HMENU` handle del menu finestre è collegata la `CMenu` oggetto.  
  
```  
HMENU m_hMenu;  
```  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu::LoadMenu](#loadmenu).  
  
##  <a name="measureitem"></a>CMenu::MeasureItem  
 Chiamato dal framework quando viene creato un menu con lo stile di disegno personalizzato.  
  
```  
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMeasureItemStruct`  
 Un puntatore a un `MEASUREITEMSTRUCT` struttura.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare il `MEASUREITEMSTRUCT` struttura informa Windows delle dimensioni del menu.  
  
 Vedere [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una descrizione del `MEASUREITEMSTRUCT` struttura.  
  
### <a name="example"></a>Esempio  
 Il codice seguente è da MFC [CTRLTEST](../../visual-cpp-samples.md) esempio:  
  
 [!code-cpp[NVC_MFCWindowing#31](../../mfc/reference/codesnippet/cpp/cmenu-class_11.cpp)]  
  
##  <a name="modifymenu"></a>CMenu::ModifyMenu  
 Modifica di una voce di menu esistenti in corrispondenza della posizione specificata da `nPosition`.  
  
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
 `nPosition`  
 Specifica la voce di menu da modificare. Il `nFlags` parametro può essere utilizzato per interpretare `nPosition` nei modi seguenti:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
 `nFlags`  
 Specifica la modalità `nPosition` viene interpretato e vengono fornite informazioni sulle modifiche da apportare alla voce di menu. Per un elenco di flag che possono essere impostati, vedere il [AppendMenu](#appendmenu) funzione membro.  
  
 `nIDNewItem`  
 Specifica l'ID di comando della voce di menu modificato o se `nFlags` è impostato su **MF_POPUP**, l'handle del menu ( `HMENU`) di un menu a comparsa. Il `nIDNewItem` parametro viene ignorato (non necessaria) se `nFlags` è impostato su **MF_SEPARATOR**.  
  
 `lpszNewItem`  
 Specifica il contenuto della voce di menu nuovo. Il `nFlags` parametro può essere utilizzato per interpretare `lpszNewItem` nei modi seguenti:  
  
|nFlags|Interpretazione di lpszNewItem|  
|------------|-----------------------------------|  
|`MF_OWNERDRAW`|Contiene un valore a 32 bit fornita dall'applicazione che l'applicazione può usare per mantenere dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione durante l'elaborazione **MF_MEASUREITEM** e **MF_DRAWITEM**.|  
|**MF_STRING**|Contiene un puntatore di tipo long a una stringa con terminazione null o a un `CString`.|  
|**MF_SEPARATOR**|Il `lpszNewItem` parametro viene ignorato (non necessario).|  
  
 *pBmp*  
 Punta a un `CBitmap` oggetto che verrà utilizzato come voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione specifica il nuovo stato della voce di menu impostando i valori `nFlags`. Se questa funzione sostituisce un menu a comparsa associato alla voce di menu, menu a comparsa precedente distrugge e libera la memoria utilizzata dal menu di scelta rapida.  
  
 Quando `nIDNewItem` specifica un menu a comparsa, diventa parte del menu in cui viene inserito. Se il menu viene eliminato definitivamente, verrà eliminato anche il menu inserito. Un menu inserite deve essere scollegato da un `CMenu` oggetto per evitare conflitti.  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`. Per modificare gli attributi di voci di menu esistenti, risulta più veloce usare il `CheckMenuItem` e `EnableMenuItem` funzioni membro.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="operator_hmenu"></a>CMenu::operator HMENU  
 Utilizzare questo operatore per recuperare l'handle del `CMenu` oggetto.  
  
```  
operator HMENU() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'handle del `CMenu` oggetto; in caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare l'handle per chiamare direttamente le API di Windows.  
  
##  <a name="operator_neq"></a>CMenu::operator! =  
 Determina se due menu logicamente non sono uguali.  
  
```  
BOOL operator!=(const CMenu& menu) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `menu`  
 Oggetto `CMenu` oggetto per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se un oggetto menu sul lato sinistro non è uguale a un oggetto menu sul lato destro.  
  
##  <a name="operator_eq_eq"></a>CMenu::operator = =  
 Determina se due menu sono uguali.  
  
```  
BOOL operator==(const CMenu& menu) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `menu`  
 Oggetto `CMenu` oggetto per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se un oggetto di menu a sinistra è uguale (in termini del `HMENU` valore) a un oggetto menu sul lato destro.  
  
##  <a name="removemenu"></a>CMenu::RemoveMenu  
 Elimina una voce di menu con un menu a comparsa associato dal menu.  
  
```  
BOOL RemoveMenu(
    UINT nPosition,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `nPosition`  
 Specifica la voce di menu da rimuovere. Il `nFlags` parametro può essere utilizzato per interpretare `nPosition` nei modi seguenti:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
 `nFlags`  
 Specifica la modalità `nPosition` viene interpretato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Ma non elimina l'handle per un menu a comparsa, pertanto il menu può essere riutilizzato. Prima di chiamare questa funzione, l'applicazione può chiamare il `GetSubMenu` funzione membro per recuperare il popup `CMenu` oggetto per il riutilizzo.  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="setdefaultitem"></a>CMenu::SetDefaultItem  
 Imposta la voce di menu predefinito per il menu specificato.  
  
```  
BOOL SetDefaultItem(
    UINT uItem,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `uItem`  
 Identificatore o la posizione della nuova voce di menu predefinito o - 1 per nessun elemento predefinito. Il significato di questo parametro dipende dal valore di `fByPos`.  
  
 `fByPos`  
 Valore che specifica il significato di `uItem`. Se questo parametro è **FALSE**, `uItem` è un identificatore di elemento di menu. In caso contrario, è una posizione di voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere informazioni dettagliate sull'errore, utilizzare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360), come descritto in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della funzione Win32 [SetMenuDefaultItem](http://msdn.microsoft.com/library/windows/desktop/ms647996), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="setmenucontexthelpid"></a>CMenu::SetMenuContextHelpId  
 Associa un ID del contesto della Guida in linea con `CMenu`.  
  
```  
BOOL SetMenuContextHelpId(DWORD dwContextHelpId);
```  
  
### <a name="parameters"></a>Parametri  
 `dwContextHelpId`  
 ID del contesto della Guida da associare a `CMenu`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0  
  
### <a name="remarks"></a>Note  
 Tutti gli elementi nel menu di condivideranno questo identificatore, ovvero non è possibile associare un identificatore di contesto della Guida per le singole voci di menu.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="setmenuinfo"></a>CMenu::SetMenuInfo  
 Imposta le informazioni per un menu.  
  
```  
BOOL SetMenuInfo(LPCMENUINFO lpcmi);
```  
  
### <a name="parameters"></a>Parametri  
 `lpcmi`  
 Un puntatore a un [MENUINFO](http://msdn.microsoft.com/library/windows/desktop/ms647575) struttura contenente informazioni per il menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per impostare le informazioni specifiche di menu.  
  
##  <a name="setmenuitembitmaps"></a>CMenu::SetMenuItemBitmaps  
 Associa le mappe di bit specificato a una voce di menu.  
  
```  
BOOL SetMenuItemBitmaps(
    UINT nPosition,  
    UINT nFlags,  
    const CBitmap* pBmpUnchecked,  
    const CBitmap* pBmpChecked);
```  
  
### <a name="parameters"></a>Parametri  
 `nPosition`  
 Specifica la voce di menu da modificare. Il `nFlags` parametro può essere utilizzato per interpretare `nPosition` nei modi seguenti:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistente. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistente. Il primo elemento è nella posizione 0.|  
  
 `nFlags`  
 Specifica la modalità `nPosition` viene interpretato.  
  
 `pBmpUnchecked`  
 Specifica la bitmap da utilizzare per le voci di menu che non vengono controllate.  
  
 `pBmpChecked`  
 Specifica la bitmap da utilizzare per le voci di menu che vengono controllate.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se la voce di menu è selezionata o deselezionata, verrà visualizzata la mappa di bit appropriata accanto alla voce di menu.  
  
 Se il valore `pBmpUnchecked` o `pBmpChecked` è **NULL**, Windows viene visualizzato nulla accanto alla voce di menu per l'attributo corrispondente. Se entrambi i parametri sono **NULL**, Windows Usa il segno di spunta predefinito quando la voce è selezionata e rimuove il segno di spunta se l'elemento è deselezionata.  
  
 Quando viene eliminato il menu, non vengono eliminati definitivamente questi bitmap; l'applicazione deve eliminarle.  
  
 Le finestre **GetMenuCheckMarkDimensions** funzione recupera le dimensioni dell'impostazione predefinita il segno di spunta utilizzato per le voci di menu. L'applicazione utilizza questi valori per determinare le dimensioni appropriate per le bitmap fornite con questa funzione. Ottenere la dimensione, creare le bitmap e quindi si impostano.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#32](../../mfc/reference/codesnippet/cpp/cmenu-class_12.cpp)]  
  
 [!code-cpp[NVC_MFCWindowing#33](../../mfc/reference/codesnippet/cpp/cmenu-class_13.cpp)]  
  
##  <a name="setmenuiteminfo"></a>CMenu::SetMenuItemInfo  
 Modificare le informazioni su una voce di menu.  
  
```  
BOOL SetMenuItemInfo(
    UINT uItem,  
    LPMENUITEMINFO lpMenuItemInfo,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `uItem`  
 Vedere la descrizione di `uItem` in [SetMenuItemInfo](http://msdn.microsoft.com/library/windows/desktop/ms648001) in Windows SDK.  
  
 `lpMenuItemInfo`  
 Vedere la descrizione di `lpmii` in **SetMenuItemInfo** in Windows SDK.  
  
 `fByPos`  
 Vedere la descrizione di `fByPosition` in **SetMenuItemInfo** in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Questa funzione esegue il wrapping [SetMenuItemInfo](http://msdn.microsoft.com/library/windows/desktop/ms648001), descritto in Windows SDK.  
  
##  <a name="trackpopupmenu"></a>CMenu::TrackPopupMenu  
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
 `nFlags`  
 Specifica i flag di posizione sullo schermo e posizione del mouse. Vedere [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) per un elenco dei flag.  
  
 *x*  
 Specifica la posizione orizzontale in coordinate dello schermo del menu a comparsa. In base al valore di `nFlags` parametro, il menu può essere allineata a sinistra, allineato a destra oppure centrato relazione questa posizione.  
  
 *y*  
 Specifica la posizione verticale nelle coordinate dello schermo della parte superiore del menu sullo schermo.  
  
 `pWnd`  
 Identifica la finestra proprietaria del menu a comparsa. Questo parametro non può essere **NULL**, anche se il **TPM_NONOTIFY** flag specificato. Questa finestra riceve tutti **WM_COMMAND** messaggi dal menu. In Windows 3.1 e versioni successive, la finestra non riceve **WM_COMMAND** messaggi fino a quando `TrackPopupMenu` restituisce. In Windows 3.0, la finestra riceve **WM_COMMAND** i messaggi prima che `TrackPopupMenu` restituisce.  
  
 `lpRect`  
 Ignorato.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce il risultato della chiamata al metodo [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Un menu a comparsa a virgola mobile può trovarsi ovunque sullo schermo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#34](../../mfc/reference/codesnippet/cpp/cmenu-class_14.cpp)]  
  
##  <a name="trackpopupmenuex"></a>CMenu::TrackPopupMenuEx  
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
 `fuFlags`  
 Specifica le varie funzioni per menu esteso. Per un elenco di tutti i valori e il relativo significato, vedere [TrackPopupMenuEx](http://msdn.microsoft.com/library/windows/desktop/ms648003).  
  
 *x*  
 Specifica la posizione orizzontale in coordinate dello schermo del menu a comparsa.  
  
 *y*  
 Specifica la posizione verticale nelle coordinate dello schermo della parte superiore del menu sullo schermo.  
  
 `pWnd`  
 Puntatore alla finestra proprietaria del menu a comparsa e la ricezione di messaggi dal menu creato. Questa finestra può essere qualsiasi finestra dall'applicazione corrente, ma non può essere **NULL**. Se si specifica **TPM_NONOTIFY** nel `fuFlags` parametro, la funzione non inviare messaggi a `pWnd`. La funzione deve restituire per la finestra a cui puntata `pWnd` per ricevere il **WM_COMMAND** messaggio.  
  
 *lptpm*  
 Puntatore a un [TPMPARAMS](http://msdn.microsoft.com/library/windows/desktop/ms647586) struttura che specifica un'area dello schermo il menu non deve sovrapporsi. Questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Se si specifica **TPM_RETURNCMD** nel `fuFlags` parametro, il valore restituito è l'identificatore della voce di menu dell'elemento selezionato dall'utente. Se l'utente annulla il menu senza effettuare una selezione o se si verifica un errore, il valore restituito è 0.  
  
 Se non si specifica **TPM_RETURNCMD** nel `fuFlags` parametro, il valore restituito è diverso da zero se la funzione ha esito positivo e 0 in caso di errore. Per ottenere informazioni dettagliate sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Un menu a comparsa a virgola mobile può trovarsi ovunque sullo schermo. Per ulteriori informazioni sulla gestione degli errori durante la creazione del menu a comparsa, vedere [TrackPopupMenuEx](http://msdn.microsoft.com/library/windows/desktop/ms648003).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CTRLTEST](../../visual-cpp-samples.md)   
 [Esempio MFC DYNAMENU](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CObject](../../mfc/reference/cobject-class.md)
