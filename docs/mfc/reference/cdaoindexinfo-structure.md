---
title: Struttura CDaoIndexInfo | Microsoft Docs
ms.custom: ''
ms.date: 06/25/2018
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoIndexInfo
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), Indexes collection
- CDaoIndexInfo structure [MFC]
ms.assetid: 251d8285-78ce-4716-a0b3-ccc3395fc437
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2cfeaada169addc01bc09893db0dedba2b7528d0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46403110"
---
# <a name="cdaoindexinfo-structure"></a>Struttura CDaoIndexInfo

Il `CDaoIndexInfo` struttura contiene informazioni sull'oggetto indice definito per la data access Object (DAO).

## <a name="syntax"></a>Sintassi

```cpp
struct CDaoIndexInfo {
    CDaoIndexInfo();                    // Constructor
    CString m_strName;                  // Primary
    CDaoIndexFieldInfo* m_pFieldInfos;  // Primary
    short m_nFields;                    // Primary
    BOOL m_bPrimary;                    // Secondary
    BOOL m_bUnique;                     // Secondary
    BOOL m_bClustered;                  // Secondary
    BOOL m_bIgnoreNulls;                // Secondary
    BOOL m_bRequired;                   // Secondary
    BOOL m_bForeign;                    // Secondary
    long m_lDistinctCount;              // All

    // Below the // Implementation comment:
    // Destructor, not otherwise documented
};
```

### <a name="parameters"></a>Parametri

*m_strName*<br/>
Identifica in modo univoco l'oggetto campo. Per informazioni dettagliate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

*m_pFieldInfos*<br/>
Un puntatore a una matrice di [CDaoIndexFieldInfo](../../mfc/reference/cdaoindexfieldinfo-structure.md) gli oggetti che indica quali campi tabledef o un recordset sono campi chiave presenti nell'indice. Ogni oggetto identifica un campo nell'indice. L'ordine di indice predefinito è crescente. Un oggetto indice può avere uno o più campi che rappresentano le chiavi di indice per ogni record. Può essere questi crescente, decrescente, o una combinazione.

*m_nFields*<br/>
Il numero di campi archiviati in `m_pFieldInfos`.

*m_bPrimary*<br/>
Se la proprietà Primary è TRUE, l'oggetto indice rappresenta un indice primario. Un indice primario è costituito da uno o più campi che identificano in modo univoco tutti i record in una tabella in un ordine predefinito. Perché il campo di indice deve essere univoco, la proprietà dell'oggetto indice univoca viene anche impostare su TRUE in DAO. Se l'indice primario è costituito da più di un campo, ogni campo può contenere valori duplicati, ma ogni combinazione di valori di tutti i campi indicizzati debba essere univoci. Un indice primario è costituito da una chiave per la tabella e in genere contiene gli stessi campi di chiave primaria.

Quando si imposta una chiave primaria per una tabella, la chiave primaria viene definita automaticamente come indice primario per la tabella. Per altre informazioni, vedere gli argomenti "Proprietà Primary" e "Proprietà Unique" nella Guida di DAO.

> [!NOTE]
> Possono essere presenti, al massimo un indice primario in una tabella.

*m_bUnique*<br/>
Indica se un oggetto indice rappresenta un indice univoco per una tabella. Se questa proprietà è TRUE, l'oggetto indice rappresenta un indice univoco. Un indice univoco è costituito da uno o più campi che consentono di disporre in modo logico tutti i record in una tabella in modo univoco e predefinito. Se l'indice è costituito da un campo, i valori in tale campo devono essere univoci per l'intera tabella. Se l'indice è costituita da più di un campo, ogni campo può contenere valori duplicati, ma ogni combinazione di valori di tutti i campi indicizzati debba essere univoci.

Se la proprietà Unique sia il database primario di un oggetto indice è impostata su TRUE, l'indice è unique e primary: identifica in modo univoco tutti i record nella tabella in un ordine logico predefinito. Se la proprietà primaria è impostata su FALSE, l'indice è un indice secondario. Gli indici secondari (chiavi e non chiave) organizzare logicamente i record in un ordine predefinito senza che funge da identificatore per i record nella tabella.

Per altre informazioni, vedere gli argomenti "Proprietà Primary" e "Proprietà Unique" nella Guida di DAO.

*m_bClustered*<br/>
Indica se un oggetto indice rappresenta un indice cluster per una tabella. Se questa proprietà è TRUE, l'oggetto indice rappresenta un indice cluster, in caso contrario, questo non accade. Un indice cluster è costituito da uno o i campi di chiave più, nel loro insieme, disporre di tutti i record in una tabella in un ordine predefinito. Con un indice cluster, i dati nella tabella vengono archiviati in modo letterale nell'ordine specificato dall'indice cluster. Un indice cluster fornisce un accesso efficiente ai record in una tabella. Per altre informazioni, vedere l'argomento "Proprietà cluster" nella Guida di DAO.

