---
title: Classe CSemaphore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSemaphore
- AFXMT/CSemaphore
- AFXMT/CSemaphore::CSemaphore
dev_langs:
- C++
helpviewer_keywords:
- CSemaphore [MFC], CSemaphore
ms.assetid: 385fc7e4-8f86-4be2-85e1-d23b38c12f7f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b00e7e1bc42317b4028264a49006b40de4fbb507
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37078882"
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
 I semafori sono utili per controllare l'accesso a una risorsa condivisa che può supportare solo un numero limitato di utenti. Il numero corrente del `CSemaphore` oggetto è il numero di utenti aggiuntivi consentiti. Quando il conteggio raggiunge lo zero, tutti i tentativi di usare la risorsa controllata dal `CSemaphore` oggetto verrà inserito in una coda di sistema e attesa l'intervallo di timeout o il conteggio supera 0. Viene specificato il numero massimo di utenti che possono accedere alla risorsa controllata in una sola volta durante la costruzione del `CSemaphore` oggetto.  
  
 Per utilizzare un `CSemaphore` dell'oggetto, costruire il `CSemaphore` dell'oggetto quando è necessario. Specificare il nome del semaforo che si desidera attendere e che l'applicazione deve inizialmente esserne il proprietario. È quindi possibile accedere al semaforo quando viene restituito il costruttore. Chiamare [CSyncObject::Unlock](../../mfc/reference/csyncobject-class.md#unlock) dopo avere l'accesso alla risorsa controllata.  
  
 Un metodo alternativo per l'utilizzo `CSemaphore` oggetti consiste nell'aggiungere una variabile di tipo `CSemaphore` come un membro dati per la classe che si desidera controllo. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CSemaphore` (membro dati) che specifica il primo accesso conteggio, numero massimo di accesso, nome del semaforo (se utilizzarlo limiti dei processi) e lo si desidera gli attributi di sicurezza.  
  
 Per accedere alle risorse controllate da `CSemaphore` gli oggetti in questo modo, creare innanzitutto una variabile di entrambi i tipi [CSingleLock](../../mfc/reference/csinglelock-class.md) o un tipo [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Quindi chiamare l'oggetto di blocchi `Lock` funzione membro (ad esempio [CSingleLock::Lock](../../mfc/reference/csinglelock-class.md#lock)). A questo punto, il thread verrà di accedere alla risorsa, attendere la risorsa essere rilasciata e ottenere l'accesso, attendere la risorsa da rilasciare e timeout, non riesce ad accedere alla risorsa. In ogni caso, la risorsa è stato effettuato l'accesso in modo thread-safe. Per rilasciare la risorsa, usare l'oggetto di blocco `Unlock` funzione membro (ad esempio [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock)), o consentire il blocco dell'oggetto uscire dall'ambito.  
  
 In alternativa, è possibile creare un `CSemaphore` oggetto autonomo e accedervi in modo esplicito prima di tentare di accedere alla risorsa controllata. Questo metodo, mentre più chiaro a un utente durante la lettura del codice sorgente, è più soggetto a errore.  
  
 Per ulteriori informazioni su come usare `CSemaphore` oggetti, vedere l'articolo [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CSemaphore`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="csemaphore"></a>  CSemaphore::CSemaphore  
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
 Il conteggio di utilizzi iniziale per il semaforo. Deve essere maggiore o uguale a 0 e minore o uguale a *lMaxCount*.  
  
 *lMaxCount*  
 Il conteggio di utilizzi massimo per il semaforo. Deve essere maggiore di 0.  
  
 *pstrName*  
 Il nome del semaforo. Specificare se si accederà al semaforo limiti dei processi. Se `NULL`, l'oggetto sarà senza nome. Se il nome corrisponde a un semaforo esistente, il costruttore crea un nuovo `CSemaphore` oggetto cui fa riferimento il semaforo di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non rappresenta un semaforo, la costruzione avrà esito negativo.  
  
 *lpsaAttributes*  
 Attributi di sicurezza per l'oggetto semaforo. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Per accedere o rilasciare un `CSemaphore` dell'oggetto, creare un [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare il metodo relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro.  
  
> [!IMPORTANT]
>  Dopo aver creato il `CSemaphore` dell'oggetto, utilizzare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) per garantire che il mutex non esisteva. Se il mutex esisteva in modo imprevisto, potrebbe indicare un processo è squatting e intenda utilizzare mutex da utenti malintenzionati. In questo caso, la procedura consigliata di sicurezza è un fattore è per chiudere l'handle e continua come se si è verificato un errore nella creazione dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [CSyncObject (classe)](../../mfc/reference/csyncobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



