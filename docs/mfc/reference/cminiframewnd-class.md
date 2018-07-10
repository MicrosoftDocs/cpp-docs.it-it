---
title: Classe CMiniFrameWnd | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMiniFrameWnd
- AFXWIN/CMiniFrameWnd
- AFXWIN/CMiniFrameWnd::CMiniFrameWnd
- AFXWIN/CMiniFrameWnd::Create
- AFXWIN/CMiniFrameWnd::CreateEx
dev_langs:
- C++
helpviewer_keywords:
- CMiniFrameWnd [MFC], CMiniFrameWnd
- CMiniFrameWnd [MFC], Create
- CMiniFrameWnd [MFC], CreateEx
ms.assetid: b8f534ed-0532-4d8e-9657-5595cf677749
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 766faaa50e4efead96ff72c67aee71fec2386b18
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37038584"
---
# <a name="cminiframewnd-class"></a>Classe CMiniFrameWnd
Rappresenta una finestra cornice di mezza altezza visualizzata in genere intorno alle barre degli strumenti mobili.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMiniFrameWnd : public CFrameWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMiniFrameWnd::CMiniFrameWnd](#cminiframewnd)|Costruisce un oggetto `CMiniFrameWnd`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMiniFrameWnd::Create](#create)|Crea un `CMiniFrameWnd` oggetto dopo la costruzione.|  
|[CMiniFrameWnd::CreateEx](#createex)|Crea un `CMiniFrameWnd` oggetto (con opzioni aggiuntive) dopo la costruzione.|  
  
## <a name="remarks"></a>Note  
 Queste finestre con mini-cornice si comportano come finestre cornice normali, ad eccezione del fatto che siano privi di ingrandire/ridurre al minimo i pulsanti o i menu e sono disponibili solo a singolo clic sul menu di sistema per ignorare tali.  
  
 Per utilizzare un `CMiniFrameWnd` di oggetto, innanzitutto definire l'oggetto. Chiamare quindi il [crea](#create) funzione membro per visualizzare la finestra con mini-cornice.  
  
 Per ulteriori informazioni su come usare `CMiniFrameWnd` oggetti, vedere l'articolo [ancoraggio e barre degli strumenti mobile](../../mfc/docking-and-floating-toolbars.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 `CMiniFrameWnd`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cminiframewnd"></a>  CMiniFrameWnd::CMiniFrameWnd  
 Costruisce un `CMiniFrameWnd` dell'oggetto, ma non viene creata la finestra.  
  
```  
CMiniFrameWnd();
```  
  
### <a name="remarks"></a>Note  
 Per creare la finestra, chiamare [CMiniFrameWnd::Create](#create).  
  
##  <a name="create"></a>  CMiniFrameWnd::Create  
 Crea la finestra con mini-cornice di Windows e lo collega al `CMiniFrameWnd` oggetto.  
  
```  
virtual BOOL Create(
    LPCTSTR lpClassName,  
    LPCTSTR lpWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd = NULL,  
    UINT nID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *lpClassName*  
 Punta a una stringa di caratteri con terminazione null che indica il nome di classe di Windows. Il nome della classe può essere qualsiasi nome registrato con globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) (funzione). Se **NULL**, la classe della finestra verrà registrata automaticamente dal framework. MFC fornisce la classe predefinita stili e gli attributi seguenti:  
  
-   Set di bit di stile **CS_DBLCLKS**, che invia fare doppio clic su messaggi alla routine della finestra quando l'utente fa doppio clic del mouse.  
  
-   Set di bit di stile **CS_HREDRAW** e **CS_VREDRAW**, cui indirizzare il contenuto dell'area client ridisegno quando la finestra di modifica delle dimensioni.  
  
-   Imposta il cursore di classe per lo standard di Windows **IDC_ARROW**.  
  
-   Imposta il pennello di sfondo della classe **NULL**, pertanto la finestra non cancellerà lo sfondo.  
  
-   Imposta l'icona di classe per l'icona del logo Windows standard, che salutano flag.  
  
-   Imposta la finestra per le dimensioni predefinite e la posizione, come indicato da Windows.  
  
 *lpWindowName*  
 Punta a una stringa di caratteri con terminazione null che contiene il nome della finestra.  
  
 *dwStyle*  
 Specifica gli attributi di stile della finestra. Questi possono includere gli stili di finestra standard e uno o più degli stili speciali seguenti:  
  
- **MFS_MOVEFRAME** consente la finestra con mini-cornice da spostare, fare clic sul bordo della finestra, non solo la didascalia.  
  
- **MFS_4THICKFRAME** disabilita il ridimensionamento della finestra con mini-cornice.  
  
- **MFS_SYNCACTIVE** Sincronizza l'attivazione della finestra con mini-cornice per l'attivazione della relativa finestra padre.  
  
- **MFS_THICKFRAME** consente la finestra con mini-cornice essere dimensionato piccolo consentire il contenuto dell'area client.  
  
- **MFS_BLOCKSYSMENU** disabilita l'accesso per i menu di sistema e il controllo e li converte in parte della didascalia (barra del titolo).  
  
 Vedere [CWnd:: Create](../../mfc/reference/cwnd-class.md#create) per una descrizione dei valori di stile possibile della finestra. La combinazione tipico utilizzato per le finestre con mini-cornice **WS_POPUP&#124;WS_CAPTION&#124;WS_SYSMENU**.  
  
 *Rect*  
 Oggetto `RECT` struttura che specifica le dimensioni desiderate della finestra.  
  
 *pParentWnd*  
 Punta alla finestra padre. Uso **NULL** per finestre di primo livello.  
  
 *nID*  
 Se la finestra con mini-cornice viene creata come finestra figlio, si tratta dell'identificatore del controllo figlio. in caso contrario 0.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 **Creare** Inizializza la finestra nome della classe e nome della finestra e registra i valori predefiniti per lo stile e padre.  
  
##  <a name="createex"></a>  CMiniFrameWnd::CreateEx  
 Crea un oggetto `CMiniFrameWnd`.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    LPCTSTR lpClassName,  
    LPCTSTR lpWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd = NULL,  
    UINT nID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *dwExStyle*  
 Specifica lo stile esteso del `CMiniFrameWnd` viene creato. Applicare qualsiasi il [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) alla finestra.  
  
 *lpClassName*  
 Punta alla stringa di caratteri con terminazione null che indica il nome di classe di Windows (un [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) struttura). Il nome della classe può essere qualsiasi nome registrato con globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione o uno dei nomi di classe di controlli predefiniti. Non deve essere **NULL**.  
  
 *lpWindowName*  
 Punta a una stringa di caratteri con terminazione null che contiene il nome della finestra.  
  
 *dwStyle*  
 Specifica gli attributi di stile della finestra. Vedere [stili Window](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [CWnd:: Create](../../mfc/reference/cwnd-class.md#create) per una descrizione dei valori possibili.  
  
 *Rect*  
 Le dimensioni e posizione della finestra, in coordinate client della *pParentWnd*.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre.  
  
 *nID*  
 Identificatore della finestra figlio.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Il `CreateEx` i parametri specificano il **WNDCLASS**, stile della finestra e (facoltativamente) iniziale posizione e le dimensioni della finestra. `CreateEx` Specifica inoltre la finestra padre (se presente) e ID.  
  
 Quando si `CreateEx` viene eseguita, Windows invia i [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo), [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), e [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate) messaggi nella finestra.  
  
 Per estendere la gestione dei messaggi predefinito, derivare una classe da `CMiniFrameWnd`, aggiungere una mappa messaggi per la nuova classe e forniscono le funzioni membro per i messaggi precedenti. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.  
  
 Eseguire l'override ulteriormente **su * * * messaggio* gestori per aggiungere ulteriori funzionalità alla classe derivata del messaggio.  
  
 Se il **WS_VISIBLE** stile viene specificato, Windows invia la finestra di tutti i messaggi necessari per attivare e visualizzare la finestra. Se lo stile della finestra consente di specificare una barra del titolo, il titolo della finestra a cui punta il *lpszWindowName* parametro viene visualizzato nella barra del titolo.  
  
 Il *dwStyle* parametro può essere qualsiasi combinazione di [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).  
  
 Il vecchio stile tavolozza della casella degli strumenti di windows non sono più supportate. Il vecchio stile, che non conteneva un pulsante Chiudi "X", è supportato durante l'esecuzione di un'applicazione MFC in versioni precedenti di Windows, ma non è più supportata in Visual C++ .NET. Solo i nuovi `WS_EX_TOOLWINDOW` stile è ora supportata; per una descrizione di questo stile, vedere [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).  
  
## <a name="see-also"></a>Vedere anche  
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)
