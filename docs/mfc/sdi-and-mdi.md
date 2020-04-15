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
ms.openlocfilehash: 9730e7baf9589c4b05a60703c619aae2e941bdec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372766"
---
# <a name="sdi-and-mdi"></a>SDI e MDI

MFC semplifica l'utilizzo di applicazioni con interfaccia a documento singolo (SDI) e MDI (Multiple Document Interface).

Le applicazioni SDI consentono una sola finestra cornice di documento aperta alla volta. Le applicazioni MDI consentono l'apertura di più finestre cornice di documento nella stessa istanza di un'applicazione. Un'applicazione MDI dispone di una finestra all'interno della quale è possibile aprire più finestre figlio MDI, che sono finestre cornice, ognuna contenente un documento separato. In alcune applicazioni, le finestre figlio possono essere di tipi diversi, ad esempio le finestre del grafico e del foglio di calcolo. In tal caso, la barra dei menu può cambiare quando vengono attivate le finestre figlio MDI di tipi diversi.

> [!NOTE]
> In Windows 95 e versioni successive, le applicazioni sono in genere SDI perché il sistema operativo ha adottato una visualizzazione "document-centered".

Per ulteriori informazioni, vedere [Documenti, visualizzazioni e Framework](../mfc/documents-views-and-the-framework.md).

## <a name="see-also"></a>Vedere anche

[Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
