---
title: "Recordset: ordinamento dei record (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "recordset ODBC, ordinamento"
  - "recordset, ordinamento"
  - "ordinamento dei dati, dati di recordset"
ms.assetid: b40b152e-0a91-452e-be7b-e5bc27f744c7
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Recordset: ordinamento dei record (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 Nel presente argomento viene illustrato l'ordinamento del recordset.  È possibile specificare una o più colonne su cui basare l'ordinamento e impostare l'ordine crescente o decrescente \(`ASC` o **DESC**, `ASC` è l'impostazione predefinita\) per ciascuna colonna specificata.  Se ad esempio si specificano due colonne, i record vengono ordinati dapprima in base alla prima colonna specificata, quindi in base alla seconda.  Un ordinamento viene definito mediante una clausola SQL **ORDER BY**.  Quando il framework aggiunge la clausola **ORDER BY** alla query SQL del recordset, la clausola controlla l'ordinamento della selezione.  
  
 È necessario specificare il criterio di ordinamento di un recordset dopo la creazione dell'oggetto, ma prima della chiamata alla relativa funzione membro **Open** oppure prima di chiamare la funzione membro **Requery** per un oggetto recordset esistente la cui funzione membro **Open** sia stata chiamata in precedenza.  
  
#### Per specificare un criterio di ordinamento per un oggetto recordset  
  
1.  Creare un nuovo oggetto recordset o preparare una chiamata a **Requery** per un oggetto esistente.  
  
2.  Impostare il valore del membro dati [m\_strSort](../Topic/CRecordset::m_strSort.md) dell'oggetto.  
  
     L'ordinamento è indicato da una stringa con terminazione null,  che include il contenuto della clausola **ORDER BY**, ma non la parola chiave **ORDER BY**.  Ad esempio, utilizzare:  
  
    ```  
    recordset.m_strSort = "LastName DESC, FirstName DESC";  
    ```  
  
     not  
  
    ```  
    recordset.m_strSort = "ORDER BY LastName DESC, FirstName DESC";  
    ```  
  
3.  Impostare le altre opzioni desiderate, ad esempio un filtro, la modalità di blocco o i parametri.  
  
4.  Chiamare **Open** per il nuovo oggetto o **Requery** per un oggetto esistente.  
  
 I record selezionati verranno ordinati come specificato.  Per ordinare, ad esempio, un insieme di record di studenti in ordine decrescente in base al cognome e quindi al nome, procedere come descritto di seguito.  
  
```  
// Construct the recordset  
CStudentSet rsStudent( NULL );  
// Set the sort  
rsStudent.m_strSort = "LastName DESC, FirstName DESC";  
// Run the query with the sort in place  
rsStudent.Open( );  
```  
  
 Il recordset contiene tutti i record degli studenti, in ordine decrescente \(dalla Z alla A\) in base al cognome e quindi al nome.  
  
> [!NOTE]
>  Se si sceglie di eseguire l'override della stringa SQL predefinita del recordset passando una stringa SQL personalizzata a **Open**, non impostare alcun ordinamento nel caso in cui la stringa personalizzata contenga una clausola **ORDER BY**.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)   
 [Recordset: applicazione di filtri ai record \(ODBC\)](../../data/odbc/recordset-filtering-records-odbc.md)