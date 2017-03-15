---
title: Classe CSingleLock | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSingleLock
dev_langs:
- C++
helpviewer_keywords:
- CSingleLock class
- threading [MFC], access control
- synchronization objects, access control
- threading [MFC], synchronization
ms.assetid: 7dae7288-8066-4a3e-85e0-78d28bfc6bc8
caps.latest.revision: 20
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: b1efc2daf1c3714446223cc69f9cc2a6a3401173
ms.lasthandoff: 02/24/2017

---
# <a name="csinglelock-class"></a>CSingleLock (classe)
Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso a una risorsa di un programma multithread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSingleLock  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSingleLock::CSingleLock](#csinglelock)|Costruisce un oggetto `CSingleLock`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSingleLock::IsLocked](#islocked)|Determina se l'oggetto è bloccato.|  
|[CSingleLock::Lock](#lock)|È in attesa in un oggetto di sincronizzazione.|  
|[CSingleLock::Unlock](#unlock)|Rilascia un oggetto di sincronizzazione.|  
  
## <a name="remarks"></a>Note  
 `CSingleLock`non dispone di una classe di base.  
  
 Per utilizzare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md), e [CEvent](../../mfc/reference/cevent-class.md), è necessario creare un `CSingleLock` o [CMultiLock](../../mfc/reference/cmultilock-class.md) oggetto di attesa e rilasciare l'oggetto di sincronizzazione. Utilizzare `CSingleLock` quando è necessario solo in attesa su un oggetto alla volta. Utilizzare **CMultiLock** quando sono presenti più oggetti che è possibile utilizzare in un determinato momento.  
  
 Per utilizzare un `CSingleLock` di oggetto, chiamare il relativo costruttore all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi il [IsLocked](#islocked) funzione membro per determinare se la risorsa è disponibile. Se si tratta, continuare con il resto della funzione membro. Se la risorsa è disponibile, attendere per un determinato periodo di tempo per la risorsa deve essere rilasciato o restituito un errore. Al termine dell'utilizzo della risorsa, chiamare il [Unlock](#unlock) funzione se la `CSingleLock` oggetto consiste nel riutilizzare o consentire il `CSingleLock` oggetto di essere eliminati.  
  
 `CSingleLock`gli oggetti richiedono la presenza di un oggetto derivato da [CSyncObject](../../mfc/reference/csyncobject-class.md). Questo è un membro dati di classe della risorsa controllata. Per ulteriori informazioni su come usare `CSingleLock` oggetti, vedere l'articolo [Multithreading: procedura: utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CSingleLock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="a-namecsinglelocka--csinglelockcsinglelock"></a><a name="csinglelock"></a>CSingleLock::CSingleLock  
 Costruisce un oggetto `CSingleLock`.  
  
```  
explicit CSingleLock(
    CSyncObject* pObject,  
    BOOL bInitialLock = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `pObject`  
 Punta all'oggetto di sincronizzazione a cui accedere. Non può essere **NULL**.  
  
 `bInitialLock`  
 Specifica se inizialmente il tentativo di accedere all'oggetto specificato.  
  
### <a name="remarks"></a>Note  
 In genere, questa funzione viene chiamata all'interno di una funzione membro di accesso della risorsa controllata.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#19; NVC_MFC_Utilities](../../mfc/codesnippet/cpp/csinglelock-class_1.h)]  
  
##  <a name="a-nameislockeda--csinglelockislocked"></a><a name="islocked"></a>CSingleLock::IsLocked  
 Determina se l'oggetto associato di `CSingleLock` oggetto è impostato su non segnalato (non disponibile).  
  
```  
BOOL IsLocked();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è bloccato; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#20;](../../mfc/codesnippet/cpp/csinglelock-class_2.h)]  
  
##  <a name="a-namelocka--csinglelocklock"></a><a name="lock"></a>CSingleLock::Lock  
 Chiamare questa funzione per ottenere l'accesso alla risorsa controllata dall'oggetto di sincronizzazione fornito per il `CSingleLock` costruttore.  
  
```  
BOOL Lock(DWORD dwTimeOut = INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 *dwTimeOut*  
 Specifica la quantità di tempo di attesa per l'oggetto di sincronizzazione sia disponibile (segnalazione). Se **infinito**, `Lock` attenderà fino a quando l'oggetto viene segnalato prima della restituzione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto di sincronizzazione viene segnalato, `Lock` restituirà correttamente e il thread appartiene a questo punto l'oggetto. Se l'oggetto di sincronizzazione è impostato su non segnalato (non disponibile), `Lock` attenderà per l'oggetto di sincronizzazione vengano segnalati fino al numero di millisecondi specificato nella *dwTimeOut* parametro. Se l'oggetto di sincronizzazione non è stato segnalato entro il periodo di tempo specificato `Lock` restituisce un errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities numero&21;](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]  
  
##  <a name="a-nameunlocka--csinglelockunlock"></a><a name="unlock"></a>CSingleLock::Unlock  
 Rilascia l'oggetto di sincronizzazione di proprietà `CSingleLock`.  
  
```  
BOOL Unlock();

 
BOOL Unlock(
    LONG lCount,  
    LPLONG lPrevCount = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lCount`  
 Numero di accessi da rilasciare. Deve essere maggiore di 0. Se la quantità specificata comporta il conteggio dell'oggetto di superare il limite massimo, il conteggio non viene modificato e la funzione restituisce **FALSE**.  
  
 `lPrevCount`  
 Punta a una variabile per ricevere il conteggio precedente dell'oggetto di sincronizzazione. Se **NULL**, non viene restituito il conteggio precedente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata `CSingleLock`del distruttore.  
  
 Se è necessario rilasciare più di un numero di accesso di un semaforo, utilizzare la seconda forma di `Unlock` e specificare il numero di accessi da rilasciare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities numero&21;](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CMultiLock (classe)](../../mfc/reference/cmultilock-class.md)

