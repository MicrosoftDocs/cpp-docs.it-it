---
title: Struttura CDaoFieldInfo
ms.date: 09/17/2019
f1_keywords:
- CDaoFieldInfo
helpviewer_keywords:
- DAO (Data Access Objects), Fields collection
- CDaoFieldInfo structure [MFC]
ms.assetid: 91b13e3f-bdb8-440c-86fc-ba4181ea0182
ms.openlocfilehash: 9466386fefc6e5ab8fcf89bf497c1d5219e3e807
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368402"
---
# <a name="cdaofieldinfo-structure"></a>Struttura CDaoFieldInfo

La `CDaoFieldInfo` struttura contiene informazioni su un oggetto campo definito per gli oggetti DAO (Data Access Objects).

DAO è supportato tramite Office 2013. DAO 3.6 è la versione finale ed è considerata obsoleta.

## <a name="syntax"></a>Sintassi

```
struct CDaoFieldInfo
{
    CString m_strName;           // Primary
    short m_nType;               // Primary
    long m_lSize;                // Primary
    long m_lAttributes;          // Primary
    short m_nOrdinalPosition;    // Secondary
    BOOL m_bRequired;            // Secondary
    BOOL m_bAllowZeroLength;     // Secondary
    long m_lCollatingOrder;      // Secondary
    CString m_strForeignName;    // Secondary
    CString m_strSourceField;    // Secondary
    CString m_strSourceTable;    // Secondary
    CString m_strValidationRule; // All
    CString m_strValidationText; // All
    CString m_strDefaultValue;   // All
};
```

#### <a name="parameters"></a>Parametri

*m_strName*<br/>
Assegna un nome univoco all'oggetto campo. Per informazioni dettagliate, vedere l'argomento "Proprietà Name" nella Guida di DAO.

*m_nType*<br/>
Valore che indica il tipo di dati del campo. Per informazioni dettagliate, vedere l'argomento "Proprietà Type" nella Guida di DAO. Il valore di questa proprietà può essere uno dei seguenti:

- `dbBoolean`Sì/No, uguale a VERO/FALSO

- `dbByte`Byte

- `dbInteger`Breve

- `dbLong`Lungo

- `dbCurrency`Valuta; vedere Classe MFC [COleCurrency](../../mfc/reference/colecurrency-class.md)

- `dbSingle`Singolo

- `dbDouble`Doppia

- `dbDate`Data/Ora; vedere Classe MFC [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)

- `dbText`Testo; vedere la classe MFC [CString](../../atl-mfc-shared/reference/cstringt-class.md)

- `dbLongBinary`Binario lungo (oggetto OLE); è possibile utilizzare la classe MFC [CByteArray](../../mfc/reference/cbytearray-class.md) anziché la classe `CLongBinary` come `CByteArray` è più ricca e più facile da usare.

- `dbMemo`Memo; vedere la classe MFC`CString`

- `dbGUID`Identificatore univoco globale/identificatore univoco universale utilizzato con le chiamate di procedura remota. Per ulteriori informazioni, vedere l'argomento "Proprietà Type" nella Guida in linea di DAO.

> [!NOTE]
> Non utilizzare tipi di dati stringa per i dati binari. In questo modo i dati passano attraverso il livello di conversione Unicode/ANSI, con conseguente aumento dell'overhead e conversione possibilmente imprevista.

*m_lSize*<br/>
Valore che indica la dimensione massima, in byte, di un oggetto campo DAO contenente testo o la dimensione fissa di un oggetto campo contenente valori di testo o numerici. Per informazioni dettagliate, vedere l'argomento "Proprietà Size" nella Guida di DAO. Le dimensioni possono essere uno dei seguenti valori:

|Type|Dimensioni (byte)|Descrizione|
|----------|--------------------|-----------------|
|`dbBoolean`|1 byte|Sì/No (uguale a Vero/Falso)|
|`dbByte`|1|Byte|
|`dbInteger`|2|Integer|
|`dbLong`|4|long|
|`dbCurrency`|8|Valuta ([COleCurrency](../../mfc/reference/colecurrency-class.md))|
|`dbSingle`|4|Single|
|`dbDouble`|8|Double|
|`dbDate`|8|Data/ora ([COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md))|
|`dbText`|1 - 255|Testo ([CString](../../atl-mfc-shared/reference/cstringt-class.md))|
|`dbLongBinary`|0|Binario lungo (oggetto OLE; [CByteArray](../../mfc/reference/cbytearray-class.md); utilizzare al `CLongBinary`posto di )|
|`dbMemo`|0|Memo ([CString](../../atl-mfc-shared/reference/cstringt-class.md))|
|`dbGUID`|16|Identificatore univoco globale/identificatore univoco universale utilizzato con le chiamate di procedura remota.|

