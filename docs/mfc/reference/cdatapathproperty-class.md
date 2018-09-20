---
title: Classe CDataPathProperty | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CDataPathProperty [MFC], CDataPathProperty
- CDataPathProperty [MFC], GetControl
- CDataPathProperty [MFC], GetPath
- CDataPathProperty [MFC], Open
- CDataPathProperty [MFC], ResetData
- CDataPathProperty [MFC], SetControl
- CDataPathProperty [MFC], SetPath
ms.assetid: 1f96efdb-54e4-460b-862c-eba5d4103488
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f61f62c62a73963fa790795cd5153c5103c3a61f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46385118"
---
# <a name="cdatapathproperty-class"></a>Classe CDataPathProperty

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
|[CDataPathProperty::GetControl](#getcontrol)|Recupera il controllo OLE asincrono associato di `CDataPathProperty` oggetto.|
|[CDataPathProperty::GetPath](#getpath)|Recupera il nome del percorso della proprietà.|
|[CDataPathProperty::Open](#open)|Avvia il caricamento della proprietà asincrono per il controllo ActiveX (OLE) associato.|
|[CDataPathProperty::ResetData](#resetdata)|Le chiamate `CAsyncMonikerFile::OnDataAvailable` per notificare al contenitore che sono state modificate le proprietà del controllo.|
|[CDataPathProperty::SetControl](#setcontrol)|Imposta il controllo ActiveX (OLE) asincrona associato alla proprietà.|
|[CDataPathProperty::SetPath](#setpath)|Imposta il nome del percorso della proprietà.|

## <a name="remarks"></a>Note

Proprietà asincroni vengono caricate dopo l'inizializzazione sincrona.

La classe `CDataPathProperty` è derivato da `CAysncMonikerFile`. Per implementare proprietà asincroni in controlli OLE, derivare una classe dalla classe `CDataPathProperty`ed eseguire l'override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable).

Per altre informazioni su come usare i controlli ActiveX e moniker asincroni nelle applicazioni di Internet, vedere gli articoli seguenti:

- [Internet primi passaggi: Controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)

- [Internet primi passaggi: Moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

[CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)

`CDataPathProperty`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

##  <a name="cdatapathproperty"></a>  CDataPathProperty::CDataPathProperty

Costruisce un oggetto `CDataPathProperty`.

```
CDataPathProperty(COleControl* pControl = NULL);
CDataPathProperty(LPCTSTR lpszPath, COleControl* pControl = NULL);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
Un puntatore all'oggetto da associare a questo controllo OLE `CDataPathProperty` oggetto.

*lpszPath*<br/>
Il percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincrono che fa riferimento il percorso assoluto effettivo della proprietà. `CDataPathProperty` Usa gli URL, non nomi di file. Se si desidera che un `CDataPathProperty` dell'oggetto per un file, anteporre `file://` al percorso.

### <a name="remarks"></a>Note

Il `COleControl` oggetto a cui punta *pControl* viene usato da `Open` e recuperati dalle classi derivate. Se *pControl* è NULL, il controllo utilizzato con `Open` deve essere impostato con `SetControl`. Se *lpszPath* è NULL, è possibile passare il percorso attraverso `Open` oppure impostarla con `SetPath`.

##  <a name="getcontrol"></a>  CDataPathProperty::GetControl

Chiamare questa funzione membro per recuperare il `COleControl` oggetto associato di `CDataPathProperty` oggetto.

```
COleControl* GetControl();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al controllo OLE è associato il `CDataPathProperty` oggetto. NULL se non controllo è associato.

##  <a name="getpath"></a>  CDataPathProperty::GetPath

Chiamare questa funzione membro per recuperare il percorso, impostati quando la `CDataPathProperty` oggetto è stato costruito o specificato in `Open`, o specificato in una chiamata precedente al `SetPath` funzione membro.

```
CString GetPath() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il percorso alla proprietà stessa. Può essere vuoto se non è stato specificato alcun percorso.

##  <a name="open"></a>  CDataPathProperty::Open

Chiamare questa funzione membro per avviare il caricamento della proprietà asincrono per il controllo associato.

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
Un puntatore all'oggetto da associare a questo controllo OLE `CDataPathProperty` oggetto.

*pError*<br/>
Puntatore a un'eccezione di file. In caso di errore, verrà impostato per la causa.

*lpszPath*<br/>
Il percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincrono che fa riferimento il percorso assoluto effettivo della proprietà. `CDataPathProperty` Usa gli URL, non nomi di file. Se si desidera che un `CDataPathProperty` dell'oggetto per un file, anteporre `file://` al percorso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La funzione tenta di ottenere il `IBindHost` interfaccia dal controllo.

Prima di chiamare `Open` senza un percorso, è necessario impostare il valore per il percorso della proprietà. Ciò può essere effettuata quando l'oggetto viene costruito, o chiamando il `SetPath` funzione membro.

Prima di chiamare `Open` senza un controllo, un controllo ActiveX (precedentemente noto come un controllo OLE) può essere associato all'oggetto. Ciò può essere effettuata quando l'oggetto viene costruito, o chiamando `SetControl`.

Tutti gli overload del [CAsyncMonikerFile::Open](../../mfc/reference/casyncmonikerfile-class.md#open) sono anche disponibili dalla `CDataPathProperty`.

##  <a name="resetdata"></a>  CDataPathProperty::ResetData

Chiamare questa funzione per ottenere `CAsyncMonikerFile::OnDataAvailable` per notificare al contenitore che sono state modificate le proprietà del controllo e tutte le informazioni in modo asincrono caricate non sono più utile.

```
virtual void ResetData();
```

### <a name="remarks"></a>Note

Apertura deve essere riavviato. Le classi derivate possono eseguire l'override di questa funzione per i valori predefiniti diversi.

##  <a name="setcontrol"></a>  CDataPathProperty::SetControl

Chiamare questa funzione membro per associare un controllo OLE asincrono con il `CDataPathProperty` oggetto.

```
void SetControl(COleControl* pControl);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
Puntatore al controllo OLE asincrono da associare con la proprietà.

##  <a name="setpath"></a>  CDataPathProperty::SetPath

Chiamare questa funzione membro per impostare il nome del percorso della proprietà.

```
void SetPath(LPCTSTR lpszPath);
```

### <a name="parameters"></a>Parametri

*lpszPath*<br/>
Un percorso, che può essere assoluto o relativo alla proprietà viene caricata in modo asincrono. `CDataPathProperty` Usa gli URL, non nomi di file. Se si desidera che un `CDataPathProperty` dell'oggetto per un file, anteporre `file://` al percorso.

## <a name="see-also"></a>Vedere anche

[Immagine di esempio MFC](../../visual-cpp-samples.md)<br/>
[Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)
