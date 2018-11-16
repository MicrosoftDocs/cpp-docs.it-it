---
title: CMDIChildWnd (classe)
ms.date: 11/04/2016
f1_keywords:
- CMDIChildWnd
- AFXWIN/CMDIChildWnd
- AFXWIN/CMDIChildWnd::CMDIChildWnd
- AFXWIN/CMDIChildWnd::Create
- AFXWIN/CMDIChildWnd::GetMDIFrame
- AFXWIN/CMDIChildWnd::MDIActivate
- AFXWIN/CMDIChildWnd::MDIDestroy
- AFXWIN/CMDIChildWnd::MDIMaximize
- AFXWIN/CMDIChildWnd::MDIRestore
- AFXWIN/CMDIChildWnd::SetHandles
helpviewer_keywords:
- CMDIChildWnd [MFC], CMDIChildWnd
- CMDIChildWnd [MFC], Create
- CMDIChildWnd [MFC], GetMDIFrame
- CMDIChildWnd [MFC], MDIActivate
- CMDIChildWnd [MFC], MDIDestroy
- CMDIChildWnd [MFC], MDIMaximize
- CMDIChildWnd [MFC], MDIRestore
- CMDIChildWnd [MFC], SetHandles
ms.assetid: 6d07f5d4-9a3e-4723-9fa5-e65bb669fdd5
ms.openlocfilehash: 50fb7da1a59d35d96f1f65428b3a361e3a226607
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51694454"
---
# <a name="cmdichildwnd-class"></a>CMDIChildWnd (classe)

Fornisce la funzionalità di una finestra figlio con interfaccia a documenti multipli (MDI) di Windows, insieme ai membri per gestire la finestra.

## <a name="syntax"></a>Sintassi

