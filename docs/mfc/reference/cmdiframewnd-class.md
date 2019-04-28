---
title: CMDIFrameWnd (classe)
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
ms.openlocfilehash: 9f5289491a7c14749865cfd163417440bc542aba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62164189"
---
# <a name="cmdiframewnd-class"></a>CMDIFrameWnd (classe)

Fornisce la funzionalità di una finestra cornice figlio con interfaccia a documenti multipli (MDI) di Windows, insieme ai membri per gestire la finestra.

## <a name="syntax"></a>Sintassi

```
class CMDIFrameWnd : public CFrameWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMDIFrameWnd::CMDIFrameWnd](#cmdiframewnd)|Costruisce un oggetto `CMDIFrameWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMDIFrameWnd::CreateClient](#createclient)|Crea una finestra MDICLIENT Windows per questo `CMDIFrameWnd`. Chiamato il `OnCreate` funzione membro di `CWnd`.|
|[CMDIFrameWnd::CreateNewChild](#createnewchild)|Crea una nuova finestra figlio.|
|[CMDIFrameWnd::GetWindowMenuPopup](#getwindowmenupopup)|Restituisce il menu di scelta rapida finestra.|
|[CMDIFrameWnd::MDIActivate](#mdiactivate)|Attiva una finestra figlio MDI diversa.|
|[CMDIFrameWnd::MDICascade](#mdicascade)|Organizza tutte le finestre figlio sotto forma di sottomenu.|
|[CMDIFrameWnd::MDIGetActive](#mdigetactive)|Recupera la finestra figlio MDI attualmente attiva, insieme a un flag che indica se l'elemento figlio è ingrandita.|
|[CMDIFrameWnd::MDIIconArrange](#mdiiconarrange)|Organizza tutte le finestre figlio ridotte a icona documento.|
|[CMDIFrameWnd::MDIMaximize](#mdimaximize)|Ingrandisce una finestra figlio MDI.|
|[CMDIFrameWnd::MDINext](#mdinext)|Attiva la finestra figlio immediatamente dietro la finestra figlio attualmente attivi e inserisce la finestra figlio attualmente attiva alla base di tutte le altre finestre figlio.|
|[CMDIFrameWnd::MDIPrev](#mdiprev)|Attiva la finestra figlio precedente e inserisce la finestra figlio attualmente attiva immediatamente sottostante.|
|[CMDIFrameWnd::MDIRestore](#mdirestore)|Ripristina una finestra figlio MDI da dimensioni ingrandita o ridotta a icona.|
|[CMDIFrameWnd::MDISetMenu](#mdisetmenu)|Sostituisce il menu di scelta di una finestra cornice MDI, il menu di scelta rapida finestra o entrambi.|
|[CMDIFrameWnd::MDITile](#mditile)|Organizza tutte le finestre figlio in un formato affiancato.|

## <a name="remarks"></a>Note

Per creare una finestra cornice MDI utile per l'applicazione, derivare una classe da `CMDIFrameWnd`. Aggiungere le variabili membro nella classe derivata per archiviare i dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.

È possibile costruire una finestra cornice MDI chiamando il [Create](../../mfc/reference/cframewnd-class.md#create) oppure [LoadFrame](../../mfc/reference/cframewnd-class.md#loadframe) funzione membro di `CFrameWnd`.

Prima di chiamare `Create` oppure `LoadFrame`, è necessario costruire l'oggetto finestra cornice nell'heap con C++ **nuove** operatore. Prima di chiamare `Create` è anche possibile registrare una classe di finestra con il [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale per impostare gli stili di icona e la classe per il frame.

Usare il `Create` funzione membro per passare parametri di creazione del frame immediati come argomenti.

`LoadFrame` richiede un minor numero di argomenti rispetto a `Create`e recupera la maggior parte dei relativi valori predefiniti da risorse, tra cui didascalia del frame, icona, tabella di tasti di scelta rapida e menu. Accessibile tramite `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa (ad esempio, IDR_MAINFRAME).

Sebbene `MDIFrameWnd` deriva dal `CFrameWnd`, una classe della finestra cornice è derivato da `CMDIFrameWnd` non devono essere dichiarato con `DECLARE_DYNCREATE`.

Il `CMDIFrameWnd` classe erediti gran parte della propria implementazione predefinita da `CFrameWnd`. Per un elenco dettagliato di queste funzionalità, vedere la [CFrameWnd](../../mfc/reference/cframewnd-class.md) descrizione della classe. Il `CMDIFrameWnd` classe ha le funzionalità aggiuntive seguenti:

- Una finestra cornice MDI gestisce la finestra MDICLIENT, riposizionandola insieme alle barre di controllo. La finestra client MDI è l'elemento padre diretto di finestre cornice figlio MDI. Gli stili di finestra WS_HSCROLL e WS_VSCROLL specificati su un `CMDIFrameWnd` si applicano alla finestra client MDI piuttosto che la finestra cornice principale in modo che l'utente può scorrere l'area client MDI (come in Windows Program Manager, per esempio).

- Una finestra cornice MDI possiede un menu predefinito che viene usato come barra dei menu quando non vi è alcuna finestra figlio MDI attiva. Quando è presente un elemento figlio MDI attivo, barra dei menu della finestra cornice MDI viene sostituito automaticamente dal menu finestra figlio MDI.

- Una finestra cornice MDI funziona in combinazione con la finestra figlio MDI corrente, se presente. Ad esempio, i messaggi di comando vengono delegati al figlio MDI attualmente attivo prima la finestra cornice MDI.

- Una finestra cornice MDI ha gestori predefiniti per i comandi del menu finestra standard seguenti:

    - ID_WINDOW_TILE_VERT

    - ID_WINDOW_TILE_HORZ

    - ID_WINDOW_CASCADE

    - ID_WINDOW_ARRANGE

- Una finestra cornice MDI dispone anche di un'implementazione di ID_WINDOW_NEW, che crea un nuovo frame e visualizzazione del documento corrente. Un'applicazione può eseguire l'override di queste implementazioni di comando predefinita per personalizzare la gestione delle finestra MDI.

Non usare C++ **eliminare** operatore da eliminare definitivamente una finestra cornice. In alternativa, utilizzare `CWnd::DestroyWindow`. Il `CFrameWnd` implementazione di `PostNcDestroy` eliminerà l'oggetto C++ quando la finestra viene eliminata. Quando l'utente chiude la finestra cornice, il valore predefinito `OnClose` gestore verrà chiamato `DestroyWindow`.

Per ulteriori informazioni sul `CMDIFrameWnd`, vedere [Frame Windows](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMDIFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cmdiframewnd"></a>  CMDIFrameWnd::CMDIFrameWnd

Costruisce un oggetto `CMDIFrameWnd`.

```
CMDIFrameWnd();
```

### <a name="remarks"></a>Note

Chiamare il `Create` o `LoadFrame` funzione membro per creare la finestra cornice MDI visibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#13](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_1.cpp)]

##  <a name="createclient"></a>  CMDIFrameWnd::CreateClient

Crea la finestra client MDI che gestisce il `CMDIChildWnd` oggetti.

```
virtual BOOL CreateClient(
    LPCREATESTRUCT lpCreateStruct,
    CMenu* pWindowMenu);
```

### <a name="parameters"></a>Parametri

*lpCreateStruct*<br/>
Un puntatore di tipo long a un [CREATESTRUCT](/windows/desktop/api/winuser/ns-winuser-tagcreatestructa) struttura.

*pWindowMenu*<br/>
Puntatore al menu finestra a comparsa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro deve essere chiamata se esegue l'override di `OnCreate` direttamente funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#14](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_2.cpp)]

##  <a name="createnewchild"></a>  CMDIFrameWnd::CreateNewChild

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
La classe di runtime della finestra figlio da creare.

*nResource*<br/>
L'ID delle risorse condivise associato alla finestra figlio.

*hMenu*<br/>
Menu della finestra figlio.

*hAccel*<br/>
Tasti di scelta rapida della finestra figlio.

### <a name="remarks"></a>Note

Utilizzare questa funzione per creare finestre di creazione di una finestra cornice MDI figlio.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#15](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_3.cpp)]

##  <a name="getwindowmenupopup"></a>  CMDIFrameWnd::GetWindowMenuPopup

Chiamare questa funzione membro per ottenere un handle per il menu a comparsa corrente denominato "Finestra" (menu a comparsa con le voci di menu per la gestione di finestre MDI).

```
virtual HMENU GetWindowMenuPopup(HMENU hMenuBar);
```

### <a name="parameters"></a>Parametri

*hMenuBar*<br/>
Barra dei menu corrente.

### <a name="return-value"></a>Valore restituito

Menu a comparsa finestra se è presente. in caso contrario NULL.

### <a name="remarks"></a>Note

L'implementazione predefinita cerca un menu a comparsa contenente comandi del menu finestra standard, ad esempio ID_WINDOW_NEW e ID_WINDOW_TILE_HORZ.

Eseguire l'override di questa funzione membro se si dispone di un menu finestre che non usa l'ID di comando di menu standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#16](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_4.cpp)]

##  <a name="mdiactivate"></a>  CMDIFrameWnd::MDIActivate

Attiva una finestra figlio MDI diversa.

```
void MDIActivate(CWnd* pWndActivate);
```

### <a name="parameters"></a>Parametri

*pWndActivate*<br/>
Punta alla finestra figlio MDI da attivare.

### <a name="remarks"></a>Note

Questa funzione membro invia il [WM_MDIACTIVATE](../../mfc/reference/cwnd-class.md#onmdiactivate) messaggio per la finestra figlio viene attivato sia la finestra figlio viene disattivato.

Questo è lo stesso messaggio che viene inviato se l'utente modifica lo stato attivo a una finestra figlio MDI tramite mouse o tastiera.

> [!NOTE]
>  Una finestra figlio MDI viene attivata indipendentemente dalla finestra cornice MDI. Quando il frame diventa attivo, viene inviata alla finestra figlio che è stata attivata l'ultima volta un [WM_NCACTIVATE](../../mfc/reference/cwnd-class.md#onncactivate) messaggio per disegnare una cornice di finestra attiva e barra del titolo, ma non riceve un altro messaggio WM_MDIACTIVATE.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMDIFrameWnd::GetWindowMenuPopup](#getwindowmenupopup).

##  <a name="mdicascade"></a>  CMDIFrameWnd::MDICascade

Organizza tutte le finestre figlio MDI in un formato a catena.

```
void MDICascade();
void MDICascade(int nType);
```

### <a name="parameters"></a>Parametri

*nType*<br/>
Specifica un flag di propagazione. È possibile specificare solo il flag seguente: MDITILE_SKIPDISABLED, che impedisce che le finestre figlio MDI disabilitate a cascata in corso.

### <a name="remarks"></a>Note

La prima versione di `MDICascade`, senza parametri, viene propagata tutte le finestre figlio MDI, inclusi quelli disabilitati. La seconda versione esegue facoltativamente non cascade disabilitato MDI figlio windows se si specifica MDITILE_SKIPDISABLED per il *NLE* parametro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#17](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_5.cpp)]

##  <a name="mdigetactive"></a>  CMDIFrameWnd::MDIGetActive

Recupera l'attiva finestra figlio MDI corrente, insieme a un flag che indica se la finestra figlio viene ingrandita.

```
CMDIChildWnd* MDIGetActive(BOOL* pbMaximized = NULL) const;
```

### <a name="parameters"></a>Parametri

*pbMaximized*<br/>
Puntatore a un valore restituito BOOL. Impostare su TRUE nell'output restituito se la finestra è ingrandita; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra figlio MDI attiva.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMDIChildWnd::MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#mdimaximize).

##  <a name="mdiiconarrange"></a>  CMDIFrameWnd::MDIIconArrange

Organizza tutte le finestre figlio ridotte a icona documento.

```
void MDIIconArrange();
```

### <a name="remarks"></a>Note

Non influisce sulle finestre figlio che non siano ridotte al minimo.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMDIFrameWnd::MDICascade](#mdicascade).

##  <a name="mdimaximize"></a>  CMDIFrameWnd::MDIMaximize

Ingrandisce la finestra figlio MDI specificata.

```
void MDIMaximize(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra da ingrandire.

### <a name="remarks"></a>Note

Quando una finestra figlio viene ingrandita, Windows ridimensiona in modo da rendere relativa area client di riempire la finestra del client. Windows inserisce menu controllo della finestra figlio nella barra dei menu del frame in modo che l'utente può ripristinare o chiudere la finestra figlio. Aggiunge anche il titolo della finestra figlio al titolo della finestra cornice.

Se un'altra finestra figlio MDI viene attivata quando la finestra figlio MDI attualmente attiva è ingrandita, Windows consente di ripristinare l'elemento figlio attualmente attivo e ingrandisce la finestra figlio appena attivata.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMDIChildWnd::MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#mdimaximize).

##  <a name="mdinext"></a>  CMDIFrameWnd::MDINext

Attiva la finestra figlio immediatamente dietro la finestra figlio attualmente attivi e inserisce la finestra figlio attualmente attiva alla base di tutte le altre finestre figlio.

```
void MDINext();
```

### <a name="remarks"></a>Note

Se la finestra figlio MDI attualmente attiva è ingrandita, la funzione membro consente di ripristinare l'elemento figlio attualmente attivo e ottimizza il figlio appena attivato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#18](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_6.cpp)]

##  <a name="mdiprev"></a>  CMDIFrameWnd::MDIPrev

Attiva la finestra figlio precedente e inserisce la finestra figlio attualmente attiva immediatamente sottostante.

```
void MDIPrev();
```

### <a name="remarks"></a>Note

Se la finestra figlio MDI attualmente attiva è ingrandita, la funzione membro consente di ripristinare l'elemento figlio attualmente attivo e ottimizza il figlio appena attivato.

##  <a name="mdirestore"></a>  CMDIFrameWnd::MDIRestore

Ripristina una finestra figlio MDI da dimensioni ingrandita o ridotta a icona.

```
void MDIRestore(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta alla finestra da ripristinare.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMDIChildWnd::MDIRestore](../../mfc/reference/cmdichildwnd-class.md#mdirestore).

##  <a name="mdisetmenu"></a>  CMDIFrameWnd::MDISetMenu

Sostituisce il menu di scelta di una finestra cornice MDI, il menu di scelta rapida finestra o entrambi.

```
CMenu* MDISetMenu(
    CMenu* pFrameMenu,
    CMenu* pWindowMenu);
```

### <a name="parameters"></a>Parametri

*pFrameMenu*<br/>
Specifica il menu del nuovo menu della finestra cornice. Se NULL, il menu non viene modificato.

*pWindowMenu*<br/>
Specifica il menu del menu a comparsa nuova finestra. Se NULL, il menu non viene modificato.

### <a name="return-value"></a>Valore restituito

Puntatore al menu della finestra cornice sostituito da questo messaggio. Il puntatore può essere temporaneo e non deve essere memorizzato per usi successivi.

### <a name="remarks"></a>Note

Dopo avere chiamato `MDISetMenu`, un'applicazione deve chiamare il [DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar) funzione membro di `CWnd` per aggiornare la barra dei menu.

Se questa chiamata sostituisce il menu di scelta rapida finestra, voci del menu finestra figlio MDI vengono rimossi dal menu finestra precedente e aggiunto al nuovo menu di scelta rapida finestra.

Se una finestra figlio MDI viene ingrandita e questa chiamata sostituisce il menu di finestre cornice MDI, i controlli menu e il ripristino di controllo vengono rimosse dal menu finestra cornice precedente e aggiunto al nuovo menu.

Non chiamare questa funzione membro se si usa il framework per gestire le finestre figlio MDI.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#19](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_7.cpp)]

[!code-cpp[NVC_MFCWindowing#20](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_8.cpp)]

##  <a name="mditile"></a>  CMDIFrameWnd::MDITile

Organizza tutte le finestre figlio in un formato affiancato.

```
void MDITile();
void MDITile(int nType);
```

### <a name="parameters"></a>Parametri

*nType*<br/>
Specifica un flag di affiancamento. Questo parametro può essere uno dei flag seguenti:

- Finestre figlio MDI di riquadri MDITILE_HORIZONTAL in modo che una finestra viene visualizzata sopra un'altra.

- Impedisce a MDITILE_SKIPDISABLED disabilitato finestre figlio MDI da affiancato in corso.

- Finestre figlio MDI di riquadri MDITILE_VERTICAL in modo che una finestra viene visualizzata accanto a altro.

### <a name="remarks"></a>Note

La prima versione di `MDITile`, senza parametri, Affianca le finestre verticalmente in Windows 3.1 e versioni successive. La seconda versione Affianca finestre orizzontalmente o verticalmente, in base al valore di *NLE* parametro.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMDIFrameWnd::MDICascade](#mdicascade).

## <a name="see-also"></a>Vedere anche

[Esempio MFC MDI](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample MDIDOCVW](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)
