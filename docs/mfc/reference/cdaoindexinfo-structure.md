---
title: Struttura CDaoIndexInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CDaoIndexInfo
dev_langs: C++
helpviewer_keywords:
- DAO (Data Access Objects), Indexes collection
- CDaoIndexInfo structure [MFC]
ms.assetid: 251d8285-78ce-4716-a0b3-ccc3395fc437
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a2e103dd891a16027e7943bda04fd5920bf64f32
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cdaoindexinfo-structure"></a>Struttura CDaoIndexInfo
Il `CDaoIndexInfo` struttura contiene informazioni su un oggetto indice definito per l'accesso oggetti DAO (data).  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CDaoIndexInfo {  
    CDaoIndexInfo();
*// Constructor  
    CString m_strName;  // Primary  
    CDaoIndexFieldInfo* m_pFieldInfos;  // Primary  
    short m_nFields;    // Primary  
    BOOL m_bPrimary;    // Secondary  
    BOOL m_bUnique;     // Secondary  
    BOOL m_bClustered;  // Secondary  
    BOOL m_bIgnoreNulls;                // Secondary  
    BOOL m_bRequired;   // Secondary  
    BOOL m_bForeign;    // Secondary  
    long m_lDistinctCount;              // All  
 *// Below the // Implementation comment: *// Destructor, not otherwise documented  
};   
```  
  
#### <a name="parameters"></a>Parametri  
 `m_strName`  
 Identifica in modo univoco l'oggetto del campo. Per informazioni dettagliate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 `m_pFieldInfos`  
 Un puntatore a una matrice di [CDaoIndexFieldInfo](../../mfc/reference/cdaoindexfieldinfo-structure.md) oggetti che indica quali campi tabledef o recordset sono campi chiave in un indice. Ogni oggetto identifica un campo in corrispondenza dell'indice. L'ordine di indice predefinito è crescente. Un oggetto di indice può avere uno o più campi che rappresentano le chiavi di indice per ogni record. Questi può essere un ordine crescente, decrescente, o una combinazione.  
  
 `m_nFields`  
 Il numero di campi archiviati in `m_pFieldInfos`.  
  
 *m_bPrimary*  
 Se la proprietà Primary **TRUE**, l'oggetto indice rappresenta un indice primario. Un indice primario è costituito da uno o più campi che identificano in modo univoco tutti i record in una tabella in un ordine predefinito. Poiché il campo di indice deve essere univoco, la proprietà univoca dell'oggetto Index viene inoltre impostata su **TRUE** in DAO. Se l'indice primario è costituito da più di un campo, ogni campo può contenere valori duplicati, ma ogni combinazione di valori di tutti i campi indicizzati deve essere univoco. Un indice primario è costituito da una chiave per la tabella e contiene in genere gli stessi campi come chiave primaria.  
  
 Quando si imposta una chiave primaria per una tabella, la chiave primaria viene definita automaticamente come indice primario per la tabella. Per ulteriori informazioni, vedere gli argomenti "Proprietà Primary" e "Proprietà Unique" nella Guida di DAO.  
  
> [!NOTE]
>  Può esistere, al massimo un indice primario in una tabella.  
  
 *m_bUnique*  
 Indica se un oggetto index rappresenta un indice univoco per una tabella. Se questa proprietà è **TRUE**, l'oggetto indice rappresenta un indice univoco. Un indice univoco è costituito da uno o più campi che consentono di disporre in modo logico tutti i record in una tabella in modo univoco e predefinito. Se l'indice è costituito da un campo, è possibile che i valori nel campo devono essere univoci per l'intera tabella. Se l'indice è costituito da più di un campo, ogni campo può contenere valori duplicati, ma ogni combinazione di valori di tutti i campi indicizzati deve essere univoco.  
  
 Se la proprietà Unique e Primary di un oggetto di indice è impostata su **TRUE**, l'indice è unique e primary: identifica in modo univoco tutti i record nella tabella in un ordine logico predefinito. Se la proprietà primaria è impostata su **FALSE**, l'indice è un indice secondario. Gli indici secondari (chiavi e non chiave) disporre in modo logico i record in un ordine predefinito senza utilizzato come identificatore per i record nella tabella.  
  
 Per ulteriori informazioni, vedere gli argomenti "Proprietà Primary" e "Proprietà Unique" nella Guida di DAO.  
  
 *m_bClustered*  
 Indica se un oggetto index rappresenta un indice cluster per una tabella. Se questa proprietà è **TRUE**, l'oggetto indice rappresenta un indice cluster; in caso contrario, non è presente. Un indice cluster è costituito da uno o più chiave campi che, complessivamente, disporre di tutti i record in una tabella in un ordine predefinito. Con un indice cluster, i dati nella tabella letteralmente vengono archiviati nell'ordine specificato dall'indice cluster. Un indice cluster fornisce un accesso efficiente ai record in una tabella. Per ulteriori informazioni, vedere l'argomento "Proprietà cluster" nella Guida di DAO.  
  
> [!NOTE]
>  La proprietà Clustered viene ignorata per i database che utilizzano il motore di database Microsoft Jet, in quanto il motore di database Jet non supporta gli indici cluster.  
  
 *m_bIgnoreNulls*  
 Indica se sono presenti voci di indice di record con valori Null nei relativi campi di indice. Se questa proprietà è **TRUE**, i campi con valori Null non dispone di una voce di indice. Per rendere la ricerca di record mediante un campo più velocemente, è possibile definire un indice per il campo. Se si prevede numerose voci Null voci Null in un campo indicizzato, è possibile impostare la proprietà IgnoreNulls per l'oggetto indice **TRUE** per ridurre la quantità di spazio di archiviazione utilizzato dall'indice. L'impostazione della proprietà IgnoreNulls e l'impostazione della proprietà obbligatorio determinano se un record con un valore Null di indice dispone di una voce di indice, come illustrato nella tabella seguente.  
  
|IgnoreNulls|Obbligatorio|Null nel campo di indice|  
|-----------------|--------------|-------------------------|  
|True|False|Valore null consentito. vengono aggiunte voci di indice.|  
|False|False|Valore null consentito. vengono aggiunte voci di indice.|  
|True o false.|True|Valore null non consentite. vengono aggiunte voci di indice.|  
  
 Per ulteriori informazioni, vedere l'argomento "Proprietà IgnoreNulls" nella Guida di DAO.  
  
 `m_bRequired`  
 Indica se un oggetto index DAO richiede un valore non Null. Se questa proprietà è **TRUE**, l'oggetto indice non consente un valore Null. Per ulteriori informazioni, vedere l'argomento "Proprietà richiesto" nella Guida di DAO.  
  
> [!TIP]
>  Quando è possibile impostare questa proprietà per un oggetto index DAO o un oggetto field (contenuto da recordset, tabledef o querydef oggetto), impostarla per l'oggetto del campo. La validità dell'impostazione della proprietà per un oggetto field viene verificata prima che di un oggetto index.  
  
 *m_bForeign*  
 Indica se un oggetto index rappresenta una chiave esterna in una tabella. Se questa proprietà è **TRUE**, l'indice rappresenta una chiave esterna in una tabella. Una chiave esterna è costituita da uno o più campi in una tabella esterna che identificano in modo univoco una riga in una tabella primaria. Il motore di database Microsoft Jet crea un oggetto di indice per la tabella esterna e imposta la proprietà esterna quando si crea una relazione che impone l'integrità referenziale. Per ulteriori informazioni, vedere l'argomento "Proprietà esterna" nella Guida di DAO.  
  
 *m_lDistinctCount*  
 Indica il numero di valori univoci per l'oggetto indice inclusi nella tabella associata. Controllare la proprietà DistinctCount per determinare il numero di valori univoci o chiavi, in un indice. Ogni chiave viene conteggiata una sola volta, anche se potrebbero essere presenti più occorrenze di tale valore se l'indice consente i valori duplicati. Queste informazioni sono utili nelle applicazioni che tentano di ottimizzare l'accesso ai dati tramite la valutazione delle informazioni sull'indice. Il numero di valori univoci è noto anche come la cardinalità di un oggetto index. La proprietà DistinctCount non riflette sempre il numero effettivo di chiavi in un momento specifico. Ad esempio, una modifica causata da un rollback della transazione non si rifletteranno immediatamente nella proprietà DistinctCount. Per ulteriori informazioni, vedere l'argomento "Proprietà DistinctCount" nella Guida di DAO.  
  
## <a name="remarks"></a>Note  
 I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il `GetIndexInfo` funzione membro nelle classi [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).  
  
 Gli oggetti indice non sono rappresentati da una classe MFC. In alternativa, DAO oggetti MFC sottostanti della classe di oggetti [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contiene una raccolta di oggetti di indice, denominato raccolta di indici. Queste classi forniscono le funzioni membro per accedere ai singoli elementi di informazioni sugli indici, o è possibile accedere contemporaneamente con un `CDaoIndexInfo` oggetto chiamando il `GetIndexInfo` funzione membro dell'oggetto contenitore.  
  
 `CDaoIndexInfo`include un costruttore e un distruttore per allocare e deallocare le informazioni sui campi di indice in correttamente `m_pFieldInfos`.  
  
 Le informazioni recuperate dal `GetIndexInfo` funzione membro di un oggetto tabledef viene archiviato in un `CDaoIndexInfo` struttura. Chiamare il `GetIndexInfo` funzione membro dell'oggetto tabledef contenitore in cui raccolta di indici è archiviato l'oggetto indice. `CDaoIndexInfo`definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoIndexInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef::GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)

