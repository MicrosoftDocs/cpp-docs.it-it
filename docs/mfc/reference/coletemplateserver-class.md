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
ms.openlocfilehash: 561da5060aae3c938dc3e55d0310718a881c1a3b
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753735"
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
|[COleTemplateServer::ConnectTemplate](#connecttemplate)|Connette un modello di `COleObjectFactory` documento all'oggetto sottostante.|
|[COleTemplateServer::Annulla registrazione](#unregister)|Annulla la registrazione del modello di documento associato.|
|[COleTemplateServer::UpdateRegistry](#updateregistry)|Registra il tipo di documento con il Registro di sistema OLE.|

## <a name="remarks"></a>Osservazioni

Questa classe è derivata dalla classe [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md); di solito, `COleTemplateServer` è possibile utilizzare direttamente piuttosto che derivare la propria classe. `COleTemplateServer`utilizza un oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per gestire i documenti del server. Utilizzare `COleTemplateServer` quando si implementa un server completo, ovvero un server che può essere eseguito come applicazione autonoma. I server completi sono in genere applicazioni MDI (Multiple Document Interface), anche se sono supportate le applicazioni SDI (Single Document Interface). È `COleTemplateServer` necessario un oggetto per ogni tipo di documento server supportato da un'applicazione; vale a dire, se l'applicazione server supporta sia `COleTemplateServer` fogli di lavoro che grafici, è necessario disporre di due oggetti.

`COleTemplateServer`esegue l'override `OnCreateInstance` della `COleObjectFactory`funzione membro definita da . Questa funzione membro viene chiamata dal framework per creare un oggetto di C , del tipo corretto.

Per ulteriori informazioni sui server, vedere l'articolo [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[COleObjectFactory (informazioni in due)](../../mfc/reference/coleobjectfactory-class.md)

`COleTemplateServer`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="coletemplateservercoletemplateserver"></a><a name="coletemplateserver"></a>COleTemplateServer::COleTemplateServer

Costruisce un oggetto `COleTemplateServer`.

```
COleTemplateServer();
```

### <a name="remarks"></a>Osservazioni

Per una breve descrizione dell'utilizzo della `COleTemplateServer` classe, vedere i cenni preliminari sulla classe [COleLinkingDoc.](../../mfc/reference/colelinkingdoc-class.md)

## <a name="coletemplateserverconnecttemplate"></a><a name="connecttemplate"></a>COleTemplateServer::ConnectTemplate

Connette il modello di documento a cui fa riferimento *pDocTemplate* all'oggetto [sottostante COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md) oggetto.

```cpp
void ConnectTemplate(
    REFCLSID clsid,
    CDocTemplate* pDocTemplate,
    BOOL bMultiInstance);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
Riferimento all'ID di classe OLE richiesta dal modello.

*pDocTemplate (in dottrina)*<br/>
Puntatore al modello di documento.

*bIstanzaMulti (int*<br/>
Indica se una singola istanza dell'applicazione può supportare più istanze. Se TRUE, vengono avviate più istanze dell'applicazione per ogni richiesta per creare un oggetto.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [chiave CLSID](/windows/win32/com/clsid-key-hklm) in Windows SDK.

## <a name="coletemplateserverunregister"></a><a name="unregister"></a>COleTemplateServer::Annulla registrazione

Annulla la registrazione del modello di documento associato.

```
BOOL Unregister();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

EnterRemarks

## <a name="coletemplateserverupdateregistry"></a><a name="updateregistry"></a>COleTemplateServer::UpdateRegistry

Carica le informazioni sul tipo di file dalla stringa del modello di documento e le inserisce nel Registro di sistema OLE.

```cpp
void UpdateRegistry(
    OLE_APPTYPE nAppType = OAT_INPLACE_SERVER,
    LPCTSTR* rglpszRegister = NULL,
    LPCTSTR* rglpszOverwrite = NULL,
    BOOL bRegister = TRUE);
```

### <a name="parameters"></a>Parametri

*nAppType (Tipo di inademiche*<br/>
Valore dell'enumerazione OLE_APPTYPE, definito in AFXDISP. H. Può avere uno dei seguenti valori:

- OAT_INPLACE_SERVER Server dispone di un'interfaccia utente server completa.

- OAT_SERVER Server supporta solo l'incorporamento.

- OAT_CONTAINER Container supporta i collegamenti agli oggetti incorporati.

- OAT_DISPATCH_OBJECT Object `IDispatch`è in grado.

- OAT_DOC_OBJECT_SERVER Server supporta sia l'incorporamento che il modello di componente Document Object.

*RglpszRegister*<br/>
Elenco di voci che viene scritto nel Registro di sistema solo se non esistono voci.

*RglpszOverwrite*<br/>
Elenco di voci scritte nel Registro di sistema indipendentemente dall'esistenza o meno di voci precedenti.

*bRegistrare*<br/>
Determina se la classe deve essere registrata. Se *bRegister* è TRUE, la classe viene registrata con il Registro di sistema. In caso contrario, annulla la registrazione della classe.

### <a name="remarks"></a>Osservazioni

Le informazioni di registrazione vengono caricate tramite una chiamata a [CDocTemplate::GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Le sottostringhe recuperate sono quelle `regFileTypeId`identificate dagli indici , `regFileTypeName`, e `fileNewName`, come descritto nelle pagine di `GetDocString` riferimento.

Se `regFileTypeId` la sottostringa è vuota `GetDocString` o se la chiamata a ha esito negativo per qualsiasi altro motivo, questa funzione ha esito negativo e le informazioni sul file non vengono immesse nel Registro di sistema.

Le informazioni contenute negli argomenti *rglpszRegister* e *rglpszOverwrite* vengono scritte nel Registro di sistema tramite una chiamata a [AfxOleRegisterServerClass](application-control.md#afxoleregisterserverclass). Le informazioni predefinite, che vengono registrate quando i due argomenti sono NULL, è adatto per la maggior parte delle applicazioni. Per informazioni sulla struttura delle informazioni contenute in questi argomenti, vedere `AfxOleRegisterServerClass`.

Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[Classe COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)<br/>
[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)
