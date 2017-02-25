---
title: "Collegamento automatico della versione libreria MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "defaultlib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "collegamenti automatici [C++]"
  - "libreria predefinita in MFC"
  - "collegamento [C++]"
  - "collegamento [C++], automatico della versione della libreria MFC"
  - "collegamento [C++], di MFC"
  - "MFC (librerie), collegamento"
  - "MFC (librerie), versioni"
ms.assetid: 02af4a20-2034-4fce-b200-c2202c3c8311
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Collegamento automatico della versione libreria MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nelle versioni di MFC precedenti alla versione 3,0 \(prima di Visual C\+\+ versione 2,0\), è necessario specificare manualmente la versione corretta della libreria MFC nell'elenco di input delle librerie dal linker.  Con la versione di MFC 3,0 e successive, non è più necessario specificare manualmente la versione della libreria MFC.  Invece, i file di intestazione MFC determinano automaticamente la versione corretta della libreria MFC, in base a valori definiti con `#define`, ad esempio **\_DEBUG** o **\_UNICODE**.  I file di intestazione MFC aggiungono direttive **\/defaultlib** in base a cui il linker collega una versione specifica della libreria MFC.  
  
 Ad esempio, il frammento di codice seguente dal file di intestazione di AFX.H indica al linker di collegare la versione NAFXCW.LIB o NAFXCWD.LIB di MFC, in base a se si sta utilizzando la versione di debug di MFC:  
  
 `#ifndef _UNICODE`  
  
 `#ifdef _DEBUG`  
  
 `#pragma comment(lib, "nafxcwd.lib")`  
  
 `#else`  
  
 `#pragma comment(lib, "nafxcw.lib")`  
  
 `#endif`  
  
 `#else`  
  
 `#ifdef _DEBUG`  
  
 `#pragma comment(lib, "uafxcwd.lib")`  
  
 `#else`  
  
 `#pragma comment(lib, "uafxcw.lib")`  
  
 `#endif`  
  
 `#endif`  
  
 I file di intestazione MFC collegano anche tutte le librerie richieste, incluse le librerie MFC, le librerie Win32, le librerie OLE, le librerie OLE costruite dagli esempi, le librerie ODBC, e così via.  Le librerie Win32 includono Kernel32.Lib, User32.Lib e GDI32.Lib.  
  
## Vedere anche  
 [Versioni di librerie MFC](../mfc/mfc-library-versions.md)