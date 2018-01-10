---
title: Errore del compilatore C2001 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2001
dev_langs: C++
helpviewer_keywords: C2001
ms.assetid: 0c3a7821-d8e5-4398-ab5a-4116d46e8dda
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1c23e188db9e811122102259f5fa93733d29f00f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2001"></a>Errore del compilatore C2001
nuova riga nella costante  
  
 Una costante di stringa non può continuare sulla seconda riga, a meno che eseguire le operazioni seguenti:  
  
-   Terminare la prima riga con una barra rovesciata.  
  
-   Chiudere la stringa nella prima riga con un segno di virgolette doppie e aprire la stringa nella riga successiva con un altro segno di virgolette doppie.  
  
 Terminare la prima riga con \n non è sufficiente.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2001:  
  
```  
// C2001.cpp  
// C2001 expected  
#include <stdio.h>  
  
int main()  
{  
    printf_s("Hello,  
             world");  
    printf_s("Hello,\n  
             world");  
}  
```  
  
## <a name="example"></a>Esempio  
 Gli spazi all'inizio della riga successiva dopo un carattere di continuazione di riga sono inclusi nella costante di stringa. Nessuno degli esempi sopra riportati incorporare un carattere di nuova riga nella costante di stringa. È possibile incorporare un carattere di nuova riga, come illustrato di seguito:  
  
```  
// C2001b.cpp  
#include <stdio.h>  
  
int main()  
{  
    printf_s("Hello,\n\  
             world");  
  
    printf_s("Hello,\  
             \nworld");  
  
    printf_s("Hello,\n"  
             "world");  
  
    printf_s("Hello,"  
             "\nworld");  
  
    printf_s("Hello,"  
             " world");  
  
    printf_s("Hello,\  
             world");  
}  
```