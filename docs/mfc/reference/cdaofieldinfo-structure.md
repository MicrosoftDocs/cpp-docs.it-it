---
title: Struttura CDaoFieldInfo
ms.date: 09/17/2019
f1_keywords:
- CDaoFieldInfo
helpviewer_keywords:
- DAO (Data Access Objects), Fields collection
- CDaoFieldInfo structure [MFC]
ms.assetid: 91b13e3f-bdb8-440c-86fc-ba4181ea0182
ms.openlocfilehash: e2638ac908e4e286530301bc913173e87008df47
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303699"
---
# <a name="cdaofieldinfo-structure"></a>Struttura CDaoFieldInfo

La struttura `CDaoFieldInfo` contiene informazioni su un oggetto Field definito per DAO (Data Access Objects).

DAO è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

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
Assegna un nome univoco all'oggetto campo. Per informazioni dettagliate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

*m_nType*<br/>
Valore che indica il tipo di dati del campo. Per informazioni dettagliate, vedere l'argomento "proprietà Type" nella Guida di DAO. Il valore di questa proprietà può essere uno dei seguenti:

- `dbBoolean` Sì/No, uguale a TRUE/FALSE

- Byte `dbByte`

- `dbInteger` Short

- `dbLong` Long

- `dbCurrency` valuta; vedere la classe MFC [COleCurrency](../../mfc/reference/colecurrency-class.md)

- `dbSingle` singola

- `dbDouble` Double

- Data/ora `dbDate`; vedere [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) della classe MFC

- Testo `dbText`; vedere classe MFC [CString](../../atl-mfc-shared/reference/cstringt-class.md)

- `dbLongBinary` Long Binary (oggetto OLE); potrebbe essere necessario utilizzare la classe MFC [CByteArray](../../mfc/reference/cbytearray-class.md) anziché la classe `CLongBinary` come `CByteArray` è più ricca e più semplice da utilizzare.

- `dbMemo` memo; vedere la classe MFC `CString`

- `dbGUID` un identificatore univoco globale/identificatore univoco universale utilizzato con le chiamate di procedura remota. Per ulteriori informazioni, vedere l'argomento relativo alla proprietà Type nella Guida di DAO.

> [!NOTE]
>  Non usare tipi di dati stringa per dati binari. In questo modo i dati passano attraverso il livello di conversione Unicode/ANSI, causando un aumento del sovraccarico e probabilmente una traduzione imprevista.

*m_lSize*<br/>
Valore che indica la dimensione massima, in byte, di un oggetto campo DAO contenente testo o la dimensione fissa di un oggetto campo che contiene valori di testo o numerici. Per informazioni dettagliate, vedere l'argomento relativo alla proprietà Size nella Guida di DAO. Size può essere uno dei valori seguenti:

|Type|Dimensione (byte)|Descrizione|
|----------|--------------------|-----------------|
|`dbBoolean`|1 byte|Sì/No (uguale a true/false)|
|`dbByte`|1|Byte|
|`dbInteger`|2|Integer|
|`dbLong`|4|Long|
|`dbCurrency`|8|Valuta ([COleCurrency](../../mfc/reference/colecurrency-class.md))|
|`dbSingle`|4|Single|
|`dbDouble`|8|Double|
|`dbDate`|8|Data/ora ([COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md))|
|`dbText`|1 - 255|Testo ([CString](../../atl-mfc-shared/reference/cstringt-class.md))|
|`dbLongBinary`|0|Long Binary (oggetto OLE) [CByteArray](../../mfc/reference/cbytearray-class.md); usare anziché `CLongBinary`)|
|`dbMemo`|0|Memo ([CString](../../atl-mfc-shared/reference/cstringt-class.md))|
|`dbGUID`|16|Identificatore univoco globale/identificatore univoco universale utilizzato con le chiamate di procedura remota.|

*m_lAttributes*<br/>
Specifica le caratteristiche di un oggetto campo contenuto da un oggetto TableDef, recordset, QueryDef o indice. Il valore restituito può essere una somma di queste costanti, create con l' C++ operatore OR bit per bit **&#124;** ():

- `dbFixedField` le dimensioni del campo sono fisse (impostazione predefinita per i campi numerici).

- `dbVariableField` le dimensioni del campo sono variabili (solo campi di testo).

- `dbAutoIncrField` il valore del campo per i nuovi record viene incrementato automaticamente a un intero lungo univoco che non può essere modificato. Supportato solo per le tabelle di database Microsoft Jet.

- `dbUpdatableField` il valore del campo può essere modificato.

- `dbDescending` il campo viene ordinato in ordine decrescente (Z-A o 100-0) (si applica solo a un oggetto campo in una raccolta Fields di un oggetto index; in MFC, gli oggetti index sono essi stessi inclusi negli oggetti TableDef). Se si omette questa costante, il campo viene ordinato in ordine crescente (A-Z o 0-100) (impostazione predefinita).

Quando si controlla l'impostazione di questa proprietà, è possibile utilizzare C++ l'operatore and bit per bit ( **&** ) per eseguire il test di un attributo specifico. Quando si impostano più attributi, è possibile combinarli combinando le costanti appropriate con l'operatore OR **&#124;** bit per bit (). Per informazioni dettagliate, vedere l'argomento relativo alla proprietà Attributes (attributi) nella Guida di DAO.

*m_nOrdinalPosition*<br/>
Valore che specifica l'ordine numerico in cui si desidera visualizzare un campo rappresentato da un oggetto campo DAO rispetto ad altri campi. È possibile impostare questa proprietà con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield). Per informazioni dettagliate, vedere l'argomento "proprietà OrdinalPosition" nella Guida di DAO.

