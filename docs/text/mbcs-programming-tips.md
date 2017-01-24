---
title: "Suggerimenti sulla programmazione MBCS | Microsoft Docs"
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
  - "_mbcs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set di caratteri [C++], multibyte"
  - "MBCS [C++], programmazione"
  - "caratteri multibyte [C++]"
  - "programmazione [C++], MBCS"
ms.assetid: d8ad36b8-917f-474e-8adb-69462adecd17
caps.latest.revision: 8
caps.handback.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Suggerimenti sulla programmazione MBCS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In un nuovo sviluppo, è consigliabile utilizzare la codifica dei caratteri Unicode per tutte le stringhe che gli utenti finali potrebbero vedere.  Il formato MBCS è una tecnologia legacy che è stata sostituita da Unicode.  In questa sezione vengono forniti suggerimenti per gli sviluppatori che devono mantenere programmi esistenti che utilizzano il formato MBCS e dove non vi è possibilità di conversione in Unicode.  Le indicazioni riguardano sia le applicazioni MFC che le applicazioni scritte senza MFC.  Gli argomenti trattati includono  
  
-   [Suggerimenti generali sulla programmazione MBCS](../text/general-mbcs-programming-advice.md)  
  
-   [Incremento e decremento dei puntatori](../text/incrementing-and-decrementing-pointers.md)  
  
-   [Indici di vettori di byte](../text/byte-indices.md)  
  
-   [Ultimo carattere di una stringa](../text/last-character-in-a-string.md)  
  
-   [Assegnazione di caratteri](../text/character-assignment.md)  
  
-   [Confronto tra caratteri](../text/character-comparison.md)  
  
-   [Overflow del buffer](../text/buffer-overflow.md)  
  
## Vedere anche  
 [Supporto per set di caratteri multibyte \(MBCS, Multibyte Character Set\)](../text/support-for-multibyte-character-sets-mbcss.md)