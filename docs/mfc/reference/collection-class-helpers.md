---
title: Classi Collection | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.classes
dev_langs:
- C++
helpviewer_keywords:
- DestructElements function
- ConstructElements function
- SerializeElements function
- collection classes [MFC], helper functions
- helper functions collection class [MFC]
ms.assetid: bc3a2368-9edd-4748-9e6a-13cba79517ca
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 82b11c4cbe8f862121d89c308ab11d53582931d7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="collection-class-helpers"></a>Supporti delle classi Collection
Le classi di raccolta `CMap`, `CList`, e `CArray` utilizzare funzioni di supporto globali basati su modelli per tali scopi come il confronto, la copia e la serializzazione di elementi. Come parte dell'implementazione di classi basate su `CMap`, `CList`, e `CArray`, è necessario eseguire l'override di queste funzioni in base alle esigenze con le versioni personalizzata in base al tipo di dati archiviati nel mapping, elenco o matrice. Per informazioni sull'override di funzioni di supporto, ad esempio `SerializeElements`, vedere l'articolo [raccolte: come creare una raccolta indipendente dai tipi](../../mfc/how-to-make-a-type-safe-collection.md). Si noti che **ConstructElements** e **DestructElements** sono state deprecate.  
  
 La libreria Microsoft Foundation Class fornisce le seguenti funzioni globali in afxtempl. h che consentono di personalizzare le classi di raccolte:  
  
### <a name="collection-class-helpers"></a>Supporti delle classi Collection  
  
