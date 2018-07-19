---
title: Classe CConnectionPoint | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CConnectionPoint
- AFXDISP/CConnectionPoint
- AFXDISP/CConnectionPoint::CConnectionPoint
- AFXDISP/CConnectionPoint::GetConnections
- AFXDISP/CConnectionPoint::GetContainer
- AFXDISP/CConnectionPoint::GetIID
- AFXDISP/CConnectionPoint::GetMaxConnections
- AFXDISP/CConnectionPoint::GetNextConnection
- AFXDISP/CConnectionPoint::GetStartPosition
- AFXDISP/CConnectionPoint::OnAdvise
- AFXDISP/CConnectionPoint::QuerySinkInterface
dev_langs:
- C++
helpviewer_keywords:
- CConnectionPoint [MFC], CConnectionPoint
- CConnectionPoint [MFC], GetConnections
- CConnectionPoint [MFC], GetContainer
- CConnectionPoint [MFC], GetIID
- CConnectionPoint [MFC], GetMaxConnections
- CConnectionPoint [MFC], GetNextConnection
- CConnectionPoint [MFC], GetStartPosition
- CConnectionPoint [MFC], OnAdvise
- CConnectionPoint [MFC], QuerySinkInterface
ms.assetid: f0f23a1e-5e8c-41a9-aa6c-1a4793b28e8f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7b092c6a097d39c3114193c578bc37c179ca0df7
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37336199"
---
# <a name="cconnectionpoint-class"></a>Classe CConnectionPoint
Definisce un tipo speciale di interfaccia utilizzata per comunicare con altri oggetti OLE, denominata "punto di connessione".  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CConnectionPoint : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CConnectionPoint::CConnectionPoint](#cconnectionpoint)|Costruisce un oggetto `CConnectionPoint`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CConnectionPoint:: GetConnections](#getconnections)|Recupera tutti i punti di connessione in una mappa delle connessioni.|  
|[CConnectionPoint::GetContainer](#getcontainer)|Recupera il contenitore del controllo cui appartiene la mappa delle connessioni.|  
|[CConnectionPoint:: GetIID](#getiid)|Recupera l'ID di interfaccia di un punto di connessione.|  
|[CConnectionPoint::GetMaxConnections](#getmaxconnections)|Recupera il numero massimo di punti di connessione supportati da un controllo.|  
|[CConnectionPoint:: GetNextConnection](#getnextconnection)|Recupera un puntatore all'elemento connessione al *pos*.|  
|[CConnectionPoint::GetStartPosition](#getstartposition)|Inizia un'iterazione di mappa, restituendo un valore di posizione che può essere passato a un `GetNextConnection` chiamare.|  
|[CConnectionPoint::OnAdvise](#onadvise)|Chiamato dal framework quando la definizione o le connessioni di rilievo.|  
|[CConnectionPoint::QuerySinkInterface](#querysinkinterface)|Recupera un puntatore all'interfaccia sink richiesto.|  
  
## <a name="remarks"></a>Note  
 A differenza dei normali interfacce OLE, che consentono di implementare ed esporre le funzionalità di un controllo OLE, un punto di connessione implementa un'interfaccia in uscita che è in grado di avviare le operazioni di altri oggetti, ad esempio la generazione degli eventi e le notifiche di modifica.  
  
 Una connessione è costituita da due parti: l'oggetto che chiama l'interfaccia, denominata "source" e l'oggetto che implementa l'interfaccia, chiamata "sink". Tramite l'esposizione di un punto di connessione, un'origine consente ai sink stabilire connessioni a se stesso. Tramite il meccanismo di punto di connessione, un oggetto di origine Ottiene un puntatore all'implementazione del sink di un set di funzioni membro. Ad esempio, per generare un evento implementato dal sink, origine possa chiamare il metodo appropriato dell'implementazione del sink.  
  
 Per impostazione predefinita, un `COleControl`-classe derivata implementa due punti di connessione: uno per gli eventi e uno per la proprietà le notifiche di modifica. Queste connessioni vengono usate, rispettivamente, per la generazione dell'evento e per avvisare un sink (ad esempio, il contenitore del controllo) quando un valore della proprietà è stato modificato. Il supporto viene fornito anche per controlli OLE implementare i punti di connessione aggiuntive. Per ogni punto di connessione aggiuntive implementata nella classe del controllo, è necessario dichiarare una "parte di connessione" che implementa il punto di connessione. Se si implementano uno o più punti di connessione, è necessario anche dichiarare un singolo "mappa delle connessioni" nella classe del controllo.  
  
 Nell'esempio seguente viene illustrato un mapping semplice connessione e un punto di connessione per il `Sample` controllo OLE, composto da due frammenti di codice: la prima parte viene dichiarata la mappa delle connessioni e un punto; il secondo implementa questa mappa e punto. Il primo frammento viene inserito nella dichiarazione di classe del controllo, sotto il **protetti** sezione:  
  
 [!code-cpp[NVC_MFCConnectionPoints#7](../../mfc/codesnippet/cpp/cconnectionpoint-class_1.h)]  
  
 Le macro BEGIN_CONNECTION_PART ed END_CONNECTION_PART viene dichiarano una classe incorporata, `XSampleConnPt` (derivata da `CConnectionPoint`) che implementa il punto di connessione specifico. Se si desidera eseguire l'override di qualsiasi `CConnectionPoint` funzioni membro, oppure aggiungere le funzioni di membro personalizzata, dichiarare le variabili tra questi due macro. Ad esempio, CONNECTION_IID (macro) esegue l'override di `CConnectionPoint::GetIID` funzione membro quando viene inserita tra questi due macro.  
  
 Il secondo frammento di codice viene inserito nel file di implementazione (. CPP) della classe del controllo. Questo codice implementa la mappa delle connessioni, che include il punto di connessione aggiuntive, `SampleConnPt`:  
  
 [!code-cpp[NVC_MFCConnectionPoints#2](../../mfc/codesnippet/cpp/cconnectionpoint-class_2.cpp)]  
  
 Dopo che sono stati inseriti questi frammenti di codice, il controllo OLE di esempio espone un punto di connessione per il `ISampleSink` interfaccia.  
  
 In genere, i punti di connessione supportano "il multicasting", ovvero la possibilità di trasmettere più nei sink connessa all'interfaccia stessa. Il frammento di codice seguente viene illustrato come eseguire il multicast scorrendo ogni sink in un punto di connessione:  
  
 [!code-cpp[NVC_MFCConnectionPoints#4](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]  
  
 Questo esempio recupera il set corrente di connessioni nel `SampleConnPt` punto di connessione con una chiamata a `CConnectionPoint::GetConnections`. Quindi esegue l'iterazione attraverso le connessioni e le chiamate `ISampleSink::SinkFunc` su tutte le connessioni attive.  
  
 Per altre informazioni sull'uso `CConnectionPoint`, vedere l'articolo [punti di connessione](../../mfc/connection-points.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CConnectionPoint`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="cconnectionpoint"></a>  CConnectionPoint::CConnectionPoint  
 Costruisce un oggetto `CConnectionPoint`.  
  
```  
CConnectionPoint();
```  
  
##  <a name="getconnections"></a>  CConnectionPoint:: GetConnections  
 Chiamare questa funzione per recuperare tutte le connessioni attive per un punto di connessione.  
  
```  
const CPtrArray* GetConnections();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una matrice di connessioni attive (sink). Alcuni degli indicatori di misura della matrice può essere NULL. Ogni puntatore non NULL in questa matrice può essere convertito in modo sicuro a un puntatore all'interfaccia sink con un operatore cast.  
  
##  <a name="getcontainer"></a>  CConnectionPoint::GetContainer  
 Chiamata eseguita dal framework per recuperare il `IConnectionPointContainer` del punto di connessione.  
  
```  
virtual LPCONNECTIONPOINTCONTAINER GetContainer();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un puntatore al contenitore di; in caso contrario NULL.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere implementata da BEGIN_CONNECTION_PART (macro).  
  
##  <a name="getiid"></a>  CConnectionPoint:: GetIID  
 Chiamata eseguita dal framework per recuperare l'ID di interfaccia di un punto di connessione.  
  
```  
virtual REFIID GetIID() = 0;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'ID dell'interfaccia. del punto di connessione  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per restituire l'ID di interfaccia per questo punto di connessione.  
  
##  <a name="getmaxconnections"></a>  CConnectionPoint::GetMaxConnections  
 Chiamata eseguita dal framework per recuperare il numero massimo di connessioni supportate dal punto di connessione.  
  
```  
virtual int GetMaxConnections();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero massimo di connessioni supportate dal controllo, oppure -1 se nessun limite.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita restituisce -1, che indica nessun limite.  
  
 Eseguire l'override di questa funzione se si desidera limitare il numero di sink che possono connettersi al controllo.  
  
##  <a name="getnextconnection"></a>  CConnectionPoint:: GetNextConnection  
 Recupera un puntatore all'elemento connessione al *pos*.  
  
```  
LPUNKNOWN GetNextConnection(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *POS*  
 Specifica un riferimento a un valore di posizione restituito da una precedente `GetNextConnection` oppure [GetStartPosition](#getstartposition) chiamare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento di connessione specificato da *pos*, o NULL.  
  
### <a name="remarks"></a>Note  
 Questa funzione è particolarmente utile per l'iterazione di tutti gli elementi della mappa di connessione. Quando si esegue l'iterazione, ignorare gli spazi vuoti restituiti da questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCConnectionPoints#4](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]  
  
##  <a name="getstartposition"></a>  CConnectionPoint::GetStartPosition  
 Inizia un'iterazione di mappa, restituendo un valore di posizione che può essere passato a un [GetNextConnection](#getnextconnection) chiamare.  
  
```  
POSITION GetStartPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di posizione che indica una posizione di inizio per l'iterazione della mappa; o NULL se la mappa è vuota.  
  
### <a name="remarks"></a>Note  
 La sequenza di iterazione non è stimabile; Pertanto, il "primo elemento nella mappa" non ha alcun significato speciale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CConnectionPoint:: GetNextConnection](#getnextconnection).  
  
##  <a name="onadvise"></a>  CConnectionPoint::OnAdvise  
 Chiamato dal framework quando una connessione viene stabilita o interrotta.  
  
```  
virtual void OnAdvise(BOOL bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 *bAdvise*  
 TRUE se viene stabilita una connessione; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione.  
  
 Eseguire l'override di questa funzione per ricevere notifica quando i sink di connettersi o disconnettersi dal punto di connessione.  
  
##  <a name="querysinkinterface"></a>  CConnectionPoint::QuerySinkInterface  
 Recupera un puntatore all'interfaccia sink richiesto.  
  
```  
virtual HRESULT QuerySinkInterface(
    LPUNKNOWN pUnkSink,  
    void** ppInterface);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkSink*  
 L'identificatore dell'interfaccia sink richiesto.  
  
 *ppInterface*  
 Un puntatore al puntatore a interfaccia identificato dal *pUnkSink*. Se l'oggetto non supporta questa interfaccia, \* *ppInterface* è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)