```
class CMDIChildWnd : public CFrameWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMDIChildWnd::CMDIChildWnd](#cmdichildwnd)|Costruisce un oggetto `CMDIChildWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMDIChildWnd::Create](#create)|Crea la finestra figlio MDI di Windows associata il `CMDIChildWnd` oggetto.|
|[CMDIChildWnd::GetMDIFrame](#getmdiframe)|Restituisce l'elemento padre cornice MDI della finestra client MDI.|
|[CMDIChildWnd::MDIActivate](#mdiactivate)|Attiva la finestra figlio MDI.|
|[CMDIChildWnd::MDIDestroy](#mdidestroy)|Elimina questa finestra figlio MDI.|
|[CMDIChildWnd::MDIMaximize](#mdimaximize)|Ingrandisce la finestra figlio MDI.|
|[CMDIChildWnd::MDIRestore](#mdirestore)|Ripristina questa finestra figlio MDI da dimensioni ingrandita o ridotta a icona.|
|[CMDIChildWnd::SetHandles](#sethandles)|Imposta l'handle per le risorse di menu e tasti di scelta rapida.|

## <a name="remarks"></a>Note

Una finestra figlia MDI sembra molto simile a una normale finestra cornice, ad eccezione del fatto che viene visualizzata la finestra figlio MDI all'interno di una finestra cornice MDI anziché sul desktop. Una finestra figlia MDI non dispone di una barra dei menu propri, ma invece condivide il menu della finestra cornice MDI. Il framework imposta automaticamente il menu di cornice MDI per rappresentare la finestra figlio MDI attualmente attiva.

Per creare una finestra figlio MDI utile per l'applicazione, derivare una classe da `CMDIChildWnd`. Aggiungere le variabili membro nella classe derivata per archiviare i dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.

Esistono tre modi per costruire una finestra figlia MDI:

- Costruire direttamente usando `Create`.

- Costruire direttamente usando `LoadFrame`.

- Crearlo indirettamente tramite un modello di documento.

Prima di chiamare `Create` oppure `LoadFrame`, è necessario costruire l'oggetto finestra cornice nell'heap con C++ **nuove** operatore. Prima di chiamare `Create` è anche possibile registrare una classe di finestra con il [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale per impostare gli stili di icona e la classe per il frame.

Usare il `Create` funzione membro per passare parametri di creazione del frame immediati come argomenti.

`LoadFrame` richiede un minor numero di argomenti rispetto a `Create`e recupera la maggior parte dei relativi valori predefiniti da risorse, tra cui didascalia del frame, icona, tabella di tasti di scelta rapida e menu. Per essere accessibili tramite `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa (ad esempio, IDR_MAINFRAME).

Quando un `CMDIChildWnd` oggetto contiene le viste e i documenti, vengono creati indirettamente dal framework anziché direttamente dal programmatore. Il `CDocTemplate` oggetto Orchestra la creazione del frame, la creazione delle visualizzazioni che lo contiene e la connessione delle visualizzazioni di documento appropriato. I parametri del `CDocTemplate` costruttore specificare i `CRuntimeClass` delle tre classi coinvolte (documenti, frame e Visualizza). Oggetto `CRuntimeClass` oggetto viene usato dal framework per creare in modo dinamico nuovi fotogrammi quando specificato dall'utente (ad esempio, usando il comando File nuovo o il comando nuova finestra MDI).

Una classe di finestre cornice derivata da `CMDIChildWnd` deve essere dichiarato con DECLARE_DYNCREATE affinché il meccanismo precedente RUNTIME_CLASS a funzionare correttamente.

Il `CMDIChildWnd` classe erediti gran parte della propria implementazione predefinita da `CFrameWnd`. Per un elenco dettagliato di queste funzionalità, consultare il [CFrameWnd](../../mfc/reference/cframewnd-class.md) descrizione della classe. Il `CMDIChildWnd` classe ha le funzionalità aggiuntive seguenti:

- In combinazione con il `CMultiDocTemplate` (classe), più `CMDIChildWnd` oggetti dallo stesso modello di documento condividono lo stesso menu, il salvataggio delle risorse di sistema di Windows.

- Menu finestra figlio MDI attualmente attivo sostituisce completamente menu della finestra cornice MDI, e la didascalia della finestra figlio MDI attualmente attiva viene aggiunto alla didascalia della finestra cornice MDI. Per ulteriori esempi di funzioni finestra MDI figlio che vengono implementate insieme a una finestra cornice MDI, vedere il `CMDIFrameWnd` descrizione della classe.

Non usare C++ **eliminare** operatore da eliminare definitivamente una finestra cornice. In alternativa, usare `CWnd::DestroyWindow`. Il `CFrameWnd` implementazione di `PostNcDestroy` eliminerà l'oggetto C++ quando la finestra viene eliminata. Quando l'utente chiude la finestra cornice, il valore predefinito `OnClose` gestore verrà chiamato `DestroyWindow`.

Per ulteriori informazioni sul `CMDIChildWnd`, vedere [Frame Windows](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMDIChildWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cmdichildwnd"></a>  CMDIChildWnd::CMDIChildWnd

Chiamata a costruire un `CMDIChildWnd` oggetto.

```
CMDIChildWnd();
```

### <a name="remarks"></a>Note

Chiamare `Create` per creare la finestra visibile.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMDIChildWnd::Create](#create).

##  <a name="create"></a>  CMDIChildWnd::Create

Chiamare questa funzione membro per creare una finestra figlio MDI di Windows e associarlo al `CMDIChildWnd` oggetto.

```
virtual BOOL Create(
    LPCTSTR lpszClassName,
    LPCTSTR lpszWindowName,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW,
    const RECT& rect = rectDefault,
    CMDIFrameWnd* pParentWnd = NULL,
    CCreateContext* pContext = NULL);
```

### <a name="parameters"></a>Parametri

*lpszClassName*<br/>
Punta a una stringa di caratteri con terminazione null che corrisponde al nome della classe di Windows (un [WNDCLASS](/windows/desktop/api/winuser/ns-winuser-tagwndclassa) struttura). Il nome della classe può essere qualsiasi nome registrato con il [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale. Deve essere NULL per uno standard `CMDIChildWnd`.

*lpszWindowName*<br/>
Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra. Usato come testo per la barra del titolo.

*dwStyle*<br/>
Specifica l'intervallo [stile](../../mfc/reference/styles-used-by-mfc.md#window-styles) attributi. Lo stile WS_CHILD è obbligatorio.

*Rect*<br/>
Contiene le dimensioni e posizione della finestra. Il `rectDefault` valore consente di specificare le dimensioni e la posizione del nuovo Windows `CMDIChildWnd`.

*pParentWnd*<br/>
Specifica il padre della finestra. Se NULL, viene utilizzata la finestra principale dell'applicazione.

*pContext*<br/>
Specifica un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura. Questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La finestra cornice figlio MDI attualmente attiva è possibile determinare la didascalia della finestra cornice padre. Questa funzionalità è disabilitata disattivando il bit di stile FWS_ADDTOTITLE della finestra cornice figlio.

Il framework chiama questa funzione membro in risposta a un utente di comando per creare una finestra figlio e il framework utilizza il *pContext* parametro connettere correttamente la finestra figlio per l'applicazione. Quando si chiama `Create`, *pContext* può essere NULL.

### <a name="example"></a>Esempio

Esempio 1:

[!code-cpp[NVC_MFCWindowing#7](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_1.cpp)]

### <a name="example"></a>Esempio

Esempio 2:

[!code-cpp[NVC_MFCWindowing#8](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_2.cpp)]

[!code-cpp[NVC_MFCWindowing#9](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_3.cpp)]

##  <a name="getmdiframe"></a>  CMDIChildWnd::GetMDIFrame

Chiamare questa funzione per restituire il frame padre MDI.

```
CMDIFrameWnd* GetMDIFrame();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra cornice MDI padre.

### <a name="remarks"></a>Note

Il frame restituito è due elementi padre rimossi dal `CMDIChildWnd` ed è l'elemento padre della finestra di tipo MDICLIENT che gestisce il `CMDIChildWnd` oggetto. Chiamare il [GetParent](../../mfc/reference/cwnd-class.md#getparent) funzione di membro per restituire il `CMDIChildWnd` padre MDICLIENT diretto dell'oggetto come una variabile temporanea `CWnd` puntatore.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMDIFrameWnd::MDISetMenu](../../mfc/reference/cmdiframewnd-class.md#mdisetmenu).

##  <a name="mdiactivate"></a>  CMDIChildWnd::MDIActivate

Chiamare questa funzione membro per attivare una finestra figlia MDI indipendentemente dalla finestra cornice MDI.

```
void MDIActivate();
```

### <a name="remarks"></a>Note

Quando il frame diventa attivo, verrà attivata anche la finestra figlio che è stata attivata l'ultima volta.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CMDIFrameWnd::GetWindowMenuPopup](../../mfc/reference/cmdiframewnd-class.md#getwindowmenupopup).

##  <a name="mdidestroy"></a>  CMDIChildWnd::MDIDestroy

Chiamare questa funzione membro per eliminare definitivamente una finestra figlio MDI.

```
void MDIDestroy();
```

### <a name="remarks"></a>Note

La funzione membro rimuove il titolo della finestra figlio dalla finestra cornice e disattiva la finestra figlio.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#10](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_4.cpp)]

##  <a name="mdimaximize"></a>  CMDIChildWnd::MDIMaximize

Chiamare questa funzione membro per ottimizzare una finestra figlio MDI.

```
void MDIMaximize();
```

### <a name="remarks"></a>Note

Quando una finestra figlio viene ingrandita, Windows ridimensiona in modo da rendere relativa area client di riempire l'area client della finestra cornice. Windows posiziona menu controllo della finestra figlio nella barra dei menu del frame in modo che l'utente può ripristinare o chiudere la finestra figlio e consente di aggiungere il titolo della finestra figlio al titolo della finestra cornice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#11](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_5.cpp)]

##  <a name="mdirestore"></a>  CMDIChildWnd::MDIRestore

Chiamare questa funzione membro per ripristinare una finestra figlio MDI da dimensioni ingrandita o ridotta a icona.

```
void MDIRestore();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#12](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_6.cpp)]

##  <a name="sethandles"></a>  CMDIChildWnd::SetHandles

Imposta l'handle per le risorse di menu e tasti di scelta rapida.

```
void SetHandles(
    HMENU hMenu,
    HACCEL hAccel);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
L'handle di una risorsa di menu.

*hAccel*<br/>
L'handle di una risorsa di tasti di scelta rapida.

### <a name="remarks"></a>Note

Chiamare questa funzione per impostare le risorse di menu e tasti di scelta rapida usate dall'oggetto finestra figlio MDI.

## <a name="see-also"></a>Vedere anche

[Esempio MFC MDI](../../visual-cpp-samples.md)<br/>
[Esempio MFC MDIDOCVW](../../visual-cpp-samples.md)<br/>
[Esempio MFC SNAPVW](../../visual-cpp-samples.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md)
