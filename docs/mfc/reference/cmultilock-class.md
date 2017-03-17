---
title: Classe CMultiLock | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- CMultiLock class
- synchronization objects, access control
ms.assetid: c5b7c78b-1f81-4387-b7dd-2c813c5b6b61
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
ms.openlocfilehash: a58d59d8e4d7a1c542dee80295dd8eef6c8be338
ms.lasthandoff: 02/24/2017

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
 `CMultiLock`non dispone di una classe di base.  
  
 Utilizzare le classi di sincronizzazione [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), e [CEvent](../../mfc/reference/cevent-class.md), è possibile creare un **CMultiLock** o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto di attesa e rilasciare l'oggetto di sincronizzazione. Utilizzare **CMultiLock** quando sono presenti più oggetti che è possibile utilizzare in un determinato momento. Utilizzare `CSingleLock` quando è necessario solo in attesa su un oggetto alla volta.  
  
 Per utilizzare un **CMultiLock** oggetto, creare innanzitutto una matrice di oggetti di sincronizzazione che si desiderano attendere. Quindi, chiamare il **CMultiLock** costruttore dell'oggetto all'interno di una funzione membro nella classe della risorsa controllata. Chiamare quindi il [blocco](#lock) funzione membro per determinare se una risorsa è disponibile (segnalazione). Se presente, continuare con il resto della funzione membro. Se nessuna risorsa è disponibile, attendere per un determinato periodo di tempo per una risorsa deve essere rilasciato o restituito un errore. Al termine dell'utilizzo di una risorsa, chiamare il [Unlock](#unlock) funzione se la **CMultiLock** oggetto consiste nel riutilizzare o consentire il **CMultiLock** oggetto di essere eliminati.  
  
 **CMultiLock** gli oggetti sono particolarmente utili quando un thread è un numero elevato di `CEvent` risponde ad oggetti. Creare una matrice contenente tutti i `CEvent` puntatori e chiamare `Lock`. In questo modo il thread in attesa finché non viene segnalato uno degli eventi.  
  
 Per ulteriori informazioni su come usare **CMultiLock** oggetti, vedere l'articolo [Multithreading: procedura: utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CMultiLock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="cmultilock"></a>CMultiLock::CMultiLock  
 Costruisce un **CMultiLock** oggetto.  
  
```  
CMultiLock(
    CSyncObject* ppObjects [ ],  
    DWORD dwCount,  
    BOOL bInitialLock = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `ppObjects`  
 Matrice di puntatori agli oggetti di sincronizzazione per restare in attesa. Non può essere **NULL**.  
  
 `dwCount`  
 Numero di oggetti `ppObjects`. Deve essere maggiore di 0.  
  
 `bInitialLock`  
 Specifica se inizialmente tenta di accedere a qualsiasi altro oggetto fornito.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata dopo la creazione della matrice di oggetti di sincronizzazione per restare in attesa. Viene in genere chiamato da all'interno del thread che deve attendere che uno degli oggetti di sincronizzazione diventi disponibile.  
  
##  <a name="islocked"></a>CMultiLock::IsLocked  
 Determina se l'oggetto specificato è impostato su non segnalato (non disponibile).  
  
```  
BOOL IsLocked(DWORD dwItem);
```  
  
### <a name="parameters"></a>Parametri  
 *dwItem*  
 Indice nella matrice di oggetti corrispondente all'oggetto il cui stato viene eseguita la query.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto specificato è bloccata; in caso contrario 0.  
  
##  <a name="lock"></a>CMultiLock::Lock  
 Chiamare questa funzione per ottenere l'accesso a uno o più delle risorse controllate dagli oggetti di sincronizzazione forniti per il **CMultiLock** costruttore.  
  
```  
DWORD Lock(
    DWORD dwTimeOut = INFINITE,  
    BOOL bWaitForAll = TRUE,  
    DWORD dwWakeMask = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *dwTimeOut*  
 Specifica la quantità di tempo di attesa per l'oggetto di sincronizzazione sia disponibile (segnalazione). Se **infinito**, `Lock` attenderà fino a quando l'oggetto viene segnalato prima della restituzione.  
  
 `bWaitForAll`  
 Specifica se tutti gli oggetti in attesa devono diventare segnalati allo stesso tempo prima della restituzione. Se **FALSE**, `Lock` restituirà quando viene segnalato uno degli oggetti in attesa.  
  
 `dwWakeMask`  
 Specifica altre condizioni che possono interrompere l'attesa. Per un elenco completo delle opzioni disponibili per questo parametro, vedere [MsgWaitForMultipleObjects](http://msdn.microsoft.com/library/windows/desktop/ms684242) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Se `Lock` ha esito negativo, restituisce – 1. Se ha esito positivo, restituisce uno dei valori seguenti:  
  
-   Tra **WAIT_OBJECT_0** e **WAIT_OBJECT_0** + (numero di oggetti – 1)  
  
     Se `bWaitForAll` è **TRUE**, tutti gli oggetti vengono segnalati (disponibile). Se `bWaitForAll` è **FALSE**, il valore restituito: **WAIT_OBJECT_0** è l'indice nella matrice di oggetti dell'oggetto che riceve un segnale (disponibile).  
  
- **WAIT_OBJECT_0** + (numero di oggetti)  
  
     Un evento specificato in `dwWakeMask` è disponibile nella coda di input del thread.  
  
-   Tra **WAIT_ABANDONED_0** e **WAIT_ABANDONED_0** + (numero di oggetti – 1)  
  
     Se `bWaitForAll` è **TRUE**, vengono segnalati tutti gli oggetti e almeno uno degli oggetti è un oggetto mutex abbandonato. Se `bWaitForAll` è **FALSE**, il valore restituito: **WAIT_ABANDONED_0** è l'indice nella matrice di oggetti dell'oggetto mutex abbandonato che ha soddisfatto l'attesa.  
  
- **WAIT_TIMEOUT**  
  
     L'intervallo di timeout specificato in *dwTimeOut* scaduto senza il successivo di attesa.  
  
### <a name="remarks"></a>Note  
 Se `bWaitForAll` è **TRUE**, `Lock` restituirà correttamente appena segnalati contemporaneamente tutti gli oggetti di sincronizzazione. Se `bWaitForAll` è **FALSE**, `Lock` restituirà non appena viene segnalato uno o più oggetti di sincronizzazione.  
  
 Se `Lock` non è in grado di restituire immediatamente, di attesa non superi il numero di millisecondi specificato nella *dwTimeOut* parametro prima della restituzione. Se *dwTimeOut* è **infinito**, `Lock` non verrà restituito finché non viene ottenuto l'accesso a un oggetto o una condizione specificata `dwWakeMask` è stata soddisfatta. In caso contrario, se `Lock` è stato in grado di acquisire un oggetto di sincronizzazione, verrà restituito correttamente; in caso contrario, verrà restituito un errore.  
  
##  <a name="unlock"></a>CMultiLock::Unlock  
 Rilascia l'oggetto di sincronizzazione di proprietà `CMultiLock`.  
  
```  
BOOL Unlock();

 
BOOL Unlock(
    LONG lCount,  
    LPLONG lPrevCount = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lCount`  
 Numero di riferimento numero di rilascio. Deve essere maggiore di 0. Se la quantità specificata comporta il conteggio dell'oggetto di superare il limite massimo, il conteggio non viene modificato e la funzione restituisce **FALSE**.  
  
 `lPrevCount`  
 Punta a una variabile per ricevere il conteggio precedente per l'oggetto di sincronizzazione. Se **NULL**, non viene restituito il conteggio precedente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata `CMultiLock`del distruttore.  
  
 Il primo formato della `Unlock` tenta di sbloccare l'oggetto di sincronizzazione gestito da `CMultiLock`. La seconda forma di `Unlock` tenta di sbloccare il `CSemaphore` oggetti posseduti da `CMultiLock`. Se `CMultiLock` non dispone di qualsiasi blocco `CSemaphore` dell'oggetto, la funzione restituisce **FALSE**; in caso contrario, restituisce **TRUE**. `lCount`e `lpPrevCount` corrispondono esattamente ai parametri di [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock). La seconda forma di `Unlock` è raramente applicabile a situazioni multilock.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




