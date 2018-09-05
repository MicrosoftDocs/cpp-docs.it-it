---
title: Classi di finestra ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ATL, windows
- windows [C++], subclassing
- windows [C++], superclassing
- windows [C++], ATL
- subclassing ATL window classes
- superclassing
- superclassing, ATL
ms.assetid: 1d12b708-de3e-49d5-9e41-42fe4769fa62
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e67849da9eebf9f150c4363e05a6f3fdcb943c0d
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43756389"
---
# <a name="atl-window-classes"></a>Classi di finestra ATL

ATL include diverse classi che consentono di usare e implementare le finestre. Queste classi, come le altre classi ATL, forniscono un'implementazione efficiente che non impone un sovraccarico nel codice.

In questa sezione vengono descritte le classi di finestra ATL e spiega come usarli.

## <a name="in-this-section"></a>In questa sezione

[Introduzione alle classi di finestra ATL](../atl/introduction-to-atl-window-classes.md)  
Descrive ogni classe di finestra ATL brevemente e vengono forniti collegamenti a materiale di riferimento su di essi.

[Uso di una finestra](../atl/using-a-window.md)  
Viene descritto come utilizzare `CWindow` per modificare una finestra.

[Implementazione di una finestra](../atl/implementing-a-window.md)  
Vengono illustrati i gestori di messaggi, le mappe messaggi e l'utilizzo `CWindowImpl`. Include informazioni dettagliate sulla creazione di superclassi e creazione di una sottoclasse.

[Implementazione di una finestra di dialogo](../atl/implementing-a-dialog-box.md)  
Illustra i due metodi per l'aggiunta di una classe di finestra di dialogo e viene illustrato un esempio di codice.

[Uso delle finestre contenute](../atl/using-contained-windows.md)  
Vengono illustrate le finestre contenute in ATL, che sono finestre che delegano i messaggi a un oggetto contenitore invece di gestirli nella propria classe.

[Informazioni sui tratti delle finestre](../atl/understanding-window-traits.md)  
Vengono illustrate le classi di finestra tratti in ATL. Queste classi forniscono un metodo semplice per la standardizzazione con gli stili usati per la creazione di un oggetto finestra.

## <a name="related-sections"></a>Sezioni correlate

[ATL](../atl/active-template-library-atl-concepts.md)  
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

[Classi di supporto per Windows](../atl/windows-support-classes.md)  
Elenca le classi ATL aggiuntive che supportano windows e mappe messaggi in ATL.

