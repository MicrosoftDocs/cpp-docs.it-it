---
title: Funzioni globali di controllo composito | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlhost/ATL::AtlAxDialogBox
- atlhost/ATL::AtlAxCreateDialog
- atlhost/ATL::AtlAxCreateControl
- atlhost/ATL::AtlAxCreateControlEx
- atlhost/ATL::AtlAxCreateControlLic
- atlhost/ATL::AtlAxCreateControlLicEx
- atlhost/ATL::AtlAxAttachControl
- atlhost/ATL::AtlAxGetHost
- atlhost/ATL::AtlAxGetControl
- atlhost/ATL::AtlSetChildSite
- atlhost/ATL::AtlAxWinInit
- atlhost/ATL::AtlAxWinTerm
- atlhost/ATL::AtlGetObjectSourceInterface
dev_langs:
- C++
helpviewer_keywords:
- composite controls, global functions
ms.assetid: 536884cd-e863-4c7a-ab0a-604dc60a0bbe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1d433c76e054b16491ab7586d6107b4931dc2915
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43203716"
---
# <a name="composite-control-global-functions"></a>Funzioni globali di controllo composito
Queste funzioni forniscono il supporto per la creazione di finestre di dialogo e per la creazione, hosting e gestione delle licenze dei controlli ActiveX.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel Runtime di Windows.  
  
