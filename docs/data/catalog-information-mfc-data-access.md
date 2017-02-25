---
title: "Informazioni del catalogo (accesso ai dati MFC) | Microsoft Docs"
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
  - "database di informazioni del catalogo [C++]"
  - "DAO [C++], informazioni del catalogo"
  - "database [C++], database di informazioni del catalogo"
  - "ODBC [C++], informazioni del catalogo"
  - "tabelle [C++]"
  - "tabelle [C++], informazioni del catalogo"
ms.assetid: c184e80f-ff17-409f-9df8-05275080bb8d
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Informazioni del catalogo (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le informazioni sulle tabelle in un'origine dati possono comprendere i nomi delle tabelle e le relative colonne, i privilegi di tabella, i nomi delle chiavi primarie ed esterne, le informazioni sulle query o sulle stored procedure predefinite, le informazioni sugli indici delle tabelle e le statistiche relative alle tabelle.  
  
 Per altre informazioni, vedere [Origine dati: determinazione dello schema dell'origine dati \(ODBC\)](../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md).  
  
> [!NOTE]
>  Nelle classi DAO MFC è possibile recuperare le informazioni sul catalogo usando [CDaoDatabase::GetTableDefCount](../Topic/CDaoDatabase::GetTableDefCount.md) e [CDaoDatabase::GetTableDefInfo](../Topic/CDaoDatabase::GetTableDefInfo.md) per enumerare le tabelle del database e ottenere informazioni su ogni tabella in una struttura [CDaoTableDefInfo](../mfc/reference/cdaotabledefinfo-structure.md).  
  
## Vedere anche  
 [Programmazione dell'accesso ai dati \(MFC\/ATL\)](../data/data-access-programming-mfc-atl.md)