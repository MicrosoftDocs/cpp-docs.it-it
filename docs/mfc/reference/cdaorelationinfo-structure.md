---
title: "Struttura CDaoRelationInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoRelationInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoRelationInfo (struttura)"
  - "DAO (Data Access Objects), raccolta Relations"
ms.assetid: 92dda090-fe72-4090-84ec-429498a48aad
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Struttura CDaoRelationInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CDaoRelationInfo` contiene informazioni su una relazione definita tra i campi di due tabelle in un oggetto di [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md).  
  
## Sintassi  
  
```  
  
      struct CDaoRelationInfo  
{  
   CDaoRelationInfo( );                    // Constructor  
   CString m_strName;                      // Primary  
   CString m_strTable;                     // Primary  
   CString m_strForeignTable;              // Primary  
   long m_lAttributes;                     // Secondary  
   CDaoRelationFieldInfo* m_pFieldInfos;   // Secondary  
   short m_nFields;                        // Secondary  
   // Below the // Implementation comment:  
   // Destructor, not otherwise documented  
};  
```  
  
#### Parametri  
 `m_strName`  
 In modo univoco assegnare all'oggetto relazione.  Per ulteriori informazioni, vedere l'argomento "proprietà name" nella Guida di DAO.  
  
 *m\_strTable*  
 Assegnare alla tabella primaria nella relazione.  
  
 *m\_strForeignTable*  
 Assegnare alla tabella esterna della relazione.  Una tabella esterna è una tabella utilizzata per contenere le chiavi esterne.  In genere, si utilizza una tabella esterna per stabilire o imporre l'integrità referenziale.  La tabella esterna è in genere molti lato di una relazione uno\-a\-molti.  Esempi di tabelle esterne sono incluse tabelle contenenti codici per gli stati o le americani province canadesi o gli ordini del cliente.  
  
 `m_lAttributes`  
 Contiene informazioni sul tipo di relazione.  Il valore del membro può essere uno dei seguenti valori:  
  
-   la relazione di**dbRelationUnique**è uno\-a\-uno.  
  
-   la relazione di**dbRelationDontEnforce**non applicabile \(nessuna integrità referenziale\).  
  
-   la relazione di**dbRelationInherited** esiste in un database non corrente che contiene le due tabelle collegate.  
  
-   **dbRelationLeft** la relazione è un join di sinistra.  Un left outer join include tutti i record dal primo \(a sinistra\) di due tabelle, anche se non sono presenti valori corrispondenti per i record nella seconda tabella \(hand destra\).  
  
-   **dbRelationRight** la relazione è un right join.  Un right outer join include tutti i record da secondi \(mano destra\) di due tabelle, anche se non sono presenti valori corrispondenti per i record della prima tabella \(a sinistra\).  
  
-   gli aggiornamenti di**dbRelationUpdateCascade**inoltre tendono a propagarsi a cascata.  
  
-   eliminazione di**dbRelationDeleteCascade**inoltre tendono a propagarsi a cascata.  
  
 `m_pFieldInfos`  
 Un puntatore a una matrice di strutture [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md).  La matrice contiene un oggetto per ogni campo della relazione.  Il membro dati di `m_nFields` fornisce un conteggio di elementi di matrice.  
  
 `m_nFields`  
 Il numero di `CDaoRelationFieldInfo` oggetti nel membro dati di `m_pFieldInfos`.  
  
## Note  
 I riferimenti al di sopra principale e secondario indicano quali le informazioni restituite dalla funzione membro di [GetRelationInfo](../Topic/CDaoDatabase::GetRelationInfo.md) nella classe `CDaoDatabase`.  
  
 Gli oggetti di relazione non sono rappresentati da una classe MFC.  Al contrario, l'oggetto di DAO sottostante a un oggetto MFC della classe di `CDaoDatabase` gestisce una raccolta di oggetti relazione: `CDaoDatabase` fornisce le funzioni membro per accedere ai singoli elementi di informazioni di relazione, oppure è possibile accedervi contemporaneamente a un oggetto di `CDaoRelationInfo` chiamando la funzione membro di `GetRelationInfo` dell'oggetto di database contenitore.  
  
 Le informazioni recuperate dalla funzione membro di [CDaoDatabase::GetRelationInfo](../Topic/CDaoDatabase::GetRelationInfo.md) vengono archiviate in una struttura di `CDaoRelationInfo`.  `CDaoRelationInfo` definisce anche una funzione membro di `Dump` nelle build di debug.  È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto di `CDaoRelationInfo`.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Struttura CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md)