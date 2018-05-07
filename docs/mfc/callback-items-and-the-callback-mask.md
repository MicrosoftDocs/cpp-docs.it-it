---
title: Elementi di callback e maschera di Callback | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- callback items in CListCtrl class [MFC]
- CListCtrl class [MFC], callback item and callback mask
ms.assetid: 67c1f76f-6144-453e-9376-6712f89430ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 95c896308970ffc6a2040657927dc127eee278ba
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="callback-items-and-the-callback-mask"></a>Elementi di callback e maschera di callback
Per ognuno dei relativi elementi, un controllo visualizzazione elenco in genere archivia il testo dell'etichetta, l'indice dell'elenco di icone dell'elemento, immagine e un set di bit di flag per lo stato dell'elemento. È possibile definire i singoli elementi come elementi di callback, sono utili se l'applicazione già archivia alcune informazioni per un elemento.  
  
 Per definire un elemento come elemento di callback, è necessario specificare i valori appropriati per il `pszText` e `iImage` i membri del **LV_ITEM** struttura (vedere [CListCtrl:: GetItem](../mfc/reference/clistctrl-class.md#getitem)). Se l'applicazione mantiene testo elemento o dell'elemento secondario, specificare il **LPSTR_TEXTCALLBACK** valore per il `pszText` membro. Se l'applicazione tiene traccia di icona per l'elemento, specificare il **I_IMAGECALLBACK** valore per il `iImage` membro.  
  
 Inoltre, per definire elementi di callback, è inoltre possibile modificare una maschera di callback del controllo. Questa maschera è un set di flag di bit che specificano gli stati di elemento per cui l'applicazione, anziché il controllo, vengono archiviati i dati correnti. Maschera di callback si applica a tutti gli elementi del controllo, a differenza di designazione dell'elemento di callback che viene applicato a un elemento specifico. Maschera di callback è zero per impostazione predefinita, vale a dire che il controllo tiene traccia di tutti gli stati degli elementi. Per modificare questo comportamento predefinito, inizializzare il filtro da qualsiasi combinazione dei valori seguenti:  
  
-   `LVIS_CUT` L'elemento è contrassegnato come un'operazione di taglia e Incolla.  
  
-   `LVIS_DROPHILITED` L'elemento viene evidenziato come destinazione di trascinamento e rilascio.  
  
-   `LVIS_FOCUSED` L'elemento ha lo stato attivo.  
  
-   `LVIS_SELECTED` L'elemento è selezionato.  
  
-   **LVIS_OVERLAYMASK** l'applicazione archivia l'indice dell'elenco immagini dell'immagine sovrapposta corrente per ogni elemento.  
  
-   **LVIS_STATEIMAGEMASK** l'applicazione archivia l'indice dell'elenco immagini dell'immagine dello stato corrente per ogni elemento.  
  
 Per ulteriori informazioni sul recupero e impostazione di questa maschera, vedere [CListCtrl:: GetCallbackMask](../mfc/reference/clistctrl-class.md#getcallbackmask) e [CListCtrl::SetCallbackMask](../mfc/reference/clistctrl-class.md#setcallbackmask).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

