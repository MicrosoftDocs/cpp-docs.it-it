---
title: 'Recordset: ripetizione di una query in un recordset (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- recordsets, requerying
- requerying recordsets
- Requery method
- ODBC recordsets, requerying
- refreshing recordsets
ms.assetid: 4ebc3b5b-5b91-4f51-a967-245223c6b8e1
ms.openlocfilehash: cdae28f81eebe8427bc829072e0d9a83c6ec1722
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366951"
---
# <a name="recordset-requerying-a-recordset-odbc"></a>Recordset: ripetizione di una query in un recordset (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento viene illustrato come utilizzare un oggetto recordset per rieseguire la query (ovvero, aggiornare) se stesso dal database e quando è possibile eseguire questa operazione con la funzione membro [Requery.](../../mfc/reference/crecordset-class.md#requery)

I motivi principali per la riesecuzione di query su un recordset sono:

- Portare il recordset aggiornato rispetto ai record aggiunti dall'utente o da altri utenti e record eliminati da altri utenti (quelli eliminati sono già presenti nel recordset).

- Aggiornare il recordset in base alla modifica dei valori dei parametri.

## <a name="bringing-the-recordset-up-to-date"></a><a name="_core_bringing_the_recordset_up_to_date"></a>Modifica dell'oggetto Recordset

Spesso, è necessario rieseguire una query sull'oggetto recordset per aggiornato. In un ambiente di database multiutente, altri utenti possono apportare modifiche ai dati durante la durata del recordset. Per ulteriori informazioni su quando il recordset riflette le modifiche apportate da altri utenti e quando i recordset di altri utenti riflettono le modifiche, vedere Recordset: Come i record di aggiornamento [dell'oggetto Recordset (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) e [Dynaset](../../data/odbc/dynaset.md).

## <a name="requerying-based-on-new-parameters"></a><a name="_core_requerying_based_on_new_parameters"></a>Rieseguire query in base a nuovi parametriRequerying Based on New Parameters

Un altro utilizzo frequente, e altrettanto importante, di [Requery](../../mfc/reference/crecordset-class.md#requery) consiste nel selezionare un nuovo set di record in base alla modifica dei valori dei parametri.

> [!TIP]
> La velocità delle query è `Requery` probabilmente significativamente più `Open` veloce se si chiama con la modifica dei valori dei parametri rispetto alla chiamata di nuovo.

## <a name="requerying-dynasets-vs-snapshots"></a><a name="_core_requerying_dynasets_vs.._snapshots"></a>Riesecuzione di query tra Dynasets e istantanee

Poiché i dynaset hanno lo scopo di presentare un set di record con dati dinamici aggiornati, si desidera rieseguire spesso query sui dynaset se si desidera riflettere le aggiunte di altri utenti. Le istantanee, d'altra parte, sono utili perché si può tranquillamente fare affidamento sul loro contenuto statico mentre si preparano i report, si calcolano i totali e così via. Tuttavia, a volte potrebbe essere necessario rieseguire una query su uno snapshot. In un ambiente multiutente, i dati dello snapshot potrebbero perdere la sincronizzazione con l'origine dati quando altri utenti modificano il database.

#### <a name="to-requery-a-recordset-object"></a>Per rieseguire una query su un oggetto recordset

1. Chiamare la funzione membro [Requery](../../mfc/reference/crecordset-class.md#requery) dell'oggetto.

In alternativa, è possibile chiudere e riaprire il recordset originale. In entrambi i casi, il nuovo recordset rappresenta lo stato corrente dell'origine dati.

Per un esempio, vedere [Visualizzazioni di record: riempimento di una casella di riepilogo da un secondo recordset](../../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).

> [!TIP]
> Per `Requery` ottimizzare le prestazioni, evitare di modificare il [filtro](../../data/odbc/recordset-filtering-records-odbc.md) o [l'ordinamento](../../data/odbc/recordset-sorting-records-odbc.md)del recordset. Modificare solo il valore `Requery`del parametro prima di chiamare .

Se `Requery` la chiamata ha esito negativo, è possibile ritentare la chiamata; in caso contrario, l'applicazione deve terminare normalmente. Una chiamata `Requery` `Open` a o potrebbe non riuscire per diversi motivi. Si verifica un errore di rete; oppure, durante la chiamata, dopo il rilascio dei dati esistenti, ma prima che i nuovi dati vengano ottenuti, un altro utente potrebbe ottenere l'accesso esclusivo; o la tabella da cui dipende il recordset può essere eliminata.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)<br/>
[Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md)
