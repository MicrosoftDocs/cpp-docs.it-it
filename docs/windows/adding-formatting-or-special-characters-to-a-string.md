---
title: Aggiungere i caratteri speciali o di formattazione a una stringa | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- special characters, adding to strings
- ASCII characters, adding to strings
- strings [C++], formatting
- strings [C++], special characters
ms.assetid: c40f394a-8b2c-4896-ab30-6922863ddbb5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1b4eda998d598e70fd687276a2d2941d224da4d7
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43211678"
---
# <a name="adding-formatting-or-special-characters-to-a-string"></a>Aggiunta di formattazione o di caratteri speciali a una stringa

### <a name="to-add-formatting-or-special-characters-to-a-string"></a>Aggiungere caratteri speciali o di formattazione a una stringa

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Selezionare la stringa da modificare.

3. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), aggiungere una delle sequenze di escape standard elencati di seguito per il testo nel **didascalia** , quindi premere **invio**.

   |Per ottenere questo|Digitare quanto segue|
   |-----------------|---------------|
   |Nuova riga|\n|
   |Ritorno a capo|\r|
   |Scheda|\t|
   |Barra rovesciata (\\)|\\\|
   |Carattere ASCII|\ddd (notazione ottale)|
   |avviso (campana)|\a|

> [!NOTE]
> Il **stringa** editor non supporta il set completo di ASCII di caratteri di escape. È possibile utilizzare solo quelle elencate in precedenza.

Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [procedura dettagliata: localizzazione di Windows Form](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3\(v=vs.100\)).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor stringhe](../windows/string-editor.md)  