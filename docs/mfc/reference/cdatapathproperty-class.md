---
title: CDataPathProperty (classe)
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
ms.openlocfilehash: 479f5d47d9cff72d36dbd25e434182af1ba01ef4
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754647"
---
# <a name="cdatapathproperty-class"></a>CDataPathProperty (classe)

Implementa una proprietà del controllo OLE che può essere caricata in modo asincrono.

## <a name="syntax"></a>Sintassi

```
class CDataPathProperty : public CAsyncMonikerFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDataPathProperty::CDataPathProperty](#cdatapathproperty)|Costruisce un oggetto `CDataPathProperty`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDataPathProperty::GetControl](#getcontrol)|Recupera il controllo OLE asincrono associato all'oggetto. `CDataPathProperty`|
|[CDataPathProperty::GetPath](#getpath)|Recupera il nome del percorso della proprietà.|
|[CDataPathProperty::Open](#open)|Avvia il caricamento della proprietà asincrona per il controllo ActiveX associato (OLE).|
|[CDataPathProperty::ResetData](#resetdata)|Chiamate `CAsyncMonikerFile::OnDataAvailable` per notificare al contenitore che le proprietà del controllo sono state modificate.|
|[CDataPathProperty::SetControl](#setcontrol)|Imposta il controllo ActiveX asincrono (OLE) associato alla proprietà.|
|[CDataPathProperty::SetPath](#setpath)|Imposta il nome del percorso della proprietà.|

## <a name="remarks"></a>Osservazioni

Le proprietà asincrone vengono caricate dopo l'avvio sincrono.

La `CDataPathProperty` classe è `CAysncMonikerFile`derivata da . Per implementare proprietà asincrone nei controlli `CDataPathProperty`OLE, derivare una classe da , ed eseguire l'override di [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable).

Per ulteriori informazioni su come utilizzare moniker asincroni e controlli ActiveX nelle applicazioni Internet, vedere i seguenti articoli:

- [Primi passi su Internet: controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)

- [Primi passi su Internet: Moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

[CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)

`CDataPathProperty`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="cdatapathpropertycdatapathproperty"></a><a name="cdatapathproperty"></a>CDataPathProperty::CDataPathProperty

Costruisce un oggetto `CDataPathProperty`.

```
CDataPathProperty(COleControl* pControl = NULL);
CDataPathProperty(LPCTSTR lpszPath, COleControl* pControl = NULL);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
Puntatore all'oggetto controllo OLE da `CDataPathProperty` associare a questo oggetto.

*LpszPath (percorso ipinoso)*<br/>
Percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincrono che fa riferimento alla posizione assoluta effettiva della proprietà. `CDataPathProperty`utilizza URL, non nomi di file. Se si `CDataPathProperty` desidera un oggetto per `file://` un file, anteporre al percorso.

### <a name="remarks"></a>Osservazioni

L'oggetto `COleControl` a cui fa `Open` riferimento *pControl* viene utilizzato e recuperato dalle classi derivate. Se *pControl* è NULL, `Open` il controllo `SetControl`utilizzato con deve essere impostato con . Se *lpszPath* è NULL, è possibile `Open` passare il `SetPath`percorso attraverso o impostarlo con .

## <a name="cdatapathpropertygetcontrol"></a><a name="getcontrol"></a>CDataPathProperty::GetControl

Chiamare questa funzione membro `COleControl` per recuperare `CDataPathProperty` l'oggetto associato all'oggetto.

```
COleControl* GetControl();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al controllo `CDataPathProperty` OLE associato all'oggetto. NULL se il controllo non è associato.

## <a name="cdatapathpropertygetpath"></a><a name="getpath"></a>CDataPathProperty::GetPath

Chiamare questa funzione membro per recuperare `CDataPathProperty` il percorso, impostare `Open`quando l'oggetto è `SetPath` stato costruito o specificato in , o specificato in una precedente chiamata alla funzione membro.

```
CString GetPath() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il nome del percorso alla proprietà stessa. Può essere vuoto se non è stato specificato alcun percorso.

## <a name="cdatapathpropertyopen"></a><a name="open"></a>CDataPathProperty::Open

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
Puntatore all'oggetto controllo OLE da `CDataPathProperty` associare a questo oggetto.

*pError*<br/>
Puntatore a un'eccezione di file. In caso di errore, verrà impostata la causa.

*LpszPath (percorso ipinoso)*<br/>
Percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincrono che fa riferimento alla posizione assoluta effettiva della proprietà. `CDataPathProperty`utilizza URL, non nomi di file. Se si `CDataPathProperty` desidera un oggetto per `file://` un file, anteporre al percorso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La funzione tenta `IBindHost` di ottenere l'interfaccia dal controllo.

Prima `Open` di chiamare senza un percorso, è necessario impostare il valore per il percorso della proprietà. Questa operazione può essere eseguita quando l'oggetto viene costruito o chiamando la `SetPath` funzione membro.

Prima `Open` di chiamare senza un controllo, un controllo ActiveX (precedentemente noto come un controllo OLE) può essere associato all'oggetto. Questa operazione può essere eseguita quando `SetControl`l'oggetto viene costruito o chiamando .

Tutti gli overload di [CAsyncMonikerFile::Open](../../mfc/reference/casyncmonikerfile-class.md#open) sono disponibili anche da `CDataPathProperty`.

## <a name="cdatapathpropertyresetdata"></a><a name="resetdata"></a>CDataPathProperty::ResetData

Chiamare questa funzione `CAsyncMonikerFile::OnDataAvailable` per ottenere per notificare al contenitore che le proprietà del controllo sono state modificate e tutte le informazioni caricate in modo asincrono non sono più utili.

```
virtual void ResetData();
```

### <a name="remarks"></a>Osservazioni

L'apertura deve essere riavviata. Le classi derivate possono eseguire l'override di questa funzione per valori predefiniti diversi.

## <a name="cdatapathpropertysetcontrol"></a><a name="setcontrol"></a>CDataPathProperty::SetControl

Chiamare questa funzione membro per associare `CDataPathProperty` un controllo OLE asincrono all'oggetto.

```cpp
void SetControl(COleControl* pControl);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
Puntatore al controllo OLE asincrono da associare alla proprietà.

## <a name="cdatapathpropertysetpath"></a><a name="setpath"></a>CDataPathProperty::SetPath

Chiamare questa funzione membro per impostare il percorso della proprietà.

```cpp
void SetPath(LPCTSTR lpszPath);
```

### <a name="parameters"></a>Parametri

*LpszPath (percorso ipinoso)*<br/>
Un percorso, che può essere assoluto o relativo, alla proprietà da caricare in modo asincrono. `CDataPathProperty`utilizza URL, non nomi di file. Se si `CDataPathProperty` desidera un oggetto per `file://` un file, anteporre al percorso.

## <a name="see-also"></a>Vedere anche

[Immagine di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)
