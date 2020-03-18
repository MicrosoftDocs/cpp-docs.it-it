---
title: Classe CDataPathProperty
ms.date: 11/04/2016
f1_keywords:
- CDataPathProperty
- AFXCTL/CDataPathProperty
- AFXCTL/CDataPathProperty::CDataPathProperty
- AFXCTL/CDataPathProperty::GetControl
- AFXCTL/CDataPathProperty::GetPath
- AFXCTL/CDataPathProperty::Open
- AFXCTL/CDataPathProperty::ResetData
- AFXCTL/CDataPathProperty::SetControl
- AFXCTL/CDataPathProperty::SetPath
helpviewer_keywords:
- CDataPathProperty [MFC], CDataPathProperty
- CDataPathProperty [MFC], GetControl
- CDataPathProperty [MFC], GetPath
- CDataPathProperty [MFC], Open
- CDataPathProperty [MFC], ResetData
- CDataPathProperty [MFC], SetControl
- CDataPathProperty [MFC], SetPath
ms.assetid: 1f96efdb-54e4-460b-862c-eba5d4103488
ms.openlocfilehash: 89cb8ddcdd42643f52f755516e8845109163c57a
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418692"
---
# <a name="cdatapathproperty-class"></a>Classe CDataPathProperty

Implementa una proprietà del controllo OLE che può essere caricata in modo asincrono.

## <a name="syntax"></a>Sintassi

```
class CDataPathProperty : public CAsyncMonikerFile
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDataPathProperty:: CDataPathProperty](#cdatapathproperty)|Costruisce un oggetto `CDataPathProperty`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDataPathProperty:: GetControl](#getcontrol)|Recupera il controllo OLE asincrono associato all'oggetto `CDataPathProperty`.|
|[CDataPathProperty:: GetPath](#getpath)|Recupera il percorso della proprietà.|
|[CDataPathProperty:: Open](#open)|Avvia il caricamento della proprietà asincrona per il controllo ActiveX (OLE) associato.|
|[CDataPathProperty:: ResetData](#resetdata)|Chiama `CAsyncMonikerFile::OnDataAvailable` per notificare al contenitore che le proprietà del controllo sono state modificate.|
|[CDataPathProperty:: secontrol](#setcontrol)|Imposta il controllo ActiveX asincrono (OLE) associato alla proprietà.|
|[CDataPathProperty:: SEPATH](#setpath)|Imposta il percorso della proprietà.|

## <a name="remarks"></a>Osservazioni

Le proprietà asincrone vengono caricate dopo l'avvio sincrono.

La classe `CDataPathProperty` deriva da `CAysncMonikerFile`. Per implementare le proprietà asincrone nei controlli OLE, derivare una classe da `CDataPathProperty`ed eseguire l'override di [ondataavailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable).

Per ulteriori informazioni sull'utilizzo di moniker asincroni e controlli ActiveX nelle applicazioni Internet, vedere gli articoli seguenti:

- [Primi passi per Internet: controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)

- [Primi passi per Internet: moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

[CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)

`CDataPathProperty`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

##  <a name="cdatapathproperty"></a>CDataPathProperty:: CDataPathProperty

Costruisce un oggetto `CDataPathProperty`.

```
CDataPathProperty(COleControl* pControl = NULL);
CDataPathProperty(LPCTSTR lpszPath, COleControl* pControl = NULL);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
Puntatore all'oggetto del controllo OLE da associare a questo oggetto `CDataPathProperty`.

*lpszPath*<br/>
Il percorso, che può essere assoluto o relativo, usato per creare un moniker asincrono che fa riferimento al percorso assoluto effettivo della proprietà. `CDataPathProperty` usa gli URL, non i nomi file. Se si desidera un oggetto `CDataPathProperty` per un file, anteporre `file://` al percorso.

### <a name="remarks"></a>Osservazioni

Il `COleControl` oggetto a cui fa riferimento *pcontrol* viene usato da `Open` e recuperato dalle classi derivate. Se *pcontrol* è null, il controllo utilizzato con `Open` deve essere impostato con `SetControl`. Se *lpszPath* è null, è possibile passare il percorso attraverso `Open` o impostarlo con `SetPath`.

