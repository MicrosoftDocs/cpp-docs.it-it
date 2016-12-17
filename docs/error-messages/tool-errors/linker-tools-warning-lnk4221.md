---
title: "Avviso degli strumenti del linker LNK4221 | Microsoft Docs"
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
  - "LNK4221"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4221"
ms.assetid: 8e2eb2de-9532-4b85-908a-8c9ff5c4cccb
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4221
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo file oggetto non definisce simboli pubblici precedentemente non definiti, quindi non verrà utilizzato dalle operazioni di collegamento che utilizzano questa libreria  
  
 Si considerino i due frammenti di codice seguenti.  
  
```  
// a.cpp  
#include <atlbase.h>  
```  
  
```  
// b.cpp  
#include <atlbase.h>  
int function()  
{  
   return 0;  
}  
  
```  
  
 Per compilare i file e creare due file oggetto, eseguire **cl \/c a.cpp b.cpp** al prompt dei comandi.  Se si effettua il collegamento ai file oggetto eseguendo **link \/lib \/out:test.lib a.obj b.obj**, si riceverà l'avviso LNK4221.  Se si effettua il collegamento agli oggetti eseguendo **link \/lib \/out:test.lib b.obj a.obj**, non si riceverà alcun avviso.  
  
 Nel secondo scenario non viene emesso alcun avviso perché il linker funziona in modalità LIFO \(Last In First Out\).  Nel primo scenario, b.obj viene elaborato prima di a.obj, il quale non ha nuovi simboli da aggiungere.  Indicando al linker di elaborare a.obj per primo, è possibile evitare l'avviso.  
  
 L'errore si verifica comunemente quando due file di origine specificano l'opzione [\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md) con lo stesso nome del file di intestazione specificato nel campo **Intestazione precompilata**.  Una causa comune di questo problema riguarda stdafx.h in quanto, per impostazione predefinita, stdafx.cpp include stdafx.h e non aggiunge nuovi simboli.  Se un altro file di origine include stdafx.h con **\/Yc** e il file con estensione obj associato viene elaborato prima di stdafx.obj, il linker genererà LNK4221.  
  
 Un modo per risolvere il problema è assicurarsi che per ogni intestazione precompilata ci sia un solo file di origine che la include con **\/Yc**.  Tutti gli altri file di origine devono utilizzare intestazioni precompilate.  Per ulteriori informazioni sulla modifica di questa impostazione, vedere [\/Yu \(Utilizza il file di intestazione precompilato\)](../../build/reference/yu-use-precompiled-header-file.md).