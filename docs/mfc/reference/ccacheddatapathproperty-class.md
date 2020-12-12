---
description: 'Altre informazioni su: classe CCachedDataPathProperty'
title: Classe CCachedDataPathProperty
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
ms.openlocfilehash: a61d2553afc4415da29399293843deb1be5f113d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97122499"
---
# <a name="ccacheddatapathproperty-class"></a>Classe CCachedDataPathProperty

Implementa una proprietà del controllo OLE trasferita in modo asincrono e memorizzata nella cache in un file di memoria.

## <a name="syntax"></a>Sintassi

```
class CCachedDataPathProperty : public CDataPathProperty
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CCachedDataPathProperty:: CCachedDataPathProperty](#ccacheddatapathproperty)|Costruisce un oggetto `CCachedDataPathProperty`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CCachedDataPathProperty:: m_Cache](#m_cache)|`CMemFile` oggetto in cui memorizzare i dati nella cache.|

## <a name="remarks"></a>Commenti

Un file di memoria viene archiviato in RAM anziché su disco ed è utile per i trasferimenti temporanei rapidi.

Insieme a `CAysncMonikerFile` e `CDataPathProperty` , `CCachedDataPathProperty` fornisce la funzionalità per l'utilizzo di moniker asincroni nei controlli OLE. Con `CCachedDataPathProperty` gli oggetti è possibile trasferire i dati in modo asincrono da un URL o da un'origine file e archiviarli in un file di memoria tramite la `m_Cache` variabile pubblica. Tutti i dati vengono archiviati nel file di memoria e non è necessario eseguire l'override di [ondataavailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable) , a meno che non si desideri controllare le notifiche e rispondere. Ad esempio, se si trasferisce un oggetto di grandi dimensioni. File GIF e si desidera notificare al controllo che sono arrivati più dati e che devono essere ridisegnati, eseguire `OnDataAvailable` l'override per eseguire la notifica.

La classe `CCachedDataPathProperty` è derivata da `CDataPathProperty` .

Per ulteriori informazioni sull'utilizzo di moniker asincroni e controlli ActiveX nelle applicazioni Internet, vedere gli argomenti seguenti:

- [Primi passi per Internet: controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)

- [Primi passi per Internet: moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[COleStreamFile](../../mfc/reference/colestreamfile-class.md)

[CMonikerFile](../../mfc/reference/cmonikerfile-class.md)

[CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)

[CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)

`CCachedDataPathProperty`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="ccacheddatapathpropertyccacheddatapathproperty"></a><a name="ccacheddatapathproperty"></a> CCachedDataPathProperty:: CCachedDataPathProperty

Costruisce un oggetto `CCachedDataPathProperty`.

```
CCachedDataPathProperty(COleControl* pControl = NULL);

CCachedDataPathProperty(
    LPCTSTR lpszPath,
    COleControl* pControl = NULL);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
Puntatore all'oggetto controllo ActiveX da associare a questo `CCachedDataPathProperty` oggetto.

*lpszPath*<br/>
Il percorso, che può essere assoluto o relativo, usato per creare un moniker asincrono che fa riferimento al percorso assoluto effettivo della proprietà. `CCachedDataPathProperty` USA gli URL, non i nomi file. Se si desidera un `CCachedDataPathProperty` oggetto per un file, anteporre file://al percorso.

### <a name="remarks"></a>Commenti

L' `COleControl` oggetto a cui fa riferimento *pcontrol* viene utilizzato da [Open](../../mfc/reference/cdatapathproperty-class.md#open) e recuperato dalle classi derivate. Se *pcontrol* è null, il controllo usato con `Open` deve essere impostato con il [controllo](../../mfc/reference/cdatapathproperty-class.md#setcontrol)separi. Se *lpszPath* è null, è possibile passare il percorso attraverso `Open` o impostarlo con [SEPATH](../../mfc/reference/cdatapathproperty-class.md#setpath).

## <a name="ccacheddatapathpropertym_cache"></a><a name="m_cache"></a> CCachedDataPathProperty:: m_Cache

Contiene il nome della classe del file di memoria in cui i dati vengono memorizzati nella cache.

```
CMemFile m_Cache;
```

### <a name="remarks"></a>Commenti

Un file di memoria viene archiviato in RAM anziché su disco.

## <a name="see-also"></a>Vedi anche

[Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)
