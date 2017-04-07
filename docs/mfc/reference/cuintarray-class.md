---
title: Classe CUIntArray | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CUIntArray
- AFXCOLL/CUIntArray
- AFXCOLL/CObArray::CObArray
- AFXCOLL/CObArray::Add
- AFXCOLL/CObArray::Append
- AFXCOLL/CObArray::Copy
- AFXCOLL/CObArray::ElementAt
- AFXCOLL/CObArray::FreeExtra
- AFXCOLL/CObArray::GetAt
- AFXCOLL/CObArray::GetCount
- AFXCOLL/CObArray::GetData
- AFXCOLL/CObArray::GetSize
- AFXCOLL/CObArray::GetUpperBound
- AFXCOLL/CObArray::InsertAt
- AFXCOLL/CObArray::IsEmpty
- AFXCOLL/CObArray::RemoveAll
- AFXCOLL/CObArray::RemoveAt
- AFXCOLL/CObArray::SetAt
- AFXCOLL/CObArray::SetAtGrow
- AFXCOLL/CObArray::SetSize
dev_langs:
- C++
helpviewer_keywords:
- INT
- UINT
- indexed arrays
- arrays [C++], indexed
- WORD data type
- CUIntArray class
ms.assetid: d71f3d8f-ef9f-4e48-9b69-7782c0e2ddf7
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 901ec011c6371b9c6a58ed71343480fe9a6ffe88
ms.lasthandoff: 02/24/2017

---
# <a name="cuintarray-class"></a>Classe CUIntArray
Supporta matrici di Unsigned Integer.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CUIntArray : public CObject  
```  
  
## <a name="members"></a>Membri  
 Le funzioni membro di `CUIntArray` sono simili alle funzioni membro della classe [CObArray](../../mfc/reference/cobarray-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObArray`. Ovunque sia visualizzato un `CObject` puntatore come parametro della funzione o valore restituito, sostituire con un **UINT**.  
  
 `CObject* CObArray::GetAt( int <nIndex> ) const;`  
  
 ad esempio, si converte in  
  
 `UINT CUIntArray::GetAt( int <nIndex> ) const;`  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::CObArray](../../mfc/reference/cobarray-class.md#cobarray)|Costruisce una matrice vuota.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::Add](../../mfc/reference/cobarray-class.md#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::Append](../../mfc/reference/cobarray-class.md#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|  
|[CObArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|  
|[CObArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Restituisce il valore in corrispondenza di un indice specificato.|  
|[CObArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere **NULL**.|  
|[CObArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Restituisce il massimo indice valido.|  
|[CObArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|  
|[CObArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determina se la matrice è vuota.|  
|[CObArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Rimuove tutti gli elementi dalla matrice.|  
|[CObArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|  
|[CObArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|  
|[CObArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Imposta il numero di elementi che la matrice deve contenere.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[CObArray::operator]](../../mfc/reference/cobarray-class.md#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|  
  
## <a name="remarks"></a>Note  
 Un intero senza segno, o **UINT**, differisce da parole e Double Word in cui la dimensione fisica di un **UINT** può cambiare a seconda della destinazione ambiente operativo. Oggetto **UINT** è la stessa dimensione una parola doppia.  
  
 `CUIntArray`incorpora il [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic) (macro) per supportare l'accesso del tipo in fase di esecuzione e il dump di un [CDumpContext](../../mfc/reference/cdumpcontext-class.md) oggetto. Se è necessario un dump di intero senza segno a singoli elementi, è necessario impostare la profondità del contesto di dump a 1 o superiore. Matrici di interi senza segno non possono essere serializzate.  
  
> [!NOTE]
>  Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.  
  
 Per ulteriori informazioni sull'utilizzo di `CUIntArray`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CUIntArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




