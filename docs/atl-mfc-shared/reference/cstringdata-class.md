---
title: Classe CStringData | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStringData
- ATLSIMPSTR/ATL::CStringData
- ATLSIMPSTR/ATL::AddRef
- ATLSIMPSTR/ATL::data
- ATLSIMPSTR/ATL::IsLocked
- ATLSIMPSTR/ATL::IsShared
- ATLSIMPSTR/ATL::Lock
- ATLSIMPSTR/ATL::Release
- ATLSIMPSTR/ATL::Unlock
- ATLSIMPSTR/ATL::nAllocLength
- ATLSIMPSTR/ATL::nDataLength
- ATLSIMPSTR/ATL::nRefs
- ATLSIMPSTR/ATL::pStringMgr
dev_langs: C++
helpviewer_keywords:
- CStringData class
- shared classes, CStringData
ms.assetid: 4e31b5ca-3dbe-4fd5-b692-8211fbfb2593
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7523ca52c0ded8ec9b3cf02dd6798beca8be5cf8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cstringdata-class"></a>Classe CStringData
Questa classe rappresenta i dati di un oggetto stringa.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct CStringData
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddRef](#addref)|Incrementa il conteggio dei riferimenti dell'oggetto dati stringa.|  
|[data](#data)|Recupera i dati di carattere di un oggetto stringa.|  
|[IsLocked](#islocked)|Determina se il buffer dell'oggetto string associato è bloccato.|  
|[IsShared](#isshared)|Determina se il buffer dell'oggetto string associato è attualmente condivisa.|  
|[Blocco](#lock)|Blocca il buffer dell'oggetto string associato.|  
|[Rilascio](#release)|Rilascia l'oggetto stringa specificato.|  
|[Lo sblocco](#unlock)|Sblocca il buffer dell'oggetto string associato.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[nAllocLength](#nalloclength)|Lunghezza dei dati allocati `XCHAR`s (esclusi carattere di terminazione null)|  
|[nDataLength](#ndatalength)|Lunghezza dei dati attualmente in uso in `XCHAR`s (esclusi carattere di terminazione null)|  
|[nRefs](#nrefs)|Il conteggio corrente dei riferimenti dell'oggetto.|  
|[pStringMgr](#pstringmgr)|Un puntatore per la gestione di stringa dell'oggetto stringa.|  
  
## <a name="remarks"></a>Note  
 Questa classe deve essere utilizzata solo dagli sviluppatori di implementare i gestori di stringa personalizzato. Per ulteriori informazioni sui gestori di stringa personalizzato, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md)  
  
 Questa classe incapsula i vari tipi di informazioni e dati associati, ad esempio, un oggetto stringa superiore [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), o [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md) oggetti. Ogni oggetto stringa superiore contiene un puntatore a esso associata `CStringData` oggetto, consentendo più oggetti stringa in modo che punti allo stesso oggetto di dati stringa. Questa relazione è rappresentata dal conteggio dei riferimenti ( `nRefs`) del `CStringData` oggetto.  
  
> [!NOTE]
>  In alcuni casi, un tipo stringa (ad esempio **CFixedString**) non condividono un oggetto dati di stringa con più di un oggetto stringa superiore. Per ulteriori informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
 Questi dati sono costituiti da:  
  
-   Il gestore della memoria (di tipo [IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)) della stringa.  
  
-   La lunghezza corrente ( [nDataLength](#ndatalength)) della stringa.  
  
-   La lunghezza allocata ( [nAllocLength](#nalloclength)) della stringa. Per motivi di prestazioni, questo può differire dalla lunghezza della stringa corrente  
  
-   Il conteggio dei riferimenti corrente ( [nRefs](#nrefs)) del `CStringData` oggetto. Questo valore viene utilizzato per determinare il numero di oggetti stringa condividono lo stesso `CStringData` oggetto.  
  
-   Il buffer di caratteri effettivi ( [dati](#data)) della stringa.  
  
    > [!NOTE]
    >  Il buffer di caratteri effettivi dell'oggetto string è allocato dal gestore di stringa e viene aggiunto per il `CStringData` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpstr.h  
  
##  <a name="addref"></a>CStringData::AddRef  
 Incrementa il conteggio dei riferimenti dell'oggetto string.  
  
```
void AddRef() throw();
```  
  
### <a name="remarks"></a>Note  
 Incrementa il conteggio dei riferimenti dell'oggetto string.  
  
> [!NOTE]
>  Non chiamare questo metodo in una stringa con un conteggio dei riferimenti negativo, poiché un numero negativo indica che il buffer di stringa viene bloccato.  
  
##  <a name="data"></a>CStringData::data  
 Restituisce un puntatore al buffer di caratteri di un oggetto stringa.  
  
```
void* data() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al buffer di caratteri dell'oggetto string.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire i buffer di caratteri corrente dell'oggetto string associato.  
  
> [!NOTE]
>  Il buffer non è allocato dal `CStringData` oggetto ma dal gestore di stringa quando necessario. Quando allocato, il buffer viene aggiunto all'oggetto dati stringa.  
  
##  <a name="islocked"></a>CStringData::IsLocked  
 Determina se il buffer di caratteri è bloccato.  
  
```
bool IsLocked() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il buffer è bloccata; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per determinare se il buffer di caratteri di un oggetto string è attualmente bloccato.  
  
##  <a name="isshared"></a>CStringData::IsShared  
 Determina se il buffer di caratteri è condiviso.  
  
```
bool IsShared() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il buffer è condivisa; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per determinare se il buffer di caratteri di un oggetto dati di stringa è attualmente condivisa tra più oggetti stringa.  
  
##  <a name="lock"></a>CStringData::Lock  
 Blocca il buffer di caratteri dell'oggetto string associato.  
  
```
void Lock() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per bloccare il buffer di caratteri dell'oggetto dati stringa. Blocco e sblocco viene utilizzato quando è necessario l'accesso diretto al buffer di caratteri dallo sviluppatore. Un buon esempio di blocco viene dimostrato la [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) metodi di `CSimpleStringT`.  
  
> [!NOTE]
>  È possibile bloccare un buffer di caratteri solo se il buffer non è condivisa tra oggetti stringa superiore.  
  
##  <a name="nalloclength"></a>CStringData::nAllocLength  
 Lunghezza del buffer allocato carattere.  
  
```
int nAllocLength;
```  
  
### <a name="remarks"></a>Note  
 Archivia la lunghezza del buffer di dati allocati in `XCHAR`s (esclusi carattere di terminazione null).  
  
##  <a name="ndatalength"></a>CStringData::nDataLength  
 Lunghezza corrente dell'oggetto string.  
  
```
int nDataLength;
```  
  
### <a name="remarks"></a>Note  
 Archivia la lunghezza dei dati attualmente in uso in `XCHAR`s (esclusi carattere di terminazione null).  
  
##  <a name="nrefs"></a>CStringData::nRefs  
 Conteggio dei riferimenti dell'oggetto dati stringa.  
  
```
long nRefs;
```  
  
### <a name="remarks"></a>Note  
 Archivia il conteggio dei riferimenti dell'oggetto dati stringa. Questo conteggio indica il numero di oggetti stringa superiore che sono associati all'oggetto dati di stringa. Un valore negativo indica che l'oggetto dati di stringa è attualmente bloccato.  
  
##  <a name="pstringmgr"></a>CStringData::pStringMgr  
 Il gestore della memoria dell'oggetto string associato.  
  
```
IAtlStringMgr* pStringMgr;
```  
  
### <a name="remarks"></a>Note  
 Archivia il gestore della memoria per l'oggetto stringa associato. Per ulteriori informazioni su stringhe e i gestori di memoria, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
##  <a name="release"></a>CStringData::Release  
 Decrementa il conteggio dei riferimenti dell'oggetto dati stringa.  
  
```
void Release() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per diminuire il conteggio dei riferimenti, liberando il `CStringData` struttura se il conteggio dei riferimenti arriva a zero. Questa operazione viene in genere eseguita quando viene eliminato un oggetto stringa e pertanto è più necessario fare riferimento all'oggetto dati di stringa.  
  
 Ad esempio, chiamare il codice seguente `CStringData::Release` per l'oggetto dati di stringa associati `str1`:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#104](../../atl-mfc-shared/codesnippet/cpp/cstringdata-class_1.cpp)]  
  
##  <a name="unlock"></a>CStringData::Unlock  
 Sblocca il buffer di caratteri dell'oggetto string associato.  
  
```
void Unlock() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per sbloccare il buffer di caratteri dell'oggetto dati stringa. Una volta sbloccato, un buffer è condivisibile e possono essere conteggio dei riferimenti.  
  
> [!NOTE]
>  Ogni chiamata a `Lock` deve corrispondere a una chiamata corrispondente a `Unlock`.  
  
 Blocco e sblocco viene usato quando lo sviluppatore deve assicurarsi che i dati della stringa non sia condivisa. Un buon esempio di blocco viene dimostrato la [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) metodi di `CSimpleStringT`.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)


