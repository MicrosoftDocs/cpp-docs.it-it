---
title: "&lt; codecvt &gt; | Microsoft Docs"
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
  - "codecvt"
  - "std::<codecvt>"
  - "std.<codecvt>"
  - "<codecvt>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt (intestazione)"
ms.assetid: d44ee229-00d5-4761-9b48-0c702122789d
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt; codecvt &gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce diverse classi di modello che descrivono gli oggetti basati su una classe modello [codecvt](../standard-library/codecvt-class.md). Questi oggetti possono essere utilizzato come [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) che controllano le conversioni tra una sequenza di valori di tipo `Elem` e una sequenza di valori di tipo `char`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <codecvt>  
  
```  
  
## <a name="remarks"></a>Note  
 Il facet delle impostazioni locali dichiarati in questa intestazione la conversione tra codifiche di caratteri diversi. Per i caratteri wide (archiviati all'interno del programma in numeri interi di dimensioni fisse):  
  
-   UCS-4 è Unicode (ISO 10646) all'interno del programma  
  
-   UCS-4 è Unicode (ISO 10646) all'interno del programma come intero a 32 bit.  
  
-   UCS-2 è Unicode all'interno del programma  
  
-   UCS-2 è Unicode all'interno del programma come valore integer a 16 bit.  
  
-   UTF-16 è Unicode all'interno del programma come uno  
  
-   UTF-16 è Unicode all'interno del programma come uno o due valori integer a 16 bit. (Si noti che questo non soddisfa tutti i requisiti di una codifica di caratteri wide valida per Standard C o C++ Standard. Tuttavia viene ampiamente utilizzato come tale.)  
  
 Per i flussi di byte (archiviati in un file, come una sequenza di byte trasmessi o archiviati all'interno del programma in una matrice di `char`):  
  
-   UTF-8 è Unicode  
  
-   UTF-8 è codificato all'interno di un flusso di byte come uno o più byte di otto bit a un ordine deterministico byte Unicode.  
  
-   UTF-16LE è Unicode  
  
-   UTF-16LE è Unicode all'interno di un flusso di byte come UTF-16 con ogni valore integer a 16 bit prima visualizzata come due byte otto bit meno significativo.  
  
-   UTF-16BE è Unicode  
  
-   UTF-16BE è Unicode all'interno di un flusso di byte come UTF-16 con ogni valore integer a 16 bit presentati come due byte a 8 bit, byte più significativo per primi.  
  
### <a name="enumerations"></a>Enumerazioni  
  
|||  
|-|-|  
|[codecvt_mode](../Topic/%3Ccodecvt%3E%20enums.md#codecvt_mode_enumeration)|Specifica le informazioni di configurazione per i facet delle impostazioni locali.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[codecvt_utf8](../Topic/%3Ccodecvt%3E%20functions.md#codecvt_utf8)|Rappresenta un facet che esegue la conversione tra caratteri "wide" con codifica UCS-2 o UCS-4 e un flusso di byte codificati come UTF-8.|  
|[codecvt_utf8_utf16](%3Ccodecvt%3E%20functions.md#codecvt_utf8_utf16)|Rappresenta un facet che esegue la conversione tra caratteri "wide" codificato come UTF-16 e un flusso di byte codificati come UTF-8.|  
|[codecvt_utf16](../Topic/%3Ccodecvt%3E%20functions.md#codecvt_utf16)|Rappresenta un facet che esegue la conversione tra caratteri "wide" con codificata UCS-2 o UCS-4 e un flusso di byte codificati come UTF-16LE o UTF-16BE.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< codecvt>  
  
 **Spazio dei nomi:** stdt  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)