|||  
|-|-|  
|[AtlAxDialogBox](#atlaxdialogbox)|Crea una finestra di dialogo modale da un modello di finestra di dialogo fornito dall'utente. La finestra di dialogo risultante può contenere i controlli ActiveX.|  
|[AtlAxCreateDialog](#atlaxcreatedialog)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo fornito dall'utente. La finestra di dialogo risultante può contenere i controlli ActiveX.|  
|[AtlAxCreateControl](#atlaxcreatecontrol)|Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.|  
|[AtlAxCreateControlEx](#atlaxcreatecontrolex)|Crea un controllo ActiveX, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore di interfaccia (o puntatori) dal controllo.|  
|[AtlAxCreateControlLic](#atlaxcreatecontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.|  
|[AtlAxCreateControlLicEx](#atlaxcreatecontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore di interfaccia (o puntatori) dal controllo.|  
|[AtlAxAttachControl](#atlaxattachcontrol)|Associa un controllo creato in precedenza alla finestra specificata.|  
|[AtlAxGetHost](#atlaxgethost)|Consente di ottenere un puntatore a interfaccia diretto per il contenitore per una finestra specifica (se presente), dato il relativo handle.|  
|[AtlAxGetControl](#atlaxgetcontrol)|Consente di ottenere un puntatore a interfaccia diretto per il controllo contenuto all'interno di una finestra specifica (se presente), dato il relativo handle.|  
|[AtlSetChildSite](#atlsetchildsite)|Inizializza il `IUnknown` del sito figlio.|  
|[AtlAxWinInit](#atlaxwininit)|Inizializza il codice di hosting per gli oggetti AxWin.|  
|[AtlAxWinTerm](#atlaxwinterm)|Non inizializza il codice di hosting per gli oggetti AxWin.|  
|[AtlGetObjectSourceInterface](#atlgetobjectsourceinterface)|Restituisce informazioni sull'interfaccia di origine predefinita di un oggetto.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlhost  

##  <a name="atlaxdialogbox"></a>  AtlAxDialogBox  
 Crea una finestra di dialogo modale da un modello di finestra di dialogo fornito dall'utente.  
   
```
ATLAPI_(int) AtlAxDialogBox(
    HINSTANCE hInstance,
    LPCWSTR lpTemplateName,
    HWND hWndParent,
    DLGPROC lpDialogProc,
    LPARAM dwInitParam);
```  
  
### <a name="parameters"></a>Parametri  
 *hInstance*  
 [in] Identifica un'istanza del modulo il cui file eseguibile contiene il modello di finestra di dialogo.  
  
 *lpTemplateName*  
 [in] Identifica il modello di finestra di dialogo. Questo parametro è il puntatore a una stringa di caratteri con terminazione null che specifica il nome del modello della finestra di dialogo o un valore intero che specifica l'identificatore di risorsa del modello della finestra di dialogo. Se il parametro specifica un identificatore di risorsa, la parola più significativa deve essere zero e la parola meno significativa deve contenere l'identificatore. È possibile usare la [MAKEINTRESOURCE](https://msdn.microsoft.com/library/windows/desktop/ms648029) macro per creare questo valore.  
  
 *hWndParent*  
 [in] Identifica la finestra proprietaria la finestra di dialogo.  
  
 *lpDialogProc*  
 [in] Punta alla routine della finestra di dialogo. Per altre informazioni sulla procedura di finestra di dialogo, vedere [DialogProc](https://msdn.microsoft.com/library/windows/desktop/ms645469).  
  
 *dwInitParam*  
 [in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del messaggio WM_INITDIALOG.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Per usare `AtlAxDialogBox` con un modello di finestra di dialogo che contiene un controllo ActiveX, specificare una stringa valida di CLSID, APPID o URL come il *testo* campo il **controllo** sezione della risorsa finestra di dialogo, insieme a " Atlaxwinlic80 "come il *nome della classe* campo nella stessa sezione. Di seguito è illustrato quali valido **controllo** sezione potrebbe essere simile:  
  
```  
CONTROL    "{04FE35E9-ADBC-4f1d-83FE-8FA4D1F71C7F}", IDC_TEST,  
    "AtlAxWin80", WS_GROUP | WS_TABSTOP, 0, 0, 100, 100  
```  
  
 Per altre informazioni su come modificare gli script di risorsa, vedere [procedura: aprire un File di Script di risorsa in formato testo](../../windows/how-to-open-a-resource-script-file-in-text-format.md). Per altre informazioni sulle istruzioni di definizione di risorsa di controllo, vedere [parametri comuni di controllo](/windows/desktop/menurc/common-control-parameters) in Windows SDK *: SDK Tools*.  
  
 Per altre informazioni sulle finestre di dialogo in generale, consultare [DialogBox](/windows/desktop/api/winuser/nf-winuser-dialogboxa) e [CreateDialogParam](/windows/desktop/api/winuser/nf-winuser-createdialogparama) nel SDK di Windows.  
  
##  <a name="atlaxcreatedialog"></a>  AtlAxCreateDialog  
 Crea una finestra di dialogo non modale da un modello di finestra di dialogo fornito dall'utente.  
  
```
ATLAPI_(HWND) AtlAxCreateDialog(
    HINSTANCE hInstance,
    LPCWSTR lpTemplateName,
    HWND hWndParent,
    DLGPROC lpDialogProc,
    LPARAM dwInitParam);
```  
  
### <a name="parameters"></a>Parametri  
 *hInstance*  
 [in] Identifica un'istanza del modulo il cui file eseguibile contiene il modello di finestra di dialogo.  
  
 *lpTemplateName*  
 [in] Identifica il modello di finestra di dialogo. Questo parametro è il puntatore a una stringa di caratteri con terminazione null che specifica il nome del modello della finestra di dialogo o un valore intero che specifica l'identificatore di risorsa del modello della finestra di dialogo. Se il parametro specifica un identificatore di risorsa, la parola più significativa deve essere zero e la parola meno significativa deve contenere l'identificatore. È possibile usare la [MAKEINTRESOURCE](https://msdn.microsoft.com/library/windows/desktop/ms648029) macro per creare questo valore.  
  
 *hWndParent*  
 [in] Identifica la finestra proprietaria la finestra di dialogo.  
  
 *lpDialogProc*  
 [in] Punta alla routine della finestra di dialogo. Per altre informazioni sulla procedura di finestra di dialogo, vedere [DialogProc](https://msdn.microsoft.com/library/windows/desktop/ms645469).  
  
 *dwInitParam*  
 [in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del messaggio WM_INITDIALOG.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 La finestra di dialogo risultante può contenere i controlli ActiveX.  
  
 Visualizzare [CreateDialog](/windows/desktop/api/winuser/nf-winuser-createdialoga) e [CreateDialogParam](/windows/desktop/api/winuser/nf-winuser-createdialogparama) in Windows SDK.  
  
##  <a name="atlaxcreatecontrol"></a>  AtlAxCreateControl  
 Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.  
  

```
ATLAPI AtlAxCreateControl(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszName*  
 Un puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<BODY > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML.  
  
 *hWnd*  
 [in] Handle alla finestra che verrà associato il controllo.  
  
 *pStream*  
 [in] Puntatore a un flusso che viene usato per inizializzare le proprietà del controllo. Può essere NULL.  
  
 *ppUnkContainer*  
 [out] L'indirizzo del puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione globale ti offre lo stesso risultato alla chiamata al metodo [AtlAxCreateControlEx](#atlaxcreatecontrolex)(*lpszName*, *hWnd*, *pStream*, NULL, NULL, NULL, NULL);.  
  
 Per creare un controllo ActiveX con licenza, vedere [AtlAxCreateControlLic](#atlaxcreatecontrollic).  
  
##  <a name="atlaxcreatecontrolex"></a>  AtlAxCreateControlEx  
 Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata. È possibile creare anche un puntatore a interfaccia e un sink di evento per il nuovo controllo.  
  
```
ATLAPI AtlAxCreateControlEx(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer,
    IUnknown** ppUnkControl,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszName*  
 Un puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<BODY > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML.  
  
 *hWnd*  
 [in] Handle alla finestra che verrà associato il controllo.  
  
 *pStream*  
 [in] Puntatore a un flusso che viene usato per inizializzare le proprietà del controllo. Può essere NULL.  
  
 *ppUnkContainer*  
 [out] L'indirizzo del puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.  
  
 *ppUnkControl*  
 [out] L'indirizzo del puntatore che riceverà il `IUnknown` del controllo creato. Può essere NULL.  
  
 *iidSink*  
 Identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente.  
  
 *punkSink*  
 Un puntatore per il `IUnknown` interfaccia dell'oggetto sink di essere connessi al punto di connessione specificato da *iidSink* sull'oggetto contenuto dopo che l'oggetto contenuto che è stato creato correttamente.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `AtlAxCreateControlEx` è simile a [AtlAxCreateControl](#atlaxcreatecontrol) ma consente anche di ricevere un puntatore a interfaccia al controllo appena creato e configurare un sink di evento per ricevere gli eventi generati dal controllo.  
  
 Per creare un controllo ActiveX con licenza, vedere [AtlAxCreateControlLicEx](#atlaxcreatecontrollicex).  
  
##  <a name="atlaxcreatecontrollic"></a>  AtlAxCreateControlLic  
 Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.  

```
ATLAPI AtlAxCreateControlLic(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer,
    BSTR bstrLic = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszName*  
 Un puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<BODY > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML.  
  
 *hWnd*  
 Handle alla finestra che verrà associato il controllo.  
  
 *pStream*  
 Puntatore a un flusso che viene usato per inizializzare le proprietà del controllo. Può essere NULL.  
  
 *ppUnkContainer*  
 L'indirizzo del puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.  
  
 *bstrLic*  
 La stringa BSTR che contiene la licenza per il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="example"></a>Esempio  
 Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio d'uso `AtlAxCreateControlLic`.  
  
##  <a name="atlaxcreatecontrollicex"></a>  AtlAxCreateControlLicEx  
 Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata. È possibile creare anche un puntatore a interfaccia e un sink di evento per il nuovo controllo.  
  
```
ATLAPI AtlAxCreateControlLicEx(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer,
    IUnknown** ppUnkControl,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL,
    BSTR bstrLic = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszName*  
 Un puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<BODY > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML.  
  
 *hWnd*  
 Handle alla finestra che verrà associato il controllo.  
  
 *pStream*  
 Puntatore a un flusso che viene usato per inizializzare le proprietà del controllo. Può essere NULL.  
  
 *ppUnkContainer*  
 L'indirizzo del puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.  
  
 *ppUnkControl*  
 [out] L'indirizzo del puntatore che riceverà il `IUnknown` del controllo creato. Può essere NULL.  
  
 *iidSink*  
 Identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente.  
  
 *punkSink*  
 Un puntatore per il `IUnknown` interfaccia dell'oggetto sink di essere connessi al punto di connessione specificato da *iidSink* sull'oggetto contenuto dopo che l'oggetto contenuto che è stato creato correttamente.  
  
 *bstrLic*  
 La stringa BSTR che contiene la licenza per il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `AtlAxCreateControlLicEx` è simile a [AtlAxCreateControlLic](#atlaxcreatecontrollic) ma consente anche di ricevere un puntatore a interfaccia al controllo appena creato e configurare un sink di evento per ricevere gli eventi generati dal controllo.  
  
### <a name="example"></a>Esempio  
 Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio d'uso `AtlAxCreateControlLicEx`.  
  
##  <a name="atlaxattachcontrol"></a>  AtlAxAttachControl  
 Associa un controllo creato in precedenza alla finestra specificata.  
  
```
ATLAPI AtlAxAttachControl(
    IUnknown* pControl,
    HWND hWnd,
    IUnknown** ppUnkContainer);
```  
  
### <a name="parameters"></a>Parametri  
 *pControl*  
 [in] Un puntatore al `IUnknown` del controllo.  
  
 *hWnd*  
 [in] Handle alla finestra che ospiterà il controllo.  
  
 *ppUnkContainer*  
 [out] Un puntatore a un puntatore al `IUnknown` dell'oggetto contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Uso [AtlAxCreateControlEx](#atlaxcreatecontrolex) e [AtlAxCreateControl](#atlaxcreatecontrol) contemporaneamente creare e collegare un controllo.  
  
> [!NOTE]
>  Dell'oggetto controllo associato deve essere correttamente inizializzato prima di chiamare `AtlAxAttachControl`.  
  
##  <a name="atlaxgethost"></a>  AtlAxGetHost  
 Ottiene un puntatore a interfaccia diretto per il contenitore di una finestra specifica (se presente) in base al relativo handle.  
  
```
ATLAPI AtlAxGetHost(HWND h, IUnknown** pp);
```  
  
### <a name="parameters"></a>Parametri  
 *h*  
 [in] Handle alla finestra che ospita il controllo.  
  
 *profilo di porta*  
 [out] Il `IUnknown` del contenitore del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
##  <a name="atlaxgetcontrol"></a>  AtlAxGetControl  
 Ottiene un puntatore a interfaccia diretto per il controllo contenuto all'interno di una finestra specifica in base al relativo handle.  
  
```
ATLAPI AtlAxGetControl(HWND h, IUnknown** pp);
```  
  
### <a name="parameters"></a>Parametri  
 *h*  
 [in] Handle alla finestra che ospita il controllo.  
  
 *profilo di porta*  
 [out] Il `IUnknown` del controllo ospitato.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
##  <a name="atlsetchildsite"></a>  AtlSetChildSite  
 Chiamare questa funzione per impostare il sito dell'oggetto figlio dal `IUnknown` dell'oggetto padre.  
  
```
HRESULT AtlSetChildSite(IUnknown* punkChild, IUnknown* punkParent);
```  
  
### <a name="parameters"></a>Parametri  
 *punkChild*  
 [in] Un puntatore al `IUnknown` interfaccia dell'elemento figlio.  
  
 *punkParent*  
 [in] Un puntatore al `IUnknown` interfaccia dell'elemento padre.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="atlaxwininit"></a>  AtlAxWinInit  
 Questa funzione Inizializza l'hosting di codice tramite la registrazione del controllo ATL il **"Atlaxwinlic80"** e **"Atlaxwin80"** classi di finestre oltre a una coppia di messaggi di finestra personalizzati.  
  
```
ATLAPI_(BOOL) AtlAxWinInit();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione del controllo codice di hosting ha avuto esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima di usare l'API di hosting del controllo ATL. Segue una chiamata a questa funzione, il **"AtlAxWin"** classe finestra può essere utilizzata nelle chiamate a [CreateWindow](https://msdn.microsoft.com/library/windows/desktop/ms632679) oppure [CreateWindowEx](https://msdn.microsoft.com/library/windows/desktop/ms632680), come descritto nel SDK di Windows.  

##  <a name="atlaxwinterm"></a>  AtlAxWinTerm  
 Questa funzione Annulla l'inizializzazione del controllo ATL codice di hosting annullando il **"Atlaxwinlic80"** e **"Atlaxwin80"** classi di finestra.  
  
```
inline BOOL AtlAxWinTerm();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre TRUE.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama semplicemente [UnregisterClass](https://msdn.microsoft.com/library/windows/desktop/ms644899) come descritto nel SDK di Windows.  
  
 Chiamare questa funzione per la pulizia dopo che tutte le finestre host esistenti sono stati eliminati definitivamente se è stato chiamato [AtlAxWinInit](#atlaxwininit) e non è più necessario creare host di windows. Se non si chiama questa funzione, la classe della finestra verrà annullata la registrazione automaticamente al termine del processo.  
  
##  <a name="atlgetobjectsourceinterface"></a>  AtlGetObjectSourceInterface  
 Chiamare questa funzione per recuperare le informazioni sull'interfaccia di origine predefinita di un oggetto.  
  
```
ATLAPI AtlGetObjectSourceInterface(
    IUnknown* punkObj,
    GUID* plibid,
    IID* piid,
    unsigned short* pdwMajor,
    unsigned short* pdwMinor);
```  
  
### <a name="parameters"></a>Parametri  
 *punkObj*  
 [in] Un puntatore all'oggetto per cui sono necessario restituire informazioni.  
  
 *plibid*  
 [out] Puntatore a LIBID della libreria dei tipi contenente la definizione dell'interfaccia di origine.  
  
 *piid*  
 [out] Un puntatore all'ID di interfaccia di interfaccia di origine predefinita dell'oggetto.  
  
 *pdwMajor*  
 [out] Un puntatore al numero di versione principale della libreria dei tipi contenente la definizione dell'interfaccia di origine.  
  
 *pdwMinor*  
 [out] Puntatore al numero di versione secondaria della libreria dei tipi contenente la definizione dell'interfaccia di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `AtlGetObjectSourceInterface` può fornire con l'ID di interfaccia dell'interfaccia di origine predefinito, insieme a LIBID e principali e i numeri di versione secondaria della libreria dei tipi che descrive tale interfaccia.  
  
> [!NOTE]
>  Per questa funzione recuperare correttamente le informazioni richieste, l'oggetto rappresentato dal *punkObj* devono implementare `IDispatch` (e restituire informazioni sul tipo tramite `IDispatch::GetTypeInfo`) e deve anche implementare entrambi `IProvideClassInfo2` o `IPersist`. Informazioni sul tipo per l'interfaccia di origine devono essere della stessa libreria dei tipi come le informazioni sul tipo per `IDispatch`.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente mostra come è possibile definire una classe di evento sink `CEasySink`, che riduce il numero di argomenti di modello che è possibile passare a `IDispEventImpl` per le funzionalità minime. `EasyAdvise` e `EasyUnadvise` usano `AtlGetObjectSourceInterface` per inizializzare il [IDispEventImpl](../../atl/reference/idispeventimpl-class.md) membri prima di chiamare [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) oppure [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise).  
  
 [!code-cpp[NVC_ATL_Windowing#93](../../atl/codesnippet/cpp/composite-control-global-functions_1.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Macro di controlli compositi](../../atl/reference/composite-control-macros.md)
