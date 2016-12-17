---
title: "/RAWDATA | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/rawdata"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/RAWDATA (opzione dumpbin)"
  - "dati non elaborati"
  - "RAWDATA (opzione dumpbin)"
  - "-RAWDATA (opzione dumpbin)"
ms.assetid: 41cba845-5e1f-415e-9fe4-604a52235983
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /RAWDATA
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/RAWDATA[:{1|2|4|8|NONE[,number]]  
```  
  
## Note  
 Questa opzione consente di visualizzare il contenuto non elaborato di ciascuna sezione del file.  Mediante gli argomenti è possibile controllare il formato in cui vengono visualizzate le informazioni, come illustrato di seguito:  
  
|Argomento|Risultato|  
|---------------|---------------|  
|1|Valore predefinito.  Il contenuto viene visualizzato in byte esadecimali, nonché sotto forma di caratteri ASCII se è possibile ottenerne una rappresentazione stampata.|  
|2|Il contenuto viene visualizzato sotto forma di valori esadecimali a 2 byte.|  
|4|Il contenuto viene visualizzato sotto forma di valori esadecimali a 4 byte.|  
|8|Il contenuto viene visualizzato sotto forma di valori esadecimali a 8 byte.|  
|NONE|I dati non elaborati vengono soppressi.  Questo argomento è utile per controllare l'output di \/ALL.|  
|*Numero*|Per le righe visualizzate viene impostata una larghezza sufficiente a contenere un valore pari al parametro `number` per ciascuna riga.|  
  
 L'unica opzione di DUMPBIN utilizzabile sui file generati con l'opzione del compilatore [\/GL](../../build/reference/gl-whole-program-optimization.md) è [\/HEADERS](../../build/reference/headers.md).  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)