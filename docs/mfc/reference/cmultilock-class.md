---
title: Classe CMultiLock | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMultiLock
- AFXMT/CMultiLock
- AFXMT/CMultiLock::CMultiLock
- AFXMT/CMultiLock::IsLocked
- AFXMT/CMultiLock::Lock
- AFXMT/CMultiLock::Unlock
dev_langs:
- C++
helpviewer_keywords:
- CMultiLock [MFC], CMultiLock
- CMultiLock [MFC], IsLocked
- CMultiLock [MFC], Lock
- CMultiLock [MFC], Unlock
ms.assetid: c5b7c78b-1f81-4387-b7dd-2c813c5b6b61
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f3e578d3aece15f191bfad858923470d09bede74
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37039807"
---
# <a name="cmultilock-class"></a>CMultiLock (classe)
Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso alle risorse di un programma multithread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMultiLock  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMultiLock::CMultiLock](#cmultilock)|Costruisce un oggetto `CMultiLock`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMultiLock::IsLocked](#islocked)|Determina se un oggetto di sincronizzazione specifica nella matrice è bloccato.|  
|[CMultiLock::Lock](#lock)|È in attesa su una matrice di oggetti di sincronizzazione.|  
|[CMultiLock::Unlock](#unlock)|Rilascia tutti gli oggetti di sincronizzazione secondari.|  
  
## <a name="remarks"></a>Note  
 `CMultiLock` non dispone di una classe basa.  
  
 Utilizzare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), e [CEvent](../../mfc/reference/cevent-class.md), è possibile creare un `CMultiLock` o [CSingleLock](../../mfc/reference/csinglelock-class.md)restare in attesa di e rilasciare l'oggetto di sincronizzazione dell'oggetto. Utilizzare `CMultiLock` quando sono presenti più oggetti che è possibile utilizzare in un momento specifico. Utilizzare `CSingleLock` quando è necessario solo in attesa di un oggetto alla volta.  
  
 Per utilizzare un `CMultiLock` di oggetto, creare innanzitutto una matrice di oggetti di sincronizzazione che si desiderano attendere. Successivamente, chiamare il `CMultiLock` costruttore dell'oggetto all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi il [blocco](#lock) funzione membro per determinare se una risorsa è disponibile (segnalato). Se uno è, continuare con il resto della funzione membro. Se nessuna risorsa è disponibile, attendere per un determinato periodo di tempo per una risorsa essere rilasciata o restituito un errore. Al termine dell'utilizzo di una risorsa, chiamare il [Unlock](#unlock) funzionare se il `CMultiLock` oggetto è per essere usata nuovamente o consentire il `CMultiLock` oggetto di essere eliminati.  
  
 `CMultiLock` gli oggetti sono particolarmente utili quando un thread contiene un numero elevato di `CEvent` può rispondere a oggetti. Creare una matrice contenente tutti i `CEvent` puntatori e chiamare `Lock`. In questo modo il thread in attesa finché non viene segnalato uno degli eventi.  
  
 Per ulteriori informazioni su come usare `CMultiLock` oggetti, vedere l'articolo [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CMultiLock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="cmultilock"></a>  CMultiLock::CMultiLock  
 Costruisce un oggetto `CMultiLock`.  
  
```  
CMultiLock(
    CSyncObject* ppObjects [ ],  
    DWORD dwCount,  
    BOOL bInitialLock = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *ppObjects*  
 Matrice di puntatori agli oggetti di sincronizzazione per restare in attesa. Non può essere **NULL**.  
  
 *dwCount*  
 Numero di oggetti della *ppObjects*. Deve essere maggiore di 0.  
  
 *bInitialLock*  
 Specifica se inizialmente il tentativo di accedere a qualsiasi altro oggetto fornito.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata dopo la creazione della matrice di oggetti di sincronizzazione per restare in attesa. In genere viene chiamata dall'interno del thread che deve rimanere in attesa per uno degli oggetti di sincronizzazione diventi disponibile.  
  
##  <a name="islocked"></a>  CMultiLock::IsLocked  
 Determina se l'oggetto specificato è impostato su non segnalato (non disponibile).  
  
```  
BOOL IsLocked(DWORD dwItem);
```  
  
### <a name="parameters"></a>Parametri  
 *dwItem*  
 L'indice nella matrice di oggetti corrispondenti all'oggetto il cui stato viene eseguita la query.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto specificato è bloccata; in caso contrario 0.  
  
##  <a name="lock"></a>  CMultiLock::Lock  
 Chiamare questa funzione per ottenere l'accesso a uno o più delle risorse controllate da oggetti di sincronizzazione forniti per il `CMultiLock` costruttore.  
  
```  
DWORD Lock(
    DWORD dwTimeOut = INFINITE,  
    BOOL bWaitForAll = TRUE,  
    DWORD dwWakeMask = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *dwTimeOut*  
 Specifica la quantità di tempo di attesa per l'oggetto di sincronizzazione disponibilità (segnalato). Se **infinito**, `Lock` attenderà fino a quando non viene segnalata l'oggetto prima della restituzione.  
  
 *bWaitForAll*  
 Specifica se è necessario segnalati tutti gli oggetti di attesa in base allo stesso tempo prima della restituzione. Se **FALSE**, `Lock` restituirà quando viene segnalato uno degli oggetti in attesa.  
  
 *dwWakeMask*  
 Specifica altre condizioni che sono autorizzati a interrompere l'attesa. Per un elenco completo delle opzioni disponibili per questo parametro, vedere [MsgWaitForMultipleObjects](http://msdn.microsoft.com/library/windows/desktop/ms684242) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Se `Lock` ha esito negativo, restituisce - 1. Se l'operazione riesce, restituisce uno dei valori seguenti:  
  
-   Tra **WAIT_OBJECT_0** e **WAIT_OBJECT_0** + (numero di oggetti - 1)  
  
     Se *bWaitForAll* viene **TRUE**, tutti gli oggetti vengono segnalati (disponibile). Se *bWaitForAll* viene **FALSE**, il valore restituito - **WAIT_OBJECT_0** è l'indice nella matrice di oggetti dell'oggetto che viene segnalato (disponibile).  
  
- **WAIT_OBJECT_0** + (numero di oggetti)  
  
     Un evento specificato nel *dwWakeMask* è disponibile nella coda di input del thread.  
  
-   Tra **WAIT_ABANDONED_0** e **WAIT_ABANDONED_0** + (numero di oggetti - 1)  
  
     Se *bWaitForAll* viene **TRUE**, vengono segnalati tutti gli oggetti e almeno uno degli oggetti è un oggetto mutex abbandonato. Se *bWaitForAll* viene **FALSE**, il valore restituito - **WAIT_ABANDONED_0** è l'indice nella matrice di oggetti dell'oggetto mutex abbandonato che ha soddisfatto l'attesa.  
  
- **WAIT_TIMEOUT**  
  
     L'intervallo di timeout specificato nel *dwTimeOut* scaduto senza il successivo di attesa.  
  
### <a name="remarks"></a>Note  
 Se *bWaitForAll* viene **TRUE**, `Lock` restituirà correttamente, non appena tutti gli oggetti di sincronizzazione segnalati contemporaneamente. Se *bWaitForAll* viene **FALSE**, `Lock` restituirà, non appena viene segnalato uno o più oggetti di sincronizzazione.  
  
 Se `Lock` non è in grado di restituire immediatamente, di attesa non superi il numero di millisecondi specificato nella *dwTimeOut* parametro prima della restituzione. Se *dwTimeOut* viene **infinito**, `Lock` non restituirà fino a quando non viene ottenuto l'accesso a un oggetto o una condizione specificata *dwWakeMask* è stata soddisfatta. In caso contrario, se `Lock` è stato in grado di acquisire un oggetto di sincronizzazione, verrà restituito correttamente; in caso contrario, verrà restituito un errore.  
  
##  <a name="unlock"></a>  CMultiLock::Unlock  
 Rilascia l'oggetto di sincronizzazione di proprietà `CMultiLock`.  
  
```  
BOOL Unlock();

 
BOOL Unlock(
    LONG lCount,  
    LPLONG lPrevCount = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lCount*  
 Numero di riferimento viene conteggiato per rilasciare. Deve essere maggiore di 0. Se la quantità specificata provocherebbe il conteggio dell'oggetto supera il limite massimo, il conteggio non viene modificato e la funzione restituisce **FALSE**.  
  
 *lPrevCount*  
 Punta a una variabile per ricevere il conteggio precedente per l'oggetto di sincronizzazione. Se **NULL**, non viene restituito il conteggio precedente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata `CMultiLock`del distruttore.  
  
 La prima tipologia `Unlock` tenta di sbloccare l'oggetto di sincronizzazione gestito da `CMultiLock`. La seconda forma della `Unlock` tenta di sbloccare il `CSemaphore` oggetti posseduti da `CMultiLock`. Se `CMultiLock` non dispone di qualsiasi bloccato `CSemaphore` dell'oggetto, la funzione restituisce **FALSE**; in caso contrario, restituisce **TRUE**. *lCount* e *lpPrevCount* corrispondono esattamente a quelle dei parametri del [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock). La seconda tipologia di `Unlock` è raramente applicabile alle situazioni multilock.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



