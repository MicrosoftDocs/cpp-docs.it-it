---
title: SDI e MDI
ms.date: 11/04/2016
helpviewer_keywords:
- frame windows [MFC], SDI applications
- frame windows [MFC], MDI applications
- MFC, windows
- single document interface (SDI) [MFC], applications
- MDI [MFC], vs. SDI
ms.assetid: bb7239d9-4759-4f63-bfff-44a04b48c067
ms.openlocfilehash: 725249e5a71e8ee097c641e5972e3cc8bb0e3e33
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62308532"
---
# <a name="sdi-and-mdi"></a>SDI e MDI

MFC semplifica funzionare con interfaccia a documento singolo (SDI) e le applicazioni di interfaccia a documenti multipli (MDI).

Le applicazioni SDI consentono solo una finestra cornice di documento aperto in una fase. Le applicazioni MDI consentono di documento più finestre cornice aperto nella stessa istanza di un'applicazione. Un'applicazione MDI con una finestra in cui MDI più finestre figlio, che sono anch'esse finestre cornice, possono essere aperto, ognuno dei quali contiene un documento separato. In alcune applicazioni, le finestre figlio possono essere di tipi diversi, ad esempio grafico windows e windows di foglio di calcolo. In tal caso, la barra dei menu è possibile modificare come vengono attivate finestre figlio MDI di tipi diversi.

> [!NOTE]
>  In Windows 95 e versioni successive, le applicazioni sono comunemente SDI perché il sistema operativo ha adottato una visualizzazione "incentrata sul documento".

Per altre informazioni, vedere [documenti, visualizzazioni e Framework](../mfc/documents-views-and-the-framework.md).

## <a name="see-also"></a>Vedere anche

[Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
