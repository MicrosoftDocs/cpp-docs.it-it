---
title: Visualizzazioni di record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], record views
- ODBC recordsets [C++], record views
- databases [C++], record views
- record views [C++]
- forms [C++], data access tasks
ms.assetid: 562122d9-01d8-4284-acf6-ea109ab0408d
ms.openlocfilehash: 199f51f20dd42ee9105b4e09f579c1f48948745f
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59040199"
---
# <a name="record-views--mfc-data-access"></a>Visualizzazioni di record (accesso ai dati MFC)

Questa sezione si applica solo alle classi ODBC MFC. Per informazioni sulle visualizzazioni di record OLE DB, vedere [COleDBRecordView](../mfc/reference/coledbrecordview-class.md) e [utilizzo delle visualizzazioni di Record OLE DB](../data/oledb/using-ole-db-record-views.md).

Per supportare le applicazioni di accesso ai dati basato su form, la libreria di classi fornisce classi [CRecordView](../mfc/reference/crecordview-class.md). Una visualizzazione di record è un oggetto visualizzazione form i cui controlli sono associati direttamente ai membri di dati del campo di un [recordset](../data/odbc/recordset-odbc.md) oggetto (e indirettamente alle corrispondenti colonne in una tabella nell'origine dati o il risultato della query). Analogamente alla relativa classe base [CFormView](../mfc/reference/cformview-class.md), `CRecordView` si basa su una risorsa modello di finestra di dialogo.

## <a name="form-uses"></a>Usi dei form

I form possono essere usati per svariate attività di accesso ai dati:

- Immissione di dati

- Esame in sola lettura di dati

- Aggiornamento dei dati

## <a name="further-reading-about-record-views"></a>Altre informazioni sulle visualizzazioni di record

Il materiale fornito in questi argomenti è relativo sia alle classi basate su ODBC che a quelle basate su DAO. Usare `CRecordView` per ODBC e `CDaoRecordView` per DAO.

Gli argomenti trattati includono:

- [Funzionalità delle classi di visualizzazione di Record](../data/features-of-record-view-classes-mfc-data-access.md)

- [Scambio di dati per le visualizzazioni di Record](../data/data-exchange-for-record-views-mfc-data-access.md)

- [Ruolo del programmatore nell'uso di una visualizzazione di Record](../data/your-role-in-working-with-a-record-view-mfc-data-access.md)

- [Progettazione e creazione di una visualizzazione di Record](../data/designing-and-creating-a-record-view-mfc-data-access.md)

- [Uso di una visualizzazione di Record](../data/using-a-record-view-mfc-data-access.md)

## <a name="see-also"></a>Vedere anche

[Accesso ai dati (MFC/ATL) di programmazione](../data/data-access-programming-mfc-atl.md)<br/>
[Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)