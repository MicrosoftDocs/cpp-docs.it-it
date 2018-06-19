---
title: CMDIFrameWnd (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7bb9f87ed5ae3027e7743a36c2484017d6381f95
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33374039"
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
|[CMDIFrameWnd::CreateClient](#createclient)|Crea una finestra **MDICLIENT** finestra per questo `CMDIFrameWnd`. Chiamato dal `OnCreate` funzione membro di `CWnd`.|  
|[CMDIFrameWnd::CreateNewChild](#createnewchild)|Crea una nuova finestra figlio.|  
|[CMDIFrameWnd::GetWindowMenuPopup](#getwindowmenupopup)|Restituisce il menu di scelta rapida finestra.|  
|[CMDIFrameWnd::MDIActivate](#mdiactivate)|Attiva un'altra finestra figlio MDI.|  
|[CMDIFrameWnd::MDICascade](#mdicascade)|Dispone tutte le finestre figlio in un formato in serie.|  
|[CMDIFrameWnd::MDIGetActive](#mdigetactive)|Recupera la finestra figlio MDI attiva, insieme a un flag che indica se l'elemento figlio viene ingrandito.|  
|[CMDIFrameWnd::MDIIconArrange](#mdiiconarrange)|Dispone tutte le finestre figlio documento ridotto a icona.|  
|[CMDIFrameWnd::MDIMaximize](#mdimaximize)|Ingrandisce una finestra figlio MDI.|  
|[CMDIFrameWnd::MDINext](#mdinext)|Attiva la finestra figlio immediatamente dietro la finestra figlio attiva e posiziona la finestra figlio attiva dietro tutte le altre finestre figlio.|  
|[CMDIFrameWnd::MDIPrev](#mdiprev)|Attiva la finestra figlio precedente e la finestra figlio attiva immediatamente sottostante.|  
|[CMDIFrameWnd::MDIRestore](#mdirestore)|Ripristina una finestra figlio MDI da dimensioni ingrandita o ridotta a icona.|  
|[CMDIFrameWnd::MDISetMenu](#mdisetmenu)|Sostituisce il menu di una finestra cornice MDI, il menu di scelta rapida finestra o entrambi.|  
|[CMDIFrameWnd::MDITile](#mditile)|Dispone tutte le finestre figlio in un formato affiancato.|  
  
## <a name="remarks"></a>Note  
 Per creare una finestra cornice MDI utile per l'applicazione, derivare una classe da `CMDIFrameWnd`. Aggiungere variabili membro alla classe derivata per archiviare i dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.  
  
 È possibile creare una finestra cornice MDI chiamando il [crea](../../mfc/reference/cframewnd-class.md#create) o [LoadFrame](../../mfc/reference/cframewnd-class.md#loadframe) funzione membro di `CFrameWnd`.  
  
 Prima di chiamare **crea** o `LoadFrame`, è necessario costruire l'oggetto finestra cornice nell'heap mediante C++ **nuova** operatore. Prima di chiamare **crea** è anche possibile registrare una classe di finestra con il [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale per impostare gli stili di icona e la classe per il frame.  
  
 Utilizzare il **crea** funzione membro per passare i parametri di creazione del frame immediati come argomenti.  
  
 `LoadFrame` richiede argomenti minore rispetto a **crea**e recupera la maggior parte dei relativi valori predefiniti da risorse, tra cui didascalia del frame, icona, tabella di tasti di scelta rapida e menu. A cui accedono `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa (ad esempio, **IDR_MAINFRAME**).  
  
 Anche se **MDIFrameWnd** è derivato da `CFrameWnd`, una classe finestra cornice derivata da `CMDIFrameWnd` non devono essere dichiarato con `DECLARE_DYNCREATE`.  
  
 Il `CMDIFrameWnd` classe eredita gran parte dell'implementazione predefinita da `CFrameWnd`. Per un elenco dettagliato di queste funzionalità, consultare il [CFrameWnd](../../mfc/reference/cframewnd-class.md) descrizione della classe. La `CMDIFrameWnd` classe dispone di funzionalità aggiuntive seguenti:  
  
-   Gestisce una finestra cornice MDI il **MDICLIENT** finestra, riposizionandola insieme alle barre di controllo. La finestra client MDI è padre diretto di finestre cornice figlio MDI. Il **WS_HSCROLL** e **WS_VSCROLL** stili di finestra specificati in un `CMDIFrameWnd` applicare finestra client MDI anziché la finestra cornice principale, pertanto l'utente può scorrere l'area client MDI (come in Windows Programma di gestione, ad esempio).  
  
-   Una finestra cornice MDI possiede un menu predefinito che viene utilizzato come barra dei menu quando non è attiva alcuna finestra figlio MDI. Quando è presente un figlio MDI attivo, la barra dei menu della finestra cornice MDI viene sostituita automaticamente dal menu finestra figlio MDI.  
  
-   Una finestra cornice MDI funziona in combinazione con la finestra figlio MDI corrente, se presente. Ad esempio, i messaggi di comando vengono delegati al figlio MDI attivo prima la finestra cornice MDI.  
  
-   Una finestra cornice MDI ha gestori predefiniti per i comandi di menu finestra standard seguenti:  
  
    - **ID_WINDOW_TILE_VERT**  
  
    - **ID_WINDOW_TILE_HORZ**  
  
    - **ID_WINDOW_CASCADE**  
  
    - **ID_WINDOW_ARRANGE**  
  
-   Una finestra cornice MDI ha anche un'implementazione di **ID_WINDOW_NEW**, che consente di creare un nuovo frame e visualizzazione per il documento corrente. Un'applicazione può eseguire l'override di queste implementazioni di comando predefinito per personalizzare gestione finestra MDI.  
  
 Non utilizzare C++ **eliminare** operatore da eliminare definitivamente una finestra cornice. In alternativa, usare `CWnd::DestroyWindow`. Il `CFrameWnd` implementazione di `PostNcDestroy` eliminerà l'oggetto C++ quando la finestra viene eliminata. Quando l'utente chiude la finestra cornice, il valore predefinito `OnClose` gestore verrà chiamato `DestroyWindow`.  
  
 Per ulteriori informazioni su `CMDIFrameWnd`, vedere [finestre cornice](../../mfc/frame-windows.md).  
  
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
 Chiamare il **crea** o `LoadFrame` funzione membro per creare la finestra cornice MDI visibile.  
  
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
 `lpCreateStruct`  
 Un puntatore di tipo long a un [CREATESTRUCT](../../mfc/reference/createstruct-structure.md) struttura.  
  
 `pWindowMenu`  
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
 `pClass`  
 La classe in fase di esecuzione della finestra figlio da creare.  
  
 *nResource*  
 L'ID delle risorse condivise associato alla finestra figlio.  
  
 `hMenu`  
 Menu della finestra figlio.  
  
 `hAccel`  
 Tasti di scelta rapida della finestra figlio.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per creare finestre di una finestra cornice MDI figlio.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#15](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_3.cpp)]  
  
 In questo esempio è tratto dall'articolo della Knowledge Base Q201045, "procedura: aggiungere più tipi di finestre MDI un Non-documento/visualizzazione App." Articoli della Knowledge Base sono disponibili in [ http://support.microsoft.com ](http://support.microsoft.com/).  
  
##  <a name="getwindowmenupopup"></a>  CMDIFrameWnd::GetWindowMenuPopup  
 Chiamare questa funzione membro per ottenere un handle per il menu a comparsa corrente denominato "Finestra" (menu a comparsa con voci di menu per la gestione delle finestre MDI).  
  
```  
virtual HMENU GetWindowMenuPopup(HMENU hMenuBar);
```  
  
### <a name="parameters"></a>Parametri  
 *hMenuBar*  
 Barra dei menu corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Menu a comparsa finestra se uno è presente. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita esegue la ricerca di un menu a comparsa contenente i comandi del menu finestra standard, ad esempio **ID_WINDOW_NEW** e **ID_WINDOW_TILE_HORZ**.  
  
 Eseguire l'override di questa funzione membro se si dispone di un menu finestra che non utilizza l'ID di comando di menu standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#16](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_4.cpp)]  
  
##  <a name="mdiactivate"></a>  CMDIFrameWnd::MDIActivate  
 Attiva un'altra finestra figlio MDI.  
  
```  
void MDIActivate(CWnd* pWndActivate);
```  
  
### <a name="parameters"></a>Parametri  
 *pWndActivate*  
 Punta alla finestra figlio MDI da attivare.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro invia il [WM_MDIACTIVATE](../../mfc/reference/cwnd-class.md#onmdiactivate) messaggio sia la finestra figlio viene attivata e la finestra figlio viene disattivato.  
  
 Si tratta dello stesso messaggio viene inviato se l'utente sposta lo stato attivo su una finestra figlio MDI tramite mouse o tastiera.  
  
> [!NOTE]
>  Una finestra figlio MDI viene attivata indipendentemente dalla finestra cornice MDI. Quando il frame diventa attivo, la finestra figlio che è stata attivata l'ultima volta viene inviata un [WM_NCACTIVATE](../../mfc/reference/cwnd-class.md#onncactivate) messaggio per disegnare una cornice di finestra attiva e barra del titolo, ma non riceve un altro `WM_MDIACTIVATE` messaggio.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CMDIFrameWnd::GetWindowMenuPopup](#getwindowmenupopup).  
  
##  <a name="mdicascade"></a>  CMDIFrameWnd::MDICascade  
 Dispone tutte le finestre figlio MDI in un formato di propagazione.  
  
```  
void MDICascade();  
void MDICascade(int nType);
```  
  
### <a name="parameters"></a>Parametri  
 `nType`  
 Specifica un flag di propagazione. È possibile specificare solo il flag seguente: `MDITILE_SKIPDISABLED`, che impedisce disabilitato le finestre figlio MDI viene collegato in serie.  
  
### <a name="remarks"></a>Note  
 La prima versione di `MDICascade`, senza parametri, viene propagata a tutte le finestre figlio MDI, inclusi quelli disabilitati. La seconda versione non facoltativamente non cascade disabilitato MDI figlio windows se si specifica `MDITILE_SKIPDISABLED` per il `nType` parametro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#17](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_5.cpp)]  
  
##  <a name="mdigetactive"></a>  CMDIFrameWnd::MDIGetActive  
 Recupera l'attiva finestra figlio MDI corrente, insieme a un flag che indica se la finestra figlio viene ingrandita.  
  
```  
CMDIChildWnd* MDIGetActive(BOOL* pbMaximized = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *pbMaximized*  
 Un puntatore a un **BOOL** valore restituito. Impostare su **TRUE** nell'output restituito se la finestra è ingrandita; in caso contrario **FALSE**.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra figlio MDI attiva.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CMDIChildWnd::MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#mdimaximize).  
  
##  <a name="mdiiconarrange"></a>  CMDIFrameWnd::MDIIconArrange  
 Dispone tutte le finestre figlio documento ridotto a icona.  
  
```  
void MDIIconArrange();
```  
  
### <a name="remarks"></a>Note  
 Non si applica finestre figlio che non vengono ridotte a icona.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CMDIFrameWnd::MDICascade](#mdicascade).  
  
##  <a name="mdimaximize"></a>  CMDIFrameWnd::MDIMaximize  
 Ingrandisce la finestra MDI figlio specificata.  
  
```  
void MDIMaximize(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta alla finestra per ottimizzare.  
  
### <a name="remarks"></a>Note  
 Quando una finestra figlio è ingrandita, viene ridimensionata in modo che l'area client di riempimento della finestra del client Windows. Vengono inseriti i menu di controllo della finestra figlio nella barra dei menu del frame in modo che l'utente può ripristinare o chiudere la finestra figlio. Aggiunge inoltre il titolo della finestra figlio al titolo della finestra cornice.  
  
 Se un'altra finestra del figlio MDI viene attivata quando la finestra figlio MDI attualmente attiva è ingrandita, Windows consente di ripristinare l'elemento figlio attualmente attivo e ingrandisce la finestra figlio appena attivato.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CMDIChildWnd::MDIMaximize](../../mfc/reference/cmdichildwnd-class.md#mdimaximize).  
  
##  <a name="mdinext"></a>  CMDIFrameWnd::MDINext  
 Attiva la finestra figlio immediatamente dietro la finestra figlio attiva e posiziona la finestra figlio attiva dietro tutte le altre finestre figlio.  
  
```  
void MDINext();
```  
  
### <a name="remarks"></a>Note  
 Se la finestra figlio MDI attualmente attiva è ingrandita, la funzione membro consente di ripristinare l'elemento figlio attualmente attivo e ottimizza il figlio appena attivato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#18](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_6.cpp)]  
  
##  <a name="mdiprev"></a>  CMDIFrameWnd::MDIPrev  
 Attiva la finestra figlio precedente e la finestra figlio attiva immediatamente sottostante.  
  
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
 `pWnd`  
 Punta alla finestra da ripristinare.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CMDIChildWnd::MDIRestore](../../mfc/reference/cmdichildwnd-class.md#mdirestore).  
  
##  <a name="mdisetmenu"></a>  CMDIFrameWnd::MDISetMenu  
 Sostituisce il menu di una finestra cornice MDI, il menu di scelta rapida finestra o entrambi.  
  
```  
CMenu* MDISetMenu(
    CMenu* pFrameMenu,  
    CMenu* pWindowMenu);
```  
  
### <a name="parameters"></a>Parametri  
 *pFrameMenu*  
 Specifica il menu del nuovo menu finestra cornice. Se **NULL**, il menu non viene modificato.  
  
 `pWindowMenu`  
 Specifica il menu del menu a comparsa nuova finestra. Se **NULL**, il menu non viene modificato.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al menu finestra cornice sostituito da questo messaggio. Il puntatore può essere temporaneo e non deve essere memorizzato per usi successivi.  
  
### <a name="remarks"></a>Note  
 Dopo la chiamata `MDISetMenu`, un'applicazione deve chiamare il [DrawMenuBar](../../mfc/reference/cwnd-class.md#drawmenubar) funzione membro di `CWnd` per aggiornare la barra dei menu.  
  
 Se questa chiamata sostituisce il menu di scelta rapida finestra, le voci di menu finestra figlio MDI vengono rimossi dal menu finestra precedente e aggiunto al menu popup nuova finestra.  
  
 Se una finestra figlio MDI viene ingrandita e questa chiamata sostituisce il menu finestra cornice MDI, i controlli menu e il ripristino di controllo vengono rimossi dal menu finestra cornice precedente e aggiunto al nuovo menu.  
  
 Non chiamare questa funzione membro se si utilizza il framework per gestire le finestre figlio MDI.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#19](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_7.cpp)]  
  
 [!code-cpp[NVC_MFCWindowing#20](../../mfc/reference/codesnippet/cpp/cmdiframewnd-class_8.cpp)]  
  
##  <a name="mditile"></a>  CMDIFrameWnd::MDITile  
 Dispone tutte le finestre figlio in un formato affiancato.  
  
```  
void MDITile();  
void MDITile(int nType);
```  
  
### <a name="parameters"></a>Parametri  
 `nType`  
 Specifica un flag di affiancamento. Questo parametro può essere uno dei flag seguenti:  
  
- `MDITILE_HORIZONTAL` I riquadri finestre figlio MDI in modo che una finestra viene visualizzato sopra un altro.  
  
- `MDITILE_SKIPDISABLED` Impedisce che le finestre figlio MDI disabilitate viene affiancata.  
  
- `MDITILE_VERTICAL` I riquadri finestre figlio MDI in modo che una finestra viene visualizzata accanto a altro.  
  
### <a name="remarks"></a>Note  
 La prima versione di `MDITile`, senza parametri, Affianca verticalmente in Windows 3.1 e versioni successive di windows. La seconda versione Affianca finestre orizzontalmente o verticalmente, in base al valore di `nType` parametro.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CMDIFrameWnd::MDICascade](#mdicascade).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [Esempio MFC MDIDOCVW](../../visual-cpp-samples.md)   
 [Esempio MFC SNAPVW](../../visual-cpp-samples.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Classe CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)
