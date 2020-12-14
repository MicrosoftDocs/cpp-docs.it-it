---
description: 'Altre informazioni su: SDI e MDI'
title: SDI e MDI
ms.date: 11/04/2016
helpviewer_keywords:
- frame windows [MFC], SDI applications
- frame windows [MFC], MDI applications
- MFC, windows
- single document interface (SDI) [MFC], applications
- MDI [MFC], vs. SDI
ms.assetid: bb7239d9-4759-4f63-bfff-44a04b48c067
ms.openlocfilehash: bfa54db04a657507b4b491ada6e8f08d17c2d1c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217783"
---
# <a name="sdi-and-mdi"></a>SDI e MDI

MFC semplifica l'utilizzo delle applicazioni con interfaccia a documenti singoli (SDI) e interfaccia a documenti multipli (MDI).

Le applicazioni SDI consentono una sola finestra del frame del documento aperta alla volta. Le applicazioni MDI consentono l'apertura di più finestre cornice di documento nella stessa istanza di un'applicazione. Un'applicazione MDI dispone di una finestra in cui è possibile aprire più finestre figlio MDI, che sono finestre cornice, ciascuna contenente un documento separato. In alcune applicazioni, le finestre figlio possono essere di tipi diversi, ad esempio finestre del grafico e finestre dei fogli di calcolo. In tal caso, la barra dei menu può essere modificata quando vengono attivate le finestre figlio MDI di tipi diversi.

> [!NOTE]
> In Windows 95 e versioni successive, le applicazioni sono in genere SDI perché il sistema operativo ha adottato una visualizzazione "Document-centered".

Per ulteriori informazioni, vedere [documenti, visualizzazioni e Framework](../mfc/documents-views-and-the-framework.md).

## <a name="see-also"></a>Vedi anche

[Utilizzo delle classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
