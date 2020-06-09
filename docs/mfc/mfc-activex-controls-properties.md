---
title: 'Controlli ActiveX MFC: proprietà'
ms.date: 11/04/2016
helpviewer_keywords:
- properties [MFC], ActiveX controls
- MFC ActiveX controls [MFC], properties
- properties [MFC]
ms.assetid: b678a53c-0d9e-476f-8aa0-23b80baaba46
ms.openlocfilehash: c7ed0fddea660409f5089159b71d39a29b01d538
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618175"
---
# <a name="mfc-activex-controls-properties"></a>Controlli ActiveX MFC: proprietà

Un controllo ActiveX genera eventi per comunicare con il relativo contenitore di controlli. Il contenitore, in return, USA i metodi e le proprietà per comunicare con il controllo. I metodi e le proprietà sono simili in uso e scopo rispettivamente alle funzioni membro e alle variabili membro di una classe C++. Le proprietà sono membri dati del controllo ActiveX esposti a qualsiasi contenitore. Le proprietà forniscono un'interfaccia per le applicazioni che contengono controlli ActiveX, ad esempio i client di automazione e i contenitori di controlli ActiveX.

Le proprietà sono denominate anche attributi.

Per ulteriori informazioni sui metodi di controllo ActiveX, vedere l'articolo [controlli ActiveX MFC: Metodi](mfc-activex-controls-methods.md).

I controlli ActiveX possono implementare proprietà e metodi personalizzati. `COleControl`La classe fornisce un'implementazione per le proprietà predefinite. Per un elenco completo delle proprietà predefinite, vedere l'articolo [controlli ActiveX MFC: aggiunta di proprietà predefinite](mfc-activex-controls-adding-stock-properties.md). Le proprietà personalizzate, definite dallo sviluppatore, aggiungono funzionalità specializzate a un controllo ActiveX. Per ulteriori informazioni, vedere [controlli ActiveX MFC: aggiunta di proprietà personalizzate](mfc-activex-controls-adding-custom-properties.md).

Le proprietà personalizzate e predefinite, come i metodi, sono supportate da un meccanismo costituito da una mappa di invio che gestisce proprietà e metodi e funzioni membro esistenti della `COleControl` classe. Inoltre, queste proprietà possono avere parametri che lo sviluppatore usa per passare informazioni aggiuntive al controllo.

Gli articoli seguenti illustrano le proprietà del controllo ActiveX in modo più dettagliato:

- [Controlli ActiveX MFC: aggiunta di proprietà predefinite](mfc-activex-controls-adding-stock-properties.md)

- [Controlli ActiveX MFC: aggiunta di proprietà personalizzate](mfc-activex-controls-adding-custom-properties.md)

- [Controlli ActiveX MFC: implementazione di proprietà avanzate](mfc-activex-controls-advanced-property-implementation.md)

- [Controlli ActiveX MFC: accesso a proprietà di ambiente](mfc-activex-controls-accessing-ambient-properties.md)

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
