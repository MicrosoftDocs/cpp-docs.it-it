---
title: Impostazione delle proprietà del tasto di scelta rapida | Microsoft Docs
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
ms.openlocfilehash: 5337378b54c2109d05e28cb9d1bfed82f81913f3
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652698"
---
# <a name="setting-accelerator-properties"></a>Impostazione delle proprietà dei tasti di scelta rapida
È possibile impostare le proprietà di tasti di scelta rapida nel [finestra proprietà](/visualstudio/ide/reference/properties-window) in qualsiasi momento. È anche possibile usare l'editor tasti di scelta rapida per modificare le relative proprietà nella tabella dei tasti di scelta rapida. Le modifiche apportate tramite la finestra Proprietà o l'editor tasti di scelta rapida producono lo stesso risultato: le modifiche vengono applicate immediatamente nella tabella dei tasti di scelta rapida.  
  
 Esistono tre proprietà per ogni acceleratore [ID](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/3487f185-de96-4b1d-87db-034a52223160/locales/en-US):  
  
-   Il [proprietà modificatore](../windows/accelerator-modifier-property.md) Imposta controllo combinazioni per il tasto di scelta rapida.  
  
    > [!NOTE]
    >  Nella finestra Proprietà, questa proprietà appare come tre diverse proprietà booleane, ognuno dei quali può essere controllata in modo indipendente: **Alt**, **Ctrl**, e **MAIUSC**.  
  
-   Il [proprietà chiave](../windows/accelerator-key-property.md) imposta il tasto effettivo da usare come tasto di scelta rapida.  
  
-   Il [proprietà del tipo](../windows/accelerator-type-property.md) determina se la chiave viene interpretata come virtuale (VIRTKEY) o come ASCII/ANSI.  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Tasti di scelta rapida predefiniti](../windows/predefined-accelerator-keys.md)   
 [Editor risorse](../windows/resource-editors.md)   
 [Editor tasti di scelta rapida](../windows/accelerator-editor.md)