> [!NOTE]
> La proprietà Clustered viene ignorata per i database che utilizzano il motore di database Microsoft Jet, in quanto il motore di database Jet non supporta gli indici cluster.

*m_bIgnoreNulls*<br/>
Indica se sono presenti voci di indice per i record con i valori Null nei relativi campi di indice. Se questa proprietà è TRUE, i campi con valori Null non è una voce di indice. Per semplificare la ricerca di record usando un campo più velocemente, è possibile definire un indice per il campo. Se si consentono le voci Null in un campo indicizzato e si prevede che molte delle voci null, è possibile impostare la proprietà IgnoreNulls per l'oggetto indice su TRUE per ridurre la quantità di spazio di archiviazione utilizzato dall'indice. L'impostazione della proprietà IgnoreNulls e l'impostazione della proprietà necessaria determinano insieme se un record con valore Null indice dispone di una voce di indice, come illustrato nella tabella seguente.

|IgnoreNulls|Obbligatorio|Null nel campo di indice|
|-----------------|--------------|-------------------------|
|True|False|Valore null è consentito; non vengono aggiunte voci di indice.|
|False|False|Valore null è consentito; vengono aggiunte voci di indice.|
|True o false.|True|Valore null non è consentito; non vengono aggiunte voci di indice.|

Per altre informazioni, vedere l'argomento "Proprietà IgnoreNulls" nella Guida di DAO.

*m_bRequired*<br/>
Indica se un oggetto indice DAO richiede un valore diverso da Null. Se questa proprietà è TRUE, l'oggetto indice non consente un valore Null. Per altre informazioni, vedere l'argomento "Proprietà richiesto" nella Guida di DAO.

> [!TIP]
> Quando è possibile impostare questa proprietà per un oggetto indice DAO o un oggetto del campo (contenuto da un oggetto di querydef, recordset o tabledef), impostarla per l'oggetto campo. La validità dell'impostazione della proprietà per un oggetto del campo viene verificata prima di quello di un oggetto index.

*m_bForeign*<br/>
Indica se un oggetto indice rappresenta una chiave esterna in una tabella. Se questa proprietà è TRUE, l'indice rappresenta una chiave esterna in una tabella. Una chiave esterna è costituita da uno o più campi di una tabella esterna che identificano in modo univoco una riga in una tabella primaria. Il motore di database Microsoft Jet crea un oggetto indice per la tabella esterna e imposta la proprietà esterna quando si crea una relazione che impone l'integrità referenziale. Per altre informazioni, vedere l'argomento "Proprietà esterna" nella Guida di DAO.

*m_lDistinctCount*<br/>
Indica il numero di valori univoci per l'oggetto indice che sono inclusi nella tabella associata. Controllare la proprietà DistinctCount per determinare il numero di valori univoci, o le chiavi, in un indice. Ogni chiave viene conteggiata una sola volta, anche se potrebbero essere presenti più occorrenze di tale valore se l'indice consente i valori duplicati. Queste informazioni sono utili per le applicazioni che tentano di ottimizzare l'accesso ai dati tramite la valutazione di informazioni sugli indici. Il numero di valori univoci è noto anche come la cardinalità di un oggetto index. La proprietà DistinctCount sempre non riflette il numero effettivo di chiavi in un determinato momento. Ad esempio, una modifica causata da un rollback delle transazioni non essere propagata immediatamente nella proprietà DistinctCount. Per altre informazioni, vedere l'argomento "Proprietà DistinctCount" nella Guida di DAO.

## <a name="remarks"></a>Note

I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il `GetIndexInfo` la funzione membro nelle classi [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).

Gli oggetti indice non sono rappresentati da una classe MFC. Al contrario, DAO oggetti MFC sottostanti della classe di oggetti [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oppure [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contengono una raccolta di oggetti index, chiamato raccolta di indici. Queste classi rendono disponibili le funzioni membro per accedere a singoli elementi di informazioni sugli indici, oppure è possibile accedervi in una sola volta con un `CDaoIndexInfo` chiamando il `GetIndexInfo` funzione membro dell'oggetto contenitore.

`CDaoIndexInfo` ha un costruttore e un distruttore per allocare e deallocare le informazioni sui campi di indice in correttamente `m_pFieldInfos`.

Le informazioni recuperate dal `GetIndexInfo` funzione di membro di un oggetto tabledef viene archiviato in un `CDaoIndexInfo` struttura. Chiamare il `GetIndexInfo` funzione membro dell'oggetto tabledef contenitore in cui raccolta di indici è archiviato l'oggetto indice. `CDaoIndexInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoIndexInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoTableDef::GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)
