---
title: "Tasti di scelta rapida Modifier (proprietà) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Modifier property
ms.assetid: f05a9379-e037-4cfb-b6ef-d2c655bcfa7f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 63d6a4b526fc1f2aeb2a942e682a8c7cc6f9b58c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="accelerator-modifier-property"></a>Proprietà Modifier dei tasti di scelta rapida
Di seguito sono ammessi per la proprietà modificatore nella tabella di tasti di scelta rapida.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**None**|Utente preme solo il valore di chiave. Questa impostazione viene principalmente utilizzata con i valori ASCII/ANSI 001 a 026, che viene interpretato come ^ A ^ Z (CTRL + A e CTRL-Z).|  
|**ALT**|Utente deve premere il tasto ALT prima del valore di chiave.|  
|**CTRL**|Utente deve premere il tasto CTRL prima del valore di chiave. Non è valida con tipo ASCII.|  
|**MAIUSC**|Utente deve premere il tasto MAIUSC prima del valore di chiave.|  
|**Ctrl + Alt**|È necessario premere il tasto CTRL e ALT prima del valore di chiave. Non è valida con tipo ASCII.|  
|**CTRL + MAIUSC**|È necessario premere il tasto CTRL e MAIUSC prima del valore di chiave. Non è valida con tipo ASCII.|  
|**ALT + MAIUSC**|È necessario premere il tasto ALT e il tasto MAIUSC prima del valore di chiave. Non è valida con tipo ASCII.|  
|**Ctrl + Alt + Maiusc**|È necessario premere MAIUSC, CTRL e ALT prima del valore di chiave. Non è valida con tipo ASCII.|  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)   
 [Editor tasti di scelta rapida](../windows/accelerator-editor.md)