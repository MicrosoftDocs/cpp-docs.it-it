---
title: Strumenti del linker LNK4247 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: error-reference
f1_keywords:
- LNK4247
dev_langs:
- C++
helpviewer_keywords:
- LNK4247
ms.assetid: 085d7fdf-9eaf-4641-8473-6eaadd073c7b
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 517605993199942f863faa78e14a022529214a64
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4247"></a>Avviso degli strumenti del linker LNK4247
punto di ingresso 'voce nome_funzione_decorato' esiste già un attributo thread; 'attribute' ignorata  
  
 Un punto di ingresso specificato con [/ENTRY (simbolo del punto di ingresso)](../../build/reference/entry-entry-point-symbol.md), ha un attributo threading, ma [/CLRTHREADATTRIBUTE (Set CLR Thread Attribute)](../../build/reference/clrthreadattribute-set-clr-thread-attribute.md) è stato specificato anche con un modello di threading diverso.  
  
 Il valore specificato con /CLRTHREADATTRIBUTE ignorati dal linker.  
  
 Per risolvere il problema:  
  
-   Rimuovere /CLRTHREADATTRIBUTE dalla compilazione.  
  
-   Rimuovere l'attributo dal file del codice sorgente.  
  
-   Rimuovere sia l'attributo di origine e /CLRTHREADATTRIBUTE dalla compilazione e accettare il modello di threading CLR predefinito.  
  
-   Modificare il valore passato a /CLRTHREADATTRIBUTE in modo che coincidono con l'attributo di origine.  
  
-   Modificare l'attributo di origine, in modo che coincidono con il valore passato a /CLRTHREADATTRIBUTE.  
  
 L'esempio seguente genera l'errore LNK4247  
  
```  
// LNK4247.cpp  
// compile with: /clr /c  
// post-build command: link /CLRTHREADATTRIBUTE:STA LNK4247.obj /entry:functionTitle /SUBSYSTEM:Console  
 [System::MTAThreadAttribute]  
void functionTitle (){}  
```