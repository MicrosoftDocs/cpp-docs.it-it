---
title: Elementi di callback e maschera di callback
ms.date: 11/04/2016
helpviewer_keywords:
- callback items in CListCtrl class [MFC]
- CListCtrl class [MFC], callback item and callback mask
ms.assetid: 67c1f76f-6144-453e-9376-6712f89430ae
ms.openlocfilehash: b48f203ae2f0ac0089e30c77e529c6a5eec8822b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50659654"
---
# <a name="callback-items-and-the-callback-mask"></a>Elementi di callback e maschera di callback

Per ognuno dei relativi elementi, un controllo visualizzazione elenco è in genere archivia il testo dell'etichetta, l'indice dell'elenco di immagini di icone dell'elemento, e i flag di un set di bit per lo stato dell'elemento. È possibile definire i singoli elementi come elementi di callback, che sono utili se l'applicazione già archivia alcune informazioni per un elemento.

Per definire un elemento come un elemento di callback, specificare i valori appropriati per il `pszText` e `iImage` i membri delle **LV_ITEM** struttura (vedere [CListCtrl:: GetItem](../mfc/reference/clistctrl-class.md#getitem)). Se l'applicazione mantiene il testo dell'elemento o dell'elemento secondario, specificare il **LPSTR_TEXTCALLBACK** valore per il `pszText` membro. Se l'applicazione tiene traccia dell'icona per l'elemento, specificare il **I_IMAGECALLBACK** valore per il `iImage` membro.

Oltre a definire elementi di callback, è inoltre possibile modificare una maschera di callback del controllo. Questa maschera è un set di flag di bit che specificano gli stati di elemento per cui l'applicazione, anziché il controllo, vengono archiviati i dati correnti. Maschera di callback si applica a tutti gli elementi del controllo, a differenza di designazione dell'elemento di callback che viene applicato a un elemento specifico. Maschera di callback è zero per impostazione predefinita, vale a dire che il controllo tiene traccia di tutti gli stati di elemento. Per modificare questo comportamento predefinito, inizializzare la maschera da qualsiasi combinazione dei valori seguenti:

- **LVIS_CUT** l'elemento è contrassegnato per un'operazione di taglia e Incolla.

- **LVIS_DROPHILITED** l'elemento è evidenziato come destinazione di trascinamento e rilascio.

- **LVIS_FOCUSED** l'elemento ha lo stato attivo.

- **LVIS_SELECTED** l'elemento è selezionato.

- **LVIS_OVERLAYMASK** l'applicazione archivia l'indice dell'elenco immagini dell'immagine sovrapposta corrente per ogni elemento.

- **LVIS_STATEIMAGEMASK** l'applicazione archivia l'indice dell'elenco immagini dell'immagine dello stato corrente per ogni elemento.

Per altre informazioni sul recupero e impostazione di questa maschera, vedere [CListCtrl:: GetCallbackMask](../mfc/reference/clistctrl-class.md#getcallbackmask) e [CListCtrl::SetCallbackMask](../mfc/reference/clistctrl-class.md#setcallbackmask).

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

