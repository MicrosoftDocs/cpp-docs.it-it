---
title: Classe CSingleLock | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSingleLock
- AFXMT/CSingleLock
- AFXMT/CSingleLock::CSingleLock
- AFXMT/CSingleLock::IsLocked
- AFXMT/CSingleLock::Lock
- AFXMT/CSingleLock::Unlock
dev_langs:
- C++
helpviewer_keywords:
- CSingleLock [MFC], CSingleLock
- CSingleLock [MFC], IsLocked
- CSingleLock [MFC], Lock
- CSingleLock [MFC], Unlock
ms.assetid: 7dae7288-8066-4a3e-85e0-78d28bfc6bc8
author: mikeblome
ms.author: mblome
ms.openlocfilehash: 65e969607e4017191539a0b0301b0c27ccb9f1ae
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37078984"
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
 `CSingleLock` non dispone di una classe basa.  
  
 Per poter utilizzare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md), e [CEvent](../../mfc/reference/cevent-class.md), è necessario creare un `CSingleLock` oppure [CMultiLock](../../mfc/reference/cmultilock-class.md) restare in attesa di e rilasciare l'oggetto di sincronizzazione dell'oggetto. Utilizzare `CSingleLock` quando è necessario solo in attesa di un oggetto alla volta. Utilizzare `CMultiLock` quando sono presenti più oggetti che è possibile utilizzare in un momento specifico.  
  
 Per utilizzare un `CSingleLock` di oggetto, chiamare il relativo costruttore all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi il [IsLocked](#islocked) funzione membro per determinare se la risorsa è disponibile. In caso affermativo, continuare con il resto della funzione membro. Se la risorsa non è disponibile, attendere per un determinato periodo di tempo per la risorsa essere rilasciata o restituito un errore. Al termine dell'uso della risorsa, chiamare il [Unlock](#unlock) funzionare se il `CSingleLock` oggetto è per essere usata nuovamente o consentire il `CSingleLock` oggetto di essere eliminati.  
  
 `CSingleLock` gli oggetti richiedono la presenza di un oggetto derivato dalla [CSyncObject](../../mfc/reference/csyncobject-class.md). In genere si tratta un membro di dati della classe della risorsa controllata. Per ulteriori informazioni su come usare `CSingleLock` oggetti, vedere l'articolo [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CSingleLock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="csinglelock"></a>  CSingleLock::CSingleLock  
 Costruisce un oggetto `CSingleLock`.  
  
```  
explicit CSingleLock(
    CSyncObject* pObject,  
    BOOL bInitialLock = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *pObject*  
 Punta all'oggetto di sincronizzazione a cui accedere. Non può essere **NULL**.  
  
 *bInitialLock*  
 Specifica se inizialmente il tentativo di accedere all'oggetto specificato.  
  
### <a name="remarks"></a>Note  
 In genere, questa funzione viene chiamata all'interno di una funzione membro di accesso della risorsa controllata.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#19](../../mfc/codesnippet/cpp/csinglelock-class_1.h)]  
  
##  <a name="islocked"></a>  CSingleLock::IsLocked  
 Determina se l'oggetto è associato il `CSingleLock` oggetto è impostato su non segnalato (non disponibile).  
  
```  
BOOL IsLocked();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è bloccato; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#20](../../mfc/codesnippet/cpp/csinglelock-class_2.h)]  
  
##  <a name="lock"></a>  CSingleLock::Lock  
 Chiamare questa funzione per ottenere l'accesso alla risorsa controllata per l'oggetto di sincronizzazione fornito per il `CSingleLock` costruttore.  
  
```  
BOOL Lock(DWORD dwTimeOut = INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 *dwTimeOut*  
 Specifica la quantità di tempo di attesa per l'oggetto di sincronizzazione disponibilità (segnalato). Se **infinito**, `Lock` attenderà fino a quando non viene segnalata l'oggetto prima della restituzione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto di sincronizzazione non viene segnalato, `Lock` restituirà correttamente e il thread ora proprietario dell'oggetto. Se l'oggetto di sincronizzazione è impostato su non segnalato (non disponibile), `Lock` attenderà per l'oggetto di sincronizzazione vengano segnalati fino al numero di millisecondi specificato nella *dwTimeOut* parametro. Se l'oggetto di sincronizzazione non è stato segnalato nel periodo di tempo, specificato `Lock` restituisce un errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]  
  
##  <a name="unlock"></a>  CSingleLock::Unlock  
 Rilascia l'oggetto di sincronizzazione di proprietà `CSingleLock`.  
  
```  
BOOL Unlock();

 
BOOL Unlock(
    LONG lCount,  
    LPLONG lPrevCount = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lCount*  
 Numero di accessi da rilasciare. Deve essere maggiore di 0. Se la quantità specificata provocherebbe il conteggio dell'oggetto supera il limite massimo, il conteggio non viene modificato e la funzione restituisce **FALSE**.  
  
 *lPrevCount*  
 Punta a una variabile per ricevere il conteggio precedente dell'oggetto di sincronizzazione. Se **NULL**, non viene restituito il conteggio precedente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata `CSingleLock`del distruttore.  
  
 Se è necessario rilasciare più di un conteggio di accesso di un semaforo, utilizzare la seconda tipologia di `Unlock` e specificare il numero di accessi da rilasciare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMultiLock](../../mfc/reference/cmultilock-class.md)
