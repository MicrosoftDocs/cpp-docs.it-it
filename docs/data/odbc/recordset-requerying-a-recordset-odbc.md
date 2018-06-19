---
title: 'Recordset: Ripetizione di query in un Recordset (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- recordsets, requerying
- requerying recordsets
- Requery method
- ODBC recordsets, requerying
- refreshing recordsets
ms.assetid: 4ebc3b5b-5b91-4f51-a967-245223c6b8e1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a3157f416cf6fb7e0fd3b5ad4797b83de218c9ef
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33091579"
---
# <a name="recordset-requerying-a-recordset-odbc"></a>Recordset: ripetizione di una query in un recordset (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Questo argomento viene illustrato come è possibile utilizzare un oggetto recordset per rieseguire una query (aggiornamento) in modo automatico dal database e quando si potrebbe voler eseguire questa operazione con il [Requery](../../mfc/reference/crecordset-class.md#requery) funzione membro.  
  
 I motivi principali per la ripetizione di query in un recordset sono:  
  
-   Portare il recordset aggiornato rispetto al record aggiunti dall'utente o da altri utenti e i record eliminati da altri utenti (quelle eliminate sono già riflessi nel set di record).  
  
-   Aggiornare il recordset in base alle variazioni dei valori di parametro.  
  
##  <a name="_core_bringing_the_recordset_up_to_date"></a> Aggiornamento dei Recordset alla data  
 Spesso, è necessario rieseguire una query dell'oggetto recordset per attivare la modalità aggiornato. In un ambiente di database multiutente, altri utenti possono apportare modifiche ai dati durante il ciclo di vita del recordset. Per ulteriori informazioni quando il recordset riflette le modifiche apportate da altri utenti e quando il recordset di altri utenti rifletta le modifiche, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) e [Dynaset](../../data/odbc/dynaset.md).  
  
##  <a name="_core_requerying_based_on_new_parameters"></a> Ripetizione di query in base ai nuovi parametri  
 Un altro frequenti, ugualmente importante, utilizzare [Requery](../../mfc/reference/crecordset-class.md#requery) consiste nel selezionare un nuovo set di record in base alle variazioni dei valori di parametro.  
  
> [!TIP]
>  Velocità delle query è probabilmente molto più rapida se si chiama **Requery** con diversi valori dei parametri anziché chiamare **aprire** nuovamente.  
  
##  <a name="_core_requerying_dynasets_vs.._snapshots"></a> Ripetizione di query in Visual Studio i dynaset. Snapshot  
 Poiché i dynaset sono utilizzati per presentare un set di record con dati aggiornati dinamici, sarà necessario ripetere dynaset spesso se si desidera riflettere le aggiunte di altri utenti. Gli snapshot, d'altra parte, sono utili perché può fare affidamento sul relativo contenuto statico mentre preparare i report, calcolare i totali e così via. Comunque, si potrebbe desiderare di requery anche uno snapshot. In un ambiente multiutente, dati dello snapshot potrebbero perdere la sincronizzazione con l'origine dati come gli altri utenti di modificare il database.  
  
#### <a name="to-requery-a-recordset-object"></a>La query di un oggetto recordset  
  
1.  Chiamare il [Requery](../../mfc/reference/crecordset-class.md#requery) funzione membro dell'oggetto.  
  
 In alternativa, è possibile chiudere e riaprire il recordset originale. In entrambi i casi, il nuovo recordset rappresenta lo stato corrente dell'origine dati.  
  
 Per un esempio, vedere [visualizzazioni di Record: inserimento di una casella di riepilogo da un secondo Recordset](../../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).  
  
> [!TIP]
>  Per ottimizzare **Requery** prestazioni, evitare di modificare il recordset [filtro](../../data/odbc/recordset-filtering-records-odbc.md) o [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md). Modificare solo il valore del parametro prima di chiamare **Requery**.  
  
 Se il **Requery** chiamata ha esito negativo, è possibile riprovare a eseguire la chiamata; in caso contrario, l'applicazione deve chiudere normalmente. Una chiamata a **Requery** o **aprire** potrebbe non riuscire per una serie di motivi. Ad esempio, si verifica un errore di rete; In alternativa, durante la chiamata, dopo il rilascio di dati esistenti, ma prima sono ottenuti i nuovi dati, un altro utente può ottenere l'accesso esclusivo; oppure è stato possibile eliminare la tabella da cui dipende il recordset.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)   
 [Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md)