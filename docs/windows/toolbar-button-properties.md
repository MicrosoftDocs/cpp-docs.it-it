---
title: Proprietà dei pulsanti della barra degli strumenti (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- size, toolbar buttons
- toolbar buttons [C++], setting properties
- Toolbar editor [C++], toolbar button properties
- status bars [C++], active toolbar button text
- command IDs, toolbar buttons
- width, toolbar buttons
ms.assetid: b2705814-7c5d-4f24-8f77-07559b0cdda2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 02ab081446af908f2efdc06b647efcc4e76addf4
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46411508"
---
# <a name="toolbar-button-properties-c"></a>Proprietà dei pulsanti della barra degli strumenti (C++)

Le proprietà di un pulsante della barra degli strumenti sono:

|Proprietà|Descrizione|
|--------------|-----------------|
|**ID**|Definisce l'ID del pulsante. L'elenco di elenco a discesa include common **ID** nomi.|
|**Larghezza**|Imposta la larghezza del pulsante. è consigliabile 16 pixel.|
|**Altezza**|Imposta l'altezza del pulsante. Si noti che l'altezza di un pulsante Modifica l'altezza di tutti i pulsanti sulla barra degli strumenti. impostazione consigliata è 15 pixel.|
|**Prompt**|Definisce il messaggio visualizzato nella barra di stato. Aggiunta di un nome e \n aggiunge una descrizione comandi al pulsante sulla barra degli strumenti. Per altre informazioni, vedere [creazione di una descrizione comando](../windows/creating-a-tool-tip-for-a-toolbar-button.md).|

**Larghezza** e **altezza** si applicano a tutti i pulsanti. Una mappa di bit viene usata per creare una barra degli strumenti ha una larghezza massima di 2048. Pertanto, se si imposta la larghezza del pulsante su 512, è possibile avere solo quattro pulsanti e se si imposta la larghezza su 513, si possono avere solo tre pulsanti.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Modifica delle proprietà di un pulsante di una barra degli strumenti](../windows/changing-the-properties-of-a-toolbar-button.md)<br/>
[Editor barra degli strumenti](../windows/toolbar-editor.md)