---
title: Conversioni dai tipi integrali senza segno | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- integers, converting
- type casts, involving integers
- data type conversion [C++], signed and unsigned integers
- type conversion [C++], signed and unsigned integers
- integral conversions, from unsigned
ms.assetid: 60fb7e10-bff9-4a13-8a48-e19f25a36a02
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 937d6cdeacda2abe2dd241e5a8e9463549567444
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="conversions-from-unsigned-integral-types"></a>Conversioni dai tipi integrali senza segno
Un Integer senza segno viene convertito in un Integer senza segno o con segno più breve troncando i bit più significativi oppure in un Integer senza segno o con segno più lungo mediante estensione con zeri (vedere la tabella [Conversioni da tipi integrali senza segno](#_clang_table_4..3)).  
  
 Quando il valore con un tipo integrale viene abbassato di livello a un intero con segno di dimensione inferiore o un intero senza segno viene convertito nell'intero con segno corrispondente, tale valore rimane invariato se può essere rappresentato nel nuovo tipo. Tuttavia, il valore che esso rappresenta cambia se è impostato il bit di segno, come nell'esempio riportato di seguito.  
  
```  
int j;  
unsigned short k = 65533;  
  
j = k;  
printf_s( "%hd\n", j );   // Prints -3  
```  
  
 Se non può essere rappresentato, il risultato è definito dall'implementazione. Per informazioni sulla gestione dell'abbassamento di livello di un Integer nel compilatore C Microsoft, vedere [Conversioni di cast di tipo](../c-language/type-cast-conversions.md). Lo stesso comportamento deriva dalla conversione di un intero o da un tipo che esegue il cast dell'intero.  
  
 I valori senza segno vengono convertiti in modo da mantenerne il valore e non sono direttamente rappresentabili in C. L'unica eccezione è una conversione da `unsigned long` a **float**, che perde al massimo i bit meno significativi. In caso contrario, il valore viene mantenuto, sia esso con segno che senza segno. Quando un valore di tipo integrale viene convertito in un valore a virgola mobile e il valore non è compreso nell'intervallo rappresentabile, il risultato non è definito. Per informazioni sull'intervallo dei tipi a virgola mobile e integrali, vedere [Archiviazione di tipi di base](../c-language/storage-of-basic-types.md).  
  
 Nella tabella seguente sono riepilogate le conversioni dai tipi integrali senza segno.  
  
### <a name="conversions-from-unsigned-integral-types"></a>Conversioni dai tipi integrali senza segno  
  
|Da|Per|Metodo|  
|----------|--------|------------|  
|`unsigned char`|`char`|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|  
|`unsigned char`|**short**|Estensione zero|  
|`unsigned char`|**long**|Estensione zero|  
|`unsigned char`|**unsigned short**|Estensione zero|  
|`unsigned char`|`unsigned long`|Estensione zero|  
|`unsigned char`|**float**|Convertire a **long**; convertire **long** a **float**|  
|`unsigned char`|**double**|Convertire a **long**; convertire **long** a **double**|  
|`unsigned char`|`long double`|Convertire a **long**; convertire **long** a **double**|  
|**unsigned short**|`char`|Mantenimento del byte meno significativo|  
|**unsigned short**|**short**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|  
|**unsigned short**|**long**|Estensione zero|  
|**unsigned short**|`unsigned char`|Mantenimento del byte meno significativo|  
|**unsigned short**|`unsigned long`|Estensione zero|  
|**unsigned short**|**float**|Convertire a **long**; convertire **long** a **float**|  
|**unsigned short**|**double**|Convertire a **long**; convertire **long** a **double**|  
|**unsigned short**|`long double`|Convertire a **long**; convertire **long** a **double**|  
|`unsigned long`|`char`|Mantenimento del byte meno significativo|  
|`unsigned long`|**short**|Mantenimento della parola meno significativa|  
|`unsigned long`|**long**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|  
|`unsigned long`|`unsigned char`|Mantenimento del byte meno significativo|  
|`unsigned long`|**unsigned short**|Mantenimento della parola meno significativa|  
|`unsigned long`|**float**|Convertire a **long**; convertire **long** a **float**|  
|`unsigned long`|**double**|Convertire direttamente a **double**|  
|`unsigned long`|`long double`|Convertire a **long**; convertire **long** a **double**|  
  
 **Sezione specifica Microsoft**  
  
 Per il compilatore C Microsoft a 32 bit, il tipo `unsigned int` equivale al tipo `unsigned long`. La conversione di un valore `unsigned int` viene eseguita nello stesso modo di una conversione di un `unsigned long`. Le conversioni dai valori `unsigned long` ai valori **float** non sono precise se il valore convertito è maggiore del valore **long** massimo con segno positivo.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Conversioni di assegnazione](../c-language/assignment-conversions.md)
