---
title: Modifica delle proprietà di più tasti di scelta rapida (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- keyboard shortcuts [C++], property changing
- accelerator tables [C++], changing properties
ms.assetid: b55c9bd6-b430-48bb-b942-0e6f21d7abf9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bf70622dc901842a74cf8718d9447f899defb57d
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44313520"
---
# <a name="changing-the-properties-of-multiple-accelerator-keys-c"></a>Modifica delle proprietà di più tasti di scelta rapida (C++)

### <a name="to-change-the-properties-of-multiple-accelerator-keys"></a>Per modificare le proprietà di più tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Selezionare i tasti di scelta rapida che si desidera modificare, tenere premuti i **Ctrl** mentre si fa clic su ognuno di essi.

3. Andare alla [finestra proprietà](/visualstudio/ide/reference/properties-window) e digitare i valori da tutti gli acceleratori selezionati da condividere.

   > [!NOTE]
   > Ogni valore del modificatore viene visualizzato come una proprietà booleana nel **proprietà** finestra. Se si modifica un [modificatore](../windows/accelerator-modifier-property.md) valore le **proprietà** finestra, la tabella di tasti di scelta rapida considera il nuovo modificatore come aggiunta a tutti i modificatori che sono state effettuate in precedenza. Per questo motivo, se si imposta alcun valore di modificatore, è necessario impostare tutti gli elementi per assicurarsi che ogni acceleratore condivide lo stesso **modificatore** impostazioni.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Modifica delle tabelle dei tasti di scelta rapida](../windows/editing-accelerator-tables.md)  
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)