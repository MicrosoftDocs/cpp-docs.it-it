---
title: Classe CMutex | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMutex
- AFXMT/CMutex
- AFXMT/CMutex::CMutex
dev_langs:
- C++
helpviewer_keywords:
- CMutex class
- synchronization classes, CMutex class
- synchronization objects, mutex
- mutex
ms.assetid: 6330c050-4f01-4195-a099-2029b92f8cf1
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 159f2e02dfe44d74ebcaad687a23cef734b61fc9
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmutex-class"></a>Classe CMutex
Rappresenta un "mutex", ovvero un oggetto di sincronizzazione che consente accesso si escludono a vicenda solo thread a una risorsa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMutex : public CSyncObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMutex::CMutex](#cmutex)|Costruisce un oggetto `CMutex`.|  
  
## <a name="remarks"></a>Note  
 I mutex sono utili quando è consentito un solo thread alla volta modificano dati o un'altra risorsa controllata. Ad esempio, l'aggiunta di nodi a un elenco collegato è un processo che deve essere consentito solo da un solo thread alla volta. Utilizzando un `CMutex` oggetto per controllare l'elenco collegato, solo un thread alla volta può accedere all'elenco.  
  
 Utilizzare un `CMutex` oggetto, costruire il `CMutex` dell'oggetto quando è necessaria. Specificare il nome del mutex di cui si desidera attendere e che l'applicazione deve inizialmente proprietari. È quindi possibile accedere il mutex quando il costruttore restituisce. Chiamare [CSyncObject::Unlock](../../mfc/reference/csyncobject-class.md#unlock) una volta completata l'accesso alla risorsa controllata.  
  
 Un metodo alternativo per l'utilizzo di `CMutex` oggetti consiste nell'aggiungere una variabile di tipo `CMutex` come un membro dati alla classe che si desidera controllo. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CMutex` (membro dati) che specifica se il mutex è inizialmente di proprietà, il nome del mutex (se verrà utilizzata nell'ambito dei processi) e gli attributi di sicurezza desiderato.  
  
 Per accedere alle risorse controllate da `CMutex` oggetti in questo modo, creare innanzitutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o tipo [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Quindi chiamare l'oggetto di blocco `Lock` funzione membro (ad esempio, [CSingleLock::Lock](../../mfc/reference/csinglelock-class.md#lock)). A questo punto, il thread verrà di accedere alla risorsa, attendere che la risorsa rilasciare e ottenere l'accesso o attendere che la risorsa deve essere rilasciato e il timeout, non riesce ad accedere alla risorsa. In ogni caso, la risorsa che si accede in modo thread-safe. Per rilasciare la risorsa, utilizzare l'oggetto di blocco `Unlock` funzione membro (ad esempio, [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock)), o per consentire l'oggetto di blocco uscire dall'ambito.  
  
 Per ulteriori informazioni sull'utilizzo di `CMutex` oggetti, vedere l'articolo [Multithreading: procedura: utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CMutex`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="cmutex"></a>CMutex::CMutex  
 Costruisce un nome o senza nome `CMutex` oggetto.  
  
```  
CMutex(
    BOOL bInitiallyOwn = FALSE,  
    LPCTSTR lpszName = NULL,  
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `bInitiallyOwn`  
 Specifica se la creazione di thread di `CMutex` oggetto inizialmente ha accesso alla risorsa controllata dal mutex.  
  
 `lpszName`  
 Nome dell'oggetto `CMutex`. Se esiste un altro mutex con lo stesso nome, `lpszName` deve essere specificato se l'oggetto verrà utilizzato nell'ambito dei processi. Se **NULL**, mutex sarà senza nome. Se il nome corrisponde a un mutex esistente, il costruttore crea un nuovo `CMutex` oggetto cui fa riferimento il mutex con quel nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non rappresenta un mutex, la costruzione avrà esito negativo.  
  
 `lpsaAttribute`  
 Attributi di sicurezza per l'oggetto mutex. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Per accedere o rilasciare un `CMutex` dell'oggetto, creare un [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare il metodo relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro. Se il `CMutex` viene utilizzato l'oggetto autonomo, chiamare il relativo `Unlock` funzione membro per rilasciarlo.  
  
> [!IMPORTANT]
>  Dopo aver creato il `CMutex` , utilizzare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) per garantire che il mutex non esisteva già. Se il mutex non erano presenti in modo imprevisto, potrebbe indicare un processo è squatting e intenda utilizzare mutex da utenti malintenzionati. In questo caso, la procedura consigliata di protezione è un fattore è per chiudere l'handle e procedere come se si è verificato un errore nella creazione dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [CSyncObject (classe)](../../mfc/reference/csyncobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




