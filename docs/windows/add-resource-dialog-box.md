---
title: Aggiungi finestra di dialogo risorse (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.insertresource
dev_langs:
- C++
helpviewer_keywords:
- resources [C++], adding
- Add Resource dialog box [C++]
ms.assetid: e9fb6967-738f-47e8-ab58-728cf35b3af0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f44a0be0fc7614ab9dd09e814e7e444ed90e8a4a
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44317667"
---
# <a name="add-resource-dialog-box"></a>Aggiungi risorsa (finestra di dialogo)

Usare questa finestra di dialogo per aggiungere risorse a un progetto di applicazione desktop di Windows in C++.

> [!NOTE]
> Queste informazioni non si applicano alle risorse nelle App Universal Windows Platform. Per altre informazioni, vedere [delle risorse delle App e il sistema di gestione risorse](/windows/uwp/app-resources/).

### <a name="resource-type"></a>Tipo risorsa

Specifica il tipo di risorsa che si vuole creare.

È possibile espandere le categorie di risorse della finestra di dialogo e del cursore per visualizzare risorse aggiuntive. Queste risorse si trovano in Visual Studio ...\Microsoft `version`\VC\VCResourceTemplates\\< LCID\>\mfc.rct.. Se si aggiungono file con estensione rct, è necessario inserirli in questa directory oppure è necessario specificare un [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md) per loro. Le risorse contenute in tali file verranno quindi visualizzate in corrispondenza del secondo livello nella categoria appropriata. Non esiste un limite predefinito per il numero di file con estensione rct che è possibile aggiungere.

Le risorse visualizzate al primo livello del controllo albero sono le risorse predefinite fornite da Visual Studio.

### <a name="new"></a>Nuovo

Crea una risorsa in base al tipo selezionato nel **tipo di risorsa** casella. La risorsa viene visualizzata nell'editor appropriato. Ad esempio, se si crea una risorsa finestra di dialogo, viene aperto nel [editor finestre](../windows/dialog-editor.md).

### <a name="import"></a>Import

Apre la **importare** nella finestra di dialogo in cui è possibile accedere a una risorsa quale si desidera importare nel progetto corrente. È possibile importare una bitmap, un'icona, un cursore, un file sorgente HTML, un file audio (WAV) o un file di risorse personalizzato.

### <a name="custom"></a>Personalizzato

Apre la [finestra di dialogo Nuova risorsa personalizzata](../windows/new-custom-resource-dialog-box.md) in cui è possibile creare una risorsa personalizzata. Le risorse personalizzate possono essere modificate solo nell'editor binario.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Procedura: Creare una risorsa](../windows/how-to-create-a-resource.md)