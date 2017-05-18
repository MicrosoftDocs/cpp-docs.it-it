---
title: Classe COleTemplateServer | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleTemplateServer
- AFXDISP/COleTemplateServer
- AFXDISP/COleTemplateServer::COleTemplateServer
- AFXDISP/COleTemplateServer::ConnectTemplate
- AFXDISP/COleTemplateServer::Unregister
- AFXDISP/COleTemplateServer::UpdateRegistry
dev_langs:
- C++
helpviewer_keywords:
- Automation servers [C++], implementing
- servers, OLE
- OLE server applications, managing server documents
- link containers [C++]
- visual editing, servers
- OLE link containers
- COleTemplateServer class
- OLE server applications, COleTemplateServer class
ms.assetid: 47a2887d-8162-4993-a842-a784177c7f5c
caps.latest.revision: 23
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: ea82939cd0e8a8ba5612c65d238be8ae9996ef08
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="coletemplateserver-class"></a>Classe COleTemplateServer
Utilizzata per i server di modifica visiva OLE, i server di automazione e i contenitori di collegamento (applicazioni che supportano collegamenti a incorporamenti).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleTemplateServer : public COleObjectFactory  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleTemplateServer::COleTemplateServer](#coletemplateserver)|Costruisce un oggetto `COleTemplateServer`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleTemplateServer::ConnectTemplate](#connecttemplate)|Si connette a un modello di documento sottostante `COleObjectFactory` oggetto.|  
|[COleTemplateServer::Unregister](#unregister)|Annulla la registrazione il modello di documento associato.|  
|[COleTemplateServer:: UpdateRegistry](#updateregistry)|Registra il tipo di documento con il Registro di sistema OLE.|  
  
## <a name="remarks"></a>Note  
 Questa classe è derivata dalla classe [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md); in genere, è possibile utilizzare `COleTemplateServer` direttamente anziché derivare la propria classe. `COleTemplateServer`utilizza un [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) oggetto per gestire i documenti del server. Utilizzare `COleTemplateServer` durante l'implementazione di un server completo, ovvero, un server che può essere eseguito come applicazione autonoma. Server completo sono in genere applicazioni di multiple document interface (MDI), anche se sono supportate applicazioni single document interface (SDI). Un `COleTemplateServer` oggetto necessario per ogni tipo di documento server supportata da un'applicazione, vale a dire, se l'applicazione server supporta i fogli di lavoro e grafici, è necessario disporre due `COleTemplateServer` oggetti.  
  
 `COleTemplateServer`esegue l'override di `OnCreateInstance` funzione membro definita da `COleObjectFactory`. Questa funzione membro viene chiamata dal framework per creare un oggetto C++ del tipo appropriato.  
  
 Per ulteriori informazioni sui server, vedere l'articolo [server: implementazione di un Server](../../mfc/servers-implementing-a-server.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)  
  
 `COleTemplateServer`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="coletemplateserver"></a>COleTemplateServer::COleTemplateServer  
 Costruisce un oggetto `COleTemplateServer`.  
  
```  
COleTemplateServer();
```  
  
### <a name="remarks"></a>Note  
 Per una breve descrizione dell'utilizzo di `COleTemplateServer` , vedere il [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md) Cenni preliminari sulla classe.  
  
##  <a name="connecttemplate"></a>COleTemplateServer::ConnectTemplate  
 Connette il modello di documento a cui puntato `pDocTemplate` sottostante [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md) oggetto.  
  
```  
void ConnectTemplate(
    REFCLSID clsid,  
    CDocTemplate* pDocTemplate,  
    BOOL bMultiInstance);
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 Riferimento all'ID di classe OLE che richiede il modello.  
  
 `pDocTemplate`  
 Puntatore al modello di documento.  
  
 `bMultiInstance`  
 Indica se una singola istanza dell'applicazione può supportare più istanze. Se **TRUE**, più istanze dell'applicazione vengono avviate per ogni richiesta per creare un oggetto.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="unregister"></a>COleTemplateServer::Unregister  
 Annulla la registrazione il modello di documento associato.  
  
```  
BOOL Unregister();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'operazione riesce; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 EnterRemarks  
  
##  <a name="updateregistry"></a>COleTemplateServer:: UpdateRegistry  
 Carica le informazioni sul tipo di file dalla stringa di modello di documento e le inserisce nel Registro di sistema OLE.  
  
```  
void UpdateRegistry(
    OLE_APPTYPE nAppType = OAT_INPLACE_SERVER,  
    LPCTSTR* rglpszRegister = NULL,  
    LPCTSTR* rglpszOverwrite = NULL,  
    BOOL bRegister = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nAppType`  
 Un valore di **OLE_APPTYPE** enumerazione, è definito in AFXDISP. H. Può essere uno dei valori seguenti:  
  
- `OAT_INPLACE_SERVER`Server dispone di server completo dell'interfaccia utente.  
  
- `OAT_SERVER`Il server supporta solo l'incorporamento.  
  
- `OAT_CONTAINER`Contenitore supporta collegamenti a oggetti incorporati.  
  
- `OAT_DISPATCH_OBJECT`Oggetto `IDispatch`-in grado di supportare.  
  
- **OAT_DOC_OBJECT_SERVER** Server supporta sia l'incorporamento e il modello di componente oggetto documento.  
  
 `rglpszRegister`  
 Un elenco di voci che viene scritto nel Registro di sistema solo se non esiste alcuna voce.  
  
 `rglpszOverwrite`  
 Un elenco di voci che viene scritto nel Registro di sistema indipendentemente dall'esistono di eventuali voci precedenti.  
  
 `bRegister`  
 Determina se la classe deve essere registrato. Se `bRegister` è **TRUE**, la classe viene registrata con il Registro di sistema. In caso contrario, Annulla la registrazione della classe.  
  
### <a name="remarks"></a>Note  
 Le informazioni di registrazione viene caricate mediante una chiamata a [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). La lunghezza delle sottostringhe recuperati è identificati dagli indici **regFileTypeId**, **regFileTypeName**, e **fileNewName**, come descritto nel `GetDocString` pagine di riferimento.  
  
 Se il **regFileTypeId** sottostringa è vuota o se la chiamata a `GetDocString` non riesce per qualsiasi altro motivo, questa funzione ha esito negativo e le informazioni del file non verrà inserite nel Registro di sistema.  
  
 Le informazioni negli argomenti di `rglpszRegister` e `rglpszOverwrite` viene scritto nel Registro di sistema tramite una chiamata a [AfxOleRegisterServerClass](application-control.md#afxoleregisterserverclass). Le informazioni predefinite, che viene registrate quando i due argomenti sono **NULL**, è adatto per la maggior parte delle applicazioni. Per informazioni sulla struttura delle informazioni in questi argomenti, vedere `AfxOleRegisterServerClass`.  
  
 Per ulteriori informazioni, vedere [che implementa l'interfaccia IDispatch](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [COleObjectFactory (classe)](../../mfc/reference/coleobjectfactory-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)   
 [Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)

