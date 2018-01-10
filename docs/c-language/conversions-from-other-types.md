---
title: Conversioni da altri tipi | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- values, converting
- type casts, conversion
ms.assetid: 30fbd974-8f5a-4b70-ac44-d3937b96b702
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8dbf2d3d269f5df3a028a5c416f8adca015be6dd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="conversions-from-other-types"></a>Conversioni da altri tipi
Poiché un valore `enum` è un valore `int` per definizione, le conversioni da e verso un valore `enum` corrispondono a quelle per il tipo `int`. Per il compilatore Microsoft C un Integer è uguale a un numero **long**.  
  
 **Sezione specifica Microsoft**  
  
 Non è consentita alcuna conversione tra la struttura o i tipi di unione.  
  
 Tutti i valori possono essere convertiti nel tipo `void`, ma il risultato di tale conversione può essere utilizzato solo in un contesto in cui un valore di espressione viene ignorato, come in un'istruzione di espressione.  
  
 Il tipo `void` non ha valore, per definizione. Pertanto, non può essere convertirlo in qualsiasi altro tipo e altri tipi non possono essere convertiti in `void` per assegnazione. Tuttavia è possibile eseguire esplicitamente il cast di un valore al tipo `void`, come illustrato in [Conversioni di cast di tipo](../c-language/type-cast-conversions.md).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Conversioni di assegnazione](../c-language/assignment-conversions.md)