*m_lAttributes*<br/>
Specifica le caratteristiche di un oggetto campo contenuto in un oggetto tabledef, recordset, querydef o index. Il valore restituito può essere una somma di queste costanti, creata con l'operatore OR bit per bit** (&#124;**) di C:

- `dbFixedField`La dimensione del campo è fissa (impostazione predefinita per i campi numerici).

- `dbVariableField`La dimensione del campo è variabile (solo campi di testo).

- `dbAutoIncrField`Il valore del campo per i nuovi record viene incrementato automaticamente in un valore long integer univoco che non può essere modificato. Supportato solo per le tabelle di database Microsoft Jet.

- `dbUpdatableField`Il valore del campo può essere modificato.

- `dbDescending`Il campo viene ordinato in ordine decrescente (Sezione ( - A o 100 - 0) (si applica solo a un oggetto campo in un oggetto Fields di un oggetto indice; in MFC, gli oggetti indice sono essi stessi contenuti in oggetti tabledef). Se si oma questa costante, il campo viene ordinato in ordine crescente (A - o 0 - 100) (impostazione predefinita).

Quando si controlla l'impostazione di questa proprietà, è possibile**&** utilizzare l'operatore AND bit per bit ( ) per verificare la presenza di un attributo specifico. Quando si impostano più attributi, è possibile combinarli combinando le costanti appropriate con l'operatore OR bit per bit (**&#124;**). Per informazioni dettagliate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.

*m_nOrdinalPosition*<br/>
Valore che specifica l'ordine numerico in cui si desidera visualizzare un campo rappresentato da un oggetto campo DAO rispetto ad altri campi. È possibile impostare questa proprietà con [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield). Per informazioni dettagliate, vedere l'argomento "Proprietà OrdinalPosition" nella Guida di DAO.

*m_bRequired*<br/>
Indica se un oggetto campo DAO richiede un valore non Null. Se questa proprietà è TRUE, il campo non consente un valore Null. Se Obbligatorio è impostato su FALSE, il campo può contenere valori Null e valori che soddisfano le condizioni specificate dalle impostazioni delle proprietà Allow-eroLength e ValidationRule. Per informazioni dettagliate, vedere l'argomento "Proprietà obbligatoria" nella Guida in linea di DAO. È possibile impostare questa proprietà per un tabledef con [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_bAllowZeroLength*<br/>
Indica se una stringa vuota ("") è un valore valido di un oggetto campo DAO con un tipo di dati Text o Memo. Se questa proprietà è TRUE, una stringa vuota è un valore valido. È possibile impostare questa proprietà su FALSE per assicurarsi che non sia possibile utilizzare una stringa vuota per impostare il valore di un campo. Per informazioni dettagliate, vedere l'argomento "Proprietà Allow'eroLength" nella Guida in linea di DAO. È possibile impostare questa proprietà per un tabledef con [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_lCollatingOrder*<br/>
Specifica la sequenza dell'ordinamento nel testo per il confronto o l'ordinamento delle stringhe. Per informazioni dettagliate, vedere l'argomento "Personalizzazione delle impostazioni del Registro di sistema di Windows per l'accesso ai dati" nella Guida in linea di DAO. Per un elenco dei valori possibili `m_lCollatingOrder` restituiti, vedere il membro del [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) struttura. È possibile impostare questa proprietà per un tabledef con [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strForeignName*<br/>
Valore che, in una relazione, specifica il nome dell'oggetto campo DAO in una tabella esterna che corrisponde a un campo in una tabella primaria. Per informazioni dettagliate, vedere l'argomento "Proprietà ForeignName" nella Guida di DAO.

*m_strSourceField*<br/>
Indica il nome del campo che è l'origine originale dei dati per un oggetto campo DAO contenuto in un oggetto tabledef, recordset o querydef. Questa proprietà indica il nome del campo originale associato a un oggetto campo. Ad esempio, è possibile utilizzare questa proprietà per determinare l'origine originale dei dati in un campo di query il cui nome non è correlato al nome del campo nella tabella sottostante. Per informazioni dettagliate, vedere l'argomento "SourceField, SourceTable Properties" nella Guida in linea di DAO. È possibile impostare questa proprietà per un tabledef con [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strSourceTable*<br/>
Indica il nome della tabella che è l'origine originale dei dati per un oggetto campo DAO contenuto in un oggetto tabledef, recordset o querydef. Questa proprietà indica il nome della tabella originale associata a un oggetto campo. Ad esempio, è possibile utilizzare questa proprietà per determinare l'origine originale dei dati in un campo di query il cui nome non è correlato al nome del campo nella tabella sottostante. Per informazioni dettagliate, vedere l'argomento "SourceField, SourceTable Properties" nella Guida in linea di DAO. È possibile impostare questa proprietà per un tabledef con [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strValidationRule*<br/>
Valore che convalida i dati in un campo quando viene modificato o aggiunto a una tabella. Per informazioni dettagliate, vedere l'argomento "Proprietà ValidationRule" nella Guida in linea di DAO. È possibile impostare questa proprietà per un tabledef con [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

Per informazioni correlate su tabledefs, vedere il `m_strValidationRule` membro del [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) struttura.

*m_strValidationText*<br/>
Valore che specifica il testo del messaggio visualizzato dall'applicazione se il valore di un oggetto campo DAO non soddisfa la regola di convalida specificata dall'impostazione della proprietà ValidationRule. Per informazioni dettagliate, vedere l'argomento "Proprietà ValidationText" nella Guida in linea di DAO. È possibile impostare questa proprietà per un tabledef con [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strDefaultValue*<br/>
Valore predefinito di un oggetto campo DAO. Quando viene creato un nuovo record, l'impostazione della proprietà DefaultValue viene immessa automaticamente come valore per il campo. Per informazioni dettagliate, vedere l'argomento "Proprietà DefaultValue" nella Guida in linea di DAO. È possibile impostare questa proprietà per un tabledef con [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

## <a name="remarks"></a>Osservazioni

I riferimenti a Primary, Secondary e All above indicano `GetFieldInfo` come le informazioni vengono restituite dalla funzione membro nelle classi [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getfieldinfo), [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md#getfieldinfo)e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getfieldinfo).

Gli oggetti campo non sono rappresentati da una classe MFC. Al contrario, gli oggetti DAO sottostanti oggetti MFC delle classi seguenti contengono insiemi di oggetti campo: [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)e [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). Queste classi forniscono funzioni membro per accedere ad alcuni singoli elementi di `CDaoFieldInfo` informazioni di `GetFieldInfo` campo oppure è possibile accedervi tutti contemporaneamente con un oggetto chiamando la funzione membro dell'oggetto contenitore.

Oltre all'utilizzo per l'esame `CDaoFieldInfo` delle proprietà dell'oggetto, è anche possibile utilizzare per costruire un parametro di input per la creazione di nuovi campi in un tabledef. Sono disponibili opzioni più semplici per questa attività, ma se si desidera un controllo più preciso, `CDaoFieldInfo` è possibile utilizzare la versione di [CDaoTableDef::CreateField](../../mfc/reference/cdaotabledef-class.md#createfield) che accetta un parametro.

Le informazioni `GetFieldInfo` recuperate dalla funzione membro (della classe che `CDaoFieldInfo` contiene il campo) vengono archiviate in una struttura. Chiamare `GetFieldInfo` la funzione membro dell'oggetto contenitore nella cui raccolta Fields viene archiviato l'oggetto campo. `CDaoFieldInfo`definisce anche `Dump` una funzione membro nelle build di debug. È possibile `Dump` utilizzare per eseguire `CDaoFieldInfo` il dump del contenuto di un oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoTableDef::GetFieldInfo](../../mfc/reference/cdaotabledef-class.md#getfieldinfo)<br/>
[CDaoRecordset::GetFieldInfo](../../mfc/reference/cdaorecordset-class.md#getfieldinfo)<br/>
[CDaoQueryDef::GetFieldInfo](../../mfc/reference/cdaoquerydef-class.md#getfieldinfo)
