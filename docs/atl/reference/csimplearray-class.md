---
title: Classe CSimpleArray | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CSimpleArray
- ATLSIMPCOLL/ATL::CSimpleArray
- ATLSIMPCOLL/ATL::CSimpleArray::CSimpleArray
- ATLSIMPCOLL/ATL::CSimpleArray::Add
- ATLSIMPCOLL/ATL::CSimpleArray::Find
- ATLSIMPCOLL/ATL::CSimpleArray::GetData
- ATLSIMPCOLL/ATL::CSimpleArray::GetSize
- ATLSIMPCOLL/ATL::CSimpleArray::Remove
- ATLSIMPCOLL/ATL::CSimpleArray::RemoveAll
- ATLSIMPCOLL/ATL::CSimpleArray::RemoveAt
- ATLSIMPCOLL/ATL::CSimpleArray::SetAtIndex
dev_langs:
- C++
helpviewer_keywords:
- CSimpleArray class
ms.assetid: ee0c9f39-b61c-4c18-bc43-4eada21dca3a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2ef8a6a9b803cb7e1828537027bbf09b2ffd2067
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37881633"
---
# <a name="csimplearray-class"></a>Classe CSimpleArray
Questa classe fornisce metodi per la gestione di una matrice semplice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, class TEqual = CSimpleArrayEqualHelper<T>>  
class CSimpleArray
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Il tipo di dati da archiviare nella matrice.  
  
 *TEqual*  
 Un oggetto dei tratti, che definisce il test di uguaglianza per gli elementi di tipo *T*.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArray::CSimpleArray](#csimplearray)|Il costruttore per la matrice semplice.|  
|[CSimpleArray:: ~ CSimpleArray](#dtor)|Il distruttore per la matrice semplice.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArray::Add](#add)|Aggiunge un nuovo elemento nella matrice.|  
|[CSimpleArray::Find](#find)|Trova un elemento nella matrice.|  
|[CSimpleArray::GetData](#getdata)|Restituisce un puntatore ai dati archiviati nella matrice.|  
|[CSimpleArray::GetSize](#getsize)|Restituisce il numero di elementi archiviati nella matrice.|  
|[CSimpleArray::Remove](#remove)|Rimuove un elemento specificato dalla matrice.|  
|[CSimpleArray::RemoveAll](#removeall)|Rimuove tutti gli elementi della matrice.|  
|[CSimpleArray::RemoveAt](#removeat)|Rimuove l'elemento specificato dalla matrice.|  
|[CSimpleArray::SetAtIndex](#setatindex)|Imposta l'elemento specificato nella matrice.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArray::operator\[\]](#operator_at)|Recupera un elemento da una matrice.|  
|[CSimpleArray::operator =](#operator_eq)|Operatore di assegnazione.|  

  
## <a name="remarks"></a>Note  
 `CSimpleArray` fornisce metodi per la creazione e gestione di una semplice matrice, di un determinato tipo `T`.  
  
 Il parametro `TEqual` fornisce un mezzo per la definizione di una funzione di uguaglianza di due elementi di tipo `T`. Per la creazione di una classe simile [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md), è possibile modificare il comportamento del test dell'uguaglianza per qualsiasi matrice specificata. Ad esempio, quando si lavora con una matrice di puntatori, può essere utile definire l'uguaglianza come a seconda dei valori che di puntatori di riferimento. L'implementazione predefinita utilizza **operator=()**.  
  
 Entrambe `CSimpleArray` e [CSimpleMap](../../atl/reference/csimplemap-class.md) sono progettati per un numero ridotto di elementi. [CAtlArray](../../atl/reference/catlarray-class.md) e [CAtlMap](../../atl/reference/catlmap-class.md) deve essere usato quando la matrice contiene un numero elevato di elementi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpcoll. h  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#86](../../atl/codesnippet/cpp/csimplearray-class_1.cpp)]  
  
##  <a name="add"></a>  CSimpleArray::Add  
 Aggiunge un nuovo elemento nella matrice.  
  
```
BOOL Add(const T& t);
```  
  
### <a name="parameters"></a>Parametri  
 *t*  
 Elemento da aggiungere alla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se l'elemento viene aggiunto nella matrice, FALSE in caso contrario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#87](../../atl/codesnippet/cpp/csimplearray-class_2.cpp)]  
  
##  <a name="csimplearray"></a>  CSimpleArray::CSimpleArray  
 Il costruttore per l'oggetto matrice.  
  
```
CSimpleArray(const CSimpleArray<T, TEqual>& src);  
CSimpleArray();
```     
  
### <a name="parameters"></a>Parametri  
 *src*  
 Oggetto `CSimpleArray` esistente.  
  
### <a name="remarks"></a>Note  
 Inizializza i membri dati, la creazione di una nuova classe vuota `CSimpleArray` oggetto o una copia di un oggetto esistente `CSimpleArray` oggetto.  
  
##  <a name="dtor"></a>  CSimpleArray:: ~ CSimpleArray  
 Distruttore.  
  
```
~CSimpleArray();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="find"></a>  CSimpleArray::Find  
 Trova un elemento nella matrice.  
  
```
int Find(const T& t) const;
```  
  
### <a name="parameters"></a>Parametri  
 *t*  
 L'elemento da cercare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indice dell'elemento trovato oppure -1 se l'elemento non viene trovato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#88](../../atl/codesnippet/cpp/csimplearray-class_3.cpp)]  
  
##  <a name="getdata"></a>  CSimpleArray::GetData  
 Restituisce un puntatore ai dati archiviati nella matrice.  
  
```
T* GetData() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore ai dati nella matrice.  
  
##  <a name="getsize"></a>  CSimpleArray::GetSize  
 Restituisce il numero di elementi archiviati nella matrice.  
  
```
int GetSize() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi archiviati nella matrice.  
  
##  <a name="operator_at"></a>  CSimpleArray::operator \[\]  
 Recupera un elemento da una matrice.  
  
```
T& operator[](int nindex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 L'indice di elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'elemento della matrice cui fa riferimento *nIndex*.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#89](../../atl/codesnippet/cpp/csimplearray-class_4.cpp)]  
  
##  <a name="operator_eq"></a>  CSimpleArray::operator =  
 Operatore di assegnazione.  
  
```
CSimpleArray<T, TEqual>
& operator=(
    const CSimpleArray<T, TEqual>& src);
```  
  
### <a name="parameters"></a>Parametri  
 *src*  
 Matrice da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore a aggiornato `CSimpleArray` oggetto.  
  
### <a name="remarks"></a>Note  
 Copia tutti gli elementi dal `CSimpleArray` oggetto cui fa riferimento *src* nell'oggetto matrice corrente, sostituendo tutti i dati esistenti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#90](../../atl/codesnippet/cpp/csimplearray-class_5.cpp)]  
  
##  <a name="remove"></a>  CSimpleArray::Remove  
 Rimuove un elemento specificato dalla matrice.  
  
```
BOOL Remove(const T& t);
```  
  
### <a name="parameters"></a>Parametri  
 *t*  
 Elemento da rimuovere dalla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se l'elemento è stato trovato e rimosso, FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Quando un elemento viene rimosso, gli elementi rimanenti della matrice sono numerati per riempire lo spazio vuoto.  
  
##  <a name="removeall"></a>  CSimpleArray::RemoveAll  
 Rimuove tutti gli elementi della matrice.  
  
```
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 Rimuove tutti gli elementi attualmente memorizzati nella matrice.  
  
##  <a name="removeat"></a>  CSimpleArray::RemoveAt  
 Rimuove l'elemento specificato dalla matrice.  
  
```
BOOL RemoveAtint nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice che punta all'elemento da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se l'elemento è stato rimosso, FALSE se l'indice non è valido.  
  
### <a name="remarks"></a>Note  
 Quando un elemento viene rimosso, gli elementi rimanenti della matrice sono numerati per riempire lo spazio vuoto.  
  
##  <a name="setatindex"></a>  CSimpleArray::SetAtIndex  
 Impostare l'elemento specificato nella matrice.  
  
```
BOOL SetAtIndex(
    int nIndex,
    const T& t);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 L'indice dell'elemento da modificare.  
  
 *t*  
 Valore da assegnare all'elemento specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se ha esito positivo, FALSE se l'indice non è valido.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
