---
title: Classe CConnectionPoint | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- CConnectionPoint class
ms.assetid: f0f23a1e-5e8c-41a9-aa6c-1a4793b28e8f
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: a511f252bf921433d070059518e6e67b952680eb
ms.lasthandoff: 02/24/2017

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
|[CConnectionPoint:: GetConnections](#getconnections)|Recupera tutti i punti di connessione in una mappa di connessioni.|  
|[CConnectionPoint::GetContainer](#getcontainer)|Recupera il contenitore del controllo cui appartiene la mappa delle connessioni.|  
|[CConnectionPoint:: GetIID](#getiid)|Recupera l'ID di interfaccia di un punto di connessione.|  
|[CConnectionPoint::GetMaxConnections](#getmaxconnections)|Recupera il numero massimo di punti di connessione supportati da un controllo.|  
|[CConnectionPoint:: GetNextConnection](#getnextconnection)|Recupera un puntatore all'elemento di connessione in `pos`.|  
|[CConnectionPoint::GetStartPosition](#getstartposition)|Inizia un'iterazione mappa restituendo un **posizione** che può essere passato a un `GetNextConnection` chiamare.|  
|[CConnectionPoint::OnAdvise](#onadvise)|Chiamato dal framework quando stabilire o interrompere le connessioni.|  
|[CConnectionPoint::QuerySinkInterface](#querysinkinterface)|Recupera un puntatore all'interfaccia sink richiesto.|  
  
## <a name="remarks"></a>Note  
 A differenza delle normale interfacce OLE, che consentono di implementare ed esporre le funzionalità di un controllo OLE, un punto di connessione implementa un'interfaccia in uscita che è in grado di avviare azioni su altri oggetti, ad esempio la generazione degli eventi e notifiche di modifica.  
  
 Una connessione è costituita da due parti: oggetto che chiama l'interfaccia, denominata "source" e l'oggetto che implementa l'interfaccia, denominato "sink". Tramite l'esposizione di un punto di connessione, un'origine consente ai sink di stabilire connessioni a se stesso. Tramite il meccanismo dei punti di connessione, un oggetto di origine Ottiene un puntatore all'implementazione del sink di un set di funzioni membro. Ad esempio, per generare un evento implementato dal sink, l'origine può chiamare il metodo appropriato dell'implementazione del sink.  
  
 Per impostazione predefinita, un `COleControl`-classe derivata implementa due punti di connessione: uno per gli eventi e uno per la proprietà notifiche di modifica. Queste connessioni vengono utilizzate, rispettivamente, per la generazione dell'evento e per notificare quando un sink (ad esempio, il contenitore del controllo) un valore della proprietà è stato modificato. È anche fornire supporto per controlli OLE implementare i punti di connessione aggiuntive. Per ciascun punto di connessione aggiuntive implementata nella classe del controllo, è necessario dichiarare una "parte di connessione" che implementa il punto di connessione. Se si implementano uno o più punti di connessione, è inoltre necessario dichiarare un singolo "mappa delle connessioni" nella classe del controllo.  
  
 Nell'esempio seguente viene illustrata una mappa di connessione semplice e un punto di connessione per il `Sample` controllo OLE, costituito da due frammenti di codice: la prima parte dichiara la mappa delle connessioni e punto, il secondo implementa questa mappa e punto. Il primo frammento viene inserito nella dichiarazione della classe del controllo, sotto il `protected` sezione:  
  
 [!code-cpp[NVC_MFCConnectionPoints&#7;](../../mfc/codesnippet/cpp/cconnectionpoint-class_1.h)]  
  
 Il `BEGIN_CONNECTION_PART` e `END_CONNECTION_PART` macro dichiarano una classe incorporata, `XSampleConnPt` (derivato da `CConnectionPoint`) che implementa questo particolare punto di connessione. Se si desidera eseguire l'override di qualsiasi `CConnectionPoint` funzioni membro, oppure aggiungere funzioni di membro personalizzata, dichiararle tra queste due macro. Ad esempio, il `CONNECTION_IID` macro esegue l'override di `CConnectionPoint::GetIID` funzione membro quando viene inserito tra queste due macro.  
  
 Nel secondo frammento di codice viene inserito nel file di implementazione (. CPP) della classe di controlli. Questo codice implementa la mappa delle connessioni, che include il punto di connessione aggiuntive, `SampleConnPt`:  
  
 [!code-cpp[NVC_MFCConnectionPoints n.&2;](../../mfc/codesnippet/cpp/cconnectionpoint-class_2.cpp)]  
  
 Una volta inseriti questi frammenti di codice, il controllo OLE di esempio espone un punto di connessione per il **ISampleSink** interfaccia.  
  
 In genere, i punti di connessione supportano "multicasting", ovvero la possibilità di trasmettere a più sink connesso all'interfaccia stessa. Nel frammento di codice seguente mostra come eseguire il multicast, scorrere ogni sink in un punto di connessione:  
  
 [!code-cpp[NVC_MFCConnectionPoints n.&4;](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]  
  
 In questo esempio recupera il set corrente di connessioni nel `SampleConnPt` punto di connessione con una chiamata a `CConnectionPoint::GetConnections`. Viene quindi scorsa le connessioni e le chiamate `ISampleSink::SinkFunc` su ogni connessione attiva.  
  
 Per ulteriori informazioni sull'utilizzo di `CConnectionPoint`, vedere l'articolo [punti di connessione](../../mfc/connection-points.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CConnectionPoint`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="cconnectionpoint"></a>CConnectionPoint::CConnectionPoint  
 Costruisce un oggetto `CConnectionPoint`.  
  
```  
CConnectionPoint();
```  
  
##  <a name="getconnections"></a>CConnectionPoint:: GetConnections  
 Chiamare questa funzione per recuperare tutte le connessioni attive per un punto di connessione.  
  
```  
const CPtrArray* GetConnections();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una matrice di connessioni attive (sink). Alcuni degli indicatori di misura nella matrice può essere NULL. Ogni puntatore non NULL in questa matrice può essere convertito in modo sicuro a un puntatore all'interfaccia sink utilizzando un operatore cast.  
  
##  <a name="getcontainer"></a>CConnectionPoint::GetContainer  
 Chiamato dal framework per recuperare il **IConnectionPointContainer** per il punto di connessione.  
  
```  
virtual LPCONNECTIONPOINTCONTAINER GetContainer();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un puntatore al contenitore; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere implementata per il `BEGIN_CONNECTION_PART` (macro).  
  
##  <a name="getiid"></a>CConnectionPoint:: GetIID  
 Chiamato dal framework per recuperare l'ID di interfaccia di un punto di connessione.  
  
```  
virtual REFIID GetIID() = 0;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'ID dell'interfaccia. del punto di connessione  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per restituire l'ID di interfaccia per il punto di connessione.  
  
##  <a name="getmaxconnections"></a>CConnectionPoint::GetMaxConnections  
 Chiamato dal framework per recuperare il numero massimo di connessioni supportate dal punto di connessione.  
  
```  
virtual int GetMaxConnections();
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero massimo di connessioni supportate dal controllo, oppure -1 se nessun limite.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita restituisce -1, che indica nessun limite.  
  
 Eseguire l'override di questa funzione se si desidera limitare il numero di sink in grado di connettersi al controllo.  
  
##  <a name="getnextconnection"></a>CConnectionPoint:: GetNextConnection  
 Recupera un puntatore all'elemento di connessione in `pos`.  
  
```  
LPUNKNOWN GetNextConnection(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Specifica un riferimento a un **posizione** valore restituito da una precedente `GetNextConnection` o [GetStartPosition](#getstartposition) chiamare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento di connessione specificato da `pos`, o NULL.  
  
### <a name="remarks"></a>Note  
 Questa funzione è particolarmente utile per scorrere tutti gli elementi nella mappa di connessione. Quando si esegue l'iterazione, ignorare gli spazi vuoti restituiti da questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCConnectionPoints n.&4;](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]  
  
##  <a name="getstartposition"></a>CConnectionPoint::GetStartPosition  
 Inizia un'iterazione mappa restituendo un **posizione** che può essere passato a un [GetNextConnection](#getnextconnection) chiamare.  
  
```  
POSITION GetStartPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che indica una posizione iniziale per l'iterazione della mappa; o **NULL** se la mappa è vuota.  
  
### <a name="remarks"></a>Note  
 La sequenza di iterazione non è stimabile; Pertanto, il "primo elemento nella mappa" alcun significato speciale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CConnectionPoint:: GetNextConnection](#getnextconnection).  
  
##  <a name="onadvise"></a>CConnectionPoint::OnAdvise  
 Chiamato dal framework quando una connessione viene stabilita o interrotta.  
  
```  
virtual void OnAdvise(BOOL bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 `bAdvise`  
 **TRUE**, se una connessione viene stabilita; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione.  
  
 Eseguire l'override di questa funzione per ricevere notifica quando i sink di connettono o disconnettersi dal punto di connessione.  
  
##  <a name="querysinkinterface"></a>CConnectionPoint::QuerySinkInterface  
 Recupera un puntatore all'interfaccia sink richiesto.  
  
```  
virtual HRESULT QuerySinkInterface(
    LPUNKNOWN pUnkSink,  
    void** ppInterface);
```  
  
### <a name="parameters"></a>Parametri  
 `pUnkSink`  
 L'identificatore di interfaccia sink richiesta.  
  
 `ppInterface`  
 Un puntatore al puntatore a interfaccia identificato da `pUnkSink`. Se l'oggetto non supporta questa interfaccia, \* `ppInterface` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)


