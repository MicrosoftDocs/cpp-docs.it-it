---
title: Classe CMutex | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMutex
- AFXMT/CMutex
- AFXMT/CMutex::CMutex
dev_langs:
- C++
helpviewer_keywords:
- CMutex [MFC], CMutex
ms.assetid: 6330c050-4f01-4195-a099-2029b92f8cf1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f3bde85e64fe8593ec2637e767e8c3c70d3b8200
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37038077"
---
# <a name="cmutex-class"></a>Classe CMutex
Rappresenta un mutex"", ovvero un oggetto di sincronizzazione che consente un accesso si escludono a vicenda thread a una risorsa.  
  
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
 I mutex sono utili quando un solo thread alla volta può essere autorizzato a modificare i dati o un'altra risorsa controllata. Ad esempio, l'aggiunta di nodi a un elenco collegato è un processo che deve essere solo da un solo thread alla volta. Utilizzando un `CMutex` oggetto da controllare nell'elenco collegato, solo un solo thread alla volta può accedere all'elenco.  
  
 Per utilizzare un `CMutex` dell'oggetto, costruire il `CMutex` dell'oggetto quando è necessario. Specificare il nome del mutex che si desidera attendere e che l'applicazione deve inizialmente esserne il proprietario. È quindi possibile accedere mutex quando viene restituito il costruttore. Chiamare [CSyncObject::Unlock](../../mfc/reference/csyncobject-class.md#unlock) dopo avere l'accesso alla risorsa controllata.  
  
 Un metodo alternativo per l'utilizzo `CMutex` oggetti consiste nell'aggiungere una variabile di tipo `CMutex` come un membro dati per la classe che si desidera controllo. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CMutex` (membro dati) che specifica se il mutex è inizialmente di proprietà, il nome del mutex (se utilizzarlo limiti dei processi) e lo si desidera gli attributi di sicurezza.  
  
 Per accedere alle risorse controllate da `CMutex` gli oggetti in questo modo, creare innanzitutto una variabile di entrambi i tipi [CSingleLock](../../mfc/reference/csinglelock-class.md) o un tipo [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Quindi chiamare l'oggetto di blocchi `Lock` funzione membro (ad esempio [CSingleLock::Lock](../../mfc/reference/csinglelock-class.md#lock)). A questo punto, il thread verrà di accedere alla risorsa, attendere la risorsa essere rilasciata e ottenere l'accesso, attendere la risorsa da rilasciare e timeout, non riesce ad accedere alla risorsa. In ogni caso, la risorsa è stato effettuato l'accesso in modo thread-safe. Per rilasciare la risorsa, usare l'oggetto di blocco `Unlock` funzione membro (ad esempio [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock)), o consentire il blocco dell'oggetto uscire dall'ambito.  
  
 Per ulteriori informazioni sull'utilizzo `CMutex` oggetti, vedere l'articolo [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CMutex`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="cmutex"></a>  CMutex::CMutex  
 Costruisce un nome o senza nome `CMutex` oggetto.  
  
```  
CMutex(
    BOOL bInitiallyOwn = FALSE,  
    LPCTSTR lpszName = NULL,  
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *bInitiallyOwn*  
 Specifica se la creazione di thread di `CMutex` oggetto dispone inizialmente di accesso alla risorsa controllata dal mutex.  
  
 *lpszName*  
 Nome dell'oggetto `CMutex`. Se esiste un altro mutex con lo stesso nome, *lpszName* è necessario specificare se verrà utilizzato l'oggetto limiti dei processi. Se **NULL**, mutex sarà senza nome. Se il nome corrisponde a un mutex esistente, il costruttore crea un nuovo `CMutex` oggetto cui fa riferimento il mutex con il nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non rappresenta un mutex, la costruzione avrà esito negativo.  
  
 *lpsaAttribute*  
 Attributi di sicurezza per l'oggetto mutex. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Per accedere o rilasciare un `CMutex` dell'oggetto, creare un [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare il metodo relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro. Se il `CMutex` viene utilizzato l'oggetto autonomo, chiamare il relativo `Unlock` funzione membro per rilasciarlo.  
  
> [!IMPORTANT]
>  Dopo aver creato il `CMutex` dell'oggetto, utilizzare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) per garantire che il mutex non esisteva. Se il mutex esisteva in modo imprevisto, potrebbe indicare un processo è squatting e intenda utilizzare mutex da utenti malintenzionati. In questo caso, la procedura consigliata di sicurezza è un fattore è per chiudere l'handle e continua come se si è verificato un errore nella creazione dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [CSyncObject (classe)](../../mfc/reference/csyncobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



