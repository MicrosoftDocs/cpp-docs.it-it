---
title: Classe CMapPtrToWord | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMapPtrToWord
- AFXCOLL/CMapPtrToWord
- AFXCOLL/CMapStringToOb::CMapStringToOb
- AFXCOLL/CMapStringToOb::GetCount
- AFXCOLL/CMapStringToOb::GetHashTableSize
- AFXCOLL/CMapStringToOb::GetNextAssoc
- AFXCOLL/CMapStringToOb::GetSize
- AFXCOLL/CMapStringToOb::GetStartPosition
- AFXCOLL/CMapStringToOb::HashKey
- AFXCOLL/CMapStringToOb::InitHashTable
- AFXCOLL/CMapStringToOb::IsEmpty
- AFXCOLL/CMapStringToOb::Lookup
- AFXCOLL/CMapStringToOb::LookupKey
- AFXCOLL/CMapStringToOb::RemoveAll
- AFXCOLL/CMapStringToOb::RemoveKey
- AFXCOLL/CMapStringToOb::SetAt
dev_langs:
- C++
helpviewer_keywords:
- 16-bit word mapping
- CMapPtrToWord class
ms.assetid: 4631c6b6-d49f-49d9-adc0-1e0491e32d7b
caps.latest.revision: 22
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: a1e9604aab0a0488533cacba851d200b87d634b3
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmapptrtoword-class"></a>Classe CMapPtrToWord
Supporta mappe di parole a 16 bit con chiave fornita da puntatori void.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMapPtrToWord : public CObject  
```  
  
## <a name="members"></a>Membri  
 Le funzioni membro di `CMapPtrToWord` sono simili alle funzioni membro della classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CMapStringToOb`. Ovunque sia visualizzato un `CObject` puntatore come parametro della funzione o valore restituito, sostituire **WORD**. Ovunque sia visualizzato un `CString` o **const** puntatore a `char` come parametro della funzione o valore restituito, sostituire un puntatore a `void`.  
  
 `BOOL CMapStringToOb::Lookup( const char* <key>,`  
  
 `CObject*& <rValue> ) const;`  
  
 ad esempio, si converte in  
  
 `BOOL CMapPtrToWord::Lookup( const void* <key>, WORD& <rValue> ) const;`  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMapStringToOb::CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMapStringToOb::GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Restituisce il numero di elementi nella mappa.|  
|[CMapStringToOb::GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determina il numero corrente di elementi nella tabella hash.|  
|[CMapStringToOb::GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|  
|[CMapStringToOb::GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Restituisce il numero di elementi nella mappa.|  
|[CMapStringToOb::GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Restituisce la posizione del primo elemento.|  
|[CMapStringToOb::HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calcola il valore hash di una chiave specificata.|  
|[CMapStringToOb::InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Inizializza la tabella hash.|  
|[CMapStringToOb::IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Verifica se la condizione mappa vuota (nessun elemento).|  
|[CMapStringToOb::Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Cerca un puntatore void in base alla chiave di un puntatore void. Il valore del puntatore, non l'entità cui fa riferimento, viene utilizzato per il confronto delle chiavi.|  
|[CMapStringToOb::LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Restituisce un riferimento alla chiave associata al valore di chiave specificato.|  
|[CMapStringToOb::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Rimuove tutti gli elementi da questa mappa.|  
|[CMapStringToOb::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Rimuove un elemento specificato da una chiave.|  
|[CMapStringToOb::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[CMapStringToOb::operator]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserisce un elemento nella mappa, la sostituzione di operatore per `SetAt`.|  
  
## <a name="remarks"></a>Note  
 `CMapWordToPtr` include la macro `IMPLEMENT_DYNAMIC` per supportare l'accesso del tipo in fase di esecuzione ed eseguire l'operazione di dump dell'oggetto `CDumpContext`. Se è necessario un dump di singoli elementi della mappa, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Puntatore a word esegue il mapping non può essere serializzato.  
  
 Quando un `CMapPtrToWord` oggetto viene eliminato oppure quando gli elementi vengono rimossi, vengono eliminati i puntatori e i termini. Le entità a cui fa riferimento il chiave puntatori non vengono rimossi.  
  
 Per ulteriori informazioni su `CMapPtrToWord`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMapPtrToWord`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




