---
title: Posizione del controllo elemento albero | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CTreeCtrl class [MFC], item position
- item position in tree controls
- tree controls [MFC], item position
- position, CTreeCtrl items
ms.assetid: cd264344-2cf9-4d90-9ea8-c6900b6f60e7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7e24c21a8a44f09e9141b1763646d1a887bda158
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412093"
---
# <a name="tree-control-item-position"></a>Posizione degli elementi del controllo Tree

Posizione iniziale di un elemento viene impostato quando l'elemento viene aggiunto al controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) utilizzando il `InsertItem` funzione membro. La chiamata di funzione membro specifica l'handle dell'elemento padre e l'handle dell'elemento dopo il quale deve essere inserito il nuovo elemento. L'handle di secondo deve identificare un elemento figlio dell'elemento padre specificato o uno di questi valori: `TVI_FIRST`, `TVI_LAST`, o `TVI_SORT`.

Quando `TVI_FIRST` o `TVI_LAST` viene specificato, il controllo albero posiziona il nuovo elemento all'inizio o alla fine dell'elenco dell'elemento padre specificato di elementi figlio. Quando si `TVI_SORT` viene specificato, il controllo albero inserisce il nuovo elemento nell'elenco degli elementi figlio in ordine alfabetico in base al testo delle etichette degli elementi.

È possibile inserire un elemento padre dell'elenco di elementi figlio in ordine alfabetico chiamando il [funzione membro SortChildren](../mfc/reference/ctreectrl-class.md#sortchildren) funzione membro. Questa funzione include un parametro che specifica se tutti i livelli di elementi figlio contenuti nell'elemento padre specificato vengono anche ordinati in ordine alfabetico.

Il [SortChildrenCB](../mfc/reference/ctreectrl-class.md#sortchildrencb) funzione membro consente di ordinare gli elementi figlio in base ai criteri definiti. Quando si chiama questa funzione, si specifica una funzione di richiamata definita dall'applicazione che il controllo albero può chiamare ogni volta che l'ordine relativo di due elementi figlio deve specificare i valori relativi. La funzione di richiamata riceve due valori 32 bit definita dall'applicazione per gli elementi di cui eseguire il confronto e un terzo valore a 32 bit specificato quando si chiama `SortChildrenCB`.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

