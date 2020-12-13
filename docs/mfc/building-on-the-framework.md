---
description: 'Altre informazioni su: compilazione nel Framework'
title: Compilazione nel framework
ms.date: 11/04/2016
helpviewer_keywords:
- application-specific classes [MFC]
- application framework [MFC], building applications
- applications [MFC]
- MFC, application development
ms.assetid: 883f0f19-866f-4221-8a3d-5607941dc8d0
ms.openlocfilehash: dd9423bb8cf80463631d6a39212db42ab94a67ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339787"
---
# <a name="building-on-the-framework"></a>Compilazione nel framework

Il ruolo di configurazione di un'applicazione con il framework MFC consiste nel fornire il codice sorgente specifico dell'applicazione e connettere i componenti definendo i messaggi e i comandi a cui rispondono. Si usano il linguaggio C++ e le tecniche C++ standard per derivare le classi specifiche dell'applicazione da quelle fornite dalla libreria di classi e per eseguire l'override del comportamento della classe di base.

Negli argomenti correlati, le tabelle seguenti descrivono la sequenza generale delle operazioni che si seguono in genere e le responsabilità rispetto a quelle del Framework:

- [Sequenza per la compilazione di un'applicazione con il Framework](sequence-of-operations-for-building-mfc-applications.md)

- [Sequenza di operazioni per la creazione di applicazioni OLE](sequence-of-operations-for-creating-ole-applications.md)

- [Sequenza di operazioni per la creazione di controlli ActiveX](sequence-of-operations-for-creating-activex-controls.md)

- [Sequenza di operazioni per la creazione di applicazioni di database](sequence-of-operations-for-creating-database-applications.md)

Nella maggior parte dei casi, è possibile seguire queste tabelle come sequenza di passaggi per la creazione di un'applicazione MFC, sebbene alcuni passaggi siano opzioni alternative. Per la maggior parte delle applicazioni, ad esempio, viene utilizzato un tipo di classe di visualizzazione dei diversi tipi disponibili.

## <a name="see-also"></a>Vedi anche

[Argomenti MFC generali](general-mfc-topics.md)
