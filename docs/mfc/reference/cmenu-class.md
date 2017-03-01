---
title: CMenu (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMenu
dev_langs:
- C++
helpviewer_keywords:
- HMENU
- menus, class
- menus, base class
- menus, creating
- menus, managing
- CMenu class
ms.assetid: 40cacfdc-d45c-4ec7-bf28-991c72812499
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: dcd353bf0be5d23c1782347f54b16a875ed190ed
ms.lasthandoff: 02/24/2017

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
|[CMenu::CheckMenuItem](#checkmenuitem)|Inserisce un segno di spunta accanto a o rimuove una voce di menu nel menu a comparsa di un segno di spunta.|  
|[CMenu::CheckMenuRadioItem](#checkmenuradioitem)|Inserisce un pulsante di opzione accanto a una voce di menu e rimuove tutti gli altri elementi di menu nel gruppo di pulsante di opzione.|  
|[CMenu::CreateMenu](#createmenu)|Crea un menu vuoto e lo collega a un `CMenu` oggetto.|  
|[CMenu::CreatePopupMenu](#createpopupmenu)|Crea un menu a comparsa vuoto e lo collega a un `CMenu` oggetto.|  
|[CMenu](#deletemenu)|Elimina un elemento specificato dal menu. Se la voce di menu è associato un menu a comparsa, Elimina l'handle per il menu a comparsa e libera la memoria utilizzata da esso.|  
|[CMenu::DeleteTempMap](#deletetempmap)|Consente di eliminare qualsiasi temporaneo `CMenu` gli oggetti creati dal `FromHandle` funzione membro.|  
|[CMenu::DestroyMenu](#destroymenu)|Elimina il menu collegato a un `CMenu` dell'oggetto e libera la memoria occupato il menu.|  
|[CMenu::Detach](#detach)|Disconnette un handle di menu di Windows da un `CMenu` dell'oggetto e restituisce l'handle.|  
|[CMenu::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di un menu creati dal proprietario cambia.|  
|[EnableMenuItem](#enablemenuitem)|Abilita, disabilita o attenua (visualizzata in grigio) una voce di menu.|  
|[CMenu::FromHandle](#fromhandle)|Restituisce un puntatore a un `CMenu` oggetto dato un handle di menu di Windows.|  
|[CMenu::GetDefaultItem](#getdefaultitem)|Determina la voce di menu predefinita nel menu specificato.|  
|[CMenu::GetMenuContextHelpId](#getmenucontexthelpid)|Recupera l'ID del contesto della Guida associato al menu.|  
|[CMenu::GetMenuInfo](#getmenuinfo)|Recupera le informazioni in un menu specifico.|  
|[CMenu::GetMenuItemCount](#getmenuitemcount)|Determina il numero di elementi in un menu a comparsa di primo livello.|  
|[CMenu::GetMenuItemID](#getmenuitemid)|Ottiene l'identificatore della voce di menu per una voce di menu che si trova nella posizione specificata.|  
|[CMenu::GetMenuItemInfo](#getmenuiteminfo)|Recupera informazioni su una voce di menu.|  
|[CMenu::GetMenuState](#getmenustate)|Restituisce lo stato della voce di menu specificata o il numero di elementi in un menu a comparsa.|  
|[CMenu::GetMenuString](#getmenustring)|Recupera l'etichetta della voce di menu specificato.|  
|[CMenu::GetSafeHmenu](#getsafehmenu)|Restituisce il `m_hMenu` sottoposto a wrapping da questo `CMenu` oggetto.|  
|[CMenu::GetSubMenu](#getsubmenu)|Recupera un puntatore a un menu a comparsa.|  
|[CMenu:: InsertMenu](#insertmenu)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata, lo spostamento di altri elementi di menu a discesa.|  
|[CMenu::InsertMenuItem](#insertmenuitem)|Inserisce una nuova voce di menu in corrispondenza della posizione specificata in un menu.|  
|[CMenu::LoadMenu](#loadmenu)|Carica una risorsa di menu dal file eseguibile e lo collega a un `CMenu` oggetto.|  
|[CMenu::LoadMenuIndirect](#loadmenuindirect)|Carica un menu da un modello di menu in memoria e lo collega a un `CMenu` oggetto.|  
|[CMenu::MeasureItem](#measureitem)|Chiamato dal framework per determinare le dimensioni di menu quando viene creato un menu creati dal proprietario.|  
|[CMenu::ModifyMenu](#modifymenu)|Modifica una voce di menu esistenti nella posizione specificata.|  
|[CMenu::RemoveMenu](#removemenu)|Elimina una voce di menu con un menu di scelta rapida associato dal menu specificato.|  
|[CMenu::SetDefaultItem](#setdefaultitem)|Imposta la voce di menu predefinita per il menu specificato.|  
|[CMenu::SetMenuContextHelpId](#setmenucontexthelpid)|Imposta l'ID del contesto della Guida da associare il menu.|  
|[CMenu::SetMenuInfo](#setmenuinfo)|Imposta le informazioni in un menu specifico.|  
|[CMenu::SetMenuItemBitmaps](#setmenuitembitmaps)|Associa le bitmap di segno di spunta specificato con una voce di menu.|  
|[CMenu::SetMenuItemInfo](#setmenuiteminfo)|Modifica informazioni a una voce di menu.|  
|[CMenu::TrackPopupMenu](#trackpopupmenu)|Visualizza un menu a comparsa a virgola mobile nella posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.|  
|[CMenu::TrackPopupMenuEx](#trackpopupmenuex)|Visualizza un menu a comparsa a virgola mobile nella posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMenu::operator HMENU](#operator_hmenu)|Recupera l'handle dell'oggetto menu.|  
|[CMenu::operator! =](#operator_neq)|Determina se due oggetti di menu non sono uguali.|  
|[CMenu::operator = =](#operator_eq_eq)|Determina se due oggetti menu sono uguali.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMenu::m_hMenu](#m_hmenu)|Specifica l'handle per il menu di Windows associato per la `CMenu` oggetto.|  
  
## <a name="remarks"></a>Note  
 Fornisce funzioni membro per la creazione, rilevamento, aggiornamento ed eliminazione di un menu.  
  
 Creare un `CMenu` oggetto sullo stack frame come locale, quindi chiamare `CMenu`di funzioni membro per modificare il nuovo menu in base alle esigenze. Quindi, chiamare [CWnd::SetMenu](../../mfc/reference/cwnd-class.md#setmenu) per impostare il menu a una finestra, seguita da una chiamata al `CMenu` dell'oggetto [scollegamento](#detach) funzione membro. Il `CWnd::SetMenu` funzione membro imposta il menu della finestra per il nuovo menu, la finestra di essere ridisegnato per riflettere la modifica di menu e restituisce anche la proprietà del menu di scelta nella finestra. La chiamata a **scollegamento** scollega il `HMENU` dal `CMenu` oggetto, pertanto che quando locale `CMenu` variabile diventa esterno all'ambito, il `CMenu` distruttore dell'oggetto non tenta di eliminare un menu non possiede più. Il menu viene eliminato automaticamente quando la finestra viene eliminata.  
  
 È possibile utilizzare il [LoadMenuIndirect](#loadmenuindirect) funzione membro per creare un menu da un modello in memoria, ma un menu creato da una risorsa da una chiamata a [LoadMenu](#loadmenu) più facilmente gestibili, e la risorsa menu stesso può essere creata e modificata dall'editor di menu.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMenu`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-nameappendmenua--cmenuappendmenu"></a><a name="appendmenu"></a>CMenu:: AppendMenu  
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
 Specifica l'ID di comando della nuova voce di menu o, se `nFlags` è impostato su **MF_POPUP**, l'handle di menu ( `HMENU`) di un menu a comparsa. Il `nIDNewItem` parametro viene ignorato (non necessaria) se `nFlags` è impostato su **MF_SEPARATOR**.  
  
 `lpszNewItem`  
 Specifica il contenuto della nuova voce di menu. Il `nFlags` parametro viene utilizzato per interpretare `lpszNewItem` nel modo seguente:  
  
|nFlags|Interpretazione di lpszNewItem|  
|------------|-----------------------------------|  
|`MF_OWNERDRAW`|Contiene un valore a 32 bit fornita dall'applicazione che l'applicazione può utilizzare per mantenere dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione durante l'elaborazione di `WM_MEASUREITEM` e `WM_DRAWITEM` i messaggi. Il valore viene archiviato nel **itemData** membro della struttura fornita con tali messaggi.|  
|**MF_STRING**|Contiene un puntatore a una stringa con terminazione null. Questo è l'interpretazione predefinita.|  
|**MF_SEPARATOR**|Il `lpszNewItem` parametro viene ignorato (non necessario).|  
  
 *pBmp*  
 Punta a un `CBitmap` oggetto che verrà utilizzato come voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione può specificare lo stato della voce di menu impostando i valori nella `nFlags`. Quando `nIDNewItem` specifica un menu a comparsa, diventa parte del menu a cui viene aggiunto. Se tale menu viene eliminato, anche il menu aggiunto verrà eliminato. Un menu aggiunto deve essere scollegato da un `CMenu` oggetto per evitare conflitti. Si noti che **MF_STRING** e `MF_OWNERDRAW` non sono validi per la versione di bitmap di `AppendMenu`.  
  
 Nell'elenco seguente vengono descritti i flag che possono essere impostati in `nFlags`:  
  
- **MF_CHECKED** agisce come un elemento toggle con **MF_UNCHECKED** per inserire il valore predefinito segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere la [SetMenuItemBitmaps](#setmenuitembitmaps) funzione membro), viene visualizzata la bitmap "segno di spunta su".  
  
- **MF_UNCHECKED** agisce come un elemento toggle con **MF_CHECKED** per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere la `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta off".  
  
- **MF_DISABLED** disabilita la voce di menu in modo che non possono essere selezionato, ma non dim.  
  
- `MF_ENABLED`Consente la voce di menu che può essere selezionato e ne viene ripristinato dallo stato inattivo.  
  
- **MF_GRAYED** disabilita la voce di menu in modo che non possono essere selezionato e disattiva.  
  
- **MF_MENUBARBREAK** posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nel menu di scelta rapida. La nuova colonna dal menu a comparsa sarà separata da una linea di demarcazione verticale dalla colonna precedente.  
  
- **MF_MENUBREAK** posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nel menu di scelta rapida. Nessuna linea di demarcazione viene inserita tra le colonne.  
  
- `MF_OWNERDRAW`Specifica che l'elemento è un elemento proprietario. Quando viene visualizzato il menu per la prima volta, la finestra proprietaria il menu riceve un `WM_MEASUREITEM` messaggio, che recupera l'altezza e la larghezza della voce di menu. Il `WM_DRAWITEM` messaggio è quella inviata ogni volta che il proprietario è necessario aggiornare l'aspetto della voce di menu. Questa opzione non è valida per una voce di menu di primo livello.  
  
- **MF_POPUP** specifica che la voce di menu dispone di un menu a comparsa è associato. Il parametro ID specifica un handle per un menu a comparsa che deve essere associato all'elemento. Viene utilizzato per l'aggiunta di un menu a comparsa di primo livello o un menu a comparsa gerarchico per una voce di menu a comparsa.  
  
- **MF_SEPARATOR** Disegna una linea di divisione orizzontale. Può essere utilizzato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.  
  
- **MF_STRING** specifica che la voce di menu è una stringa di caratteri.  
  
 Ognuno dei gruppi seguenti sono elencati i flag che si escludono a vengono e non possono essere utilizzati insieme:  
  
- **MF_DISABLED**, `MF_ENABLED`, e **MF_GRAYED**  
  
- **MF_STRING**, `MF_OWNERDRAW`, **MF_SEPARATOR**e la versione di bitmap  
  
- **MF_MENUBARBREAK** e **MF_MENUBREAK**  
  
- **MF_CHECKED** e **MF_UNCHECKED**  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu::CreateMenu](#createmenu).  
  
##  <a name="a-nameattacha--cmenuattach"></a><a name="attach"></a>CMenu::Attach  
 Collega un menu di Windows esistente a un `CMenu` oggetto.  
  
```  
BOOL Attach(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 `hMenu`  
 Specifica un handle per un menu di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione non deve essere chiamata se è già collegato un menu di `CMenu` oggetto. L'handle di menu viene archiviato nel `m_hMenu` (membro dati).  
  
 Se il menu di cui si desidera modificare è già associato a una finestra, è possibile utilizzare il [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu) funzione per ottenere un handle per il menu.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing numero&21;](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]  
  
##  <a name="a-namecheckmenuitema--cmenucheckmenuitem"></a><a name="checkmenuitem"></a>CMenu::CheckMenuItem  
 Aggiunge segni di spunta per o rimuove i segni di spunta da voci di menu nel menu a comparsa.  
  
```  
UINT CheckMenuItem(
    UINT nIDCheckItem,  
    UINT nCheck);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDCheckItem`  
 Specifica la voce di menu da controllare, come determinato da `nCheck`.  
  
 `nCheck`  
 Specifica come controllare la voce di menu e come determinare la posizione dell'elemento del menu. Il `nCheck` parametro può essere una combinazione di **MF_CHECKED** o **MF_UNCHECKED** con **MF_BYPOSITION** o **MF_BYCOMMAND** flag. Questi flag possono essere combinati utilizzando l'operatore OR bit per bit. Hanno i significati seguenti:  
  
- **MF_BYCOMMAND** specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questa è l'impostazione predefinita.  
  
- **MF_BYPOSITION** specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.  
  
- **MF_CHECKED** agisce come un elemento toggle con **MF_UNCHECKED** per inserire il valore predefinito segno di spunta accanto all'elemento.  
  
- **MF_UNCHECKED** agisce come un elemento toggle con **MF_CHECKED** per rimuovere un segno di spunta accanto all'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato precedente dell'articolo: **MF_CHECKED** o **MF_UNCHECKED**, oppure 0xFFFFFFFF se non esiste la voce di menu.  
  
### <a name="remarks"></a>Note  
 Il `nIDCheckItem` parametro specifica l'elemento da modificare.  
  
 Il `nIDCheckItem` parametro può identificare un menu di scelta rapida, nonché una voce di menu. Non eseguire passaggi particolari necessario controllare una voce di menu a comparsa. Impossibile controllare le voci di menu di primo livello. Poiché non dispone di un identificatore della voce di menu associato, è necessario che una voce di menu a comparsa in base alla posizione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu::GetMenuState](#getmenustate).  
  
##  <a name="a-namecheckmenuradioitema--cmenucheckmenuradioitem"></a><a name="checkmenuradioitem"></a>CMenu::CheckMenuRadioItem  
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
 Specifica (come un ID o un offset, a seconda del valore di `nFlags`) la prima voce di menu nel gruppo di pulsanti di opzione.  
  
 `nIDLast`  
 Specifica (come un ID o un offset, a seconda del valore di `nFlags`) l'ultimo elemento di menu nel gruppo di pulsanti di opzione.  
  
 `nIDItem`  
 Specifica (come un ID o un offset, a seconda del valore di `nFlags`) l'elemento nel gruppo di cui verrà eseguito un controllo con un pulsante di opzione.  
  
 `nFlags`  
 Specifica l'interpretazione di `nIDFirst`, `nIDLast`, e `nIDItem` nel modo seguente:  
  
|nFlags|Interpretazione|  
|------------|--------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0  
  
### <a name="remarks"></a>Note  
 Allo stesso tempo, la funzione Deseleziona tutte le altre voci di menu del gruppo associato e cancella il flag di tipo elemento di opzione per tali elementi. L'elemento selezionato viene visualizzato utilizzando una bitmap radio pulsante (o punto elenco) anziché una bitmap di segno di spunta.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [ON_COMMAND_RANGE](http://msdn.microsoft.com/library/c52719fc-dd6e-48c9-af79-383f48d608e0).  
  
##  <a name="a-namecmenua--cmenucmenu"></a><a name="cmenu"></a>CMenu::CMenu  
 Crea un menu vuoto e lo collega a un `CMenu` oggetto.  
  
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
  
##  <a name="a-namecreatemenua--cmenucreatemenu"></a><a name="createmenu"></a>CMenu::CreateMenu  
 Crea un menu che viene associato al `CMenu` oggetto.  
  
```  
BOOL CreateMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu è stato creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il menu è inizialmente vuoto. Voci di menu possono essere aggiunti utilizzando il `AppendMenu` o `InsertMenu` funzione membro.  
  
 Se il menu viene assegnato a una finestra, che viene eliminato automaticamente quando la finestra viene eliminata.  
  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non viene assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#22;](../../mfc/reference/codesnippet/cpp/cmenu-class_2.cpp)]  
  
##  <a name="a-namecreatepopupmenua--cmenucreatepopupmenu"></a><a name="createpopupmenu"></a>CMenu::CreatePopupMenu  
 Crea un menu a comparsa e lo collega a di `CMenu` oggetto.  
  
```  
BOOL CreatePopupMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu a comparsa è stato creato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il menu è inizialmente vuoto. Voci di menu possono essere aggiunti utilizzando il `AppendMenu` o `InsertMenu` funzione membro. L'applicazione può aggiungere menu di scelta rapida a un menu esistente o un menu a comparsa. Il `TrackPopupMenu` funzione membro può essere utilizzata per visualizzare questo menu come menu a comparsa a virgola mobile e per tenere traccia delle selezioni nel menu a comparsa.  
  
 Se il menu viene assegnato a una finestra, che viene eliminato automaticamente quando la finestra viene eliminata. Se il menu viene aggiunta a un menu esistente, viene automaticamente distrutta quando tale menu viene eliminato.  
  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu a comparsa se il menu non viene assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu::CreateMenu](#createmenu).  
  
##  <a name="a-namedeletemenua--cmenudeletemenu"></a><a name="deletemenu"></a>CMenu  
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
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se la voce di menu dispone di un menu di scelta rapida associato, `DeleteMenu` Elimina l'handle per il menu a comparsa e libera la memoria utilizzata dal menu a comparsa.  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare [CWnd::DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).  
  
##  <a name="a-namedeletetempmapa--cmenudeletetempmap"></a><a name="deletetempmap"></a>CMenu::DeleteTempMap  
 Chiamato automaticamente dal `CWinApp` gestore tempo di inattività, consente di eliminare qualsiasi temporaneo `CMenu` gli oggetti creati dal [FromHandle](#fromhandle) funzione membro.  
  
```  
static void PASCAL DeleteTempMap();
```  
  
### <a name="remarks"></a>Note  
 `DeleteTempMap`Disconnette l'oggetto menu Windows collegato a una variabile temporanea `CMenu` oggetto prima di eliminare il `CMenu` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#23;](../../mfc/reference/codesnippet/cpp/cmenu-class_3.cpp)]  
  
##  <a name="a-namedestroymenua--cmenudestroymenu"></a><a name="destroymenu"></a>CMenu::DestroyMenu  
 Elimina il menu e tutte le risorse di Windows che sono state utilizzate.  
  
```  
BOOL DestroyMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il menu viene eliminato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il menu viene scollegato dal `CMenu` dell'oggetto prima di essere eliminato. Windows `DestroyMenu` funzione viene richiamata automaticamente la `CMenu` distruttore.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu::CreateMenu](#createmenu).  
  
##  <a name="a-namedetacha--cmenudetach"></a><a name="detach"></a>CMenu::Detach  
 Disconnette un menu di Windows da un `CMenu` dell'oggetto e restituisce l'handle.  
  
```  
HMENU Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle, di tipo `HMENU`, a un menu di Windows, se ha esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Il `m_hMenu` membro dati è impostato su **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing numero&21;](../../mfc/reference/codesnippet/cpp/cmenu-class_1.cpp)]  
  
##  <a name="a-namedrawitema--cmenudrawitem"></a><a name="drawitem"></a>CMenu::DrawItem  
 Chiamato dal framework quando un aspetto visivo di un menu creati dal proprietario cambia.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura che contiene informazioni sul tipo di disegno necessari.  
  
### <a name="remarks"></a>Note  
 Il `itemAction` membro del `DRAWITEMSTRUCT` struttura definisce l'operazione di disegno che deve essere eseguita. Eseguire l'override di questa funzione membro per implementare la creazione per un proprietario `CMenu` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima del completamento di questa funzione membro.  
  
 Vedere [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una descrizione del `DRAWITEMSTRUCT` struttura.  
  
### <a name="example"></a>Esempio  
 Il codice seguente è da MFC [CTRLTEST](../../visual-cpp-samples.md) esempio:  
  
 [!code-cpp[NVC_MFCWindowing&#24;](../../mfc/reference/codesnippet/cpp/cmenu-class_4.cpp)]  
  
##  <a name="a-nameenablemenuitema--cmenuenablemenuitem"></a><a name="enablemenuitem"></a>EnableMenuItem  
 Abilita, disabilita o attenua una voce di menu.  
  
```  
UINT EnableMenuItem(
    UINT nIDEnableItem,  
    UINT nEnable);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDEnableItem*  
 Specifica la voce di menu da attivare, come determinato da `nEnable`. Questo parametro è possibile specificare gli elementi di menu a comparsa, nonché le voci di menu standard.  
  
 `nEnable`  
 Specifica l'azione da intraprendere. Può essere una combinazione di **MF_DISABLED**, `MF_ENABLED`, o **MF_GRAYED**, con **MF_BYCOMMAND** o **MF_BYPOSITION**. Questi valori possono essere combinati utilizzando l'operatore OR bit per bit. Questi valori hanno i significati seguenti:  
  
- **MF_BYCOMMAND** specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questa è l'impostazione predefinita.  
  
- **MF_BYPOSITION** specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.  
  
- **MF_DISABLED** disabilita la voce di menu in modo che non possono essere selezionato, ma non dim.  
  
- `MF_ENABLED`Consente la voce di menu che può essere selezionato e ne viene ripristinato dallo stato inattivo.  
  
- **MF_GRAYED** disabilita la voce di menu in modo che non possono essere selezionato e disattiva.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato precedente ( **MF_DISABLED**, `MF_ENABLED`, o **MF_GRAYED**) oppure –&1; se non è valido.  
  
### <a name="remarks"></a>Note  
 Il [CreateMenu](#createmenu), [InsertMenu](#insertmenu), [ModifyMenu](#modifymenu), e [LoadMenuIndirect](#loadmenuindirect) funzioni membro possono inoltre impostare lo stato (abilitato, disabilitato o visualizzato in grigio) di una voce di menu.  
  
 Utilizzo di **MF_BYPOSITION** valore richiede un'applicazione può utilizzare l'opzione corretta `CMenu`. Se il `CMenu` del menu barra viene utilizzata, una voce di menu di primo livello (un elemento nella barra dei menu) è interessata. Per impostare lo stato di un elemento in un menu a comparsa popup o nidificato in base alla posizione, è necessario specificare un'applicazione di `CMenu` del menu a comparsa.  
  
 Quando un'applicazione specifica di **MF_BYCOMMAND** flag, Windows verifica tutti gli elementi di menu a comparsa subordinati il `CMenu`; pertanto, a meno che non sono presenti voci di menu duplicate, utilizzando il `CMenu` del menu della barra è sufficiente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#25;](../../mfc/reference/codesnippet/cpp/cmenu-class_5.cpp)]  
  
##  <a name="a-namefromhandlea--cmenufromhandle"></a><a name="fromhandle"></a>CMenu::FromHandle  
 Restituisce un puntatore a un `CMenu` oggetto dato un handle di Windows a un menu.  
  
```  
static CMenu* PASCAL FromHandle(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 `hMenu`  
 Handle Windows per un menu.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CMenu` che potrebbe essere temporaneo o permanente.  
  
### <a name="remarks"></a>Note  
 Se un `CMenu` oggetto non è già connesso all'oggetto menu Windows, un temporaneo `CMenu` oggetto viene creato e collegato.  
  
 Questo temporaneo `CMenu` oggetto è valido solo fino alla successiva esecuzione dell'applicazione è il tempo di inattività nel relativo ciclo di eventi, momento in cui vengono eliminati tutti gli oggetti temporanei.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu::CreateMenu](#createmenu).  
  
##  <a name="a-namegetdefaultitema--cmenugetdefaultitem"></a><a name="getdefaultitem"></a>CMenu::GetDefaultItem  
 Determina la voce di menu predefinita nel menu specificato.  
  
```  
UINT GetDefaultItem(
    UINT gmdiFlags,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *gmdiFlags*  
 Valore che specifica come la funzione Cerca per voci di menu. Questo parametro può essere Nessuno, uno o una combinazione dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|**GMDI_GOINTOPOPUPS**|Specifica che, se la voce predefinita che viene aperto un sottomenu, la funzione è la ricerca in modo ricorsivo il sottomenu corrispondente. Se il sottomenu non dispone di alcun elemento predefinito, il valore restituito identifica l'elemento che consente di aprire il sottomenu.<br /><br /> Per impostazione predefinita, la funzione restituisce il primo elemento predefinito dal menu specificato, indipendentemente dal fatto che sia un elemento che viene aperto un sottomenu.|  
|**GMDI_USEDISABLED**|Specifica che la funzione restituisce un elemento predefinito, anche se è disabilitato.<br /><br /> Per impostazione predefinita, la funzione ignora gli elementi disabilitati o non disponibile.|  
  
 `fByPos`  
 Valore che specifica se recuperare l'identificatore della voce di menu o la relativa posizione. Se questo parametro è **FALSE**, viene restituito l'identificatore. In caso contrario, viene restituita la posizione.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è l'identificatore o la posizione della voce di menu. In caso contrario, il valore restituito è - 1.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della funzione Win32 [GetMenuDefaultItem](http://msdn.microsoft.com/library/windows/desktop/ms647976), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="a-namegetmenucontexthelpida--cmenugetmenucontexthelpid"></a><a name="getmenucontexthelpid"></a>CMenu::GetMenuContextHelpId  
 Recupera l'ID associato Guida sensibile al contesto `CMenu`.  
  
```  
DWORD GetMenuContextHelpId() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La Guida sensibile al contesto ID attualmente associato `CMenu` se presente; in caso contrario è zero.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="a-namegetmenuinfoa--cmenugetmenuinfo"></a><a name="getmenuinfo"></a>CMenu::GetMenuInfo  
 Recupera le informazioni per un menu.  
  
```  
BOOL GetMenuInfo(LPMENUINFO lpcmi) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpcmi`  
 Un puntatore a un [MENUINFO](http://msdn.microsoft.com/library/windows/desktop/ms647575) struttura che contiene informazioni per il menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare le informazioni sul menu.  
  
##  <a name="a-namegetmenuitemcounta--cmenugetmenuitemcount"></a><a name="getmenuitemcount"></a>CMenu::GetMenuItemCount  
 Determina il numero di elementi in un menu a comparsa di primo livello.  
  
```  
UINT GetMenuItemCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di voci del menu se la funzione ha esito positivo. in caso contrario-1.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CWnd::GetMenu](../../mfc/reference/cwnd-class.md#getmenu).  
  
##  <a name="a-namegetmenuitemida--cmenugetmenuitemid"></a><a name="getmenuitemid"></a>CMenu::GetMenuItemID  
 Ottiene l'identificatore della voce di menu per una voce di menu si trova in corrispondenza della posizione definita da `nPos`.  
  
```  
UINT GetMenuItemID(int nPos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica la posizione (in base zero) della voce di menu viene recuperato il cui ID.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di elemento per l'elemento specificato in un menu a comparsa se la funzione ha esito positivo. Se l'elemento specificato è un menu a comparsa (anziché un elemento all'interno del menu a comparsa), il valore restituito è -1. Se `nPos` corrisponde a un **separatore** voce di menu, il valore restituito è 0.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="a-namegetmenuiteminfoa--cmenugetmenuiteminfo"></a><a name="getmenuiteminfo"></a>CMenu::GetMenuItemInfo  
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
 Un puntatore a un [MENUITEMINFO](http://msdn.microsoft.com/library/windows/desktop/ms647578), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)], che contiene informazioni sul menu.  
  
 `fByPos`  
 Valore che specifica il significato di `nIDItem`. Per impostazione predefinita, `ByPos` è **FALSE**, che indica che uItem è un identificatore di voce di menu. Se `ByPos` non è impostata su **FALSE**, indica una posizione di voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere ulteriori informazioni sull'errore, utilizzare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della della funzione Win32 [GetMenuItemInfo](http://msdn.microsoft.com/library/windows/desktop/ms647980), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Si noti che nell'implementazione MFC di `GetMenuItemInfo`, non si utilizza un handle a un menu.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#26; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cmenu-class_6.cpp)]  
  
##  <a name="a-namegetmenustatea--cmenugetmenustate"></a><a name="getmenustate"></a>CMenu::GetMenuState  
 Restituisce lo stato della voce di menu specificata o il numero di elementi in un menu a comparsa.  
  
```  
UINT GetMenuState(
    UINT nID,  
    UINT nFlags) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Specifica l'ID voce di menu, come determinato da `nFlags`.  
  
 `nFlags`  
 Specifica la natura di `nID`. Può essere uno dei valori seguenti:  
  
- **MF_BYCOMMAND** specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questa è l'impostazione predefinita.  
  
- **MF_BYPOSITION** specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore 0xFFFFFFFF se l'elemento specificato non esiste. Se *nId* identifica un menu a comparsa, il byte più significativo contiene il numero di elementi nel menu a comparsa e il byte meno significativo contiene i flag di menu associati nel menu a comparsa. In caso contrario il valore restituito è una maschera (o booleano) dei valori nell'elenco seguente (questa maschera descrive lo stato del menu item che *nId* identifica):  
  
- **MF_CHECKED** agisce come un elemento toggle con **MF_UNCHECKED** per inserire il valore predefinito segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere la `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta su".  
  
- **MF_DISABLED** disabilita la voce di menu in modo che non possono essere selezionato, ma non dim.  
  
- `MF_ENABLED`Consente la voce di menu che può essere selezionato e ne viene ripristinato dallo stato inattivo. Si noti che il valore di questa costante è 0. un'applicazione non è necessario testare rispetto a 0 per un errore quando si utilizza questo valore.  
  
- **MF_GRAYED** disabilita la voce di menu in modo che non possono essere selezionato e disattiva.  
  
- **MF_MENUBARBREAK** posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nel menu di scelta rapida. La nuova colonna dal menu a comparsa sarà separata da una linea di demarcazione verticale dalla colonna precedente.  
  
- **MF_MENUBREAK** posiziona l'elemento in una nuova riga in un menu statico o in una nuova colonna nel menu di scelta rapida. Nessuna linea di demarcazione viene inserita tra le colonne.  
  
- **MF_SEPARATOR** Disegna una linea di divisione orizzontale. Può essere utilizzato solo in un menu a comparsa. Questa riga non può essere visualizzata in grigio, disabilitata o evidenziata. Altri parametri vengono ignorati.  
  
- **MF_UNCHECKED** agisce come un elemento toggle con **MF_CHECKED** per rimuovere un segno di spunta accanto all'elemento. Quando l'applicazione fornisce le bitmap di segno di spunta (vedere la `SetMenuItemBitmaps` funzione membro), viene visualizzata la bitmap "segno di spunta off". Si noti che il valore di questa costante è 0. un'applicazione non è necessario testare rispetto a 0 per un errore quando si utilizza questo valore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#27;](../../mfc/reference/codesnippet/cpp/cmenu-class_7.cpp)]  
  
##  <a name="a-namegetmenustringa--cmenugetmenustring"></a><a name="getmenustring"></a>CMenu::GetMenuString  
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
 Specifica l'identificatore della voce di menu o l'offset della voce di menu nel menu, a seconda del valore di `nFlags`.  
  
 `lpString`  
 Punta al buffer che riceverà l'etichetta.  
  
 `rString`  
 Un riferimento a un `CString` oggetto che deve ricevere la stringa copiata dal menu.  
  
 `nMaxCount`  
 Specifica la lunghezza massima (in caratteri) dell'etichetta deve essere copiato. Se l'etichetta è più il valore massimo specificato `nMaxCount`, i caratteri aggiuntivi vengono troncati.  
  
 `nFlags`  
 Specifica l'interpretazione del `nIDItem` parametro. Può essere uno dei valori seguenti:  
  
|nFlags|Interpretazione di nIDItem|  
|------------|-------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il numero effettivo di caratteri copiati nel buffer, escluso il carattere di terminazione null.  
  
### <a name="remarks"></a>Note  
 Il `nMaxCount` parametro deve essere maggiore del numero di caratteri dell'etichetta per contenere il carattere null che termina una stringa di uno.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="a-namegetsafehmenua--cmenugetsafehmenu"></a><a name="getsafehmenu"></a>CMenu::GetSafeHmenu  
 Restituisce il `HMENU` sottoposto a wrapping da questo `CMenu` oggetto, o un **NULL** `CMenu` puntatore.  
  
```  
HMENU GetSafeHmenu() const;  
```  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu::LoadMenu](#loadmenu).  
  
##  <a name="a-namegetsubmenua--cmenugetsubmenu"></a><a name="getsubmenu"></a>CMenu::GetSubMenu  
 Recupera il `CMenu` oggetto di un menu a comparsa.  
  
```  
CMenu* GetSubMenu(int nPos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica la posizione del menu a comparsa contenuta nel menu. I valori di posizione iniziano da 0 per la prima voce di menu. Identificatore del menu di scelta rapida non può essere utilizzato in questa funzione.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CMenu` il cui `m_hMenu` membro contiene un handle per il menu a comparsa se esiste un menu a comparsa nella posizione specificata; in caso contrario **NULL**. Se un `CMenu` oggetto non esiste, quindi viene creato un temporaneo. Il `CMenu` puntatore restituito non deve essere archiviati.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu::TrackPopupMenu](#trackpopupmenu).  
  
##  <a name="a-nameinsertmenua--cmenuinsertmenu"></a><a name="insertmenu"></a>CMenu:: InsertMenu  
 Inserisce una nuova voce di menu in corrispondenza della posizione specificata da `nPosition` e sposta altre voci di menu a discesa.  
  
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
 Specifica la voce di menu prima del quale è necessario inserire la nuova voce di menu. Il `nFlags` parametro può essere utilizzato per interpretare `nPosition` nei modi seguenti:  
  
|nFlags|Interpretazione di nPosition|  
|------------|---------------------------------|  
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0. Se `nPosition` è -1, la nuova voce di menu viene aggiunto alla fine del menu.|  
  
 `nFlags`  
 Specifica la modalità `nPosition` viene interpretato e specifica le informazioni sullo stato della nuova voce di menu quando viene aggiunto al menu. Per un elenco dei flag che è possibile impostare, vedere il [AppendMenu](#appendmenu) funzione membro. Per specificare più valori, utilizzare l'operatore OR bit per bit combinarle con le **MF_BYCOMMAND** o **MF_BYPOSITION** flag.  
  
 `nIDNewItem`  
 Specifica l'ID di comando della nuova voce di menu o, se `nFlags` è impostato su **MF_POPUP**, l'handle di menu ( `HMENU`) del menu a comparsa. Il `nIDNewItem` parametro viene ignorato (non necessaria) se `nFlags` è impostato su **MF_SEPARATOR**.  
  
 `lpszNewItem`  
 Specifica il contenuto della nuova voce di menu. `nFlags`può essere utilizzato per interpretare `lpszNewItem` nei modi seguenti:  
  
|nFlags|Interpretazione di lpszNewItem|  
|------------|-----------------------------------|  
|`MF_OWNERDRAW`|Contiene un valore a 32 bit fornita dall'applicazione che l'applicazione può utilizzare per mantenere dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione nel **itemData** membro della struttura fornita dal [WM_MEASUREITEM](http://msdn.microsoft.com/library/windows/desktop/bb775925) e [WM_DRAWITEM](http://msdn.microsoft.com/library/windows/desktop/bb775923) i messaggi. Questi messaggi vengono inviati quando la voce di menu viene inizialmente visualizzata o viene modificata.|  
|**MF_STRING**|Contiene un puntatore di tipo long a una stringa con terminazione null. Questo è l'interpretazione predefinita.|  
|**MF_SEPARATOR**|Il `lpszNewItem` parametro viene ignorato (non necessario).|  
  
 *pBmp*  
 Punta a un `CBitmap` oggetto che verrà utilizzato come voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione può specificare lo stato della voce di menu impostando i valori nella `nFlags`.  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.  
  
 Quando `nIDNewItem` specifica un menu a comparsa, diventa parte del menu in cui viene inserita. Se tale menu viene eliminato, verrà eliminato anche il menu inserito. Un menu inserito deve essere scollegato da un `CMenu` oggetto per evitare conflitti.  
  
 Se attiva viene ingrandita finestra figlio MDI (interfaccia) a documenti multipli e un'applicazione inserisce un menu a comparsa menu dell'applicazione MDI chiamando questa funzione e specificando il **MF_BYPOSITION** flag, il menu viene inserita una posizione verso sinistra del previsto. Ciò accade perché il menu di controllo della finestra figlio MDI attiva viene inserito nella prima posizione della barra dei menu della finestra cornice MDI. Per posizionare correttamente il menu, l'applicazione deve aggiungere 1 al valore di posizione che verrà utilizzato in caso contrario. Un'applicazione può utilizzare il **WM_MDIGETACTIVE** messaggio per determinare se la finestra figlio attiva viene ingrandita.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[28 NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cmenu-class_8.cpp)]  
  
##  <a name="a-nameinsertmenuitema--cmenuinsertmenuitem"></a><a name="insertmenuitem"></a>CMenu::InsertMenuItem  
 Inserisce una nuova voce di menu in corrispondenza della posizione specificata in un menu.  
  
```  
BOOL InsertMenuItem(
    UINT uItem,  
    LPMENUITEMINFO lpMenuItemInfo,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `uItem`  
 Vedere la descrizione di `uItem` in [InsertMenuItem](http://msdn.microsoft.com/library/windows/desktop/ms647988) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `lpMenuItemInfo`  
 Vedere la descrizione di `lpmii` in **InsertMenuItem** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `fByPos`  
 Vedere la descrizione di `fByPosition` in **InsertMenuItem** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Questa funzione esegue il wrapping [InsertMenuItem](http://msdn.microsoft.com/library/windows/desktop/ms647988), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameloadmenua--cmenuloadmenu"></a><a name="loadmenu"></a>CMenu::LoadMenu  
 Carica una risorsa di menu dal file eseguibile dell'applicazione e lo collega a di `CMenu` oggetto.  
  
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
 [!code-cpp[NVC_MFCWindowing&#29;](../../mfc/reference/codesnippet/cpp/cmenu-class_9.cpp)]  
  
##  <a name="a-nameloadmenuindirecta--cmenuloadmenuindirect"></a><a name="loadmenuindirect"></a>CMenu::LoadMenuIndirect  
 Carica una risorsa da un modello di menu in memoria e lo collega a di `CMenu` oggetto.  
  
```  
BOOL LoadMenuIndirect(const void* lpMenuTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 *lpMenuTemplate*  
 Punta a un modello di menu (ovvero un singolo [MENUITEMTEMPLATEHEADER](http://msdn.microsoft.com/library/windows/desktop/ms647583) struttura e una raccolta di uno o più [MENUITEMTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms647581) strutture). Per ulteriori informazioni su queste due strutture, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la risorsa di menu è stata caricata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un modello di menu è un'intestazione seguita da una raccolta di uno o più [MENUITEMTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms647581) strutture, ognuno dei quali può contenere uno o più voci di menu e menu di scelta rapida.  
  
 Il numero di versione deve essere 0.  
  
 Il **mtOption** devono includere flag **MF_END** per l'ultimo elemento in un elenco a comparsa e l'ultimo elemento nell'elenco principale. Vedere il `AppendMenu` una funzione membro per gli altri flag. Il **mtId** membro deve essere omesso dal **MENUITEMTEMPLATE** struttura quando **MF_POPUP** è specificato in **mtOption**.  
  
 Lo spazio allocato per il **MENUITEMTEMPLATE** struttura deve essere abbastanza grande per **mtString** per contenere il nome della voce di menu come stringa con terminazione null.  
  
 Prima di uscire, un'applicazione deve liberare le risorse di sistema associate a un menu se il menu non viene assegnato a una finestra. Un'applicazione libera un menu chiamando il [DestroyMenu](#destroymenu) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#30; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cmenu-class_10.cpp)]  
  
##  <a name="a-namemhmenua--cmenumhmenu"></a><a name="m_hmenu"></a>CMenu::m_hMenu  
 Specifica il `HMENU` handle del menu finestre è collegata la `CMenu` oggetto.  
  
```  
HMENU m_hMenu;  
```  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu::LoadMenu](#loadmenu).  
  
##  <a name="a-namemeasureitema--cmenumeasureitem"></a><a name="measureitem"></a>CMenu::MeasureItem  
 Chiamato dal framework quando viene creato un menu con lo stile di disegno personalizzato.  
  
```  
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMeasureItemStruct`  
 Un puntatore a un `MEASUREITEMSTRUCT` struttura.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare il `MEASUREITEMSTRUCT` struttura indicare al sistema di dimensioni del menu.  
  
 Vedere [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una descrizione del `MEASUREITEMSTRUCT` struttura.  
  
### <a name="example"></a>Esempio  
 Il codice seguente è da MFC [CTRLTEST](../../visual-cpp-samples.md) esempio:  
  
 [!code-cpp[NVC_MFCWindowing&#31;](../../mfc/reference/codesnippet/cpp/cmenu-class_11.cpp)]  
  
##  <a name="a-namemodifymenua--cmenumodifymenu"></a><a name="modifymenu"></a>CMenu::ModifyMenu  
 Modifica una voce di menu esistenti in corrispondenza della posizione specificata da `nPosition`.  
  
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
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|  
  
 `nFlags`  
 Specifica la modalità `nPosition` viene interpretato e vengono fornite informazioni sulle modifiche da apportare alla voce di menu. Per un elenco di flag che possono essere impostati, vedere il [AppendMenu](#appendmenu) funzione membro.  
  
 `nIDNewItem`  
 Specifica l'ID di comando della voce di menu modificato oppure, se `nFlags` è impostato su **MF_POPUP**, l'handle di menu ( `HMENU`) di un menu a comparsa. Il `nIDNewItem` parametro viene ignorato (non necessaria) se `nFlags` è impostato su **MF_SEPARATOR**.  
  
 `lpszNewItem`  
 Specifica il contenuto della nuova voce di menu. Il `nFlags` parametro può essere utilizzato per interpretare `lpszNewItem` nei modi seguenti:  
  
|nFlags|Interpretazione di lpszNewItem|  
|------------|-----------------------------------|  
|`MF_OWNERDRAW`|Contiene un valore a 32 bit fornita dall'applicazione che l'applicazione può utilizzare per mantenere dati aggiuntivi associati alla voce di menu. Questo valore a 32 bit è disponibile per l'applicazione durante l'elaborazione di **MF_MEASUREITEM** e **MF_DRAWITEM**.|  
|**MF_STRING**|Contiene un puntatore di tipo long a una stringa con terminazione null o a un `CString`.|  
|**MF_SEPARATOR**|Il `lpszNewItem` parametro viene ignorato (non necessario).|  
  
 *pBmp*  
 Punta a un `CBitmap` oggetto che verrà utilizzato come voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione specifica il nuovo stato della voce di menu impostando i valori nella `nFlags`. Se questa funzione sostituisce un menu a comparsa associato alla voce di menu, Elimina i vecchio menu a comparsa e libera la memoria utilizzata dal menu a comparsa.  
  
 Quando `nIDNewItem` specifica un menu a comparsa, diventa parte del menu in cui viene inserita. Se tale menu viene eliminato, verrà eliminato anche il menu inserito. Un menu inserito deve essere scollegato da un `CMenu` oggetto per evitare conflitti.  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`. Per modificare gli attributi di voci di menu esistenti, è molto più veloce usare il `CheckMenuItem` e `EnableMenuItem` funzioni membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="a-nameoperatorhmenua--cmenuoperator-hmenu"></a><a name="operator_hmenu"></a>CMenu::operator HMENU  
 Utilizzare questo operatore per recuperare l'handle del `CMenu` oggetto.  
  
```  
operator HMENU() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'handle di `CMenu` oggetto; in caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare l'handle per chiamare direttamente le API di Windows.  
  
##  <a name="a-nameoperatorneqa--cmenuoperator-"></a><a name="operator_neq"></a>CMenu::operator! =  
 Determina se due menu logicamente non sono uguali.  
  
```  
BOOL operator!=(const CMenu& menu) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `menu`  
 Oggetto `CMenu` oggetto per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se un oggetto menu sul lato sinistro non è uguale a un oggetto menu sul lato destro.  
  
##  <a name="a-nameoperatoreqeqa--cmenuoperator-"></a><a name="operator_eq_eq"></a>CMenu::operator = =  
 Determina se due menu sono uguali.  
  
```  
BOOL operator==(const CMenu& menu) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `menu`  
 Oggetto `CMenu` oggetto per il confronto.  
  
### <a name="remarks"></a>Note  
 Verifica se un oggetto menu sul lato sinistro è uguale (in termini del `HMENU` valore) a un oggetto menu sul lato destro.  
  
##  <a name="a-nameremovemenua--cmenuremovemenu"></a><a name="removemenu"></a>CMenu::RemoveMenu  
 Elimina una voce di menu con un menu di scelta rapida associato dal menu.  
  
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
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|  
  
 `nFlags`  
 Specifica la modalità `nPosition` viene interpretato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Ma non elimina l'handle per un menu a comparsa, dunque il menu può essere riutilizzato. Prima di chiamare questa funzione, l'applicazione può chiamare il `GetSubMenu` funzione membro per recuperare la finestra popup `CMenu` oggetto per il riutilizzo.  
  
 Ogni volta che un menu che si trova in una finestra viene modificata (se viene visualizzata la finestra), l'applicazione deve chiamare `CWnd::DrawMenuBar`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="a-namesetdefaultitema--cmenusetdefaultitem"></a><a name="setdefaultitem"></a>CMenu::SetDefaultItem  
 Imposta la voce di menu predefinita per il menu specificato.  
  
```  
BOOL SetDefaultItem(
    UINT uItem,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `uItem`  
 Identificatore o la posizione della nuova voce di menu predefinito o - 1 per nessun elemento predefinito. Il significato di questo parametro dipende dal valore di `fByPos`.  
  
 `fByPos`  
 Valore che specifica il significato di `uItem`. Se questo parametro è **FALSE**, `uItem` è un identificatore di voce di menu. In caso contrario, è una posizione di voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero. Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere ulteriori informazioni sull'errore, utilizzare la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della funzione Win32 [SetMenuDefaultItem](http://msdn.microsoft.com/library/windows/desktop/ms647996), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="a-namesetmenucontexthelpida--cmenusetmenucontexthelpid"></a><a name="setmenucontexthelpid"></a>CMenu::SetMenuContextHelpId  
 Associa un ID del contesto della Guida in linea con `CMenu`.  
  
```  
BOOL SetMenuContextHelpId(DWORD dwContextHelpId);
```  
  
### <a name="parameters"></a>Parametri  
 `dwContextHelpId`  
 ID del contesto della Guida da associare `CMenu`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0  
  
### <a name="remarks"></a>Note  
 Tutti gli elementi nel menu di condivideranno questo identificatore, ovvero non è possibile collegare un identificatore di contesto della Guida per le singole voci di menu.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMenu:: InsertMenu](#insertmenu).  
  
##  <a name="a-namesetmenuinfoa--cmenusetmenuinfo"></a><a name="setmenuinfo"></a>CMenu::SetMenuInfo  
 Imposta le informazioni per un menu.  
  
```  
BOOL SetMenuInfo(LPCMENUINFO lpcmi);
```  
  
### <a name="parameters"></a>Parametri  
 `lpcmi`  
 Un puntatore a un [MENUINFO](http://msdn.microsoft.com/library/windows/desktop/ms647575) struttura che contiene informazioni per il menu.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è diverso da zero; in caso contrario, il valore restituito è zero.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per impostare il menu di informazioni specifiche.  
  
##  <a name="a-namesetmenuitembitmapsa--cmenusetmenuitembitmaps"></a><a name="setmenuitembitmaps"></a>CMenu::SetMenuItemBitmaps  
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
|**MF_BYCOMMAND**|Specifica che il parametro fornisce l'ID di comando della voce di menu esistenti. Questo è il valore predefinito se non si specifica **MF_BYCOMMAND** né **MF_BYPOSITION** è impostata.|  
|**MF_BYPOSITION**|Specifica che il parametro fornisce la posizione della voce di menu esistenti. Il primo elemento è nella posizione 0.|  
  
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
  
 Se il valore `pBmpUnchecked` o `pBmpChecked` è **NULL**, Windows verrà visualizzato nulla accanto alla voce di menu per l'attributo corrispondente. Se entrambi i parametri sono **NULL**, Windows utilizza la casella di controllo predefinito quando l'elemento viene selezionato e consente di rimuovere il segno di spunta quando l'elemento non è selezionata.  
  
 Quando viene eliminato il menu, tali bitmap non vengono eliminati; l'applicazione è necessario eliminarli.  
  
 Windows **GetMenuCheckMarkDimensions** funzione recupera le dimensioni sul segno di spunta predefinito utilizzato per le voci di menu. L'applicazione utilizza questi valori per determinare le dimensioni appropriate per le bitmap fornite con questa funzione. Ottenere la dimensione, creare la bitmap e quindi impostarli.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n.&32;](../../mfc/reference/codesnippet/cpp/cmenu-class_12.cpp)]  
  
 [!code-cpp[NVC_MFCWindowing n.&33;](../../mfc/reference/codesnippet/cpp/cmenu-class_13.cpp)]  
  
##  <a name="a-namesetmenuiteminfoa--cmenusetmenuiteminfo"></a><a name="setmenuiteminfo"></a>CMenu::SetMenuItemInfo  
 Modifica informazioni a una voce di menu.  
  
```  
BOOL SetMenuItemInfo(
    UINT uItem,  
    LPMENUITEMINFO lpMenuItemInfo,  
    BOOL fByPos = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `uItem`  
 Vedere la descrizione di `uItem` in [SetMenuItemInfo](http://msdn.microsoft.com/library/windows/desktop/ms648001) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `lpMenuItemInfo`  
 Vedere la descrizione di `lpmii` in **SetMenuItemInfo** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `fByPos`  
 Vedere la descrizione di `fByPosition` in **SetMenuItemInfo** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Questa funzione esegue il wrapping [SetMenuItemInfo](http://msdn.microsoft.com/library/windows/desktop/ms648001), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nametrackpopupmenua--cmenutrackpopupmenu"></a><a name="trackpopupmenu"></a>CMenu::TrackPopupMenu  
 Visualizza un menu a comparsa a virgola mobile nella posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.  
  
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
 Specifica i flag posizione sullo schermo e la posizione del mouse. Vedere [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) per un elenco di contrassegni disponibili.  
  
 *x*  
 Specifica la posizione orizzontale in coordinate dello schermo del menu di scelta rapida. A seconda del valore di `nFlags` parametro, il menu può essere allineato a sinistra, a destra o centrato questa posizione.  
  
 *y*  
 Specifica la posizione verticale in coordinate dello schermo della parte superiore del menu sullo schermo.  
  
 `pWnd`  
 Identifica la finestra proprietaria di menu a comparsa. Questo parametro non può essere **NULL**, anche se il **TPM_NONOTIFY** flag specificato. Questa finestra riceve tutti **WM_COMMAND** messaggi dal menu. In Windows 3.1 e versioni successive, la finestra non riceve **WM_COMMAND** messaggi fino a quando `TrackPopupMenu` restituisce. In Windows 3.0, la finestra riceve **WM_COMMAND** i messaggi prima che `TrackPopupMenu` restituisce.  
  
 `lpRect`  
 Ignorato.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce il risultato della chiamata al metodo [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Un menu a comparsa a virgola mobile può trovarsi in qualsiasi punto dello schermo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#34;](../../mfc/reference/codesnippet/cpp/cmenu-class_14.cpp)]  
  
##  <a name="a-nametrackpopupmenuexa--cmenutrackpopupmenuex"></a><a name="trackpopupmenuex"></a>CMenu::TrackPopupMenuEx  
 Visualizza un menu a comparsa a virgola mobile nella posizione specificata e tiene traccia della selezione di elementi nel menu a comparsa.  
  
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
 Consente di specificare diverse funzioni per il menu esteso. Per un elenco di tutti i valori e il relativo significato, vedere [TrackPopupMenuEx](http://msdn.microsoft.com/library/windows/desktop/ms648003).  
  
 *x*  
 Specifica la posizione orizzontale in coordinate dello schermo del menu di scelta rapida.  
  
 *y*  
 Specifica la posizione verticale in coordinate dello schermo della parte superiore del menu sullo schermo.  
  
 `pWnd`  
 Puntatore alla finestra proprietaria di menu a comparsa e ricezione dei messaggi dal menu creato. Questa finestra può essere qualsiasi finestra dall'applicazione corrente ma non può essere **NULL**. Se si specifica **TPM_NONOTIFY** nel `fuFlags` parametro, la funzione non inviare messaggi a `pWnd`. La funzione deve restituire per la finestra a cui puntata `pWnd` per ricevere il **WM_COMMAND** messaggio.  
  
 *lptpm*  
 Puntatore a un [TPMPARAMS](http://msdn.microsoft.com/library/windows/desktop/ms647586) struttura che specifica un'area dello schermo il menu non deve sovrapporsi. Questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Se si specifica **TPM_RETURNCMD** nel `fuFlags` parametro, il valore restituito è l'identificatore della voce di menu dell'elemento selezionato dall'utente. Se l'utente annulla il menu senza effettuare una selezione oppure se si verifica un errore, il valore restituito è 0.  
  
 Se non si specifica **TPM_RETURNCMD** nel `fuFlags` parametro, il valore restituito è diverso da zero se la funzione ha esito positivo e 0 in caso di errore. Per ottenere ulteriori informazioni sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Un menu a comparsa a virgola mobile può trovarsi in qualsiasi punto dello schermo. Per ulteriori informazioni sulla gestione degli errori durante la creazione di menu di scelta rapida, vedere [TrackPopupMenuEx](http://msdn.microsoft.com/library/windows/desktop/ms648003).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio CTRLTEST](../../visual-cpp-samples.md)   
 [Esempio MFC DYNAMENU](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)

