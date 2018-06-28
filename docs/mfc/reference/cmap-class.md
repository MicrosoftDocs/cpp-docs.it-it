---
title: Classe CMap | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMap
- AFXTEMPL/CMap
- AFXTEMPL/CMap::CPair
- AFXTEMPL/CMap::CMap
- AFXTEMPL/CMap::GetCount
- AFXTEMPL/CMap::GetHashTableSize
- AFXTEMPL/CMap::GetNextAssoc
- AFXTEMPL/CMap::GetSize
- AFXTEMPL/CMap::GetStartPosition
- AFXTEMPL/CMap::InitHashTable
- AFXTEMPL/CMap::IsEmpty
- AFXTEMPL/CMap::Lookup
- AFXTEMPL/CMap::PGetFirstAssoc
- AFXTEMPL/CMap::PGetNextAssoc
- AFXTEMPL/CMap::PLookup
- AFXTEMPL/CMap::RemoveAll
- AFXTEMPL/CMap::RemoveKey
- AFXTEMPL/CMap::SetAt
dev_langs:
- C++
helpviewer_keywords:
- CMap [MFC], CPair
- CMap [MFC], CMap
- CMap [MFC], GetCount
- CMap [MFC], GetHashTableSize
- CMap [MFC], GetNextAssoc
- CMap [MFC], GetSize
- CMap [MFC], GetStartPosition
- CMap [MFC], InitHashTable
- CMap [MFC], IsEmpty
- CMap [MFC], Lookup
- CMap [MFC], PGetFirstAssoc
- CMap [MFC], PGetNextAssoc
- CMap [MFC], PLookup
- CMap [MFC], RemoveAll
- CMap [MFC], RemoveKey
- CMap [MFC], SetAt
ms.assetid: 640a45ab-0993-4def-97ec-42cc78eb10b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c477ee69b8bc8e824aae6df1f74ba97d2825524f
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37039156"
---
# <a name="cmap-class"></a>Classe CMap
Classe Collection dizionario che esegue il mapping delle chiavi univoche ai valori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class KEY, class ARG_KEY, class VALUE, class ARG_VALUE>class CMap : public CObject  
```  
  
#### <a name="parameters"></a>Parametri  
 *KEY*  
 Classe dell'oggetto utilizzato come chiave per la mappa.  
  
 *ARG_KEY*  
 Tipo di dati utilizzato per *chiave* gli argomenti, in genere un riferimento a *chiave*.  
  
 *VALORE*  
 Classe dell'oggetto archiviato nella mappa.  
  
 *ARG_VALUE*  
 Tipo di dati utilizzato per *valore* gli argomenti, in genere un riferimento a *valore*.  
  
## <a name="members"></a>Membri  
  
### <a name="public-structures"></a>Strutture pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMap::CPair](#cpair)|Una struttura annidata che contiene un valore di chiave e il valore dell'oggetto associato.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMap::CMap](#cmap)|Costruisce una raccolta che viene eseguito il mapping delle chiavi per i valori.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMap::GetCount](#getcount)|Restituisce il numero di elementi in questa mappa.|  
|[CMap::GetHashTableSize](#gethashtablesize)|Restituisce il numero di elementi nella tabella hash.|  
|[CMap::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per eseguire l'iterazione.|  
|[CMap::GetSize](#getsize)|Restituisce il numero di elementi in questa mappa.|  
|[CMap::GetStartPosition](#getstartposition)|Restituisce la posizione del primo elemento.|  
|[CMap::InitHashTable](#inithashtable)|Inizializza la tabella hash e specifica le dimensioni.|  
|[CMap::IsEmpty](#isempty)|Verifica se la condizione di mappa vuoto (alcun elemento).|  
|[CMap::Lookup](#lookup)|Cerca il valore eseguito il mapping a una chiave specificata.|  
|[CMap::PGetFirstAssoc](#pgetfirstassoc)|Restituisce un puntatore al primo elemento.|  
|[CMap::PGetNextAssoc](#pgetnextassoc)|Ottiene un puntatore all'elemento successivo per eseguire l'iterazione.|  
|[CMap::PLookup](#plookup)|Restituisce un puntatore a una chiave il cui valore corrisponde al valore specificato.|  
|[CMap::RemoveAll](#removeall)|Rimuove tutti gli elementi da questa mappa.|  
|[CMap::RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|  
|[CMap::SetAt](#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[] CMap::operator](#operator_at)|Inserisce un elemento nella mappa, la sostituzione di operatore per `SetAt`.|  
  
## <a name="remarks"></a>Note  
 Dopo aver inserito una coppia chiave-valore (elemento) nella mappa, è possibile recuperare in modo efficiente o eliminare la coppia utilizzando la chiave di accesso. È inoltre possibile scorrere tutti gli elementi nella mappa.  
  
 Una variabile di tipo **posizione** viene utilizzato per l'accesso alternativo per le voci. È possibile utilizzare un **posizione** "ricordare" una voce e per scorrere la mappa. Si potrebbe ipotizzare che l'iterazione sequenza in base al valore della chiave; non è. La sequenza di elementi recuperati è indeterminata.  
  
 Alcune funzioni membro di questa chiamata classe helper globale funzioni che devono essere personalizzati per la maggior parte degli utilizzi della `CMap` classe. Vedere [classi Collection](../../mfc/reference/collection-class-helpers.md) nella sezione macro e funzioni globali del `MFC Reference`.  
  
 `CMap` esegue l'override [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per supportare la serializzazione e il dump dei relativi elementi. Se una mappa è archiviata in un archivio usando `Serialize`, ogni elemento della mappa viene serializzato a turno. L'implementazione predefinita del `SerializeElements` funzione helper esegue un'operazione di scrittura bit per bit. Per informazioni sulla serializzazione puntatore di elementi della raccolta derivano da `CObject` o altri tipi definiti dall'utente, vedere [procedura: creazione di una raccolta indipendente dai tipi](../../mfc/how-to-make-a-type-safe-collection.md).  
  
 Se è necessario un dump di diagnostica dei singoli elementi della mappa (le chiavi e valori), è necessario impostare la profondità del contesto di dump a 1 o versioni successive.  
  
 Quando un `CMap` oggetto viene eliminato oppure quando gli elementi vengono rimossi, vengono rimosse le chiavi e valori.  
  
 Derivazione della classe mappa è simile alla derivazione di elenco. Vedere l'articolo [raccolte](../../mfc/collections.md) per un'illustrazione di derivazione di una classe di elenco di scopi specifici.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtempl.h  
  
##  <a name="cmap"></a>  CMap::CMap  
 Costruisce una mappa vuota.  
  
```  
CMap(INT_PTR nBlockSize = 10);
```  
  
### <a name="parameters"></a>Parametri  
 *nBlockSize*  
 Specifica la granularità dell'allocazione di memoria per l'estensione della mappa.  
  
### <a name="remarks"></a>Note  
 Man mano che aumenta la mappa, la memoria viene allocata in unità pari *nBlockSize* voci.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#56](../../mfc/codesnippet/cpp/cmap-class_1.cpp)]  
  
##  <a name="cpair"></a>  CMap::CPair  
 Contiene un valore di chiave e il valore dell'oggetto associato.  
  
### <a name="remarks"></a>Note  
 Si tratta di una struttura annidata all'interno di classe [CMap](../../mfc/reference/cmap-class.md).  
  
 La struttura è costituita da due campi:  
  
- **chiave** il valore effettivo del tipo di chiave.  
  
- **valore** il valore dell'oggetto associato.  
  
 Viene utilizzato per archiviare i valori restituiti da [CMap::PLookup](#plookup), [CMap::PGetFirstAssoc](#pgetfirstassoc), e [CMap::PGetNextAssoc](#pgetnextassoc).  
  
### <a name="example"></a>Esempio  
 Per un esempio di utilizzo, vedere l'esempio per [CMap::PLookup](#plookup).  
  
##  <a name="getcount"></a>  CMap::GetCount  
 Recupera il numero di elementi nella mappa.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CMap::Lookup](#lookup).  
  
##  <a name="gethashtablesize"></a>  CMap::GetHashTableSize  
 Determina il numero di elementi nella tabella hash per la mappa.  
  
```  
UINT GetHashTableSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella tabella hash.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#57](../../mfc/codesnippet/cpp/cmap-class_2.cpp)]  
  
