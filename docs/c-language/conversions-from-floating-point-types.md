---
title: Conversioni dai tipi a virgola mobile | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- converting floating point
- floating-point conversion
ms.assetid: 96804c8e-fa3b-4742-9006-0082ed9e57f2
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4a95596b2c9e7312d4581d1a4c641c2466420158
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="conversions-from-floating-point-types"></a>Conversioni dai tipi a virgola mobile
Quando un valore **float** viene convertito in **double** o `long double` o un valore **double** viene convertito in `long double` non si verifica alcun cambiamento del valore. Se possibile i valori **double** convertiti in valori **float** vengono rappresentati esattamente. Se il valore non può essere rappresentato esattamente, la precisione non è mantenuta. Se il risultato non è incluso nell'intervallo, il comportamento non è definito. Per l'intervallo dei tipi a virgola mobile vedere [Limiti sulle costanti a virgola mobile](../c-language/limits-on-floating-point-constants.md).  
  
 Per convertire un valore a virgola mobile in un valore integrale, è necessario prima convertirlo in **long**, quindi è possibile convertirlo da valore **long** al valore integrale specifico. La parte decimale del valore a virgola mobile viene eliminata con la conversione a **long**. Se il risultato ha ancora una dimensione troppo grande per un tipo **long** il risultato della conversione è indefinito.  
  
 **Sezione specifica Microsoft**  
  
 Quando un numero a virgola mobile **double** o `long double` viene convertito in un numero a virgola mobile più breve, il valore della variabile a virgola mobile viene troncato verso lo zero in caso di underflow. L'overflow provoca un errore di runtime. Si noti che il compilatore C Microsoft esegue il mapping di `long double` sul tipo **double**.  
  
 **Fine sezione specifica Microsoft**  
  
 Nella tabella seguente sono riepilogate le conversioni dai tipi a virgola mobile.  
  
### <a name="conversions-from-floating-point-types"></a>Conversioni dai tipi a virgola mobile  
  
|Da|A|Metodo|  
|----------|--------|------------|  
|**float**|`char`|Convertire a **long**; convertire **long** a `char`|  
|**float**|**short**|Convertire a **long**; convertire **long** a **short**|  
|**float**|**long**|Troncare in corrispondenza del separatore decimale. Se il valore risultante è troppo grande per essere rappresentato come **long** il risultato è indefinito.|  
|**float**|**unsigned short**|Convertire a **long**; convertire **long** a `unsigned` **short**|  
|**float**|`unsigned long`|Convertire a **long**; convertire **long** a `unsigned` **long**|  
|**float**|**double**|Modificare la rappresentazione interna|  
|**float**|`long double`|Modificare la rappresentazione interna|  
|**double**|`char`|Convertire a **float**; convertire **float** a `char`|  
|**double**|**short**|Convertire a **float**; convertire **float** a **short**|  
|**double**|**long**|Troncare in corrispondenza del separatore decimale. Se il valore risultante è troppo grande per essere rappresentato come **long** il risultato è indefinito.|  
|**double**|**unsigned short**|Convertire a **long**; convertire **long** a **unsigned short**|  
|**double**|`unsigned long`|Convertire a **long**; convertire **long** a `unsigned` **long**|  
|**double**|**float**|Rappresentare come **float**. Se il valore **double** non può essere rappresentato esattamente come **float** si verifica una perdita di precisione. Se il valore è troppo grande per essere rappresentato come **float**, il risultato è indefinito.|  
|`long double`|`char`|Convertire a **float**; convertire **float** a `char`|  
|`long double`|**short**|Convertire a **float**; convertire **float** a **short**|  
|`long double`|**long**|Troncare in corrispondenza del separatore decimale. Se il valore risultante è troppo grande per essere rappresentato come **long** il risultato è indefinito.|  
|`long double`|**unsigned short**|Convertire a **long**; convertire **long** a `unsigned` **short**|  
|`long double`|`unsigned long`|Convertire a **long**; convertire **long** a `unsigned` **long**|  
|`long double`|**float**|Rappresentare come **float**. Se il valore **double** non può essere rappresentato esattamente come **float** si verifica una perdita di precisione. Se il valore è troppo grande per essere rappresentato come **float**, il risultato è indefinito.|  
|`long double`|**double**|Il valore **long double** viene considerato come **double**.|  
  
 Le conversioni da valori **float**, **double** o `long double` a `unsigned long` non sono accurate se il valore convertito è superiore al valore **long** massimo positivo.  
  
## <a name="see-also"></a>Vedere anche  
 [Conversioni di assegnazione](../c-language/assignment-conversions.md)