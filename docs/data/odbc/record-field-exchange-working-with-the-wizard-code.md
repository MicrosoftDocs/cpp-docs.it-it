---
title: 'Campi di record: Utilizzo del codice della procedura guidata | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7d4f817ebfc3e6bb72865b4fc71fd5c5ebe5f671
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="record-field-exchange-working-with-the-wizard-code"></a>Trasferimento di campi di record: utilizzo del codice della creazione guidata
In questo argomento viene illustrato il codice che la creazione guidata applicazione MFC e **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) per supportare RFX e modalità di modifica di tale codice.  
  
> [!NOTE]
>  Questo argomento si applica alle classi derivate da `CRecordset` in quale riga bulk recupero non è stato implementato. Se si utilizza il recupero di massa di righe, viene implementata exchange di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Quando si crea una classe recordset con la creazione guidata applicazione MFC o **Aggiungi classe**, la procedura guidata scrive i seguenti elementi relativi RFX per utente, in base all'origine dati, tabella e colonna scelte effettuate nella procedura guidata:  
  
-   Dichiarazioni di membri dati di campo del recordset della classe recordset  
  
-   Un override di `CRecordset::DoFieldExchange`  
  
-   Inizializzazione dei membri di dati di campo recordset nel costruttore della classe recordset  
  
##  <a name="_core_the_field_data_member_declarations"></a> Dichiarazioni dei membri di campo dati  
 Le procedure guidate di scrivono una dichiarazione di classe recordset in un file con estensione h simile al seguente per la classe `CSections`:  
  
```  
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
  
 Se si aggiungono membri dati di parametro o i nuovi membri dati di campo che associano manualmente, aggiungerli dopo quelli generati dalla procedura guidata.  
  
 Inoltre, si noti che la procedura guidata esegue l'override di `DoFieldExchange` funzione membro di classe `CRecordset`.  
  
##  <a name="_core_the_dofieldexchange_override"></a> DoFieldExchange Override  

 [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) rappresenta il fulcro di RFX. Il framework chiama `DoFieldExchange` ogni volta che è necessario spostare i dati dall'origine dati al recordset o dal recordset all'origine dati. `DoFieldExchange` inoltre supporta il recupero di informazioni sulle campo membri di dati tramite il [IsFieldDirty](../../mfc/reference/crecordset-class.md#isfielddirty) e [IsFieldNull](../../mfc/reference/crecordset-class.md#isfieldnull) funzioni membro.  
  
 Nell'esempio `DoFieldExchange` override è per la `CSections` classe. La procedura guidata scrive la funzione nel file con estensione cpp per la classe recordset.  
  
```  
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
  
 Tenere presente le seguenti funzionalità principali della funzione:  
  
-   In questa sezione della funzione viene chiamata il mapping dei campi.  
  
-   Una chiamata a `CFieldExchange::SetFieldType`, tramite il `pFX` puntatore. Questa chiamata specifica che tutte le funzioni RFX viene chiamato alla fine di `DoFieldExchange` o la chiamata successiva a `SetFieldType` sono colonne di output. Per ulteriori informazioni, vedere [CFieldExchange::](../../mfc/reference/cfieldexchange-class.md#setfieldtype).  
  
-   Più chiamate al `RFX_Text` funzione globale, ovvero uno per ogni campo dati membro (tutti i quali è `CString` variabili nell'esempio). Queste chiamate specificano la relazione tra un nome di colonna nell'origine dati e un membro dati di campo. Le funzioni RFX di eseguono il trasferimento dei dati effettivi. La libreria di classi fornisce funzioni RFX per tutti i tipi di dati comuni. Per ulteriori informazioni sulle funzioni RFX, vedere [campi di record: utilizzo delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md).  
  
    > [!NOTE]
    >  L'ordine delle colonne del set di risultati deve corrispondere all'ordine delle chiamate alle funzioni RFX in `DoFieldExchange`.  
  
-   Il `pFX` puntatore a un [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto passato dal framework quando viene chiamata `DoFieldExchange`. Il `CFieldExchange` oggetto specifica l'operazione che `DoFieldExchange` consiste nell'eseguire, la direzione del trasferimento e altre informazioni sul contesto.  
  
##  <a name="_core_the_recordset_constructor"></a> Costruttore del recordset  
 Il costruttore del recordset creato dalla procedura guidata contiene due elementi relativi a RFX:  
  
-   Inizializzazione di una per ogni membro dati di campo  
  
-   Un'inizializzazione per il [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) membro dati, che contiene il numero di membri dati di campo  
  
 Il costruttore per il `CSections` esempio recordset è simile al seguente:  
  
```  
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
>  Se si aggiungono membri dati di campo manualmente, come si farebbe se si associano nuove colonne in modo dinamico, è necessario incrementare `m_nFields`. A tale scopo, aggiungere un'altra riga di codice, ad esempio:  
  
```  
m_nFields += 3;  
```  

 Si tratta del codice per l'aggiunta di tre nuovi campi. Se si aggiunge un membro dati di parametro, è necessario inizializzare il [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams) membro dati, che contiene il numero di membri dati di parametro. Inserire il `m_nParams` inizializzazione all'esterno delle parentesi.  

  
## <a name="see-also"></a>Vedere anche  
 [Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)