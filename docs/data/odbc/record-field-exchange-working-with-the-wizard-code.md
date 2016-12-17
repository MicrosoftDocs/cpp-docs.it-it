---
title: "Trasferimento di campi di record: utilizzo del codice della creazione guidata | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DoFieldExchange (metodo), override"
  - "membri dati di campi"
  - "membri dati di campi, dichiarazione"
  - "m_nFields (membro dati)"
  - "m_nFields (membro dati), inizializzazione"
  - "m_nParams (membro dati)"
  - "m_nParams (membro dati), inizializzazione"
  - "ODBC, RFX"
  - "override, DoFieldExchange"
  - "RFX (ODBC), implementazione"
  - "RFX (ODBC), codice creazione guidata"
  - "Unicode, con classi di database"
ms.assetid: f00d882a-ff1b-4a75-9717-98d8762bb237
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Trasferimento di campi di record: utilizzo del codice della creazione guidata
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato il codice scritto dalla Creazione guidata applicazioni MFC e tramite il comando **Aggiungi classe** \(come descritto in [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)\) per supportare RFX e la modalità di modifica di tale codice.  
  
> [!NOTE]
>  L'argomento è relativo alle classi derivate da `CRecordset` per cui il recupero di massa di righe non è ancora stato implementato.  Se si sta utilizzando il recupero di massa di righe, verrà implementato l'RFX di massa.  L'RFX di massa è simile all'RFX.  Per comprenderne le differenze, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Quando si crea una classe recordset con la Creazione guidata applicazioni MFC o con il comando **Aggiungi classe**, vengono automaticamente scritti i seguenti elementi relativi a RFX, in base all'origine dati, alla tabella e alle colonne specificate nella procedura guidata.  
  
-   Dichiarazioni dei membri dati di campo del recordset nella classe recordset.  
  
-   Un override di `CRecordset::DoFieldExchange`.  
  
-   L'inizializzazione dei membri dati di campo del recordset nel costruttore della classe recordset.  
  
##  <a name="_core_the_field_data_member_declarations"></a> Dichiarazioni dei membri dati di campo  
 Le procedure guidate scrivono una dichiarazione della classe recordset in un file con estensione h che, per la classe `CSections`, è simile al seguente:  
  
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
  
 Se si aggiungono e si associano membri dati di parametro o nuovi membri dati di campo, si consiglia di aggiungere tali elementi dopo quelli generati dalla procedura guidata.  
  
 Inoltre, si tenga presente che la procedura guidata eseguirà l'override della funzione membro `DoFieldExchange` della classe `CRecordset`.  
  
##  <a name="_core_the_dofieldexchange_override"></a> Override di DoFieldExchange  
 [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) rappresenta il fulcro del meccanismo RFX.  Il framework chiama `DoFieldExchange` tutte le volte che è necessario spostare dati dall'origine dati al recordset o viceversa.  `DoFieldExchange` supporta anche l'acquisizione di informazioni sui membri dati del campo tramite le funzioni membro [IsFieldDirty](../Topic/CRecordset::IsFieldDirty.md) e [IsFieldNull](../Topic/CRecordset::IsFieldNull.md).  
  
 L'override di `DoFieldExchange` riportato di seguito è relativo alla classe `CSections`.  La procedura guidata scriverà la funzione nel file con estensione cpp per la classe recordset.  
  
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
  
 Di seguito sono riportate le caratteristiche principali della funzione.  
  
-   Questa sezione della funzione è denominata mappa dei campi.  
  
-   Una chiamata a `CFieldExchange::SetFieldType` mediante il puntatore `pFX`.  Questa chiamata specifica che tutte le chiamate a funzioni RFX fino alla fine di `DoFieldExchange` o fino alla chiamata successiva a `SetFieldType` sono colonne di output.  Per ulteriori informazioni, vedere [CFieldExchange::SetFieldType](../Topic/CFieldExchange::SetFieldType.md).  
  
-   Diverse chiamate alla funzione globale `RFX_Text`, una per ciascun membro dati di campo \(nell'esempio riportato, tutte le chiamate sono variabili `CString`\).  Queste chiamate specificano la relazione tra un nome di colonna nell'origine dati e un membro dati di campo.  Le funzioni RFX eseguono l'effettivo trasferimento dei dati.  La libreria di classi fornisce funzioni RFX per tutti i tipi di dati comuni.  Per ulteriori informazioni sulle funzioni RFX, vedere [Trasferimento di campi di record: utilizzo delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md).  
  
    > [!NOTE]
    >  È necessario che vi sia corrispondenza tra l'ordine delle chiamate alle funzioni RFX in `DoFieldExchange` e l'ordine delle colonne nel gruppo dei risultati.  
  
-   Il puntatore `pFX` a un oggetto [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) passato dal framework durante la chiamata a `DoFieldExchange`.  L'oggetto `CFieldExchange` specifica l'operazione che `DoFieldExchange` eseguirà, la direzione di trasferimento e altre informazioni sul contesto.  
  
##  <a name="_core_the_recordset_constructor"></a> Costruttore del recordset  
 Il costruttore del recordset creato dalla procedura guidata contiene due elementi relativi a RFX:  
  
-   Una inizializzazione per ciascun membro dati di campo  
  
-   Una inizializzazione per il membro dati [m\_nFields](../Topic/CRecordset::m_nFields.md), contenente il numero di membri dati di campo  
  
 Di seguito è riportato un esempio di costruttore per il recordset `CSections`.  
  
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
>  Se si aggiungono membri dati di campo manualmente, come è possibile fare quando si associano nuove colonne in modo dinamico, sarà necessario incrementare `m_nFields`.  Eseguire questa operazione aggiungendo un'altra riga di codice, come la seguente:  
  
```  
m_nFields += 3;  
```  
  
 Si tratta del codice per l'aggiunta di tre nuovi campi.  Se si aggiunge un membro dati di parametro, sarà necessario inizializzare il membro dati [m\_nParams](../Topic/CRecordset::m_nParams.md), che contiene il numero dei membri dati di parametro.  Collocare l'inizializzazione di `m_nParams` all'esterno delle parentesi.  
  
## Vedere anche  
 [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md)