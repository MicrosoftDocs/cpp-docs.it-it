---
title: "Avviso degli strumenti del linker LNK4247 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4247"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4247"
ms.assetid: 085d7fdf-9eaf-4641-8473-6eaadd073c7b
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4247
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il punto di ingresso 'nome\_funzione\_decorato' ha già un attributo thread; 'attributo' verrà ignorato  
  
 Un punto di ingresso specificato con [\/ENTRY \(Simbolo del punto di ingresso\)](../../build/reference/entry-entry-point-symbol.md) ha un attributo threading, ma è stato specificato anche [\/CLRTHREADATTRIBUTE \(Imposta l'attributo thread CLR\)](../../build/reference/clrthreadattribute-set-clr-thread-attribute.md) con un modello di threading diverso.  
  
 Il valore specificato con \/CLRTHREADATTRIBUTE è stato ignorato.  
  
 Per evitare di visualizzare l'avviso, effettuare le seguenti operazioni:  
  
-   Rimuovere \/CLRTHREADATTRIBUTE dalla compilazione.  
  
-   Rimuovere l'attributo dal file di codice sorgente.  
  
-   Rimuovere sia l'attributo dal codice sorgente che \/CLRTHREADATTRIBUTE dalla compilazione e accettare il modello di threading CLR predefinito.  
  
-   Modificare il valore passato a \/CLRTHREADATTRIBUTE in modo che concordi con l'attributo nel codice sorgente.  
  
-   Modificare l'attributo nel codice sorgente in modo che concordi con il valore passato a \/CLRTHREADATTRIBUTE.  
  
 Nell'esempio seguente viene generato l'errore LNK4247:  
  
```  
// LNK4247.cpp  
// compile with: /clr /c  
// post-build command: link /CLRTHREADATTRIBUTE:STA LNK4247.obj /entry:functionTitle /SUBSYSTEM:Console  
 [System::MTAThreadAttribute]  
void functionTitle (){}  
```