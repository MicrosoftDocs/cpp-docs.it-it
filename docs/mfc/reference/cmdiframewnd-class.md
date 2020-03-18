---
title: Classe CMDIFrameWnd
ms.date: 11/04/2016
f1_keywords:
- CMDIFrameWnd
- AFXWIN/CMDIFrameWnd
- AFXWIN/CMDIFrameWnd::CMDIFrameWnd
- AFXWIN/CMDIFrameWnd::CreateClient
- AFXWIN/CMDIFrameWnd::CreateNewChild
- AFXWIN/CMDIFrameWnd::GetWindowMenuPopup
- AFXWIN/CMDIFrameWnd::MDIActivate
- AFXWIN/CMDIFrameWnd::MDICascade
- AFXWIN/CMDIFrameWnd::MDIGetActive
- AFXWIN/CMDIFrameWnd::MDIIconArrange
- AFXWIN/CMDIFrameWnd::MDIMaximize
- AFXWIN/CMDIFrameWnd::MDINext
- AFXWIN/CMDIFrameWnd::MDIPrev
- AFXWIN/CMDIFrameWnd::MDIRestore
- AFXWIN/CMDIFrameWnd::MDISetMenu
- AFXWIN/CMDIFrameWnd::MDITile
helpviewer_keywords:
- CMDIFrameWnd [MFC], CMDIFrameWnd
- CMDIFrameWnd [MFC], CreateClient
- CMDIFrameWnd [MFC], CreateNewChild
- CMDIFrameWnd [MFC], GetWindowMenuPopup
- CMDIFrameWnd [MFC], MDIActivate
- CMDIFrameWnd [MFC], MDICascade
- CMDIFrameWnd [MFC], MDIGetActive
- CMDIFrameWnd [MFC], MDIIconArrange
- CMDIFrameWnd [MFC], MDIMaximize
- CMDIFrameWnd [MFC], MDINext
- CMDIFrameWnd [MFC], MDIPrev
- CMDIFrameWnd [MFC], MDIRestore
- CMDIFrameWnd [MFC], MDISetMenu
- CMDIFrameWnd [MFC], MDITile
ms.assetid: fa8736e6-511b-4c51-8b4d-eba78378aeb9
ms.openlocfilehash: 20d74030cdc90ed2e1a7809c121967e74db21b4a
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418503"
---
# <a name="cmdiframewnd-class"></a>Classe CMDIFrameWnd

Fornisce la funzionalità di una finestra cornice figlio con interfaccia a documenti multipli (MDI) di Windows, insieme ai membri per gestire la finestra.

## <a name="syntax"></a>Sintassi

