---
description: 'Altre informazioni su: Document-Template classi'
title: Classi Document-Template
ms.date: 11/04/2016
helpviewer_keywords:
- document templates [MFC], classes
ms.assetid: 901749e9-8048-44a0-b5e2-361554650a73
ms.openlocfilehash: f9e67cc8f6a115345f6b1f42c2064fcbed7be47e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330268"
---
# <a name="document-template-classes"></a>Classi Document-Template

Gli oggetti modello di documento coordinano la creazione di oggetti finestra di documento, visualizzazione e cornice quando viene creato un nuovo documento o vista.

[CDocTemplate](reference/cdoctemplate-class.md)<br/>
Classe base per i modelli di documento. Questa classe non verrà mai utilizzata direttamente. usare invece una delle altre classi modello documento derivate da questa classe.

[CMultiDocTemplate](reference/cmultidoctemplate-class.md)<br/>
Modello per i documenti nell'interfaccia a documenti multipli (MDI). Le applicazioni MDI possono avere più documenti aperti alla volta.

[CSingleDocTemplate](reference/csingledoctemplate-class.md)<br/>
Modello per i documenti nell'interfaccia a documento singolo (SDI). Per le applicazioni SDI è aperto un solo documento alla volta.

## <a name="related-class"></a>Classe correlata

[CCreateContext](reference/ccreatecontext-structure.md)<br/>
Struttura passata da un modello di documento alle funzioni di creazione di finestre per coordinare la creazione di oggetti documento, visualizzazione e finestra cornice.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
