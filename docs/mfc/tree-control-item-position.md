---
description: 'Altre informazioni su: posizione degli elementi del controllo Tree'
title: Posizione degli elementi del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- CTreeCtrl class [MFC], item position
- item position in tree controls
- tree controls [MFC], item position
- position, CTreeCtrl items
ms.assetid: cd264344-2cf9-4d90-9ea8-c6900b6f60e7
ms.openlocfilehash: 7eeab82c48344f7e16a31b8d6962007024277dfc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264071"
---
# <a name="tree-control-item-position"></a>Posizione degli elementi del controllo Tree

La posizione iniziale di un elemento viene impostata quando l'elemento viene aggiunto al controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) tramite la `InsertItem` funzione membro. La chiamata di funzione membro specifica l'handle dell'elemento padre e l'handle dell'elemento dopo il quale deve essere inserito il nuovo elemento. Il secondo handle deve identificare un elemento figlio dell'elemento padre specificato o uno dei valori seguenti: `TVI_FIRST` , `TVI_LAST` o `TVI_SORT` .

Quando `TVI_FIRST` `TVI_LAST` viene specificato o, il controllo struttura ad albero posiziona il nuovo elemento all'inizio o alla fine dell'elenco di elementi figlio dell'elemento padre specificato. Quando `TVI_SORT` si specifica, il controllo struttura ad albero inserisce il nuovo elemento nell'elenco di elementi figlio in ordine alfabetico in base al testo delle etichette dell'elemento.

È possibile inserire l'elenco di elementi figlio di un elemento padre in ordine alfabetico chiamando la funzione membro [SortChildren](../mfc/reference/ctreectrl-class.md#sortchildren) . Questa funzione include un parametro che specifica se tutti i livelli degli elementi figlio discendenti dall'elemento padre specificato vengono ordinati in ordine alfabetico.

La funzione membro [SortChildrenCB](../mfc/reference/ctreectrl-class.md#sortchildrencb) consente di ordinare gli elementi figlio in base ai criteri definiti dall'utente. Quando si chiama questa funzione, si specifica una funzione di callback definita dall'applicazione che può essere chiamata dal controllo albero ogni volta che deve essere deciso l'ordine relativo di due elementi figlio. La funzione di callback riceve i valori definiti dall'applicazione a 2 32 bit per gli elementi confrontati e un terzo valore a 32 bit specificato quando si chiama `SortChildrenCB` .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
