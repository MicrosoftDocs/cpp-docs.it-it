---
title: Classe CSemaphore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSemaphore
- AFXMT/CSemaphore
- AFXMT/CSemaphore::CSemaphore
dev_langs:
- C++
helpviewer_keywords:
- synchronization objects, semaphores
- CSemaphore class
- semaphores
ms.assetid: 385fc7e4-8f86-4be2-85e1-d23b38c12f7f
caps.latest.revision: 23
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
ms.openlocfilehash: 31de1e553ea2facea6b70c284aecdbf10e22c89f
ms.lasthandoff: 02/24/2017

---
# <a name="csemaphore-class"></a>CSemaphore (classe)
Un oggetto della classe `CSemaphore` rappresenta un "semaforo", ovvero un oggetto di sincronizzazione che consente un numero limitato di thread in uno o più processi di accedere a un mantiene un conteggio del numero di thread che accedono attualmente a una risorsa specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSemaphore : public CSyncObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSemaphore::CSemaphore](#csemaphore)|Costruisce un oggetto `CSemaphore`.|  
  
## <a name="remarks"></a>Note  
 I semafori sono utili per controllare l'accesso a una risorsa condivisa che può supportare solo un numero limitato di utenti. Il numero corrente di `CSemaphore` oggetto è il numero di utenti aggiuntivi consentiti. Quando il conteggio raggiunge lo zero, tutti i tentativi di utilizzare la risorsa controllata dal **CSemaphore** oggetto verrà inserito in una coda di sistema e attesa un timeout o aumenta il numero maggiore di 0. Il numero massimo di utenti che possono accedere contemporaneamente alla risorsa controllata viene specificato durante la costruzione di `CSemaphore` oggetto.  
  
 Utilizzare un **CSemaphore** oggetto, costruire il `CSemaphore` dell'oggetto quando è necessaria. Specificare il nome del semaforo di cui si desidera attendere e che l'applicazione deve inizialmente proprietari. È quindi possibile accedere al semaforo quando il costruttore restituisce. Chiamare [CSyncObject::Unlock](../../mfc/reference/csyncobject-class.md#unlock) una volta completata l'accesso alla risorsa controllata.  
  
 Un metodo alternativo per l'utilizzo di `CSemaphore` oggetti consiste nell'aggiungere una variabile di tipo `CSemaphore` come un membro dati alla classe che si desidera controllo. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CSemaphore` (membro dati) che specifica il primo accesso conteggio, il numero massimo livello di accesso, nome del semaforo (se verrà utilizzata nell'ambito dei processi) e gli attributi di sicurezza desiderato.  
  
 Per accedere alle risorse controllate da `CSemaphore` oggetti in questo modo, creare innanzitutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o tipo [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Quindi chiamare l'oggetto di blocco `Lock` funzione membro (ad esempio, [CSingleLock::Lock](../../mfc/reference/csinglelock-class.md#lock)). A questo punto, il thread verrà di accedere alla risorsa, attendere che la risorsa rilasciare e ottenere l'accesso o attendere che la risorsa deve essere rilasciato e il timeout, non riesce ad accedere alla risorsa. In ogni caso, la risorsa che si accede in modo thread-safe. Per rilasciare la risorsa, utilizzare l'oggetto di blocco `Unlock` funzione membro (ad esempio, [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock)), o per consentire l'oggetto di blocco uscire dall'ambito.  
  
 In alternativa, è possibile creare un **CSemaphore** oggetto autonomo e accedervi in modo esplicito prima di tentare di accedere alla risorsa controllata. Questo metodo, durante la visione più chiara a chi legge il codice sorgente, è più soggetto a errori.  
  
 Per ulteriori informazioni su come usare **CSemaphore** oggetti, vedere l'articolo [Multithreading: procedura: utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CSemaphore`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="csemaphore"></a>CSemaphore::CSemaphore  
 Costruisce un nome o senza nome `CSemaphore` oggetto.  
  
```  
CSemaphore(
    LONG lInitialCount = 1,  
    LONG lMaxCount = 1,  
    LPCTSTR pstrName = NULL,  
    LPSECURITY_ATTRIBUTES lpsaAttributes = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lInitialCount*  
 Il conteggio di utilizzo iniziale per il semaforo. Deve essere maggiore o uguale a 0 e minore o uguale a `lMaxCount`.  
  
 `lMaxCount`  
 Il conteggio di utilizzo massimo per il semaforo. Deve essere maggiore di 0.  
  
 `pstrName`  
 Il nome del semaforo. Deve essere specificato se il semaforo dovranno essere accessibili attraverso i limiti di processo. Se `NULL,` l'oggetto è senza nome. Se il nome corrisponde a un semaforo esistente, il costruttore crea un nuovo `CSemaphore` oggetto cui fa riferimento il semaforo di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non rappresenta un semaforo, la costruzione avrà esito negativo.  
  
 *lpsaAttributes*  
 Attributi di sicurezza per l'oggetto semaforo. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Per accedere o rilasciare un `CSemaphore` dell'oggetto, creare un [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare il metodo relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro.  
  
> [!IMPORTANT]
>  Dopo aver creato il `CSemaphore` , utilizzare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) per garantire che il mutex non esisteva già. Se il mutex non erano presenti in modo imprevisto, potrebbe indicare un processo è squatting e intenda utilizzare mutex da utenti malintenzionati. In questo caso, la procedura consigliata di protezione è un fattore è per chiudere l'handle e procedere come se si è verificato un errore nella creazione dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [CSyncObject (classe)](../../mfc/reference/csyncobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




