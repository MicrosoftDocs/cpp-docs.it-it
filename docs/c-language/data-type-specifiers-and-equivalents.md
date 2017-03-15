---
title: "Identificatori ed equivalenti di tipi di dati | Microsoft Docs"
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
  - "tipi di dati [C++], equivalenti"
  - "tipi di dati [C++], identificatori"
  - "identificatori, tipi di dati"
  - "tipi integrali con estensione di segno"
  - "tipi semplici, nomi"
  - "nomi di tipi [C++], semplici"
  - "identificatori di tipi [C++], elenco"
  - "widening di integer"
  - "estensione zero"
ms.assetid: 0d4b515a-4f68-4786-83cf-a5d43c7cb6f3
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Identificatori ed equivalenti di tipi di dati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa documentazione vengono utilizzati in genere i formati degli identificatori di tipo elencati nella tabella seguente anziché i formati estesi e si presuppone che il tipo `char` sia signed per impostazione predefinita.  Di conseguenza, in questa documentazione `char` equivale a **signed char**.  
  
### Identificatori di tipo ed elementi equivalenti  
  
|Identificatore di tipo|Elemento o elementi equivalenti|  
|----------------------------|-------------------------------------|  
|**signed char**1|`char`|  
|**signed int**|**signed**, `int`|  
|**signed short int**|**short**, `signed short`|  
|**signed long int**|**long**, **signed long**|  
|`unsigned char`|—|  
|`unsigned int`|`unsigned`|  
|**unsigned short int**|**unsigned short**|  
|**unsigned long int**|`unsigned long`|  
|**float**|—|  
|`long double`2|—|  
  
 1   Quando si crea il tipo `char` unsigned per impostazione predefinita \(specificando l'opzione del compilatore \/J\), non è possibile abbreviare **signed char** come `char`.  
  
 2   In sistemi operativi a 32 bit il compilatore C Microsoft esegue il mapping di **long double** al tipo **double**.  
  
 **Sezione specifica Microsoft**  
  
 È possibile specificare l'opzione del compilatore \/J per modificare il tipo predefinito `char` da signed a unsigned.  Quando viene applicata questa opzione, `char` equivale a `unsigned char`ed è necessario utilizzare la parola chiave **signed** per dichiarare un valore di carattere con segno.  Se un valore `char` viene dichiarato esplicitamente, l'opzione \/J non ha effetto e il valore assume la forma con segno quando esteso a un tipo `int`.  Il tipo `char` viene esteso in base a zero quando esteso al tipo `int`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Identificatori di tipi C](../c-language/c-type-specifiers.md)