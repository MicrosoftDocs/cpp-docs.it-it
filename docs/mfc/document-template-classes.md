---
title: Classi Document-Template | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.document
dev_langs:
- C++
helpviewer_keywords:
- document templates [MFC], classes
ms.assetid: 901749e9-8048-44a0-b5e2-361554650a73
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 87984bf06d8ca178d2a21ac8ff475f828690668e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46406061"
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

