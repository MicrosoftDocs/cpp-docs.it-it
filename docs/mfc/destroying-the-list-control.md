---
title: Eliminazione definitiva del controllo elenco | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- list controls [MFC], destroying
- CListCtrl class [MFC], destroying controls
ms.assetid: 513ec820-3a02-49d2-b073-a6a7a3fc91b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 01cdbc0f404c34a8c5ebc3ae09adf30e0cea0851
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43215042"
---
# <a name="destroying-the-list-control"></a>Eliminazione definitiva del controllo List
Se si incorpora il [CListCtrl](../mfc/reference/clistctrl-class.md) dell'oggetto di un membro dati di una classe di finestra di dialogo o visualizzazione, viene eliminato definitivamente quando viene eliminato il relativo proprietario. Se si usa un' [CListView](../mfc/reference/clistview-class.md), il framework Elimina definitivamente il controllo quando la visualizzazione viene eliminata.  
  
 Se le Disponi per alcuni dati elenco da archiviare nell'applicazione anziché con il controllo elenco, è necessario disporre della relativa deallocazione. Per altre informazioni, vedere [elementi di Callback e maschera di Callback](/windows/desktop/Controls/using-list-view-controls) nel SDK di Windows.  
  
 Inoltre, è responsabile per la deallocazione qualsiasi elenchi di immagini è creato e associato all'oggetto di controllo elenco.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

