---
title: 'Trasferimento di campi di record: Utilizzo di codice della procedura guidata | Microsoft Docs'
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
ms.openlocfilehash: ee89644251122d97ea2e042270d2d965a56f47bd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46065426"
---
# <a name="record-field-exchange-working-with-the-wizard-code"></a>Trasferimento di campi di record: utilizzo del codice della creazione guidata

Questo argomento viene illustrato il codice che la creazione guidata applicazione MFC e **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) per supportare RFX e come è possibile modificare tale codice.  
  
> [!NOTE]
>  Questo argomento si applica alle classi derivate da `CRecordset` in quale riga bulk il recupero non è stato implementato. Se si usa il recupero di righe bulk, viene implementata exchange di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
Quando si crea una classe recordset con la creazione guidata applicazione MFC o **Aggiungi classe**, la procedura guidata scrive gli elementi seguenti correlati alla RFX per utente, in base all'origine dati, di tabella e colonna scelte effettuate nella procedura guidata:  
  
- Dichiarazioni di membri dati di campo del recordset della classe recordset  
  
- Un override di `CRecordset::DoFieldExchange`  
  
- Inizializzazione di membri dati di campo del recordset nel costruttore della classe recordset  
  
##  <a name="_core_the_field_data_member_declarations"></a> Dichiarazioni dei membri di campo dati  

Le procedure guidate di scrivono una dichiarazione di classe recordset in un file con estensione h simile al seguente per la classe `CSections`:  
  
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
  
Se si aggiungono nuovi membri dati di campo che si esegue l'associazione di se stessi o membri dati di parametro, aggiungerli dopo quelle generate dalla procedura guidata.  
  
Si noti anche che la procedura guidata esegue l'override di `DoFieldExchange` funzione membro di classe `CRecordset`.  
  
##  <a name="_core_the_dofieldexchange_override"></a> DoFieldExchange Override  

[DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) sono l'essenza di RFX. Il framework chiama `DoFieldExchange` ogni volta è necessario per spostare i dati dall'origine dati al recordset o dal recordset all'origine dati. `DoFieldExchange` inoltre supporta il recupero di informazioni sul campo i membri di dati tramite il [IsFieldDirty](../../mfc/reference/crecordset-class.md#isfielddirty) e [IsFieldNull](../../mfc/reference/crecordset-class.md#isfieldnull) funzioni membro.  
  
Quanto segue `DoFieldExchange` override è per il `CSections` classe. La procedura guidata scrive la funzione nel file con estensione cpp per la classe del recordset.  
  
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
  
Si noti che le seguenti funzionalità della funzione:  
  
- In questa sezione della funzione viene chiamata il mapping dei campi.  
  
- Una chiamata a `CFieldExchange::SetFieldType`, tramite il `pFX` puntatore. Questa chiamata consente di specificare che tutte le chiamate alle funzioni RFX viene chiamato alla fine della `DoFieldExchange` o la chiamata successiva a `SetFieldType` sono colonne di output. Per altre informazioni, vedere [CFieldExchange::](../../mfc/reference/cfieldexchange-class.md#setfieldtype).  
  
- Diverse chiamate al `RFX_Text` funzione globale, ovvero uno per ogni membro del campo dati (tutti i quali si `CString` variabili nell'esempio). Queste chiamate specificano la relazione tra un nome di colonna nell'origine dati e un membro del campo dati. Funzioni RFX di eseguono il trasferimento dei dati effettivi. La libreria di classi fornisce le funzioni RFX per tutti i tipi di dati comuni. Per altre informazioni sulle funzioni RFX, vedere [Record Field Exchange: utilizzo delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md).  
  
    > [!NOTE]
    >  L'ordine delle colonne nel set di risultati deve corrispondere all'ordine delle chiamate alle funzioni RFX in `DoFieldExchange`.  
  
- Il `pFX` puntatore a un [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto passato dal framework quando chiama `DoFieldExchange`. Il `CFieldExchange` oggetto specifica l'operazione che `DoFieldExchange` consiste nell'eseguire, la direzione del trasferimento e altre informazioni sul contesto.  
  
##  <a name="_core_the_recordset_constructor"></a> Costruttore del recordset  

Il costruttore del recordset creato dalla procedura guidata contiene due elementi correlati a RFX:  
  
- Un'inizializzazione per ogni membro del campo dati  
  
- Un'inizializzazione per il [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields) membro dei dati, che contiene il numero di membri dati di campo  
  
Il costruttore per la `CSections` recordset esempio si presenta come segue:  
  
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
>  Se si aggiunge un membro dati di campo manualmente, come si farebbe se si associano dinamicamente le nuove colonne, è necessario incrementare `m_nFields`. Eseguire questa operazione aggiungendo un'altra riga di codice, ad esempio:  
  
```cpp  
m_nFields += 3;  
```  

Questo è il codice per l'aggiunta di tre nuovi campi. Se si aggiunge un membro dati di parametro, è necessario inizializzare il [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams) membro dei dati, che contiene il numero di membri dati di parametro. Inserire il `m_nParams` inizializzazione all'esterno delle parentesi.  

## <a name="see-also"></a>Vedere anche  

[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)