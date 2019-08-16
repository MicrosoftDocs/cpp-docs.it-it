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
ms.openlocfilehash: 4a1997497f3bddb405b712b5534f76e577dabfa8
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69503087"
---
# <a name="coletemplateserver-class"></a>Classe COleTemplateServer

Utilizzata per i server di modifica visiva OLE, i server di automazione e i contenitori di collegamento (applicazioni che supportano collegamenti a incorporamenti).

## <a name="syntax"></a>Sintassi

```
class COleTemplateServer : public COleObjectFactory
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleTemplateServer::COleTemplateServer](#coletemplateserver)|Costruisce un oggetto `COleTemplateServer`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleTemplateServer:: ConnectTemplate](#connecttemplate)|Connette un modello di documento all'oggetto `COleObjectFactory` sottostante.|
|[COleTemplateServer:: Annulla registrazione](#unregister)|Annulla la registrazione del modello di documento associato.|
|[COleTemplateServer::UpdateRegistry](#updateregistry)|Registra il tipo di documento con il registro di sistema OLE.|

## <a name="remarks"></a>Note

Questa classe è derivata dalla classe [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md); in genere, è possibile `COleTemplateServer` usare direttamente anziché derivare la propria classe. `COleTemplateServer`Usa un oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per gestire i documenti del server. Usare `COleTemplateServer` quando si implementa un server completo, ovvero un server che può essere eseguito come applicazione autonoma. I server completi sono in genere applicazioni con interfaccia a documenti multipli (MDI), sebbene le applicazioni SDI (Single Document Interface) siano supportate. È `COleTemplateServer` necessario un oggetto per ogni tipo di documento server supportato da un'applicazione, ovvero se l'applicazione server supporta sia i fogli di lavoro che i grafici, è necessario `COleTemplateServer` disporre di due oggetti.

`COleTemplateServer`esegue l' `OnCreateInstance` override della funzione membro `COleObjectFactory`definita da. Questa funzione membro viene chiamata dal Framework per creare un C++ oggetto del tipo appropriato.

Per ulteriori informazioni sui server, vedere l'articolo [server: Implementazione di un](../../mfc/servers-implementing-a-server.md)server.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)

`COleTemplateServer`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="coletemplateserver"></a>COleTemplateServer:: COleTemplateServer

Costruisce un oggetto `COleTemplateServer`.

```
COleTemplateServer();
```

### <a name="remarks"></a>Note

Per una breve descrizione dell'uso della `COleTemplateServer` classe, vedere Panoramica della classe [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md) .

##  <a name="connecttemplate"></a>COleTemplateServer:: ConnectTemplate

Connette il modello di documento a cui punta *pDocTemplate* all'oggetto [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md) sottostante.

```
void ConnectTemplate(
    REFCLSID clsid,
    CDocTemplate* pDocTemplate,
    BOOL bMultiInstance);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
Riferimento all'ID della classe OLE richiesto dal modello.

*pDocTemplate*<br/>
Puntatore al modello di documento.

*bMultiInstance*<br/>
Indica se una singola istanza dell'applicazione può supportare più creazioni di istanze. Se è TRUE, vengono avviate più istanze dell'applicazione per ogni richiesta di creazione di un oggetto.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere la [chiave CLSID](/windows/win32/com/clsid-key-hklm) nella Windows SDK.

##  <a name="unregister"></a>COleTemplateServer:: Annulla registrazione

Annulla la registrazione del modello di documento associato.

```
BOOL Unregister();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Note

EnterRemarks

##  <a name="updateregistry"></a>COleTemplateServer:: UpdateRegistry

Carica le informazioni sul tipo di file dalla stringa del modello di documento e inserisce tali informazioni nel registro di sistema OLE.

```
void UpdateRegistry(
    OLE_APPTYPE nAppType = OAT_INPLACE_SERVER,
    LPCTSTR* rglpszRegister = NULL,
    LPCTSTR* rglpszOverwrite = NULL,
    BOOL bRegister = TRUE);
```

### <a name="parameters"></a>Parametri

*nAppType*<br/>
Valore dell'enumerazione OLE_APPTYPE, che è definito in AFXDISP. H. Può avere uno dei valori seguenti:

- Il server OAT_INPLACE_SERVER dispone dell'interfaccia utente completa del server.

- Il server OAT_SERVER supporta solo l'incorporamento.

- Il contenitore OAT_CONTAINER supporta collegamenti a oggetti incorporati.

- L'oggetto OAT_DISPATCH_OBJECT `IDispatch`è in grado di supportare.

- Il server OAT_DOC_OBJECT_SERVER supporta sia l'incorporamento che il modello di componente oggetto documento.

*rglpszRegister*<br/>
Elenco di voci scritte nel registro di sistema solo se non sono presenti voci.

*rglpszOverwrite*<br/>
Elenco di voci scritte nel registro di sistema, indipendentemente dal fatto che esistano voci precedenti.

*bRegister*<br/>
Determina se la classe deve essere registrata. Se *bRegister* è true, la classe viene registrata nel registro di sistema. In caso contrario, Annulla la registrazione della classe.

### <a name="remarks"></a>Note

Le informazioni di registrazione vengono caricate mediante una chiamata a [CDocTemplate:: GetDocString](../../mfc/reference/cdoctemplate-class.md#getdocstring). Le sottostringhe recuperate sono quelle identificate dagli `regFileTypeId`indici, `fileNewName` `regFileTypeName`e, come descritto nelle `GetDocString` pagine di riferimento.

Se la `regFileTypeId` sottostringa è vuota o se la chiamata `GetDocString` a ha esito negativo per qualsiasi altro motivo, questa funzione ha esito negativo e le informazioni sul file non vengono immesse nel registro di sistema.

Le informazioni negli argomenti *rglpszRegister* e *rglpszOverwrite* vengono scritte nel registro di sistema tramite una chiamata a [AfxOleRegisterServerClass](application-control.md#afxoleregisterserverclass). Le informazioni predefinite, che vengono registrate quando i due argomenti sono NULL, sono appropriate per la maggior parte delle applicazioni. Per informazioni sulla struttura delle informazioni contenute in questi argomenti, vedere `AfxOleRegisterServerClass`.

Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

## <a name="see-also"></a>Vedere anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)<br/>
[Classe COleServerItem](../../mfc/reference/coleserveritem-class.md)
