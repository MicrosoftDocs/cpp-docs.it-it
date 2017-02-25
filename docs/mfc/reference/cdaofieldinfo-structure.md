---
title: "Struttura CDaoFieldInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoFieldInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoFieldInfo (struttura)"
  - "DAO (Data Access Objects), raccolta Campi"
ms.assetid: 91b13e3f-bdb8-440c-86fc-ba4181ea0182
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Struttura CDaoFieldInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CDaoFieldInfo` contiene informazioni su un oggetto di campo definito per gli oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
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
  
#### Parametri  
 `m_strName`  
 In modo univoco assegnare all'oggetto di campo.  Per informazioni dettagliate, vedere l'argomento "proprietà name" nella Guida di DAO.  
  
 `m_nType`  
 Un valore che indica il tipo di dati del campo.  Per informazioni dettagliate, vedere l'argomento "proprietà tipo" nella Guida di DAO.  Il valore di questa proprietà può essere:  
  
-   **dbBoolean** sì\/no, stesso di **TRUE**\/**FALSE**  
  
-   byte di**dbByte**  
  
-   **dbInteger** breve  
  
-   **dbLong** long  
  
-   valuta di**dbCurrency**; vedere la classe MFC [COleCurrency](../../mfc/reference/colecurrency-class.md)  
  
-   **dbSingle** singolo  
  
-   doppio di**dbDouble**  
  
-   data\/ora di**dbDate**; vedere la classe MFC [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)  
  
-   testo di**dbText**; vedere la classe MFC [CString](../../atl-mfc-shared/reference/cstringt-class.md)  
  
-   binario lungo di**dbLongBinary**\(oggetto OLE\); è possibile utilizzare la classe MFC [CByteArray](../../mfc/reference/cbytearray-class.md) anziché classe `CLongBinary` poiché `CByteArray` è più dettagliato e facile da utilizzare.  
  
-   memo di**dbMemo**; vedere la classe MFC `CString`  
  
-   **dbGUID** un identificatore univoco globale\/identificatore univoco universale utilizzato con le chiamate a procedura remota.  Per ulteriori informazioni, vedere l'argomento "proprietà tipo" nella Guida di DAO.  
  
> [!NOTE]
>  Non utilizzare dati di tipo stringa per i dati binari.  In questo modo i dati a utilizzare il livello della conversione Unicode O ANSI, provocando overhead aumentato ed eventualmente conversioni non intenzionali.  
  
 *m\_lSize*  
 Un valore che indica la dimensione massima consentita, in byte, di un oggetto di campo di DAO che contiene testo o la dimensione fissa di un oggetto di campo che contiene testo o valori numerici.  Per informazioni dettagliate, vedere l'argomento "proprietà Size" nella Guida di DAO.  Le dimensioni possono essere di uno dei seguenti valori:  
  
|Type|Dimensione \(byte\)|Descrizione|  
|----------|-------------------------|-----------------|  
|**dbBoolean**|1 byte|\(Sì\/no stessi True\/False\)|  
|**dbByte**|1|Byte|  
|**dbInteger**|2|Integer|  
|**dbLong**|4|Long|  
|**dbCurrency**|8|Valuta \([COleCurrency](../../mfc/reference/colecurrency-class.md)\)|  
|**dbSingle**|4|Single|  
|**dbDouble**|8|Double|  
|**dbDate**|8|Data\/ora \([COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)\)|  
|**dbText**|1 \- 255|Testo \([CString](../../atl-mfc-shared/reference/cstringt-class.md)\)|  
|**dbLongBinary**|0|Binario lungo \(oggetto OLE; [CByteArray](../../mfc/reference/cbytearray-class.md); utilizzare invece di `CLongBinary`\)|  
|**dbMemo**|0|Memo \([CString](../../atl-mfc-shared/reference/cstringt-class.md)\)|  
|**dbGUID**|16|Un identificatore univoco globale\/identificatore univoco universale utilizzato con le chiamate a procedura remota.|  
  
 `m_lAttributes`  
 Specifica le caratteristiche di un oggetto di campo contenuto da un, così da un recordset, un querydef, o da un oggetto indice.  Il valore restituito può essere una somma di queste costanti, creati con C\+\+ bit per bit \(OR  **&#124;**operatore\):  
  
-   **dbFixedField** la dimensione del campo corretto \(impostazione predefinita per i campi numerici\).  
  
-   **dbVariableField** la dimensione di campo è variabile \(campi di solo testo\).  
  
-   **dbAutoIncrField** il valore del campo per i nuovi record verrà incrementato automaticamente a un integer long univoco che non può essere modificato.  Supportato solo per le tabelle di database Microsoft Jet.  
  
-   **dbUpdatableField** il valore del campo può essere modificato.  
  
-   **dbDescending** il campo è ordinato \(Z Alla a o 100 \- 0\) in ordine decrescente \(si applica solo a un oggetto di campo in una raccolta di campi di oggetto indice; in MFC, gli oggetti Index stessi sono contenuti negli oggetti TableDef di\).  Se si omette questa costante, il campo viene ordinato \(A\-Z o 0 \- 100\) nell'ordine salente \(impostazione predefinita\).  
  
 Nel verificare l'impostazione di questa proprietà, è possibile utilizzare l'operatore AND bit per bit C\+\+ \(**&**\) per verificare un attributo specifico.  Nell'impostare più attributi, è possibile combinarli combinando le costanti appropriate con bit per bit \(OR  **&#124;**operatore\).  Per informazioni dettagliate, vedere l'argomento "proprietà attributi" nella Guida di DAO.  
  
 *m\_nOrdinalPosition*  
 Un valore che specifica l'ordine numerico in cui si desidera un campo rappresentato da un oggetto di campo di DAO da visualizzare rispetto agli altri campi.  È possibile impostare la proprietà con [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md).  Per informazioni dettagliate, vedere l'argomento "proprietà di OrdinalPosition" nella Guida di DAO.  
  
 `m_bRequired`  
 Indica se un oggetto di campo di DAO richiede un valore non Null.  Se questa proprietà è **TRUE**, il campo non consente un valore null.  Se richiesto è impostato su **FALSE**, il campo può contenere valori null nonché i valori che soddisfano le condizioni specificate dalle impostazioni delle proprietà di ValidationRule e di AllowZeroLength.  Per informazioni dettagliate, vedere l'argomento "ha richiesto la proprietà" nella Guida di DAO.  È possibile impostare questa proprietà per un così con [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md).  
  
 *m\_bAllowZeroLength*  
 Indica se una stringa vuota \(""\) è un valore valido di un oggetto di campo di DAO con un tipo di dati memo o di testo.  Se questa proprietà è **TRUE**, una stringa vuota è un valore valido.  Impostare la proprietà su **FALSE** per assicurarsi che non è possibile utilizzare una stringa vuota per impostare il valore di un campo.  Per informazioni dettagliate, vedere l'argomento "proprietà di AllowZeroLength" nella Guida di DAO.  È possibile impostare questa proprietà per un così con [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md).  
  
 `m_lCollatingOrder`  
 Specifica la sequenza delle operazioni di ordinamento in testo per il confronto di stringhe o l'ordinamento.  Per informazioni dettagliate, vedere l'argomento "personalizzare le impostazioni del Registro di sistema di Windows per l'accesso ai dati" nella Guida di DAO.  Per un elenco di valori possibili restituiti, vedere il membro di **m\_lCollatingOrder** della struttura di [CDaoDatabaseInfo](../../mfc/reference/cdaodatabaseinfo-structure.md).  È possibile impostare questa proprietà per un così con [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md).  
  
 `m_strForeignName`  
 Un valore che, una relazione, specifica il nome dell'oggetto di campo di DAO per una tabella esterna che corrisponde a un campo in una tabella primaria.  Per informazioni dettagliate, vedere l'argomento "proprietà di ForeignName" nella Guida di DAO.  
  
 *m\_strSourceField*  
 Indica il nome del campo corrispondente all'origine dati per un oggetto di campo di l contenuto da un, così da un recordset, o da un oggetto di querydef.  Questa proprietà indica il nome originale campo associato a un oggetto di campo.  Ad esempio, è possibile utilizzare questa proprietà per determinare l'origine dei dati in un campo di query il cui nome è indipendente dal nome del campo nella tabella sottostante.  Per informazioni dettagliate, vedere l'argomento "SourceField, le proprietà di SourceTable" nella Guida di DAO.  È possibile impostare questa proprietà per un così con [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md).  
  
 *m\_strSourceTable*  
 Indica il nome della tabella dall'origine dati per un oggetto di campo di l contenuto da un, così da un recordset, o da un oggetto di querydef.  Questa proprietà indica il nome della tabella originale associato a un oggetto di campo.  Ad esempio, è possibile utilizzare questa proprietà per determinare l'origine dei dati in un campo di query il cui nome è indipendente dal nome del campo nella tabella sottostante.  Per informazioni dettagliate, vedere l'argomento "SourceField, le proprietà di SourceTable" nella Guida di DAO.  È possibile impostare questa proprietà per un così con [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md).  
  
 `m_strValidationRule`  
 Un valore per la convalida dei dati in un campo quando viene modificato o aggiunto a una tabella.  Per informazioni dettagliate, vedere l'argomento "proprietà di ValidationRule" nella Guida di DAO.  È possibile impostare questa proprietà per un così con [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md).  
  
 Per informazioni correlate sui TableDef, vedere il membro di **m\_strValidationRule** della struttura di [CDaoTableDefInfo](../../mfc/reference/cdaotabledefinfo-structure.md).  
  
 `m_strValidationText`  
 Un valore che specifica il testo del messaggio che l'applicazione viene visualizzato se il valore di un oggetto di campo di DAO non soddisfa la regola di convalida specificata dall'impostazione delle proprietà di ValidationRule.  Per informazioni dettagliate, vedere l'argomento "proprietà di ValidationText" nella Guida di DAO.  È possibile impostare questa proprietà per un così con [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md).  
  
 *m\_strDefaultValue*  
 Il valore predefinito di un oggetto di campo di DAO.  Quando un nuovo record viene creato, l'impostazione della proprietà DefaultValue viene automaticamente inserita come valore per il campo.  Per informazioni dettagliate, vedere l'argomento "proprietà DefaultValue" nella Guida di DAO.  È possibile impostare questa proprietà per un così con [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md).  
  
## Note  
 I riferimenti a principale, secondario e a tutti su indicano quali le informazioni restituite dalla funzione membro di `GetFieldInfo` nelle classi [CDaoTableDef](../Topic/CDaoTableDef::GetFieldInfo.md), [CDaoQueryDef](../Topic/CDaoQueryDef::GetFieldInfo.md) e [CDaoRecordset](../Topic/CDaoRecordset::GetFieldInfo.md).  
  
 Gli oggetti campo non sono rappresentati da una classe MFC.  Viceversa, gli oggetti di DAO che sono alla base degli oggetti MFC di classi sono contenute raccolte di oggetti campo: [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md), [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) e [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md).  Queste funzioni membro di fornire le classi per accedere ai singoli elementi di informazioni del campo, oppure è possibile accedervi contemporaneamente a un oggetto di `CDaoFieldInfo` chiamando la funzione membro di `GetFieldInfo` oggetto contenitore.  
  
 Oltre al relativo utilizzo per la revisione delle proprietà di un oggetto, è anche possibile utilizzare `CDaoFieldInfo` per costruire un parametro di input per creare nuovi campi in un TableDef.  Le opzioni più semplici sono disponibili per questa attività, se si desidera esercitare un controllo più accurato, è possibile utilizzare la versione di [CDaoTableDef::CreateField](../Topic/CDaoTableDef::CreateField.md) che accetta un parametro di `CDaoFieldInfo`.  
  
 Le informazioni recuperate dalla funzione membro di `GetFieldInfo` di classe \(contenente il campo vengono memorizzate in una struttura di `CDaoFieldInfo`.  Chiamare la funzione membro di `GetFieldInfo` oggetto contenitore cui nella raccolta dei campi l'oggetto di campo viene archiviato.  `CDaoFieldInfo` definisce anche una funzione membro di `Dump` nelle build di debug.  È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto di `CDaoFieldInfo`.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef::GetFieldInfo](../Topic/CDaoTableDef::GetFieldInfo.md)   
 [CDaoRecordset::GetFieldInfo](../Topic/CDaoRecordset::GetFieldInfo.md)   
 [CDaoQueryDef::GetFieldInfo](../Topic/CDaoQueryDef::GetFieldInfo.md)