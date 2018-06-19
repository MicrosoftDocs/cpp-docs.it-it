---
title: Classe CCriticalSection | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CCriticalSection [MFC], CCriticalSection
- CCriticalSection [MFC], Lock
- CCriticalSection [MFC], Unlock
- CCriticalSection [MFC], m_sect
ms.assetid: f776f74b-5b0b-4f32-9c13-2b8e4a0d7b2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1d6e713f6d5238d99af8f9311eb05a4b2dd39f7b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33353905"
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
|[CCriticalSection::Lock](#lock)|Consente di accedere al `CCriticalSection` oggetto.|  
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
 Le sezioni critiche sono utili quando è consentito un solo thread alla volta modificare dati o un'altra risorsa controllata. Ad esempio, l'aggiunta di nodi a un elenco collegato è un processo che deve essere consentito solo da un solo thread alla volta. Utilizzando un `CCriticalSection` oggetto da controllare nell'elenco collegato, solo un thread alla volta può accedere all'elenco.  
  
> [!NOTE]
>  La funzionalità del `CCriticalSection` classe viene fornita da un effettivo Win32 **CRITICAL_SECTION** oggetto.  
  
 Le sezioni critiche vengono utilizzate invece i mutex (vedere [CMutex](../../mfc/reference/cmutex-class.md)) quando velocità è essenziale e limiti dei processi non verrà utilizzata la risorsa.  
  
 Esistono due metodi per l'utilizzo di un `CCriticalSection` oggetto: autonoma e incorporati in una classe.  
  
-   Metodo autonomo da utilizzare autonoma `CCriticalSection` oggetto, costruire la `CCriticalSection` oggetto quando è necessario. Dopo la restituzione ha esito positivo dal costruttore, bloccare in modo esplicito l'oggetto con una chiamata a [blocco](#lock). Chiamare [Unlock](#unlock) una volta completata l'accesso alla sezione critica. Questo metodo, mentre più chiaro a un utente durante la lettura del codice sorgente, è più soggetto a errori, sarà necessario bloccare e sbloccare la sezione critica prima e dopo l'accesso.  
  
     Un più è preferibile utilizzare il [CSingleLock](../../mfc/reference/csinglelock-class.md) classe. Include inoltre un `Lock` e `Unlock` (metodo), ma non è necessario preoccuparsi di sblocco della risorsa, se si verifica un'eccezione.  
  
-   Incorporati metodo è anche possibile condividere una classe con più thread aggiungendo un `CCriticalSection`-membro di dati di tipo per la classe e il blocco il membro dei dati quando necessario.  
  
 Per ulteriori informazioni sull'utilizzo `CCriticalSection` oggetti, vedere l'articolo [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CCriticalSection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="ccriticalsection"></a>  CCriticalSection::CCriticalSection  
 Costruisce un oggetto `CCriticalSection`.  
  
```  
CCriticalSection();
```  
  
### <a name="remarks"></a>Note  
 Per accedere o rilasciare un `CCriticalSection` dell'oggetto, creare un [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare il relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro. Se il `CCriticalSection` viene utilizzato l'oggetto autonomo, chiamare il relativo [Unlock](#unlock) funzione membro per rilasciarlo.  
  
 Se il costruttore non riesce ad allocare la memoria di sistema necessarie, un'eccezione di memoria (di tipo [CMemoryException](../../mfc/reference/cmemoryexception-class.md)) viene generata automaticamente.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CCriticalSection::Lock](#lock).  
  
##  <a name="lock"></a>  CCriticalSection::Lock  
 Chiamare questa funzione membro per ottenere l'accesso all'oggetto sezione critica.  
  
```  
BOOL Lock();  
BOOL Lock(DWORD dwTimeout);
```  
  
### <a name="parameters"></a>Parametri  
 `dwTimeout`  
 `Lock` Ignora questo valore del parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 `Lock` è una chiamata di blocco che non verrà restituiti fino a quando non viene segnalata l'oggetto sezione critica (diventa disponibile).  
  
 Se il tempo di attesa è necessarie, è possibile utilizzare un [CMutex](../../mfc/reference/cmutex-class.md) oggetto anziché un `CCriticalSection` oggetto.  
  
 Se `Lock` non riesce ad allocare la memoria di sistema necessarie, un'eccezione di memoria (di tipo [CMemoryException](../../mfc/reference/cmemoryexception-class.md)) viene generata automaticamente.  
  
### <a name="example"></a>Esempio  
 Questo esempio viene illustrato l'approccio della sezione critica nidificata controllando l'accesso a una risorsa condivisa (statica `_strShared` oggetto) utilizzando un oggetto condiviso `CCriticalSection` oggetto. Il `SomeMethod` funzione viene illustrato l'aggiornamento di una risorsa condivisa in modo sicuro.  
  
 [!code-cpp[NVC_MFC_Utilities#11](../../mfc/codesnippet/cpp/ccriticalsection-class_1.h)]  
  
##  <a name="m_sect"></a>  CCriticalSection::m_sect  
 Contiene un oggetto sezione critica che viene utilizzato da tutti i `CCriticalSection` metodi.  
  
```  
CRITICAL_SECTION m_sect;  
```  
  
##  <a name="operator_critical_section_star"></a>  CCriticalSection::operator CRITICAL_SECTION *  
 Recupera un **CRITICAL_SECTION** oggetto.  
  
```  
operator CRITICAL_SECTION*();
```   
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per recuperare un puntatore alla classe interna **CRITICAL_SECTION** oggetto.  
  
##  <a name="unlock"></a>  CCriticalSection::Unlock  
 Versioni di `CCriticalSection` oggetto per l'uso da un altro thread.  
  
```  
BOOL Unlock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CCriticalSection` oggetto era di proprietà del thread e la versione è stata completata; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se il `CCriticalSection` utilizzato autonomo, `Unlock` deve essere chiamato subito dopo aver completato l'uso della risorsa controllata da una sezione critica. Se un [CSingleLock](../../mfc/reference/csinglelock-class.md) viene utilizzato l'oggetto, `CCriticalSection::Unlock` verrà chiamato per l'oggetto di blocco `Unlock` funzione membro.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CCriticalSection::Lock](#lock).  
  
## <a name="see-also"></a>Vedere anche  
 [CSyncObject (classe)](../../mfc/reference/csyncobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMutex](../../mfc/reference/cmutex-class.md)