```
class CMDIFrameWnd : public CFrameWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMDIFrameWnd:: CMDIFrameWnd](#cmdiframewnd)|Costruisce un oggetto `CMDIFrameWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMDIFrameWnd:: CreateClient](#createclient)|Crea una finestra MDICLIENT Windows per questo `CMDIFrameWnd`. Chiamato dalla funzione membro `OnCreate` di `CWnd`.|
|[CMDIFrameWnd:: CreateNewChild](#createnewchild)|Crea una nuova finestra figlio.|
|[CMDIFrameWnd:: GetWindowMenuPopup](#getwindowmenupopup)|Restituisce il menu di scelta rapida della finestra.|
|[CMDIFrameWnd:: MDIActivate](#mdiactivate)|Attiva un'altra finestra figlio MDI.|
|[CMDIFrameWnd:: MDICascade](#mdicascade)|Dispone tutte le finestre figlio in un formato a cascata.|
|[CMDIFrameWnd:: MDIGetActive](#mdigetactive)|Recupera la finestra figlio MDI attualmente attiva, insieme a un flag che indica se l'elemento figlio è ingrandito o meno.|
|[CMDIFrameWnd:: MDIIconArrange](#mdiiconarrange)|Dispone tutte le finestre figlio del documento ridotta a icona.|
|[CMDIFrameWnd:: MDIMaximize](#mdimaximize)|Ingrandisce una finestra figlio MDI.|
|[CMDIFrameWnd:: MDINext](#mdinext)|Attiva la finestra figlio immediatamente dietro la finestra figlio attualmente attiva e posiziona la finestra figlio attualmente attiva dietro tutte le altre finestre figlio.|
|[CMDIFrameWnd:: MDIPrev](#mdiprev)|Attiva la finestra figlio precedente e posiziona la finestra figlio attualmente attiva immediatamente dietro di essa.|
|[CMDIFrameWnd:: MDIRestore](#mdirestore)|Ripristina una finestra figlio MDI dalla dimensione ingrandita o ridotta a icona.|
|[CMDIFrameWnd:: MDISetMenu](#mdisetmenu)|Sostituisce il menu di una finestra cornice MDI, il menu di scelta rapida della finestra o entrambi.|
|[CMDIFrameWnd:: MDITile](#mditile)|Dispone tutte le finestre figlio in un formato affiancato.|

## <a name="remarks"></a>Osservazioni

Per creare una finestra cornice MDI utile per l'applicazione, derivare una classe da `CMDIFrameWnd`. Aggiungere le variabili membro alla classe derivata per archiviare i dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.

È possibile costruire una finestra cornice MDI chiamando la funzione membro [create](../../mfc/reference/cframewnd-class.md#create) o [LoadFrame](../../mfc/reference/cframewnd-class.md#loadframe) del `CFrameWnd`.

Prima di chiamare `Create` o `LoadFrame`, è necessario creare l'oggetto finestra cornice nell'heap usando l' C++ operatore **New** . Prima di chiamare `Create` è anche possibile registrare una classe finestra con la funzione globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) per impostare gli stili dell'icona e della classe per il frame.

Usare la funzione membro `Create` per passare i parametri di creazione del frame come argomenti immediati.

`LoadFrame` richiede un numero di argomenti inferiore a quello `Create`e recupera invece la maggior parte dei valori predefiniti dalle risorse, incluse la didascalia, l'icona, la tabella di tasti di scelta rapida e il menu del frame. Per accedere ai `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa, ad esempio IDR_MAINFRAME.

Anche se `MDIFrameWnd` deriva da `CFrameWnd`, una classe della finestra cornice derivata da `CMDIFrameWnd` non deve essere dichiarata con `DECLARE_DYNCREATE`.

La classe `CMDIFrameWnd` eredita gran parte dell'implementazione predefinita da `CFrameWnd`. Per un elenco dettagliato di queste funzionalità, vedere la descrizione della classe [CFrameWnd](../../mfc/reference/cframewnd-class.md) . La classe `CMDIFrameWnd` presenta le funzionalità aggiuntive seguenti:

- Una finestra cornice MDI gestisce la finestra MDICLIENT e la riposiziona insieme alle barre di controllo. La finestra client MDI è l'elemento padre diretto delle finestre cornice figlio MDI. Gli stili della finestra WS_HSCROLL e WS_VSCROLL specificati in un `CMDIFrameWnd` si applicano alla finestra client MDI anziché alla finestra cornice principale, in modo che l'utente possa scorrere l'area client MDI, ad esempio, come in gestione programmi di Windows.

- Una finestra cornice MDI è proprietaria di un menu predefinito utilizzato come barra dei menu quando non è presente alcuna finestra figlio MDI attiva. Quando è presente un elemento figlio MDI attivo, la barra dei menu della finestra cornice MDI viene sostituita automaticamente dal menu della finestra figlio MDI.

- Una finestra cornice MDI funziona in combinazione con la finestra figlio MDI corrente, se presente. Ad esempio, i messaggi di comando vengono delegati al figlio MDI attualmente attivo prima della finestra cornice MDI.

- Una finestra cornice MDI dispone di gestori predefiniti per i comandi di menu della finestra standard seguenti:

    - ID_WINDOW_TILE_VERT

    - ID_WINDOW_TILE_HORZ

    - ID_WINDOW_CASCADE

    - ID_WINDOW_ARRANGE

- Una finestra cornice MDI dispone inoltre di un'implementazione di ID_WINDOW_NEW, che consente di creare un nuovo frame e una nuova visualizzazione nel documento corrente. Un'applicazione può eseguire l'override di queste implementazioni di comandi predefinite per personalizzare la gestione delle finestre MDI.

Non usare l' C++ operatore **Delete per eliminare** definitivamente una finestra cornice. Usare invece `CWnd::DestroyWindow`. L'implementazione `CFrameWnd` di `PostNcDestroy` eliminerà l' C++ oggetto quando la finestra viene distrutta. Quando l'utente chiude la finestra cornice, il gestore di `OnClose` predefinito chiamerà `DestroyWindow`.

Per ulteriori informazioni su `CMDIFrameWnd`, vedere [finestre cornice](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMDIFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cmdiframewnd"></a>CMDIFrameWnd:: CMDIFrameWnd

Costruisce un oggetto `CMDIFrameWnd`.

```
CMDIFrameWnd();
```

### <a name="remarks"></a>Osservazioni

Chiamare la funzione membro `Create` o `LoadFrame` per creare la finestra cornice MDI visibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#13](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_1.cpp)]

##  <a name="createclient"></a>CMDIFrameWnd:: CreateClient

Crea la finestra client MDI che gestisce gli oggetti `CMDIChildWnd`.

```
virtual BOOL CreateClient(
    LPCREATESTRUCT lpCreateStruct,
    CMenu* pWindowMenu);
```

### <a name="parameters"></a>Parametri

*lpCreateStruct*<br/>
Puntatore long a una struttura [struttura CREATESTRUCT](/windows/win32/api/winuser/ns-winuser-createstructw) .

*pWindowMenu*<br/>
Puntatore al menu di scelta rapida della finestra.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro deve essere chiamata se si esegue l'override direttamente della funzione membro `OnCreate`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#14](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_2.cpp)]

##  <a name="createnewchild"></a>CMDIFrameWnd:: CreateNewChild

Crea una nuova finestra figlio.

```
CMDIChildWnd* CreateNewChild(
    CRuntimeClass* pClass,
    UINT nResource,
    HMENU hMenu = NULL,
    HACCEL hAccel = NULL);
```

### <a name="parameters"></a>Parametri

*pClass*<br/>
Classe della fase di esecuzione della finestra figlio da creare.

*nResource*<br/>
ID delle risorse condivise associate alla finestra figlio.

*hMenu*<br/>
Menu della finestra figlio.

*hAccel*<br/>
Tasto di scelta rapida della finestra figlio.

### <a name="remarks"></a>Osservazioni

Usare questa funzione per creare finestre figlio di una finestra cornice MDI.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#15](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_3.cpp)]

##  <a name="getwindowmenupopup"></a>CMDIFrameWnd:: GetWindowMenuPopup

Chiamare questa funzione membro per ottenere un handle per il menu di scelta rapida corrente denominato "finestra" (menu a comparsa con voci di menu per la gestione della finestra MDI).

```
virtual HMENU GetWindowMenuPopup(HMENU hMenuBar);
```

### <a name="parameters"></a>Parametri

*hMenuBar*<br/>
Barra dei menu corrente.

### <a name="return-value"></a>Valore restituito

Menu di scelta rapida della finestra, se disponibile. in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita cerca un menu a comparsa contenente i comandi di menu della finestra standard, ad esempio ID_WINDOW_NEW e ID_WINDOW_TILE_HORZ.

Eseguire l'override di questa funzione membro se si dispone di un menu finestra che non usa gli ID del comando di menu standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#16](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_4.cpp)]

##  <a name="mdiactivate"></a>CMDIFrameWnd:: MDIActivate

Attiva un'altra finestra figlio MDI.

```
void MDIActivate(CWnd* pWndActivate);
```

### <a name="parameters"></a>Parametri

*pWndActivate*<br/>
Punta alla finestra figlio MDI da attivare.

### <a name="remarks"></a>Osservazioni

Questa funzione membro invia il messaggio di [WM_MDIACTIVATE](../../mfc/reference/cwnd-class.md#onmdiactivate) alla finestra figlio attivata e la finestra figlio viene disattivata.

Si tratta dello stesso messaggio che viene inviato se l'utente imposta lo stato attivo su una finestra figlio MDI utilizzando il mouse o la tastiera.

> [!NOTE]
>  Una finestra figlio MDI viene attivata indipendentemente dalla finestra cornice MDI. Quando il frame diventa attivo, la finestra figlio che è stata attivata l'ultima volta viene inviato un messaggio di [WM_NCACTIVATE](../../mfc/reference/cwnd-class.md#onncactivate) per creare una cornice della finestra attiva e una barra del titolo, ma non riceve un altro messaggio di WM_MDIACTIVATE.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIFrameWnd:: GetWindowMenuPopup](#getwindowmenupopup).

##  <a name="mdicascade"></a>CMDIFrameWnd:: MDICascade

Dispone tutte le finestre figlio MDI in un formato Cascade.

```
void MDICascade();
void MDICascade(int nType);
```

### <a name="parameters"></a>Parametri

*nType*<br/>
Specifica un flag Cascade. È possibile specificare solo il flag seguente: MDITILE_SKIPDISABLED, che impedisce la propagazione delle finestre figlio MDI disabilitate.

### <a name="remarks"></a>Osservazioni

La prima versione di `MDICascade`, senza parametri, sovrappone a tutte le finestre figlio MDI, incluse quelle disabilitate. La seconda versione, facoltativamente, non esegue la propagazione delle finestre figlio MDI disabilitate se si specifica MDITILE_SKIPDISABLED per il parametro *nType* .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#17](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_5.cpp)]

##  <a name="mdigetactive"></a>CMDIFrameWnd:: MDIGetActive

Recupera la finestra figlio MDI attiva corrente, insieme a un flag che indica se la finestra figlio è ingrandita.

```
CMDIChildWnd* MDIGetActive(BOOL* pbMaximized = NULL) const;
```

### <a name="parameters"></a>Parametri

*pbMaximized*<br/>
Puntatore a un valore restituito BOOL. Impostare su TRUE in caso di restituzione se la finestra è ingrandita; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra figlio MDI attiva.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIChildWnd:: MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#mdimaximize).

##  <a name="mdiiconarrange"></a>CMDIFrameWnd:: MDIIconArrange

Dispone tutte le finestre figlio del documento ridotta a icona.

```
void MDIIconArrange();
```

### <a name="remarks"></a>Osservazioni

Non influisce sulle finestre figlio non ridotte a icona.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIFrameWnd:: MDICascade](#mdicascade).

##  <a name="mdimaximize"></a>CMDIFrameWnd:: MDIMaximize

Ingrandisce la finestra figlio MDI specificata.

```
void MDIMaximize(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra per ingrandire.

### <a name="remarks"></a>Osservazioni

Quando una finestra figlio viene ingrandita, Windows la ridimensiona per fare in modo che l'area client riempia la finestra del client. Windows posiziona il menu di controllo della finestra figlio sulla barra dei menu del frame in modo che l'utente possa ripristinare o chiudere la finestra figlio. Aggiunge anche il titolo della finestra figlio al titolo della finestra cornice.

Se un'altra finestra figlio MDI viene attivata quando la finestra figlio MDI attualmente attiva è ingrandita, Windows ripristina l'elemento figlio attualmente attivo e ingrandisce la finestra figlio appena attivata.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIChildWnd:: MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#mdimaximize).

##  <a name="mdinext"></a>CMDIFrameWnd:: MDINext

Attiva la finestra figlio immediatamente dietro la finestra figlio attualmente attiva e posiziona la finestra figlio attualmente attiva dietro tutte le altre finestre figlio.

```
void MDINext();
```

### <a name="remarks"></a>Osservazioni

Se la finestra figlio MDI attualmente attiva è ingrandita, la funzione membro ripristina l'elemento figlio attualmente attivo e massimizza l'elemento figlio appena attivato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#18](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_6.cpp)]

##  <a name="mdiprev"></a>CMDIFrameWnd:: MDIPrev

Attiva la finestra figlio precedente e posiziona la finestra figlio attualmente attiva immediatamente dietro di essa.

```
void MDIPrev();
```

### <a name="remarks"></a>Osservazioni

Se la finestra figlio MDI attualmente attiva è ingrandita, la funzione membro ripristina l'elemento figlio attualmente attivo e massimizza l'elemento figlio appena attivato.

##  <a name="mdirestore"></a>CMDIFrameWnd:: MDIRestore

Ripristina una finestra figlio MDI dalla dimensione ingrandita o ridotta a icona.

```
void MDIRestore(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra da ripristinare.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIChildWnd:: MDIRestore](../../mfc/reference/cmdichildwnd-class.md#mdirestore).

##  <a name="mdisetmenu"></a>CMDIFrameWnd:: MDISetMenu

Sostituisce il menu di una finestra cornice MDI, il menu di scelta rapida della finestra o entrambi.

```
CMenu* MDISetMenu(
    CMenu* pFrameMenu,
    CMenu* pWindowMenu);
```

### <a name="parameters"></a>Parametri

*pFrameMenu*<br/>
Consente di specificare il menu del nuovo menu della finestra cornice. Se è NULL, il menu non viene modificato.

*pWindowMenu*<br/>
Consente di specificare il menu del menu di scelta rapida nuova finestra. Se è NULL, il menu non viene modificato.

### <a name="return-value"></a>Valore restituito

Puntatore al menu della finestra cornice sostituito da questo messaggio. Il puntatore può essere temporaneo e non deve essere memorizzato per usi successivi.

### <a name="remarks"></a>Osservazioni

Dopo la chiamata di `MDISetMenu`, un'applicazione deve chiamare la funzione membro [DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar) di `CWnd` per aggiornare la barra dei menu.

Se questa chiamata sostituisce il menu a comparsa della finestra, le voci di menu finestra figlio MDI vengono rimosse dal menu finestra precedente e aggiunte al menu a comparsa nuova finestra.

Se una finestra figlio MDI viene ingrandita e questa chiamata sostituisce il menu della finestra cornice MDI, il menu di controllo e i controlli di ripristino vengono rimossi dal menu della finestra cornice precedente e aggiunti al nuovo menu.

Non chiamare questa funzione membro se si usa il Framework per gestire le finestre figlio MDI.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#19](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_7.cpp)]

[!code-cpp[NVC_MFCWindowing#20](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_8.cpp)]

##  <a name="mditile"></a>CMDIFrameWnd:: MDITile

Dispone tutte le finestre figlio in un formato affiancato.

```
void MDITile();
void MDITile(int nType);
```

### <a name="parameters"></a>Parametri

*nType*<br/>
Specifica un flag di affiancamento. Questo parametro può essere uno dei flag seguenti:

- MDITILE_HORIZONTAL affianca le finestre figlio MDI in modo che una finestra venga visualizzata sopra l'altra.

- MDITILE_SKIPDISABLED impedisce che vengano affiancate le finestre figlio MDI disabilitate.

- MDITILE_VERTICAL affianca le finestre figlio MDI in modo che una finestra venga visualizzata accanto a un'altra.

### <a name="remarks"></a>Osservazioni

La prima versione di `MDITile`, senza parametri, riquadri le finestre verticalmente in Windows versioni 3,1 e successive. La seconda versione riquadri le finestre verticalmente o orizzontalmente, a seconda del valore del parametro *nType* .

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIFrameWnd:: MDICascade](#mdicascade).

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[MDIDOCVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[SNAPVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)
