---
title: Classe CMemFile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
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
dev_langs: C++
helpviewer_keywords:
- CMemFile [MFC], CMemFile
- CMemFile [MFC], Attach
- CMemFile [MFC], Detach
- CMemFile [MFC], Alloc
- CMemFile [MFC], Free
- CMemFile [MFC], GrowFile
- CMemFile [MFC], Memcpy
- CMemFile [MFC], Realloc
ms.assetid: 20e86515-e465-4f73-b2ea-e49789d63165
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 46aa51c97ec58d5e083b2cad7b622e3b75a04749
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cmemfile-class"></a>Classe CMemFile
Il [CFile](../../mfc/reference/cfile-class.md)-classe derivata che supporta file di memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMemFile : public CFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemFile::CMemFile](#cmemfile)|Costruisce un oggetto di file di memoria.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemFile::Attach](#attach)|Associa un blocco di memoria da `CMemFile`.|  
|[CMemFile::Detach](#detach)|Disconnette il blocco di memoria da `CMemFile` e restituisce un puntatore al blocco di memoria scollegato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemFile::Alloc](#alloc)|Eseguire l'override per modificare il comportamento di allocazione di memoria.|  
|[CMemFile::Free](#free)|Eseguire l'override per modificare il comportamento di deallocazione di memoria.|  
|[CMemFile::GrowFile](#growfile)|Eseguire l'override per modificare il comportamento quando l'aumento delle dimensioni di un file.|  
|[CMemFile::Memcpy](#memcpy)|Eseguire l'override per modificare il comportamento di copia della memoria durante la lettura e scrittura di file.|  
|[CMemFile::Realloc](#realloc)|Eseguire l'override per modificare il comportamento delle operazioni di riallocazione della memoria.|  
  
## <a name="remarks"></a>Note  
 Questi file di memoria si comportano come file su disco, ad eccezione del fatto che il file viene archiviato nella RAM piuttosto che sul disco. Un file di memoria è utile per l'archiviazione temporanea veloce o per il trasferimento dei byte non elaborati o oggetti serializzati tra processi indipendenti.  
  
 `CMemFile`gli oggetti automaticamente possono allocare la memoria o è possibile collegare il proprio blocco di memoria di `CMemFile` oggetto chiamando [collegamento](#attach). In entrambi i casi, viene allocata la memoria per l'aumento delle dimensioni nel file di memoria automaticamente `nGrowBytes`-dimensioni incrementi se `nGrowBytes` è diverso da zero.  
  
 Il blocco di memoria verrà automaticamente eliminato dopo la distruzione del `CMemFile` oggetto se originariamente è stata allocata la memoria per il `CMemFile` oggetto; in caso contrario, si è responsabili della deallocazione della memoria è associata all'oggetto.  
  
 È possibile accedere il blocco di memoria tramite il puntatore fornito quando si scollega dal `CMemFile` oggetto chiamando [scollegamento](#detach).  
  
 L'utilizzo più comune di `CMemFile` consiste nel creare un `CMemFile` dell'oggetto e usarlo chiamando [CFile](../../mfc/reference/cfile-class.md) funzioni membro. Si noti che la creazione un `CMemFile` verrà aperta automaticamente: non è necessario chiamare [CFile::Open](../../mfc/reference/cfile-class.md#open), che viene utilizzata solo per i file su disco. Poiché `CMemFile` non utilizza un file su disco, il membro dati `CFile::m_hFile` non viene utilizzato.  
  
 Il `CFile` funzioni membro [duplicato](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange), e [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) non sono implementate per `CMemFile`. Se queste funzioni vengono chiamate su un `CMemFile` dell'oggetto, si otterrà un [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 `CMemFile`utilizza le funzioni della libreria run-time [malloc](../../c-runtime-library/reference/malloc.md), [realloc](../../c-runtime-library/reference/realloc.md), e [libero](../../c-runtime-library/reference/free.md) per allocare, riallocare e deallocare la memoria; e la funzione intrinseca [memcpy ](../../c-runtime-library/reference/memcpy-wmemcpy.md) alla memoria di copia di blocco durante la lettura e scrittura. Se si desidera modificare questo comportamento o il comportamento quando `CMemFile` aumento delle dimensioni di un file, derivare la propria classe dal `CMemFile` ed eseguire l'override di funzioni appropriate.  
  
 Per ulteriori informazioni su `CMemFile`, vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [Gestione memoria (MFC)](../../mfc/memory-management.md) e vedere [gestione File](../../c-runtime-library/file-handling.md) nel *in fase di esecuzione Riferimenti alla libreria*.  
  
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
 Un puntatore al blocco di memoria allocata, o **NULL** se l'allocazione non riuscita.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per implementare l'allocazione di memoria personalizzato. Se si esegue l'override di questa funzione, è opportuno eseguire l'override [libero](#free) e [Realloc](#realloc) anche.  
  
 L'implementazione predefinita utilizza la funzione della libreria run-time [malloc](../../c-runtime-library/reference/malloc.md) di allocazione della memoria.  
  
##  <a name="attach"></a>CMemFile::Attach  
 Chiamare questa funzione per collegare un blocco di memoria da `CMemFile`.  
  
```  
void Attach(
    BYTE* lpBuffer,  
    UINT nBufferSize,  
    UINT nGrowBytes = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpBuffer`  
 Puntatore al buffer di essere collegato al `CMemFile`.  
  
 `nBufferSize`  
 Valore intero che specifica le dimensioni del buffer in byte.  
  
 `nGrowBytes`  
 L'incremento di allocazione della memoria in byte.  
  
### <a name="remarks"></a>Note  
 In questo modo `CMemFile` per utilizzare il blocco di memoria come file di memoria.  
  
 Se `nGrowBytes` è 0, `CMemFile` imposterà la lunghezza del file `nBufferSize`. Ciò significa che i dati nel blocco di memoria prima che è stato collegato a `CMemFile` verrà utilizzato come il file. File di memoria creati in questo modo non possono essere aumentate in seguito.  
  
 Poiché il file non può essere incrementato, prestare attenzione a non causare `CMemFile` per tentare di aumentare il file. Ad esempio, non chiamare il `CMemFile` esegue l'override di [CFile:Write](../../mfc/reference/cfile-class.md#write) per scrivere oltre la fine o di non chiamare [CFile:SetLength](../../mfc/reference/cfile-class.md#setlength) con una lunghezza maggiore `nBufferSize`.  
  
 Se `nGrowBytes` è maggiore di 0, `CMemFile` ignorerà il contenuto del blocco di memoria che è stato collegato. È necessario scrivere il contenuto del file di memoria da zero tramite il `CMemFile` eseguire l'override di `CFile::Write`. Se si tenta di scrivere oltre la fine del file o aumentare il file tramite la chiamata di `CMemFile` eseguire l'override di `CFile::SetLength`, `CMemFile` aumenterà l'allocazione di memoria in incrementi di `nGrowBytes`. Aumento delle dimensioni di allocazione di memoria avrà esito negativo se il blocco di memoria si passa a **collegamento** non è stato allocato con un metodo compatibile con [Alloc](#alloc). Per essere compatibile con l'implementazione predefinita di `Alloc`, è necessario allocare la memoria con la funzione della libreria run-time [malloc](../../c-runtime-library/reference/malloc.md) o [calloc](../../c-runtime-library/reference/calloc.md).  
  
##  <a name="cmemfile"></a>CMemFile::CMemFile  
 Il primo overload apre un file vuoto della memoria.  
  
```  
CMemFile(UINT nGrowBytes = 1024);

 
CMemFile(
    BYTE* lpBuffer,  
    UINT nBufferSize,  
    UINT nGrowBytes = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nGrowBytes`  
 L'incremento di allocazione della memoria in byte.  
  
 *lpBuffe*r  
 Puntatore a un buffer che riceve le informazioni delle dimensioni `nBufferSize`.  
  
 `nBufferSize`  
 Valore intero che specifica le dimensioni del buffer di file, in byte.  
  
### <a name="remarks"></a>Note  
 Si noti che il file è aperto dal costruttore e che non è necessario chiamare [CFile::Open](../../mfc/reference/cfile-class.md#open).  
  
 Il secondo overload viene utilizzato lo stesso come se è stato utilizzato il primo costruttore e chiamato immediatamente [collegamento](#attach) con gli stessi parametri. Vedere **collegamento** per informazioni dettagliate.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#36](../../atl-mfc-shared/reference/codesnippet/cpp/cmemfile-class_1.cpp)]  
  
##  <a name="detach"></a>CMemFile::Detach  
 Chiamare questa funzione per ottenere un puntatore al blocco di memoria utilizzata da `CMemFile`.  
  
```  
BYTE* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al blocco di memoria che contiene il contenuto del file di memoria.  
  
### <a name="remarks"></a>Note  
 La chiamata a questa funzione viene chiusa anche la `CMemFile`. È possibile ricollegare il blocco di memoria `CMemFile` chiamando [collegamento](#attach). Se si desidera ricollegare il file e utilizzare i dati in essa contenuti, è necessario chiamare [CFile::GetLength](../../mfc/reference/cfile-class.md#getlength) per ottenere la lunghezza del file prima di chiamare **scollegamento**. Si noti che se si collega un blocco di memoria `CMemFile` in modo che è possibile utilizzare i dati ( `nGrowBytes` = = 0), quindi non sarà in grado di aumentare il file di memoria.  
  
##  <a name="free"></a>CMemFile::Free  
 Questa funzione viene chiamata `CMemFile` funzioni membro.  
  
```  
virtual void Free(BYTE* lpMem);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMem`  
 Puntatore alla memoria da deallocare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per implementare la deallocazione di memoria personalizzato. Se si esegue l'override di questa funzione, è opportuno eseguire l'override [Alloc](#alloc) e [Realloc](#realloc) anche.  
  
##  <a name="growfile"></a>CMemFile::GrowFile  
 Questa funzione viene chiamata da alcune delle `CMemFile` funzioni membro.  
  
```  
virtual void GrowFile(SIZE_T dwNewLen);
```  
  
### <a name="parameters"></a>Parametri  
 `dwNewLen`  
 Nuova dimensione del file di memoria.  
  
### <a name="remarks"></a>Note  
 È possibile eseguirne l'override se si desidera modificare la modalità `CMemFile` Aumenta dimensioni del file relativo. L'implementazione predefinita chiama [Realloc](#realloc) aumento delle dimensioni di un blocco esistente (o [Alloc](#alloc) per creare un blocco di memoria), allocando memoria in multipli del `nGrowBytes` valore specificato nel costruttore o [Collegamento](#attach) chiamare.  
  
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
 Eseguire l'override di questa funzione se si desidera modificare la modalità che `CMemFile` queste copie di memoria.  
  
##  <a name="realloc"></a>CMemFile::Realloc  
 Questa funzione viene chiamata `CMemFile` funzioni membro.  
  
```  
virtual BYTE* Realloc(
    BYTE* lpMem,  
    SIZE_T nBytes);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMem`  
 Puntatore al blocco di memoria da riallocare.  
  
 `nBytes`  
 Nuova dimensione per il blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al blocco di memoria riallocato (e possibilmente spostato), o **NULL** se non è riuscita la riallocazione.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per implementare la riallocazione della memoria personalizzati. Se si esegue l'override di questa funzione, è opportuno eseguire l'override [Alloc](#alloc) e [libero](#free) anche.  
  
## <a name="see-also"></a>Vedere anche  
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)


