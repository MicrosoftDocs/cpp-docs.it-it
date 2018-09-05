---
title: Classe CObArray | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CObArray
- AFXCOLL/CObArray
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
- CObArray [MFC], CObArray
- CObArray [MFC], Add
- CObArray [MFC], Append
- CObArray [MFC], Copy
- CObArray [MFC], ElementAt
- CObArray [MFC], FreeExtra
- CObArray [MFC], GetAt
- CObArray [MFC], GetCount
- CObArray [MFC], GetData
- CObArray [MFC], GetSize
- CObArray [MFC], GetUpperBound
- CObArray [MFC], InsertAt
- CObArray [MFC], IsEmpty
- CObArray [MFC], RemoveAll
- CObArray [MFC], RemoveAt
- CObArray [MFC], SetAt
- CObArray [MFC], SetAtGrow
- CObArray [MFC], SetSize
ms.assetid: 27894efd-2370-4776-9ed9-24a98492af17
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5082490b9dd2e37090bac747e592b62ce51ac26a
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43754969"
---
# <a name="cobarray-class"></a>Classe CObArray
Supporta matrici di puntatori `CObject` .  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CObArray : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::CObArray](#cobarray)|Costruisce una matrice vuota di `CObject` puntatori.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::Add](#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::Append](#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::Copy](#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::ElementAt](#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|  
|[CObArray::FreeExtra](#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|  
|[CObArray::GetAt](#getat)|Restituisce il valore in corrispondenza di un indice specificato.|  
|[CObArray::GetCount](#getcount)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetData](#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere NULL.|  
|[CObArray::GetSize](#getsize)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetUpperBound](#getupperbound)|Restituisce il massimo indice valido.|  
|[CObArray::InsertAt](#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|  
|[CObArray::IsEmpty](#isempty)|Determina se la matrice è vuota.|  
|[CObArray::RemoveAll](#removeall)|Rimuove tutti gli elementi dalla matrice.|  
|[CObArray::RemoveAt](#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|  
|[CObArray::SetAt](#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|  
|[CObArray::SetAtGrow](#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::SetSize](#setsize)|Imposta il numero di elementi che la matrice deve contenere.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[] CObArray::operator](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|  
  
## <a name="remarks"></a>Note  
 Questi array di oggetti sono simili alle matrici del linguaggio C, ma in modo dinamico possono ridurre e di ingrandirsi.  
  
 Gli indici di matrice iniziano sempre alla posizione 0. È possibile decidere se il limite superiore di correggere o consentire alla matrice di vengono espanse quando si aggiungono elementi oltre il limite corrente. La memoria viene allocata in modo contiguo al limite massimo, anche se alcuni elementi sono null.  
  
 In Win32, le dimensioni di un `CObArray` l'oggetto è limitato solo alla memoria disponibile.  
  
 Come con una matrice di C, l'ora di accesso per un `CObArray` elemento indicizzato è costante ed è indipendente dalla dimensione della matrice.  
  
 `CObArray` incorpora l'IMPLEMENT_SERIAL (macro) per supportare la serializzazione e il dump dei relativi elementi. Se una matrice di `CObject` puntatori viene archiviato in un archivio, con l'operatore di inserimento di overload o con il `Serialize` ogni membro di funzione `CObject` elemento è, a sua volta serializzato insieme all'indice di matrice.  
  
 Se è necessario un dump di singoli `CObject` elementi in una matrice, è necessario impostare la profondità del `CDumpContext` oggetto 1 o versioni successive.  
  
 Quando un `CObArray` oggetto viene eliminato o quando gli elementi vengono rimossi, solo il `CObject` puntatori sono stati rimossi, non gli oggetti fanno riferimento.  
  
> [!NOTE]
>  Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.  
  
 Derivazione di classi di matrice è simile alla derivazione di elenco. Per informazioni dettagliate sulla derivazione di una classe di elenco di scopi specifici, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
> [!NOTE]
>  È necessario usare IMPLEMENT_SERIAL (macro) nell'implementazione della classe derivata se si prevede di serializzare la matrice.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CObArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
##  <a name="add"></a>  CObArray::Add  
 Aggiunge un nuovo elemento alla fine della matrice, aumento delle dimensioni della matrice di 1.  
  
```  
INT_PTR Add(CObject* newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *newElement*  
 Il `CObject` puntatore da aggiungere a questa matrice.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Se [SetSize](#setsize) è stato usato con un *nGrowBy* valore maggiore di 1, la memoria aggiuntiva può essere allocato. Tuttavia, il limite superiore aumenterà di solo 1.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::Add`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**Aggiungere INT_PTR (BYTE** `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**Aggiungere INT_PTR (valore DWORD** `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**Aggiungere INT_PTR (void** <strong>\*</strong> `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**Aggiungere INT_PTR (LPCTSTR** `newElement` **); throw (CMemoryException\* );**<br /><br /> **Add(const CString&** `newElement` **) INT_PTR;**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**Aggiungere INT_PTR (UINT** `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**Aggiungere INT_PTR (WORD** `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#75](../../mfc/codesnippet/cpp/cobarray-class_1.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
 `Add example: A CObArray with 2 elements`  
  
 `[0] = a CAge at $442A 21`  
  
 `[1] = a CAge at $4468 40`  
  
##  <a name="append"></a>  CObArray::Append  
 Chiamare questa funzione membro per aggiungere il contenuto di un'altra matrice alla fine della matrice specificata.  
  
```  
INT_PTR Append(const CObArray& src);
```  
  
### <a name="parameters"></a>Parametri  
 *src*  
 Origine degli elementi da aggiungere alla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del primo elemento aggiunto.  
  
### <a name="remarks"></a>Note  
 Le matrici devono essere dello stesso tipo.  
  
 Se necessario, `Append` possono allocare memoria aggiuntiva per contenere gli elementi aggiunti alla matrice.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::Append`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**Accodare INT_PTR (CByteArray const &** *src* **);**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**Accodare INT_PTR (CDWordArray const &** *src* **);**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**Accodare INT_PTR (CPtrArray const &** *src* **);**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**Accodare INT_PTR (CStringArray const &** *src* **);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**Accodare INT_PTR (CUIntArray const &** *src* **);**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**Accodare INT_PTR (CWordArray const &** *src* **);**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#76](../../mfc/codesnippet/cpp/cobarray-class_2.cpp)]  
  
##  <a name="copy"></a>  CObArray::Copy  
 Chiamare questa funzione membro per sovrascrivere gli elementi della matrice specificata con gli elementi di un'altra matrice dello stesso tipo.  
  
```  
void Copy(const CObArray& src);
```  
  
### <a name="parameters"></a>Parametri  
 *src*  
 Origine degli elementi da copiare nella matrice.  
  
### <a name="remarks"></a>Note  
 `Copy` non libera la memoria. Tuttavia, se necessario, `Copy` possono allocare memoria aggiuntiva per contenere gli elementi copiati nella matrice.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::Copy`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void copia (CByteArray const &** *src* **);**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void copia (CDWordArray const &** *src* **);**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void copia (CPtrArray const &** *src* **);**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void copia (CStringArray const &** *src* **);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void copia (CUIntArray const &** *src* **);**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**void copia (CWordArray const &** *src* **);**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#77](../../mfc/codesnippet/cpp/cobarray-class_3.cpp)]  
  
##  <a name="cobarray"></a>  CObArray::CObArray  
 Costruisce un oggetto vuoto `CObject` puntatore matrice.  
  
```  
CObArray();
```  
  
### <a name="remarks"></a>Note  
 La matrice si espande un elemento alla volta.  
  
 La tabella seguente mostra altri costruttori simili a quelle `CObArray::CObArray`.  
  
|Classe|Costruttore|  
|-----------|-----------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**CByteArray ();**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**CDWordArray ();**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**CPtrArray ();**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CStringArray ();**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**CUIntArray ();**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**Classe CWordArray ();**|  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#78](../../mfc/codesnippet/cpp/cobarray-class_4.cpp)]  
  
##  <a name="elementat"></a>  CObArray::ElementAt  
 Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.  
  
```  
CObject*& ElementAt(INT_PTR nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound`.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a un `CObject` puntatore.  
  
### <a name="remarks"></a>Note  
 Viene utilizzato per implementare l'operatore di assegnazione a sinistra per le matrici. Si tratta di una funzione avanzata che deve essere usata solo per implementare gli operatori speciali di matrici.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::ElementAt`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE & ElementAt (INT_PTR** `nIndex` **);**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD & ElementAt (INT_PTR** `nIndex` **);**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void\*& ElementAt (INT_PTR** `nIndex` **);**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString & ElementAt (INT_PTR** `nIndex` **);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT & ElementAt (INT_PTR** `nIndex` **);**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD & ElementAt (INT_PTR** `nIndex` **);**|  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CObArray::GetSize](#getsize).  
  
##  <a name="freeextra"></a>  CObArray::FreeExtra  
 Libera tutta la memoria aggiuntiva allocata mentre la matrice è stata aumentata.  
  
```  
void FreeExtra();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione non ha effetto sulla dimensione o limite superiore della matrice.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::FreeExtra`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**(void) FreeExtra;**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**(void) FreeExtra;**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**(void) FreeExtra;**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**(void) FreeExtra;**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**(void) FreeExtra;**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**(void) FreeExtra;**|  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CObArray::GetData](#getdata).  
  
##  <a name="getat"></a>  CObArray::GetAt  
 Restituisce l'elemento di matrice in corrispondenza dell'indice specificato.  
  
```  
CObject* GetAt(INT_PTR nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound`.  
  
### <a name="return-value"></a>Valore restituito  
 Il `CObject` elemento puntatore attualmente in corrispondenza di questo indice.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Passando un valore negativo o un valore maggiore del valore restituito da `GetUpperBound` comporterà un'asserzione non riuscita.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::GetAt`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE GetAt (INT_PTR** `nIndex` **) const;**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD GetAt (INT_PTR** `nIndex` **) const;**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void\* GetAt (INT_PTR** `nIndex` **) const;**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString GetAt (INT_PTR** `nIndex` **) const;**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT GetAt (INT_PTR** `nIndex` **) const;**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD GetAt (INT_PTR** `nIndex` **) const;**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#79](../../mfc/codesnippet/cpp/cobarray-class_5.cpp)]  
  
##  <a name="getcount"></a>  CObArray::GetCount  
 Restituisce il numero di elementi della matrice.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nella matrice.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero di elementi nella matrice. Poiché gli indici sono in base zero, la dimensione è maggiore dell'indice più grande di 1.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::GetCount`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**() GetCount INT_PTR const.**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**() GetCount INT_PTR const.**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**() GetCount INT_PTR const.**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**() GetCount INT_PTR const.**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**() GetCount INT_PTR const.**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**() GetCount INT_PTR const.**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#80](../../mfc/codesnippet/cpp/cobarray-class_6.cpp)]  
  
##  <a name="getdata"></a>  CObArray::GetData  
 Usare questa funzione membro per ottenere l'accesso diretto agli elementi nella matrice.  
  
```  
const CObject** GetData() const;  
  
CObject** GetData();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla matrice di `CObject` puntatori.  
  
### <a name="remarks"></a>Note  
 Se non sono elementi disponibili, `GetData` restituisce un valore null.  
  
 Durante l'accesso diretto agli elementi della matrice consentono di lavorare più rapidamente, prestare attenzione quando si chiama `GetData`; gli eventuali errori apportata direttamente interessano gli elementi della matrice.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::GetData`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE const\* GetData () const; BYTE\* GetData ();**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**const DWORD\* GetData () const; DWORD\* GetData ();**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**const void\* \* GetData () const; void\* \* GetData ();**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString const\* GetData () const; CString\* GetData ();**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT const\* GetData () const; UINT\* GetData ();**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD const\* GetData () const; WORD\* GetData ();**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#81](../../mfc/codesnippet/cpp/cobarray-class_7.cpp)]  
  
##  <a name="getsize"></a>  CObArray::GetSize  
 Restituisce la dimensione della matrice.  
  
```  
INT_PTR GetSize() const;  
```  
  
### <a name="remarks"></a>Note  
 Poiché gli indici sono in base zero, la dimensione è maggiore dell'indice più grande di 1.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::GetSize`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**() GetSize INT_PTR const.**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**() GetSize INT_PTR const.**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**() GetSize INT_PTR const.**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**() GetSize INT_PTR const.**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**() GetSize INT_PTR const.**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**() GetSize INT_PTR const.**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#82](../../mfc/codesnippet/cpp/cobarray-class_8.cpp)]  
  
##  <a name="getupperbound"></a>  CObArray::GetUpperBound  
 Restituisce il limite corrente di questa matrice.  
  
```  
INT_PTR GetUpperBound() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del limite superiore (in base zero).  
  
### <a name="remarks"></a>Note  
 Poiché gli indici di matrice in base zero, questa funzione restituisce un valore 1 meno `GetSize`.  
  
 La condizione `GetUpperBound( )` = -1 indica che la matrice non contiene elementi.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::GetUpperBound`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**() GetUpperBound INT_PTR const.**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**() GetUpperBound INT_PTR const.**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**() GetUpperBound INT_PTR const.**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**() GetUpperBound INT_PTR const.**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**() GetUpperBound INT_PTR const.**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**() GetUpperBound INT_PTR const.**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#83](../../mfc/codesnippet/cpp/cobarray-class_9.cpp)]  
  
##  <a name="insertat"></a>  CObArray::InsertAt  
 Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.  
  
```  
void InsertAt(
    INT_PTR nIndex,  
    CObject* newElement,  
    INT_PTR nCount = 1);

 
void InsertAt(
    INT_PTR nStartIndex,  
    CObArray* pNewArray);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer che può essere maggiore del valore restituito da `GetUpperBound`.  
  
 *newElement*  
 Il `CObject` puntatore da inserire in questa matrice. Oggetto *newElement* del valore NULL è consentito.  
  
 *nCount*  
 Il numero di volte in cui che questo elemento deve essere inserito (impostazione predefinita è 1).  
  
 *nStartIndex*  
 Un indice integer che può essere maggiore del valore restituito da `GetUpperBound`.  
  
 *pNewArray*  
 Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.  
  
### <a name="remarks"></a>Note  
 La prima versione di `InsertAt` inserisce un elemento (o più copie di un elemento) in corrispondenza dell'indice specificato in una matrice. Nel processo, passa (incrementando l'indice) Sposta l'elemento esistente in corrispondenza dell'indice e di tutti gli elementi sopra di esso.  
  
 La seconda versione consente di inserire tutti gli elementi da un altro `CObArray` insieme, iniziando in corrispondenza di *nStartIndex* posizione.  
  
 Il `SetAt` (funzione), al contrario, sostituisce un elemento di matrice specificato e non viene trasferito tutti gli elementi.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::InsertAt`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, BYTE** `newElement` **, int** `nCount` **= 1);**<br /><br /> **throw (CMemoryException\* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CByteArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, DWORD** `newElement` **, int** `nCount` **= 1);**<br /><br /> **throw (CMemoryException\* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CDWordArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, void** <strong>\*</strong> `newElement` **, int** `nCount` **= 1);**<br /><br /> **throw (CMemoryException\* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CPtrArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, LPCTSTR** `newElement` **, int** `nCount` **= 1);**<br /><br /> **throw (CMemoryException\* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CStringArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, UINT** `newElement` **, int** `nCount` **= 1);**<br /><br /> **throw (CMemoryException\* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CUIntArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, WORD** `newElement` **, int** `nCount` **= 1);**<br /><br /> **throw (CMemoryException\* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CWordArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw (CMemoryException\* );**|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#84](../../mfc/codesnippet/cpp/cobarray-class_10.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
 `InsertAt example: A CObArray with 3 elements`  
  
 `[0] = a CAge at $45C8 21`  
  
 `[1] = a CAge at $4646 30`  
  
 `[2] = a CAge at $4606 40`  
  
##  <a name="isempty"></a>  CObArray::IsEmpty  
 Determina se la matrice è vuota.  
  
```  
BOOL IsEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la matrice è vuota. in caso contrario 0.  
  
##  <a name="operator_at"></a>  [] CObArray::operator  
 Questi operatori di indice sono un sostituto pratico per i `SetAt` e `GetAt` funzioni.  
  
```  
CObject*& operator[](int_ptr nindex);  
CObject* operator[](int_ptr nindex) const;  
```  
  
### <a name="remarks"></a>Note  
 Il primo operatore chiamata per le matrici che non sono **const**, può essere utilizzata con destra (r-value) o a sinistra (l-value) di un'istruzione di assegnazione. Il secondo, chiamato per **const** matrici, può essere utilizzato solo sul lato destro.  
  
 La versione di Debug della libreria delle asserzioni se l'indice (sia nel lato sinistro o destro di un'istruzione di assegnazione) è compreso nell'intervallo.  
  
 La tabella seguente mostra altri operatori che sono simili a `CObArray::operator []`.  
  
|Classe|Operatore|  
|-----------|--------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**Operatore & BYTE [] (int_ptr** `nindex`  **\);**<br /><br /> **Operator BYTE [] (int_ptr** `nindex`  **\) const.**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD & (operatore) [] (int_ptr** `nindex`  **\);**<br /><br /> **DWORD operator [] (int_ptr** `nindex`  **\) const.**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void\*& operator [] (int_ptr** `nindex`  **\);**<br /><br /> **void\* operator [] (int_ptr** `nindex`  **\) const.**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString & (operatore) [] (int_ptr** `nindex`  **\);**<br /><br /> **CString operator [] (int_ptr** `nindex`  **\) const.**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**Operatore & UINT [] (int_ptr** `nindex`  **\);**<br /><br /> **UINT operator [] (int_ptr** `nindex`  **\) const.**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**[] Operatore & WORD (int_ptr** `nindex`  **\);**<br /><br /> **WORD operator [] (int_ptr** `nindex`  **\) const.**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#88](../../mfc/codesnippet/cpp/cobarray-class_11.cpp)]  
  
##  <a name="removeall"></a>  CObArray::RemoveAll  
 Rimuove tutti i puntatori di questa matrice, ma non elimina effettivamente la `CObject` oggetti.  
  
```  
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 Se la matrice è vuota, la funzione continui a funzionare.  
  
 Il `RemoveAll` funzione libera tutta la memoria usata per l'archiviazione di puntatore.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::RemoveAll`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void RemoveAll( );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void RemoveAll( );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void RemoveAll( );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void RemoveAll( );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void RemoveAll( );**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**void RemoveAll( );**|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#85](../../mfc/codesnippet/cpp/cobarray-class_12.cpp)]  
  
##  <a name="removeat"></a>  CObArray::RemoveAt  
 Rimuove uno o più elementi a partire dall'indice specificato in una matrice.  
  
```  
void RemoveAt(
    INT_PTR nIndex,  
    INT_PTR nCount = 1);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound`.  
  
 *nCount*  
 Numero di elementi da rimuovere.  
  
### <a name="remarks"></a>Note  
 Nel processo, viene spostato verso il basso tutti gli elementi sopra gli elementi rimossi. Lo decrementa superiore associato della matrice, ma non libera la memoria.  
  
 Se si prova a rimuovere più elementi che sono contenuti nella matrice sopra il punto di rimozione, quindi asserisce la versione di Debug della libreria.  
  
 Il `RemoveAt` funzione rimuove il `CObject` puntatore di matrice, ma non elimina l'oggetto stesso.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::RemoveAt`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** *nCount* **= 1);**|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#112](../../mfc/codesnippet/cpp/cobarray-class_13.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
 `RemoveAt example: A CObArray with 1 elements`  
  
 `[0] = a CAge at $4606 40`  
  
##  <a name="setat"></a>  CObArray::SetAt  
 Imposta l'elemento della matrice in corrispondenza dell'indice specificato.  
  
```  
void SetAt(
    INT_PTR nIndex,  
    CObject* newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound`.  
  
 *newElement*  
 Il puntatore all'oggetto da inserire in questa matrice. Un valore NULL è consentito.  
  
### <a name="remarks"></a>Note  
 `SetAt` non comporterà la matrice a crescere. Usare `SetAtGrow` se si desidera che la matrice di aumento automatico delle dimensioni.  
  
 È necessario assicurarsi che il valore di indice rappresenta una posizione valida nella matrice. Se è compreso nell'intervallo, la versione di Debug della libreria di asserzioni.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::SetAt`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetAt (INT_PTR** `nIndex` **, BYTE** `newElement` **);**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetAt (INT_PTR** `nIndex` **, DWORD** `newElement` **);**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetAt (INT_PTR** `nIndex` **, void** <strong>\*</strong> `newElement` **);**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetAt (INT_PTR** `nIndex` **, LPCTSTR** `newElement` **);**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetAt (INT_PTR** `nIndex` **, UINT** `newElement` **);**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetAt (INT_PTR** `nIndex` **, WORD** `newElement` **);**|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#86](../../mfc/codesnippet/cpp/cobarray-class_14.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
 `SetAt example: A CObArray with 2 elements`  
  
 `[0] = a CAge at $47E0 30`  
  
 `[1] = a CAge at $47A0 40`  
  
##  <a name="setatgrow"></a>  CObArray::SetAtGrow  
 Imposta l'elemento della matrice in corrispondenza dell'indice specificato.  
  
```  
void SetAtGrow(
    INT_PTR nIndex,  
    CObject* newElement);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Un indice integer maggiore o uguale a 0.  
  
 *newElement*  
 Il puntatore all'oggetto da aggiungere a questa matrice. Un valore NULL è consentito.  
  
### <a name="remarks"></a>Note  
 La matrice si espande automaticamente se necessario (vale a dire il limite superiore viene regolato per inserire il nuovo elemento).  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::SetAtGrow`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, BYTE** `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, DWORD** `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, void** <strong>\*</strong> `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, LPCTSTR** `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, UINT** `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, WORD** `newElement` **);**<br /><br /> **throw (CMemoryException\* );**|  
  
### <a name="example"></a>Esempio  
  Visualizzare [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco del `CAge` classe utilizzata in tutti gli esempi di raccolta.  
  
 [!code-cpp[NVC_MFCCollections#87](../../mfc/codesnippet/cpp/cobarray-class_15.cpp)]  
  
 I risultati di questo programma sono come segue:  
  
 `SetAtGrow example: A CObArray with 4 elements`  
  
 `[0] = a CAge at $47C0 21`  
  
 `[1] = a CAge at $4800 40`  
  
 `[2] = NULL`  
  
 `[3] = a CAge at $4840 65`  
  
##  <a name="setsize"></a>  CObArray::SetSize  
 Consente di stabilire le dimensioni di una matrice vuota o esistente. Consente di allocare memoria se necessario.  
  
```  
void SetSize(
    INT_PTR nNewSize,  
    INT_PTR nGrowBy = -1);
```  
  
### <a name="parameters"></a>Parametri  
 *nNewSize*  
 La nuova dimensione della matrice (numero di elementi). Deve essere maggiore o uguale a 0.  
  
 *nGrowBy*  
 Il numero minimo di slot di elemento per allocare se è necessario un aumento delle dimensioni.  
  
### <a name="remarks"></a>Note  
 Se la nuova dimensione è minore della dimensione precedente, la matrice verrà troncata e tutta la memoria inutilizzata viene rilasciata. Per motivi di efficienza, chiamare il metodo `SetSize` per impostare le dimensioni della matrice prima di poterla usare. In questo modo la necessità di riallocare e copiare ogni volta che viene aggiunto un elemento della matrice.  
  
 Il *nGrowBy* parametro influisce sull'allocazione di memoria interna mentre è in aumento della matrice. L'uso non influisce mai sulle dimensioni della matrice come segnalato dal `GetSize` e `GetUpperBound`.  
  
 Se le dimensioni della matrice sono diventato, tutti i nuovi allocata **CObject** <strong>\*</strong> i puntatori vengono impostati su NULL.  
  
 La tabella seguente mostra altri membri funzioni simili a quelle `CObArray::SetSize`.  
  
|Classe|Funzione membro|  
|-----------|---------------------|  
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetSize (INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1);**<br /><br /> **throw (CMemoryException\* );**|  
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetSize (INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1);**<br /><br /> **throw (CMemoryException\* );**|  
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetSize (INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1);**<br /><br /> **throw (CMemoryException\* );**|  
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetSize (INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1);**<br /><br /> **throw (CMemoryException\* );**|  
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetSize (INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1);**<br /><br /> **throw (CMemoryException\* );**|  
|[Classe CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetSize (INT_PTR** `nNewSize` **, int** `nGrowBy` **= -1);**<br /><br /> **throw (CMemoryException\* );**|  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CObArray::GetData](#getdata).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CObject](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CStringArray](../../mfc/reference/cstringarray-class.md)   
 [Classe CPtrArray](../../mfc/reference/cptrarray-class.md)   
 [Classe CByteArray](../../mfc/reference/cbytearray-class.md)   
 [Classe CWordArray](../../mfc/reference/cwordarray-class.md)   
 [Classe CDWordArray](../../mfc/reference/cdwordarray-class.md)
