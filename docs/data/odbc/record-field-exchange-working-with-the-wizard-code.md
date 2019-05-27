---
title: 'Trasferimento di campi di record: uso con il codice di procedure guidate'
ms.date: 05/09/2019
helpviewer_keywords:
- DoFieldExchange method, overriding
- Unicode, with database classes
- field data members, declaring
- RFX (ODBC), wizard code
- RFX (ODBC), implementing
- field data members
- ODBC, RFX
- m_nParams data member, initializing
- m_nFields data member
- m_nParams data member
- overriding, DoFieldExchange
- m_nFields data member, initializing
ms.assetid: f00d882a-ff1b-4a75-9717-98d8762bb237
ms.openlocfilehash: 81b26e61f64623d1e3da5ed207d0e8e43350229d
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65707996"
---
# <a name="record-field-exchange-working-with-the-wizard-code"></a>Trasferimento di campi di record: uso con il codice di procedure guidate

> [!NOTE] 
> La Creazione guidata consumer ODBC MFC non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile creare manualmente un consumer.

In questo argomento viene illustrato il codice scritto dalla Creazione guidata applicazione MFC e da **Aggiungi classe** (come descritto in [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) per supportare RFX e come è possibile modificare tale codice.

> [!NOTE]
>  Questo argomento si applica alle classi derivate da `CRecordset` in cui non è stato implementato il recupero di massa di righe. Se si usa il recupero di massa di righe, viene implementato il trasferimento di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per informazioni sulle differenze, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Quando si crea una classe recordset con la Creazione guidata applicazione MFC o **Aggiungi classe**, la procedura guidata scrive automaticamente gli elementi seguenti correlati a RFX, in base alle scelte effettuate nel corso della procedura guidata per l'origine dati, le tabelle e le colonne:

- Dichiarazioni dei membri dati di campo del recordset nella classe recordset

- Override di `CRecordset::DoFieldExchange`

- Inizializzazione dei membri dati di campo del recordset nel costruttore della classe recordset

##  <a name="_core_the_field_data_member_declarations"></a> Dichiarazioni dei membri dati di campo

Le procedure guidate scrivono una dichiarazione di classe recordset in un file con estensione h simile al seguente per la classe `CSections`:

```cpp
class CSections : public CRecordset
{
public:
   CSections(CDatabase* pDatabase = NULL);
   DECLARE_DYNAMIC(CSections)

// Field/Param Data
   CString   m_strCourseID;
   CString   m_strInstructorID;
   CString   m_strRoomNo;
   CString   m_strSchedule;
   CString   m_strSectionNo;

// Overrides
   // Wizard generated virtual function overrides
   protected:
   virtual CString GetDefaultConnect();  // Default connection string
   virtual CString GetDefaultSQL();      // Default SQL for Recordset
   virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support

// Implementation
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

};
```

Se si aggiungono membri dati di parametro o nuovi membri dati di campo associati autonomamente, aggiungerli dopo quelli generati dalla procedura guidata.

Si noti inoltre che la procedura guidata esegue l'override della funzione membro `DoFieldExchange` della classe `CRecordset`.

##  <a name="_core_the_dofieldexchange_override"></a> Override di DoFieldExchange

[DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) è l'elemento centrale di RFX. Il framework chiama `DoFieldExchange` ogni volta è necessario spostare dati dall'origine dati al recordset o dal recordset all'origine dati. `DoFieldExchange` supporta anche il recupero di informazioni sui membri dati di campo tramite le funzioni membro [IsFieldDirty](../../mfc/reference/crecordset-class.md#isfielddirty) e [IsFieldNull](../../mfc/reference/crecordset-class.md#isfieldnull).

L'override `DoFieldExchange` seguente è usato per la classe `CSections`. La procedura guidata scrive la funzione nel file con estensione cpp per la classe recordset.

```cpp
void CSections::DoFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputColumn);
   RFX_Text(pFX, "CourseID", m_strCourseID);
   RFX_Text(pFX, "InstructorID", m_strInstructorID);
   RFX_Text(pFX, "RoomNo", m_strRoomNo);
   RFX_Text(pFX, "Schedule", m_strSchedule);
   RFX_Text(pFX, "SectionNo", m_strSectionNo);
}
```

Si notino le funzionalità seguenti della funzione:

- Questa sezione della funzione viene denominata mapping dei campi.

- Una chiamata a `CFieldExchange::SetFieldType`, tramite il puntatore `pFX`. Questa chiamata specifica che tutte le chiamate di funzione RFX fino alla fine di `DoFieldExchange` o alla chiamata successiva a `SetFieldType` sono colonne di output. Per altre informazioni, vedere [CFieldExchange::SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype).

- Diverse chiamate alla funzione globale `RFX_Text`, una per ogni membro dati di campo (tutte le quali sono variabili `CString` nell'esempio). Queste chiamate specificano la relazione tra un nome di colonna nell'origine dati e un membro dati di campo. Le funzioni RFX eseguono il trasferimento dei dati effettivo. La libreria di classi fornisce le funzioni RFX per tutti i tipi di dati comuni. Per altre informazioni sulle funzioni RFX, vedere [Trasferimento di campi di record: uso delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md).

    > [!NOTE]
    >  L'ordine delle colonne nel set di risultati deve corrispondere all'ordine delle chiamate di funzione RFX in `DoFieldExchange`.

- Il puntatore `pFX` a un oggetto [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) passato dal framework quando chiama `DoFieldExchange`. L'oggetto `CFieldExchange` specifica l'operazione che `DoFieldExchange` deve eseguire, la direzione del trasferimento e altre informazioni di contesto.

##  <a name="_core_the_recordset_constructor"></a> Costruttore del recordset

Il costruttore del recordset creato dalle procedure guidate contiene due elementi correlati a RFX:

- Un'inizializzazione per ogni membro dati di campo

- Un'inizializzazione per il membro dati [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields), che contiene il numero di membri dati di campo

Il costruttore per il recordset di esempio `CSections` è simile al seguente:

```cpp
CSections::CSections(CDatabase* pdb)
   : CRecordset(pdb)
{
   m_strCourseID = "";
   m_strInstructorID = "";
   m_strRoomNo = "";
   m_strSchedule = "";
   m_strSectionNo = "";
   m_nFields = 5;
}
```

> [!NOTE]
>  Se si aggiungono membri dati di campo manualmente, com'è necessario per associare dinamicamente nuove colonne, è necessario incrementare `m_nFields`. A tale scopo, aggiungere un'altra riga di codice come:

```cpp
m_nFields += 3;
```

Questo è il codice per l'aggiunta di tre nuovi campi. Se si aggiungono membri dati di parametro, è necessario inizializzare il membro dati [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams), che contiene il numero di membri dati di parametro. Posizionare l'inizializzazione `m_nParams` all'esterno delle parentesi.

## <a name="see-also"></a>Vedere anche

[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)