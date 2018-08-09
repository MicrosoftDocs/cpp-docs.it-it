---
title: Proprietà Modifier tasti di scelta rapida | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Modifier property
ms.assetid: f05a9379-e037-4cfb-b6ef-d2c655bcfa7f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0788536e776661b9a84a6cccc648a7db68389ae5
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39644255"
---
# <a name="accelerator-modifier-property"></a>Proprietà Modifier dei tasti di scelta rapida
Di seguito sono le voci legali per la proprietà modificatore della tabella di tasti di scelta rapida.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**None**|Utente preme solo il **chiave** valore. Ciò viene utilizzato in modo più efficace con i valori ASCII/ANSI 001 tramite 026, che viene interpretato come ^ dalla alla ^ Z (CTRL + A e CTRL-Z).|  
|**ALT**|L'utente deve premere il **Alt** chiave prima di **chiave** valore.|  
|**CTRL**|L'utente deve premere il **Ctrl** chiave prima di **chiave** valore. Non è valida con tipo ASCII.|  
|**MAIUSC**|L'utente deve premere il **Shift** chiave prima di **chiave** valore.|  
|**Ctrl + Alt**|L'utente deve premere il **Ctrl** chiave e il **Alt** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|  
|**CTRL + MAIUSC**|L'utente deve premere il **Ctrl** chiave e il **MAIUSC** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|  
|**ALT + MAIUSC**|L'utente deve premere il **Alt** chiave e il **MAIUSC** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|  
|**Ctrl + Alt + Maiusc**|L'utente deve premere **Ctrl**, **Alt**, e **MAIUSC** prima il **chiave** valore. Non è valida con tipo ASCII.|  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)   
 [Editor tasti di scelta rapida](../windows/accelerator-editor.md)