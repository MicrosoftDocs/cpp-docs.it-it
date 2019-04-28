---
title: Classi Document-Template
ms.date: 11/04/2016
f1_keywords:
- vc.classes.document
helpviewer_keywords:
- document templates [MFC], classes
ms.assetid: 901749e9-8048-44a0-b5e2-361554650a73
ms.openlocfilehash: 2589bc8f04e791f73529af91ffb148c2c717cd08
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62164988"
---
# <a name="document-template-classes"></a>Classi Document-Template

Gli oggetti modello di documento coordinano la creazione del documento e visualizzazione oggetti della finestra cornice quando un nuovo documento o vista viene creata.

[CDocTemplate](../mfc/reference/cdoctemplate-class.md)<br/>
La classe base per i modelli di documento. Questa classe non verrà mai utilizzato direttamente. è invece utilizzare una delle altre classi documento-modello derivate da questa classe.

[CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md)<br/>
Un modello per i documenti nell'interfaccia a documenti multipli (MDI). Le applicazioni MDI possono avere più documenti aperti alla volta.

[CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md)<br/>
Un modello per i documenti l'interfaccia a documento singolo (SDI). Le applicazioni SDI avere un solo documento aperto in un momento.

## <a name="related-class"></a>Classe correlata

[CCreateContext](../mfc/reference/ccreatecontext-structure.md)<br/>
Una struttura passati da un modello di documento per le funzioni di creazione della finestra per coordinare la creazione di oggetti documento, visualizzazione e finestra cornice.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
