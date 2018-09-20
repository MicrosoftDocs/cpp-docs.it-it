---
title: Compilazione nel Framework | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- application-specific classes [MFC]
- application framework [MFC], building applications
- applications [MFC]
- MFC, application development
ms.assetid: 883f0f19-866f-4221-8a3d-5607941dc8d0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4ca0ebd9bf03df8725c14df8d2aca1f7858b7b65
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46396181"
---
# <a name="building-on-the-framework"></a>Compilazione nel framework

Il ruolo nella configurazione di un'applicazione con il framework MFC consiste nel fornire il codice sorgente specifiche dell'applicazione e per connettere i componenti definendo quali i messaggi e comandi a cui rispondono. Si usa il linguaggio C++ e le tecniche standard di C++ per derivare classi personalizzate specifiche dell'applicazione rispetto a quelli forniti dalla libreria di classi e per eseguire l'override e migliorare il comportamento della classe di base.

Negli argomenti correlati, le tabelle seguenti descrivono la sequenza generale di operazioni in genere seguirà e le responsabilità del cliente e le responsabilità del framework:

- [Sequenza per la creazione di un'applicazione con il Framework](../mfc/sequence-of-operations-for-building-mfc-applications.md)

- [Sequenza delle operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)

- [Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)

- [Sequenza delle operazioni per la creazione di applicazioni di database](../mfc/sequence-of-operations-for-creating-database-applications.md)

Nella maggior parte, è possibile seguire queste tabelle come una sequenza di passaggi per la creazione di un'applicazione MFC, anche se alcuni dei passaggi sono opzioni alternative. La maggior parte delle applicazioni, ad esempio, usano un tipo di classe di visualizzazione dai vari tipi disponibili.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)

