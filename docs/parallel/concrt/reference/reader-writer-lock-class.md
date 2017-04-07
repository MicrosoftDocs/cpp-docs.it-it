---
title: Classe reader_writer_lock | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- reader_writer_lock
- CONCRT/concurrency::reader_writer_lock
- CONCRT/concurrency::reader_writer_lock::scoped_lock
- CONCRT/concurrency::reader_writer_lock::scoped_lock_read
- CONCRT/concurrency::reader_writer_lock::reader_writer_lock
- CONCRT/concurrency::reader_writer_lock::lock
- CONCRT/concurrency::reader_writer_lock::lock_read
- CONCRT/concurrency::reader_writer_lock::try_lock
- CONCRT/concurrency::reader_writer_lock::try_lock_read
- CONCRT/concurrency::reader_writer_lock::unlock
dev_langs:
- C++
helpviewer_keywords:
- reader_writer_lock class
ms.assetid: 91a59cd2-ca05-4b74-8398-d826d9f86736
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
translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: b5107923baa7d22e6a98c6617a22a883c4d84125
ms.lasthandoff: 03/17/2017

---
# <a name="readerwriterlock-class"></a>Classe reader_writer_lock
Un blocco reader-writer basato sulla coda di preferenza writer con solo spin locale. Il blocco concede l'accesso FIFO (First in First out) a writer e può essere dannoso per i reader in condizioni di continuo caricamento di writer.  
  
## <a name="syntax"></a>Sintassi  
  
```
class reader_writer_lock;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-classes"></a>Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe reader_writer_lock:: scoped_lock](#scoped_lock_class)|Un'eccezione wrapper RAII sicuro che può essere utilizzata per acquisire `reader_writer_lock` oggetti di blocco come writer.|  
|[Classe reader_writer_lock:: scoped_lock_read](#scoped_lock_read_class)|Un'eccezione wrapper RAII sicuro che può essere utilizzata per acquisire `reader_writer_lock` oggetti di blocco come lettore.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[reader_writer_lock](#ctor)|Costruisce un nuovo oggetto `reader_writer_lock`.|  
|[~ reader_writer_lock distruttore](#dtor)|Elimina il `reader_writer_lock` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[lock](#lock)|Acquisisce il blocco di lettura / scrittura come writer.|  
|[lock_read](#lock_read)|Acquisisce il blocco di lettura / scrittura come lettore. Se sono presenti writer, lettori attivi sono in attesa fino a quando non vengono eseguite. Il lettore semplicemente registra un interesse per il blocco e attende che i writer per rilasciarlo.|  
|[try_lock](#try_lock)|Tenta di acquisire il blocco di lettura / scrittura come writer senza bloccare.|  
|[try_lock_read](#try_lock_read)|Tenta di acquisire il blocco di lettura / scrittura come lettore senza bloccare.|  
|[unlock](#unlock)|Sblocca il blocco di lettura / scrittura basato su chi ha bloccato, lettore o writer.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `reader_writer_lock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="lock"></a>blocco 

 Acquisisce il blocco di lettura / scrittura come writer.  
  
```
void lock();
```  
  
