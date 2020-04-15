---
title: Classe CMDIChildWnd
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
ms.openlocfilehash: 0fbcb47f3148b72a3155e7c17cc913d652c70c2e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370077"
---
# <a name="cmdichildwnd-class"></a>Classe CMDIChildWnd

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
|[CMDIChildWnd::Crea](#create)|Crea la finestra figlio MDI `CMDIChildWnd` di Windows associata all'oggetto.|
|[CMDIChildWnd::GetMDIFrame](#getmdiframe)|Restituisce il frame MDI padre della finestra del client MDI.|
|[CMDIChildWnd::MDIActivate](#mdiactivate)|Attiva questa finestra figlio MDI.|
|[CMDIChildWnd::MDIDestroy](#mdidestroy)|Elimina questa finestra figlio MDI.|
|[CMDIChildWnd::MDIMassimizza](#mdimaximize)|Ingrandisce questa finestra figlio MDI.|
|[CMDIChildWnd::MDIRestore](#mdirestore)|Ripristina questa finestra figlio MDI da dimensioni ingrandite o ridotte a icona.|
|[CMDIChildWnd::SetHandlesCMDIChildWnd::SetHandles](#sethandles)|Imposta gli handle per le risorse di menu e tasti di scelta rapida.|

## <a name="remarks"></a>Osservazioni

Una finestra figlio MDI è molto simile a una finestra cornice tipica, ad eccezione del fatto che la finestra figlio MDI viene visualizzata all'interno di una finestra cornice MDI anziché sul desktop. Una finestra figlio MDI non dispone di una barra dei menu propria, ma condivide il menu della finestra cornice MDI. Il framework modifica automaticamente il menu cornice MDI per rappresentare la finestra figlio MDI attualmente attiva.

Per creare una finestra figlio MDI utile per `CMDIChildWnd`l'applicazione, derivare una classe da . Aggiungere variabili membro alla classe derivata per archiviare dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.

Esistono tre modi per costruire una finestra figlio MDI:There are three ways to construct an MDI child window:

- Costruirlo direttamente `Create`utilizzando .

- Costruirlo direttamente `LoadFrame`utilizzando .

- Costruirlo indirettamente tramite un modello di documento.

Prima di `Create` `LoadFrame`chiamare o , è necessario costruire l'oggetto finestra cornice nell'heap utilizzando l'operatore **new** di C. Prima `Create` di chiamare è anche possibile registrare una classe finestra con la funzione globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) per impostare l'icona e gli stili di classe per il frame.

Utilizzare `Create` la funzione membro per passare i parametri di creazione del frame come argomenti immediati.

`LoadFrame`richiede meno `Create`argomenti di , e recupera invece la maggior parte dei valori predefiniti dalle risorse, tra cui la didascalia, l'icona, la tabella dei tasti di scelta rapida e il menu del frame. Per essere `LoadFrame`accessibili da , tutte queste risorse devono avere lo stesso ID risorsa (ad esempio, IDR_MAINFRAME).

Quando `CMDIChildWnd` un oggetto contiene visualizzazioni e documenti, vengono creati indirettamente dal framework anziché direttamente dal programmatore. L'oggetto `CDocTemplate` orchestra la creazione del frame, la creazione delle visualizzazioni che lo contengono e la connessione delle visualizzazioni al documento appropriato. I parametri `CDocTemplate` del costruttore specificano le `CRuntimeClass` tre classi coinvolte (documento, frame e visualizzazione). Un `CRuntimeClass` oggetto viene utilizzato dal framework per creare dinamicamente nuovi frame quando specificato dall'utente (ad esempio, utilizzando il comando File Nuovo o il comando MDI Window New).

Una classe finestra cornice `CMDIChildWnd` derivata da deve essere dichiarata con DECLARE_DYNCREATE affinché il meccanismo di RUNTIME_CLASS precedente funzioni correttamente.

La `CMDIChildWnd` classe eredita gran parte `CFrameWnd`dell'implementazione predefinita da . Per un elenco dettagliato di queste funzionalità, fare riferimento alla descrizione della classe [CFrameWnd.For](../../mfc/reference/cframewnd-class.md) a detailed list of these features, please refer to the CFrameWnd class description. La `CMDIChildWnd` classe ha le seguenti funzionalità aggiuntive:

- In combinazione `CMultiDocTemplate` con la `CMDIChildWnd` classe, più oggetti dello stesso modello di documento condividono lo stesso menu, salvando le risorse di sistema di Windows.

- Il menu della finestra figlio MDI attualmente attivo sostituisce completamente il menu della finestra cornice MDI e la didascalia della finestra figlio MDI attualmente attiva viene aggiunta alla didascalia della finestra cornice MDI. Per ulteriori esempi di funzioni della finestra figlio MDI implementate insieme `CMDIFrameWnd` a una finestra cornice MDI, vedere la descrizione della classe.

Per eliminare una finestra cornice, non utilizzare l'operatore **delete** di C. Usare invece `CWnd::DestroyWindow`. L'implementazione `CFrameWnd` di `PostNcDestroy` consente di eliminare l'oggetto di C , quando la finestra viene eliminata. Quando l'utente chiude la finestra `OnClose` cornice, `DestroyWindow`il gestore predefinito chiamerà .

Per ulteriori `CMDIChildWnd`informazioni su , vedere [Finestre cornice](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMDIChildWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cmdichildwndcmdichildwnd"></a><a name="cmdichildwnd"></a>CMDIChildWnd::CMDIChildWnd

Chiamata per `CMDIChildWnd` costruire un oggetto.

```
CMDIChildWnd();
```

### <a name="remarks"></a>Osservazioni

Chiamata `Create` per creare la finestra visibile.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMDIChildWnd::Create](#create).

## <a name="cmdichildwndcreate"></a><a name="create"></a>CMDIChildWnd::Crea

Chiamare questa funzione membro per creare una finestra figlio `CMDIChildWnd` MDI di Windows e associarla all'oggetto.

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

*lpszClassName (nome di classe)*<br/>
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows (una struttura [WNDCLASS).](/windows/win32/api/winuser/ns-winuser-wndclassw) Il nome della classe può essere qualsiasi nome registrato con la funzione globale [AfxRegisterWndClass.](application-information-and-management.md#afxregisterwndclass) Deve essere NULL `CMDIChildWnd`per uno standard.

*lpszNomefinestraNome*<br/>
Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra. Utilizzato come testo per la barra del titolo.

*DwStyle (in stile dwStyle)*<br/>
Specifica gli attributi [di stile](../../mfc/reference/styles-used-by-mfc.md#window-styles) della finestra. Lo stile WS_CHILD è obbligatorio.

*Rect*<br/>
Contiene le dimensioni e la posizione della finestra. Il `rectDefault` valore consente a Windows di specificare le dimensioni e la posizione del nuovo `CMDIChildWnd`file .

*pParentWnd (informazioni in due)*<br/>
Specifica l'elemento padre della finestra. Se NULL, viene utilizzata la finestra principale dell'applicazione.

*pContext*<br/>
Specifica un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura. Questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La finestra cornice figlia MDI attualmente attiva può determinare la didascalia della finestra cornice padre. Questa funzionalità è disattivata disattivando il bit di stile FWS_ADDTOTITLE della finestra cornice figlio.

Il framework chiama questa funzione membro in risposta a un comando utente per creare una finestra figlio e il framework utilizza il *pContext* parametro per connettere correttamente la finestra figlio all'applicazione. Quando si `Create`chiama , *pContext* può essere NULL.

### <a name="example"></a>Esempio

Esempio 1:

[!code-cpp[NVC_MFCWindowing#7](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_1.cpp)]

### <a name="example"></a>Esempio

Esempio 2:

[!code-cpp[NVC_MFCWindowing#8](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_2.cpp)]

[!code-cpp[NVC_MFCWindowing#9](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_3.cpp)]

## <a name="cmdichildwndgetmdiframe"></a><a name="getmdiframe"></a>CMDIChildWnd::GetMDIFrame

Chiamare questa funzione per restituire il frame padre MDI.

```
CMDIFrameWnd* GetMDIFrame();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra cornice padre MDI.

### <a name="remarks"></a>Osservazioni

Il frame restituito è costituito `CMDIChildWnd` da due elementi padre rimossi da ed `CMDIChildWnd` è l'elemento padre della finestra di tipo MDICLIENT che gestisce l'oggetto. Chiamare la funzione membro [GetParent](../../mfc/reference/cwnd-class.md#getparent) per restituire il `CMDIChildWnd` padre MDICLIENT immediato dell'oggetto come puntatore temporaneo. `CWnd`

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMDIFrameWnd::MDISetMenu](../../mfc/reference/cmdiframewnd-class.md#mdisetmenu).

## <a name="cmdichildwndmdiactivate"></a><a name="mdiactivate"></a>CMDIChildWnd::MDIActivate

Chiamare questa funzione membro per attivare una finestra figlio MDI indipendentemente dalla finestra cornice MDI.

```
void MDIActivate();
```

### <a name="remarks"></a>Osservazioni

Quando il frame diventa attivo, verrà attivata anche la finestra figlio attivata per l'ultima volta.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMDIFrameWnd::GetWindowMenuPopup](../../mfc/reference/cmdiframewnd-class.md#getwindowmenupopup).

## <a name="cmdichildwndmdidestroy"></a><a name="mdidestroy"></a>CMDIChildWnd::MDIDestroy

Chiamare questa funzione membro per eliminare una finestra figlio MDI.

```
void MDIDestroy();
```

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove il titolo della finestra figlio dalla finestra cornice e disattiva la finestra figlio.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#10](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_4.cpp)]

## <a name="cmdichildwndmdimaximize"></a><a name="mdimaximize"></a>CMDIChildWnd::MDIMassimizza

Chiamare questa funzione membro per ottimizzare una finestra figlio MDI.

```
void MDIMaximize();
```

### <a name="remarks"></a>Osservazioni

Quando una finestra figlio viene ingrandita, Windows la ridimensiona per fare in modo che l'area client riempia l'area client della finestra cornice. Windows inserisce il menu Control della finestra figlio nella barra dei menu del frame in modo che l'utente possa ripristinare o chiudere la finestra figlio e aggiunge il titolo della finestra figlio al titolo della finestra cornice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#11](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_5.cpp)]

## <a name="cmdichildwndmdirestore"></a><a name="mdirestore"></a>CMDIChildWnd::MDIRestore

Chiamare questa funzione membro per ripristinare una finestra figlio MDI da dimensioni ingrandite o ridotte a icona.

```
void MDIRestore();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#12](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_6.cpp)]

## <a name="cmdichildwndsethandles"></a><a name="sethandles"></a>CMDIChildWnd::SetHandlesCMDIChildWnd::SetHandles

Imposta gli handle per le risorse di menu e tasti di scelta rapida.

```
void SetHandles(
    HMENU hMenu,
    HACCEL hAccel);
```

### <a name="parameters"></a>Parametri

*Hmenu*<br/>
Handle di una risorsa di menu.

*hAccel*<br/>
Handle di una risorsa acceleratore.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per impostare le risorse di menu e tasti di scelta rapida utilizzate dall'oggetto finestra figlio MDI.

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC MDIDOCVW](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md)
