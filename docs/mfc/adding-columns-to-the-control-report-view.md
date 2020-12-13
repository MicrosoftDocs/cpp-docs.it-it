---
description: 'Ulteriori informazioni su: aggiunta di colonne al controllo (visualizzazione report)'
title: Aggiunta di colonne al controllo (visualizzazione dei rapporti)
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], adding columns
- report view in CListCtrl class [MFC]
- views [MFC], report
- columns [MFC], adding to CListCtrl
- CListCtrl class [MFC], report view
ms.assetid: 7392c0d7-f8a5-4e7b-9ae7-b53dc9dd80ae
ms.openlocfilehash: 62e874f77d326b80a362791888e75df0a92781d6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339104"
---
# <a name="adding-columns-to-the-control-report-view"></a>Aggiunta di colonne al controllo (visualizzazione dei rapporti)

> [!NOTE]
> La procedura seguente si applica a un oggetto [CListView](reference/clistview-class.md) o [CListCtrl](reference/clistctrl-class.md) .

Quando un controllo elenco è in visualizzazione report, le colonne vengono visualizzate, fornendo un metodo per organizzare i vari elementi secondari di ogni elemento del controllo elenco. Questa organizzazione viene implementata con una corrispondenza uno-a-uno tra una colonna nel controllo elenco e l'elemento secondario associato dell'elemento del controllo elenco. Per ulteriori informazioni sugli elementi secondari, vedere [aggiunta di elementi al controllo](adding-items-to-the-control.md). Un esempio di controllo elenco nella visualizzazione report viene fornito dalla visualizzazione dettagli in Windows 95 e Windows 98 Explorer. Nella prima colonna sono elencate cartelle, icone di file ed etichette. Dimensioni del file di elenco altre colonne, tipo di file, data dell'Ultima modifica e così via.

Anche se le colonne possono essere aggiunte a un controllo elenco in qualsiasi momento, le colonne sono visibili solo quando per il controllo è `LVS_REPORT` attivato il bit di stile.

A ogni colonna è associato un elemento intestazione (vedere [CHeaderCtrl](reference/cheaderctrl-class.md)) che etichetta la colonna e consente agli utenti di ridimensionare la colonna.

Se il controllo elenco supporta la visualizzazione di un report, è necessario aggiungere una colonna per ogni possibile elemento secondario in un elemento di controllo elenco. Aggiungere una colonna preparando una struttura [LVCOLUMN](/windows/win32/api/commctrl/ns-commctrl-lvcolumnw) e quindi effettuando una chiamata a [InsertColumn](reference/clistctrl-class.md#insertcolumn). Dopo aver aggiunto le colonne necessarie, definite anche elementi di intestazione, è possibile riordinarle utilizzando funzioni membro e stili appartenenti al controllo intestazione incorporata. Per ulteriori informazioni, vedere [ordinamento degli elementi nel controllo Header](ordering-items-in-the-header-control.md).

> [!NOTE]
> Se il controllo elenco viene creato con lo stile **LVS_NOCOLUMNHEADER** , qualsiasi tentativo di inserire colonne verrà ignorato.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CListCtrl](using-clistctrl.md)<br/>
[Controlli](controls-mfc.md)