|||  
|-|-|  
|[CompareElements](#compareelements)|Indica se gli elementi sono uguali.|  
|[CopyElements](#copyelements)|Copia gli elementi da una matrice a un altro.|  
|[DumpElements](#dumpelements)|Fornisce l'output di diagnostica orientato al flusso.|  
|[HashKey](#hashkey)|Calcola una chiave hash.|  
|[SerializeElements](#serializeelements)|Memorizza o Recupera elementi a o da un archivio.|  
  
##  <a name="compareelements"></a>CompareElements  
 Chiamata direttamente da [CList::Find] (clist class.md not_found.md # #clist__find e indirettamente da [cmap__lookup](cmap-class.md#lookup) e [cmap__operator &#91; &#93;](cmap-class.md#operator_at).  
  
```   
template<class TYPE, class ARG_TYPE>  
BOOL AFXAPI  
CompareElements(
    const TYPE* pElement1,  
    const ARG_TYPE* pElement2);  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Il tipo del primo elemento da confrontare.  
  
 `pElement1`  
 Puntatore al primo elemento da confrontare.  
  
 `ARG_TYPE`  
 Il tipo del secondo elemento da confrontare.  
  
 `pElement2`  
 Puntatore al secondo elemento da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto a cui puntava `pElement1` è uguale all'oggetto a cui puntata `pElement2`; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il `CMap` chiama l'uso di `CMap` parametri di modello *chiave* e `ARG_KEY`.  
  
 L'implementazione predefinita restituisce il risultato del confronto della  *\*pElement1* e  *\*pElement2*. Eseguire l'override di questa funzione in modo che confronta gli elementi in modo appropriato per l'applicazione.  
  
 Il linguaggio C++ definisce l'operatore di confronto ( `==`) per i tipi semplici ( `char`, `int`, **float**e così via), ma non definisce un operatore di confronto per le classi e strutture. Se si desidera utilizzare `CompareElements` o per creare un'istanza di una delle classi di raccolta che lo utilizza, è necessario definire l'operatore di confronto o eseguire l'overload `CompareElements` con una versione che restituisce i valori appropriati.  
  
### <a name="requirements"></a>Requisiti  
   **Intestazione:** afxtempl.h   
  
##  <a name="copyelements"></a>CopyElements  
 Questa funzione viene chiamata direttamente da [CArray:: Append](carray-class.md#append) e [CArray:: Copy](carray-class.md#copy).  
  
```   
template<class TYPE>  
void AFXAPI CopyElements(
    TYPE* pDest,  
    const TYPE* pSrc,  
    INT_PTR nCount);  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elementi da copiare.  
  
 `pDest`  
 Puntatore alla destinazione in cui gli elementi verranno copiati.  
  
 `pSrc`  
 Puntatore all'origine degli elementi da copiare.  
  
 `nCount`  
 Numero di elementi da copiare.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita viene usato l'operatore di assegnazione semplice (  **=**  ) per eseguire l'operazione di copia. Se il tipo che viene copiato non dispone di un operator= in overload, l'implementazione predefinita esegue una copia bit per bit.  
  
 Per informazioni sull'implementazione di questa e altre funzioni di supporto, vedere l'articolo [raccolte: come creare una raccolta indipendente dai tipi](../how-to-make-a-type-safe-collection.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxtempl. h  
  
##  <a name="dumpelements"></a>DumpElements  
 Per gli elementi della raccolta quando viene sottoposto a override, fornisce orientato al flusso di output di diagnostica in formato testo.  
  
```   
template<class TYPE>  
void  AFXAPI DumpElements(
    CDumpContext& dc,  
    const TYPE* pElements,  
    INT_PTR nCount);  
```  
  
### <a name="parameters"></a>Parametri  
 `dc`  
 Dump contesto per il dump di elementi.  
  
 *TIPO*  
 Parametro di modello che specifica il tipo degli elementi.  
  
 `pElements`  
 Puntatore a elementi per eseguire il dump.  
  
 `nCount`  
 Numero di elementi per eseguire il dump.  
  
### <a name="remarks"></a>Note  
 Il **CArray::Dump**, **CList::Dump**, e **CMap::Dump** funzioni chiamano questo metodo se la profondità del dump è maggiore di 0.  
  
 L'implementazione predefinita non esegue alcuna operazione. Se gli elementi della raccolta sono derivati da `CObject`, la sostituzione scorrerà in genere gli elementi della raccolta, chiamare `Dump` per ogni elemento a sua volta.  
  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxtempl. h  
  
##  <a name="hashkey"></a>HashKey  
 Calcola un valore hash per la chiave specificata.  
  
```  
template<class ARG_KEY>  
AFX_INLINE UINT AFXAPI HashKey(ARG_KEY  key); 
```  
  
### <a name="parameters"></a>Parametri  
 `ARG_KEY`  
 Parametro di modello che specifica il tipo di dati utilizzato per accedere alle chiavi della mappa.  
  
 `key`  
 La chiave viene calcolato il cui valore hash.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore della chiave hash.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata direttamente da [CMap::RemoveKey](cmap-class.md#removekey) e indirettamente da [CMap::Lookup](cmap-class.md#lookup) e [CMap::Operator &#91; &#93;](cmap-class.md#operator_at).
  
 L'implementazione predefinita crea un valore hash spostando `key` verso destra di quattro posizioni. Eseguire l'override di questa funzione in modo che restituisca i valori hash appropriato per l'applicazione.  
  
### <a name="example"></a>Esempio
 ```cpp  
template <> UINT AFXAPI HashKey(unsigned __int64 key)
{
   // Generate the hash value by XORing the lower 32 bits of the number 
   // with the upper 32 bits
   return(UINT(key) ^ UINT(key >> 32));
}
 ```
 
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxtempl. h 
  
##  <a name="serializeelements"></a>SerializeElements  
 [CArray](carray-class.md), [CList](clist-class.md), e [CMap](cmap-class.md) chiamare questa funzione per serializzare gli elementi.  
  
```   
template<class TYPE>  
void AFXAPI SerializeElements(CArchive& ar, TYPE* pElements, INT_PTR nCount);  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo degli elementi.  
  
 `ar`  
 Un oggetto di archiviazione per l'archiviazione a o da.  
  
 `pElements`  
 Puntatore per gli elementi da archiviare.  
  
 `nCount`  
 Numero di elementi da archiviare  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non bit per bit di lettura o scrittura.  
  
 Per informazioni sull'implementazione di questa e altre funzioni di supporto, vedere l'articolo [raccolte: come creare una raccolta indipendente dai tipi](../how-to-make-a-type-safe-collection.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nell'articolo [raccolte: come creare una raccolta indipendente dai tipi](../how-to-make-a-type-safe-collection.md).  
 
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxtempl. h 
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [Classe CMap](cmap-class.md)   
 [CList (classe)](clist-class.md)   
 [Classe CArray](carray-class.md)