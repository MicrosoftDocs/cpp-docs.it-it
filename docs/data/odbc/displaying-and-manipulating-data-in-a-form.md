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
ms.openlocfilehash: 6b663fabd0c87d9a2773e6f5a2796bcc8f57ce29
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213252"
---
# <a name="displaying-and-manipulating-data-in-a-form"></a>Visualizzazione e modifica di dati in un form

Molte applicazioni di accesso ai dati selezionano i dati e li visualizzano in campi in un modulo. La classe di database [CRecordView](../../mfc/reference/crecordview-class.md) fornisce un oggetto [CFormView](../../mfc/reference/cformview-class.md) direttamente connesso a un oggetto recordset. Nella visualizzazione di record viene utilizzato il [DDX (Dialog Data Exchange)](../../mfc/dialog-data-exchange-and-validation.md) per spostare i valori dei campi del record corrente dal recordset ai controlli nel form e per spostare nuovamente le informazioni aggiornate nel recordset. Il recordset utilizza a sua volta lo scambio di campi di record (RFX) per spostare i dati tra i membri dati del campo e le colonne corrispondenti in una tabella nell'origine dati.

È possibile utilizzare la creazione guidata applicazione MFC o **aggiungere la classe** , come descritto in aggiunta di [un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md), per creare la classe di visualizzazione e la classe recordset associata insieme.

La visualizzazione dei record e il relativo recordset vengono eliminati definitivamente quando si chiude il documento. Per altre informazioni sulle visualizzazioni di record, vedere [visualizzazioni di record](../../data/record-views-mfc-data-access.md). Per ulteriori informazioni su RFX, vedere [trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

## <a name="see-also"></a>Vedere anche

[ODBC e MFC](../../data/odbc/odbc-and-mfc.md)
