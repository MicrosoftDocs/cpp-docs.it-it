---
title: Aggiunta di colonne al controllo (visualizzazione dei Report) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CListCtrl class [MFC], adding columns
- report view in CListCtrl class [MFC]
- views [MFC], report
- columns [MFC], adding to CListCtrl
- CListCtrl class [MFC], report view
ms.assetid: 7392c0d7-f8a5-4e7b-9ae7-b53dc9dd80ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bf967a3a1557bdba8f372c6f277f62eb257befee
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46391995"
---
# <a name="adding-columns-to-the-control-report-view"></a>Aggiunta di colonne al controllo (visualizzazione dei rapporti)

> [!NOTE]
>  La procedura seguente si applica a entrambi una [CListView](../mfc/reference/clistview-class.md) oppure [CListCtrl](../mfc/reference/clistctrl-class.md) oggetto.

Quando un controllo elenco è in visualizzazione report, le colonne vengono visualizzate, fornendo un metodo di organizzare i vari elementi secondari di ciascun elemento controllo elenco. Questa organizzazione viene implementata con una corrispondenza uno a uno tra una colonna nel controllo elenco e l'elemento associato secondario dell'elemento controllo elenco. Per altre informazioni sugli elementi secondari, vedere [aggiunta di elementi al controllo](../mfc/adding-items-to-the-control.md). Un esempio di un controllo elenco nella visualizzazione di report avviene tramite la visualizzazione di dettagli in Windows 95 e Windows 98 Explorer. La prima colonna elenca cartella, le icone di file e le etichette. Le altre colonne elencano le dimensioni di file, tipo di file, data dell'ultima modificata e così via.

Anche se le colonne possono essere aggiunti a un controllo elenco in qualsiasi momento, le colonne sono visibili solo quando il controllo ha il `LVS_REPORT` bit di stile attivata.

Ogni colonna ha un elemento di intestazione associata (vedere [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) oggetto che la colonna delle etichette e consente agli utenti di ridimensionare la colonna.

Se il controllo di elenco supporta la visualizzazione di un report, è necessario aggiungere una colonna per ogni elemento secondario possibili in un elemento controllo elenco. Aggiungere una colonna per la preparazione di un' [LV_COLUMN](/windows/desktop/api/commctrl/ns-commctrl-taglvcolumna) struttura e quindi effettua una chiamata a [Inserisci colonna](../mfc/reference/clistctrl-class.md#insertcolumn). Dopo aver aggiunto le colonne necessarie (talvolta dette gli elementi di intestazione), è possibile riordinarli, usando le funzioni membro e gli stili che appartengono al controllo header incorporati. Per altre informazioni, vedere [ordinamento degli elementi nel controllo Header](../mfc/ordering-items-in-the-header-control.md).

> [!NOTE]
>  Se il controllo di elenco viene creato con il **LVS_NOCOLUMNHEADER** stile, qualsiasi tentativo di inserire colonne verrà ignorato.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

