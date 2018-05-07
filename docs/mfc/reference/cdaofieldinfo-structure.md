---
title: Struttura CDaoFieldInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoFieldInfo
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), Fields collection
- CDaoFieldInfo structure [MFC]
ms.assetid: 91b13e3f-bdb8-440c-86fc-ba4181ea0182
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6d08dd9d877d8872c5c8a930e84ae0496c745709
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cdaofieldinfo-structure"></a>Struttura CDaoFieldInfo
Il `CDaoFieldInfo` struttura contiene informazioni su un oggetto di campo definito per l'accesso oggetti DAO (data).  
  
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
 `m_strName`  
 Identifica in modo univoco l'oggetto del campo. Per informazioni dettagliate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 `m_nType`  
 Un valore che indica il tipo di dati del campo. Per informazioni dettagliate, vedere l'argomento "Proprietà di tipo" nella Guida di DAO. Il valore di questa proprietà può essere uno dei valori seguenti:  
  
- **dbBoolean** Sì/No, uguale a **TRUE**/**FALSE**  
  
- **dbByte** Byte  
  
- **dbInteger** breve  
  
- **dbLong** lungo  
  
- **dbCurrency** valuta; classe MFC vedere [COleCurrency](../../mfc/reference/colecurrency-class.md)  
  
- **dbSingle** singolo  
  
- **dbDouble** Double  
  
- **dbDate** data/ora; classe MFC vedere [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)  
  
- **dbText** testo; classe MFC vedere [CString](../../atl-mfc-shared/reference/cstringt-class.md)  
  
- **dbLongBinary** binario lungo (oggetto OLE); è possibile utilizzare la classe MFC [CByteArray](../../mfc/reference/cbytearray-class.md) invece di classe `CLongBinary` come `CByteArray` è più completo e più facile da utilizzare.  
  
- **dbMemo** Memo; classe MFC vedere `CString`  
  
- **dbGUID** un identificatore univoco globale identificatore/universalmente univoco utilizzato con chiamate di procedura remota. Per ulteriori informazioni, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.  
  
> [!NOTE]
>  Non utilizzare tipi di dati stringa per i dati binari. In questo modo i dati per il passaggio attraverso il livello di conversione Unicode/ANSI, risultante nella conversione overhead maggiore e possibilmente imprevista.  
  
 *m_lSize*  
 Un valore che indica la dimensione massima, in byte, di un oggetto DAO campo contiene testo o dimensione fissa di un oggetto di campo che contiene testo o valori numerici. Per informazioni dettagliate, vedere l'argomento "Proprietà Size" nella Guida di DAO. Dimensioni possono essere uno dei valori seguenti:  
  
|Tipo|Dimensioni (byte)|Descrizione|  
|----------|--------------------|-----------------|  
|**dbBoolean**|1 byte|Sì/No (uguale a True/False)|  
|**dbByte**|1|Byte|  
|**dbInteger**|2|Integer|  
|**dbLong**|4|Long|  
|**dbCurrency**|8|Valuta ([COleCurrency](../../mfc/reference/colecurrency-class.md))|  
|**dbSingle**|4|Single|  
|**dbDouble**|8|Double|  
|**dbDate**|8|Data/ora ([COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md))|  
|**dbText**|1 - 255|Testo ([CString](../../atl-mfc-shared/reference/cstringt-class.md))|  
|**dbLongBinary**|0|Binario lungo (oggetto OLE. [CByteArray](../../mfc/reference/cbytearray-class.md); utilizzare invece di `CLongBinary`)|  
|**dbMemo**|0|Memo ([CString](../../atl-mfc-shared/reference/cstringt-class.md))|  
|**dbGUID**|16|Un identificatore univoco globale o universale univoco utilizzato con chiamate di procedura remota.|  
  
 `m_lAttributes`  
 Specifica le caratteristiche di un oggetto di campi contenuti in un oggetto tabledef, recordset, querydef o oggetto index. Il valore restituito può essere una somma di queste costanti, creato con C++ OR bit per bit (**&#124;**) (operatore):  
  
- **dbFixedField** le dimensioni del campo sono fissa (impostazione predefinita per i campi numerici).  
  
- **dbVariableField** le dimensioni del campo sono variabile (solo per i campi di testo).  
  
- **dbAutoIncrField** il valore del campo per i nuovi record viene incrementato automaticamente a un long integer univoco che non può essere modificato. Supportato solo per le tabelle di database Microsoft Jet.  
  
- **dbUpdatableField** può essere modificato il valore del campo.  
  
- **dbDescending** il campo viene ordinato in ordine decrescente (a-Z o da 0 a 100) ordine (si applica solo a un oggetto di campo in una raccolta di campi di un oggetto indice, in MFC, indice autonomamente gli oggetti sono contenuti negli oggetti tabledef). Se si omette questa costante, il campo viene ordinato in ordine crescente (A - Z o da 0 - 100) ordine (impostazione predefinita).  
  
 Quando si seleziona l'impostazione di questa proprietà, è possibile utilizzare C++ bit per bit- e (operatore) (**&**) per verificare la presenza di un attributo specifico. Quando si impostano più attributi, è possibile combinarle combinando le costanti appropriate con bitwise-OR (**&#124;**) (operatore). Per informazioni dettagliate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
 *m_nOrdinalPosition*  
 Un valore che specifica l'ordine numerico in cui si desidera un campo rappresentato da un oggetto DAO di campi da visualizzare relativo altri campi. È possibile impostare questa proprietà con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield). Per informazioni dettagliate, vedere l'argomento "Proprietà OrdinalPosition" nella Guida di DAO.  
  
 `m_bRequired`  
 Indica se un oggetto di campo DAO richiede un valore non Null. Se questa proprietà è **TRUE**, il campo non consente un valore Null. Se necessario è impostata su **FALSE**, il campo può contenere valori Null, nonché i valori che soddisfano le condizioni specificate dalle impostazioni delle proprietà Consenti lunghezza zero e ValidationRule. Per informazioni dettagliate, vedere l'argomento "Proprietà richiesto" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto tabledef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).  
  
 *m_bAllowZeroLength*  
 Indica se una stringa vuota ("") è un valore valido di un oggetto di campo DAO con un tipo di dati di testo o Memo. Se questa proprietà è **TRUE**, una stringa vuota è un valore valido. È possibile impostare questa proprietà **FALSE** per assicurarsi di impostare il valore di un campo non è possibile utilizzare una stringa vuota. Per informazioni dettagliate, vedere l'argomento "Proprietà Consenti lunghezza zero" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto tabledef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).  
  
 `m_lCollatingOrder`  
 Specifica la sequenza di ordinamento nel testo di confronto di stringhe o di ordinamento. Per informazioni dettagliate, vedere l'argomento "Personalizzazione di Windows del Registro di sistema le impostazioni per l'accesso dati" nella Guida di DAO. Per un elenco dei possibili valori restituiti, vedere il **m_lCollatingOrder** appartenente il [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md) struttura. È possibile impostare questa proprietà per un oggetto tabledef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).  
  
 `m_strForeignName`  
 Un valore che, in una relazione, specifica il nome dell'oggetto DAO campo in una tabella esterna che corrisponde a un campo in una tabella primaria. Per informazioni dettagliate, vedere l'argomento "Proprietà ForeignName" nella Guida di DAO.  
  
 *m_strSourceField*  
 Indica il nome del campo che rappresenta l'origine dei dati per un oggetto di campo DAO contenuto da recordset, tabledef o querydef oggetto originale. Questa proprietà indica il nome del campo originale associato a un oggetto di campo. Ad esempio, è possibile utilizzare questa proprietà per determinare l'origine dei dati in un campo di query il cui nome è correlato al nome del campo nella tabella sottostante. Per informazioni dettagliate, vedere l'argomento "SourceField, proprietà SourceTable" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto tabledef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).  
  
 *m_strSourceTable*  
 Indica il nome della tabella che rappresenta l'origine dei dati per un oggetto di campo DAO contenuto da recordset, tabledef o querydef oggetto originale. Questa proprietà indica il nome della tabella originale associato a un oggetto di campo. Ad esempio, è possibile utilizzare questa proprietà per determinare l'origine dei dati in un campo di query il cui nome è correlato al nome del campo nella tabella sottostante. Per informazioni dettagliate, vedere l'argomento "SourceField, proprietà SourceTable" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto tabledef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).  
  
 `m_strValidationRule`  
 Un valore che convalida i dati in un campo che viene modificato o aggiunto a una tabella. Per informazioni dettagliate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto tabledef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).  
  
 Per informazioni correlate tabledefs, vedere il **m_strValidationRule** appartenente il [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md) struttura.  
  
 `m_strValidationText`  
 Un valore che specifica il testo del messaggio che l'applicazione viene visualizzato se il valore di un oggetto DAO di campo non soddisfa la regola di convalida specificata dall'impostazione della proprietà ValidationRule. Per informazioni dettagliate, vedere l'argomento "Proprietà di messaggio di errore" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto tabledef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).  
  
 *m_strDefaultValue*  
 Il valore predefinito di un oggetto field DAO. Quando viene creato un nuovo record, l'impostazione della proprietà DefaultValue viene immesso automaticamente come valore per il campo. Per informazioni dettagliate, vedere l'argomento "Proprietà DefaultValue" nella Guida di DAO. È possibile impostare questa proprietà per un oggetto tabledef con [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield).  
  
## <a name="remarks"></a>Note  
 I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il `GetFieldInfo` funzione membro nelle classi [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getfieldinfo), [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md#getfieldinfo), e [ CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getfieldinfo).  
  
 Gli oggetti campo non sono rappresentati da una classe MFC. Al contrario, gli oggetti DAO MFC oggetti delle classi seguenti sottostanti contengono raccolte di oggetti campo: [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md), e [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md). Queste classi forniscono le funzioni membro per alcuni singoli elementi di informazioni sui campi di accesso oppure è possibile accedervi in una sola volta con un `CDaoFieldInfo` oggetto chiamando il `GetFieldInfo` funzione membro dell'oggetto contenitore.  
  
 Oltre all'utilizzo per l'esame delle proprietà dell'oggetto, è inoltre possibile utilizzare `CDaoFieldInfo` per costruire un parametro di input per la creazione di nuovi campi in un oggetto tabledef. Per questa attività sono disponibili opzioni più semplice, ma se si desidera un maggiore controllo, è possibile utilizzare la versione di [CDaoTableDef:: CreateField](../../mfc/reference/cdaotabledef-class.md#createfield) che accetta un `CDaoFieldInfo` parametro.  
  
 Le informazioni recuperate dal `GetFieldInfo` le funzioni membro (della classe che contiene il campo) vengono archiviate un `CDaoFieldInfo` struttura. Chiamare il `GetFieldInfo` funzione membro dell'oggetto contenitore nella raccolta i cui campi è archiviato l'oggetto di campo. `CDaoFieldInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoFieldInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef::GetFieldInfo](../../mfc/reference/cdaotabledef-class.md#getfieldinfo)   
 [CDaoRecordset::GetFieldInfo](../../mfc/reference/cdaorecordset-class.md#getfieldinfo)   
 [CDaoQueryDef::GetFieldInfo](../../mfc/reference/cdaoquerydef-class.md#getfieldinfo)

