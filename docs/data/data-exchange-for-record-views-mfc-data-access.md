---
title: Scambio di dati per le visualizzazioni di record (accesso ai dati MFC)
ms.date: 11/19/2018
helpviewer_keywords:
- RFX (record field exchange), data exchange mechanism
- RFX (record field exchange), record views
- record views, data exchange
- DDX (dialog data exchange), record views
- RFX (record field exchange)
ms.assetid: abc52ca7-6997-47a7-98f3-f347f52b1f72
ms.openlocfilehash: a7c6714218b5891e078e750a974faed274e113c9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62397982"
---
# <a name="data-exchange-for-record-views---mfc-data-access"></a>Scambio di dati per le visualizzazioni di record (accesso ai dati MFC)

Quando si usa [Aggiungi classe](../mfc/reference/adding-an-mfc-odbc-consumer.md) per mappare i controlli nella risorsa modello di finestra di dialogo una visualizzazione di record ai campi di un recordset, il framework gestisce lo scambio di dati in entrambe le direzioni, ovvero dal recordset ai controlli e dai controlli al recordset. Il meccanismo DDX elimina la necessità di scrivere manualmente il codice per il trasferimento dei dati nelle due direzioni.

DDX per le visualizzazioni di record opera unitamente [RFX](../data/odbc/record-field-exchange-rfx.md) per i recordset della classe `CRecordset` (ODBC).  RFX Sposta i dati tra il record corrente dell'origine dati e i membri di dati di campo di un oggetto recordset. DDX sposta i dati dai membri dati di campi ai controlli nel form. Questa combinazione fornisce i dati per i controlli del form sia inizialmente sia quando l'utente si sposta da un record all'altro. Inoltre è in grado di spostare nuovamente nel recordset e quindi nell'origine dati i dati aggiornati.

La figura seguente mostra la relazione tra DDX e RFX per visualizzazioni di record.

![Finestra di dialogo&#45;scambio di dati e record&#45;campo exchange](../data/media/vc37xt1.gif "finestra di dialogo&#45;lo scambio di dati e record&#45;campo exchange")<br/>
DDX (Dialog Data Exchange) e RFX (Record Field Exchange)

Per altre informazioni su DDX, vedere [Convalida e DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange-and-validation.md). Per altre informazioni su RFX, vedere [campi di Record (RFX)](../data/odbc/record-field-exchange-rfx.md).

## <a name="see-also"></a>Vedere anche

[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)