---
description: 'Altre informazioni su: struttura CDaoIndexInfo'
title: Struttura CDaoIndexInfo
ms.date: 06/25/2018
f1_keywords:
- CDaoIndexInfo
helpviewer_keywords:
- DAO (Data Access Objects), Indexes collection
- CDaoIndexInfo structure [MFC]
ms.assetid: 251d8285-78ce-4716-a0b3-ccc3395fc437
ms.openlocfilehash: 2e09846789dc91e4d0df67665f3e975b557c07c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97250764"
---
# <a name="cdaoindexinfo-structure"></a>Struttura CDaoIndexInfo

La `CDaoIndexInfo` struttura contiene informazioni su un oggetto index definito per DAO (Data Access Objects).

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
Assegna un nome univoco all'oggetto campo. Per informazioni dettagliate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

*m_pFieldInfos*<br/>
Puntatore a una matrice di oggetti [CDaoIndexFieldInfo](../../mfc/reference/cdaoindexfieldinfo-structure.md) che indica quali campi di TableDef o recordset sono campi chiave in un indice. Ogni oggetto identifica un campo nell'indice. L'ordinamento dell'indice predefinito è crescente. Un oggetto index può includere uno o più campi che rappresentano chiavi di indice per ogni record. Possono essere in ordine crescente, decrescente o una combinazione.

*m_nFields*<br/>
Numero di campi archiviati in `m_pFieldInfos` .

*m_bPrimary*<br/>
Se la proprietà primaria è TRUE, l'oggetto index rappresenta un indice primario. Un indice primario è costituito da uno o più campi che identificano in modo univoco tutti i record di una tabella in base a un ordine predefinito. Poiché il campo dell'indice deve essere univoco, la proprietà Unique dell'oggetto index viene anche impostata su TRUE in DAO. Se l'indice primario è costituito da più di un campo, ogni campo può contenere valori duplicati, ma ogni combinazione di valori di tutti i campi indicizzati deve essere univoca. Un indice primario è costituito da una chiave per la tabella e in genere contiene gli stessi campi della chiave primaria.

Quando si imposta una chiave primaria per una tabella, la chiave primaria viene definita automaticamente come indice primario per la tabella. Per ulteriori informazioni, vedere gli argomenti "proprietà primaria" e "proprietà univoca" nella Guida di DAO.

> [!NOTE]
> In una tabella può essere presente al massimo un indice primario.

*m_bUnique*<br/>
Indica se un oggetto index rappresenta un indice univoco per una tabella. Se questa proprietà è TRUE, l'oggetto index rappresenta un indice univoco. Un indice univoco è costituito da uno o più campi che dispongono logicamente di tutti i record di una tabella in un ordine univoco e predefinito. Se l'indice è costituito da un campo, i valori in tale campo devono essere univoci per l'intera tabella. Se l'indice è costituito da più di un campo, ogni campo può contenere valori duplicati, ma ogni combinazione di valori di tutti i campi indicizzati deve essere univoca.

Se entrambe le proprietà univoche e primarie di un oggetto index sono impostate su TRUE, l'indice è univoco e primario: identifica in modo univoco tutti i record della tabella in base a un ordine logico predefinito. Se la proprietà Primary è impostata su FALSE, l'indice è un indice secondario. Gli indici secondari (sia Key che colonne) dispongono logicamente dei record in un ordine predefinito senza fungere da identificatore per i record nella tabella.

Per ulteriori informazioni, vedere gli argomenti "proprietà primaria" e "proprietà univoca" nella Guida di DAO.

*m_bClustered*<br/>
Indica se un oggetto index rappresenta un indice cluster per una tabella. Se questa proprietà è TRUE, l'oggetto index rappresenta un indice cluster. in caso contrario, non lo è. Un indice cluster è costituito da uno o più campi colonne che, insieme, dispongono di tutti i record di una tabella in un ordine predefinito. Con un indice cluster, i dati nella tabella vengono letteralmente archiviati nell'ordine specificato dall'indice cluster. Un indice cluster consente di accedere in modo efficiente ai record di una tabella. Per ulteriori informazioni, vedere l'argomento "Proprietà Clustered" nella Guida di DAO.

> [!NOTE]
> La proprietà Clustered viene ignorata per i database che utilizzano il motore di database di Microsoft Jet perché il motore di database Jet non supporta gli indici cluster.

