---
title: CTypedPtrArray (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CTypedPtrArray
- AFXTEMPL/CTypedPtrArray
- AFXTEMPL/CTypedPtrArray::Add
- AFXTEMPL/CTypedPtrArray::Append
- AFXTEMPL/CTypedPtrArray::Copy
- AFXTEMPL/CTypedPtrArray::ElementAt
- AFXTEMPL/CTypedPtrArray::GetAt
- AFXTEMPL/CTypedPtrArray::InsertAt
- AFXTEMPL/CTypedPtrArray::SetAt
- AFXTEMPL/CTypedPtrArray::SetAtGrow
dev_langs:
- C++
helpviewer_keywords:
- pointer arrays
- CTypedPtrArray class
ms.assetid: e3ecdf1a-a889-4156-92dd-ddbd36ccd919
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 24b21d017d46cc88d7e243aff75ccf6383d2c870
ms.lasthandoff: 02/24/2017

---
# <a name="ctypedptrarray-class"></a>Classe CTypedPtrArray
Fornisce un "wrapper" indipendente dai tipi per gli oggetti della classe `CPtrArray` o `CObArray`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class BASE_CLASS, class TYPE>  
class CTypedPtrArray : public BASE_CLASS  
```  
  
#### <a name="parameters"></a>Parametri  
 `BASE_CLASS`  
 Classe di base della classe di matrice di puntatori. deve essere una classe della matrice ( `CObArray` o `CPtrArray`).  
  
 `TYPE`  
 Tipo degli elementi archiviati nella matrice della classe base.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTypedPtrArray::Add](#add)|Aggiunge un nuovo elemento alla fine della matrice. Aumenta la matrice, se necessario|  
|[CTypedPtrArray::Append](#append)|Aggiunge il contenuto di una matrice alla fine di un altro. Aumenta la matrice, se necessario|  
|[CTypedPtrArray::Copy](#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CTypedPtrArray::ElementAt](#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|  
|[CTypedPtrArray::GetAt](#getat)|Restituisce il valore in corrispondenza di un indice specificato.|  
|[CTypedPtrArray::InsertAt](#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|  
|[CTypedPtrArray::SetAt](#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|  
|[CTypedPtrArray::SetAtGrow](#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[CTypedPtrArray::operator]](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|  
  
## <a name="remarks"></a>Note  
 Quando si utilizza `CTypedPtrArray` anziché `CPtrArray` o `CObArray`, la funzionalità di controllo dei tipi C++ consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.  
  
 Inoltre, il `CTypedPtrArray` wrapper esegue gran parte del cast che sarebbe necessario se si usa `CObArray` o `CPtrArray`.  
  
 Poiché tutti `CTypedPtrArray` funzioni inline, utilizzo di questo modello non influire in modo significativo la dimensione o velocità del codice.  
  
 Per ulteriori informazioni sull'utilizzo di `CTypedPtrArray`, vedere gli articoli [raccolte](../../mfc/collections.md) e [classi basate su modello](../../mfc/template-based-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `BASE_CLASS`  
  
 `CTypedPtrArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtempl.h  
  
##  <a name="add"></a>CTypedPtrArray::Add  
 Chiama questa funzione membro `BASE_CLASS` **:: Aggiungi**.  
  
```  
INT_PTR Add(TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elemento da aggiungere alla matrice.  
  
 `newElement`  
 L'elemento da aggiungere a questa matrice.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CObArray::Add](../../mfc/reference/cobarray-class.md#add).  
  
##  <a name="append"></a>CTypedPtrArray::Append  
 Chiama questa funzione membro `BASE_CLASS` **:: Append**.  
  
```  
INT_PTR Append(const CTypedPtrArray<BASE_CLASS, TYPE>& src);
```  
  
### <a name="parameters"></a>Parametri  
 `BASE_CLASS`  
 Classe di base della classe di matrice di puntatori. deve essere una classe della matrice ( [CObArray](../../mfc/reference/cobarray-class.md) o [CPtrArray](../../mfc/reference/cptrarray-class.md)).  
  
 *TIPO*  
 Tipo degli elementi archiviati nella matrice della classe base.  
  
 *src*  
 Origine degli elementi da aggiungere alla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del primo elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CObArray::Append](../../mfc/reference/cobarray-class.md#append).  
  
##  <a name="copy"></a>CTypedPtrArray::Copy  
 Chiama questa funzione membro `BASE_CLASS` **:: copia**.  
  
```  
void Copy(const CTypedPtrArray<BASE_CLASS, TYPE>& src);
```  
  
### <a name="parameters"></a>Parametri  
 `BASE_CLASS`  
 Classe di base della classe di matrice di puntatori. deve essere una classe della matrice ( [CObArray](../../mfc/reference/cobarray-class.md) o [CPtrArray](../../mfc/reference/cptrarray-class.md)).  
  
 *TIPO*  
 Tipo degli elementi archiviati nella matrice della classe base.  
  
 *src*  
 Origine degli elementi da copiare in una matrice.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CObArray::Copy](../../mfc/reference/cobarray-class.md#copy).  
  
##  <a name="elementat"></a>CTypedPtrArray::ElementAt  
 Questa funzione inline chiama `BASE_CLASS` **:: ElementAt**.  
  
```  
TYPE& ElementAt(INT_PTR nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elementi archiviati in questa matrice.  
  
 `nIndex`  
 Un indice intero maggiore o uguale a 0 e minore o uguale al valore restituito da `BASE_CLASS` **:: GetUpperBound**.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento temporaneo per l'elemento nella posizione specificata da `nIndex`. Questo elemento è del tipo specificato dal parametro di modello *tipo*.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CObArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat).  
  
##  <a name="getat"></a>CTypedPtrArray::GetAt  
 Questa funzione inline chiama `BASE_CLASS` **:: GetAt**.  
  
```  
TYPE GetAt(INT_PTR nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elementi archiviati nella matrice.  
  
 `nIndex`  
 Un indice intero maggiore o uguale a 0 e minore o uguale al valore restituito da `BASE_CLASS` **:: GetUpperBound**.  
  
### <a name="return-value"></a>Valore restituito  
 Una copia dell'elemento nella posizione specificata da `nIndex`. Questo elemento è del tipo specificato dal parametro di modello *tipo*.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CObArray::GetAt](../../mfc/reference/cobarray-class.md#getat)  
  
##  <a name="insertat"></a>CTypedPtrArray::InsertAt  
 Chiama questa funzione membro `BASE_CLASS` **:: InsertAt**.  
  
```  
void InsertAt(
    INT_PTR nIndex,  
    TYPE newElement,  
    INT_PTR nCount = 1);

 
void InsertAt(
    INT_PTR nStartIndex,  
    CTypedPtrArray<BASE_CLASS, TYPE>* pNewArray);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Un indice intero che può essere maggiore del valore restituito da [CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound).  
  
 *TIPO*  
 Tipo degli elementi archiviati nella matrice della classe base.  
  
 `newElement`  
 Il puntatore all'oggetto da inserire nella matrice. Oggetto `newElement` del valore **NULL** è consentita.  
  
 `nCount`  
 Il numero di volte in cui che questo elemento deve essere inserito (valore predefinito è 1).  
  
 `nStartIndex`  
 Un indice intero che può essere maggiore del valore restituito da `CObArray::GetUpperBound`.  
  
 `BASE_CLASS`  
 Classe di base della classe di matrice di puntatori. deve essere una classe della matrice ( [CObArray](../../mfc/reference/cobarray-class.md) o [CPtrArray](../../mfc/reference/cptrarray-class.md)).  
  
 `pNewArray`  
 Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CObArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat).  
  
##  <a name="operator_at"></a>[CTypedPtrArray::operator]  
 Questi operatori inline chiamano `BASE_CLASS` **:: operator []**.  
  
```  
TYPE& operator[ ](int_ptr nindex);  
TYPE operator[ ](int_ptr nindex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *TIPO*  
 Parametro di modello che specifica il tipo di elementi archiviati nella matrice.  
  
 `nIndex`  
 Un indice intero maggiore o uguale a 0 e minore o uguale al valore restituito da `BASE_CLASS` **:: GetUpperBound**.  
  
### <a name="remarks"></a>Note  
 Il primo operatore, chiamato per le matrici non **const**, può essere utilizzato su destra (r-value) o a sinistra (l-value) di un'istruzione di assegnazione. Il secondo, viene richiamato per **const** matrici, è possibile utilizzare solo a destra.  
  
 La versione di Debug della libreria indica se l'indice (in base a sinistra o destra di un'istruzione di assegnazione) è compreso nell'intervallo.  
  
##  <a name="setat"></a>CTypedPtrArray::SetAt  
 Chiama questa funzione membro `BASE_CLASS` **:: SetAt**.  
  
```  
void SetAt(
    INT_PTR nIndex,  
    TYPE ptr);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Un indice intero maggiore o uguale a 0 e minore o uguale al valore restituito da [CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound).  
  
 *TIPO*  
 Tipo degli elementi archiviati nella matrice della classe base.  
  
 *PTR*  
 Puntatore all'elemento da inserire nella matrice in corrispondenza di nIndex. È consentito un valore NULL.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CObArray::SetAt](../../mfc/reference/cobarray-class.md#setat).  
  
##  <a name="setatgrow"></a>CTypedPtrArray::SetAtGrow  
 Questa funzione membro chiama `BASE_CLASS` **:: SetAtGrow**.  
  
```  
void SetAtGrow(
    INT_PTR nIndex,  
    TYPE newElement);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Un indice intero maggiore o uguale a 0.  
  
 *TIPO*  
 Tipo degli elementi archiviati nella matrice della classe base.  
  
 `newElement`  
 Il puntatore all'oggetto da aggiungere a questa matrice. Oggetto **NULL** il valore è consentito.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CObArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CPtrArray](../../mfc/reference/cptrarray-class.md)   
 [CObArray (classe)](../../mfc/reference/cobarray-class.md)

