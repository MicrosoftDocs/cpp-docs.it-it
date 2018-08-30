---
title: Classe COleDispatchDriver | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- COleDispatchDriver [MFC], COleDispatchDriver
- COleDispatchDriver [MFC], AttachDispatch
- COleDispatchDriver [MFC], CreateDispatch
- COleDispatchDriver [MFC], DetachDispatch
- COleDispatchDriver [MFC], GetProperty
- COleDispatchDriver [MFC], InvokeHelper
- COleDispatchDriver [MFC], ReleaseDispatch
- COleDispatchDriver [MFC], SetProperty
- COleDispatchDriver [MFC], m_bAutoRelease
- COleDispatchDriver [MFC], m_lpDispatch
ms.assetid: 3ed98daf-cdc7-4374-8a0c-cf695a8d3657
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e25684e0adcace0510f74bdc98968ef52ad6d797
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43209568"
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
|[COleDispatchDriver::AttachDispatch](#attachdispatch)|Allega un' `IDispatch` connessione al `COleDispatchDriver` oggetto.|  
|[COleDispatchDriver:: CreateDispatch](#createdispatch)|Crea un' `IDispatch` connessione e lo collega al `COleDispatchDriver` oggetto.|  
|[COleDispatchDriver::DetachDispatch](#detachdispatch)|Scollega un `IDispatch` connessione, senza rilasciarlo.|  
|[COleDispatchDriver:: GetProperty](#getproperty)|Ottiene una proprietà di automazione.|  
|[COleDispatchDriver:: InvokeHelper](#invokehelper)|Helper per chiamare i metodi di automazione.|  
|[COleDispatchDriver::ReleaseDispatch](#releasedispatch)|Rilascia un `IDispatch` connessione.|  
|[COleDispatchDriver:: SetProperty](#setproperty)|Imposta una proprietà di automazione.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::operator =](#operator_eq)|Copia il valore di origine nel `COleDispatchDriver` oggetto.|  
|[COleDispatchDriver::operator LPDISPATCH](#operator_lpdispatch)|Accede a sottostante `IDispatch` puntatore.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::m_bAutoRelease](#m_bautorelease)|Specifica se rilasciare il `IDispatch` durante `ReleaseDispatch` o eliminazione degli oggetti.|  
|[COleDispatchDriver::m_lpDispatch](#m_lpdispatch)|Indica il puntatore per il `IDispatch` collegata a questa interfaccia `COleDispatchDriver`.|  
  
## <a name="remarks"></a>Note  
 `COleDispatchDriver` non è una classe di base.  
  
 Interfacce OLE dispatch forniscono accesso ai metodi e proprietà di un oggetto. Funzioni membro di `COleDispatchDriver` collegare, scollegare, creare e rilasciare una connessione di recapito di tipo `IDispatch`. Altre funzioni membro usano elenchi di argomenti variabili per semplificare la chiamata `IDispatch::Invoke`.  
  
 Questa classe può essere utilizzata direttamente, ma viene generalmente usato solo dalle classi create dalla procedura guidata Aggiungi classe. Quando si crea nuove classi C++ mediante l'importazione di una libreria dei tipi, le nuove classi derivano da `COleDispatchDriver`.  
  
 Per altre informazioni sull'uso di `COleDispatchDriver`, vedere gli articoli seguenti:  
  
- [Client di automazione](../../mfc/automation-clients.md)  
  
- [Server di automazione](../../mfc/automation-servers.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `COleDispatchDriver`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="attachdispatch"></a>  COleDispatchDriver::AttachDispatch  
 Chiamare la funzione membro `AttachDispatch` per collegare un puntatore `IDispatch` all'oggetto `COleDispatchDriver` . Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).  
  
```  
void AttachDispatch(
        LPDISPATCH lpDispatch,  
        BOOL bAutoRelease = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *lpDispatch*  
 Puntatore a un oggetto OLE `IDispatch` da collegare all'oggetto `COleDispatchDriver` .  
  
 *bAutoRelease*  
 Specifica se rilasciare l'invio quando l'oggetto esce dall'ambito.  
  
### <a name="remarks"></a>Note  
 Questa funzione rilascia qualsiasi puntatore `IDispatch` già collegato all'oggetto `COleDispatchDriver` .  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#3](../../mfc/codesnippet/cpp/coledispatchdriver-class_1.cpp)]  
  
##  <a name="coledispatchdriver"></a>  COleDispatchDriver::COleDispatchDriver  
 Costruisce un oggetto `COleDispatchDriver`.  
  
```  
COleDispatchDriver();  
COleDispatchDriver(LPDISPATCH lpDispatch, BOOL bAutoRelease = TRUE);  
  COleDispatchDriver(const COleDispatchDriver& dispatchSrc);
```  
  
### <a name="parameters"></a>Parametri  
 *lpDispatch*  
 Puntatore a un oggetto OLE `IDispatch` da collegare all'oggetto `COleDispatchDriver` .  
  
 *bAutoRelease*  
 Specifica se rilasciare l'invio quando l'oggetto esce dall'ambito.  
  
 *dispatchSrc*  
 Fare riferimento a un oggetto esistente `COleDispatchDriver` oggetto.  
  
### <a name="remarks"></a>Note  
 Il modulo `COleDispatchDriver`( `LPDISPATCH lpDispatch`, **BOOL**`bAutoRelease` = **TRUE**) si connette il [IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) interfaccia.  
  
 Il modulo `COleDispatchDriver`( **const**`COleDispatchDriver`& `dispatchSrc`) copia un oggetto esistente `COleDispatchDriver` dell'oggetto e incrementa il conteggio dei riferimenti.  
  
 Il modulo `COleDispatchDriver`() consente di creare un `COleDispatchDriver` dell'oggetto, ma non si connette il `IDispatch` interfaccia. Prima di usare `COleDispatchDriver`() senza argomenti, è necessario connettersi un' `IDispatch` tramite [COleDispatchDriver:: CreateDispatch](#createdispatch) oppure [COleDispatchDriver::AttachDispatch](#attachdispatch). Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [COleDispatchDriver:: CreateDispatch](#createdispatch).  
  
##  <a name="createdispatch"></a>  COleDispatchDriver:: CreateDispatch  
 Crea un' [IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) oggetto di interfaccia e lo collega al `COleDispatchDriver` oggetto.  
  
```  
BOOL CreateDispatch(
        REFCLSID clsid,  
        COleException* pError = NULL);

 
BOOL CreateDispatch(
    LPCTSTR lpszProgID,  
    COleException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *clsid*  
 ID di classe dell'oggetto connessione `IDispatch` da creare.  
  
 *pError*  
 Puntatore a un oggetto eccezione OLE, che conterrà il codice stato risultante dalla creazione.  
  
 *lpszProgID*  
 Puntatore all'identificatore a livello di codice, ad esempio "Excel.Document.5", dell'oggetto di automazione per il quale viene creato l'oggetto distribuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di esito positivo; in caso contrario, 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#4](../../mfc/codesnippet/cpp/coledispatchdriver-class_2.cpp)]  
  
##  <a name="detachdispatch"></a>  COleDispatchDriver::DetachDispatch  
 Scollega corrente `IDispatch` connessione da questo oggetto.  
  
```  
LPDISPATCH DetachDispatch();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a OLE precedentemente associata `IDispatch` oggetto.  
  
### <a name="remarks"></a>Note  
 Il `IDispatch` non viene rilasciato.  
  
 Per altre informazioni sul tipo LPDISPATCH, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#5](../../mfc/codesnippet/cpp/coledispatchdriver-class_3.cpp)]  
  
##  <a name="getproperty"></a>  COleDispatchDriver:: GetProperty  
 Ottiene la proprietà dell'oggetto specificata da *dwDispID*.  
  
```  
void GetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    void* pvProp) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica la proprietà da recuperare.  
  
 *vtProp*  
 Specifica la proprietà da recuperare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](#invokehelper).  
  
 *pvProp*  
 Indirizzo della variabile che riceverà il valore della proprietà. Deve corrispondere al tipo specificato da *vtProp*.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#6](../../mfc/codesnippet/cpp/coledispatchdriver-class_4.cpp)]  
  
##  <a name="invokehelper"></a>  COleDispatchDriver:: InvokeHelper  
 Chiama il metodo dell'oggetto o la proprietà specificata da *dwDispID*, nel contesto specificato dai *wFlags*.  
  
```  
void AFX_CDECL InvokeHelper(
        DISPID dwDispID,  
        WORD wFlags,  
        VARTYPE vtRet,  
        void* pvRet,  
        const BYTE* pbParamInfo, ...);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica il metodo o la proprietà da richiamare.  
  
 *wFlags*  
 Flag che descrivono il contesto della chiamata a `IDispatch::Invoke`. . Per un elenco di valori possibili, vedere la *wFlags* nel parametro [IDispatch:: Invoke](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke) nel SDK di Windows.  
  
 *vtRet*  
 Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione Osservazioni.  
  
 *pvRet*  
 Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.  
  
 *pbParamInfo*  
 Puntatore a una stringa con terminazione null di byte che specifica i tipi di parametri che seguono *pbParamInfo*.  
  
 *...*  
 Elenco di parametri dei tipi specificati nella variabile *pbParamInfo*.  
  
### <a name="remarks"></a>Note  
 Il *pbParamInfo* parametro specifica i tipi dei parametri passati al metodo o proprietà. L'elenco di argomenti variabile è rappresentato da **...** nella dichiarazione di sintassi.  
  
 I valori possibili per il *vtRet* argomento vengono forniti dall'enumerazione VARENUM. I valori possibili sono i seguenti:  
  
|Simbolo|Tipo restituito|  
|------------|-----------------|  
|VT_EMPTY|**void**|  
|VT_I2|**short**|  
|VT_I4|**long**|  
|VT_R4|**float**|  
|VT_R8|**double**|  
|VT_CY|**CY**|  
|VT_DATE|**DATE**|  
|VT_BSTR|BSTR|  
|VT_DISPATCH|LPDISPATCH|  
|VT_ERROR|SCODE|  
|VT_BOOL|**BOOL**|  
|VT_VARIANT|**VARIANT**|  
|VT_UNKNOWN|LPUNKNOWN|  
  
 Il *pbParamInfo* argomento è un elenco delimitato da spazio **VTS _** costanti. Uno o più di questi valori, separati da spazi (non virgole), specificano l'elenco dei parametri della funzione. I valori possibili sono elencati con il [EVENT_CUSTOM](event-maps.md#event_custom) macro.  
  
 Questa funzione converte i parametri in valori VARIANTARG, quindi richiama il [IDispatch:: Invoke](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke) (metodo). Se la chiamata a `Invoke` ha esito negativo, questa funzione genera un'eccezione. Se il SCODE (codice di stato) restituito da `IDispatch::Invoke` è DISP_E_EXCEPTION, questa funzione genera un [COleException](../../mfc/reference/coleexception-class.md) dell'oggetto; in caso contrario, genera una [COleDispatchException](../../mfc/reference/coledispatchexception-class.md).  
  
 Per altre informazioni, vedere [VARIANTARG](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagvariant), [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface), [IDispatch:: Invoke](/previous-versions/windows/desktop/api/oaidl/nf-oaidl-idispatch-invoke), e [Structure of COM Error Codes](/windows/desktop/com/structure-of-com-error-codes) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [COleDispatchDriver:: CreateDispatch](#createdispatch).  
  
##  <a name="m_bautorelease"></a>  COleDispatchDriver::m_bAutoRelease  
 Se TRUE, l'oggetto COM accessibile [m_lpDispatch](#m_lpdispatch) verrà rilasciato automaticamente quando [ReleaseDispatch](#releasedispatch) viene chiamato o quando questo `COleDispatchDriver` oggetto viene eliminato definitivamente.  
  
```  
BOOL m_bAutoRelease;  
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `m_bAutoRelease` è impostata su TRUE nel costruttore.  
  
 Per altre informazioni sul rilascio di oggetti COM, vedere [che implementa il conteggio dei riferimenti](/windows/desktop/com/implementing-reference-counting) e [IUnknown:: Release](/windows/desktop/api/unknwn/nf-unknwn-iunknown-release) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#9](../../mfc/codesnippet/cpp/coledispatchdriver-class_5.cpp)]  
  
##  <a name="m_lpdispatch"></a>  COleDispatchDriver::m_lpDispatch  
 Il puntatore per il `IDispatch` collegata a questa interfaccia `COleDispatchDriver`.  
  
```  
LPDISPATCH m_lpDispatch;  
```  
  
### <a name="remarks"></a>Note  
 Il `m_lpDispatch` membro dati è una variabile pubblica di tipo LPDISPATCH.  
  
 Per altre informazioni, vedere [IDispatch](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [COleDispatchDriver::AttachDispatch](#attachdispatch).  
  
##  <a name="operator_eq"></a>  COleDispatchDriver::operator =  
 Copia il valore di origine nel `COleDispatchDriver` oggetto.  
  
```  
const COleDispatchDriver& operator=(const COleDispatchDriver& dispatchSrc);
```  
  
### <a name="parameters"></a>Parametri  
 *dispatchSrc*  
 Un puntatore a un oggetto esistente `COleDispatchDriver` oggetto.  
  
##  <a name="operator_lpdispatch"></a>  COleDispatchDriver::operator LPDISPATCH  
 Accede a sottostante `IDispatch` puntatore del `COleDispatchDriver` oggetto.  
  
```  
operator LPDISPATCH();
```   
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#8](../../mfc/codesnippet/cpp/coledispatchdriver-class_6.cpp)]  
  
##  <a name="releasedispatch"></a>  COleDispatchDriver::ReleaseDispatch  
 Versioni di `IDispatch` connessione. Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface)  
  
```  
void ReleaseDispatch();
```  
  
### <a name="remarks"></a>Note  
 Se il rilascio automatico è stato impostato per questa connessione, questa funzione chiama `IDispatch::Release` prima di rilasciare l'interfaccia.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [COleDispatchDriver::AttachDispatch](#attachdispatch).  
  
##  <a name="setproperty"></a>  COleDispatchDriver:: SetProperty  
 Imposta la proprietà dell'oggetto OLE specificata da *dwDispID*.  
  
```  
void AFX_CDECL SetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp, ...);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica la proprietà da impostare.  
  
 *vtProp*  
 Specifica il tipo della proprietà da impostare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](#invokehelper).  
  
 *...*  
 Un singolo parametro del tipo specificato da *vtProp*.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#7](../../mfc/codesnippet/cpp/coledispatchdriver-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CALCDRIV](../../visual-cpp-samples.md)   
 [Esempio MFC ACDUAL](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
