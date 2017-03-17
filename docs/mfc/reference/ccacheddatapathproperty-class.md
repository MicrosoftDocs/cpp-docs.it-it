---
title: Classe CCachedDataPathProperty | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty::CCachedDataPathProperty
- AFXCTL/CCachedDataPathProperty::m_Cache
dev_langs:
- C++
helpviewer_keywords:
- ActiveX controls [C++], asynchronous
- CCachedDataPathProperty class
- OLE controls [C++], asynchronous
- asynchronous controls [C++]
- memory files [C++]
ms.assetid: 0d81356b-4fe5-43f6-aed2-2eb5a5485706
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 6e3f54e6429456be24cbe18471abd1705bbe0034
ms.lasthandoff: 02/24/2017

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
 Un file di memoria verrà archiviato nella RAM anziché su disco ed è utile per i trasferimenti rapida temporanei.  
  
 Insieme a **CAysncMonikerFile** e `CDataPathProperty`, `CCachedDataPathProperty` fornisce funzionalità per l'utilizzo di moniker asincroni in controlli OLE. Con `CCachedDataPathProperty` oggetti, è possibile trasferire i dati in modo asincrono da un URL o un file di origine e archiviarlo in un file di memoria tramite il `m_Cache` variabile pubblica. Tutti i dati vengono archiviati nel file di memoria e non è necessario eseguire l'override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable) a meno che non si desidera controllare le notifiche e rispondere. Ad esempio, se si intende una grande. File GIF e si desidera inviare una notifica al controllo che sono arrivato più dati e deve essere ridisegnato, eseguire l'override `OnDataAvailable` la notifica.  
  
 La classe `CCachedDataPathProperty` è derivato da `CDataPathProperty`.  
  
 Per ulteriori informazioni sull'utilizzo di controlli ActiveX e moniker asincroni nelle applicazioni Internet, vedere gli argomenti seguenti:  
  
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
 Il percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincroni che fa riferimento al percorso assoluto effettivo della proprietà. `CCachedDataPathProperty`utilizza gli URL, non nomi di file. Se si desidera che un `CCachedDataPathProperty` di oggetto per un file, anteporre file:// nel percorso.  
  
### <a name="remarks"></a>Note  
 Il `COleControl` oggetto a cui puntava `pControl` viene utilizzato da [aprire](../../mfc/reference/cdatapathproperty-class.md#open) e recuperati dalle classi derivate. Se `pControl` è **NULL**, il controllo utilizzato con **aprire** deve essere impostato con [SetControl](../../mfc/reference/cdatapathproperty-class.md#setcontrol). Se `lpszPath` è **NULL**, è possibile passare il percorso tramite **aprire** o impostarlo con [SetWorkingDirectory](../../mfc/reference/cdatapathproperty-class.md#setpath).  
  
##  <a name="m_cache"></a>CCachedDataPathProperty::m_Cache  
 Contiene il nome della classe del file della memoria in cui viene memorizzato nella cache di dati.  
  
```  
CMemFile m_Cache;  
```  
  
### <a name="remarks"></a>Note  
 Un file di memoria verrà archiviato nella RAM anziché sul disco.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)

