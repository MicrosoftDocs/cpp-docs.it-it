---
title: "Conversioni da tipi integrali senza segno | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conversione di tipi di dati [C++], Signed Integer e Unsigned Integer"
  - "Integer, conversione"
  - "conversioni integrali, da unsigned"
  - "tipo (cast), utilizzo di integer"
  - "conversione di tipi [C++], Signed Integer e Unsigned Integer"
ms.assetid: 60fb7e10-bff9-4a13-8a48-e19f25a36a02
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Conversioni da tipi integrali senza segno
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un intero senza segno viene convertito in un intero senza segno o con segno più breve troncando i bit più significativi oppure in un intero senza segno o con segno più lungo mediante l'estensione zero \(vedere la tabella [Conversioni dai tipi integrali senza segno](#_clang_table_4..3)\).  
  
 Quando il valore con un tipo integrale viene abbassato di livello a un intero con segno di dimensione inferiore o un intero senza segno viene convertito nell'intero con segno corrispondente, tale valore rimane invariato se può essere rappresentato nel nuovo tipo.  Tuttavia, il valore che esso rappresenta cambia se è impostato il bit di segno, come nell'esempio riportato di seguito.  
  
```  
int j;  
unsigned short k = 65533;  
  
j = k;  
printf_s( "%hd\n", j );   // Prints -3  
```  
  
 Se non può essere rappresentato, il risultato è definito dall'implementazione.  Per informazioni sulla gestione del compilatore C Microsoft di abbassamento di un livello di un intero, vedere [Conversioni di cast di tipo](../c-language/type-cast-conversions.md).  Lo stesso comportamento deriva dalla conversione di un intero o da un tipo che esegue il cast dell'intero.  
  
 I valori senza segno vengono convertiti in modo tale da mantenere il proprio valore e non sono direttamente rappresentabili in C.  L'unica eccezione è una conversione da un tipo `unsigned long` in un tipo **float**, che perde al massimo i bit meno significativi.  In caso contrario, il valore viene mantenuto, sia esso con segno che senza segno.  Quando un valore di tipo integrale viene convertito in un valore a virgola mobile e il valore non è compreso nell'intervallo rappresentabile, il risultato non è definito \(per informazioni sull'intervallo dei tipi a virgola mobile e integrali, vedere [Archiviazione dei tipi di base](../c-language/storage-of-basic-types.md)\).  
  
 Nella tabella seguente sono riepilogate le conversioni dai tipi integrali senza segno.  
  
### Conversioni dai tipi integrali senza segno  
  
|Da|Per|Metodo|  
|--------|---------|------------|  
|`unsigned char`|`char`|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|  
|`unsigned char`|**short**|Estensione zero|  
|`unsigned char`|**long**|Estensione zero|  
|`unsigned char`|**unsigned short**|Estensione zero|  
|`unsigned char`|`unsigned long`|Estensione zero|  
|`unsigned char`|**float**|Viene eseguita la conversione nel tipo **long**, quindi la conversione di **long** in **float**|  
|`unsigned char`|**double**|Viene eseguita la conversione nel tipo **long**, quindi la conversione di **long** in **double**|  
|`unsigned char`|`long double`|Viene eseguita la conversione nel tipo **long**, quindi la conversione di **long** in **double**|  
|**unsigned short**|`char`|Mantenimento del byte meno significativo|  
|**unsigned short**|**short**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|  
|**unsigned short**|**long**|Estensione zero|  
|**unsigned short**|`unsigned char`|Mantenimento del byte meno significativo|  
|**unsigned short**|`unsigned long`|Estensione zero|  
|**unsigned short**|**float**|Viene eseguita la conversione nel tipo **long**, quindi la conversione di **long** in **float**|  
|**unsigned short**|**double**|Viene eseguita la conversione nel tipo **long**, quindi la conversione di **long** in **double**|  
|**unsigned short**|`long double`|Viene eseguita la conversione nel tipo **long**, quindi la conversione di **long** in **double**|  
|`unsigned long`|`char`|Mantenimento del byte meno significativo|  
|`unsigned long`|**short**|Mantenimento della parola meno significativa|  
|`unsigned long`|**long**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|  
|`unsigned long`|`unsigned char`|Mantenimento del byte meno significativo|  
|`unsigned long`|**unsigned short**|Mantenimento della parola meno significativa|  
|`unsigned long`|**float**|Viene eseguita la conversione nel tipo **long**, quindi la conversione di **long** in **float**|  
|`unsigned long`|**double**|Viene eseguita direttamente la conversione in **double**|  
|`unsigned long`|`long double`|Viene eseguita la conversione nel tipo **long**, quindi la conversione di **long** in **double**|  
  
 **Sezione specifica Microsoft**  
  
 Per il compilatore C Microsoft a 32 bit, il tipo `unsigned int` equivale al tipo `unsigned long`.  La conversione di un valore `unsigned int` viene eseguita nello stesso modo di una conversione di un `unsigned long`.  Le conversioni dai valori `unsigned long` nei valori **float** non sono precise se il valore convertito è maggiore del valore **long** più alto con segno positivo.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Conversioni di assegnazione](../c-language/assignment-conversions.md)