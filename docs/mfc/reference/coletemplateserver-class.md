---
title: Classe COleTemplateServer
ms.date: 11/04/2016
f1_keywords:
- COleTemplateServer
- AFXDISP/COleTemplateServer
- AFXDISP/COleTemplateServer::COleTemplateServer
- AFXDISP/COleTemplateServer::ConnectTemplate
- AFXDISP/COleTemplateServer::Unregister
- AFXDISP/COleTemplateServer::UpdateRegistry
helpviewer_keywords:
- COleTemplateServer [MFC], COleTemplateServer
- COleTemplateServer [MFC], ConnectTemplate
- COleTemplateServer [MFC], Unregister
- COleTemplateServer [MFC], UpdateRegistry
ms.assetid: 47a2887d-8162-4993-a842-a784177c7f5c
ms.openlocfilehash: f66936c597b8c595dc21ae6994d7af0477e8d2aa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50528648"
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
|[COleTemplateServer::Unregister](#unregister)|Annulla la registrazione di modello di documento associato.|
|[COleTemplateServer:: UpdateRegistry](#updateregistry)|Registra il tipo di documento con il Registro di sistema OLE.|

## <a name="remarks"></a>Note

Questa classe è derivata dalla classe [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md); in genere, è possibile usare `COleTemplateServer` direttamente anziché derivare la propria classe. `COleTemplateServer` Usa un' [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) oggetto per gestire i documenti del server. Usare `COleTemplateServer` durante l'implementazione di un server completo, vale a dire, un server che può essere eseguito come applicazione autonoma. Server completo sono in genere applicazioni di multiple document interface (MDI), anche se sono supportate applicazioni single document interface (SDI). Uno `COleTemplateServer` è necessario per ogni tipo di documento server un'applicazione supporta l'oggetto; ovvero se l'applicazione server supporta i fogli di lavoro e grafici, è necessario disporre di due `COleTemplateServer` oggetti.

`COleTemplateServer` esegue l'override di `OnCreateInstance` funzione membro definita da `COleObjectFactory`. Questa funzione membro viene chiamata dal framework per creare un oggetto C++ del tipo appropriato.

Per altre informazioni sui server, vedere l'articolo [server: implementazione di un Server](../../mfc/servers-implementing-a-server.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)

`COleTemplateServer`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="coletemplateserver"></a>  COleTemplateServer::COleTemplateServer

Costruisce un oggetto `COleTemplateServer`.

```
COleTemplateServer();
```

### <a name="remarks"></a>Note

Per una breve descrizione dell'utilizzo dei `COleTemplateServer` classe, vedere la [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md) Cenni preliminari sulla classe.

##  <a name="connecttemplate"></a>  COleTemplateServer::ConnectTemplate

Connette il modello di documento a cui punta *pDocTemplate* sottostante [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md) oggetto.

```
void ConnectTemplate(
    REFCLSID clsid,
    CDocTemplate* pDocTemplate,
    BOOL bMultiInstance);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
Riferimento per l'ID della classe OLE che richiede il modello.

*pDocTemplate*<br/>
Puntatore al modello di documento.

*bMultiInstance*<br/>
Indica se una singola istanza dell'applicazione può supportare più creazioni di istanza. Se TRUE, più istanze dell'applicazione vengono avviate per ogni richiesta creare un oggetto.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [CLSID chiave](/windows/desktop/com/clsid-key-hklm) nel SDK di Windows.

##  <a name="unregister"></a>  COleTemplateServer::Unregister

Annulla la registrazione di modello di documento associato.

```
BOOL Unregister();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Note

EnterRemarks

##  <a name="updateregistry"></a>  COleTemplateServer:: UpdateRegistry

Carica le informazioni sul tipo di file dalla stringa di modello di documento e lo inserisce nel Registro di sistema OLE.

```
void UpdateRegistry(
    OLE_APPTYPE nAppType = OAT_INPLACE_SERVER,
    LPCTSTR* rglpszRegister = NULL,
    LPCTSTR* rglpszOverwrite = NULL,
    BOOL bRegister = TRUE);
```

### <a name="parameters"></a>Parametri

*nAppType*<br/>
Un valore dall'enumerazione OLE_APPTYPE, definito nel AFXDISP. H. Può avere uno dei valori seguenti:

- OAT_INPLACE_SERVER Server con interfaccia utente completa di server.

- OAT_SERVER Server supporta solo l'incorporamento.

- OAT_CONTAINER contenitore supporta collegamenti a oggetti incorporati.

- Oggetto OAT_DISPATCH_OBJECT è `IDispatch`-in grado di supportare.

- Server OAT_DOC_OBJECT_SERVER supporta sia l'incorporamento e modello del componente oggetto del documento.

*rglpszRegister*<br/>
Un elenco di voci che viene scritto nel Registro di sistema solo se non esiste alcuna voce.

*rglpszOverwrite*<br/>
Un elenco di voci che viene scritto nel Registro di sistema indipendentemente dall'esistono di tutte le voci precedenti.

*bRegistrazione immediata*<br/>
Determina se la classe deve essere registrato. Se *bRegistrazione immediata* è TRUE, la classe è registrata con il Registro di sistema. In caso contrario, Annulla la registrazione della classe.

### <a name="remarks"></a>Note

Le informazioni di registrazione viene caricate mediante una chiamata a [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). La lunghezza delle sottostringhe recuperati è quelli individuati dagli indici `regFileTypeId`, `regFileTypeName`, e `fileNewName`, come descritto nel `GetDocString` le pagine di riferimento.

Se il `regFileTypeId` sottostringa è vuota o se la chiamata a `GetDocString` ha esito negativo per qualsiasi altro motivo, questa funzione ha esito negativo e le informazioni del file non viene immesso nel Registro di sistema.

Le informazioni negli argomenti *rglpszRegister* e *rglpszOverwrite* viene scritto nel Registro di sistema tramite una chiamata a [AfxOleRegisterServerClass](application-control.md#afxoleregisterserverclass). Le informazioni predefinite, che viene registrate quando i due argomenti sono NULL, sono adatte per la maggior parte delle applicazioni. Per informazioni sulla struttura delle informazioni in questi argomenti, vedere `AfxOleRegisterServerClass`.

Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../visual-cpp-samples.md)<br/>
[Classe COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)<br/>
[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)
