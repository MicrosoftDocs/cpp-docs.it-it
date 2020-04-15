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
ms.openlocfilehash: a6e68f6368a7b45e0a566a7d2d12f23a9cd62b12
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370050"
---
# <a name="cmdiframewnd-class"></a>Classe CMDIFrameWnd

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
|[CMDIFrameWnd::CreateClient](#createclient)|Crea una finestra MDICLIENT `CMDIFrameWnd`di Windows per questo oggetto . Chiamato dalla `OnCreate` funzione `CWnd`membro di .|
|[CMDIFrameWnd::CreateNewChild](#createnewchild)|Crea una nuova finestra figlio.|
|[CMDIFrameWnd::GetWindowMenuPopup](#getwindowmenupopup)|Restituisce il menu a comparsa Finestra.|
|[CMDIFrameWnd::MDIActivate](#mdiactivate)|Attiva una finestra figlio MDI diversa.|
|[CMDIFrameWnd::MDICascade](#mdicascade)|Dispone tutte le finestre figlio in un formato a cascata.|
|[CMDIFrameWnd::MDIGetActiveCMDIFrameWnd::MDIGetActive](#mdigetactive)|Recupera la finestra figlio MDI attualmente attiva, insieme a un flag che indica se l'elemento figlio è ingrandito o meno.|
|[CMDIFrameWnd::MDIIconArrange](#mdiiconarrange)|Dispone tutte le finestre figlio del documento ridotte a icona.|
|[CMDIFrameWnd::MDIMaximize](#mdimaximize)|Ingrandisce una finestra figlio MDI.|
|[CMDIFrameWnd::MDISuccessivo](#mdinext)|Attiva la finestra figlio immediatamente dietro la finestra figlio attualmente attiva e posiziona la finestra figlio attualmente attiva dietro tutte le altre finestre figlio.|
|[CMDIFrameWnd::MDIPrev](#mdiprev)|Attiva la finestra figlio precedente e posiziona la finestra figlio attualmente attiva immediatamente dietro di essa.|
|[CMDIFrameWnd::MDIRestore](#mdirestore)|Ripristina una finestra figlio MDI da dimensioni ingrandite o ridotte a icona.|
|[CMDIFrameWnd::MDISetMenu](#mdisetmenu)|Sostituisce il menu di una finestra cornice MDI, il menu a comparsa Finestra o entrambi.|
|[CMDIFrameWnd::MDITile](#mditile)|Dispone tutte le finestre figlio in un formato affiancato.|

## <a name="remarks"></a>Osservazioni

Per creare una finestra cornice MDI utile per `CMDIFrameWnd`l'applicazione, derivare una classe da . Aggiungere variabili membro alla classe derivata per archiviare dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.

È possibile costruire una finestra cornice MDI chiamando la `CFrameWnd`funzione membro [Create](../../mfc/reference/cframewnd-class.md#create) o [LoadFrame](../../mfc/reference/cframewnd-class.md#loadframe) di .

Prima di `Create` `LoadFrame`chiamare o , è necessario costruire l'oggetto finestra cornice nell'heap utilizzando l'operatore **new** di C. Prima `Create` di chiamare è anche possibile registrare una classe finestra con la funzione globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) per impostare l'icona e gli stili di classe per il frame.

Utilizzare `Create` la funzione membro per passare i parametri di creazione del frame come argomenti immediati.

`LoadFrame`richiede meno `Create`argomenti di , e recupera invece la maggior parte dei valori predefiniti dalle risorse, tra cui la didascalia, l'icona, la tabella dei tasti di scelta rapida e il menu del frame. Per accedere `LoadFrame`a , tutte queste risorse devono avere lo stesso ID risorsa (ad esempio, IDR_MAINFRAME).

Anche `MDIFrameWnd` se `CFrameWnd`è derivato da `CMDIFrameWnd` , una classe `DECLARE_DYNCREATE`finestra cornice derivata da non deve essere dichiarata con .

La `CMDIFrameWnd` classe eredita gran parte `CFrameWnd`dell'implementazione predefinita da . Per un elenco dettagliato di queste funzionalità, fare riferimento alla descrizione della classe [CFrameWnd.For](../../mfc/reference/cframewnd-class.md) a detailed list of these features, refer to the CFrameWnd class description. La `CMDIFrameWnd` classe ha le seguenti funzionalità aggiuntive:

- Una finestra cornice MDI gestisce la finestra MDICLIENT, riposizionandola insieme alle barre di controllo. La finestra client MDI è l'elemento padre diretto delle finestre cornice figlio MDI. Il WS_HSCROLL e WS_VSCROLL gli `CMDIFrameWnd` stili di finestra specificati in un'applicazione alla finestra del client MDI anziché la finestra cornice principale in modo che l'utente può scorrere l'area client MDI (come in Gestione programmi di Windows, ad esempio).

- Una finestra cornice MDI possiede un menu predefinito che viene utilizzato come barra dei menu quando non è presente alcuna finestra figlio MDI attiva. Quando è presente un elemento figlio MDI attivo, la barra dei menu della finestra cornice MDI viene sostituita automaticamente dal menu della finestra figlio MDI.

- Una finestra cornice MDI funziona in combinazione con la finestra figlio MDI corrente, se presente. Ad esempio, i messaggi di comando vengono delegati all'elemento figlio MDI attualmente attivo prima della finestra cornice MDI.

- Una finestra cornice MDI dispone di gestori predefiniti per i seguenti comandi di menu Standard Window:

  - ID_WINDOW_TILE_VERT

  - ID_WINDOW_TILE_HORZ

  - ID_WINDOW_CASCADE

  - ID_WINDOW_ARRANGE

- Una finestra cornice MDI dispone anche di un'implementazione di ID_WINDOW_NEW, che crea un nuovo frame e una nuova visualizzazione nel documento corrente. Un'applicazione può eseguire l'override di queste implementazioni di comando predefinito per personalizzare la gestione delle finestre MDI.

Per eliminare una finestra cornice, non utilizzare l'operatore **delete** di C. Usare invece `CWnd::DestroyWindow`. L'implementazione `CFrameWnd` di `PostNcDestroy` consente di eliminare l'oggetto di C , quando la finestra viene eliminata. Quando l'utente chiude la finestra `OnClose` cornice, `DestroyWindow`il gestore predefinito chiamerà .

Per ulteriori `CMDIFrameWnd`informazioni su , vedere [Finestre cornice](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMDIFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cmdiframewndcmdiframewnd"></a><a name="cmdiframewnd"></a>CMDIFrameWnd::CMDIFrameWnd

Costruisce un oggetto `CMDIFrameWnd`.

```
CMDIFrameWnd();
```

### <a name="remarks"></a>Osservazioni

Chiamare `Create` la `LoadFrame` funzione membro o per creare la finestra cornice MDI visibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#13](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_1.cpp)]

## <a name="cmdiframewndcreateclient"></a><a name="createclient"></a>CMDIFrameWnd::CreateClient

Crea la finestra client MDI `CMDIChildWnd` che gestisce gli oggetti.

```
virtual BOOL CreateClient(
    LPCREATESTRUCT lpCreateStruct,
    CMenu* pWindowMenu);
```

### <a name="parameters"></a>Parametri

*lpCreateStruct (informazioni in base alla creazione di oggetti*<br/>
Puntatore long a una struttura [CREATESTRUCT.](/windows/win32/api/winuser/ns-winuser-createstructw)

*pWindowMenu (menu)*<br/>
Puntatore al menu a comparsa Finestra.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro deve essere `OnCreate` chiamata se si esegue direttamente l'override della funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#14](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_2.cpp)]

## <a name="cmdiframewndcreatenewchild"></a><a name="createnewchild"></a>CMDIFrameWnd::CreateNewChild

Crea una nuova finestra figlio.

```
CMDIChildWnd* CreateNewChild(
    CRuntimeClass* pClass,
    UINT nResource,
    HMENU hMenu = NULL,
    HACCEL hAccel = NULL);
```

### <a name="parameters"></a>Parametri

*pClasse*<br/>
Classe in fase di esecuzione della finestra figlio da creare.

*nRisorsa*<br/>
ID delle risorse condivise associate alla finestra figlio.

*Hmenu*<br/>
Menu della finestra figlio.

*hAccel*<br/>
Acceleratore della finestra figlio.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per creare finestre figlio di una finestra cornice MDI.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#15](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_3.cpp)]

## <a name="cmdiframewndgetwindowmenupopup"></a><a name="getwindowmenupopup"></a>CMDIFrameWnd::GetWindowMenuPopup

Chiamare questa funzione membro per ottenere un handle per il menu a comparsa corrente denominato "Window" (il menu a comparsa con voci di menu per la gestione della finestra MDI).

```
virtual HMENU GetWindowMenuPopup(HMENU hMenuBar);
```

### <a name="parameters"></a>Parametri

*hMenuBar (barra dei menu)*<br/>
Barra dei menu corrente.

### <a name="return-value"></a>Valore restituito

Il menu a comparsa Finestra, se presente; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita cerca un menu a comparsa contenente i comandi di menu standard della finestra, ad esempio ID_WINDOW_NEW e ID_WINDOW_TILE_HORZ.

Eseguire l'override di questa funzione membro se si dispone di un menu finestra che non utilizza gli ID di comando di menu standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#16](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_4.cpp)]

## <a name="cmdiframewndmdiactivate"></a><a name="mdiactivate"></a>CMDIFrameWnd::MDIActivate

Attiva una finestra figlio MDI diversa.

```
void MDIActivate(CWnd* pWndActivate);
```

### <a name="parameters"></a>Parametri

*pWndActivate (attiva*<br/>
Punta alla finestra figlio MDI da attivare.

### <a name="remarks"></a>Osservazioni

Questa funzione membro invia il [messaggio di WM_MDIACTIVATE](../../mfc/reference/cwnd-class.md#onmdiactivate) sia alla finestra figlio attivata che alla finestra figlio da disattivare.

Si tratta dello stesso messaggio che viene inviato se l'utente modifica lo stato attivo in una finestra figlio MDI utilizzando il mouse o la tastiera.

> [!NOTE]
> Una finestra figlio MDI viene attivata indipendentemente dalla finestra cornice MDI. Quando il frame diventa attivo, la finestra figlio che è stata attivata l'ultima volta viene inviato un [messaggio di WM_NCACTIVATE](../../mfc/reference/cwnd-class.md#onncactivate) per disegnare una cornice della finestra attiva e la barra del titolo, ma non riceve un altro messaggio di WM_MDIACTIVATE.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIFrameWnd::GetWindowMenuPopup](#getwindowmenupopup).

## <a name="cmdiframewndmdicascade"></a><a name="mdicascade"></a>CMDIFrameWnd::MDICascade

Dispone tutte le finestre figlio MDI in formato a cascata.

```
void MDICascade();
void MDICascade(int nType);
```

### <a name="parameters"></a>Parametri

*nType*<br/>
Specifica un flag di cascata. È possibile specificare solo il flag seguente: MDITILE_SKIPDISABLED, che impedisce la cascata delle finestre figlio MDI disabilitate.

### <a name="remarks"></a>Osservazioni

La prima `MDICascade`versione di , senza parametri, sovrappone tutte le finestre figlio MDI, incluse quelle disabilitate. La seconda versione facoltativamente non sovrapponisce le finestre figlio MDI disabilitate se si specifica MDITILE_SKIPDISABLED per il *nType* parametro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#17](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_5.cpp)]

## <a name="cmdiframewndmdigetactive"></a><a name="mdigetactive"></a>CMDIFrameWnd::MDIGetActiveCMDIFrameWnd::MDIGetActive

Recupera la finestra figlio MDI attiva corrente, insieme a un flag che indica se la finestra figlio è ingrandita.

```
CMDIChildWnd* MDIGetActive(BOOL* pbMaximized = NULL) const;
```

### <a name="parameters"></a>Parametri

*pbMassimizzato*<br/>
Puntatore a un valore restituito BOOL. Impostare su TRUE al ritorno se la finestra è ingrandita; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra figlio MDI attiva.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIChildWnd::MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#mdimaximize).

## <a name="cmdiframewndmdiiconarrange"></a><a name="mdiiconarrange"></a>CMDIFrameWnd::MDIIconArrange

Dispone tutte le finestre figlio del documento ridotte a icona.

```
void MDIIconArrange();
```

### <a name="remarks"></a>Osservazioni

Non influisce sulle finestre figlio che non sono ridotte a icona.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIFrameWnd::MDICascade](#mdicascade).

## <a name="cmdiframewndmdimaximize"></a><a name="mdimaximize"></a>CMDIFrameWnd::MDIMaximize

Ingrandisce la finestra figlio MDI specificata.

```
void MDIMaximize(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra da ingrandire.

### <a name="remarks"></a>Osservazioni

Quando una finestra figlio viene ingrandita, Windows la ridimensiona per fare in modo che l'area client riempia la finestra client. Windows posiziona il menu Controllo della finestra figlio nella barra dei menu della cornice in modo che l'utente possa ripristinare o chiudere la finestra figlio. Aggiunge inoltre il titolo della finestra figlio al titolo della finestra cornice.

Se un'altra finestra figlio MDI viene attivata quando la finestra figlio MDI attualmente attiva è ingrandita, Windows ripristina il figlio attualmente attivo e ingrandisce la finestra figlio appena attivata.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIChildWnd::MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#mdimaximize).

## <a name="cmdiframewndmdinext"></a><a name="mdinext"></a>CMDIFrameWnd::MDISuccessivo

Attiva la finestra figlio immediatamente dietro la finestra figlio attualmente attiva e posiziona la finestra figlio attualmente attiva dietro tutte le altre finestre figlio.

```
void MDINext();
```

### <a name="remarks"></a>Osservazioni

Se la finestra figlio MDI attualmente attiva è ingrandita, la funzione membro ripristina il figlio attualmente attivo e ingrandisce l'elemento figlio appena attivato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#18](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_6.cpp)]

## <a name="cmdiframewndmdiprev"></a><a name="mdiprev"></a>CMDIFrameWnd::MDIPrev

Attiva la finestra figlio precedente e posiziona la finestra figlio attualmente attiva immediatamente dietro di essa.

```
void MDIPrev();
```

### <a name="remarks"></a>Osservazioni

Se la finestra figlio MDI attualmente attiva è ingrandita, la funzione membro ripristina il figlio attualmente attivo e ingrandisce l'elemento figlio appena attivato.

## <a name="cmdiframewndmdirestore"></a><a name="mdirestore"></a>CMDIFrameWnd::MDIRestore

Ripristina una finestra figlio MDI da dimensioni ingrandite o ridotte a icona.

```
void MDIRestore(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta alla finestra da ripristinare.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIChildWnd::MDIRestore](../../mfc/reference/cmdichildwnd-class.md#mdirestore).

## <a name="cmdiframewndmdisetmenu"></a><a name="mdisetmenu"></a>CMDIFrameWnd::MDISetMenu

Sostituisce il menu di una finestra cornice MDI, il menu a comparsa Finestra o entrambi.

```
CMenu* MDISetMenu(
    CMenu* pFrameMenu,
    CMenu* pWindowMenu);
```

### <a name="parameters"></a>Parametri

*pFrameMenu*<br/>
Specifica il menu del nuovo menu della finestra cornice. Se NULL, il menu non viene modificato.

*pWindowMenu (menu)*<br/>
Specifica il menu del nuovo menu a comparsa Finestra. Se NULL, il menu non viene modificato.

### <a name="return-value"></a>Valore restituito

Puntatore al menu della finestra cornice sostituito da questo messaggio. Il puntatore può essere temporaneo e non deve essere memorizzato per usi successivi.

### <a name="remarks"></a>Osservazioni

Dopo `MDISetMenu`aver chiamato , un'applicazione deve `CWnd` chiamare il [DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar) funzione membro di per aggiornare la barra dei menu.

Se questa chiamata sostituisce il menu a comparsa Finestra, le voci di menu della finestra figlio MDI vengono rimosse dal menu Finestra precedente e aggiunte al nuovo menu a comparsa Finestra.

Se una finestra figlio MDI è ingrandita e questa chiamata sostituisce il menu della finestra cornice MDI, il controllo menu e ripristinare controlli vengono rimossi dal menu finestra cornice precedente e aggiunti al nuovo menu.

Non chiamare questa funzione membro se si utilizza il framework per gestire le finestre figlio MDI.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#19](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_7.cpp)]

[!code-cpp[NVC_MFCWindowing#20](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_8.cpp)]

## <a name="cmdiframewndmditile"></a><a name="mditile"></a>CMDIFrameWnd::MDITile

Dispone tutte le finestre figlio in un formato affiancato.

```
void MDITile();
void MDITile(int nType);
```

### <a name="parameters"></a>Parametri

*nType*<br/>
Specifica un flag di apuntura. Questo parametro può essere uno dei seguenti flag:

- MDITILE_HORIZONTAL Tiles le finestre figlio MDI in modo che una finestra venga visualizzata sopra un'altra.

- MDITILE_SKIPDISABLED Impedisce l'apparità figlio MDI disabilitata.

- MDITILE_VERTICAL Tiles le finestre figlio MDI in modo che una finestra venga visualizzata accanto a un'altra.

### <a name="remarks"></a>Osservazioni

La prima `MDITile`versione di , senza parametri, affianca le finestre verticalmente in Windows versioni 3.1 e successive. La seconda versione affianca le finestre verticalmente o orizzontalmente, a seconda del valore del parametro *nType.*

### <a name="example"></a>Esempio

Vedere l'esempio per [CMDIFrameWnd::MDICascade](#mdicascade).

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC MDIDOCVW](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)
