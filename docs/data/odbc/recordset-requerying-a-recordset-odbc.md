---
description: 'Ulteriori informazioni su: Recordset: esecuzione di una query in un recordset (ODBC)'
title: 'Recordset: ripetizione di una query in un recordset (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- recordsets, requerying
- requerying recordsets
- Requery method
- ODBC recordsets, requerying
- refreshing recordsets
ms.assetid: 4ebc3b5b-5b91-4f51-a967-245223c6b8e1
ms.openlocfilehash: 3efcaac1273e6b5cc786e983bfd59f73c870cbea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204472"
---
# <a name="recordset-requerying-a-recordset-odbc"></a>Recordset: ripetizione di una query in un recordset (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento viene illustrato come utilizzare un oggetto recordset per rieseguire la query, ovvero aggiornare, dal database e quando si desidera eseguire questa operazione con la funzione membro [Requery](../../mfc/reference/crecordset-class.md#requery) .

I motivi principali per la riesecuzione di una query su un recordset sono i seguenti:

- Portare il recordset aggiornato rispetto ai record aggiunti dall'utente o da altri utenti e record eliminati da altri utenti (quelli che si eliminano sono già presenti nel recordset).

- Aggiornare il recordset in base alla modifica dei valori dei parametri.

## <a name="bringing-the-recordset-up-to-date"></a><a name="_core_bringing_the_recordset_up_to_date"></a> Aggiornamento del recordset

Spesso è necessario eseguire una query sull'oggetto recordset per renderlo aggiornato. In un ambiente di database multiutente, altri utenti possono apportare modifiche ai dati durante il ciclo di vita del recordset. Per ulteriori informazioni su quando il recordset riflette le modifiche apportate da altri utenti e quando i recordset di altri utenti riflettono le modifiche, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) e [Dynaset](../../data/odbc/dynaset.md).

## <a name="requerying-based-on-new-parameters"></a><a name="_core_requerying_based_on_new_parameters"></a> Riesecuzione di query in base ai nuovi parametri

Un altro frequente, e ugualmente importante, l'uso di [Requery](../../mfc/reference/crecordset-class.md#requery) consiste nel selezionare un nuovo set di record in base alla modifica dei valori dei parametri.

> [!TIP]
> La velocità di query è probabilmente notevolmente più veloce se si chiama `Requery` con i valori dei parametri modificabili rispetto a quando si chiama di `Open` nuovo.

## <a name="requerying-dynasets-vs-snapshots"></a><a name="_core_requerying_dynasets_vs.._snapshots"></a> Esecuzione di query su dynaset e snapshot

Poiché i dynaset hanno lo scopo di presentare un set di record con dati dinamici aggiornati, si desidera eseguire una query sui dynaset spesso se si desidera riflettere le aggiunte degli altri utenti. Gli snapshot, d'altra parte, sono utili perché è possibile basarsi tranquillamente sul contenuto statico durante la preparazione dei report, il calcolo dei totali e così via. Tuttavia, a volte potrebbe essere necessario rieseguire la query anche su uno snapshot. In un ambiente multiutente, i dati dello snapshot potrebbero perdere la sincronizzazione con l'origine dati mentre altri utenti modificano il database.

#### <a name="to-requery-a-recordset-object"></a>Per eseguire una query su un oggetto recordset

1. Chiamare la funzione membro [Requery](../../mfc/reference/crecordset-class.md#requery) dell'oggetto.

In alternativa, è possibile chiudere e riaprire il recordset originale. In entrambi i casi, il nuovo recordset rappresenta lo stato corrente dell'origine dati.

Per un esempio, vedere [visualizzazioni di record: riempimento di una casella di riepilogo da un secondo recordset](../../data/filling-a-list-box-from-a-second-recordset-mfc-data-access.md).

> [!TIP]
> Per ottimizzare `Requery` le prestazioni, evitare di modificare il [filtro](../../data/odbc/recordset-filtering-records-odbc.md) o l' [ordinamento](../../data/odbc/recordset-sorting-records-odbc.md)del recordset. Modificare solo il valore del parametro prima di chiamare `Requery` .

Se la `Requery` chiamata ha esito negativo, è possibile ritentare la chiamata. in caso contrario, l'applicazione deve terminare normalmente. Una chiamata a `Requery` o `Open` potrebbe non riuscire per diversi motivi. Si è verificato un errore di rete. in alternativa, durante la chiamata, dopo che i dati esistenti sono stati rilasciati ma prima che i nuovi dati vengano ottenuti, un altro utente potrebbe ottenere l'accesso esclusivo. in alternativa, è possibile eliminare la tabella da cui dipende il recordset.

## <a name="see-also"></a>Vedi anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)<br/>
[Recordset: creazione e chiusura di recordset (ODBC)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md)
