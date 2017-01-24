---
title: "Conversioni da tipi integrali con segno | Microsoft Docs"
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
  - "conversioni [C++], integrali"
  - "conversione di tipi di dati [C++], Signed Integer e Unsigned Integer"
  - "Integer, conversione"
  - "conversioni integrali, da signed"
  - "conversione di tipi [C++], Signed Integer e Unsigned Integer"
ms.assetid: 5eea32f8-8b14-413d-acac-c063b3d118d7
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Conversioni da tipi integrali con segno
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un intero con segno viene convertito in un intero senza segno di dimensione uguale o maggiore e il valore dell'intero con segno non è negativo, tale valore rimane invariato.  La conversione viene eseguita mediante l'estensione del segno dell'intero con segno.  Un intero con segno viene convertito in un intero con segno più corto troncando i bit più significativi.  Il risultato viene interpretato come un valore senza segno, come illustrato in questo esempio.  
  
```  
int i = -3;  
unsigned short u;  
  
u = i;   
printf_s( "%hu\n", u );  // Prints 65533  
  
```  
  
 Quando un intero con segno viene convertito in un valore a virgola mobile non viene persa alcuna informazione, tuttavia parte della precisione può andare persa quando un valore **long int** o  **long int senza segno** viene convertito in un valore **float**.  
  
 Nella tabella seguente sono riepilogate le conversioni dai tipi integrali con segno.  In questa tabella si presuppone che il tipo `char` sia un tipo con segno per impostazione predefinita.  Se si utilizza un'opzione in fase di compilazione per modificare l'impostazione predefinita del tipo `char` in un tipo senza segno, le conversioni fornite nella tabella [Conversioni dai tipi integrali senza segno](../c-language/conversions-from-unsigned-integral-types.md) per il tipo `unsigned char` si applicano alle conversioni nella tabella riportata di seguito, Conversioni dai tipi integrali con segno.  
  
### Conversioni dai tipi integrali con segno  
  
|Da|Per|Metodo|  
|--------|---------|------------|  
|`char`1|**short**|Estensione del segno|  
|`char`|**long**|Estensione del segno|  
|`char`|`unsigned char`|Mantenimento del modello; il bit più significativo perde la funzione come bit di segno|  
|`char`|**unsigned short**|Estensione del segno a **short**; conversione di **short** in **short senza segno**|  
|`char`|`unsigned long`|Estensione del segno a **long**; conversione di **long** in `unsigned long`|  
|`char`|**float**|Estensione del segno a **long**; conversione di **long** in **float**|  
|`char`|**double**|Estensione del segno a **long**; conversione di **long** in **double**|  
|`char`|`long double`|Estensione del segno a **long**; conversione di **long** in **double**|  
|**short**|`char`|Mantenimento del byte meno significativo|  
|**short**|**long**|Estensione del segno|  
|**short**|`unsigned char`|Mantenimento del byte meno significativo|  
|**short**|**unsigned short**|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|  
|**short**|`unsigned long`|Estensione del segno a **long**; conversione di **long** in `unsigned long`|  
|**short**|**float**|Estensione del segno a **long**; conversione di **long** in **float**|  
|**short**|**double**|Estensione del segno a **long**; conversione di **long** in **double**|  
|**short**|`long double`|Estensione del segno a **long**; conversione di **long** in **double**|  
|**long**|`char`|Mantenimento del byte meno significativo|  
|**long**|**short**|Mantenimento della parola meno significativa|  
|**long**|`unsigned char`|Mantenimento del byte meno significativo|  
|**long**|**unsigned short**|Mantenimento della parola meno significativa|  
|**long**|`unsigned long`|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|  
|**long**|**float**|Rappresentazione come **float**.  Se **long** non può essere rappresentato con esattezza, la precisione diminuisce.|  
|**long**|**double**|Rappresentazione come **double**.  Se **long** non può essere rappresentato con esattezza come **double**, la precisione diminuisce.|  
|**long**|`long double`|Rappresentazione come **double**.  Se **long** non può essere rappresentato con esattezza come **double**, la precisione diminuisce.|  
  
 1.  Tutte le voci `char` presuppongono che il tipo `char` sia un tipo con segno per impostazione predefinita.  
  
 **Sezione specifica Microsoft**  
  
 Per il compilatore C a 32 bit Microsoft , un Integer è equivalente a un valore **long**.  La conversione di un valore `int` viene eseguita in modo analogo a quella di un valore **long**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Conversioni di assegnazione](../c-language/assignment-conversions.md)