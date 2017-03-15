---
title: Classe CMapStringToString | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMapStringToString
dev_langs:
- C++
helpviewer_keywords:
- collection classes, string mapping
- strings [C++], mapping
- strings [C++], class for mapping
- CMapStringToString class
ms.assetid: b45794c2-fe6b-4edb-a8ca-faa03b57b4a8
caps.latest.revision: 23
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
ms.openlocfilehash: 58ca2023d57c2865dadc8dfab304aab2fa39a96b
ms.lasthandoff: 02/24/2017

---
# <a name="cmapstringtostring-class"></a>Classe CMapStringToString
Supporta mappe di oggetti `CString` con chiave fornita da oggetti `CString` .  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMapStringToString : public CObject  
```  
  
## <a name="members"></a>Membri  
 Le funzioni membro di `CMapStringToString` sono simili alle funzioni membro della classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CMapStringToOb`. Ovunque sia visualizzato un `CObject` puntatore come parametro, della funzione un valore restituito o "output" sostituire un puntatore a `char`. Ovunque sia visualizzato un `CObject` puntatore come parametro di funzione "input", sostituire un puntatore a `char`.  
  
 `BOOL CMapStringToOb::Lookup(const char*<key>, CObject*&<rValue>) const;`  
  
 ad esempio, si converte in  
  
 `BOOL CMapStringToString::Lookup(LPCTSTR<key>, CString&<rValue>) const;`  
  
### <a name="public-structures"></a>Strutture pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMapStringToString::CPair](#cpair)|Una struttura annidata che contiene un valore di chiave e il valore dell'oggetto stringa associato.|  
  
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
|[CMapStringToString::PGetFirstAssoc](#pgetfirstassoc)|Ottiene un puntatore al primo `CString` nella mappa.|  
|[CMapStringToString::PGetNextAssoc](#pgetnextassoc)|Ottiene un puntatore al successivo `CString` per eseguire l'iterazione.|  
|[CMapStringToString::PLookup](#plookup)|Restituisce un puntatore a un `CString` il cui valore corrisponde al valore specificato.|  
|[CMapStringToOb::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Rimuove tutti gli elementi da questa mappa.|  
|[CMapStringToOb::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Rimuove un elemento specificato da una chiave.|  
|[CMapStringToOb::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[CMapStringToOb::operator]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserisce un elemento nella mappa, la sostituzione di operatore per `SetAt`.|  
  
## <a name="remarks"></a>Note  
 `CMapStringToString` incorpora la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump dei relativi elementi. Ogni elemento viene serializzato, a sua volta se una mappa è archiviata in un archivio, con l'inserimento di overload ( ** << **) (operatore) o con il `Serialize` funzione membro.  
  
 Se è necessario un dump di singoli `CString` -  `CString` elementi, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Quando un `CMapStringToString` oggetto viene eliminato oppure quando gli elementi vengono rimossi, il `CString` gli oggetti vengono rimossi come appropriato.  
  
 Per ulteriori informazioni su `CMapStringToString`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMapStringToString`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
##  <a name="a-namecpaira--cmapstringtostringcpair"></a><a name="cpair"></a>CMapStringToString::CPair  
 Contiene un valore di chiave e il valore dell'oggetto stringa associato.  
  
### <a name="remarks"></a>Note  
 Si tratta di una struttura annidata all'interno di classe [CMapStringToString](../../mfc/reference/cmapstringtostring-class.md).  
  
 La struttura è costituita da due campi:  
  
- **chiave** il valore effettivo del tipo di chiave.  
  
- **valore** il valore dell'oggetto associato.  
  
 Viene utilizzato per archiviare i valori restituiti da [CMapStringToString::PLookup](#plookup), [CMapStringToString::PGetFirstAssoc](#pgetfirstassoc), e [CMapStringToString::PGetNextAssoc](#pgetnextassoc).  
  
### <a name="example"></a>Esempio  
  Per un esempio di utilizzo, vedere l'esempio per [CMapStringToString::PLookup](#plookup).  
  
##  <a name="a-namepgetfirstassoca--cmapstringtostringpgetfirstassoc"></a><a name="pgetfirstassoc"></a>CMapStringToString::PGetFirstAssoc  
 Restituisce la prima voce dell'oggetto mappa.  
  
```  
const CPair* PGetFirstAssoc() const;

CPair* PGetFirstAssoc();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla prima voce nella mappa; vedere [CMapStringToString::CPair](#cpair). Se la mappa è vuota, il valore è `NULL`.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire un puntatore al primo elemento nell'oggetto mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#73;](../../mfc/codesnippet/cpp/cmapstringtostring-class_1.cpp)]  
  
##  <a name="a-namepgetnextassoca--cmapstringtostringpgetnextassoc"></a><a name="pgetnextassoc"></a>CMapStringToString::PGetNextAssoc  
 Recupera l'elemento della mappa a cui puntata `pAssocRec`.  
  
```  
const CPair *PGetNextAssoc(const CPair* pAssoc) const;  
  
CPair *PGetNextAssoc(const CPair* pAssoc);
```  
  
### <a name="parameters"></a>Parametri  
 *pAssoc*  
 Punta a una voce della mappa restituita da una precedente [PGetNextAssoc](#pgetnextassoc) o [PGetFirstAssoc](#pgetfirstassoc) chiamare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla voce successiva nella mappa; vedere [CMapStringToString::CPair](#cpair). Se l'elemento è l'ultimo nella mappa, il valore è **NULL**.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per scorrere tutti gli elementi nella mappa. Recuperare il primo elemento con una chiamata a `PGetFirstAssoc` e quindi di scorrere la mappa con le chiamate successive a `PGetNextAssoc`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMapStringToString::PGetFirstAssoc](#pgetfirstassoc).  
  
##  <a name="a-nameplookupa--cmapstringtostringplookup"></a><a name="plookup"></a>CMapStringToString::PLookup  
 Cerca il valore mappato a una determinata chiave.  
  
```  
const CPair* PLookup(LPCTSTR key) const;

CPair* PLookup(LPCTSTR key);
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Puntatore alla chiave per l'elemento da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla chiave specificata.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per cercare un elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#74;](../../mfc/codesnippet/cpp/cmapstringtostring-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




