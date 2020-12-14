---
description: 'Altre informazioni su: convalida dei dati della finestra di dialogo'
title: Convalida dei dati delle finestre di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- validating data [MFC], message boxes
- data validation [MFC], dialog boxes
- dialog boxes [MFC], validating data
- validating data [MFC], dialog box data entry
- DDV (dialog data validation) [MFC]
- data validation [MFC], message boxes
ms.assetid: f070c309-2044-4ff2-8c92-1ec1ea84af58
ms.openlocfilehash: 0e90aa54130a59b48058928f56d9d36644d5142b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261359"
---
# <a name="dialog-data-validation"></a>Convalida dei dati delle finestre di dialogo

È possibile specificare la convalida oltre allo scambio di dati chiamando le funzioni DDV, come illustrato nell'esempio in [Dialog Data Exchange](dialog-data-exchange.md). La `DDV_MaxChars` chiamata nell'esempio convalida che la stringa immessa nel controllo casella di testo non supera i 20 caratteri. In genere, la funzione DDV avvisa l'utente con una finestra di messaggio se la convalida ha esito negativo e attiva il controllo in modo che l'utente possa immettere nuovamente i dati. Una funzione DDV per un determinato controllo deve essere chiamata immediatamente dopo la funzione DDX per lo stesso controllo.

È anche possibile definire routine DDX e DDV personalizzate. Per informazioni dettagliate su questo e altri aspetti di DDX e DDV, vedere la [Nota tecnica 26 di MFC](tn026-ddx-and-ddv-routines.md).

La [procedura guidata Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md#add-member-variable-wizard) consente di scrivere tutte le chiamate DDX e DDV nella mappa dati.

## <a name="see-also"></a>Vedi anche

[Convalida e scambio di dati della finestra di dialogo](dialog-data-exchange-and-validation.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)<br/>
[DDX (Dialog Data Exchange)](dialog-data-exchange.md)
