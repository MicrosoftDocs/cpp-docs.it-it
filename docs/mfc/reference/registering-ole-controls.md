---
title: Registrazione di controlli OLE | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.ole
dev_langs:
- C++
helpviewer_keywords:
- registering OLE controls
- OLE controls, registering
ms.assetid: 73c45b7f-7dbc-43f5-bd17-dd77c6acec72
caps.latest.revision: 15
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
translationtype: Machine Translation
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 9c54fb7dc3802e78c8dc68df02ff55ef4732a36b
ms.lasthandoff: 02/24/2017

---
# <a name="registering-ole-controls"></a>Registrazione di controlli OLE
OLE (controlli), come gli altri oggetti del server OLE, sono accessibili da altre applicazioni compatibili con OLE. Questo avviene tramite la registrazione di libreria dei tipi e la classe del controllo.  
  
 Le funzioni seguenti consentono di aggiungere e rimuovere una classe del controllo, le pagine delle proprietà e libreria dei tipi nel database di registrazione di Windows:  
  
### <a name="registering-ole-controls"></a>Registrazione di controlli OLE  
  
|||  
|-|-|  
|[AfxOleRegisterControlClass](#afxoleregistercontrolclass)|Aggiunge la classe del controllo al database di registrazione.|  
|[Seguente:](#afxoleregisterpropertypageclass)|Aggiunge una pagina di proprietà del controllo al database di registrazione.|  
|[AfxOleRegisterTypeLib](#afxoleregistertypelib)|Aggiunge la libreria dei tipi del controllo al database di registrazione.|  
|[AfxOleUnregisterClass](#afxoleunregisterclass)|Rimuove una classe di controllo o una classe di pagina delle proprietà dal database di registrazione.|  
|[AfxOleUnregisterTypeLib](#afxoleunregistertypelib)|Rimuove una libreria dei tipi del controllo dal database di registrazione.|  
  
 `AfxOleRegisterTypeLib`in genere è denominato nell'implementazione di un controllo della DLL di `DllRegisterServer`. Analogamente, `AfxOleUnregisterTypeLib` viene chiamato da `DllUnregisterServer`. `AfxOleRegisterControlClass`, `AfxOleRegisterPropertyPageClass`, e `AfxOleUnregisterClass` vengono in genere chiamati dal `UpdateRegistry` funzione membro di un controllo classe factory o pagina delle proprietà.  
  
##  <a name="a-nameafxoleregistercontrolclassa--afxoleregistercontrolclass"></a><a name="afxoleregistercontrolclass"></a>AfxOleRegisterControlClass  
 Registra la classe del controllo con il database di registrazione di Windows.  
  
```   
BOOL AFXAPI AfxOleRegisterControlClass(
    HINSTANCE hInstance,  
    REFCLSID clsid,  
    LPCTSTR pszProgID,  
    UINT idTypeName,  
    UINT idBitmap,  
    int nRegFlags,  
    DWORD dwMiscStatus,  
    REFGUID tlid,  
    WORD wVerMajor,  
    WORD wVerMinor); 
```  
  
### <a name="parameters"></a>Parametri  
 `hInstance`  
 Handle di istanza del modulo associato alla classe del controllo.  
  
 `clsid`  
 ID univoco della classe del controllo.  
  
 `pszProgID`  
 ID univoco del programma del controllo.  
  
 `idTypeName`  
 L'ID risorsa della stringa che contiene un nome tipo leggibile dall'utente per il controllo.  
  
 *idBitmap*  
 L'ID risorsa della bitmap utilizzata per rappresentare il controllo OLE in un riquadro della barra degli strumenti.  
  
 `nRegFlags`  
 Contiene uno o più dei flag seguenti:  
  
- `afxRegInsertable`Consente il controllo venga visualizzato nella finestra di dialogo Inserisci oggetto per gli oggetti OLE.  
  
- `afxRegApartmentThreading`Imposta il modello di threading nel Registro di sistema ThreadingModel = Apartment.  
  
- `afxRegFreeThreading`Imposta il modello di threading nel Registro di sistema ThreadingModel = gratuito.  
  
     È possibile combinare i due flag `afxRegApartmentThreading` e `afxRegFreeThreading` impostare ThreadingModel = entrambi. Vedere [InprocServer32](http://msdn.microsoft.com/library/windows/desktop/ms682390) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni sulla registrazione di modello di threading.  
  
> [!NOTE]
>  Nelle versioni MFC precedenti alla 4.2 di MFC, la `int` `nRegFlags` parametro era un **BOOL** parametro *bInsertable*, che consentito o meno il controllo da inserire nella finestra di dialogo Inserisci oggetto.  
  
 *dwMiscStatus*  
 Contiene uno o più dei seguenti flag di stato (per una descrizione dei flag, vedere **OLEMISC** enumerazione di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]):  
  
-   OLEMISC_RECOMPOSEONRESIZE  
  
-   OLEMISC_ONLYICONIC  
  
-   OLEMISC_INSERTNOTREPLACE  
  
-   OLEMISC_STATIC  
  
-   OLEMISC_CANTLINKINSIDE  
  
-   OLEMISC_CANLINKBYOLE1  
  
-   OLEMISC_ISLINKOBJECT  
  
-   OLEMISC_INSIDEOUT  
  
-   OLEMISC_ACTIVATEWHENVISIBLE  
  
-   OLEMISC_RENDERINGISDEVICEINDEPENDENT  
  
-   OLEMISC_INVISIBLEATRUNTIME  
  
-   OLEMISC_ALWAYSRUN  
  
-   OLEMISC_ACTSLIKEBUTTON  
  
-   OLEMISC_ACTSLIKELABEL  
  
-   OLEMISC_NOUIACTIVATE  
  
-   OLEMISC_ALIGNABLE  
  
-   OLEMISC_IMEMODE  
  
-   OLEMISC_SIMPLEFRAME  
  
-   OLEMISC_SETCLIENTSITEFIRST  
  
 *tlid*  
 ID univoco della classe del controllo.  
  
 `wVerMajor`  
 Il numero di versione principale della classe del controllo.  
  
 `wVerMinor`  
 Il numero di versione secondaria della classe del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la classe del controllo è stata registrata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In questo modo il controllo da utilizzare da contenitori che supportano i controlli OLE. `AfxOleRegisterControlClass`Aggiorna il Registro di sistema con il nome e posizione del controllo del sistema e imposta inoltre il modello di threading che supporta il controllo nel Registro di sistema. Per ulteriori informazioni, vedere [64 Nota tecnica](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Modello di Apartment di Threading in controlli OLE," e [sui processi e thread](http://msdn.microsoft.com/library/windows/desktop/ms681917) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAxCtl&#11;](../../mfc/reference/codesnippet/cpp/registering-ole-controls_1.cpp)]  
  
 Nell'esempio precedente viene illustrato come `AfxOleRegisterControlClass` viene chiamato con il flag per inseribile e il flag per apartment or insieme per creare il sesto parametro del modello:  
  
 [!code-cpp[NVC_MFCAxCtl&#12;](../../mfc/reference/codesnippet/cpp/registering-ole-controls_2.cpp)]  
  
 Il controllo viene visualizzata nella finestra di dialogo Inserisci oggetto per i contenitori attivati e sarà in grado di riconoscere modello apartment. Controlli con supporto del modello di apartment devono garantire tale classe statica i dati sono protetti da blocchi, in modo che durante un controllo in un apartment accede ai dati statici, non è disabilitato dall'utilità di pianificazione prima del completamento, e avviata un'altra istanza della stessa classe utilizzando gli stessi dati statici. Qualsiasi tipo di accesso ai dati statici sono evidenziati da codice sezione critica.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="a-nameafxoleregisterpropertypageclassa--afxoleregisterpropertypageclass"></a><a name="afxoleregisterpropertypageclass"></a>Seguente:  
 Registra la classe delle pagine proprietà con il database di registrazione di Windows.  
  
```  
BOOL AFXAPI AfxOleRegisterPropertyPageClass(
   HINSTANCE hInstance,  
   REFCLSID  clsid,  
   UINT idTypeName,  
   int nRegFlags); 
```  
  
### <a name="parameters"></a>Parametri  
 `hInstance`  
 Handle di istanza del modulo associato alla classe di pagina delle proprietà.  
  
 `clsid`  
 ID univoco di classe della pagina delle proprietà.  
  
 `idTypeName`  
 L'ID risorsa della stringa che contiene un nome leggibile dall'utente per la pagina delle proprietà.  
  
 `nRegFlags`  
 Può includere il flag seguenti:  
  
- `afxRegApartmentThreading`Imposta il modello di threading nel Registro di sistema ThreadingModel = Apartment.  
  
> [!NOTE]
>  Nelle versioni MFC precedenti alla 4.2 di MFC, la `int` `nRegFlags` parametro non è disponibile. Si noti inoltre che il `afxRegInsertable` flag non è un'opzione valida per le pagine delle proprietà e causerà un'ASSERZIONE in MFC, se è impostato  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la classe del controllo è stata registrata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In questo modo la pagina delle proprietà da utilizzare da contenitori che supportano i controlli OLE. `AfxOleRegisterPropertyPageClass`Aggiorna il Registro di sistema con il nome della pagina proprietà e il relativo percorso nel sistema e imposta inoltre il modello di threading che supporta il controllo nel Registro di sistema. Per ulteriori informazioni, vedere [64 Nota tecnica](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Modello di Apartment di Threading in controlli OLE," e [sui processi e thread](http://msdn.microsoft.com/library/windows/desktop/ms681917) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="a-nameafxoleregistertypeliba--afxoleregistertypelib"></a><a name="afxoleregistertypelib"></a>AfxOleRegisterTypeLib  
 Registra la libreria dei tipi con il database di registrazione di Windows e consente l'utilizzo della libreria dei tipi da parte di altri contenitori che supportano i controlli OLE.  
  
```   
BOOL AfxOleRegisterTypeLib(
    HINSTANCE hInstance,  
    REFGUID tlid,  
    LPCTSTR pszFileName = NULL,  
    LPCTSTR pszHelpDir  = NULL); 
```  
  
### <a name="parameters"></a>Parametri  
 `hInstance`  
 Handle dell'istanza dell'applicazione associata alla libreria dei tipi.  
  
 *tlid*  
 ID univoco della libreria dei tipi.  
  
 *pszFileName*  
 Punta al nome file facoltativo di un file localizzato della libreria dei tipi (.TLB) per il controllo.  
  
 *pszHelpDir*  
 Nome della directory in cui è disponibile il file della Guida della libreria dei tipi. Se **NULL**, il file della Guida viene considerato nella stessa directory della libreria dei tipi stessa.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la libreria dei tipi è stata registrata; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione aggiorna il Registro di sistema con il nome della libreria dei tipi e il relativo percorso nel sistema.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAutomation&#7;](../../mfc/codesnippet/cpp/registering-ole-controls_3.cpp)]  
  
 [!code-cpp[NVC_MFCAutomation n.&8;](../../mfc/codesnippet/cpp/registering-ole-controls_4.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  
  
##  <a name="a-nameafxoleunregisterclassa--afxoleunregisterclass"></a><a name="afxoleunregisterclass"></a>AfxOleUnregisterClass  
 Rimuove la voce di classe di pagina controllo o una proprietà dal database di registrazione di Windows.  
  
```   
BOOL AFXAPI AfxOleUnregisterClass(REFCLSID clsID, LPCSTR pszProgID); 
```  
  
### <a name="parameters"></a>Parametri  
 *clsID*  
 L'ID univoco della classe della pagina di controllo o una proprietà.  
  
 `pszProgID`  
 L'ID univoco del programma di controllo o pagina delle proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la classe delle pagine controllo o la proprietà è stata annullata. in caso contrario 0.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="a-nameafxoleunregistertypeliba--afxoleunregistertypelib"></a><a name="afxoleunregistertypelib"></a>AfxOleUnregisterTypeLib  
 Chiamare questa funzione per rimuovere la voce del tipo di raccolta dal database di registrazione di Windows.  
  
```   
BOOL AFXAPI AfxOleUnregisterTypeLib(REFGUID tlID); 
```  
  
### <a name="parameters"></a>Parametri  
 `tlID`  
 ID univoco della libreria dei tipi.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la libreria dei tipi è stata annullata. in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[13 NVC_MFCAxCtl](../../mfc/reference/codesnippet/cpp/registering-ole-controls_5.cpp)]  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdisp. h  

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

