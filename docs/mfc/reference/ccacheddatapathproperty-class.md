---
title: Classe CCachedDataPathProperty | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty::CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty::m_Cache
dev_langs: C++
helpviewer_keywords:
- CCachedDataPathProperty [MFC], CCachedDataPathProperty
- CCachedDataPathProperty [MFC], m_Cache
ms.assetid: 0d81356b-4fe5-43f6-aed2-2eb5a5485706
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2fb62a905d092a347103ea98fcd323e3778ed458
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CCachedDataPathProperty::m_Cache](#m_cache)|`CMemFile`oggetto in cui i dati nella cache.|  
  
## <a name="remarks"></a>Note  
 Un file di memoria verrà archiviato nella RAM anziché direttamente su disco ed è utile per i trasferimenti rapida temporanei.  
  
 Insieme a **CAysncMonikerFile** e `CDataPathProperty`, `CCachedDataPathProperty` fornisce funzionalità per l'utilizzo di moniker asincroni in controlli OLE. Con `CCachedDataPathProperty` oggetti, si è in grado di trasferire i dati in modo asincrono da un URL o file di origine e di archiviarlo in un file di memoria tramite il `m_Cache` variabile pubblica. Tutti i dati vengono archiviati nel file di memoria e non è necessario eseguire l'override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable) a meno che non si desidera controllare le notifiche e rispondere. Ad esempio, se si intende un di grandi dimensioni. File GIF e si desidera notificare al controllo che sono arrivati ulteriori dati e deve essere ridisegnato, eseguire l'override `OnDataAvailable` la notifica.  
  
 La classe `CCachedDataPathProperty` è derivato da `CDataPathProperty`.  
  
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
  
##  <a name="ccacheddatapathproperty"></a>CCachedDataPathProperty::CCachedDataPathProperty  
 Costruisce un oggetto `CCachedDataPathProperty`.  
  
```  
CCachedDataPathProperty(COleControl* pControl = NULL);

 
CCachedDataPathProperty(
    LPCTSTR lpszPath,  
    COleControl* pControl = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pControl`  
 Un puntatore all'oggetto da associare a questo controllo ActiveX `CCachedDataPathProperty` oggetto.  
  
 `lpszPath`  
 Il percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincroni che fa riferimento al percorso assoluto effettivo della proprietà. `CCachedDataPathProperty`Usa gli URL, non nomi di file. Se si desidera un `CCachedDataPathProperty` di oggetto per un file, anteporre file:// al percorso.  
  
### <a name="remarks"></a>Note  
 Il `COleControl` oggetto a cui puntava `pControl` viene utilizzato da [aprire](../../mfc/reference/cdatapathproperty-class.md#open) e recuperati dalle classi derivate. Se `pControl` è **NULL**, il controllo usato con **aprire** deve essere impostato con [SetControl](../../mfc/reference/cdatapathproperty-class.md#setcontrol). Se `lpszPath` è **NULL**, è possibile passare il percorso tramite **aprire** o impostare il valore con [SetWorkingDirectory](../../mfc/reference/cdatapathproperty-class.md#setpath).  
  
##  <a name="m_cache"></a>CCachedDataPathProperty::m_Cache  
 Contiene il nome del file di memoria in cui vengono memorizzati i dati della classe.  
  
```  
CMemFile m_Cache;  
```  
  
### <a name="remarks"></a>Note  
 Un file di memoria viene archiviato nella RAM piuttosto che sul disco.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)
