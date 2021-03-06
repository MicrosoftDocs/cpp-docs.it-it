---
description: 'Altre informazioni su: scambio di dati'
title: Scambio di dati
ms.date: 11/04/2016
helpviewer_keywords:
- property sheets [MFC], data exchange
- exchanging data with property sheets [MFC]
- DDX (dialog data exchange) [MFC], property sheets
ms.assetid: 689f02d0-51a9-455b-8ffb-5b44f0aefa28
ms.openlocfilehash: 9163434d51e3fa248f858434aece8f420e63197d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97290446"
---
# <a name="exchanging-data"></a>Scambio di dati

Come per la maggior parte delle finestre di dialogo, lo scambio di dati tra la finestra delle proprietà e l'applicazione è una delle funzioni più importanti della finestra delle proprietà. Questo articolo descrive come eseguire questa attività.

Lo scambio di dati con una finestra delle proprietà è in realtà una cosa che riguarda lo scambio di dati con le singole pagine delle proprietà della finestra delle proprietà. La procedura per lo scambio di dati con una pagina delle proprietà è identica a quella per lo scambio di dati con una finestra di dialogo, poiché un oggetto [CPropertyPage](reference/cpropertypage-class.md) è solo un oggetto di [CDialog](reference/cdialog-class.md) specializzato. La procedura sfrutta la funzione DDX (Dialog Data Exchange) del Framework, che scambia i dati tra i controlli in una finestra di dialogo e le variabili membro dell'oggetto finestra di dialogo.

La differenza importante tra lo scambio di dati con una finestra delle proprietà e con una normale finestra di dialogo è che la finestra delle proprietà include più pagine, quindi è necessario scambiare dati con tutte le pagine della finestra delle proprietà. Per ulteriori informazioni su DDX, vedere [Dialog Data Exchange and Validation](dialog-data-exchange-and-validation.md).

Nell'esempio seguente viene illustrato lo scambio di dati tra una visualizzazione e due pagine di una finestra delle proprietà:

[!code-cpp[NVC_MFCDocView#4](codesnippet/cpp/exchanging-data_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Finestre delle proprietà](property-sheets-mfc.md)
