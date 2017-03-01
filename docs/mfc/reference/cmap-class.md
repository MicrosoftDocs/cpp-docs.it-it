---
title: Classe CMap | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMap
dev_langs:
- C++
helpviewer_keywords:
- dictionary mapping class
- collection classes, dictionary mapping
- CMap class
ms.assetid: 640a45ab-0993-4def-97ec-42cc78eb10b9
caps.latest.revision: 24
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
ms.openlocfilehash: 680d44fe6154861d2c638697cfc9d3fbeab36cc4
ms.lasthandoff: 02/24/2017

---
# <a name="cmap-class"></a>Classe CMap
Classe Collection dizionario che esegue il mapping delle chiavi univoche ai valori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class KEY, class ARG_KEY, class VALUE, class ARG_VALUE>class CMap : public CObject  
```  
  
#### <a name="parameters"></a>Parametri  
 `KEY`  
 Classe dell'oggetto utilizzato come chiave per la mappa.  
  
 `ARG` *_* `KEY`  
 Tipo di dati utilizzato per `KEY` argomenti, in genere un riferimento a `KEY`.  
  
 `VALUE`  
 Classe dell'oggetto archiviato nella mappa.  
  
 `ARG` *_* `VALUE`  
 Tipo di dati utilizzato per `VALUE` argomenti, in genere un riferimento a `VALUE`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-structures"></a>Strutture pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMap::CPair](#cpair)|Una struttura annidata che contiene un valore di chiave e il valore dell'oggetto associato.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMap::CMap](#cmap)|Crea una raccolta che esegue il mapping di chiavi per i valori.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMap::GetCount](#getcount)|Restituisce il numero di elementi nella mappa.|  
|[CMap::GetHashTableSize](#gethashtablesize)|Restituisce il numero di elementi nella tabella hash.|  
|[CMap::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|  
|[CMap::GetSize](#getsize)|Restituisce il numero di elementi nella mappa.|  
|[CMap::GetStartPosition](#getstartposition)|Restituisce la posizione del primo elemento.|  
|[CMap::InitHashTable](#inithashtable)|Inizializza la tabella hash e specifica le dimensioni.|  
|[CMap::IsEmpty](#isempty)|Verifica se la condizione mappa vuota (nessun elemento).|  
|[CMap::Lookup](#lookup)|Cerca il valore mappato a una determinata chiave.|  
|[CMap::PGetFirstAssoc](#pgetfirstassoc)|Restituisce un puntatore al primo elemento.|  
|[CMap::PGetNextAssoc](#pgetnextassoc)|Ottiene un puntatore all'elemento successivo per l'iterazione.|  
|[CMap::PLookup](#plookup)|Restituisce un puntatore a una chiave il cui valore corrisponde al valore specificato.|  
|[CMap::RemoveAll](#removeall)|Rimuove tutti gli elementi da questa mappa.|  
|[CMap::RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|  
|[CMap::SetAt](#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[CMap::operator]](#operator_at)|Inserisce un elemento di mappa â €"la sostituzione di operatore per `SetAt`.|  
  
## <a name="remarks"></a>Note  
 Dopo aver inserito una coppia chiave-valore (elemento) nella mappa, è possibile recuperare in modo efficiente o elimina la coppia utilizzando la chiave per accedervi. È inoltre possibile scorrere tutti gli elementi nella mappa.  
  
 Una variabile di tipo **posizione** viene utilizzato per l'accesso alternativo per le voci. È possibile utilizzare un **posizione** per una voce "ricorda" e per l'iterazione attraverso la mappa. Si potrebbe pensare che l'iterazione è sequenziale in base al valore della chiave; non è. La sequenza di elementi recuperati è indeterminata.  
  
 Alcune funzioni membro di questa classe chiamano funzioni di supporto globale che devono essere personalizzati per la maggior parte dei casi della `CMap` classe. Vedere [classi Collection](../../mfc/reference/collection-class-helpers.md) nella sezione di macro e funzioni globali di `MFC``Reference`.  
  
 `CMap`esegue l'override di [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per supportare la serializzazione e il dump dei relativi elementi. Se una mappa è archiviata in un archivio utilizzando `Serialize`, ogni elemento della mappa viene serializzato a turno. L'implementazione predefinita del `SerializeElements` funzione helper esegue una scrittura bit per bit. Per informazioni sulla serializzazione di elementi della raccolta puntatore derivano da `CObject` o altri tipi definiti dall'utente, vedere [procedura: creazione di una raccolta indipendente dai tipi](../../mfc/how-to-make-a-type-safe-collection.md).  
  
 Se è necessario un dump di diagnostica dei singoli elementi nella mappa (le chiavi e valori), è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Quando un `CMap` oggetto viene eliminato oppure quando gli elementi vengono rimossi, vengono rimosse le chiavi e valori.  
  
 Derivazione di classi di mappa è simile alla derivazione di elenco. Vedere l'articolo [raccolte](../../mfc/collections.md) per un'illustrazione di derivazione di una classe speciale elenco.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtempl.h  
  
##  <a name="a-namecmapa--cmapcmap"></a><a name="cmap"></a>CMap::CMap  
 Costruisce una mappa vuota.  
  
```  
CMap(INT_PTR nBlockSize = 10);
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 Specifica la granularità di allocazione della memoria per l'estensione della mappa.  
  
