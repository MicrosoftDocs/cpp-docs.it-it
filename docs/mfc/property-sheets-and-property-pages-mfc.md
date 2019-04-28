---
title: Finestre delle proprietà e pagine delle proprietà (MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], tabs
- property pages [MFC], property sheets
- CPropertyPage class [MFC], property sheets and pages
- CPropertySheet class [MFC], property sheets and pages
- property sheets, propert pages
ms.assetid: de8fea12-6c35-4cef-8625-b8073a379446
ms.openlocfilehash: 7ff2851cc4ed04a64f1a49d68b6e3143b5edccd8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62297023"
---
# <a name="property-sheets-and-property-pages-mfc"></a>Finestre delle proprietà e pagine delle proprietà (MFC)

MFC [finestra di dialogo](../mfc/dialog-boxes.md) può assumere uno sguardo "scheda della finestra" incorporando le finestre delle proprietà e pagine delle proprietà. Chiamata una "finestra delle proprietà" in MFC, questo tipo di finestra di dialogo simile a molte finestre di dialogo in Microsoft Word, Excel e Visual C++, sembra contenere una pila di finestre a schede, molto simile a una pila di cartelle del file visualizzato da fronte a retro o un gruppo di finestre sovrapposte. Controlli della scheda front sono visibili; solo la scheda con etichetta è visibile nelle schede posteriore. Finestre delle proprietà sono particolarmente utili per gestire un numero elevato di proprietà o le impostazioni che possono essere suddivise in diversi gruppi. In genere, una finestra delle proprietà consente di semplificare un'interfaccia utente mediante la sostituzione diverse finestre di dialogo separate.

A partire dalla versione 4.0 di MFC, le finestre delle proprietà e pagine delle proprietà vengono implementate mediante i controlli comuni che è disponibile con Windows 95 e Windows NT versione 3.51 e successiva.

Finestre delle proprietà vengono implementate con le classi [CPropertySheet](../mfc/reference/cpropertysheet-class.md) e [CPropertyPage](../mfc/reference/cpropertypage-class.md) (descritto nel *riferimenti alla libreria MFC*). `CPropertySheet` definisce la finestra di dialogo generale, che può contenere più "pagine" basate `CPropertyPage`.

Per informazioni sulla creazione e utilizzo delle finestre delle proprietà, vedere l'argomento [finestre delle proprietà](../mfc/property-sheets-mfc.md).

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[Finestre delle proprietà e pagine delle proprietà in MFC](../mfc/property-sheets-and-property-pages-in-mfc.md)<br/>
[Scambio di dati](../mfc/exchanging-data.md)<br/>
[Creazione di una finestra delle proprietà non modale](../mfc/creating-a-modeless-property-sheet.md)<br/>
[Gestione del pulsante Applica](../mfc/handling-the-apply-button.md)