##  <a name="getnextassoc"></a>  CMap::GetNextAssoc  
 Recupera l'elemento della mappa in corrispondenza `rNextPosition`, quindi Aggiorna `rNextPosition` per fare riferimento all'elemento successivo nella mappa.  
  
```  
void GetNextAssoc(
    POSITION& rNextPosition,
    KEY& rKey,
    VALUE& rValue) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *rNextPosition*  
 Specifica un riferimento a un **posizione** valore restituito da una precedente `GetNextAssoc` o `GetStartPosition` chiamare.  
  
 *KEY*  
 Parametro modello che specifica il tipo di chiave della mappa.  
  
 *rKey*  
 Specifica la chiave restituita dell'elemento recuperato.  
  
 *VALORE*  
 Parametro modello che specifica il tipo del valore della mappa.  
  
 *rValue*  
 Specifica il valore restituito dell'elemento recuperato.  
  
### <a name="remarks"></a>Note  
 Questa funzione è particolarmente utile per l'iterazione di tutti gli elementi nella mappa. Si noti che la sequenza di posizione non è necessariamente lo stesso come sequenza di valore della chiave.  
  
 Se l'elemento recuperato è l'ultimo nella mappa, quindi il nuovo valore del *rNextPosition* è impostata su **NULL**.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CMap::SetAt](#setat).  
  
##  <a name="getsize"></a>  CMap::GetSize  
 Restituisce il numero di elementi della mappa.  
  
```  
INT_PTR GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella mappa.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero di elementi nella mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]  
  
