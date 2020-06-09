---
title: Barra di finestra di dialogo
ms.date: 11/19/2018
helpviewer_keywords:
- MFC, control bars
- CDialogBar class [MFC], dialog bars
- control bars [MFC], dialog bars
- dialog bars
- dialog bars [MFC], about dialog bars
ms.assetid: 485c8055-6bb0-4051-8417-dd2971499321
ms.openlocfilehash: 052e0b8a085c052f73d3c6540521f57fdfbb9c51
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624891"
---
# <a name="dialog-bars"></a>Barra di finestra di dialogo

Una barra della finestra di dialogo è una barra degli strumenti, un tipo di [barra di controllo](control-bars.md) che può contenere qualsiasi tipo di controllo. Poiché presenta le caratteristiche di una finestra di dialogo non modale, un oggetto [CDialogBar](reference/cdialogbar-class.md) fornisce una barra degli strumenti più potente.

Esistono diverse differenze principali tra una barra degli strumenti e un `CDialogBar` oggetto. Un `CDialogBar` oggetto viene creato da una risorsa modello di finestra di dialogo, che è possibile creare con l'editor della finestra di dialogo Visual C++ e che può contenere qualsiasi tipo di controllo Windows. L'utente può scegliere la scheda dal controllo per controllare. È inoltre possibile specificare uno stile di allineamento per allineare la barra della finestra di dialogo a qualsiasi parte della finestra cornice padre oppure per lasciarla attiva se l'elemento padre viene ridimensionato. Nella figura seguente viene illustrata una barra di dialogo con diversi controlli.

![Barra della finestra di dialogo VC](../mfc/media/vc378t1.gif "Barra della finestra di dialogo VC") <br/>
Barra della finestra di dialogo

In altri casi, l'utilizzo di un `CDialogBar` oggetto è analogo all'utilizzo di una finestra di dialogo non modale. Utilizzare l'editor finestre per progettare e creare la risorsa finestra di dialogo.

Uno dei vantaggi delle barre di dialogo è che possono includere controlli diversi dai pulsanti.

Sebbene sia normale derivare le proprie classi di finestre di dialogo da `CDialog` , in genere non si deriva una classe personalizzata per una barra di dialogo. Le barre della finestra di dialogo sono estensioni a una finestra principale e qualsiasi messaggio di notifica del controllo della barra di dialogo, ad esempio **BN_CLICKED** o **EN_CHANGE**, verranno inviate all'elemento padre della barra della finestra di dialogo, la finestra principale.

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](user-interface-elements-mfc.md)<br/>
[Esempio](../overview/visual-cpp-samples.md)