*m_bRequired*<br/>
Indica se un oggetto campo DAO richiede un valore non null. Se questa proprietà è TRUE, il campo non consente un valore null. Se required è impostato su FALSE, il campo può contenere valori null, oltre a valori che soddisfano le condizioni specificate dalle impostazioni della proprietà AllowZeroLength e ValidationRule. Per informazioni dettagliate, vedere l'argomento "proprietà obbligatoria" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto TableDef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_bAllowZeroLength*<br/>
Indica se una stringa vuota ("") è un valore valido di un oggetto campo DAO con un tipo di dati text o Memo. Se questa proprietà è TRUE, una stringa vuota è un valore valido. È possibile impostare questa proprietà su FALSE per assicurarsi che non sia possibile utilizzare una stringa vuota per impostare il valore di un campo. Per informazioni dettagliate, vedere l'argomento "proprietà AllowZeroLength" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto TableDef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_lCollatingOrder*<br/>
Specifica la sequenza di ordinamento nel testo per il confronto o l'ordinamento delle stringhe. Per informazioni dettagliate, vedere l'argomento "personalizzazione delle impostazioni del registro di sistema di Windows per l'accesso ai dati" nella Guida di DAO. Per un elenco dei valori possibili restituiti, vedere il membro `m_lCollatingOrder` della struttura [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) . È possibile impostare questa proprietà per un oggetto TableDef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strForeignName*<br/>
Valore che, in una relazione, specifica il nome dell'oggetto campo DAO in una tabella esterna che corrisponde a un campo di una tabella primaria. Per informazioni dettagliate, vedere l'argomento "proprietà ForeignName" nella Guida di DAO.

*m_strSourceField*<br/>
Indica il nome del campo che rappresenta l'origine dei dati originale per un oggetto campo DAO contenuto in un oggetto TableDef, Recordset o oggetto QueryDef. Questa proprietà indica il nome del campo originale associato a un oggetto campo. Ad esempio, è possibile usare questa proprietà per determinare l'origine dei dati in un campo di query il cui nome non è correlato al nome del campo nella tabella sottostante. Per informazioni dettagliate, vedere l'argomento "campoOrigine, proprietà SourceTable" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto TableDef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strSourceTable*<br/>
Indica il nome della tabella che rappresenta l'origine dei dati originale per un oggetto campo DAO contenuto in un oggetto TableDef, Recordset o oggetto QueryDef. Questa proprietà indica il nome della tabella originale associato a un oggetto campo. Ad esempio, è possibile usare questa proprietà per determinare l'origine dei dati in un campo di query il cui nome non è correlato al nome del campo nella tabella sottostante. Per informazioni dettagliate, vedere l'argomento "campoOrigine, proprietà SourceTable" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto TableDef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strValidationRule*<br/>
Valore che convalida i dati in un campo quando vengono modificati o aggiunti a una tabella. Per informazioni dettagliate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto TableDef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

Per informazioni correlate sugli oggetti TableDef, vedere il membro `m_strValidationRule` della struttura [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) .

*m_strValidationText*<br/>
Valore che specifica il testo del messaggio visualizzato dall'applicazione se il valore di un oggetto campo DAO non soddisfa la regola di convalida specificata dall'impostazione della proprietà ValidationRule. Per informazioni dettagliate, vedere l'argomento "proprietà ValidationText" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto TableDef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

*m_strDefaultValue*<br/>
Valore predefinito di un oggetto campo DAO. Quando viene creato un nuovo record, l'impostazione della proprietà DefaultValue viene immessa automaticamente come valore per il campo. Per informazioni dettagliate, vedere l'argomento "proprietà DefaultValue" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto TableDef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).

## <a name="remarks"></a>Note

I riferimenti a primary, Secondary e all sopra indicati indicano il modo in cui le informazioni vengono restituite dalla funzione membro `GetFieldInfo` nelle classi [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getfieldinfo), [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md#getfieldinfo)e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getfieldinfo).

Gli oggetti campo non sono rappresentati da una classe MFC. Gli oggetti DAO sottostanti oggetti MFC delle classi seguenti contengono invece raccolte di oggetti campo: [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)e [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). Queste classi forniscono funzioni membro per accedere ad alcuni singoli elementi di informazioni sui campi oppure è possibile accedervi contemporaneamente con un oggetto `CDaoFieldInfo` chiamando la funzione membro `GetFieldInfo` dell'oggetto contenitore.

Oltre al relativo utilizzo per l'analisi delle proprietà degli oggetti, è anche possibile usare `CDaoFieldInfo` per costruire un parametro di input per la creazione di nuovi campi in un oggetto TableDef. Per questa attività sono disponibili opzioni più semplici, ma se si vuole un controllo più preciso, è possibile usare la versione di [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield) che accetta un parametro `CDaoFieldInfo`.

Le informazioni recuperate dalla funzione membro `GetFieldInfo` (della classe che contiene il campo) vengono archiviate in una struttura di `CDaoFieldInfo`. Chiamare la funzione membro `GetFieldInfo` dell'oggetto contenitore nella cui raccolta Fields è archiviato l'oggetto Field. `CDaoFieldInfo` definisce anche una funzione membro `Dump` nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto `CDaoFieldInfo`.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoTableDef:: GetFieldInfo](../../mfc/reference/cdaotabledef-class.md#getfieldinfo)<br/>
[CDaoRecordset:: GetFieldInfo](../../mfc/reference/cdaorecordset-class.md#getfieldinfo)<br/>
[CDaoQueryDef:: GetFieldInfo](../../mfc/reference/cdaoquerydef-class.md#getfieldinfo)