*m_bIgnoreNulls*<br/>
Indica se sono presenti voci di indice per i record con valori null nei campi indice. Se questa proprietà è TRUE, i campi con valori null non dispongono di una voce di indice. Per eseguire la ricerca dei record utilizzando un campo più velocemente, è possibile definire un indice per il campo. Se si ammettono voci null in un campo indicizzato e si prevede che molte voci siano null, è possibile impostare la proprietà IgnoreNulls per l'oggetto index su TRUE per ridurre la quantità di spazio di archiviazione utilizzata dall'indice. L'impostazione della proprietà IgnoreNulls e l'impostazione della proprietà obbligatoria stabiliscono insieme se un record con un valore di indice null include una voce di indice, come illustrato nella tabella seguente.

|IgnoreNulls|Necessario|Null nel campo indice|
|-----------------|--------------|-------------------------|
|Vero|Falso|Valore null consentito. non è stata aggiunta alcuna voce di indice.|
|False|False|Valore null consentito. Aggiunta voce di indice.|
|true o false|Vero|Valore null non consentito. non è stata aggiunta alcuna voce di indice.|

Per ulteriori informazioni, vedere l'argomento "proprietà IgnoreNulls" nella Guida di DAO.

*m_bRequired*<br/>
Indica se un oggetto indice DAO richiede un valore non null. Se questa proprietà è TRUE, l'oggetto index non consente un valore null. Per ulteriori informazioni, vedere l'argomento "proprietà obbligatoria" nella Guida di DAO.

> [!TIP]
> Quando è possibile impostare questa proprietà per un oggetto indice DAO o un oggetto campo (contenuto da un oggetto TableDef, Recordset o oggetto QueryDef), impostarlo per l'oggetto campo. La validità dell'impostazione della proprietà per un oggetto campo viene verificata prima di quella di un oggetto index.

*m_bForeign*<br/>
Indica se un oggetto index rappresenta una chiave esterna in una tabella. Se questa proprietà è TRUE, l'indice rappresenta una chiave esterna in una tabella. Una chiave esterna è costituita da uno o più campi in una tabella esterna che identificano in modo univoco una riga in una tabella primaria. Il motore di database di Microsoft Jet crea un oggetto indice per la tabella esterna e imposta la proprietà esterna quando si crea una relazione che impone l'integrità referenziale. Per ulteriori informazioni, vedere l'argomento "proprietà esterna" nella Guida di DAO.

*m_lDistinctCount*<br/>
Indica il numero di valori univoci per l'oggetto indice inclusi nella tabella associata. Controllare la proprietà DistinctCount per determinare il numero di valori univoci, o chiavi, in un indice. Qualsiasi chiave viene conteggiata una sola volta, anche se possono essere presenti più occorrenze di tale valore se l'indice consente valori duplicati. Queste informazioni sono utili nelle applicazioni che tentano di ottimizzare l'accesso ai dati tramite la valutazione delle informazioni sugli indici. Il numero di valori univoci è noto anche come cardinalità di un oggetto index. La proprietà DistinctCount non rifletterà sempre il numero effettivo di chiavi in un determinato momento. Una modifica causata da un rollback delle transazioni, ad esempio, non verrà immediatamente applicata alla proprietà DistinctCount. Per ulteriori informazioni, vedere l'argomento "Proprietà DistinctCount" nella Guida di DAO.

## <a name="remarks"></a>Commenti

I riferimenti a primary, Secondary e all sopra indicati indicano il modo in cui le informazioni vengono restituite dalla `GetIndexInfo` funzione membro nelle classi [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).

Gli oggetti indice non sono rappresentati da una classe MFC. Gli oggetti DAO sottostanti oggetti MFC della classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contengono invece una raccolta di oggetti index, denominata raccolta Indexes. Queste classi forniscono funzioni membro per accedere a singoli elementi di informazioni sull'indice oppure è possibile accedervi contemporaneamente con un `CDaoIndexInfo` oggetto chiamando la `GetIndexInfo` funzione membro dell'oggetto contenitore.

`CDaoIndexInfo` dispone di un costruttore e di un distruttore per allocare e deallocare correttamente le informazioni sui campi dell'indice in `m_pFieldInfos` .

Le informazioni recuperate dalla `GetIndexInfo` funzione membro di un oggetto TableDef vengono archiviate in una `CDaoIndexInfo` struttura. Chiamare la `GetIndexInfo` funzione membro dell'oggetto TableDef contenitore nella cui raccolta indexes è archiviato l'oggetto index. `CDaoIndexInfo` definisce inoltre una `Dump` funzione membro nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un `CDaoIndexInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoTableDef:: GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)
