---
description: 'Altre informazioni su: visualizzazioni di record (accesso ai dati MFC)'
title: Visualizzazioni di record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], record views
- ODBC recordsets [C++], record views
- databases [C++], record views
- record views [C++]
- forms [C++], data access tasks
ms.assetid: 562122d9-01d8-4284-acf6-ea109ab0408d
ms.openlocfilehash: 098a45c0bff0dfaf1aba83f12dddad9a5f943638
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319053"
---
# <a name="record-views--mfc-data-access"></a>Visualizzazioni di record (accesso ai dati MFC)

Questa sezione si applica solo alle classi ODBC MFC. Per informazioni sulle visualizzazioni di record OLE DB, vedere [COleDBRecordView](../mfc/reference/coledbrecordview-class.md) e [uso di OLE DB visualizzazioni di record](../data/oledb/using-ole-db-record-views.md).

Per supportare le applicazioni di accesso ai dati basate su form, la libreria di classi fornisce la classe [CRecordView](../mfc/reference/crecordview-class.md). Una visualizzazione di record è un oggetto visualizzazione form i cui controlli sono mappati direttamente ai membri dati del campo di un oggetto [Recordset](../data/odbc/recordset-odbc.md) (e indirettamente alle colonne corrispondenti in un risultato della query o in una tabella nell'origine dati). Analogamente alla classe base [CFormView](../mfc/reference/cformview-class.md), `CRecordView` si basa su una risorsa modello di finestra di dialogo.

## <a name="form-uses"></a>Usi dei form

I form possono essere usati per svariate attività di accesso ai dati:

- Immissione di dati

- Esame in sola lettura di dati

- Aggiornamento dei dati

## <a name="further-reading-about-record-views"></a>Altre informazioni sulle visualizzazioni di record

Il materiale fornito in questi argomenti è relativo sia alle classi basate su ODBC che a quelle basate su DAO. Usare `CRecordView` per ODBC e `CDaoRecordView` per DAO.

Gli argomenti includono:

- [Funzionalità delle classi di visualizzazione di record](../data/features-of-record-view-classes-mfc-data-access.md)

- [Scambio di dati per le visualizzazioni di record](../data/data-exchange-for-record-views-mfc-data-access.md)

- [Ruolo del programmatore nell'uso di una visualizzazione di record](../data/your-role-in-working-with-a-record-view-mfc-data-access.md)

- [Progettazione e creazione di una visualizzazione di record](../data/designing-and-creating-a-record-view-mfc-data-access.md)

- [Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)

## <a name="see-also"></a>Vedi anche

[Programmazione dell'accesso ai dati (MFC/ATL)](../data/data-access-programming-mfc-atl.md)<br/>
[Elenco di driver ODBC](../data/odbc/odbc-driver-list.md)
