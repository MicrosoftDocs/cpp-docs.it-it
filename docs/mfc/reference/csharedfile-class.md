---
title: Classe CSharedFile | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSharedFile
- AFXADV/CSharedFile
- AFXADV/CSharedFile::CSharedFile
- AFXADV/CSharedFile::Detach
- AFXADV/CSharedFile::SetHandle
dev_langs:
- C++
helpviewer_keywords:
- memory files
- CSharedFile class
- shared memory files
ms.assetid: 5d000422-9ede-4318-a8c9-f7412b674f39
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: f812b2c7b8e3b158068bf3fdab0a327460056251
ms.lasthandoff: 02/24/2017

---
# <a name="csharedfile-class"></a>Classe CSharedFile
Il [CMemFile](../../mfc/reference/cmemfile-class.md)-classe derivata che supporta file di memoria condivisa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSharedFile : public CMemFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSharedFile::CSharedFile](#csharedfile)|Costruisce un oggetto `CSharedFile`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSharedFile::Detach](#detach)|Chiude il file di memoria condivisa e restituisce l'handle del relativo blocco di memoria.|  
|[CSharedFile::SetHandle](#sethandle)|Allega il file di memoria condivisa a un blocco di memoria.|  
  
## <a name="remarks"></a>Note  
 File di memoria si comportano come i file del disco con la differenza che il file viene archiviato nella RAM piuttosto che sul disco. Un file di memoria è utile per la memorizzazione rapida temporanea o per il trasferimento dei byte non elaborati o oggetti serializzati tra processi indipendenti.  
  
 File di memoria condivisa differiscono dagli altri file di memoria in memoria che è stata allocata con il [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) funzione di Windows. Il `CSharedFile` classe archivia i dati in un blocco di memoria allocata a livello globale (creato utilizzando **GlobalAlloc**), e questo blocco di memoria può essere condivise tramite DDE, negli Appunti o altri OLE/COM uniform operazioni di trasferimento dati, ad esempio, utilizzando `IDataObject`.  
  
 **GlobalAlloc** restituisce un `HGLOBAL` gestire anziché un puntatore alla memoria, ad esempio il puntatore restituito da [malloc](../../c-runtime-library/reference/malloc.md). Il `HGLOBAL` handle è necessario in determinate applicazioni. Ad esempio, di inserire dati negli Appunti è necessario un `HGLOBAL` gestire.  
  
 Si noti che `CSharedFile` non mappato alla memoria utilizzare file e i dati non possono essere condivisi direttamente tra processi.  
  
 `CSharedFile`gli oggetti automaticamente possono allocare la memoria o è possibile collegare il proprio blocco di memoria di `CSharedFile` oggetto chiamando [CSharedFile::SetHandle](#sethandle). In entrambi i casi, la memoria per aumenta automaticamente il file di memoria viene allocata in `nGrowBytes`-dimensioni incrementi se `nGrowBytes` è diverso da zero.  
  
 Per ulteriori informazioni, vedere l'articolo [file in MFC](../../mfc/files-in-mfc.md) e [gestione File](../../c-runtime-library/file-handling.md) nel *riferimenti alla libreria di runtime*.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [CMemFile](../../mfc/reference/cmemfile-class.md)  
  
 `CSharedFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxadv.h  
  
##  <a name="csharedfile"></a>CSharedFile::CSharedFile  
 Costruisce un `CSharedFile` dell'oggetto e ne alloca memoria.  
  
```  
CSharedFile(
    UINT nAllocFlags = GMEM_DDESHARE | GMEM_MOVEABLE,  
    UINT nGrowBytes = 4096);
```  
  
### <a name="parameters"></a>Parametri  
 *nAllocFlags*  
 Flag che indica come è possibile allocare memoria. Vedere [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) per un elenco di valori di flag validi.  
  
 `nGrowBytes`  
 L'incremento di allocazione di memoria in byte.  
  
##  <a name="detach"></a>CSharedFile::Detach  
 Chiamare questa funzione per chiudere il file di memoria e scollegarlo dal blocco di memoria.  
  
```  
HGLOBAL Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del blocco di memoria che contiene il contenuto del file di memoria.  
  
### <a name="remarks"></a>Note  
 È possibile riaprirlo chiamando [SetHandle](#sethandle), utilizzando l'handle restituito da **scollegamento**.  
  
##  <a name="sethandle"></a>CSharedFile::SetHandle  
 Chiamare questa funzione per collegare un blocco di memoria globale per il `CSharedFile` oggetto.  
  
```  
void SetHandle(
    HGLOBAL hGlobalMemory,  
    BOOL bAllowGrow = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *hGlobalMemory*  
 Handle per la memoria globale per collegare il `CSharedFile`.  
  
 `bAllowGrow`  
 Specifica se il blocco di memoria consentito.  
  
### <a name="remarks"></a>Note  
 Se `bAllowGrow` è diverso da zero, la dimensione del blocco di memoria viene aumentata in base alle esigenze, ad esempio, se un tentativo di tentato di scrivere più byte del file che sono stati allocati per il blocco di memoria.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CMemFile](../../mfc/reference/cmemfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMemFile](../../mfc/reference/cmemfile-class.md)

