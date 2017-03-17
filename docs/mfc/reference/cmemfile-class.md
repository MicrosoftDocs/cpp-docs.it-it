---
title: Classe CMemFile | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMemFile
- AFX/CMemFile
- AFX/CMemFile::CMemFile
- AFX/CMemFile::Attach
- AFX/CMemFile::Detach
- AFX/CMemFile::Alloc
- AFX/CMemFile::Free
- AFX/CMemFile::GrowFile
- AFX/CMemFile::Memcpy
- AFX/CMemFile::Realloc
dev_langs:
- C++
helpviewer_keywords:
- memory files
- CMemFile class
- temporary files, memory files
ms.assetid: 20e86515-e465-4f73-b2ea-e49789d63165
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 9851e050b05ac129e5e498c7ea99dfedddc79e54
ms.lasthandoff: 02/24/2017

---
# <a name="cmemfile-class"></a>Classe CMemFile
Il [CFile](../../mfc/reference/cfile-class.md)-classe derivata che supporta i file di memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMemFile : public CFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemFile::CMemFile](#cmemfile)|Costruisce un oggetto file di memoria.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemFile::Attach](#attach)|Associa un blocco di memoria per `CMemFile`.|  
|[CMemFile::Detach](#detach)|Disconnette il blocco di memoria da `CMemFile` e restituisce un puntatore al blocco di memoria scollegato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemFile::Alloc](#alloc)|Eseguire l'override per modificare il comportamento di allocazione di memoria.|  
|[CMemFile::Free](#free)|Eseguire l'override per modificare il comportamento di deallocazione di memoria.|  
|[CMemFile::GrowFile](#growfile)|Eseguire l'override per modificare il comportamento quando un file di.|  
|[CMemFile::Memcpy](#memcpy)|Eseguire l'override per modificare il comportamento di copia della memoria durante la lettura e scrittura di file.|  
|[CMemFile::Realloc](#realloc)|Eseguire l'override per modificare il comportamento di riallocazione di memoria.|  
  
## <a name="remarks"></a>Note  
 Questi file di memoria si comportano come i file del disco con la differenza che il file viene archiviato nella RAM piuttosto che sul disco. Un file di memoria è utile per la memorizzazione rapida temporanea o per il trasferimento dei byte non elaborati o oggetti serializzati tra processi indipendenti.  
  
 `CMemFile`gli oggetti automaticamente possono allocare la memoria o è possibile collegare il proprio blocco di memoria di `CMemFile` oggetto chiamando [collegamento](#attach). In entrambi i casi, la memoria per aumenta automaticamente il file di memoria viene allocata in `nGrowBytes`-dimensioni incrementi se `nGrowBytes` è diverso da zero.  
  
 Il blocco di memoria verrà automaticamente eliminato dopo la distruzione di `CMemFile` oggetto se originariamente è stata allocata la memoria per il `CMemFile` dell'oggetto; in caso contrario, è responsabile per la deallocazione della memoria è associata all'oggetto.  
  
 Il blocco di memoria è possibile accedere tramite il puntatore fornito quando si scollega dal `CMemFile` oggetto chiamando [scollegamento](#detach).  
  
 L'utilizzo più comune di `CMemFile` consiste nel creare un `CMemFile` dell'oggetto e utilizzarlo chiamando [CFile](../../mfc/reference/cfile-class.md) funzioni membro. Si noti che la creazione un `CMemFile` verrà automaticamente aperto: non è necessario chiamare [CFile::Open](../../mfc/reference/cfile-class.md#open), che viene utilizzato solo per i file del disco. Poiché `CMemFile` non utilizza un file su disco, il membro dati `CFile::m_hFile` non viene utilizzato.  
  
 Il `CFile` funzioni membro [duplicato](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange), e [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) non vengono implementati per `CMemFile`. Se queste funzioni vengono chiamate su un `CMemFile` dell'oggetto, si otterrà un [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 `CMemFile`utilizza le funzioni della libreria run-time [malloc](../../c-runtime-library/reference/malloc.md), [realloc](../../c-runtime-library/reference/realloc.md), e [gratuita](../../c-runtime-library/reference/free.md) per allocare, riallocare e deallocazione della memoria e la funzione intrinseca [memcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md) alla memoria di copia di blocco durante la lettura e scrittura. Se si desidera modificare questo comportamento o il comportamento quando `CMemFile` si espande un file, derivare la propria classe da `CMemFile` ed eseguire l'override di funzioni appropriate.  
  
 Per ulteriori informazioni su `CMemFile`, vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [Gestione memoria (MFC)](../../mfc/memory-management.md) e vedere [gestione File](../../c-runtime-library/file-handling.md) nel *riferimenti alla libreria di runtime*.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 `CMemFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="alloc"></a>CMemFile::Alloc  
 Questa funzione viene chiamata `CMemFile` funzioni membro.  
  
```  
virtual BYTE* Alloc(SIZE_T nBytes);
```  
  
### <a name="parameters"></a>Parametri  
 `nBytes`  
 Numero di byte di memoria da allocare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al blocco di memoria allocata o **NULL** se l'allocazione non riesce.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per implementare l'allocazione di memoria personalizzato. Se si esegue l'override di questa funzione, è opportuno eseguire l'override [gratuito](#free) e [Realloc](#realloc) anche.  
  
 L'implementazione predefinita utilizza la funzione di libreria run-time [malloc](../../c-runtime-library/reference/malloc.md) per allocare memoria.  
  
##  <a name="attach"></a>CMemFile::Attach  
 Chiamare questa funzione per collegare un blocco di memoria per `CMemFile`.  
  
```  
void Attach(
    BYTE* lpBuffer,  
    UINT nBufferSize,  
    UINT nGrowBytes = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpBuffer`  
 Puntatore al buffer a `CMemFile`.  
  
 `nBufferSize`  
 Valore intero che specifica la dimensione del buffer in byte.  
  
 `nGrowBytes`  
 L'incremento di allocazione di memoria in byte.  
  
### <a name="remarks"></a>Note  
 In questo modo `CMemFile` per usare il blocco di memoria del file di memoria.  
  
 Se `nGrowBytes` è 0, `CMemFile` imposterà la lunghezza del file `nBufferSize`. Ciò significa che i dati del blocco di memoria prima che sia stato collegato alla `CMemFile` verrà utilizzato come il file. File di memoria creati in questo modo non possono essere aumentate in seguito.  
  
 Poiché il file non può essere dimensioni aumentato, prestare attenzione a non causare `CMemFile` per tentare di aumentare il file. Ad esempio, non chiamare il `CMemFile` esegue l'override di [CFile:Write](../../mfc/reference/cfile-class.md#write) per scrivere oltre la fine o non chiamare [CFile:SetLength](../../mfc/reference/cfile-class.md#setlength) con una lunghezza maggiore `nBufferSize`.  
  
 Se `nGrowBytes` è maggiore di 0, `CMemFile` ignorerà il contenuto del blocco di memoria dopo la connessione. È necessario scrivere il contenuto del file di memoria da zero tramite il `CMemFile` eseguire l'override di `CFile::Write`. Se si tenta di scrivere oltre la fine del file o aumento delle dimensioni del file tramite la chiamata di `CMemFile` eseguire l'override di `CFile::SetLength`, `CMemFile` aumenterà l'allocazione di memoria in incrementi di `nGrowBytes`. Aumenta l'allocazione di memoria avrà esito negativo se il blocco di memoria si passa a **Attach** non è stata allocata con un metodo compatibile con [Alloc](#alloc). Per essere compatibile con l'implementazione predefinita di `Alloc`, è necessario allocare la memoria con la funzione di libreria run-time [malloc](../../c-runtime-library/reference/malloc.md) o [calloc](../../c-runtime-library/reference/calloc.md).  
  
##  <a name="cmemfile"></a>CMemFile::CMemFile  
 Il primo overload apre un file di memoria vuoto.  
  
```  
CMemFile(UINT nGrowBytes = 1024);

 
CMemFile(
    BYTE* lpBuffer,  
    UINT nBufferSize,  
    UINT nGrowBytes = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nGrowBytes`  
 L'incremento di allocazione di memoria in byte.  
  
 *lpBuffe*r  
 Puntatore a un buffer che riceve le informazioni delle dimensioni `nBufferSize`.  
  
 `nBufferSize`  
 Valore intero che specifica la dimensione del buffer di file, in byte.  
  
### <a name="remarks"></a>Note  
 Si noti che il file viene aperto dal costruttore e che non è necessario chiamare [CFile::Open](../../mfc/reference/cfile-class.md#open).  
  
 Il secondo overload viene utilizzato lo stesso come se è utilizzato il primo costruttore e viene chiamato immediatamente [Attach](#attach) con gli stessi parametri. Vedere **collegamento** per informazioni dettagliate.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles&#36;](../../atl-mfc-shared/reference/codesnippet/cpp/cmemfile-class_1.cpp)]  
  
##  <a name="detach"></a>CMemFile::Detach  
 Chiamare questa funzione per ottenere un puntatore al blocco di memoria utilizzata da `CMemFile`.  
  
```  
BYTE* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al blocco di memoria che contiene il contenuto del file di memoria.  
  
### <a name="remarks"></a>Note  
 La chiamata a questa funzione viene chiusa anche la `CMemFile`. È possibile ricollegare il blocco di memoria `CMemFile` chiamando [collegamento](#attach). Se si desidera allegare il file e utilizzare i dati in essa contenuti, è necessario chiamare [CFile::GetLength](../../mfc/reference/cfile-class.md#getlength) per ottenere la lunghezza del file prima di chiamare **scollegamento**. Si noti che se si collega un blocco di memoria `CMemFile` in modo che è possibile utilizzare i dati ( `nGrowBytes` = = 0), quindi non sarà in grado di far crescere il file di memoria.  
  
##  <a name="free"></a>CMemFile::Free  
 Questa funzione viene chiamata `CMemFile` funzioni membro.  
  
```  
virtual void Free(BYTE* lpMem);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMem`  
 Puntatore alla memoria da deallocare *.*  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per implementare la deallocazione di memoria personalizzato. Se si esegue l'override di questa funzione, è opportuno eseguire l'override [Alloc](#alloc) e [Realloc](#realloc) anche.  
  
##  <a name="growfile"></a>CMemFile::GrowFile  
 Questa funzione viene chiamata da diversi di `CMemFile` funzioni membro.  
  
```  
virtual void GrowFile(SIZE_T dwNewLen);
```  
  
### <a name="parameters"></a>Parametri  
 `dwNewLen`  
 Nuova dimensione del file di memoria.  
  
### <a name="remarks"></a>Note  
 È possibile eseguirne l'override se si desidera modificare la modalità `CMemFile` aumenta il relativo file. L'implementazione predefinita chiama [Realloc](#realloc) aumento delle dimensioni di un blocco esistente (o [Alloc](#alloc) per creare un blocco di memoria), allocando memoria in multipli di `nGrowBytes` valore specificato nel costruttore o [Attach](#attach) chiamare.  
  
##  <a name="memcpy"></a>CMemFile::Memcpy  
 Questa funzione viene chiamata il `CMemFile` esegue l'override di [CFile:: Read](../../mfc/reference/cfile-class.md#read) e [CFile::Write](../../mfc/reference/cfile-class.md#write) per trasferire i dati da e verso il file di memoria.  
  
```  
virtual BYTE* Memcpy(
    BYTE* lpMemTarget,  
    const BYTE* lpMemSource,  
    SIZE_T nBytes);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMemTarget`  
 Puntatore al blocco di memoria in cui la memoria di origine verrà copiata.  
  
 `lpMemSource`  
 Puntatore al blocco di memoria di origine.  
  
 `nBytes`  
 Numero di byte da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Una copia di `lpMemTarget`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se si desidera modificare la modalità che `CMemFile` viene queste copie di memoria.  
  
##  <a name="realloc"></a>CMemFile::Realloc  
 Questa funzione viene chiamata `CMemFile` funzioni membro.  
  
```  
virtual BYTE* Realloc(
    BYTE* lpMem,  
    SIZE_T nBytes);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMem`  
 Puntatore al blocco di memoria possono essere riallocate.  
  
 `nBytes`  
 Nuova dimensione per il blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al blocco di memoria riallocato (e possibilmente spostato), o **NULL** se non è riuscita la riallocazione.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per implementare operazioni di riallocazione di memoria personalizzato. Se si esegue l'override di questa funzione, è opportuno eseguire l'override [Alloc](#alloc) e [gratuito](#free) anche.  
  
## <a name="see-also"></a>Vedere anche  
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