##  <a name="getcontrol"></a>CDataPathProperty:: GetControl

Chiamare questa funzione membro per recuperare l'oggetto `COleControl` associato all'oggetto `CDataPathProperty`.

```
COleControl* GetControl();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al controllo OLE associato all'oggetto `CDataPathProperty`. NULL se non è associato il controllo.

##  <a name="getpath"></a>CDataPathProperty:: GetPath

Chiamare questa funzione membro per recuperare il percorso, impostare quando l'oggetto `CDataPathProperty` è stato costruito o specificato in `Open`o specificato in una chiamata precedente alla funzione membro `SetPath`.

```
CString GetPath() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il percorso alla proprietà stessa. Può essere vuoto se non è stato specificato alcun percorso.

##  <a name="open"></a>CDataPathProperty:: Open

Chiamare questa funzione membro per avviare il caricamento della proprietà asincrona per il controllo associato.

```
virtual BOOL Open(
    COleControl* pControl,
    CFileException* pError = NULL);

virtual BOOL Open(
    LPCTSTR lpszPath,
    COleControl* pControl,
    CFileException* pError = NULL);

virtual BOOL Open(
    LPCTSTR lpszPath,
    CFileException* pError = NULL);

virtual BOOL Open(CFileException* pError = NULL);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
Puntatore all'oggetto del controllo OLE da associare a questo oggetto `CDataPathProperty`.

*pError*<br/>
Puntatore a un'eccezione del file. In caso di errore, verrà impostato sulla porta.

*lpszPath*<br/>
Il percorso, che può essere assoluto o relativo, usato per creare un moniker asincrono che fa riferimento al percorso assoluto effettivo della proprietà. `CDataPathProperty` usa gli URL, non i nomi file. Se si desidera un oggetto `CDataPathProperty` per un file, anteporre `file://` al percorso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La funzione tenta di ottenere l'interfaccia `IBindHost` dal controllo.

Prima di chiamare `Open` senza un percorso, è necessario impostare il valore per il percorso della proprietà. Questa operazione può essere eseguita quando l'oggetto viene costruito oppure chiamando la funzione membro `SetPath`.

Prima di chiamare `Open` senza un controllo, un controllo ActiveX (precedentemente noto come controllo OLE) può essere associato all'oggetto. Questa operazione può essere eseguita quando l'oggetto viene costruito oppure chiamando `SetControl`.

Tutti gli overload di [CAsyncMonikerFile:: Open](../../mfc/reference/casyncmonikerfile-class.md#open) sono disponibili anche da `CDataPathProperty`.

##  <a name="resetdata"></a>CDataPathProperty:: ResetData

Chiamare questa funzione per ottenere `CAsyncMonikerFile::OnDataAvailable` per notificare al contenitore che le proprietà del controllo sono state modificate e che tutte le informazioni caricate in modo asincrono non sono più utili.

```
virtual void ResetData();
```

### <a name="remarks"></a>Osservazioni

L'apertura dovrebbe essere riavviata. Le classi derivate possono eseguire l'override di questa funzione per impostazioni predefinite diverse.

##  <a name="setcontrol"></a>CDataPathProperty:: secontrol

Chiamare questa funzione membro per associare un controllo OLE asincrono all'oggetto `CDataPathProperty`.

```
void SetControl(COleControl* pControl);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
Puntatore al controllo OLE asincrono da associare alla proprietà.

##  <a name="setpath"></a>CDataPathProperty:: SEPATH

Chiamare questa funzione membro per impostare il percorso della proprietà.

```
void SetPath(LPCTSTR lpszPath);
```

### <a name="parameters"></a>Parametri

*lpszPath*<br/>
Un percorso, che può essere assoluto o relativo, alla proprietà che viene caricata in modo asincrono. `CDataPathProperty` usa gli URL, non i nomi file. Se si desidera un oggetto `CDataPathProperty` per un file, anteporre `file://` al percorso.

## <a name="see-also"></a>Vedere anche

[Immagine di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)
