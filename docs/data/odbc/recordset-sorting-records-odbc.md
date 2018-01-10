---
title: 'Recordset: Ordinamento dei record (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- sorting data, recordset data
- ODBC recordsets, sorting
- recordsets, sorting
ms.assetid: b40b152e-0a91-452e-be7b-e5bc27f744c7
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 846b3cfd4d5abe6d0eb76cfb12840f094564c926
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recordset-sorting-records-odbc"></a>Recordset: ordinamento dei record (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 In questo argomento viene illustrato l'ordinamento del recordset. È possibile specificare uno o più colonne su cui basare l'ordinamento e, è possibile specificare l'ordine crescente o decrescente (`ASC` o **DESC**; `ASC` è l'impostazione predefinita) per ciascuna colonna specificata. Ad esempio, se si specificano due colonne, i record sono ordinati in base alla prima e quindi in base alla seconda. Un database SQL **ORDER BY** clausola definisce un tipo di ordinamento. Quando il framework aggiunge il **ORDER BY** clausola to SQL del recordset esegue una query, la clausola controlla l'ordinamento della selezione.  
  
 È necessario stabilire l'ordinamento di un oggetto recordset dopo la creazione dell'oggetto, ma prima di chiamare il relativo **aprire** funzione membro (o prima di chiamare il **Requery** funzione membro per un oggetto recordset esistente il cui **aprire** funzione membro è stata chiamata in precedenza).  
  
#### <a name="to-specify-a-sort-order-for-a-recordset-object"></a>Per specificare un criterio di ordinamento per un oggetto recordset  
  
1.  Creare un nuovo oggetto recordset (o preparare una chiamata a **Requery** per quella esistente).  
  
2.  Impostare il valore dell'oggetto [m_strSort](../../mfc/reference/crecordset-class.md#m_strsort) (membro dati).  
  
     L'ordinamento è una stringa con terminazione null. I contenuti del **ORDER BY** clausola ma non la parola chiave **ORDER BY**. Ad esempio, utilizzare:  
  
    ```  
    recordset.m_strSort = "LastName DESC, FirstName DESC";  
    ```  
  
     not  
  
    ```  
    recordset.m_strSort = "ORDER BY LastName DESC, FirstName DESC";  
    ```  
  
3.  Impostare le opzioni che necessarie, come un filtro, la modalità di blocco o parametri.  
  
4.  Chiamare **aprire** per il nuovo oggetto (o **Requery** per un oggetto esistente).  
  
 I record selezionati sono ordinati come specificato. Ad esempio, per ordinare un set di record dello studente in ordine decrescente per cognome e nome, quindi, eseguire le operazioni seguenti:  
  
```  
// Construct the recordset  
CStudentSet rsStudent( NULL );  
// Set the sort  
rsStudent.m_strSort = "LastName DESC, FirstName DESC";  
// Run the query with the sort in place  
rsStudent.Open( );  
```  
  
 Il recordset contiene tutti i record di studenti, ordinati in ordine decrescente (da Z ad A) il cognome, quindi in base al nome.  
  
> [!NOTE]
>  Se si sceglie di eseguire l'override della stringa del recordset predefinito SQL passando una stringa SQL personalizzata per **aprire**, non impostare un ordinamento se la stringa personalizzata è un **ORDER BY** clausola.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)   
 [Recordset: applicazione di filtri ai record (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)