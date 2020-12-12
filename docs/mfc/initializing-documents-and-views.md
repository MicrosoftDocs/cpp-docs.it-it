---
description: 'Altre informazioni su: inizializzazione di documenti e visualizzazioni'
title: Inizializzazione di documenti e visualizzazioni
ms.date: 11/04/2016
helpviewer_keywords:
- initializing documents [MFC]
- documents [MFC], initializing
- views [MFC], initializing
- initializing objects [MFC], document objects
- initializing views [MFC]
ms.assetid: 33cb8643-8a16-478c-bc26-eccc734e3661
ms.openlocfilehash: ea0840faefac0ae5a8b4cee0fe3b707a92737c70
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97208034"
---
# <a name="initializing-documents-and-views"></a>Inizializzazione di documenti e visualizzazioni

I documenti vengono creati in due modi diversi, pertanto la classe del documento deve supportare entrambi i metodi. Innanzitutto, l'utente può creare un nuovo documento vuoto utilizzando il comando Nuovo del menu File. In tal caso, inizializzare il documento nell'override della funzione membro [OnNewDocument](reference/cdocument-class.md#onnewdocument) della classe [CDocument](reference/cdocument-class.md). In secondo luogo, l'utente può utilizzare il comando Apri del menu File per creare un nuovo documento il cui contenuto viene letto da un file. In tal caso, inizializzare il documento nell'override della funzione membro [OnOpenDocument](reference/cdocument-class.md#onopendocument) della classe `CDocument` . Se entrambe le inizializzazioni sono uguali, è possibile chiamare una funzione membro comune da entrambi gli override oppure `OnOpenDocument` può chiamare `OnNewDocument` per inizializzare un documento pulito e quindi completare l'operazione di apertura.

Le visualizzazioni vengono create dopo che sono stati creati i documenti. Il momento migliore per inizializzare una visualizzazione è dopo che il framework ha completato la creazione del documento, della finestra cornice e della visualizzazione. È possibile inizializzare la vista eseguendo l'override della funzione membro [OnInitialUpdate](reference/cview-class.md#oninitialupdate) di [CView](reference/cview-class.md). Se è necessario reinizializzare o modificare qualsiasi elemento ogni volta che il documento cambia, è possibile eseguire l'override di [OnUpdate](reference/cview-class.md#onupdate).

## <a name="see-also"></a>Vedi anche

[Inizializzazione e pulizia di documenti e visualizzazioni](initializing-and-cleaning-up-documents-and-views.md)
