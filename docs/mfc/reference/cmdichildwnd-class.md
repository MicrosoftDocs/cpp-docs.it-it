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
ms.openlocfilehash: 0acd42db19151001d9e292561ef20e469f9e14ea
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222966"
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
|[CMDIChildWnd:: CMDIChildWnd](#cmdichildwnd)|Costruisce un oggetto `CMDIChildWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMDIChildWnd:: create](#create)|Crea la finestra figlio MDI di Windows associata all' `CMDIChildWnd` oggetto.|
|[CMDIChildWnd:: GetMDIFrame](#getmdiframe)|Restituisce il frame MDI padre della finestra client MDI.|
|[CMDIChildWnd:: MDIActivate](#mdiactivate)|Attiva questa finestra figlio MDI.|
|[CMDIChildWnd:: MDIDestroy](#mdidestroy)|Elimina definitivamente questa finestra figlio MDI.|
|[CMDIChildWnd:: MDIMaximize](#mdimaximize)|Ingrandisce questa finestra figlio MDI.|
|[CMDIChildWnd:: MDIRestore](#mdirestore)|Ripristina questa finestra figlio MDI dalla dimensione ingrandita o ridotta a icona.|
|[CMDIChildWnd:: selettori](#sethandles)|Imposta gli handle per le risorse di menu e tasti di scelta rapida.|

## <a name="remarks"></a>Osservazioni

Una finestra figlio MDI è simile a una tipica finestra cornice, ad eccezione del fatto che la finestra figlio MDI viene visualizzata all'interno di una finestra cornice MDI anziché sul desktop. Una finestra figlio MDI non dispone di una barra dei menu propria, ma condivide il menu della finestra cornice MDI. Il Framework modifica automaticamente il menu cornice MDI per rappresentare la finestra figlio MDI attualmente attiva.

Per creare una finestra figlio MDI utile per l'applicazione, derivare una classe da `CMDIChildWnd` . Aggiungere le variabili membro alla classe derivata per archiviare i dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.

Esistono tre modi per costruire una finestra figlio MDI:

- Costruirla direttamente usando `Create` .

- Costruirla direttamente usando `LoadFrame` .

- Costruirlo indirettamente tramite un modello di documento.

Prima di chiamare `Create` o `LoadFrame` , è necessario creare l'oggetto finestra cornice nell'heap usando l' **`new`** operatore C++. Prima `Create` di chiamare, è anche possibile registrare una classe della finestra con la funzione globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) per impostare gli stili dell'icona e della classe per il frame.

Usare la `Create` funzione membro per passare i parametri di creazione del frame come argomenti immediati.

`LoadFrame`richiede un numero di argomenti inferiore a quello di `Create` e recupera invece la maggior parte dei valori predefiniti dalle risorse, incluse la didascalia, l'icona, la tabella di tasti di scelta rapida e il menu del frame. Per essere accessibile da `LoadFrame` , tutte queste risorse devono avere lo stesso ID di risorsa, ad esempio IDR_MAINFRAME.

Quando un `CMDIChildWnd` oggetto contiene viste e documenti, questi vengono creati indirettamente dal Framework anziché direttamente dal programmatore. L' `CDocTemplate` oggetto orchestra la creazione del frame, la creazione delle visualizzazioni contenenti e la connessione delle visualizzazioni al documento appropriato. I parametri del `CDocTemplate` Costruttore specificano le `CRuntimeClass` delle tre classi necessarie (documento, frame e visualizzazione). Un `CRuntimeClass` oggetto viene usato dal Framework per creare in modo dinamico nuovi frame quando specificato dall'utente (ad esempio, usando il comando file nuovo o il nuovo comando finestra MDI).

Una classe della finestra cornice derivata da `CMDIChildWnd` deve essere dichiarata con DECLARE_DYNCREATE affinché il meccanismo RUNTIME_CLASS precedente funzioni correttamente.

La `CMDIChildWnd` classe eredita gran parte dell'implementazione predefinita da `CFrameWnd` . Per un elenco dettagliato di queste funzionalità, consultare la descrizione della classe [CFrameWnd](../../mfc/reference/cframewnd-class.md) . La `CMDIChildWnd` classe presenta le funzionalità aggiuntive seguenti:

- Insieme alla `CMultiDocTemplate` classe, più oggetti dello `CMDIChildWnd` stesso modello di documento condividono lo stesso menu, salvando le risorse di sistema di Windows.

- Il menu della finestra figlio MDI attualmente attivo sostituisce completamente il menu della finestra cornice MDI e la didascalia della finestra figlio MDI attualmente attiva viene aggiunta alla didascalia della finestra cornice MDI. Per ulteriori esempi di funzioni finestra figlio MDI implementate insieme a una finestra cornice MDI, vedere la descrizione della `CMDIFrameWnd` classe.

Non usare l'operatore C++ **`delete`** per eliminare definitivamente una finestra cornice. Usare invece `CWnd::DestroyWindow`. L' `CFrameWnd` implementazione di eliminerà `PostNcDestroy` l'oggetto C++ quando la finestra viene distrutta. Quando l'utente chiude la finestra cornice, `OnClose` viene chiamato il gestore predefinito `DestroyWindow` .

Per altre informazioni su `CMDIChildWnd` , vedere [finestre cornice](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMDIChildWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cmdichildwndcmdichildwnd"></a><a name="cmdichildwnd"></a>CMDIChildWnd:: CMDIChildWnd

Chiamare per costruire un `CMDIChildWnd` oggetto.

```
CMDIChildWnd();
```

### <a name="remarks"></a>Osservazioni

Chiamare `Create` per creare la finestra visibile.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMDIChildWnd:: create](#create).

## <a name="cmdichildwndcreate"></a><a name="create"></a>CMDIChildWnd:: create

Chiamare questa funzione membro per creare una finestra figlio MDI di Windows e collegarla all' `CMDIChildWnd` oggetto.

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
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows (struttura [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) ). Il nome della classe può essere qualsiasi nome registrato con la funzione globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) . Deve essere NULL per uno standard `CMDIChildWnd` .

*lpszWindowName*<br/>
Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra. Utilizzato come testo per la barra del titolo.

*dwStyle*<br/>
Specifica gli attributi di [stile](../../mfc/reference/styles-used-by-mfc.md#window-styles) della finestra. Lo stile del WS_CHILD è obbligatorio.

*Rect*<br/>
Contiene le dimensioni e la posizione della finestra. Il `rectDefault` valore consente a Windows di specificare le dimensioni e la posizione del nuovo oggetto `CMDIChildWnd` .

*pParentWnd*<br/>
Specifica l'elemento padre della finestra. Se è NULL, viene utilizzata la finestra principale dell'applicazione.

*pContext*<br/>
Specifica una struttura [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) . Questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La finestra cornice figlio MDI attualmente attiva può determinare la didascalia della finestra cornice padre. Questa funzionalità è disabilitata disattivando il bit di stile FWS_ADDTOTITLE della finestra cornice figlio.

Il Framework chiama questa funzione membro in risposta a un comando utente per creare una finestra figlio e il Framework usa il parametro *pContext* per connettere correttamente la finestra figlio all'applicazione. Quando si chiama `Create` , *pContext* può essere null.

### <a name="example"></a>Esempio

Esempio 1:

[!code-cpp[NVC_MFCWindowing#7](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_1.cpp)]

### <a name="example"></a>Esempio

Esempio 2:

[!code-cpp[NVC_MFCWindowing#8](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_2.cpp)]

[!code-cpp[NVC_MFCWindowing#9](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_3.cpp)]

## <a name="cmdichildwndgetmdiframe"></a><a name="getmdiframe"></a>CMDIChildWnd:: GetMDIFrame

Chiamare questa funzione per restituire il frame padre MDI.

```
CMDIFrameWnd* GetMDIFrame();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra cornice padre MDI.

### <a name="remarks"></a>Osservazioni

Il frame restituito è costituito da due elementi `CMDIChildWnd` padre rimossi da ed è l'elemento padre della finestra di tipo MdiClient che gestisce l' `CMDIChildWnd` oggetto. Chiamare la funzione membro [GetParent](../../mfc/reference/cwnd-class.md#getparent) per restituire l' `CMDIChildWnd` elemento padre MdiClient immediato dell'oggetto come `CWnd` puntatore temporaneo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMDIFrameWnd:: MDISetMenu](../../mfc/reference/cmdiframewnd-class.md#mdisetmenu).

## <a name="cmdichildwndmdiactivate"></a><a name="mdiactivate"></a>CMDIChildWnd:: MDIActivate

Chiamare questa funzione membro per attivare una finestra figlio MDI indipendentemente dalla finestra cornice MDI.

```cpp
void MDIActivate();
```

### <a name="remarks"></a>Osservazioni

Quando il frame diventa attivo, viene attivata anche la finestra figlio che è stata attivata l'ultima volta.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMDIFrameWnd:: GetWindowMenuPopup](../../mfc/reference/cmdiframewnd-class.md#getwindowmenupopup).

## <a name="cmdichildwndmdidestroy"></a><a name="mdidestroy"></a>CMDIChildWnd:: MDIDestroy

Chiamare questa funzione membro per eliminare definitivamente una finestra figlio MDI.

```cpp
void MDIDestroy();
```

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove il titolo della finestra figlio dalla finestra cornice e disattiva la finestra figlio.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#10](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_4.cpp)]

## <a name="cmdichildwndmdimaximize"></a><a name="mdimaximize"></a>CMDIChildWnd:: MDIMaximize

Chiamare questa funzione membro per ingrandire una finestra figlio MDI.

```cpp
void MDIMaximize();
```

### <a name="remarks"></a>Osservazioni

Quando una finestra figlio viene ingrandita, Windows la ridimensiona per fare in modo che la relativa area client riempia l'area client della finestra cornice. Windows posiziona il menu di controllo della finestra figlio sulla barra dei menu del frame in modo che l'utente possa ripristinare o chiudere la finestra figlio e aggiungere il titolo della finestra figlio al titolo della finestra cornice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#11](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_5.cpp)]

## <a name="cmdichildwndmdirestore"></a><a name="mdirestore"></a>CMDIChildWnd:: MDIRestore

Chiamare questa funzione membro per ripristinare una finestra figlio MDI dalla dimensione ingrandita o ridotta a icona.

```cpp
void MDIRestore();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#12](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_6.cpp)]

## <a name="cmdichildwndsethandles"></a><a name="sethandles"></a>CMDIChildWnd:: selettori

Imposta gli handle per le risorse di menu e tasti di scelta rapida.

```cpp
void SetHandles(
    HMENU hMenu,
    HACCEL hAccel);
```

### <a name="parameters"></a>Parametri

*hMenu*<br/>
Handle di una risorsa di menu.

*hAccel*<br/>
Handle di una risorsa del tasto di scelta rapida.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per impostare le risorse di menu e acceleratore utilizzate dall'oggetto finestra figlio MDI.

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[MDIDOCVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[SNAPVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md)