### <a name="remarks"></a>Note  
 Spesso è preferibile utilizzare il [scoped_lock](#scoped_lock_class) costrutto per acquisire e rilasciare un `reader_writer_lock` oggetto come writer in un'eccezione modo sicuro.  
  
 Dopo il tentativo di acquisizione del blocco da parte di un writer, qualsiasi lettore futuro si bloccherà finché il blocco non sarà stato acquisito e rilasciato correttamente dai writer. Questo blocco è alterato dai writer e può essere dannoso per i lettori in condizioni di carico continuo di writer.  
  
 I writer sono concatenati in modo che un writer esce dal blocco rilascia il successivo writer nella riga.  
  
 Se il blocco è già utilizzato dal contesto di chiamata, un [improper_lock](improper-lock-class.md) verrà generata l'eccezione.  
  
##  <a name="lock_read"></a>lock_read 

 Acquisisce il blocco di lettura / scrittura come lettore. Se sono presenti writer, lettori attivi sono in attesa fino a quando non vengono eseguite. Il lettore semplicemente registra un interesse per il blocco e attende che i writer per rilasciarlo.  
  
```
void lock_read();
```  
  
### <a name="remarks"></a>Note  
 Spesso è preferibile utilizzare il [scoped_lock_read](#scoped_lock_read_class) costrutto per acquisire e rilasciare un `reader_writer_lock` oggetto come un lettore di un'eccezione modo sicuro.  
  
 Se ci sono in attesa sul blocco del writer, il lettore attenderà fino a quando tutti i writer in riga abbiano acquisito e rilasciato il blocco. Questo blocco è alterato dai writer e può essere dannoso per i lettori in condizioni di carico continuo di writer.  
  
##  <a name="ctor"></a>reader_writer_lock 

 Costruisce un nuovo oggetto `reader_writer_lock`.  
  
```
reader_writer_lock();
```  
  
##  <a name="dtor"></a>~ reader_writer_lock 

 Elimina il `reader_writer_lock` oggetto.  
  
```
~reader_writer_lock();
```  
  
### <a name="remarks"></a>Note  
 È previsto che il blocco non è più quando il distruttore viene eseguito. Consentire il blocco del writer di lettore distruggere con il blocco ancora mantenuto causa un comportamento indefinito.  
  
##  <a name="scoped_lock_class"></a>Classe reader_writer_lock:: scoped_lock  
 Un'eccezione wrapper RAII sicuro che può essere utilizzata per acquisire `reader_writer_lock` oggetti di blocco come writer.  
  
```
class scoped_lock;
``` 
## <a name="scoped_lock_ctor"></a>scoped_lock::scoped_lock 

Costruisce un `scoped_lock` dell'oggetto e acquisisce il `reader_writer_lock` oggetto passato nel `_Reader_writer_lock` parametro come writer. Se il blocco viene mantenuto da un altro thread, questa chiamata verrà bloccata.  
  
  
```
explicit _CRTIMP scoped_lock(reader_writer_lock& _Reader_writer_lock);
```  
  
#### <a name="parameters"></a>Parametri  
 `_Reader_writer_lock`  
 Il `reader_writer_lock` oggetto da acquisire come writer.  
  
## <a name="scoped_lock_dtor"></a>scoped_lock:: ~ scoped_lock 

Elimina un `reader_writer_lock` dell'oggetto e rilascia il blocco fornito nel suo costruttore.   

```
~scoped_lock();
```  
  
##  <a name="scoped_lock_read_class"></a>Classe reader_writer_lock:: scoped_lock_read  
 Un'eccezione wrapper RAII sicuro che può essere utilizzata per acquisire `reader_writer_lock` oggetti di blocco come lettore.  
  
```
class scoped_lock_read;
```  
  
##  <a name="try_lock"></a>try_lock 

 Tenta di acquisire il blocco di lettura / scrittura come writer senza bloccare.  

## <a name="scoped_lock_read_ctor"></a>scoped_lock_read::scoped_lock_read 

Costruisce un `scoped_lock_read` dell'oggetto e acquisisce il `reader_writer_lock` oggetto passato nel `_Reader_writer_lock` parametro come lettore. Se il blocco viene mantenuto da un altro thread come writer o esistono writer in sospeso, questa chiamata verrà bloccata.  
  
```
explicit _CRTIMP scoped_lock_read(reader_writer_lock& _Reader_writer_lock);
```  
  
#### <a name="parameters"></a>Parametri  
 `_Reader_writer_lock`  
 Il `reader_writer_lock` oggetto da acquisire come reader.  
  
## <a name="a-namescopedlockreaddtor--readerwriterlockscopedlockreadscopedlockread-destructor"></a><a name="scoped_lock_read_dtor">reader_writer_lock:: ~ scoped_lock_read distruttore
Elimina un `scoped_lock_read` dell'oggetto e rilascia il blocco fornito nel suo costruttore.  

```
~scoped_lock_read();
```  
  
## <a name="try_lock"></a>try_lock 

```
bool try_lock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se è stato acquisito il blocco, il valore `true`; in caso contrario, il valore `false`.  
  
##  <a name="try_lock_read"></a>try_lock_read 

 Tenta di acquisire il blocco di lettura / scrittura come lettore senza bloccare.  
  
```
bool try_lock_read();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se è stato acquisito il blocco, il valore `true`; in caso contrario, il valore `false`.  
  
##  <a name="unlock"></a>sbloccare 

 Sblocca il blocco di lettura / scrittura basato su chi ha bloccato, lettore o writer.  
  
```
void unlock();
```  
  
### <a name="remarks"></a>Note  
 Se ci sono in attesa sul blocco del writer, il rilascio del blocco andrà sempre al prossimo writer nell'ordine FIFO. Questo blocco è alterato dai writer e può essere dannoso per i lettori in condizioni di carico continuo di writer.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe critical_section](critical-section-class.md)

