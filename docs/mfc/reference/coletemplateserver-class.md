---
description: 'Altre informazioni su: classe COleTemplateServer'
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
ms.openlocfilehash: da4351730fe548c83e073d3f6eaa02bc0c88cd0d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226623"
---
# <a name="coletemplateserver-class"></a>Classe COleTemplateServer

Utilizzata per i server di modifica visiva OLE, i server di automazione e i contenitori di collegamento (applicazioni che supportano collegamenti a incorporamenti).

## <a name="syntax"></a>Sintassi

```
class COleTemplateServer : public COleObjectFactory
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleTemplateServer:: COleTemplateServer](#coletemplateserver)|Costruisce un oggetto `COleTemplateServer`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleTemplateServer:: ConnectTemplate](#connecttemplate)|Connette un modello di documento all' `COleObjectFactory` oggetto sottostante.|
|[COleTemplateServer:: Annulla registrazione](#unregister)|Annulla la registrazione del modello di documento associato.|
|[COleTemplateServer:: UpdateRegistry](#updateregistry)|Registra il tipo di documento con il registro di sistema OLE.|

## <a name="remarks"></a>Commenti

Questa classe è derivata dalla classe [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md); in genere, è possibile usare `COleTemplateServer` direttamente anziché derivare la propria classe. `COleTemplateServer` Usa un oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per gestire i documenti del server. Usare `COleTemplateServer` quando si implementa un server completo, ovvero un server che può essere eseguito come applicazione autonoma. I server completi sono in genere applicazioni con interfaccia a documenti multipli (MDI), sebbene le applicazioni SDI (Single Document Interface) siano supportate. `COleTemplateServer`È necessario un oggetto per ogni tipo di documento server supportato da un'applicazione, ovvero se l'applicazione server supporta sia i fogli di lavoro che i grafici, è necessario disporre di due `COleTemplateServer` oggetti.

`COleTemplateServer` esegue l'override della `OnCreateInstance` funzione membro definita da `COleObjectFactory` . Questa funzione membro viene chiamata dal Framework per creare un oggetto C++ del tipo appropriato.

Per ulteriori informazioni sui server, vedere l'articolo [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)

`COleTemplateServer`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="coletemplateservercoletemplateserver"></a><a name="coletemplateserver"></a> COleTemplateServer:: COleTemplateServer

Costruisce un oggetto `COleTemplateServer`.

```
COleTemplateServer();
```

### <a name="remarks"></a>Commenti

Per una breve descrizione dell'uso della `COleTemplateServer` classe, vedere Panoramica della classe [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md) .

## <a name="coletemplateserverconnecttemplate"></a><a name="connecttemplate"></a> COleTemplateServer:: ConnectTemplate

Connette il modello di documento a cui punta *pDocTemplate* all'oggetto [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md) sottostante.

```cpp
void ConnectTemplate(
    REFCLSID clsid,
    CDocTemplate* pDocTemplate,
    BOOL bMultiInstance);
```

### <a name="parameters"></a>Parametri

*CLSID*<br/>
Riferimento all'ID della classe OLE richiesto dal modello.

*pDocTemplate*<br/>
Puntatore al modello di documento.

*bMultiInstance al*<br/>
Indica se una singola istanza dell'applicazione può supportare più creazioni di istanze. Se è TRUE, vengono avviate più istanze dell'applicazione per ogni richiesta di creazione di un oggetto.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere la [chiave CLSID](/windows/win32/com/clsid-key-hklm) nella Windows SDK.

## <a name="coletemplateserverunregister"></a><a name="unregister"></a> COleTemplateServer:: Annulla registrazione

Annulla la registrazione del modello di documento associato.

```
BOOL Unregister();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

EnterRemarks

## <a name="coletemplateserverupdateregistry"></a><a name="updateregistry"></a> COleTemplateServer:: UpdateRegistry

Carica le informazioni sul tipo di file dalla stringa del modello di documento e inserisce tali informazioni nel registro di sistema OLE.

```cpp
void UpdateRegistry(
    OLE_APPTYPE nAppType = OAT_INPLACE_SERVER,
    LPCTSTR* rglpszRegister = NULL,
    LPCTSTR* rglpszOverwrite = NULL,
    BOOL bRegister = TRUE);
```

### <a name="parameters"></a>Parametri

*nAppType*<br/>
Valore dell'enumerazione OLE_APPTYPE, definita in AFXDISP. H. Può avere uno dei valori seguenti:

- OAT_INPLACE_SERVER server dispone dell'interfaccia utente completa del server.

- OAT_SERVER Server supporta solo l'incorporamento.

- OAT_CONTAINER contenitore supporta collegamenti a oggetti incorporati.

- OAT_DISPATCH_OBJECT oggetto è `IDispatch` in grado di supportare.

- OAT_DOC_OBJECT_SERVER Server supporta sia l'incorporamento che il modello di componente oggetto documento.

*rglpszRegister*<br/>
Elenco di voci scritte nel registro di sistema solo se non sono presenti voci.

*rglpszOverwrite*<br/>
Elenco di voci scritte nel registro di sistema, indipendentemente dal fatto che esistano voci precedenti.

*bRegister*<br/>
Determina se la classe deve essere registrata. Se *bRegister* è true, la classe viene registrata nel registro di sistema. In caso contrario, Annulla la registrazione della classe.

### <a name="remarks"></a>Commenti

Le informazioni di registrazione vengono caricate mediante una chiamata a [CDocTemplate:: GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Le sottostringhe recuperate sono quelle identificate dagli indici `regFileTypeId` , `regFileTypeName` e, `fileNewName` come descritto nelle `GetDocString` pagine di riferimento.

Se la `regFileTypeId` sottostringa è vuota o se la chiamata a ha `GetDocString` esito negativo per qualsiasi altro motivo, questa funzione ha esito negativo e le informazioni sul file non vengono immesse nel registro di sistema.

Le informazioni negli argomenti *rglpszRegister* e *rglpszOverwrite* vengono scritte nel registro di sistema tramite una chiamata a [AfxOleRegisterServerClass](application-control.md#afxoleregisterserverclass). Le informazioni predefinite, che vengono registrate quando i due argomenti sono NULL, sono appropriate per la maggior parte delle applicazioni. Per informazioni sulla struttura delle informazioni contenute in questi argomenti, vedere `AfxOleRegisterServerClass` .

Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

## <a name="see-also"></a>Vedi anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)<br/>
[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)
