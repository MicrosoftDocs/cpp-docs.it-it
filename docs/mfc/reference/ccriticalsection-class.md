---
title: Classe CCriticalSection | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCriticalSection
- AFXMT/CCriticalSection
- AFXMT/CCriticalSection::CCriticalSection
- AFXMT/CCriticalSection::Lock
- AFXMT/CCriticalSection::Unlock
- AFXMT/CCriticalSection::m_sect
dev_langs:
- C++
helpviewer_keywords:
- synchronization objects, critical section
- CCriticalSection class
- critical sections
- synchronization classes, CCriticalSection class
ms.assetid: f776f74b-5b0b-4f32-9c13-2b8e4a0d7b2b
caps.latest.revision: 21
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 25d4b124d089441503e9cb457e648695fc54660d
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccriticalsection-class"></a>CCriticalSection (classe)
Rappresenta una "sezione critica", ovvero un oggetto di sincronizzazione che consente un solo thread alla volta per accedere a una risorsa o una sezione di codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CCriticalSection : public CSyncObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCriticalSection::CCriticalSection](#ccriticalsection)|Costruisce un oggetto `CCriticalSection`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCriticalSection::Lock](#lock)|Consente di accedere a di `CCriticalSection` oggetto.|  
|[CCriticalSection::Unlock](#unlock)|Rilascia l'oggetto `CCriticalSection`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCriticalSection::operator CRITICAL_SECTION *](#operator_critical_section_star)|Recupera un puntatore alla classe interna **CRITICAL_SECTION** oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCriticalSection::m_sect](#m_sect)|Oggetto **CRITICAL_SECTION** oggetto.|  
  
## <a name="remarks"></a>Note  
 Le sezioni critiche sono utili quando è consentito un solo thread alla volta modificano dati o un'altra risorsa controllata. Ad esempio, l'aggiunta di nodi a un elenco collegato è un processo che deve essere consentito solo da un solo thread alla volta. Utilizzando un `CCriticalSection` oggetto per controllare l'elenco collegato, solo un thread alla volta può accedere all'elenco.  
  
> [!NOTE]
>  La funzionalità di `CCriticalSection` classe viene fornita da un effettivo Win32 **CRITICAL_SECTION** oggetto.  
  
 Le sezioni critiche vengono utilizzate invece i mutex (vedere [CMutex](../../mfc/reference/cmutex-class.md)) quando velocità è essenziale e la risorsa non verrà utilizzata nell'ambito dei processi.  
  
 Esistono due metodi per l'utilizzo di un `CCriticalSection` oggetto: autonoma e incorporati in una classe.  
  
-   Metodo autonomo da utilizzare autonoma `CCriticalSection` oggetto, costruire il `CCriticalSection` dell'oggetto quando è necessaria. Dopo la restituzione ha esito positivo dal costruttore, bloccare in modo esplicito l'oggetto con una chiamata a [blocco](#lock). Chiamare [Unlock](#unlock) una volta completata l'accesso alla sezione critica. Questo metodo, durante la visione più chiara a chi legge il codice sorgente, è più soggetto a errori, è necessario ricordarsi di bloccare e sbloccare la sezione critica prima e dopo l'accesso.  
  
     Un metodo più migliore consiste nell'utilizzare il [CSingleLock](../../mfc/reference/csinglelock-class.md) (classe). Include inoltre un `Lock` e `Unlock` (metodo), ma non è necessario preoccuparsi di sblocco della risorsa se si verifica un'eccezione.  
  
-   Incorporato metodo è inoltre possibile condividere una classe con più thread tramite l'aggiunta di un `CCriticalSection`-membro di dati di tipo per la classe e il blocco del membro dati quando necessario.  
  
 Per ulteriori informazioni sull'utilizzo di `CCriticalSection` oggetti, vedere l'articolo [Multithreading: procedura: utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CCriticalSection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="ccriticalsection"></a>CCriticalSection::CCriticalSection  
 Costruisce un oggetto `CCriticalSection`.  
  
```  
CCriticalSection();
```  
  
### <a name="remarks"></a>Note  
 Per accedere o rilasciare un `CCriticalSection` dell'oggetto, creare un [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare il metodo relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro. Se il `CCriticalSection` viene utilizzato l'oggetto autonomo, chiamare il relativo [Unlock](#unlock) funzione membro per rilasciarlo.  
  
 Se il costruttore non riesce ad allocare la memoria di sistema necessarie, un'eccezione di memoria (di tipo [CMemoryException](../../mfc/reference/cmemoryexception-class.md)) viene generata automaticamente.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CCriticalSection::Lock](#lock).  
  
##  <a name="lock"></a>CCriticalSection::Lock  
 Chiamare questa funzione membro per accedere all'oggetto sezione critica.  
  
```  
BOOL Lock();  
BOOL Lock(DWORD dwTimeout);
```  
  
### <a name="parameters"></a>Parametri  
 `dwTimeout`  
 `Lock`Ignora il valore del parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 `Lock`è una chiamata di blocco che non verrà restituito finché non viene segnalato l'oggetto sezione critica (disponibile).  
  
 Tempo di attesa è necessarie, è possibile utilizzare un [CMutex](../../mfc/reference/cmutex-class.md) oggetto anziché un `CCriticalSection` oggetto.  
  
 Se `Lock` non riesce ad allocare la memoria di sistema necessarie, un'eccezione di memoria (di tipo [CMemoryException](../../mfc/reference/cmemoryexception-class.md)) viene generata automaticamente.  
  
### <a name="example"></a>Esempio  
 In questo esempio viene illustrato l'approccio di sezione critica nidificata controllando l'accesso a una risorsa condivisa (statica `_strShared` oggetto) tramite una scheda SCSI `CCriticalSection` oggetto. Il `SomeMethod` funzione viene dimostrato l'aggiornamento di una risorsa condivisa in modo sicuro.  
  
 [!code-cpp[NVC_MFC_Utilities&#11;](../../mfc/codesnippet/cpp/ccriticalsection-class_1.h)]  
  
##  <a name="m_sect"></a>CCriticalSection::m_sect  
 Contiene un oggetto sezione critica che viene utilizzato da tutti `CCriticalSection` metodi.  
  
```  
CRITICAL_SECTION m_sect;  
```  
  
##  <a name="operator_critical_section_star"></a>CCriticalSection::operator CRITICAL_SECTION *  
 Recupera un **CRITICAL_SECTION** oggetto.  
  
```  
operator CRITICAL_SECTION*();
```   
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare un puntatore alla classe interna **CRITICAL_SECTION** oggetto.  
  
##  <a name="unlock"></a>CCriticalSection::Unlock  
 Versioni di `CCriticalSection` oggetto per l'uso da un altro thread.  
  
```  
BOOL Unlock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CCriticalSection` oggetto possedeva dal thread e la versione è stata completata; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se il `CCriticalSection` utilizzato autonomo, `Unlock` deve essere chiamato subito dopo aver completato l'utilizzo della risorsa controllata dalla sezione critica. Se un [CSingleLock](../../mfc/reference/csinglelock-class.md) viene utilizzato l'oggetto, `CCriticalSection::Unlock` verrà chiamato nell'oggetto di blocco `Unlock` funzione membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CCriticalSection::Lock](#lock).  
  
## <a name="see-also"></a>Vedere anche  
 [CSyncObject (classe)](../../mfc/reference/csyncobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMutex](../../mfc/reference/cmutex-class.md)

