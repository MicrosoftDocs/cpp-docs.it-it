---
title: Gli attributi di controllo scheda e schede | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- attributes [MFC], reference topics
- tab controls [MFC], attributes
- tabs [MFC]
- tabs [MFC], attributes
- CTabCtrl class [MFC], tab control attributes
ms.assetid: ecf190cb-f323-4751-bfdb-766dbe6bb553
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f925f8b6a5c522e22890ee2c1082ae8d709d2220
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33381193"
---
# <a name="tabs-and-tab-control-attributes"></a>Schede e attributi del controllo Tab
Si dispone di controllo elevato sull'aspetto e il comportamento delle schede che costituiscono un controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)). Ogni scheda può avere un'etichetta, un'icona, lo stato di un elemento e un valore a 32 bit definito dall'applicazione associata. Per ogni scheda, è possibile visualizzare l'icona, l'etichetta o entrambi.  
  
 Inoltre, ogni elemento di scheda può avere tre stati possibili: premuto, inattivo o evidenziato. Questo stato può essere impostato solo modificando un elemento di una scheda. Per modificare un elemento di scheda esistente, recuperare con una chiamata a [GetItem](../mfc/reference/ctabctrl-class.md#getitem), modificare il `TCITEM` struttura (in particolare il **dwState** e **dwStateMask** membri dati ) e quindi restituire modificato `TCITEM` struttura con una chiamata a [funzione membro SetItem](../mfc/reference/ctabctrl-class.md#setitem). Se è necessario cancellare gli stati di tutti gli elementi della scheda in un `CTabCtrl` oggetto, effettuare una chiamata a [DeselectAll](../mfc/reference/ctabctrl-class.md#deselectall). Questa funzione Reimposta lo stato di tutti gli elementi della scheda o tutti gli elementi ad eccezione di quello attualmente selezionato.  
  
 Il codice seguente cancella lo stato di tutti gli elementi della scheda e quindi viene modificato lo stato del terzo elemento:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#32](../mfc/codesnippet/cpp/tabs-and-tab-control-attributes_1.cpp)]  
  
 Per ulteriori informazioni sugli attributi di scheda, vedere [schede e attributi Tab](http://msdn.microsoft.com/library/windows/desktop/bb760550) in Windows SDK. Per ulteriori informazioni sull'aggiunta di schede a un controllo struttura a schede, vedere [aggiunta di schede a un controllo Tab](../mfc/adding-tabs-to-a-tab-control.md) più avanti in questo argomento.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

