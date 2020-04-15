---
title: Aggiunta di colonne al controllo (visualizzazione dei rapporti)
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], adding columns
- report view in CListCtrl class [MFC]
- views [MFC], report
- columns [MFC], adding to CListCtrl
- CListCtrl class [MFC], report view
ms.assetid: 7392c0d7-f8a5-4e7b-9ae7-b53dc9dd80ae
ms.openlocfilehash: 34d7b62985748b9b9d741c083ec9b34fce06b309
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370880"
---
# <a name="adding-columns-to-the-control-report-view"></a>Aggiunta di colonne al controllo (visualizzazione dei rapporti)

> [!NOTE]
> La procedura seguente si applica a un [CListView](../mfc/reference/clistview-class.md) o [CListCtrl](../mfc/reference/clistctrl-class.md) oggetto.

Quando un controllo elenco è in visualizzazione report, vengono visualizzate colonne, fornendo un metodo per organizzare i vari elementi secondari di ogni elemento del controllo elenco. Questa organizzazione viene implementata con una corrispondenza uno-a-uno tra una colonna nel controllo elenco e l'elemento secondario associato dell'elemento del controllo elenco. Per ulteriori informazioni sugli elementi secondari, vedere [Aggiunta di elementi al controllo](../mfc/adding-items-to-the-control.md). Un esempio di controllo elenco nella visualizzazione report viene fornito dalla visualizzazione Dettagli in Esplora risorse di Windows 95 ed Windows 98. La prima colonna elenca la cartella, le icone dei file e le etichette. Altre colonne elencano le dimensioni del file, il tipo di file, la data dell'ultima modifica e così via.

Anche se le colonne possono essere aggiunte a un controllo elenco in `LVS_REPORT` qualsiasi momento, le colonne sono visibili solo quando il bit di stile del controllo è attivato.

A ogni colonna è associato un oggetto elemento di intestazione (vedere [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) che etichetta la colonna e consente agli utenti di ridimensionare la colonna.

Se il controllo elenco supporta una visualizzazione report, è necessario aggiungere una colonna per ogni elemento secondario possibile in un elemento del controllo elenco. Aggiungere una colonna preparando una struttura [LVCOLUMN](/windows/win32/api/commctrl/ns-commctrl-lvcolumnw) e quindi effettuando una chiamata a [InsertColumn](../mfc/reference/clistctrl-class.md#insertcolumn). Dopo aver aggiunto le colonne necessarie (talvolta definite elementi di intestazione), è possibile riordinarle utilizzando le funzioni membro e gli stili appartenenti al controllo intestazione incorporato. Per ulteriori informazioni, vedere [Ordinamento di elementi nel controllo Header](../mfc/ordering-items-in-the-header-control.md).

> [!NOTE]
> Se il controllo elenco viene creato con lo stile **LVS_NOCOLUMNHEADER,** qualsiasi tentativo di inserimento di colonne verrà ignorato.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
