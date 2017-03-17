---
title: Classe COleDispatchDriver | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleDispatchDriver
- AFXDISP/COleDispatchDriver
- AFXDISP/COleDispatchDriver::COleDispatchDriver
- AFXDISP/COleDispatchDriver::AttachDispatch
- AFXDISP/COleDispatchDriver::CreateDispatch
- AFXDISP/COleDispatchDriver::DetachDispatch
- AFXDISP/COleDispatchDriver::GetProperty
- AFXDISP/COleDispatchDriver::InvokeHelper
- AFXDISP/COleDispatchDriver::ReleaseDispatch
- AFXDISP/COleDispatchDriver::SetProperty
- AFXDISP/COleDispatchDriver::m_bAutoRelease
- AFXDISP/COleDispatchDriver::m_lpDispatch
dev_langs:
- C++
helpviewer_keywords:
- COleDispatchDriver class
- Automation clients, implementing Automation
- OLE dispatch interface
ms.assetid: 3ed98daf-cdc7-4374-8a0c-cf695a8d3657
caps.latest.revision: 21
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 51fc2064e2f4b51b4f4328afb03920dab27ef74b
ms.lasthandoff: 02/24/2017

---
# <a name="coledispatchdriver-class"></a>Classe COleDispatchDriver
Implementa il lato client dell'automazione OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDispatchDriver  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::COleDispatchDriver](#coledispatchdriver)|Costruisce un oggetto `COleDispatchDriver`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::AttachDispatch](#attachdispatch)|Collega un `IDispatch` connessione per il `COleDispatchDriver` oggetto.|  
|[COleDispatchDriver::CreateDispatch](#createdispatch)|Crea un `IDispatch` connessione e lo collega a di `COleDispatchDriver` oggetto.|  
|[COleDispatchDriver::DetachDispatch](#detachdispatch)|Disconnette un `IDispatch` connessione, senza rilasciarlo.|  
|[COleDispatchDriver:: GetProperty](#getproperty)|Ottiene una proprietà di automazione.|  
|[COleDispatchDriver:: InvokeHelper](#invokehelper)|Supporto per la chiamata di metodi di automazione.|  
|[COleDispatchDriver::ReleaseDispatch](#releasedispatch)|Rilascia un `IDispatch` connessione.|  
|[COleDispatchDriver:: SetProperty](#setproperty)|Imposta una proprietà di automazione.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::operator =](#operator_eq)|Copia il valore di origine nel `COleDispatchDriver` oggetto.|  
|[COleDispatchDriver::operator LPDISPATCH](#operator_lpdispatch)|Accede sottostante `IDispatch` puntatore.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::m_bAutoRelease](#m_bautorelease)|Specifica se rilasciare il `IDispatch` durante `ReleaseDispatch` o eliminazione di oggetti.|  
|[COleDispatchDriver::m_lpDispatch](#m_lpdispatch)|Indica il puntatore per il `IDispatch` interfaccia associata a questo `COleDispatchDriver`.|  
  
## <a name="remarks"></a>Note  
 `COleDispatchDriver`non dispone di una classe di base.  
  
 Interfacce dispatch OLE forniscono l'accesso ai metodi e proprietà di un oggetto. Funzioni membro di `COleDispatchDriver` collegare, scollegare, creare e rilasciare una connessione di invio di tipo `IDispatch`. Altre funzioni membro utilizzano elenchi di argomenti variabili per semplificare la chiamata **IDispatch:: Invoke**.  
  
 Questa classe può essere utilizzata direttamente, ma in genere viene utilizzato solo dalle classi create dalla procedura guidata Aggiungi classe. Quando si crea nuove classi C++ tramite l'importazione di una libreria dei tipi, le nuove classi derivano da `COleDispatchDriver`.  
  
 Per ulteriori informazioni sull'utilizzo di `COleDispatchDriver`, vedere gli articoli seguenti:  
  
- [Client di automazione](../../mfc/automation-clients.md)  
  
- [Server di automazione](../../mfc/automation-servers.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `COleDispatchDriver`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="attachdispatch"></a>COleDispatchDriver::AttachDispatch  
 Chiamare la funzione membro `AttachDispatch` per collegare un puntatore `IDispatch` all'oggetto `COleDispatchDriver` . Per ulteriori informazioni, vedere [che implementa l'interfaccia IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945).  
  
```  
void AttachDispatch(
        LPDISPATCH lpDispatch,  
        BOOL bAutoRelease = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDispatch`  
 Puntatore a un oggetto OLE `IDispatch` da collegare all'oggetto `COleDispatchDriver` .  
  
 `bAutoRelease`  
 Specifica se rilasciare l'invio quando l'oggetto esce dall'ambito.  
  
### <a name="remarks"></a>Note  
 Questa funzione rilascia qualsiasi puntatore `IDispatch` già collegato all'oggetto `COleDispatchDriver` .  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer n.&3;](../../mfc/codesnippet/cpp/coledispatchdriver-class_1.cpp)]  
  
##  <a name="coledispatchdriver"></a>COleDispatchDriver::COleDispatchDriver  
 Costruisce un oggetto `COleDispatchDriver`.  
  
```  
COleDispatchDriver();  
COleDispatchDriver(LPDISPATCH lpDispatch, BOOL bAutoRelease = TRUE);  
  COleDispatchDriver(const COleDispatchDriver& dispatchSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDispatch`  
 Puntatore a un oggetto OLE `IDispatch` da collegare all'oggetto `COleDispatchDriver` .  
  
 `bAutoRelease`  
 Specifica se rilasciare l'invio quando l'oggetto esce dall'ambito.  
  
 `dispatchSrc`  
 Fare riferimento a un oggetto esistente `COleDispatchDriver` oggetto.  
  
### <a name="remarks"></a>Note  
 Il modulo `COleDispatchDriver`( `LPDISPATCH``lpDispatch`, **BOOL**`bAutoRelease` = **TRUE**) si connette il [IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945) interfaccia.  
  
 Il modulo `COleDispatchDriver`( **const**`COleDispatchDriver`& `dispatchSrc`) consente di copiare un oggetto esistente `COleDispatchDriver` dell'oggetto e incrementa il conteggio dei riferimenti.  
  
 Il modulo `COleDispatchDriver`() crea un `COleDispatchDriver` oggetto ma non si connette il `IDispatch` interfaccia. Prima di utilizzare `COleDispatchDriver`() senza argomenti, è necessario connettere un `IDispatch` mediante uno [COleDispatchDriver::CreateDispatch](#createdispatch) o [COleDispatchDriver::AttachDispatch](#attachdispatch). Per ulteriori informazioni, vedere [che implementa l'interfaccia IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleDispatchDriver::CreateDispatch](#createdispatch).  
  
##  <a name="createdispatch"></a>COleDispatchDriver::CreateDispatch  
 Crea un [IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945) oggetto di interfaccia e lo collega a di `COleDispatchDriver` oggetto.  
  
```  
BOOL CreateDispatch(
        REFCLSID clsid,  
        COleException* pError = NULL);

 
BOOL CreateDispatch(
    LPCTSTR lpszProgID,  
    COleException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 ID di classe dell'oggetto connessione `IDispatch` da creare.  
  
 `pError`  
 Puntatore a un oggetto eccezione OLE, che conterrà il codice stato risultante dalla creazione.  
  
 `lpszProgID`  
 Puntatore all'identificatore a livello di codice, ad esempio "Excel.Document.5", dell'oggetto di automazione per il quale viene creato l'oggetto distribuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di esito positivo; in caso contrario, 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer n.&4;](../../mfc/codesnippet/cpp/coledispatchdriver-class_2.cpp)]  
  
##  <a name="detachdispatch"></a>COleDispatchDriver::DetachDispatch  
 Scollega corrente `IDispatch` connessione da questo oggetto.  
  
```  
LPDISPATCH DetachDispatch();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a OLE collegati in precedenza `IDispatch` oggetto.  
  
### <a name="remarks"></a>Note  
 Il `IDispatch` non viene rilasciato.  
  
 Per ulteriori informazioni sui `LPDISPATCH` tipo, vedere [che implementa l'interfaccia IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer n.&5;](../../mfc/codesnippet/cpp/coledispatchdriver-class_3.cpp)]  
  
##  <a name="getproperty"></a>COleDispatchDriver:: GetProperty  
 Ottiene la proprietà dell'oggetto specificata da `dwDispID`.  
  
```  
void GetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    void* pvProp) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `dwDispID`  
 Identifica la proprietà da recuperare.  
  
 `vtProp`  
 Specifica la proprietà da recuperare. I valori possibili, vedere la sezione Osservazioni per [COleDispatchDriver:: InvokeHelper](#invokehelper).  
  
 `pvProp`  
 Indirizzo della variabile che riceverà il valore della proprietà. Deve corrispondere al tipo specificato da `vtProp`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[6 NVC_MFCOleContainer](../../mfc/codesnippet/cpp/coledispatchdriver-class_4.cpp)]  
  
##  <a name="invokehelper"></a>COleDispatchDriver:: InvokeHelper  
 Chiama il metodo o la proprietà dell'oggetto specificata da `dwDispID`, nel contesto specificato da `wFlags`.  
  
```  
void AFX_CDECL InvokeHelper(
        DISPID dwDispID,  
        WORD wFlags,  
        VARTYPE vtRet,  
        void* pvRet,  
        const BYTE* pbParamInfo, ...);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDispID`  
 Identifica il metodo o la proprietà da richiamare.  
  
 `wFlags`  
 Flag che descrivono il contesto della chiamata a **IDispatch::Invoke**. . Per un elenco di valori possibili, vedere il `wFlags` parametro [IDispatch:: Invoke](http://msdn.microsoft.com/library/windows/desktop/ms221479\(v=vs.85\).aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `vtRet`  
 Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione Osservazioni.  
  
 `pvRet`  
 Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da `vtRet`.  
  
 `pbParamInfo`  
 Puntatore a una stringa di byte con terminazione Null che specifica i tipi dei parametri che seguono `pbParamInfo`.  
  
 *...*  
 Elenco variabile di parametri dei tipi specificati in `pbParamInfo`.  
  
### <a name="remarks"></a>Note  
 Il parametro `pbParamInfo` specifica i tipi dei parametri passati al metodo o alla proprietà. L'elenco di argomenti variabile è rappresentato da **...** nella dichiarazione di sintassi.  
  
 I valori possibili per l'argomento `vtRet` sono tratti dall'enumerazione `VARENUM` . I valori possibili sono i seguenti:  
  
|Simbolo|Tipo restituito|  
|------------|-----------------|  
|`VT_EMPTY`|`void`|  
|`VT_I2`|**short**|  
|`VT_I4`|**long**|  
|`VT_R4`|**float**|  
|`VT_R8`|**double**|  
|`VT_CY`|**CY**|  
|`VT_DATE`|**DATA**|  
|`VT_BSTR`|`BSTR`|  
|**VT_DISPATCH**|`LPDISPATCH`|  
|`VT_ERROR`|`SCODE`|  
|`VT_BOOL`|**BOOL**|  
|**VT_VARIANT**|**VARIANT**|  
|**VT_UNKNOWN**|`LPUNKNOWN`|  
  
 L'argomento `pbParamInfo` è un elenco separato da spazi di costanti **VTS_** . Uno o più di questi valori, separati da spazi (non virgole), specificano l'elenco dei parametri della funzione. I valori possibili sono elencati con il [EVENT_CUSTOM](event-maps.md#event_custom) (macro).  
  
 Questa funzione converte i parametri in valori **VARIANTARG** , quindi richiama il metodo [IDispatch::Invoke](http://msdn.microsoft.com/library/windows/desktop/ms221479\(v=vs.85\).aspx) . Se la chiamata a `Invoke` ha esito negativo, questa funzione genera un'eccezione. Se il `SCODE` (codice di stato) restituito da **IDispatch:: Invoke** è `DISP_E_EXCEPTION`, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md) oggetto; in caso contrario viene generata una [COleDispatchException](../../mfc/reference/coledispatchexception-class.md).  
  
 Per ulteriori informazioni, vedere [VARIANTARG](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118), [che implementa l'interfaccia IDispatch](http://msdn.microsoft.com/library/windows/desktop/ms221037\(v=vs.85\).aspx), [IDispatch:: Invoke](http://msdn.microsoft.com/library/windows/desktop/ms221479\(v=vs.85\).aspx), e [struttura di codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleDispatchDriver::CreateDispatch](#createdispatch).  
  
##  <a name="m_bautorelease"></a>COleDispatchDriver::m_bAutoRelease  
 Se **TRUE**, l'oggetto COM a cui accede [m_lpDispatch](#m_lpdispatch) verrà rilasciata automaticamente quando [ReleaseDispatch](#releasedispatch) viene chiamato o quando questo `COleDispatchDriver` oggetto viene eliminato.  
  
```  
BOOL m_bAutoRelease;  
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `m_bAutoRelease` è impostato su **TRUE** nel costruttore.  
  
 Per ulteriori informazioni sul rilascio di oggetti COM, vedere [che implementa il conteggio dei riferimenti](http://msdn.microsoft.com/library/windows/desktop/ms693431) e [IUnknown:: Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[9 NVC_MFCOleContainer](../../mfc/codesnippet/cpp/coledispatchdriver-class_5.cpp)]  
  
##  <a name="m_lpdispatch"></a>COleDispatchDriver::m_lpDispatch  
 Il puntatore per il `IDispatch` interfaccia associata a questo `COleDispatchDriver`.  
  
```  
LPDISPATCH m_lpDispatch;  
```  
  
### <a name="remarks"></a>Note  
 Il `m_lpDispatch` (membro dati) è una variabile pubblica di tipo `LPDISPATCH`.  
  
 Per ulteriori informazioni, vedere [IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleDispatchDriver::AttachDispatch](#attachdispatch).  
  
##  <a name="operator_eq"></a>COleDispatchDriver::operator =  
 Copia il valore di origine nel `COleDispatchDriver` oggetto.  
  
```  
const COleDispatchDriver& operator=(const COleDispatchDriver& dispatchSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `dispatchSrc`  
 Un puntatore a un oggetto esistente `COleDispatchDriver` oggetto.  
  
##  <a name="operator_lpdispatch"></a>COleDispatchDriver::operator LPDISPATCH  
 Accede sottostante `IDispatch` puntatore di `COleDispatchDriver` oggetto.  
  
```  
operator LPDISPATCH();
```   
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer n.&8;](../../mfc/codesnippet/cpp/coledispatchdriver-class_6.cpp)]  
  
##  <a name="releasedispatch"></a>COleDispatchDriver::ReleaseDispatch  
 Versioni di `IDispatch` connessione. Per ulteriori informazioni, vedere [che implementa l'interfaccia IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945)  
  
```  
void ReleaseDispatch();
```  
  
### <a name="remarks"></a>Note  
 Se il rilascio automatico è stato impostato per questa connessione, questa funzione chiama **IDispatch::Release** prima di rilasciare l'interfaccia.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleDispatchDriver::AttachDispatch](#attachdispatch).  
  
##  <a name="setproperty"></a>COleDispatchDriver:: SetProperty  
 Imposta la proprietà dell'oggetto OLE specificata da `dwDispID`.  
  
```  
void AFX_CDECL SetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp, ...);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDispID`  
 Identifica la proprietà da impostare.  
  
 `vtProp`  
 Specifica il tipo della proprietà da impostare. I valori possibili, vedere la sezione Osservazioni per [COleDispatchDriver:: InvokeHelper](#invokehelper).  
  
 *...*  
 Un singolo parametro del tipo specificato da `vtProp`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer&#7;](../../mfc/codesnippet/cpp/coledispatchdriver-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CALCDRIV](../../visual-cpp-samples.md)   
 [Esempio ACDUAL](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)