### <a name="remarks"></a>Note  
 Man mano che aumenta la mappa, la memoria viene allocata in unità di `nBlockSize` voci.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#56; NVC_MFCCollections](../../mfc/codesnippet/cpp/cmap-class_1.cpp)]  
  
##  <a name="a-namecpaira--cmapcpair"></a><a name="cpair"></a>CMap::CPair  
 Contiene un valore di chiave e il valore dell'oggetto associato.  
  
### <a name="remarks"></a>Note  
 Si tratta di una struttura annidata all'interno di classe [CMap](../../mfc/reference/cmap-class.md).  
  
 La struttura è costituita da due campi:  
  
- **keyÂ Â Â** il valore effettivo del tipo di chiave.  
  
- **valueÂ Â Â** il valore dell'oggetto associato.  
  
 Viene utilizzato per archiviare i valori restituiti da [CMap::PLookup](#plookup), [CMap::PGetFirstAssoc](#pgetfirstassoc), e [CMap::PGetNextAssoc](#pgetnextassoc).  
  
### <a name="example"></a>Esempio  
 Per un esempio di utilizzo, vedere l'esempio per [CMap::PLookup](#plookup).  
  
##  <a name="a-namegetcounta--cmapgetcount"></a><a name="getcount"></a>CMap::GetCount  
 Recupera il numero di elementi nella mappa.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CMap::Lookup](#lookup).  
  
##  <a name="a-namegethashtablesizea--cmapgethashtablesize"></a><a name="gethashtablesize"></a>CMap::GetHashTableSize  
 Determina il numero di elementi nella tabella hash per la mappa.  
  
```  
UINT GetHashTableSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella tabella hash.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#57;](../../mfc/codesnippet/cpp/cmap-class_2.cpp)]  
  
##  <a name="a-namegetnextassoca--cmapgetnextassoc"></a><a name="getnextassoc"></a>CMap::GetNextAssoc  
 Recupera l'elemento della mappa in `rNextPosition`, quindi Aggiorna `rNextPosition` per fare riferimento all'elemento successivo nella mappa.  
  
```  
void GetNextAssoc(
    POSITION& rNextPosition,
    KEY& rKey,
    VALUE& rValue) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `rNextPosition`  
 Specifica un riferimento a un **posizione** valore restituito da una precedente `GetNextAssoc` o `GetStartPosition` chiamare.  
  
 *CHIAVE*  
 Parametro di modello che specifica il tipo di chiave della mappa.  
  
 `rKey`  
 Specifica la chiave dell'elemento recuperato restituita.  
  
 *VALORE*  
 Parametro di modello che specifica il tipo del valore della mappa.  
  
 `rValue`  
 Specifica il valore restituito dell'elemento recuperato.  
  
### <a name="remarks"></a>Note  
 Questa funzione è particolarmente utile per scorrere tutti gli elementi nella mappa. Si noti che la sequenza di posizione non è necessariamente uguale sequenza il valore della chiave.  
  
 Se l'elemento recuperato è l'ultimo nella mappa, quindi il nuovo valore di `rNextPosition` è impostato su **NULL**.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CMap::SetAt](#setat).  
  
##  <a name="a-namegetsizea--cmapgetsize"></a><a name="getsize"></a>CMap::GetSize  
 Restituisce il numero di elementi della mappa.  
  
```  
INT_PTR GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella mappa.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero di elementi nella mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#58;](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]  
  
##  <a name="a-namegetstartpositiona--cmapgetstartposition"></a><a name="getstartposition"></a>CMap::GetStartPosition  
 Inizia un'iterazione mappa restituendo un **posizione** che può essere passato a un `GetNextAssoc` chiamare.  
  
```  
POSITION GetStartPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che indica una posizione iniziale per l'iterazione della mappa; o **NULL** se la mappa è vuota.  
  
### <a name="remarks"></a>Note  
 La sequenza di iterazione non è stimabile; Pertanto, il "primo elemento nella mappa" alcun significato speciale.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CMap::SetAt](#setat).  
  
##  <a name="a-nameinithashtablea--cmapinithashtable"></a><a name="inithashtable"></a>CMap::InitHashTable  
 Inizializza la tabella hash.  
  
```  
void InitHashTable(UINT hashSize, BOOL  bAllocNow = TRUEÂ);  
```  
  
### <a name="parameters"></a>Parametri  
 `hashSize`  
 Numero di voci nella tabella hash.  
  
 `bAllocNow`  
 Se **TRUE**, consente di allocare la tabella di hash al momento dell'inizializzazione; in caso contrario la tabella viene allocata quando necessario.  
  
### <a name="remarks"></a>Note  
 Per prestazioni ottimali, le dimensioni della tabella hash devono essere un numero primo. Per ridurre al minimo i conflitti, la dimensione deve essere approssimativamente il 20% maggiore di set di dati più grande previsto.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CMap::Lookup](#lookup).  
  
##  <a name="a-nameisemptya--cmapisempty"></a><a name="isempty"></a>CMap::IsEmpty  
 Determina se la mappa è vuota.  
  
```  
BOOL IsEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se questa mappa non contiene elementi; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CMap::RemoveAll](#removeall).  
  
##  <a name="a-namelookupa--cmaplookup"></a><a name="lookup"></a>CMap::Lookup  
 Cerca il valore mappato a una determinata chiave.  
  
```  
BOOL Lookup(ARG_KEY key, VALUE& rValue) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ARG_KEY`  
 Specifica il tipo di parametro di modello di `key` valore.  
  
 `key`  
 Specifica la chiave che identifica l'elemento cercato.  
  
 *VALORE*  
 Specifica il tipo del valore da cercare.  
  
 `rValue`  
 Riceve il valore cercato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è stato trovato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 `Lookup`utilizza un algoritmo di hash per trovare rapidamente l'elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#58;](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]  
  
##  <a name="a-nameoperatorata--cmapoperator--"></a><a name="operator_at"></a>[CMap::operator]  
 Per sostituire pratico di `SetAt` funzione membro.  
  
```  
VALUE& operator[](arg_key key);
```  
  
### <a name="parameters"></a>Parametri  
 *VALORE*  
 Parametro di modello che specifica il tipo del valore della mappa.  
  
 `ARG_KEY`  
 Parametro di modello che specifica il tipo del valore della chiave.  
  
 `key`  
 La chiave utilizzata per recuperare il valore dalla mappa.  
  
### <a name="remarks"></a>Note  
 In questo modo può essere utilizzato solo sul lato sinistro di un'istruzione di assegnazione (un l-value). Se non esiste nessun elemento della mappa con la chiave specificata, viene creato un nuovo elemento.  
  
 Non esiste alcun "destra" (r) equivalente all'operatore perché vi è la possibilità che una chiave potrebbe non essere trovata nella mappa. Utilizzare il `Lookup` una funzione membro per il recupero di elemento.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CMap::Lookup](#lookup).  
  
##  <a name="a-namepgetfirstassoca--cmappgetfirstassoc"></a><a name="pgetfirstassoc"></a>CMap::PGetFirstAssoc  
 Restituisce la prima voce dell'oggetto mappa.  
  
```  
const CPair* PGetFirstAssoc() const;Â CPair* PGetFirstAssoc();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla prima voce nella mappa; vedere [CMap::CPair](#cpair). Se la mappa non contiene voci, il valore è **NULL**.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire un puntatore al primo elemento nell'oggetto mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#59;](../../mfc/codesnippet/cpp/cmap-class_4.cpp)]  
  
##  <a name="a-namepgetnextassoca--cmappgetnextassoc"></a><a name="pgetnextassoc"></a>CMap::PGetNextAssoc  
 Recupera l'elemento della mappa a cui puntata `pAssocRec`.  
  
```  
const CPair *PGetNextAssoc(const CPair* pAssocRet) const;  
  
CPair *PGetNextAssoc(const CPair* pAssocRet);
```  
  
### <a name="parameters"></a>Parametri  
 *pAssocRet*  
 Punta a una voce della mappa restituita da una precedente [PGetNextAssoc](#pgetnextassoc) o [CMap::PGetFirstAssoc](#pgetfirstassoc) chiamare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla voce successiva nella mappa; vedere [CMap::CPair](#cpair). Se l'elemento è l'ultimo nella mappa, il valore è **NULL**.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per scorrere tutti gli elementi nella mappa. Recuperare il primo elemento con una chiamata a `PGetFirstAssoc` e quindi di scorrere la mappa con le chiamate successive a `PGetNextAssoc`.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CMap::PGetFirstAssoc](#pgetfirstassoc).  
  
##  <a name="a-nameplookupa--cmapplookup"></a><a name="plookup"></a>CMap::PLookup  
 Trova il valore mappato a una determinata chiave.  
  
```  
const CPair* PLookup(ARG_KEY  key) const;
CPair* PLookup(Â    ARG_KEY  keyÂ);  ```  
  
### Parameters  
 `key`  
 Key for the element to be searched for.  
  
### Return Value  
 A pointer to a key structure; see [CMap::CPair](#cpair). If no match is found, `CMap::PLookup` returns `NULL`.  
  
### Remarks  
 Call this method to search for a map element with a key that exactly matches the given key.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#60](../../mfc/codesnippet/cpp/cmap-class_5.cpp)]  
  
##  <a name="removeall"></a>  CMap::RemoveAll  
 Removes all the values from this map by calling the global helper function **DestructElements**.  
  
```  
void RemoveAll();
```  
  
### Remarks  
 The function works correctly if the map is already empty.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#61](../../mfc/codesnippet/cpp/cmap-class_6.cpp)]  
  
##  <a name="removekey"></a>  CMap::RemoveKey  
 Looks up the map entry corresponding to the supplied key; then, if the key is found, removes the entry.  
  
```  
BOOL RemoveKey(ARG_KEY key);
```  
  
### Parameters  
 `ARG_KEY`  
 Template parameter specifying the type of the key.  
  
 `key`  
 Key for the element to be removed.  
  
### Return Value  
 Nonzero if the entry was found and successfully removed; otherwise 0.  
  
### Remarks  
 The **DestructElements** helper function is used to remove the entry.  
  
### Example  
 See the example for [CMap::SetAt](#setat).  
  
##  <a name="setat"></a>  CMap::SetAt  
 The primary means to insert an element in a map.  
  
```  
void SetAt (ARG_KEY chiave, ARG_VALUE newValue);
```  
  
### Parameters  
 `ARG_KEY`  
 Template parameter specifying the type of the `key` parameter.  
  
 `key`  
 Specifies the key of the new element.  
  
 `ARG_VALUE`  
 Template parameter specifying the type of the `newValue` parameter.  
  
 `newValue`  
 Specifies the value of the new element.  
  
### Remarks  
 First, the key is looked up. If the key is found, then the corresponding value is changed; otherwise a new key-value pair is created.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#62](../../mfc/codesnippet/cpp/cmap-class_7.cpp)]  
  
## See Also  
 [MFC Sample COLLECT](../../visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)  

