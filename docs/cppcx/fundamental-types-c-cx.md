---
title: "Tipi fondamentali (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: c9f82907-25f2-440b-91d6-afb8dbd46ea6
caps.latest.revision: 14
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 14
---
# Tipi fondamentali (C++/CX)
Oltre ai tipi incorporati C\+\+ standard, [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\) supporta il sistema di tipi definito dall'architettura [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] fornendo i typedef per i tipi fondamentali [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] che eseguono il mapping ai tipi C\+\+ standard.[!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] implementa i tipi booleani, char e numerici fondamentali. Questi typedef sono definiti nello spazio dei nomi `default`, che non deve mai essere specificato in modo esplicito. Inoltre, [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] fornisce wrapper e implementazioni concrete per determinati tipi e interfacce di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
## Tipi char e booleani  
 La tabella seguente elenca i tipi char e booleani e i relativi equivalenti C\+\+ standard.  
  
|Spazio dei nomi|Nome in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]|Definizione|Nome in C\+\+ standard|Intervallo di valori|  
|---------------------|--------------------------------------------------------------------------|-----------------|----------------------------|--------------------------|  
|Piattaforma|Booleano|Valore booleano a 8 bit.|bool|`true` \(diverso da zero\) e `false` \(zero\)|  
|default|char16|Valore non numerico a 16 bit che rappresenta un punto di codice Unicode \(UTF\-16\).|wchar\_t<br /><br /> \-oppure\-<br /><br /> L'c'|\(Specificato dallo standard Unicode\)|  
  
## Tipi numerici  
 La tabella seguente elenca i tipi numerici incorporati. I tipi numerici vengono dichiarati nello spazio dei nomi `default` e sono typedef per il corrispondente tipo incorporato C\+\+. Non tutti i tipi incorporati C\+\+ \(long, ad esempio\) sono supportati in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. Per coerenza e chiarezza, è consigliabile usare il nome di [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)].  
  
|Nome in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]|Definizione|Nome in C\+\+ standard|Intervallo di valori|  
|--------------------------------------------------------------------------|-----------------|----------------------------|--------------------------|  
|int8|Valore numerico con segno a 8 bit.|signed char|Da –128 a 127|  
|uint8|Valore numerico senza segno a 8 bit.|unsigned char|Da 0 a 255|  
|int16|Intero con segno a 16 bit.|short|Da –32.768 a 32.767|  
|uint16|Intero senza segno a 16 bit.|unsigned short|Da 0 a 65.535|  
|int32|Intero con segno a 32 bit.|int|Da –2.147.483.648 a 2.147.483.647|  
|uint32|Intero senza segno a 32 bit.|unsigned int|Da 0 a 4.294.967.295|  
|int64|Intero con segno a 64 bit.|long long \-oppure\- \_\_int64|Da –9.223.372.036.854.775.808 a 9.223.372.036.854.775.807|  
|uint64|Intero senza segno a 64 bit.|long long senza segno \-oppure\- \_\_int64 senza segno|Da 0 a 18.446.744.073.709.551.615|  
|float32|Numero a virgola mobile IEEE 754 a 32 bit.|float|3.4E \+\/\- 38 \(7 cifre\)|  
|float64|Numero a virgola mobile IEEE 754 a 64 bit.|double|1.7E \+\/\- 308 \(15 cifre\)|  
  
## Tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]  
 La tabella seguente elenca alcuni tipi aggiuntivi che sono definiti dall'architettura di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] e compilati in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]. Object e String sono tipi di riferimento. Gli altri sono tipi di valore. Tutti questi tipi vengono dichiarati nello spazio dei nomi `Platform`. Per un elenco completo, vedere [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md).  
  
|Nome|Definizione|  
|----------|-----------------|  
|Oggetto|Rappresenta qualsiasi tipo [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].|  
|String|Serie di caratteri che rappresenta un testo.|  
|Rect|Set di quattro numeri a virgola mobile che rappresentano la posizione e le dimensioni di un rettangolo.|  
|SizeT|Coppia ordinata di numeri a virgola mobile che specificano un'altezza e una larghezza.|  
|Punto|Coppia ordinata di coordinate x e y a virgola mobile, che definiscono un punto su un piano bidimensionale.|  
|Guid|Valore non numerico a 128 bit usato come identificatore univoco.|  
|UIntPtr|Solo per uso interno. Valore a 64 bit senza segno usato come puntatore.|  
|IntPtr|Solo per uso interno.  Valore a 64 bit con segno usato come puntatore.|  
  
## Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)