---
title: 'Procedura: importare ed esportare risorse | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vs.resvw.resource.importing
- vc.resvw.resource.importing
dev_langs:
- C++
helpviewer_keywords:
- resources [Visual Studio], exporting
- graphics [C++], exporting
- graphics [C++], importing
- resources [Visual Studio], importing
- bitmaps [C++], importing and exporting
- toolbars [C++], importing
- images [C++], importing
- toolbars [C++], exporting
- cursors [C++], importing and exporting
- images [C++], exporting
ms.assetid: 3c9329dc-dcb8-4edd-a600-78e3e572bd89
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2d6e2c3a27204ffb6e1c23f158f1f3fdc93a792e
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42596971"
---
# <a name="how-to-import-and-export-resources"></a>Procedura: importare ed esportare risorse

È possibile importare risorse grafiche (bitmap, icone, cursori e barre degli strumenti), file HTML e risorse personalizzate da usare in Visual C++. È inoltre possibile esportare gli stessi tipi di file da un progetto Visual C++ in file separati utilizzabili all'esterno dell'ambiente di sviluppo.

> [!NOTE]
> Non è possibile importare o esportare tipi di risorse, quali acceleratori, finestre di dialogo e tabelle di stringhe, poiché non si tratta di tipi di file autonomi.

### <a name="to-import-an-individual-resource-into-your-current-resource-file"></a>Per importare una singola risorsa nel file di risorse corrente

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), pulsante destro del mouse il nodo per lo script di risorsa (* RC) file in cui si desidera aggiungere una risorsa.

2. Fare clic su **importazione** menu di scelta rapida.

3. Individuare e selezionare il nome di file della bitmap (BMP), dell'icona (ICO), del cursore (CUR), del file HTML (HTM) o di un file di altro tipo da importare.

4. Fare clic su **OK** per aggiungere la risorsa per il file selezionato in **risorsa** visualizzazione.

   > [!NOTE]
   > Il processo di importazione viene eseguito nello stesso modo indipendentemente dal tipo di risorsa specifico selezionato. La risorsa importata viene aggiunta automaticamente al nodo appropriato per tale tipo di risorsa.

### <a name="to-export-a-bitmap-icon-or-cursor-as-a-separate-file-for-use-outside-of-visual-c"></a>Per esportare una bitmap, un'icona o un cursore come file separato, utilizzabile all'esterno di Visual C++

1. Nelle **risorsa** visualizzare, fare doppio clic la risorsa da esportare.

2. Fare clic su **esportare** menu di scelta rapida.

3. Nel **Esporta risorsa** dialogo casella, accettare il nome del file corrente o digitarne uno nuovo.

4. Passare alla cartella in cui si desidera salvare il file e fare clic su **esportare**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)  
[Editor di risorse](../windows/resource-editors.md)