##  <a name="getstartposition"></a>  CMap::GetStartPosition  
 Inizia un'iterazione mappa restituendo un **posizione** valore che può essere passato a un `GetNextAssoc` chiamare.  
  
```  
POSITION GetStartPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un **posizione** valore che indica una posizione iniziale per eseguire l'iterazione della mappa; o **NULL** se la mappa è vuota.  
  
### <a name="remarks"></a>Note  
 La sequenza di iterazione non è stimabile; Pertanto, il "primo elemento nella mappa" alcun significato speciale.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CMap::SetAt](#setat).  
  
##  <a name="inithashtable"></a>  CMap::InitHashTable  
 Inizializza la tabella hash.  
  
```  
void InitHashTable(UINT hashSize, BOOL  bAllocNow = TRUE);  
```  
  
### <a name="parameters"></a>Parametri  
 *hashSize*  
 Numero di voci nella tabella hash.  
  
 *bAllocNow*  
 Se **TRUE**, consente di allocare la tabella hash al momento dell'inizializzazione; in caso contrario, la tabella viene allocata quando necessario.  
  
### <a name="remarks"></a>Note  
 Per prestazioni ottimali, le dimensioni della tabella hash devono essere un numero primo. Per ridurre al minimo i conflitti, la dimensione deve includere approssimativamente il 20% maggiore di set di dati più grande previsto.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CMap::Lookup](#lookup).  
  
##  <a name="isempty"></a>  CMap::IsEmpty  
 Determina se la mappa è vuota.  
  
```  
BOOL IsEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se questa mappa non contiene elementi; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CMap::RemoveAll](#removeall).  
  
##  <a name="lookup"></a>  CMap::Lookup  
 Cerca il valore eseguito il mapping a una chiave specificata.  
  
```  
BOOL Lookup(ARG_KEY key, VALUE& rValue) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *ARG_KEY*  
 Specifica il tipo di parametro di modello il *chiave* valore.  
  
 *key*  
 Specifica la chiave che identifica l'elemento da ricercare.  
  
 *VALORE*  
 Specifica il tipo del valore da ricercare.  
  
 *rValue*  
 Riceve il valore cercato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è stato trovato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 `Lookup` utilizza un algoritmo hash per trovare rapidamente l'elemento della mappa con una chiave che corrisponde esattamente al tasto premuto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]  
  
##  <a name="operator_at"></a>  [] CMap::operator  
 Sostituisce una comoda la `SetAt` funzione membro.  
  
```  
VALUE& operator[](arg_key key);
```  
  
### <a name="parameters"></a>Parametri  
 *VALORE*  
 Parametro di modello che specifica il tipo del valore della mappa.  
  
 *ARG_KEY*  
 Parametro di modello che specifica il tipo del valore della chiave.  
  
 *key*  
 La chiave utilizzata per recuperare il valore dalla mappa.  
  
### <a name="remarks"></a>Note  
 E può pertanto essere utilizzato solo sul lato sinistro di un'istruzione di assegnazione (un l-value). Se non è disponibile alcun elemento della mappa con la chiave specificata, viene creato un nuovo elemento.  
  
 Non c'è nessun "destra" (r-value) equivalente all'operatore perché vi sono possibilità che una chiave non può essere trovata nella mappa. Utilizzare il `Lookup` funzione membro per il recupero dell'elemento.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CMap::Lookup](#lookup).  
  
##  <a name="pgetfirstassoc"></a>  CMap::PGetFirstAssoc  
 Restituisce la prima voce dell'oggetto mappa.  
  
```  
const CPair* PGetFirstAssoc() const; 
CPair* PGetFirstAssoc();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla prima voce nella mappa; vedere [CMap::CPair](#cpair). Se la mappa non contiene voci, il valore è **NULL**.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire un puntatore al primo elemento nell'oggetto mappa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#59](../../mfc/codesnippet/cpp/cmap-class_4.cpp)]  
  
##  <a name="pgetnextassoc"></a>  CMap::PGetNextAssoc  
 Recupera l'elemento della mappa a cui puntata *pAssocRec*.  
  
```  
const CPair *PGetNextAssoc(const CPair* pAssocRet) const;  
  
CPair *PGetNextAssoc(const CPair* pAssocRet);
```  
  
### <a name="parameters"></a>Parametri  
 *pAssocRet*  
 Punta a una voce della mappa restituita da una precedente [PGetNextAssoc](#pgetnextassoc) oppure [CMap::PGetFirstAssoc](#pgetfirstassoc) chiamare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla voce successiva nella mappa; vedere [CMap::CPair](#cpair). Se l'elemento è l'ultimo nella mappa, il valore è **NULL**.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per scorrere tutti gli elementi nella mappa. Recuperare il primo elemento con una chiamata a `PGetFirstAssoc` e quindi scorrere la mappa con le chiamate successive a `PGetNextAssoc`.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CMap::PGetFirstAssoc](#pgetfirstassoc).  
  
##  <a name="plookup"></a>  CMap::PLookup  
 Trova il valore eseguito il mapping a una chiave specificata.  
  
```  
const CPair* PLookup(ARG_KEY key) const;
CPair* PLookup(ARG_KEY key);  
```  
  
### <a name="parameters"></a>Parametri  
 *key*  
 Chiave dell'elemento da ricercare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una struttura di chiave. vedere [CMap::CPair](#cpair). Se viene trovata alcuna corrispondenza, `CMap::PLookup` restituisce `NULL`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per cercare un elemento della mappa con una chiave che corrisponde esattamente al tasto premuto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#60](../../mfc/codesnippet/cpp/cmap-class_5.cpp)]  
  
##  <a name="removeall"></a>  CMap::RemoveAll  
 Rimuove tutti i valori da questa mappa, chiamando la funzione di supporto globali **DestructElements**.  
  
```  
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 La funzione funziona correttamente se la mappa è vuota.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#61](../../mfc/codesnippet/cpp/cmap-class_6.cpp)]  
  
##  <a name="removekey"></a>  CMap::RemoveKey  
 Cerca la voce della mappa corrispondente alla chiave fornita; quindi, se la chiave viene trovata, rimuove la voce.  
  
```  
BOOL RemoveKey(ARG_KEY key);
```  
  
### <a name="parameters"></a>Parametri  
 *ARG_KEY*  
 Parametro di modello che specifica il tipo della chiave.  
  
 *key*  
 Chiave dell'elemento da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la voce è stata trovata e rimosso correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il **DestructElements** funzione helper viene utilizzata per rimuovere la voce.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CMap::SetAt](#setat).  
  
##  <a name="setat"></a>  CMap::SetAt  
 Indica che il database primario inserire un elemento in una mappa.  
  
```  
void SetAt(ARG_KEY key, ARG_VALUE newValue);
```  
  
### <a name="parameters"></a>Parametri  
 *ARG_KEY*  
 Specifica il tipo di parametro di modello il *chiave* parametro.  
  
 *key*  
 Specifica la chiave del nuovo elemento.  
  
 *ARG_VALUE*  
 Specifica il tipo di parametro di modello il *newValue* parametro.  
  
 *newValue*  
 Specifica il valore del nuovo elemento.  
  
### <a name="remarks"></a>Note  
 Prima di tutto, viene cercata la chiave. Se la chiave viene trovata, quindi verrà modificato il valore corrispondente. in caso contrario, viene creata una nuova coppia chiave-valore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#62](../../mfc/codesnippet/cpp/cmap-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)  
