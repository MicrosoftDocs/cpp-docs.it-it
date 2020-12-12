---
description: 'Ulteriori informazioni su: finestre delle proprietà e pagine delle proprietà (MFC)'
title: Finestre delle proprietà e pagine delle proprietà (MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], tabs
- property pages [MFC], property sheets
- CPropertyPage class [MFC], property sheets and pages
- CPropertySheet class [MFC], property sheets and pages
- property sheets, propert pages
ms.assetid: de8fea12-6c35-4cef-8625-b8073a379446
ms.openlocfilehash: 6819b890c699aeb428d2e0c76b048f5043e1dee7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248853"
---
# <a name="property-sheets-and-property-pages-mfc"></a>Finestre delle proprietà e pagine delle proprietà (MFC)

Una finestra di [dialogo](../mfc/dialog-boxes.md) MFC può assumere una "finestra di dialogo a schede" incorporando le finestre delle proprietà e le pagine delle proprietà. Denominata "finestra delle proprietà" in MFC, questo tipo di finestra di dialogo, simile a molte finestre di dialogo in Microsoft Word, Excel e Visual C++, sembra contenere uno stack di fogli a schede, molto simile a uno stack di cartelle di file visualizzato dall'inizio al retro o a un gruppo di finestre a cascata. I controlli nella scheda anteriore sono visibili; nelle schede posteriori è visibile solo la scheda con etichetta. Le finestre delle proprietà sono particolarmente utili per la gestione di un numero elevato di proprietà o impostazioni che rientrano in modo abbastanza accurato in diversi gruppi. In genere, una finestra delle proprietà può semplificare un'interfaccia utente sostituendo diverse finestre di dialogo separate.

A partire dalla versione 4,0 di MFC, le finestre delle proprietà e le pagine delle proprietà vengono implementate usando i controlli comuni disponibili in Windows 95 e Windows NT versione 3,51 e successive.

Le finestre delle proprietà vengono implementate con le classi [CPropertySheet](../mfc/reference/cpropertysheet-class.md) e [CPropertyPage](../mfc/reference/cpropertypage-class.md) (descritte in *riferimenti a MFC*). `CPropertySheet` definisce la finestra di dialogo complessiva, che può contenere più "pagine" basate su `CPropertyPage` .

Per informazioni sulla creazione e sull'utilizzo delle finestre delle proprietà, vedere l'argomento [finestre delle proprietà](../mfc/property-sheets-mfc.md).

## <a name="see-also"></a>Vedi anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[Finestre delle proprietà e pagine delle proprietà in MFC](../mfc/property-sheets-and-property-pages-in-mfc.md)<br/>
[Scambio di dati](../mfc/exchanging-data.md)<br/>
[Creazione di una finestra delle proprietà non modale](../mfc/creating-a-modeless-property-sheet.md)<br/>
[Gestione del pulsante applica](../mfc/handling-the-apply-button.md)
