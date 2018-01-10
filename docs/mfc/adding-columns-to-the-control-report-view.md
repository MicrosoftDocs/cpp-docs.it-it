---
title: Aggiunta di colonne al controllo (visualizzazione dei rapporti) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CListCtrl class [MFC], adding columns
- report view in CListCtrl class [MFC]
- views [MFC], report
- columns [MFC], adding to CListCtrl
- CListCtrl class [MFC], report view
ms.assetid: 7392c0d7-f8a5-4e7b-9ae7-b53dc9dd80ae
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c08a497b80b01523dd66bb02b657d611193ed11c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-columns-to-the-control-report-view"></a>Aggiunta di colonne al controllo (visualizzazione dei rapporti)
> [!NOTE]
>  La procedura seguente si applica a uno un [CListView](../mfc/reference/clistview-class.md) o [CListCtrl](../mfc/reference/clistctrl-class.md) oggetto.  
  
 Quando un controllo elenco è in visualizzazione report, le colonne vengono visualizzate, fornendo un metodo per organizzare i vari elementi secondari di ciascun elemento controllo elenco. Questa organizzazione è implementata con una corrispondenza tra una colonna nel controllo elenco e l'elemento secondario dell'elemento del controllo elenco associato. Per ulteriori informazioni sugli elementi secondari, vedere [aggiunta di elementi al controllo](../mfc/adding-items-to-the-control.md). Un esempio di un controllo elenco nella visualizzazione di report è disponibile per la visualizzazione dei dettagli in Windows 95 e Windows 98 Explorer. La prima colonna elenca cartella, le icone di file e le etichette. Nelle altre colonne sono elencate dimensioni del file, il tipo di file, data dell'ultima modificata e così via.  
  
 Anche se le colonne possono essere aggiunti a un controllo elenco in qualsiasi momento, le colonne sono visibili solo quando il controllo ha il `LVS_REPORT` bit di stile acceso.  
  
 Ogni colonna ha un elemento di intestazione associata (vedere [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) oggetto che le etichette di colonna e consente agli utenti di ridimensionare la colonna.  
  
 Se il controllo elenco supporta una visualizzazione di report, è necessario aggiungere una colonna per ogni eventuale elemento secondario in un elemento controllo elenco. Aggiungere una colonna preparando un [LV_COLUMN](http://msdn.microsoft.com/library/windows/desktop/bb774743) struttura e quindi effettua una chiamata a [Inserisci colonna](../mfc/reference/clistctrl-class.md#insertcolumn). Dopo aver aggiunto le colonne necessarie (dette anche gli elementi di intestazione), è possibile riordinarle utilizzando le funzioni membro e gli stili appartenenti al controllo header incorporato. Per ulteriori informazioni, vedere [ordinamento degli elementi nel controllo Header](../mfc/ordering-items-in-the-header-control.md).  
  
> [!NOTE]
>  Se il controllo elenco viene creato con il **LVS_NOCOLUMNHEADER** stile, qualsiasi tentativo di inserire le colonne verrà ignorato.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

