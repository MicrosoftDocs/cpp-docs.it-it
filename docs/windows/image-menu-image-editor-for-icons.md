---
title: Menu immagine (Editor di immagini di C++ per le icone)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.bitmap
- vc.editors.dialog.GridSettings
- vc.editors.gridsettings
helpviewer_keywords:
- Image menu
- Grid Settings dialog box [C++]
ms.assetid: ac2b4d53-1919-4fd1-a0af-d3c085c45af2
ms.openlocfilehash: e7d7d92401d5910cbb8aba8ab4c6000eca45cb01
ms.sourcegitcommit: bd637e9c39650cfd530520ea978a22fa4caa0e42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/07/2019
ms.locfileid: "55849730"
---
# <a name="image-menu-c-image-editor-for-icons"></a>Menu immagine (Editor di immagini di C++ per le icone)

Il **immagine** menu, che viene visualizzata solo quando il **immagine** editor è attiva, sono disponibili comandi per la modifica delle immagini, la gestione di tavolozze dei colori e l'impostazione **Editor di immagini** finestra Opzioni. Inoltre, i comandi per l'uso di immagini per i dispositivi sono disponibili quando si lavora con le icone e cursori.

|Comando|Descrizione|
|---|---|
|**Inverti colori**|Inverte i colori. Per altre informazioni, vedere [inversione dei colori in una selezione](../windows/inverting-the-colors-in-a-selection-image-editor-for-icons.md).|
|**Capovolgi orizzontalmente**|Consente di capovolgere orizzontalmente l'immagine o la selezione. Per altre informazioni, vedere [capovolgimento di un'immagine](../windows/flipping-an-image-image-editor-for-icons.md).|
|**Capovolgi verticalmente**|Consente di capovolgere verticalmente l'immagine o la selezione. Per altre informazioni, vedere [capovolgimento di un'immagine](../windows/flipping-an-image-image-editor-for-icons.md).|
|**Ruota di 90 gradi**|Consente di ruotare di 90 gradi l'immagine o la selezione. Per altre informazioni, vedere [capovolgimento di un'immagine](../windows/flipping-an-image-image-editor-for-icons.md).|
|**Mostra finestra colori**|Apre la [finestra colori](../windows/colors-window-image-editor-for-icons.md), in cui è possibile scegliere i colori da utilizzare per l'immagine. Per altre informazioni, vedere [utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md).|
|**Usa selezione come pennello**|Consente di creare un pennello personalizzato da una parte di un'immagine. La selezione diventa un pennello personalizzato che distribuisce i colori nella selezione tra l'immagine. Le copie della selezione vengono lasciate lungo il percorso di trascinamento. Più lenta il trascinamento, vengono eseguite le altre copie. Per altre informazioni, vedere [creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).|
|**Copia e struttura selezione**|Consente di creare e strutturare una copia della selezione corrente. Il colore di sfondo è contenuto nella selezione corrente, verrà escluso se hai [trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md) selezionato.
|**Regola colori**|Apre la [regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md), che consente di personalizzare i colori utilizzati per l'immagine. Per altre informazioni, vedere [personalizzazione o modifica dei colori](../windows/customizing-or-changing-colors-image-editor-for-icons.md).|
|**Carica tavolozza**|Apre la [finestra di dialogo Carica tavolozza](../windows/load-palette-colors-dialog-box-image-editor-for-icons.md), che consente di caricare i colori della tavolozza salvati in precedenza in un file PAL.|
|**Salva tavolozza**|Salva i colori della tavolozza in un file PAL.|
|**Opaco**|Quando selezionato, effettua la selezione corrente opaca. Se deselezionata, rende trasparente la selezione corrente. Per altre informazioni, vedere [scelta di uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).|
|**Editor barra degli strumenti**|Apre la [finestra di dialogo Nuova risorsa barra degli strumenti](../windows/new-toolbar-resource-dialog-box.md).|
|**Impostazioni griglia**|Apre la **Impostazioni griglia** finestra di dialogo in cui è possibile specificare grids per l'immagine.|
|**Tipo nuova immagine**|Apre la [New \<dispositivo > finestra di dialogo Tipo immagine](../windows/new-device-image-type-dialog-box-image-editor-for-icons.md). Una singola risorsa icona può contenere numerose immagini di dimensioni diverse e windows possa usare le dimensioni dell'icona appropriata a seconda del modo in cui sta per essere visualizzato. Un nuovo tipo di dispositivo non modifica le dimensioni dell'icona, ma crea una nuova immagine all'interno dell'icona. Si applica solo alle icone e cursori.|
|**Tipo di immagine icona o cursore corrente**|Apre un sottomenu contenente il primo disponibili immagini icona o cursore (le nove prima). L'ultimo comando dal sottomenu, **più...** , consente di aprire la [Open \<dispositivo > finestra di dialogo immagine](../windows/open-device-image-dialog-box-image-editor-for-icons.md).|
|**Elimina tipo di immagine**|Elimina l'immagine del dispositivo selezionato.|
|**Strumenti**|Consente di visualizzare un sottomenu contenente tutti gli strumenti disponibili i [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md).|

Il **Impostazioni griglia** nella finestra di dialogo consente di specificare le impostazioni della griglia per l'immagine e visualizza le linee della griglia sull'immagine modificata. Le righe sono utili per la modifica dell'immagine, ma non vengono salvate come parte dell'immagine stessa.

|Proprietà|Descrizione|
|---|---|
|**Griglia in pixel**|Se selezionata, viene visualizzata una griglia attorno a ogni pixel nell'editor di immagini. La griglia viene visualizzata solo in 4 × e risoluzioni più alte.|
|**Griglia affiancata**|Se selezionata, viene visualizzata una griglia attorno a blocchi di pixel nell'editor di immagini, specificato dai valori di spaziatura della griglia.|
|**Width**|Specifica la larghezza di ogni blocco di riquadro. Questa proprietà è utile quando si disegnano le bitmap che contiene più immagini disposti a intervalli regolari.|
|**Height**|Specifica l'altezza di ogni blocco di riquadro. Questa proprietà è utile quando si disegnano le bitmap che contiene più immagini disposti a intervalli regolari.|

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Ridimensionamento di un'immagine](../windows/resizing-an-image-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)