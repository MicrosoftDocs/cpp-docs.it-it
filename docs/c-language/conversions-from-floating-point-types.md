---
title: "Conversioni da tipi a virgola mobile | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "conversione virgola mobile"
  - "conversione virgola mobile"
ms.assetid: 96804c8e-fa3b-4742-9006-0082ed9e57f2
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Conversioni da tipi a virgola mobile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un valore **float** viene convertito in **double** o `long double` o un valore **double** viene convertito in `long double`, non si verifica alcun cambiamento del valore.  I valori **double** convertiti in valori **float** vengono rappresentati esattamente, ove possibile.  Se il valore non può essere rappresentato esattamente, la precisione non è mantenuta.  Se il risultato non è incluso nell'intervallo, il comportamento non è definito.  Vedere [Limiti su costanti a virgola mobile](../c-language/limits-on-floating-point-constants.md) per conoscere l'intervallo dei tipi a virgola mobile.  
  
 Per convertire un valore a virgola mobile in un valore integrale, è necessario innanzitutto convertirlo in **long**, in seguito è possibile convertirlo da valore **long** al valore integrale specifico.  La parte decimale del valore a virgola mobile viene eliminata, con la conversione a **long**.  Se il risultato ha ancora una dimensione troppo grande per un tipo **long**, lo stesso risultato della conversione è indefinito.  
  
 **Sezione specifica Microsoft**  
  
 Nel convertire un numero a virgola mobile **double** o `long double` in un numero a virgola mobile più breve, il valore della variabile a virgola mobile viene troncato verso zero, quando si verifica un underflow.  L'overflow provoca un errore di runtime.  Si noti che il compilatore C Microsoft mappa `long double` al tipo **double**.  
  
 **Fine sezione specifica Microsoft**  
  
 Nella tabella seguente sono riepilogate le conversioni dai tipi a virgola mobile.  
  
### Conversioni dai tipi a virgola mobile  
  
|Da|Per|Metodo|  
|--------|---------|------------|  
|**float**|`char`|Conversione in **long**; conversione di **long** in `char`|  
|**float**|**short**|Conversione in **long**; conversione di **long** in **short**|  
|**float**|**long**|Troncare in corrispondenza del separatore decimale.  Se il risultato ha una dimensione troppo grande per essere rappresentato come **long**, lo stesso risultato è indefinito.|  
|**float**|**unsigned short**|Conversione in **long**; conversione di **long** in `unsigned` **short**|  
|**float**|`unsigned long`|Conversione in **long**; conversione di **long** in `unsigned` **long**|  
|**float**|**double**|Modificare la rappresentazione interna|  
|**float**|`long double`|Modificare la rappresentazione interna|  
|**double**|`char`|Conversione in **float**; conversione di **float** in `char`|  
|**double**|**short**|Conversione in **float**; conversione di **float** in **short**|  
|**double**|**long**|Troncare in corrispondenza del separatore decimale.  Se il risultato ha una dimensione troppo grande per essere rappresentato come **long**, lo stesso risultato è indefinito.|  
|**double**|**unsigned short**|Conversione in **long**; conversione di **long** in **unsigned short**|  
|**double**|`unsigned long`|Conversione in **long**; conversione di **long** in `unsigned` **long**|  
|**double**|**float**|Rappresentare come **float**.  Se il valore **double** non può essere rappresentato esattamente come **float**, cioè comporta una perdita di precisione.  Se il valore ha una dimensione troppo grande per essere rappresentato come **float**, il risultato è indefinito.|  
|`long double`|`char`|Conversione in **float**; conversione di **float** in `char`|  
|`long double`|**short**|Conversione in **float**; conversione di **float** in **short**|  
|`long double`|**long**|Troncare in corrispondenza del separatore decimale.  Se il risultato ha una dimensione troppo grande per essere rappresentato come **long**, lo stesso risultato è indefinito.|  
|`long double`|**unsigned short**|Conversione in **long**; conversione di **long** in `unsigned` **short**|  
|`long double`|`unsigned long`|Conversione in **long**; conversione di **long** in `unsigned` **long**|  
|`long double`|**float**|Rappresentare come **float**.  Se il valore **double** non può essere rappresentato esattamente come **float**, cioè comporta una perdita di precisione.  Se il valore ha una dimensione troppo grande per essere rappresentato come **float**, il risultato è indefinito.|  
|`long double`|**double**|Il valore **long double** viene considerato come **double**.|  
  
 Le conversioni da valori **float**, **double** o `long double` a `unsigned long` non sono accurate, se il valore convertito ha una dimensione maggiore del più grande valore **long** positivo.  
  
## Vedere anche  
 [Conversioni di assegnazione](../c-language/assignment-conversions.md)