---
title: 'Recordset: Ripetizione di query in un Recordset (ODBC) | Microsoft Docs'
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
ms.openlocfilehash: 7d228fb97cad2fba426aa6415564d3b7f60363b5
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50062684"
---
# <a name="recordset-requerying-a-recordset-odbc"></a>Recordset: ripetizione di una query in un recordset (ODBC)

Questo argomento si applica alle classi ODBC MFC.

In questo argomento illustra come è possibile usare un oggetto recordset da rieseguire una query (vale a dire, aggiornamento) in modo automatico dal database e quando si potrebbe voler eseguire questa operazione con il [Requery](../../mfc/reference/crecordset-class.md#requery) funzione membro.

I motivi dell'entità per la ripetizione di query in un recordset sono:

- Portare il recordset aggiornato rispetto al record vengono aggiunti dall'utente o da altri utenti e i record eliminati da altri utenti (quelle eliminate sono già riflesse nel set di record).

- Aggiornare il recordset basato su come modificare i valori dei parametri.

##  <a name="_core_bringing_the_recordset_up_to_date"></a> Aggiornamento dei Recordset alla data

Spesso, è opportuno ripetere una query dell'oggetto recordset per attivare la modalità aggiornati. In un ambiente di database multiutente, altri utenti possono apportare modifiche ai dati durante il ciclo di vita del recordset. Per altre informazioni sui casi in cui il recordset riflette le modifiche apportate da altri utenti e quando recordset di altri utenti riflettere le modifiche, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) e [Dynaset](../../data/odbc/dynaset.md).

##  <a name="_core_requerying_based_on_new_parameters"></a> Rieseguendo la query in base ai nuovi parametri

Un altro frequenti, ugualmente importante, ovvero usare [rieseguire una query](../../mfc/reference/crecordset-class.md#requery) consiste nel selezionare un nuovo set di record basati su come modificare i valori dei parametri.

> [!TIP]
>  Velocità delle query è probabilmente notevolmente più veloce se si chiama `Requery` con la modifica dei valori di parametro anziché chiamare `Open` nuovamente.

##  <a name="_core_requerying_dynasets_vs.._snapshots"></a> Visual Studio dynaset rieseguendo una query. Snapshot

Poiché i dynaset sono utilizzati per presentare un set di record con dati aggiornati dinamici, sarà necessario ripetere dynaset spesso se si desidera riflettere le aggiunte di altri utenti. Gli snapshot, d'altra parte, sono utili perché è possibile fare affidamento sul relativo contenuto statico mentre preparare i report, calcolare i totali e così via. Talvolta si potrebbe comunque, rieseguire una query anche uno snapshot. In un ambiente multiutente, i dati dello snapshot potrebbero perdere la sincronizzazione con l'origine dati come gli altri utenti di modificare il database.

#### <a name="to-requery-a-recordset-object"></a>Per rieseguire una query di un oggetto recordset

1. Chiamare il [Requery](../../mfc/reference/crecordset-class.md#requery) funzione membro dell'oggetto.

In alternativa, è possibile chiudere e riaprire il recordset originale. In entrambi i casi, il nuovo set di record rappresenta lo stato corrente dell'origine dati.

Per un esempio, vedere [visualizzazioni di Record: la compilazione di una casella di riepilogo da un secondo Recordset](../../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).

> [!TIP]
>  Per ottimizzare `Requery` prestazioni, evitare di modificare il recordset [filtro](../../data/odbc/recordset-filtering-records-odbc.md) oppure [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md). Modificare solo il valore del parametro prima di chiamare `Requery`.

Se il `Requery` chiamata ha esito negativo, è possibile riprovare a eseguire la chiamata; in caso contrario, l'applicazione deve terminare correttamente. Una chiamata a `Requery` o `Open` potrebbe non riuscire per uno qualsiasi dei numerosi motivi. Ad esempio, si verifica un errore di rete; In alternativa, durante la chiamata, dopo che i dati esistenti viene rilasciati ma prima che i nuovi dati vengono ottenuti, un altro utente potrebbe ottenere i accesso esclusivo. oppure è stato possibile eliminare la tabella da cui dipende il recordset.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)<br/>
[Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md)