---
title: Funzioni globali di controllo composito | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- composite controls, global functions
ms.assetid: 536884cd-e863-4c7a-ab0a-604dc60a0bbe
caps.latest.revision: 20
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: dd043335df32c04349403bbfe38e647f352826c4
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="composite-control-global-functions"></a>Funzioni globali di controllo composito
Queste funzioni forniscono il supporto per la creazione di finestre di dialogo e per la creazione, l'hosting e gestione delle licenze dei controlli ActiveX.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlAxDialogBox](#atlaxdialogbox)|Crea una finestra di dialogo modale da un modello di finestra di dialogo fornito dall'utente. Nella finestra di dialogo risultante può contenere controlli ActiveX.|  
|[API AtlAxCreateDialog](#atlaxcreatedialog)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo fornito dall'utente. Nella finestra di dialogo risultante può contenere controlli ActiveX.|  
|[AtlAxCreateControl](#atlaxcreatecontrol)|Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.|  
|[AtlAxCreateControlEx](#atlaxcreatecontrolex)|Crea un controllo ActiveX, che viene inizializzato, ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.|  
|[AtlAxCreateControlLic](#atlaxcreatecontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.|  
|[AtlAxCreateControlLicEx](#atlaxcreatecontrollicex)|Crea un controllo ActiveX con licenza, che viene inizializzato, ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.|  
|[AtlAxAttachControl](#atlaxattachcontrol)|Associa un controllo creato in precedenza alla finestra specificata.|  
|[AtlAxGetHost](#atlaxgethost)|Utilizzato per ottenere un puntatore a interfaccia diretto per il contenitore di una finestra specifica (se presente), dato il relativo handle.|  
|[AtlAxGetControl](#atlaxgetcontrol)|Utilizzato per ottenere un puntatore a interfaccia diretto per il controllo contenuto all'interno di una finestra specifica (se presente), dato il relativo handle.|  
|[AtlSetChildSite](#atlsetchildsite)|Inizializza il **IUnknown** del sito figlio.|  
|[AtlAxWinInit](#atlaxwininit)|Inizializza il codice di hosting per gli oggetti AxWin.|  
|[AtlAxWinTerm](#atlaxwinterm)|Non inizializza il codice di hosting per gli oggetti AxWin.|  
|[AtlGetObjectSourceInterface](#atlgetobjectsourceinterface)|Restituisce informazioni sull'interfaccia di origine predefinita di un oggetto.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlhost  

##  <a name="atlaxdialogbox"></a>AtlAxDialogBox  
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
 `hInstance`  
 [in] Identifica un'istanza del modulo i cui file eseguibile contiene il modello di finestra di dialogo.  
  
 `lpTemplateName`  
 [in] Identifica il modello di finestra di dialogo. Questo parametro è il puntatore a una stringa di caratteri con terminazione null che specifica il nome del modello di finestra di dialogo o un valore intero che specifica l'identificatore di risorsa di modello di finestra di dialogo. Se il parametro specifica un identificatore di risorsa, la parola più significativa deve essere zero e la parola meno significativa deve contenere l'identificatore. È possibile utilizzare il [MAKEINTRESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms648029) macro per creare il valore.  
  
 `hWndParent`  
 [in] Identifica la finestra proprietaria la finestra di dialogo.  
  
 `lpDialogProc`  
 [in] Punta alla routine di finestra di dialogo. Per ulteriori informazioni sulle routine di finestra di dialogo, vedere [DialogProc](http://msdn.microsoft.com/library/windows/desktop/ms645469).  
  
 `dwInitParam`  
 [in] Specifica il valore da passare alla finestra di dialogo nel **lParam** parametro il **WM_INITDIALOG** messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Utilizzare **AtlAxDialogBox** con un modello di finestra di dialogo contenente un controllo ActiveX, specificare un valore valido **CLSID**, **APPID** o una stringa URL come il *testo* campo il **controllo** sezione della risorsa finestra di dialogo, insieme a "AtlAxWin80" come il *nome classe* campo nella stessa sezione. L'esempio seguente illustra quali valido **controllo** sezione potrebbe essere simile:  
  
```  
CONTROL    "{04FE35E9-ADBC-4f1d-83FE-8FA4D1F71C7F}", IDC_TEST,  
    "AtlAxWin80", WS_GROUP | WS_TABSTOP, 0, 0, 100, 100  
```  
  
 Per ulteriori informazioni sulla modifica di script di risorse, vedere [procedura: aprire un File di Script di risorsa in formato testo](../../windows/how-to-open-a-resource-script-file-in-text-format.md). Per ulteriori informazioni sulle istruzioni di definizione di risorsa di controllo, vedere [parametri di controllo comuni](http://msdn.microsoft.com/library/windows/desktop/aa380902) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] *: strumenti SDK*.  
  
 Per ulteriori informazioni sulle finestre di dialogo in generale, vedere [DialogBox](http://msdn.microsoft.com/library/windows/desktop/ms645452) e [CreateDialogParam](http://msdn.microsoft.com/library/windows/desktop/ms645445) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="atlaxcreatedialog"></a>API AtlAxCreateDialog  
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
 `hInstance`  
 [in] Identifica un'istanza del modulo i cui file eseguibile contiene il modello di finestra di dialogo.  
  
 `lpTemplateName`  
 [in] Identifica il modello di finestra di dialogo. Questo parametro è il puntatore a una stringa di caratteri con terminazione null che specifica il nome del modello di finestra di dialogo o un valore intero che specifica l'identificatore di risorsa di modello di finestra di dialogo. Se il parametro specifica un identificatore di risorsa, la parola più significativa deve essere zero e la parola meno significativa deve contenere l'identificatore. È possibile utilizzare il [MAKEINTRESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms648029) macro per creare il valore.  
  
 `hWndParent`  
 [in] Identifica la finestra proprietaria la finestra di dialogo.  
  
 `lpDialogProc`  
 [in] Punta alla routine di finestra di dialogo. Per ulteriori informazioni sulle routine di finestra di dialogo, vedere [DialogProc](http://msdn.microsoft.com/library/windows/desktop/ms645469).  
  
 `dwInitParam`  
 [in] Specifica il valore da passare alla finestra di dialogo nel **lParam** parametro il **WM_INITDIALOG** messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Nella finestra di dialogo risultante può contenere controlli ActiveX.  
  
 Vedere [CreateDialog](http://msdn.microsoft.com/library/windows/desktop/ms645434) e [CreateDialogParam](http://msdn.microsoft.com/library/windows/desktop/ms645445) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="atlaxcreatecontrol"></a>AtlAxCreateControl  
 Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.  
  

```
ATLAPI AtlAxCreateControl(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Un puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<corpo > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML.  
  
 `hWnd`  
 [in] Handle alla finestra che verrà associato il controllo.  
  
 `pStream`  
 [in] Un puntatore a un flusso che viene utilizzato per inizializzare le proprietà del controllo. Può essere **NULL**.  
  
 `ppUnkContainer`  
 [out] L'indirizzo di un puntatore che riceverà il **IUnknown** del contenitore. Può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione globale offre lo stesso risultato chiamata [AtlAxCreateControlEx](#atlaxcreatecontrolex)( `lpszName` **,** `hWnd` **,** `pStream` **, NULL, NULL, NULL, NULL** );.  
  
 Per creare un controllo ActiveX con licenza, vedere [AtlAxCreateControlLic](#atlaxcreatecontrollic).  
  
##  <a name="atlaxcreatecontrolex"></a>AtlAxCreateControlEx  
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
 `lpszName`  
 Un puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<corpo > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML.  
  
 `hWnd`  
 [in] Handle alla finestra che verrà associato il controllo.  
  
 `pStream`  
 [in] Un puntatore a un flusso che viene utilizzato per inizializzare le proprietà del controllo. Può essere **NULL**.  
  
 `ppUnkContainer`  
 [out] L'indirizzo di un puntatore che riceverà il **IUnknown** del contenitore. Può essere **NULL**.  
  
 `ppUnkControl`  
 [out] L'indirizzo di un puntatore che riceverà il **IUnknown** del controllo creato. Può essere **NULL**.  
  
 `iidSink`  
 Identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente.  
  
 *punkSink*  
 Un puntatore per il **IUnknown** interfaccia dell'oggetto sink da connettere al punto di connessione specificato da `iidSink` sull'oggetto contenuto dopo l'oggetto contenuto che è stato creato correttamente.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `AtlAxCreateControlEx`è simile a [AtlAxCreateControl](#atlaxcreatecontrol) ma consente anche di ricevere un puntatore a interfaccia per il controllo appena creato e configurato un sink di evento per ricevere gli eventi generati dal controllo.  
  
 Per creare un controllo ActiveX con licenza, vedere [AtlAxCreateControlLicEx](#atlaxcreatecontrollicex).  
  
##  <a name="atlaxcreatecontrollic"></a>AtlAxCreateControlLic  
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
 `lpszName`  
 Un puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<corpo > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML.  
  
 `hWnd`  
 Handle alla finestra che verrà associato il controllo.  
  
 `pStream`  
 Un puntatore a un flusso che viene utilizzato per inizializzare le proprietà del controllo. Può essere **NULL**.  
  
 `ppUnkContainer`  
 L'indirizzo di un puntatore che riceverà il **IUnknown** del contenitore. Può essere **NULL**.  
  
 `bstrLic`  
 La stringa BSTR contenente la licenza per il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli mediante AXHost ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio di come utilizzare `AtlAxCreateControlLic`.  
  
##  <a name="atlaxcreatecontrollicex"></a>AtlAxCreateControlLicEx  
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
 `lpszName`  
 Un puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<corpo > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML.  
  
 `hWnd`  
 Handle alla finestra che verrà associato il controllo.  
  
 `pStream`  
 Un puntatore a un flusso che viene utilizzato per inizializzare le proprietà del controllo. Può essere **NULL**.  
  
 `ppUnkContainer`  
 L'indirizzo di un puntatore che riceverà il **IUnknown** del contenitore. Può essere **NULL**.  
  
 `ppUnkControl`  
 [out] L'indirizzo di un puntatore che riceverà il **IUnknown** del controllo creato. Può essere **NULL**.  
  
 `iidSink`  
 Identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente.  
  
 *punkSink*  
 Un puntatore per il **IUnknown** interfaccia dell'oggetto sink da connettere al punto di connessione specificato da `iidSink` sull'oggetto contenuto dopo l'oggetto contenuto che è stato creato correttamente.  
  
 `bstrLic`  
 La stringa BSTR contenente la licenza per il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `AtlAxCreateControlLicEx`è simile a [AtlAxCreateControlLic](#atlaxcreatecontrollic) ma consente anche di ricevere un puntatore a interfaccia per il controllo appena creato e configurato un sink di evento per ricevere gli eventi generati dal controllo.  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli mediante AXHost ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio di come utilizzare `AtlAxCreateControlLicEx`.  
  
##  <a name="atlaxattachcontrol"></a>AtlAxAttachControl  
 Associa un controllo creato in precedenza alla finestra specificata.  
  
```
ATLAPI AtlAxAttachControl(
    IUnknown* pControl,
    HWND hWnd,
    IUnknown** ppUnkContainer);
```  
  
### <a name="parameters"></a>Parametri  
 `pControl`  
 [in] Un puntatore per il **IUnknown** del controllo.  
  
 `hWnd`  
 [in] Handle alla finestra che ospiterà il controllo.  
  
 `ppUnkContainer`  
 [out] Un puntatore a un puntatore per il **IUnknown** dell'oggetto contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Utilizzare [AtlAxCreateControlEx](#atlaxcreatecontrolex) e [AtlAxCreateControl](#atlaxcreatecontrol) per creare e collegare un controllo contemporaneamente.  
  
> [!NOTE]
>  Dell'oggetto controllo associato deve essere inizializzata correttamente prima di chiamare `AtlAxAttachControl`.  
  
##  <a name="atlaxgethost"></a>AtlAxGetHost  
 Ottiene un puntatore a interfaccia diretto per il contenitore di una finestra specifica (se presente) in base al relativo handle.  
  
```
ATLAPI AtlAxGetHost(HWND h, IUnknown** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `h`  
 [in] Un handle alla finestra che ospita il controllo.  
  
 `pp`  
 [out] Il **IUnknown** del contenitore del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
##  <a name="atlaxgetcontrol"></a>AtlAxGetControl  
 Ottiene un puntatore a interfaccia diretto per il controllo contenuto all'interno di una finestra specifica in base al relativo handle.  
  
```
ATLAPI AtlAxGetControl(HWND h, IUnknown** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `h`  
 [in] Un handle alla finestra che ospita il controllo.  
  
 `pp`  
 [out] Il **IUnknown** del controllo ospitato.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
##  <a name="atlsetchildsite"></a>AtlSetChildSite  
 Chiamare questa funzione per impostare il sito dell'oggetto figlio di **IUnknown** dell'oggetto padre.  
  
```
HRESULT AtlSetChildSite(IUnknown* punkChild, IUnknown* punkParent);
```  
  
### <a name="parameters"></a>Parametri  
 *punkChild*  
 [in] Un puntatore per il **IUnknown** interfaccia dell'oggetto figlio.  
  
 `punkParent`  
 [in] Un puntatore per il **IUnknown** interfaccia dell'oggetto padre.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="atlaxwininit"></a>AtlAxWinInit  
 Questa funzione Inizializza l'hosting di codice tramite la registrazione del controllo ATL il **"AtlAxWin80"** e **"Atlaxwin80"** classi di finestre oltre a una coppia di messaggi di finestra personalizzati.  
  
```
ATLAPI_(BOOL) AtlAxWinInit();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione del codice di hosting del controllo ha avuto esito positivo; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima di utilizzare l'API di hosting del controllo ATL. Segue una chiamata a questa funzione, il **"AtlAxWin"** classe finestra può essere utilizzata nelle chiamate a [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) o [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  

##  <a name="atlaxwinterm"></a>AtlAxWinTerm  
 Questa funzione Annulla l'inizializzazione del controllo ATL codice di hosting per l'annullamento della registrazione di **"AtlAxWin80"** e **"Atlaxwin80"** classi di finestra.  
  
```
inline BOOL AtlAxWinTerm();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre **TRUE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama semplicemente [UnregisterClass](http://msdn.microsoft.com/library/windows/desktop/ms644899) come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Chiamare questa funzione per pulizia dopo che tutte le finestre host esistenti sono state eliminate se è stato chiamato [AtlAxWinInit](#atlaxwininit) e non è più necessario creare l'host di windows. Se non si chiama questa funzione, classe della finestra verrà annullata automaticamente al termine del processo.  
  
##  <a name="atlgetobjectsourceinterface"></a>AtlGetObjectSourceInterface  
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
 `punkObj`  
 [in] Puntatore all'oggetto per cui sono necessario restituire informazioni.  
  
 `plibid`  
 [out] Un puntatore a LIBID della libreria dei tipi contenente la definizione dell'interfaccia di origine.  
  
 `piid`  
 [out] Puntatore all'ID di interfaccia dell'interfaccia di origine predefinita dell'oggetto.  
  
 *pdwMajor*  
 [out] Un puntatore al numero di versione principale della libreria dei tipi contenente la definizione dell'interfaccia di origine.  
  
 *pdwMinor*  
 [out] Puntatore al numero di versione secondaria della libreria dei tipi contenente la definizione dell'interfaccia di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `AtlGetObjectSourceInterface`può fornire con l'ID di interfaccia dell'interfaccia di origine predefinito, insieme a LIBID e principali e i numeri di versione secondaria della libreria dei tipi che descrive tale interfaccia.  
  
> [!NOTE]
>  Per questa funzione per recuperare le informazioni richieste, l'oggetto rappresentato dal `punkObj` deve implementare `IDispatch` (e restituire informazioni sul tipo tramite **IDispatch:: GetTypeInfo**) e deve anche implementare una `IProvideClassInfo2` o `IPersist`. Le informazioni sul tipo per l'interfaccia di origine deve essere nella stessa libreria dei tipi come le informazioni sul tipo per `IDispatch`.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come definire una classe di sink di evento, `CEasySink`, che riduce il numero di argomenti di modello che è possibile passare a `IDispEventImpl` per le funzionalità minime. `EasyAdvise`e `EasyUnadvise` utilizzare `AtlGetObjectSourceInterface` per inizializzare il [IDispEventImpl](../../atl/reference/idispeventimpl-class.md) membri prima di chiamare [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) o [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise).  
  
 [!code-cpp[&#93; NVC_ATL_Windowing](../../atl/codesnippet/cpp/composite-control-global-functions_1.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Macro di controllo composito](../../atl/reference/composite-control-macros.md)

