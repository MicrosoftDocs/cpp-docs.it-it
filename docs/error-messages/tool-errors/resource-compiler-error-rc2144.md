---
title: "Errore del compilatore di risorse RC2144 | Microsoft Docs"
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
  - "RC2144"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2144"
ms.assetid: 1b3ff39a-92cd-4a04-b1a3-b1fa6a805813
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore di risorse RC2144
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

PRIMARY LANGUAGE ID non è un numero  
  
 PRIMARY LANGUAGE ID deve essere un ID di lingua in formato esadecimale.  Per un elenco di ID lingua validi, vedere [Stringhe relative a lingue e paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md) in *Riferimenti alla libreria di runtime*.  
  
 Questo errore può verificarsi anche se sono state aggiunte risorse ed eliminate dal File RC usando uno strumento.  Per risolvere questo problema, aprire il file RC in un editor di testo ed eliminare le risorse inutilizzate manualmente.