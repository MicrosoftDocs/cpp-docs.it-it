---
title: 'Controlli ActiveX MFC: Proprietà'
ms.date: 11/04/2016
helpviewer_keywords:
- properties [MFC], ActiveX controls
- MFC ActiveX controls [MFC], properties
- properties [MFC]
ms.assetid: b678a53c-0d9e-476f-8aa0-23b80baaba46
ms.openlocfilehash: 5e01854e7ae7acdc33275351d0d26a76dfeabc9b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324324"
---
# <a name="mfc-activex-controls-properties"></a>Controlli ActiveX MFC: Proprietà

Un controllo ActiveX genera eventi per comunicare con il controllo contenitore. Il contenitore, in cambio, Usa i metodi e proprietà per comunicare con il controllo. Metodi e proprietà sono simili in uso e utilizzo generico, rispettivamente, per le funzioni membro e le variabili membro di una classe C++. Le proprietà sono membri di dati del controllo ActiveX che vengono esposti a qualsiasi altro contenitore. Proprietà forniscono un'interfaccia per le applicazioni che contengono controlli ActiveX, come i client di automazione e i contenitori di controlli ActiveX.

Le proprietà vengono chiamate anche gli attributi.

Per altre informazioni sui metodi di controllo di ActiveX, vedere l'articolo [controlli ActiveX MFC: Metodi](../mfc/mfc-activex-controls-methods.md).

Controlli ActiveX possono implementare le azioni e proprietà e metodi personalizzati. Classe `COleControl` fornisce un'implementazione per le proprietà predefinite. (Per un elenco completo delle proprietà predefinite, vedere l'articolo [controlli ActiveX MFC: Aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md).) Proprietà personalizzate, definite dallo sviluppatore, aggiungere funzionalità specializzate per un controllo ActiveX. Per altre informazioni, vedere [controlli ActiveX MFC: Aggiunta di proprietà personalizzate](../mfc/mfc-activex-controls-adding-custom-properties.md).

Sono supportate le proprietà predefinite e personalizzate, come i metodi, da un meccanismo che è costituito da una mappa di invio che gestisce le proprietà e metodi e funzioni membro esistente del `COleControl` classe. Inoltre, queste proprietà possono avere parametri che lo sviluppatore Usa per passare informazioni aggiuntive per il controllo.

Gli articoli seguenti illustrano proprietà del controllo ActiveX in modo più dettagliato:

- [Controlli ActiveX MFC: aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md)

- [Controlli ActiveX MFC: aggiunta di proprietà personalizzate](../mfc/mfc-activex-controls-adding-custom-properties.md)

- [Controlli ActiveX MFC: implementazione di proprietà avanzate](../mfc/mfc-activex-controls-advanced-property-implementation.md)

- [Controlli ActiveX MFC: accesso alle proprietà di ambiente](../mfc/mfc-activex-controls-accessing-ambient-properties.md)

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
