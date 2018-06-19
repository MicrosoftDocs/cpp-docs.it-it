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
ms.openlocfilehash: 1ae72b7c9c2acf4fa8600903061869ba049cd58c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33372969"
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
|[CSingleLock::Lock](#lock)|Resta in attesa di un oggetto di sincronizzazione.|  
|[CSingleLock::Unlock](#unlock)|Rilascia un oggetto di sincronizzazione.|  
  
## <a name="remarks"></a>Note  
 `CSingleLock` non dispone di una classe basa.  
  
 Per utilizzare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md), e [CEvent](../../mfc/reference/cevent-class.md), è necessario creare un `CSingleLock` o [CMultiLock](../../mfc/reference/cmultilock-class.md) oggetto di attesa e rilasciare l'oggetto di sincronizzazione. Utilizzare `CSingleLock` quando è necessario solo in attesa di un oggetto alla volta. Utilizzare **CMultiLock** quando sono presenti più oggetti che è possibile utilizzare in un momento specifico.  
  
 Per utilizzare un `CSingleLock` di oggetto, chiamare il relativo costruttore all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi il [IsLocked](#islocked) funzione membro per determinare se la risorsa è disponibile. Se si tratta, continuare con il resto della funzione membro. Se la risorsa è disponibile, attendere un determinato periodo di tempo per la risorsa deve essere rilasciato o restituito un errore. Dopo l'uso della risorsa è stata completata, chiamare il [Unlock](#unlock) funzionare se il `CSingleLock` oggetto è per essere usata nuovamente o consentire il `CSingleLock` oggetto di essere eliminati.  
  
 `CSingleLock` gli oggetti richiedono la presenza di un oggetto derivato dalla [CSyncObject](../../mfc/reference/csyncobject-class.md). In genere si tratta di un membro di dati della classe della risorsa controllata. Per ulteriori informazioni su come usare `CSingleLock` oggetti, vedere l'articolo [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
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
 `pObject`  
 Punta all'oggetto di sincronizzazione a cui accedere. Non può essere **NULL**.  
  
 `bInitialLock`  
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
 Specifica la quantità di tempo di attesa per l'oggetto di sincronizzazione siano disponibili (segnalato). Se **infinito**, `Lock` rimarrà in attesa finché l'oggetto è stato segnalato prima della restituzione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto di sincronizzazione viene segnalato, `Lock` restituirà correttamente e il thread ora proprietario dell'oggetto. Se l'oggetto di sincronizzazione è impostato su non segnalato (non disponibile), `Lock` attenderà per l'oggetto di sincronizzazione vengano segnalati fino al numero di millisecondi specificato nella *dwTimeOut* parametro. Se l'oggetto di sincronizzazione non è stato segnalato nel periodo di tempo, specificato `Lock` restituisce un errore.  
  
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
 `lCount`  
 Numero di accessi da rilasciare. Deve essere maggiore di 0. Se la quantità specificata determina il conteggio dell'oggetto supera il limite massimo, il conteggio non viene modificato e la funzione restituisce **FALSE**.  
  
 `lPrevCount`  
 Punta a una variabile per ricevere il conteggio precedente dell'oggetto di sincronizzazione. Se **NULL**, non viene restituito il conteggio precedente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata `CSingleLock`del distruttore.  
  
 Se è necessario rilasciare più di un numero di accesso di un semaforo, utilizzare la seconda forma di `Unlock` e specificare il numero di accessi da rilasciare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMultiLock](../../mfc/reference/cmultilock-class.md)
