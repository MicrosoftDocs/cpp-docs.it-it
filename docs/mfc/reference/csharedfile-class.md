---
title: Classe CSharedFile | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CSharedFile [MFC], CSharedFile
- CSharedFile [MFC], Detach
- CSharedFile [MFC], SetHandle
ms.assetid: 5d000422-9ede-4318-a8c9-f7412b674f39
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: df3c052f3cefb3aa7d2a55e81fd5f7813632ceb1
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37078283"
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
|[CSharedFile::SetHandle](#sethandle)|Collega il file di memoria condivisa a un blocco di memoria.|  
  
## <a name="remarks"></a>Note  
 File di memoria si comportano come file su disco con la differenza che il file viene archiviato nella RAM piuttosto che sul disco. Un file di memoria è utile per l'archiviazione temporanea fast o per il trasferimento dei byte non elaborati o oggetti serializzati tra processi indipendenti.  
  
 I file di memoria condivisa si differenziano dagli altri file di memoria in memoria per essi è stata allocata con il [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) funzione di Windows. Il `CSharedFile` classe archivia i dati in un blocco di memoria allocata a livello globale (creato usando `GlobalAlloc`), e questo blocco di memoria può essere condivise tramite DDE, gli Appunti o altri OLE/COM uniform operazioni di trasferimento dati, ad esempio, utilizzando `IDataObject`.  
  
 `GlobalAlloc` Restituisce un `HGLOBAL` gestire anziché un puntatore alla memoria, ad esempio il puntatore restituito da [malloc](../../c-runtime-library/reference/malloc.md). Il `HGLOBAL` handle è necessaria in alcune applicazioni. Ad esempio, di inserire dati negli Appunti è necessario un `HGLOBAL` gestire.  
  
 Tenere presente che `CSharedFile` non mappato alla memoria utilizzare file e i dati non possono essere condiviso direttamente tra processi.  
  
 `CSharedFile` oggetti automaticamente possono allocare la memoria o è possibile collegare il propria blocco di memoria per il `CSharedFile` oggetto chiamando [CSharedFile::SetHandle](#sethandle). In entrambi i casi, viene allocata la memoria per l'aumento delle dimensioni nel file di memoria automaticamente `nGrowBytes`-dimensioni incrementi se `nGrowBytes` non è zero.  
  
 Per altre informazioni, vedere l'articolo [file in MFC](../../mfc/files-in-mfc.md) e [gestione File](../../c-runtime-library/file-handling.md) nel *riferimenti alla libreria di Run-Time*.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [CMemFile](../../mfc/reference/cmemfile-class.md)  
  
 `CSharedFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxadv.h  
  
##  <a name="csharedfile"></a>  CSharedFile::CSharedFile  
 Costruisce un `CSharedFile` dell'oggetto e ne alloca memoria.  
  
```  
CSharedFile(
    UINT nAllocFlags = GMEM_DDESHARE | GMEM_MOVEABLE,  
    UINT nGrowBytes = 4096);
```  
  
### <a name="parameters"></a>Parametri  
 *nAllocFlags*  
 Flag che indica come è possibile allocare memoria. Vedere [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) per un elenco di valori di flag validi.  
  
 *nGrowBytes*  
 L'incremento di allocazione di memoria in byte.  
  
##  <a name="detach"></a>  CSharedFile::Detach  
 Chiamare questa funzione per chiudere il file di memoria e lo scollegamento dal blocco di memoria.  
  
```  
HGLOBAL Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del blocco di memoria che contiene il contenuto del file di memoria.  
  
### <a name="remarks"></a>Note  
 È possibile riaprirlo chiamando [SetHandle](#sethandle), utilizzando l'handle restituito da **scollegamento**.  
  
##  <a name="sethandle"></a>  CSharedFile::SetHandle  
 Chiamare questa funzione per collegare un blocco di memoria globale per il `CSharedFile` oggetto.  
  
```  
void SetHandle(
    HGLOBAL hGlobalMemory,  
    BOOL bAllowGrow = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *hGlobalMemory*  
 Handle per la memoria globale per collegare il `CSharedFile`.  
  
 *bAllowGrow*  
 Specifica se il blocco di memoria può raggiungere.  
  
### <a name="remarks"></a>Note  
 Se *bAllowGrow* è diverso da zero, la dimensione del blocco di memoria viene aumentata in base alle esigenze, ad esempio, se un tentativo di tentato di scrivere più byte nel file che sono stati allocati per il blocco di memoria.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CMemFile](../../mfc/reference/cmemfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMemFile](../../mfc/reference/cmemfile-class.md)
