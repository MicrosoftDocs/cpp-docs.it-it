---
title: Classe CCachedDataPathProperty | Documenti Microsoft
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
ms.openlocfilehash: 8b264b2366ce4fb7234d5906222fb4f8aa750212
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951416"
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
 Un file di memoria verrà archiviato nella RAM anziché direttamente su disco e risulta utile per i trasferimenti rapida temporanei.  
  
 Insieme a `CAysncMonikerFile` e `CDataPathProperty`, `CCachedDataPathProperty` fornisce funzionalità per l'utilizzo di moniker asincroni in controlli OLE. Con `CCachedDataPathProperty` oggetti, si è in grado di trasferire i dati in modo asincrono da un URL o file di origine e archiviarlo in un file di memoria tramite la `m_Cache` variabile pubblica. Tutti i dati vengono archiviati nel file di memoria e non è necessario eseguire l'override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable) a meno che non si desidera controllare le notifiche e rispondere. Ad esempio, se si intende un di grandi dimensioni. File GIF e si desidera notificare al controllo che è arrivata la maggiore quantità di dati e deve essere ridisegnato, eseguire l'override `OnDataAvailable` la notifica.  
  
 La classe `CCachedDataPathProperty` derivato da `CDataPathProperty`.  
  
 Per ulteriori informazioni sull'utilizzo di moniker asincroni e i controlli ActiveX in applicazioni Internet, vedere gli argomenti seguenti:  
  
- [Prime operazioni in Internet: Controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)  
  
- [Prime operazioni in Internet: Moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)  
  
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
 Un puntatore all'oggetto controllo ActiveX da associare a questo `CCachedDataPathProperty` oggetto.  
  
 *lpszPath*  
 Il percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincroni che fa riferimento il percorso assoluto effettivo della proprietà. `CCachedDataPathProperty` Usa gli URL, non nomi di file. Se si desidera che un `CCachedDataPathProperty` oggetto per un file, anteporre file:// al percorso.  
  
### <a name="remarks"></a>Note  
 Il `COleControl` oggetto a cui punta *pControl* viene utilizzato da [aprire](../../mfc/reference/cdatapathproperty-class.md#open) e recuperati dalle classi derivate. Se *pControl* viene **NULL**, il controllo usato con `Open` deve essere impostato con [SetControl](../../mfc/reference/cdatapathproperty-class.md#setcontrol). Se *lpszPath* viene **NULL**, è possibile passare il percorso tramite `Open` o impostarlo con [SetWorkingDirectory](../../mfc/reference/cdatapathproperty-class.md#setpath).  
  
##  <a name="m_cache"></a>  CCachedDataPathProperty::m_Cache  
 Contiene il nome della classe del file di memoria in cui viene memorizzato nella cache dei dati.  
  
```  
CMemFile m_Cache;  
```  
  
### <a name="remarks"></a>Note  
 Un file di memoria verrà archiviato nella RAM anziché direttamente su disco.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)
