---
title: CCachedDataPathProperty (classe)
ms.date: 11/04/2016
f1_keywords:
- CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty::CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty::m_Cache
helpviewer_keywords:
- CCachedDataPathProperty [MFC], CCachedDataPathProperty
- CCachedDataPathProperty [MFC], m_Cache
ms.assetid: 0d81356b-4fe5-43f6-aed2-2eb5a5485706
ms.openlocfilehash: ebab34433f23b119e3444b3eaa8b0ad6313555af
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352361"
---
# <a name="ccacheddatapathproperty-class"></a>CCachedDataPathProperty (classe)

Implementa una proprietà del controllo OLE trasferita in modo asincrono e memorizzata nella cache in un file di memoria.

## <a name="syntax"></a>Sintassi

```
class CCachedDataPathProperty : public CDataPathProperty
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCachedDataPathProperty::CCachedDataPathProperty](#ccacheddatapathproperty)|Costruisce un oggetto `CCachedDataPathProperty`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCachedDataPathProperty::m_Cache](#m_cache)|`CMemFile`oggetto in cui memorizzare i dati nella cache.|

## <a name="remarks"></a>Osservazioni

Un file di memoria viene memorizzato nella RAM anziché su disco ed è utile per trasferimenti temporanei veloci.

Insieme `CAysncMonikerFile` a `CDataPathProperty` `CCachedDataPathProperty` e , fornisce funzionalità per l'utilizzo di moniker asincroni nei controlli OLE. Con `CCachedDataPathProperty` gli oggetti, è possibile trasferire i dati in modo asincrono da `m_Cache` un URL o un'origine file e archiviarli in un file di memoria tramite la variabile pubblica. Tutti i dati vengono archiviati nel file di memoria e non è necessario eseguire l'override di [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable) a meno che non si desideri controllare le notifiche e rispondere. Ad esempio, se si sta trasferendo un file . GIF e si desidera notificare il controllo che sono arrivati `OnDataAvailable` più dati e dovrebbe ridisegnare se stesso, eseguire l'override per effettuare la notifica.

La `CCachedDataPathProperty` classe è `CDataPathProperty`derivata da .

Per ulteriori informazioni sull'utilizzo di moniker asincroni e controlli ActiveX nelle applicazioni Internet, vedere i seguenti argomenti:

- [Primi passi su Internet: controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)

- [Primi passi su Internet: Moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

[CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)

[CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)

`CCachedDataPathProperty`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="ccacheddatapathpropertyccacheddatapathproperty"></a><a name="ccacheddatapathproperty"></a>CCachedDataPathProperty::CCachedDataPathProperty

Costruisce un oggetto `CCachedDataPathProperty`.

```
CCachedDataPathProperty(COleControl* pControl = NULL);

CCachedDataPathProperty(
    LPCTSTR lpszPath,
    COleControl* pControl = NULL);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
Puntatore all'oggetto controllo ActiveX da `CCachedDataPathProperty` associare a questo oggetto.

*LpszPath (percorso ipinoso)*<br/>
Percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincrono che fa riferimento alla posizione assoluta effettiva della proprietà. `CCachedDataPathProperty`utilizza URL, non nomi di file. Se si `CCachedDataPathProperty` desidera un oggetto per un file, anteporre file:// al percorso.

### <a name="remarks"></a>Osservazioni

L'oggetto `COleControl` a cui fa riferimento *pControl* viene utilizzato da [Open](../../mfc/reference/cdatapathproperty-class.md#open) e recuperato dalle classi derivate. Se *pControl* è NULL, `Open` il controllo utilizzato con deve essere impostato con [SetControl](../../mfc/reference/cdatapathproperty-class.md#setcontrol). Se *lpszPath* è NULL, è possibile `Open` passare il percorso tramite o impostarlo con [SetPath](../../mfc/reference/cdatapathproperty-class.md#setpath).

## <a name="ccacheddatapathpropertym_cache"></a><a name="m_cache"></a>CCachedDataPathProperty::m_Cache

Contiene il nome della classe del file di memoria in cui vengono memorizzati i dati memorizzati nella cache.

```
CMemFile m_Cache;
```

### <a name="remarks"></a>Osservazioni

Un file di memoria viene memorizzato nella RAM anziché su disco.

## <a name="see-also"></a>Vedere anche

[CDataPathProperty (classe)](../../mfc/reference/cdatapathproperty-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CDataPathProperty (classe)](../../mfc/reference/cdatapathproperty-class.md)
