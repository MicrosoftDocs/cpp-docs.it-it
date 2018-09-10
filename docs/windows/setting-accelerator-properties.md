---
title: Impostazione delle proprietà del tasto di scelta rapida (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- accelerator properties
- properties [C++], accelerator properties
- Type property
- Key property
- Modifier property
ms.assetid: 0fce9156-3025-4e18-b034-e219a4c65812
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: eb08a9dce4c90c9efddd10683bc4b7c2ac0b08b9
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44314417"
---
# <a name="setting-accelerator-properties"></a>Impostazione delle proprietà dei tasti di scelta rapida

È possibile impostare le proprietà di tasti di scelta rapida nel [finestra proprietà](/visualstudio/ide/reference/properties-window) in qualsiasi momento. È anche possibile usare la **acceleratore** editor per modificare le proprietà di tasti di scelta rapida della tabella di tasti di scelta rapida. Le modifiche apportate tramite il **delle proprietà** finestra o il **acceleratore** editor hanno lo stesso risultato: le modifiche vengono applicate immediatamente nella tabella di tasti di scelta rapida.

Esistono tre proprietà per ogni ID acceleratore:

- Il [proprietà modificatore](../windows/accelerator-modifier-property.md) Imposta controllo combinazioni per il tasto di scelta rapida.

   > [!NOTE]
   > Nel **delle proprietà** , questa proprietà verrà visualizzata la finestra come tre diverse proprietà booleane, ognuno dei quali può essere controllata in modo indipendente: **Alt**, **Ctrl**e **Shift**.

- Il [proprietà chiave](../windows/accelerator-key-property.md) imposta il tasto effettivo da usare come tasto di scelta rapida.

- Il [proprietà del tipo](../windows/accelerator-type-property.md) determina se la chiave viene interpretata come virtuale (VIRTKEY) o come ASCII/ANSI.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida predefiniti](../windows/predefined-accelerator-keys.md)  
[Editor di risorse](../windows/resource-editors.md)  
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)