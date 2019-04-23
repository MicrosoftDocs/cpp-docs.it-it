---
title: Visualizzazione e modifica di dati in un form
ms.date: 11/04/2016
helpviewer_keywords:
- forms [C++], displaying data
- displaying data [C++], forms
- ODBC [C++], forms
- record views [C++], displaying data
- data [MFC]
- data [MFC], displaying in a form
ms.assetid: c56185c4-12cb-40b1-b499-02b29ea83e3a
ms.openlocfilehash: e50c433e701fbae2e607d79d7abb34efe8eba5b5
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59033748"
---
# <a name="displaying-and-manipulating-data-in-a-form"></a>Visualizzazione e modifica di dati in un form

Molte applicazioni di accesso ai dati selezionano i dati e visualizzarli nei campi in un form. La classe di database [CRecordView](../../mfc/reference/crecordview-class.md) ti offre una [CFormView](../../mfc/reference/cformview-class.md) oggetto connesso direttamente a un oggetto recordset. Usa la visualizzazione di record [DDX (DDX)](../../mfc/dialog-data-exchange-and-validation.md) per spostare i valori dei campi del record corrente dal recordset ai controlli nel form e per riportare informazioni aggiornate per il recordset. Il recordset, Usa a sua volta, il trasferimento di campi di record (RFX) per spostare dati tra i relativi membri dati dei campi e le colonne corrispondenti in una tabella nell'origine dati.

È possibile usare la creazione guidata applicazione MFC o **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) per creare la classe di visualizzazione e la relativa classe recordset associato insieme.

Visualizzazione di record e recordset relativi vengono eliminati definitivamente quando si chiude il documento. Per altre informazioni sulle visualizzazioni di record, vedere [visualizzazioni di Record](../../data/record-views-mfc-data-access.md). Per altre informazioni su RFX, vedere [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

## <a name="see-also"></a>Vedere anche

[ODBC e MFC](../../data/odbc/odbc-and-mfc.md)