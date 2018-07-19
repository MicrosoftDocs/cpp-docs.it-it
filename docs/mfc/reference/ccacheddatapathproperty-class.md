---
title: Classe CCachedDataPathProperty | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty::CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty::m_Cache
dev_langs:
- C++
helpviewer_keywords:
- CCachedDataPathProperty [MFC], CCachedDataPathProperty
- CCachedDataPathProperty [MFC], m_Cache
ms.assetid: 0d81356b-4fe5-43f6-aed2-2eb5a5485706
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f0a3f632f2da327dea698722177ba6a3b3ebe42d
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37339787"
---
# <a name="ccacheddatapathproperty-class"></a>Classe CCachedDataPathProperty
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
|[CCachedDataPathProperty::m_Cache](#m_cache)|`CMemFile` oggetto in cui per memorizzare i dati.|  
  
## <a name="remarks"></a>Note  
 Un file di memoria verrà archiviato nella memoria RAM invece che su disco ed è utile per i trasferimenti temporanei a velocità.  
  
 Insieme a `CAysncMonikerFile` e `CDataPathProperty`, `CCachedDataPathProperty` fornisce la funzionalità per l'utilizzo di moniker asincroni in controlli OLE. Con `CCachedDataPathProperty` oggetti, si è in grado di trasferire i dati in modo asincrono da un'origine URL o del file e archiviarlo in un file di memoria tramite la `m_Cache` variabile pubblica. Tutti i dati vengono archiviati nel file di memoria e non è necessario eseguire l'override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable) a meno che non si desidera cercare le notifiche e rispondere. Ad esempio, se si trasferisce un di grandi dimensioni. File GIF e si desidera inviare una notifica al controllo che sono arrivata più dati e deve essere ridisegnato, eseguire l'override `OnDataAvailable` la notifica.  
  
 La classe `CCachedDataPathProperty` è derivato da `CDataPathProperty`.  
  
 Per altre informazioni su come usare i controlli ActiveX e moniker asincroni nelle applicazioni di Internet, vedere gli argomenti seguenti:  
  
- [Internet primi passaggi: Controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)  
  
- [Internet primi passaggi: Moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)  
  
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
  
##  <a name="ccacheddatapathproperty"></a>  CCachedDataPathProperty::CCachedDataPathProperty  
 Costruisce un oggetto `CCachedDataPathProperty`.  
  
```  
CCachedDataPathProperty(COleControl* pControl = NULL);

 
CCachedDataPathProperty(
    LPCTSTR lpszPath,  
    COleControl* pControl = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pControl*  
 Un puntatore all'oggetto da associare a questo controllo ActiveX `CCachedDataPathProperty` oggetto.  
  
 *lpszPath*  
 Il percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincrono che fa riferimento il percorso assoluto effettivo della proprietà. `CCachedDataPathProperty` Usa gli URL, non nomi di file. Se si desidera che un `CCachedDataPathProperty` oggetto per un file, anteporre file:// al percorso.  
  
### <a name="remarks"></a>Note  
 Il `COleControl` oggetto a cui punta *pControl* viene usato da [Open](../../mfc/reference/cdatapathproperty-class.md#open) e recuperati dalle classi derivate. Se *pControl* è NULL, il controllo utilizzato con `Open` deve essere impostato con [SetControl](../../mfc/reference/cdatapathproperty-class.md#setcontrol). Se *lpszPath* è NULL, è possibile passare il percorso attraverso `Open` oppure impostarla con [SetWorkingDirectory](../../mfc/reference/cdatapathproperty-class.md#setpath).  
  
##  <a name="m_cache"></a>  CCachedDataPathProperty::m_Cache  
 Contiene il nome della classe del file alla memoria in cui vengono memorizzati i dati.  
  
```  
CMemFile m_Cache;  
```  
  
### <a name="remarks"></a>Note  
 Un file di memoria verrà archiviato nella memoria RAM, piuttosto che sul disco.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)
