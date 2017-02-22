---
title: "Struttura CDaoIndexInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoIndexInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoIndexInfo (struttura)"
  - "DAO (Data Access Objects), raccolta di indici"
ms.assetid: 251d8285-78ce-4716-a0b3-ccc3395fc437
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Struttura CDaoIndexInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `CDaoIndexInfo` contiene informazioni su un oggetto indice definito per gli oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
```  
  
      struct CDaoIndexInfo {  
   CDaoIndexInfo( );                   // Constructor  
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
  
#### Parametri  
 `m_strName`  
 In modo univoco assegna un nome all'oggetto campo.  Per informazioni dettagliate, vedere l'argomento "Proprietà Nome" nella Guida DAO.  
  
 `m_pFieldInfos`  
 Un puntatore a una matrice di oggetti [CDaoIndexFieldInfo](../../mfc/reference/cdaoindexfieldinfo-structure.md) indicando così quali campi del recordset o tabledef sono campi chiave in un indice.  Ogni oggetto identifica un campo dell'indice.  L'ordine predefinito dell'indice è crescente.  Un oggetto indice può contenere uno o più campi che rappresentano le chiavi di indice per ogni record.  Queste possono essere crescenti, decrescenti, o una combinazione.  
  
 `m_nFields`  
 Il numero di campi archiviati in `m_pFieldInfos`.  
  
 *m\_bPrimary*  
 Se la proprietà primaria è **TRUE**, l'oggetto Index rappresenta un indice primario.  Un indice primario è costituito da uno o più campi che identificano in modo univoco tutti i record di una tabella in un ordine predefinito.  Poiché il campo index deve essere univoco, la proprietà Unique dell'oggetto indice viene impostata su **TRUE** in DAO.  Se l'indice primario è costituito da più di un campo, ogni campo può contenere valori duplicati, ma ogni combinazione di valori da tutti i campi indicizzati deve essere univoca.  Un indice primario è costituito da una chiave per la tabella e generalmente contiene gli stessi campi di chiave primaria.  
  
 Quando si imposta una chiave primaria per una tabella, la chiave primaria viene automaticamente definita come indice principale per la tabella.  Per ulteriori informazioni, vedere gli argomenti "Proprietà Primary" e "Proprietà Unique" nella Guida di DAO.  
  
> [!NOTE]
>  Potrebbe esserci, al massimo, un indice primario in una tabella.  
  
 *m\_bUnique*  
 Indica se un oggetto indice rappresenta un indice univoco per una tabella.  Se questa proprietà è **TRUE**, l'oggetto Index rappresenta un indice univoco.  Un indice univoco è costituito da uno o più campi che dispongono solitamente tutti i record di una tabella in un ordine univoco e predefinito.  Se l'indice è costituito da un campo, i valori in quel campo devono essere univoci per l'intera tabella.  Se l'indice primario è costituito da più di un campo, ogni campo può contenere valori duplicati, ma ogni combinazione di valori da tutti i campi indicizzati deve essere univoca.  
  
 Se entrambe le proprietà Unique e Primary di un oggetto indice sono impostate su **TRUE**, l'indice è univoco e principale: Identifica in modo univoco tutti i record della tabella in un ordine predefinito e logico.  Se la proprietà Primary è impostata su **FALSE**, l'indice è un indice secondario.  Gli indici secondari \(sia chiave e non chiave\) dispongono logicamente i record in un ordine predefinito senza fungere da riferimento per record della tabella.  
  
 Per ulteriori informazioni, vedere gli argomenti "Proprietà Primary" e Proprietà Unique" nella Guida di DAO.  
  
 *m\_bClustered*  
 Indica se un oggetto indice rappresenta un indice clustered per una tabella.  Se questa proprietà è **TRUE**, l'oggetto Index rappresenta un indice cluster; in caso contrario, no.  Un indice cluster è costituito da uno o più campi non chiave che, insieme, dispongono tutti i record di una tabella in un ordine predefinito.  Con un indice cluster, i dati della tabella vengono archiviati letteralmente nell'ordine specificato dall'indice cluster.  Un indice cluster fornisce l'accesso efficace ai record di una tabella.  Per ulteriori informazioni, vedere l'argomento "Clustered Property" nella guida DAO.  
  
> [!NOTE]
>  La proprietà Clustered viene ignorata per i database che utilizzano il modulo di gestione di database Microsoft Jet perché il motore di database Jet non supporta gli indici cluster.  
  
 *m\_bIgnoreNulls*  
 Indica se sono presenti voci di indice per i record che contengono valori null nei campi di indice.  Se questa proprietà è **TRUE**, i campi con i valori null non dispongono di una voce di indice.  Per eseguire la ricerca dei record mediante un campo più velocemente, è possibile definire un indice per il campo.  Se si abilitano le voci null in un campo indicizzato e richiedere che molte voci siano null, è possibile impostare la proprietà di IgnoreNulls dell'oggetto indice a **TRUE** per ridurre la quantità di spazio di archiviazione che l'indice utilizza.  L'impostazione delle proprietà di IgnoreNulls e l'impostazione della proprietà Required determinano se un record con un valore di indice null dispone di una voce di indice, come illustrato nella tabella.  
  
|IgnoreNulls|Obbligatorio|Null nel campo index|  
|-----------------|------------------|--------------------------|  
|True|False|Valore null consentito; nessuna voce di indice aggiunta.|  
|False|False|Valore null consentito; voce di indice aggiunta.|  
|True o False|True|Valore null non consentito; nessuna voce di indice aggiunta.|  
  
 Per ulteriori informazioni, vedere l'argomento "IgnoreNulls Property" nella guida DAO.  
  
 `m_bRequired`  
 Indica se un oggetto indice DAO richiede un valore non Null.  Se questa proprietà è **TRUE**, l'oggetto Index non consente un valore null.  Per ulteriori informazioni, vedere l'argomento "Proprietà Required" nella guida DAO.  
  
> [!TIP]
>  Quando è possibile impostare questa proprietà per un oggetto indice DAO o un oggetto di campo \(contenuto da un tabledef, un recordset, o da un oggetto di querydef\), impostarlo per l'oggetto di campo.  La validità dell'impostazione delle proprietà per un oggetto di campo viene controllata prima di un oggetto indice.  
  
 *m\_bForeign*  
 Indica se un oggetto indice rappresenta una chiave esterna di una tabella.  Se questa proprietà è **TRUE**, l'indice rappresenta una chiave esterna di una tabella.  Una chiave esterna è costituita da uno o più campi in una tabella esterna che identificano in modo univoco una riga in una tabella primaria.  Il motore di database Microsoft Jet crea un oggetto indice per la tabella esterna ed imposta la proprietà Foreign quando si crea una relazione che applica l'integrità referenziale.  Per ulteriori informazioni, vedere l'argomento "Proprietà Foreign" nella guida DAO.  
  
 *m\_lDistinctCount*  
 Indica il numero di valori univoci per l'oggetto Index inclusi nella tabella collegata.  Controllare la proprietà di DistinctCount per determinare il numero di valori univoci, o keys, in un indice.  Qualsiasi chiave viene calcolata una sola volta, anche se è possibile che esistano più occorrenze di tale valore se l'indice permette valori duplicati.  Queste informazioni sono utili nelle applicazioni che tentano di ottimizzare l'accesso ai dati valutando le informazioni sull'indice.  Il numero di valori univoci è anche noto come la cardinalità di un oggetto indice.  La proprietà DistinctCount non rifletterà sempre il numero effettivo di chiavi in un determinato momento.  Ad esempio, una modifica causata da un rollback della transazione non verrà riportata immediatamente nella proprietà DistinctCount.  Per ulteriori informazioni, vedere l'argomento "Proprietà DistinctCount" nella guida DAO.  
  
## Note  
 I riferimenti a Primary, Secondary e ALL indicano come l'informazione è restituita dalla funzione membro di `GetIndexInfo` nelle classi [CDaoTableDef](../Topic/CDaoTableDef::GetIndexInfo.md) e [CDaoRecordset](../Topic/CDaoRecordset::GetIndexInfo.md).  
  
 Gli oggetti Index non sono rappresentati da una classe MFC.  Viceversa, gli oggetti DAO che sono alla base degli oggetti MFC di classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contengono una raccolta di oggetti indice, chiamata raccolta indici.  Queste classi forniscono le funzioni membro per accedere ai singoli elementi di informazioni sull'indice, oppure è possibile accedervi contemporaneamente con un oggetto `CDaoIndexInfo` chiamando la funzione membro `GetIndexInfo` dell'oggetto contenitore.  
  
 `CDaoIndexInfo` dispone di un costruttore e un distruttore per allocare e liberare correttamente le informazioni del campo index in `m_pFieldInfos`.  
  
 Le informazioni recuperate dalla funzione membro di `GetIndexInfo` di un oggetto tabledef vengono archiviate in una struttura `CDaoIndexInfo`.  Chiamare la funzione membro `GetIndexInfo` dell'oggetto contenitore tabledef nella raccolta di indici in cui l'oggetto Index viene archiviato.  `CDaoIndexInfo` definisce anche una funzione membro `Dump` nelle compilazioni di debug.  Si può utilizzare `Dump` per eseguire il dump del contenuto di un oggetto `CDaoIndexInfo`.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef::GetIndexInfo](../Topic/CDaoTableDef::GetIndexInfo.md)